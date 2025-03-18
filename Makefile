obj-m += ./src/module.o 
 
PWD := $(CURDIR) 
KDIR = /lib/modules/$(shell uname -r)/build 
 
all: 
	$(MAKE) -C ${KDIR} M=$(PWD) modules

clean:
	$(MAKE) -C ${KDIR} M=$(PWD) clean

