// Name: shape_design.c_configureFullPassPolygonReduction_FUN_00465810
// Address: 00465810
// Address Range: [[00465810, 004658db]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_configureFullPassPolygonReduction_FUN_00465810(int ui_mode)

#include "nocturne.h"

void __cdecl shape_design_c_configureFullPassPolygonReduction_FUN_00465810(int ui_mode)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  double dVar5;
  byte local_6c [80];
  int local_1c;
  int local_18;
  float local_14;
  byte bVar1;
  
  bVar4 = 0;
  local_18 = 0;
  if (ui_mode < 1) {
    local_6c[0] = 0;
  }
  else {
    engine_special_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              ((char *)local_6c,0x14,0,0,"Enter tolerance angle [8.5] : ");
  }
  local_14 = 8.5;
  iVar2 = -1;
  pbVar3 = local_6c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pbVar3 = pbVar3 + (uint)bVar4 * -2 + 1;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3;
  } while (bVar1 != 0);
  if (iVar2 != -2) {
    dVar5 = _strtod((char *)local_6c);
    local_14 = (float)dVar5;
  }
  if (0 < ui_mode) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              ((char *)local_6c,0x14,0,0x16,"Ignore different part names? [y] : ");
    iVar1 = toupper((uint)local_6c[0]);
    if (iVar1 == 0x4e) {
      local_18 = 1;
    }
  }
  shape_design_c_optimizePolygonMesh_FUN_004658e0(local_14,local_18,ui_mode);
  return;
}
