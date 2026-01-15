// Name: crt_io.c_realpath_FUN_00601140
// Address: 00601140
// Address Range: [[00601140, 006011ff]]
// Convention: __cdecl
// Signature: char * crt_io.c_realpath_FUN_00601140(char * buffer, char * path, SIZE_T buffer_size)

#include "nocturne.h"

char * __cdecl crt_io_c_realpath_FUN_00601140(char *buffer,char *path,SIZE_T buffer_size)

{
  char *pcVar1;
  int iVar2;
  DWORD DVar3;
  char (*unaff_EBP) [4];
  LPSTR pCStack_14;
  
  if (buffer == (char *)0x0) {
    buffer_size = 0x104;
    buffer = crt_memory_c_malloc_FUN_00601bb0(0x104);
    unaff_EBP = (char (*) [4])buffer;
    if ((char (*) [4])buffer == (char (*) [4])0x0) {
      crt_errno_c_setErrno_FUN_00602790(5);
      return (char *)0x0;
    }
  }
  if ((path != (char *)0x0) && (*path != '\0')) {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(path,"con");
    if (iVar2 == 0) {
      if (buffer_size < 4) {
        crt_memory_c_free_FUN_00601cd0(unaff_EBP);
        crt_errno_c_setErrno_FUN_00602790(0xe);
        return (char *)0x0;
      }
      *(char (*) [4])buffer = "con";
    }
    else {
      DVar3 = (*PTR_GetFullPathNameA_006115a0)(path,buffer_size,buffer,&pCStack_14);
      if (DVar3 == 0) {
        crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return (char *)0x0;
      }
    }
    return buffer;
  }
  pcVar1 = crt_io_c_getcwd_FUN_00608d20(buffer,buffer_size);
  return pcVar1;
}
