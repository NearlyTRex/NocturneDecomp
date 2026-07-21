// Name: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_00490920
// Address: 00490920
// Address Range: [[00490920, 0049097d]]
// Convention: unknown
// Signature: int engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_00490920(int param_1,byte *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

int engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_00490920(int param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int local_14;
  
  iVar3 = 0;
  local_14 = 0;
  if (0 < param_4) {
    do {
      iVar1 = 0;
      pbVar2 = param_2;
      if (0 < param_3) {
        do {
          if ((uint)*pbVar2 != *(uint *)(param_1 + 0x3188)) {
            local_14 = iVar3 + 1;
            break;
          }
          iVar1 = iVar1 + 1;
          pbVar2 = pbVar2 + 1;
        } while (iVar1 < param_3);
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + param_5;
    } while (iVar3 < param_4);
  }
  return local_14;
}
