obj-m +=hello.o

#KDIR = /lib/modules/$(uname -r)/build 

all:
#	make -C $(KDIR) M=$(shell pwd) modules
	make -C /lib/modules/$$(uname -r)/build/ M=$(PWD) modules


clean:
#	make -C $(KDIR) M=$(shell pwd) clean 
	make -C /lib/modules/$$(uname -r)/build/ M=$(PWD) clean

