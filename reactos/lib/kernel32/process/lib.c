/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS system libraries
 * FILE:            lib/kernel32/proc/proc.c
 * PURPOSE:         Process functions
 * PROGRAMMER:      Ariadne ( ariadne@xs4all.nl)
 * UPDATE HISTORY:
 *                  Created 01/11/98
 */

/* INCLUDES ****************************************************************/

#define UNICODE
#include <windows.h>
#include <kernel32/proc.h>
#include <kernel32/thread.h>
#include <wchar.h>
#include <string.h>
#include <internal/i386/segment.h>
#include <internal/teb.h>

#include <kernel32/kernel32.h>

/* FUNCTIONS ****************************************************************/

HINSTANCE LoadLibraryW(LPCWSTR lpLibFileName)
{
   dprintf("LoadLibraryW is unimplemented\n");
}

HINSTANCE LoadLibraryA(LPCSTR lpLibFileName)
{
   dprintf("LoadLibraryA is unimplemented\n");
}

BOOL STDCALL FreeLibrary(HMODULE hLibModule)
{
   dprintf("FreeLibrary is unimplemented\n");
}
