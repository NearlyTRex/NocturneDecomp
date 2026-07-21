// Name: wincore_windll.cpp_CExternalRenderer_validate_FUN_00532df0
// Address: 00532df0
// Address Range: [[00532df0, 00532f26]]
// Convention: __cdecl
// Signature: bool __cdecl wincore_windll_cpp_CExternalRenderer_validate_FUN_00532df0(int param_1,int param_2)

#include "nocturne.h"

bool __cdecl wincore_windll_cpp_CExternalRenderer_validate_FUN_00532df0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  bVar3 = param_2 == 0;
  if (param_2 != 0) {
    if ((*(short *)(param_1 + 0x204) == *(short *)(param_2 + 0x204)) ||
       (*(short *)(param_1 + 0x204) == -1)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3 != false) && ((~*(uint *)(param_1 + 0x208) & *(uint *)(param_2 + 0x208)) != 0)) {
      return false;
    }
    if (bVar3 != false) {
      if (*(short *)(param_2 + 0x200) != 0) {
        bVar3 = *(int *)(param_1 + 0x1fe) >> 0x18 == *(int *)(param_2 + 0x1fe) >> 0x18;
      }
      if ((bVar3 != false) && (*(short *)(param_2 + 0x202) != 0)) {
        bVar3 = *(int *)(param_1 + 0x200) >> 0x18 == *(int *)(param_2 + 0x200) >> 0x18;
      }
    }
    if ((bVar3 != false) && (*(char *)(param_2 + 0x100) != '\0')) {
      iVar2 = _strcmp(param_2 + 0x100,param_1 + 0x100);
      bVar3 = iVar2 == 0;
    }
    if (bVar3 != false) {
      if (*(int *)(param_1 + 0x20c) != 0x10) {
        return false;
      }
      iVar2 = 0;
      if (bVar3 != false) {
        do {
          piVar1 = (int *)(param_1 + 0x210);
          param_1 = param_1 + 4;
          bVar4 = *(int *)(param_2 + 0x210) == *piVar1;
          param_2 = param_2 + 4;
          iVar2 = iVar2 + 1;
          if (0xf < iVar2) {
            return bVar4;
          }
          bVar3 = false;
        } while (bVar4);
      }
    }
  }
  return bVar3;
}
