// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_005098f0
// Address: 005098f0
// Address Range: [[005098f0, 00509b1a]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_005098f0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_005098f0(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  CMansionPuzzleCircle *pCVar2;
  CMansionPuzzleCircle *pCVar3;
  CMansionPuzzleCircle *pCVar4;
  int iVar5;
  int iVar6;
  
  pCVar2 = this_ptr;
  pCVar4 = this_ptr;
  do {
    pCVar4->panels[0].anim_progress = 0.0;
    pCVar4->panels[0].anim_speed = 0.0;
    pCVar4->panels[0].color.r = 0;
    pCVar4->panels[0].color.g = 0;
    pCVar4->panels[0].color.b = 0;
    pCVar3 = (CMansionPuzzleCircle *)((pCVar2->base).actor_name + 4);
    pCVar4->panels[0].exists = 1;
    pCVar2->laser_color_r[0] = 0;
    pCVar2->laser_color_g[0] = 0;
    pCVar2->laser_color_b[0] = 0;
    pCVar4 = (CMansionPuzzleCircle *)&(pCVar4->base).health;
    pCVar2->laser_intensity[0] = 0;
    pCVar2 = pCVar3;
  } while (pCVar3 != (CMansionPuzzleCircle *)&(this_ptr->base).orient);
  this_ptr->panels[0].color.b = 0xff;
  iVar5 = this_ptr->panels[0].color.b;
  this_ptr->panels[1].color.r = 0xff;
  this_ptr->panels[2].color.r = 0xff;
  this_ptr->panels[3].exists = 0;
  this_ptr->panels[4].color.r = 0xff;
  this_ptr->panels[5].color.b = 0xff;
  this_ptr->panels[6].exists = 0;
  this_ptr->panels[7].color.r = 0xff;
  this_ptr->panels[8].color.b = 0xff;
  this_ptr->panels[9].color.r = 0xff;
  this_ptr->panels[10].color.b = 0xff;
  this_ptr->panels[0xb].color.b = 0xff;
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
  this_ptr->panels[0].color.r = iVar5;
  this_ptr->laser_color_r[0] = this_ptr->laser_color_b[0];
  this_ptr->laser_color_r[0xb] = 0xff;
  iVar5 = 0;
  do {
    core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a420(this_ptr);
    this_ptr->gems[iVar5].hum_color.b = 0.0;
    iVar6 = iVar5 + 1;
    this_ptr->gems[iVar5].light.b = 0.0;
    fVar1 = this_ptr->gems[iVar5].light.b;
    this_ptr->gems[iVar5].hum_color.g = this_ptr->gems[iVar5].hum_color.b;
    this_ptr->gems[iVar5].light.g = fVar1;
    this_ptr->gems[iVar5].hum_color.r = this_ptr->gems[iVar5].hum_color.g;
    this_ptr->gems[iVar5].light.r = fVar1;
    iVar5 = iVar6;
  } while (iVar6 < 0xc);
  this_ptr->reflectors[0].panel_index = 1;
  this_ptr->reflectors[1].interp_factor = 0.0;
  this_ptr->reflectors[1].panel_index = 0xb;
  this_ptr->reflectors[0].interp_factor = 0.0;
  return;
}
