1.Run following command to install kernel source tree that builds are make your .ko file-
  apt-get install raspberrypi-kernel-headers

2. Run 
   ls /lib/modules/$(uname -r)/build
   if above command run correctly no need to do step 3

3. After installing kernel header or kernel source tree I got a mismatch in my raspiankernel version and my  
   Kernel source tree version that is resolved by following below mentioned steps


    git clone -b https://github.com/raspberrypi/linux.git
    git clone  https://github.com/raspberrypi/linux.git
    cd linux/
    grep "CONFIG_LOCALVERSION" -inr
    sudo apt install libncurses5-dev
    sudo apt install git bc bison flex libssl-dev make
    KERNEL=kernel8
    make bcm2711_defconfig
    vim .config 
    grep "CONFIG_LOCALVERSION" -inr
    make -j4 Image modules dtbs
    sudo make modules_install
    sudo cp arch/arm64/boot/dts/broadcom/*.dtb /boot/
    sudo cp arch/arm64/boot/dts/overlays/*.dtb* /boot/overlays/
    sudo cp arch/arm64/boot/dts/overlays/README /boot/overlays/
    sudo cp arch/arm64/boot/Image /boot/$KERNEL.img

4. write your c code (sample present in helloworld folder)
5. build using Makefile (sample present in hello world folder)
6. run lsmod to see active deveices in the kernel
7. run insmod <file_name>.ko to load the module as a device in the kernel
8. Run dmesg to see the kernel logs
9. Run rmmod <file_name> to remove the module and check wih lsmod

