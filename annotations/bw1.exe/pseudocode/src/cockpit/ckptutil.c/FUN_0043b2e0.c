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
  byte local_8c [80];
  CInStreamFile local_3c;
  
  if (buffer == (void *)0x0) {
    buffer = FUN_005c08d0(size);
    if (buffer == (void *)0x0) {
      FUN_005bfb40(local_8c,"Unable to allocate %u bytes for bitmap file (%s).",size,filename);
      _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
      _DAT_01d1d404 = 0x98b;
      core_main_c_FUN_005030e0(local_8c);
    }
  }
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_3c);
  iVar1 = support_trstream_cpp_FUN_005a0fd0(&local_3c,&DAT_005d6668,filename,1);
  if (iVar1 == 0) {
    FUN_005bfb40(local_8c,"Unable to open bitmap file (%s).",filename);
    _DAT_01d1d404 = 0x994;
    _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_005030e0(local_8c);
  }
  iVar1 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_3c,buffer,size);
  if (iVar1 != size) {
    FUN_005bfb40(local_8c,"Unable to read bitmap file (%s).",filename);
    unkaddr_0059f520_cpp_FUN_005a0dc0(&local_3c);
    _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
    _DAT_01d1d404 = 0x99c;
    core_main_c_FUN_005030e0(local_8c);
  }
  unkaddr_0059f520_cpp_FUN_005a0dc0(&local_3c);
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
  return buffer;
}
