/* vim:fdm=marker ts=4 et ai
 * {{{
 *
 * (c) by Alexander Neumann <alexander@bumpern.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * For more information on the GPL, please go to:
 * http://www.gnu.org/copyleft/gpl.html
 }}} */

#ifndef ECMD_STATE_H
#define ECMD_STATE_H

#include "../uip/psock.h"
#include "../pt/pt.h"

#define ECMD_INPUTBUF_LENGTH 80
#define ECMD_OUTPUTBUF_LENGTH 80

struct ecmd_connection_state_t {
    char inbuf[ECMD_INPUTBUF_LENGTH];
    uint8_t in_len;
    char outbuf[ECMD_OUTPUTBUF_LENGTH];
    uint8_t out_len;
    struct pt thread;
};

#endif