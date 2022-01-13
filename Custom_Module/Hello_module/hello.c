/*kernal header*/
#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>


/*Kernal Code*/
static int hello_init(void)
{
	printk( "Hello Kernel....!!! Grind is On\n");
	return 0;
}

static void hello_exit(void)
{
	printk("I am dead my boyyyyyyyyyyyyy!!!!!!!!!\n");
}

/*Registration*/
module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SATVIK SHARMA");
MODULE_DESCRIPTION("HELLO TO LINUX KERNEL");
//MODULE_INFO("RPI AND RASPIAN");


