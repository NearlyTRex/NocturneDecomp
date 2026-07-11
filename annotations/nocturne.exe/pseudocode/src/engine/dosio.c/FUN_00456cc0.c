// Name: FUN_00456cc0
// Address: 00456cc0
// Address Range: [[00456cc0, 00456d3f]]
// Convention: unknown
// Signature: undefined4 FUN_00456cc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00456cc0(int param_1)

{
  BOOL BVar1;
  _WIN32_FIND_DATAA _Stack_148;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    _DAT_01cc4800 = "..\\engine\\dosio.c";
    _DAT_01cc4804 = 0x1c7;
    FUN_004c8440("CFileFinder::open - search not opened!");
  }
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x110),&_Stack_148);
  if (BVar1 != 0) {
    FUN_00456d90(param_1,&_Stack_148);
    return 1;
  }
  FUN_00456d80(param_1);
  return 0;
}
