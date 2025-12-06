// Name: shape_design.c_configureFullPassPolygonReduction_FUN_00465810
// Address: 00465810
// Address Range: [[00465810, 004658db]]
// Convention: __cdecl
// Signature: void shape_design.c_configureFullPassPolygonReduction_FUN_00465810(int ui_mode)

#include "nocturne.h"

void __cdecl shape_design_c_configureFullPassPolygonReduction_FUN_00465810(int ui_mode)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  double dVar5;
  char *in_stack_ffffff94;
  int local_18;
  float local_14;
  
  bVar4 = 0;
  local_18 = 0;
  if (ui_mode < 1) {
    in_stack_ffffff94 = (char *)((uint)in_stack_ffffff94 & 0xffffff00);
  }
  else {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff94,0x14,0,0,"Enter tolerance angle [8.5] : ");
  }
  local_14 = 8.5;
  iVar2 = -1;
  pcVar3 = &stack0xffffff94;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    dVar5 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff94);
    local_14 = (float)dVar5;
  }
  if (0 < ui_mode) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff94,0x14,0,0x16,"Ignore different part names? [y] : ");
    iVar2 = crt_ctype_c_toupper_FUN_005ff9e0((uint)in_stack_ffffff94 & 0xff);
    if (iVar2 == 0x4e) {
      local_18 = 1;
    }
  }
  shape_design_c_optimizePolygonMesh_FUN_004658e0(local_14,local_18,ui_mode);
  return;
}
