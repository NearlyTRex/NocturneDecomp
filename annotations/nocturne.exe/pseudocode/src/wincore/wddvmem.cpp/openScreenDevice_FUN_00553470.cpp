// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_00553470
// Address: 00553470
// Address Range: [[00553470, 0055351f]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_00553470(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_00553470(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_74 [4];
  int iStack_64;
  
  if ((_DAT_02ddf56c == 0) && (_DAT_01c02594 == 0)) {
    memset(local_74,0,0x6c);
    iVar3 = 0;
    local_74[0] = 0x6c;
    iVar1 = (**(code **)(*_DAT_02ddf558 + 100))(_DAT_02ddf558,0,local_74,1);
    if (iVar1 != 0) {
      g_CHAR_PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
      g_INT_01cc4804 = 0x255;
      core_main_c_FUN_004c8440("openScreenDevice - Unable to lock screen!");
    }
    if (0 < DAT_005b7620) {
      iVar1 = DAT_005b7620 * 4;
      iVar2 = 0;
      do {
        *(int *)(&DAT_01bd2fa0 + iVar2) = iStack_64;
        iVar2 = iVar2 + 4;
        iStack_64 = iStack_64 + iVar3;
      } while (iVar2 < iVar1);
      return;
    }
  }
  return;
}
