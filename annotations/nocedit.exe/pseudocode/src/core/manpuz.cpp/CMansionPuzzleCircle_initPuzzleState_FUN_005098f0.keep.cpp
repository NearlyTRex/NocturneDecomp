// Name: core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_005098f0
// Address: 005098f0
// MANUAL RECONSTRUCTION
// Address Range: [[005098f0, 00509b1a]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_005098f0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_005098f0(CMansionPuzzleCircle *this_ptr)

{
  int iVar1;
  SGem *out_r;
  int iVar5;
  float fVar1;

  for (iVar5 = 0; iVar5 < 0xc; iVar5 = iVar5 + 1) {
    this_ptr->panels[iVar5].anim_progress = 0.0;
    this_ptr->panels[iVar5].anim_speed = 0.0;
    this_ptr->panels[iVar5].color.r = 0;
    this_ptr->panels[iVar5].color.g = 0;
    this_ptr->panels[iVar5].color.b = 0;
    this_ptr->panels[iVar5].exists = 1;
    this_ptr->laser_color_r[iVar5] = 0;
    this_ptr->laser_color_g[iVar5] = 0;
    this_ptr->laser_color_b[iVar5] = 0;
    this_ptr->laser_intensity[iVar5] = 0;
  }
  this_ptr->panels[0].color.b = 0xff;
  iVar1 = this_ptr->panels[0].color.b;
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
  this_ptr->panels[0].color.r = iVar1;
  iVar5 = 0;
  this_ptr->laser_color_r[0] = this_ptr->laser_color_b[0];
  this_ptr->laser_color_r[0xb] = 0xff;
  do {
    out_r = this_ptr->gems + iVar5;
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_0050a420
              (this_ptr,iVar5,&this_ptr->gems[iVar5].color.r,&this_ptr->gems[iVar5].color.g,
               &this_ptr->gems[iVar5].color.b);
    (out_r->hum_color).b = 0.0;
    iVar5 = iVar5 + 1;
    (out_r->light).b = 0.0;
    fVar1 = (out_r->light).b;
    (out_r->hum_color).g = (out_r->hum_color).b;
    (out_r->light).g = fVar1;
    (out_r->hum_color).r = (out_r->hum_color).g;
    (out_r->light).r = fVar1;
  } while (iVar5 < 0xc);
  this_ptr->reflectors[0].panel_index = 1;
  this_ptr->reflectors[1].interp_factor = 0.0;
  this_ptr->reflectors[1].panel_index = 0xb;
  this_ptr->reflectors[0].interp_factor = 0.0;
  return;
}
