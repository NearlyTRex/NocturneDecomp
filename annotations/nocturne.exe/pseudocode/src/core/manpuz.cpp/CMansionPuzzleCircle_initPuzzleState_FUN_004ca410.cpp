// Name: core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004ca410
// Address: 004ca410
// Address Range: [[004ca410, 004ca63a]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004ca410(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004ca410(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  CMansionPuzzleCircle *pCVar2;
  CMansionPuzzleCircle *pCVar3;
  CMansionPuzzleCircle *pCVar4;
  SGem *out_r;
  float *out_b;
  int iVar5;
  float *out_g;
  
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
  iVar5 = 0;
  this_ptr->laser_color_r[0] = this_ptr->laser_color_b[0];
  this_ptr->laser_color_r[0xb] = 0xff;
  out_b = &this_ptr->gems[0].color.b;
  out_g = &this_ptr->gems[0].color.g;
  do {
    out_r = this_ptr->gems + iVar5;
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20
              (this_ptr,iVar5,(float *)out_r,out_g,out_b);
    (out_r->hum_color).b = 0.0;
    iVar5 = iVar5 + 1;
    (out_r->light).b = 0.0;
    fVar1 = (out_r->light).b;
    (out_r->hum_color).g = (out_r->hum_color).b;
    (out_r->light).g = fVar1;
    (out_r->hum_color).r = (out_r->hum_color).g;
    (out_r->light).r = fVar1;
    out_b = out_b + 0x2e;
    out_g = out_g + 0x2e;
  } while (iVar5 < 0xc);
  this_ptr->reflectors[0].panel_index = 1;
  this_ptr->reflectors[1].interp_factor = 0.0;
  this_ptr->reflectors[1].panel_index = 0xb;
  this_ptr->reflectors[0].interp_factor = 0.0;
  return;
}
