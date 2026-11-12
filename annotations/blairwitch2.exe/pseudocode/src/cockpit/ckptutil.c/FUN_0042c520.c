// Name: cockpit_ckptutil.c_FUN_0042c520
// Address: 0042c520
// Address Range: [[0042c520, 0042c666]]
// Convention: __cdecl
// Signature: void * __cdecl cockpit_ckptutil_c_FUN_0042c520(char *filename,void *buffer,int size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl cockpit_ckptutil_c_FUN_0042c520(char *filename,void *buffer,int size)

{
  int iVar1;
  char local_88 [80];
  CInStreamFile local_38;
  
  if (buffer == (void *)0x0) {
    buffer = malloc(size);
    if (buffer == (uint *)0x0) {
      _sprintf(local_88,"@Unable to allocate %u bytes for bitmap file (%s)." + 1);
      _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
      _DAT_01d046a4 = 0xe8;
      core_main_c_FUN_004e4500(local_88);
    }
  }
  support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_38);
  iVar1 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                    (&local_38,&DAT_005cd38e,filename);
  if (iVar1 == 0) {
    _sprintf(local_88,"Unable to open bitmap file (%s).");
    _DAT_01d046a4 = 0xf1;
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_004e4500(local_88);
  }
  iVar1 = support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0(&local_38,buffer,size);
  if (iVar1 != size) {
    _sprintf(local_88,"Unable to read bitmap file (%s).");
    support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_38);
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d046a4 = 0xf9;
    core_main_c_FUN_004e4500(local_88);
  }
  support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_38);
  support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_38,0);
  return buffer;
}
