// Name: FUN_00460ed0
// Address: 00460ed0
// Address Range: [[00460ed0, 00460f4f]]
// Convention: unknown
// Signature: undefined4 FUN_00460ed0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00460ed0(int param_1)

{
  BOOL BVar1;
  _WIN32_FIND_DATAA _Stack_148;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    _DAT_01d046a0 = "..\\engine\\dosio.c";
    _DAT_01d046a4 = 0x28e;
    FUN_004e4500("CFileFinder::open - search not opened!");
  }
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x110),&_Stack_148);
  if (BVar1 != 0) {
    FUN_00460fa0(param_1,&_Stack_148);
    return 1;
  }
  FUN_00460f90(param_1);
  return 0;
}
