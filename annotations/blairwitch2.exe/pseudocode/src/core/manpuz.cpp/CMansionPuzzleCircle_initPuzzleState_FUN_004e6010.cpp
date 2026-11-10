// Name: core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004e6010
// Address: 004e6010
// Address Range: [[004e6010, 004e623a]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004e6010(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004e6010(CMansionPuzzleCircle *this_ptr)

{
  uint uVar1;
  CMansionPuzzleCircle *pCVar2;
  CMansionPuzzleCircle *pCVar3;
  CMansionPuzzleCircle *pCVar4;
  SGem *out_r;
  float *out_b;
  int panel_index;
  float *out_g;
  int in_stack_00000018;
  
  pCVar2 = this_ptr;
  pCVar4 = this_ptr;
  do {
    *(uint *)&pCVar4->panels[0].field_0x4 = 0;
    *(uint *)&pCVar4->panels[0].field_0x8 = 0;
    *(uint *)&pCVar4->panels[0].field_0x4c = 0;
    *(uint *)&pCVar4->panels[0].field_0x50 = 0;
    *(uint *)&pCVar4->panels[0].field_0x54 = 0;
    pCVar3 = (CMansionPuzzleCircle *)((pCVar2->base).actor_name + 4);
    *(uint *)pCVar4->panels = 1;
    pCVar2->laser_color_r[0] = 0;
    pCVar2->laser_color_g[0] = 0;
    pCVar2->laser_color_b[0] = 0;
    pCVar4 = (CMansionPuzzleCircle *)&(pCVar4->base).health;
    pCVar2->laser_intensity[0] = 0;
    pCVar2 = pCVar3;
  } while (pCVar3 != (CMansionPuzzleCircle *)&(this_ptr->base).orient);
  *(uint *)&this_ptr->panels[0].field_0x54 = 0xff;
  uVar1 = *(uint *)&this_ptr->panels[0].field_0x54;
  *(uint *)&this_ptr->panels[1].field_0x4c = 0xff;
  *(uint *)&this_ptr->panels[2].field_0x4c = 0xff;
  *(uint *)(this_ptr->panels + 3) = 0;
  *(uint *)&this_ptr->panels[4].field_0x4c = 0xff;
  *(uint *)&this_ptr->panels[5].field_0x54 = 0xff;
  *(uint *)(this_ptr->panels + 6) = 0;
  *(uint *)&this_ptr->panels[7].field_0x4c = 0xff;
  *(uint *)&this_ptr->panels[8].field_0x54 = 0xff;
  *(uint *)&this_ptr->panels[9].field_0x4c = 0xff;
  *(uint *)&this_ptr->panels[10].field_0x54 = 0xff;
  *(uint *)&this_ptr->panels[0xb].field_0x54 = 0xff;
  this_ptr->laser_color_b[0] = 0xff;
  this_ptr->laser_color_b[1] = 0xff;
  this_ptr->laser_color_r[2] = 0xff;
  this_ptr->laser_color_r[3] = 0xff;
  this_ptr->laser_color_b[4] = 0xff;
  this_ptr->laser_color_r[5] = 0xff;
  this_ptr->laser_color_r[6] = 0xff;
  this_ptr->laser_color_b[7] = 0xff;
  this_ptr->laser_color_b[8] = 0xff;
  this_ptr->laser_color_b[9] = 0xff;
  this_ptr->laser_color_r[10] = 0xff;
  *(uint *)&this_ptr->panels[0].field_0x4c = uVar1;
  panel_index = 0;
  this_ptr->laser_color_r[0] = this_ptr->laser_color_b[0];
  this_ptr->laser_color_r[0xb] = 0xff;
  out_b = (float *)&this_ptr->gems[0].field_0x8;
  out_g = (float *)&this_ptr->gems[0].field_0x4;
  do {
    out_r = this_ptr->gems + panel_index;
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50
              (this_ptr,panel_index,(float *)out_r,out_g,out_b);
    *(uint *)&out_r->field_0x14 = 0;
    panel_index = panel_index + 1;
    *(uint *)&out_r->field_0x20 = 0;
    *(uint *)&out_r->field_0x10 = *(uint *)&out_r->field_0x14;
    *(uint *)&out_r->field_0x1c = *(uint *)&out_r->field_0x20;
    *(uint *)&out_r->field_0xc = *(uint *)&out_r->field_0x10;
    *(uint *)&out_r->field_0x18 = *(uint *)&out_r->field_0x20;
    out_b = out_b + 0x2e;
    out_g = out_g + 0x2e;
  } while (panel_index < 0xc);
  *(uint *)(in_stack_00000018 + 0x14f8) = 1;
  *(uint *)(in_stack_00000018 + 0x1514) = 0;
  *(uint *)(in_stack_00000018 + 0x1558) = 0xb;
  *(uint *)(in_stack_00000018 + 0x14b4) = 0;
  return;
}
