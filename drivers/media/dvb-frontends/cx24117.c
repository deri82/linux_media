/*
    Conexant cx24117/cx24132 - Dual DVBS/S2 Satellite demod/tuner driver

    Copyright (C) 2013 Luis Alves <ljalvs@gmail.com>
	July, 6th 2013
	    First release based on cx24116 driver by:
	    Steven Toth and Georg Acher, Darron Broad, Igor Liplianin
            Cards currently using this demod/tuner:
		TBS6981 - Dual DVBS/S2 PCIe card

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include <linux/slab.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/firmware.h>

#include "dvb_frontend.h"
#include "cx24117.h"

static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Activates frontend debugging (default:0)");

#define dprintk(args...) \
	do { \
		if (debug) \
			printk(KERN_INFO "cx24117: " args); \
	} while (0)



struct dvb_frontend *cx24117_attach(const struct cx24117_config *config,
	struct i2c_adapter *i2c, int demod)
{

	return 0;
}


MODULE_DESCRIPTION("DVB Frontend module for Conexant cx24117/cx24132 hardware");
MODULE_AUTHOR("Luis Alves");
MODULE_LICENSE("GPL");

