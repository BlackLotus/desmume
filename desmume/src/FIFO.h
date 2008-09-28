/*  Copyright (C) 2006 yopyop
    yopyop156@ifrance.com
    yopyop156.ifrance.com

	Copyright (C) 2007 shash

    This file is part of DeSmuME

    DeSmuME is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    DeSmuME is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DeSmuME; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef FIFO_H
#define FIFO_H

#include "types.h"

typedef struct
{
	BOOL	error;
	BOOL	enable;	

	BOOL	empty;
	BOOL	half;
	BOOL	full;
	u8		irq;

	u8		sendPos;
	u8		recvPos;

	u32		buf[0x8000];
} FIFO;

extern void FIFOclear(FIFO * fifo);
extern void FIFOadd(FIFO * fifo, u32 val);
extern u32 FIFOget(FIFO * fifo);

#endif
