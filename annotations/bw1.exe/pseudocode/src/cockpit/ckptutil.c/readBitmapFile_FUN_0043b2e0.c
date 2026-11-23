// Name: cockpit_ckptutil.c_readBitmapFile_FUN_0043b2e0
// Address: 0043b2e0
// Address Range: [[0043b2e0, 0043b428]]
// Convention: __cdecl
// Signature: void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_0043b2e0(char *filename,void *buffer,int size)

#include "nocturne.h"

void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_0043b2e0(char *filename,void *buffer,int size)

{
  int iVar1;
  char local_8c [80];
  CInStreamFile local_3c;
  
  if (buffer == (void *)0x0) {
    buffer = malloc(size);
    if (buffer == (void *)0x0) {
      _sprintf(local_8c,"Unable to allocate %u bytes for bitmap file (%s).");
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 2443;
      core_main_c_displayErrorAndQuit_FUN_005030e0(local_8c);
    }
  }
  support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_3c);
  iVar1 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                    (&local_3c,"art",filename,1);
  if (iVar1 == 0) {
    _sprintf(local_8c,"Unable to open bitmap file (%s).");
    g_CurrentLineNumber = 2452;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_005030e0(local_8c);
  }
  iVar1 = support_trstream_cpp_CInStreamFile_read_FUN_005a0c10(&local_3c,buffer,size);
  if (iVar1 != size) {
    _sprintf(local_8c,"Unable to read bitmap file (%s).");
    support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_3c);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 2460;
    core_main_c_displayErrorAndQuit_FUN_005030e0(local_8c);
  }
  support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_3c);
  support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
  return buffer;
}
