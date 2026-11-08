// Name: FUN_004793e0
// Address: 004793e0
// Address Range: [[004793e0, 0047945f]]
// Convention: unknown
// Signature: undefined4 FUN_004793e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004793e0(int param_1)

{
  BOOL BVar1;
  _WIN32_FIND_DATAA _Stack_148;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    _DAT_01d1d400 = "..\\engine\\dosio.c";
    _DAT_01d1d404 = 0x28e;
    FUN_005030e0("CFileFinder::open - search not opened!");
  }
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x110),&_Stack_148);
  if (BVar1 != 0) {
    FUN_004794b0(param_1,&_Stack_148);
    return 1;
  }
  FUN_004794a0(param_1);
  return 0;
}
