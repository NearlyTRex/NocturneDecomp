// Name: cockpit_ckptutil.c_FUN_00438ef0
// Address: 00438ef0
// Address Range: [[00438ef0, 00439038]]
// Convention: __cdecl
// Signature: void * __cdecl cockpit_ckptutil_c_FUN_00438ef0(char *filename,void *buffer,int size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl cockpit_ckptutil_c_FUN_00438ef0(char *filename,void *buffer,int size)

{
  int iVar1;
  char local_8c [80];
  CInStreamFile local_3c;
  
  if (buffer == (void *)0x0) {
    buffer = malloc(size);
    if (buffer == (void *)0x0) {
      _sprintf(local_8c,"Unable to allocate %u bytes for bitmap file (%s).");
      _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
      _DAT_01d71de4 = 0x98b;
      core_main_c_FUN_004e4330(local_8c);
    }
  }
  support_trstream_cpp_CInStreamFile_ctor_FUN_005738c0(&local_3c);
  iVar1 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                    (&local_3c,&DAT_005b8ed8,filename,1);
  if (iVar1 == 0) {
    _sprintf(local_8c,"Unable to open bitmap file (%s).");
    _DAT_01d71de4 = 0x994;
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_004e4330(local_8c);
  }
  iVar1 = support_trstream_cpp_CInStreamFile_read_FUN_00573c00(&local_3c,buffer,size);
  if (iVar1 != size) {
    _sprintf(local_8c,"Unable to read bitmap file (%s).");
    support_trstream_cpp_CInStreamFile_close_FUN_00573db0(&local_3c);
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d71de4 = 0x99c;
    core_main_c_FUN_004e4330(local_8c);
  }
  support_trstream_cpp_CInStreamFile_close_FUN_00573db0(&local_3c);
  support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&local_3c,0);
  return buffer;
}
