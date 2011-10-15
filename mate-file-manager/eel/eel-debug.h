/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*-

   eel-debug.h: Eel debugging aids.

   Copyright (C) 2000, 2001 Eazel, Inc.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this program; if not, write to the
   Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.

   Author: Darin Adler <darin@eazel.com>
*/

#ifndef EEL_DEBUG_H
#define EEL_DEBUG_H

#include <glib.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (* EelFunction) (void);

void eel_stop_in_debugger                             (void);
void eel_make_warnings_and_criticals_stop_in_debugger (void);
int  eel_get_available_file_descriptor_count          (void);

/* A way to do cleanup at exit for compatibility with shutdown tools
 * like the ones in MateComponent.
 */
void eel_debug_shut_down                              (void);
void eel_debug_call_at_shutdown                       (EelFunction function);
void eel_debug_call_at_shutdown_with_data             (GFreeFunc   function,
						       gpointer    data);

G_END_DECLS

#endif /* EEL_DEBUG_H */
