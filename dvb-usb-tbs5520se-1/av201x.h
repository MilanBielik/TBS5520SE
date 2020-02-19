/*
 * AV201x Airoha Technology silicon tuner driver
 *
 * Copyright (C) 2014 Luis Alves <ljalvs@gmail.com>
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License along
 *    with this program; if not, write to the Free Software Foundation, Inc.,
 *    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef AV201X_H
#define AV201X_H

#include <media/dvb_frontend.h>

#define AV201X_CHIPTYPE_AV2011 0
#define AV201X_CHIPTYPE_AV2012 1
#define AV201X_CHIPTYPE_AV2018 2

struct av201x_config {
	/*
	 * frontend
	 */
	struct dvb_frontend *fe;
	int chiptype;
	/* crystal freq in kHz */
	u32 xtal_freq;
};

#endif
