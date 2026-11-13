// Name: cockpit_ckptutil.c_FUN_0043b2e0
// Address: 0043b2e0
// Address Range: [[0043b2e0, 0043b428]]
// Convention: __cdecl
// Signature: void * __cdecl cockpit_ckptutil_c_FUN_0043b2e0(char *filename,void *buffer,int size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl cockpit_ckptutil_c_FUN_0043b2e0(char *filename,void *buffer,int size)

{
  int iVar1;
  char local_8c [80];
  CInStreamFile local_3c;
  
  if (buffer == (void *)0x0) {
    buffer = malloc(size);
    if (buffer == (void *)0x0) {
      _sprintf(local_8c,"Unable to allocate %u bytes for bitmap file (%s).");
      _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
      _DAT_01d1d404 = 0x98b;
      core_main_c_FUN_005030e0(local_8c);
    }
  }
  support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_3c);
  iVar1 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                    (&local_3c,&DAT_005d6668,filename,1);
  if (iVar1 == 0) {
    _sprintf(local_8c,"Unable to open bitmap file (%s).");
    _DAT_01d1d404 = 0x994;
    _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_005030e0(local_8c);
  }
  iVar1 = support_trstream_cpp_CInStreamFile_read_FUN_005a0c10(&local_3c,buffer,size);
  if (iVar1 != size) {
    _sprintf(local_8c,"Unable to read bitmap file (%s).");
    support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_3c);
    _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
    _DAT_01d1d404 = 0x99c;
    core_main_c_FUN_005030e0(local_8c);
  }
  support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_3c);
  support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
  return buffer;
}
