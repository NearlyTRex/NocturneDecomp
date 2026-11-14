// Name: engine_palette.cpp_FUN_00510d50
// Address: 00510d50
// Address Range: [[00510d50, 00510db3]]
// Convention: unknown
// Signature: void engine_palette_cpp_FUN_00510d50(int *param_1)

#include "nocturne.h"

void engine_palette_cpp_FUN_00510d50(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  engine_mini3d_cpp_lockFrame_FUN_004f23d0();
  iVar6 = 0;
  if (0 < *param_1) {
    piVar5 = param_1;
    piVar7 = param_1 + 0xc9;
    do {
      piVar2 = piVar5 + 0x1a2d;
      piVar3 = piVar5 + 0x19c9;
      piVar4 = piVar5 + 0x65;
      piVar1 = piVar5 + 1;
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + 1;
      (**(code **)(param_1[0x1a91] + 4))(param_1,piVar7,*piVar1,*piVar4,*piVar3,*piVar2);
      piVar7 = piVar7 + 0x40;
    } while (iVar6 < *param_1);
  }
  engine_mini3d_cpp_unlockFrame_FUN_004f23e0();
  *param_1 = 0;
  return;
}
