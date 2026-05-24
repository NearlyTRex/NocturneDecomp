// Name: core_curtain.cpp_CCurtain_ctor_FUN_004496a0
// Address: 004496a0
// MANUAL RECONSTRUCTION
// Address Range: [[004496a0, 00449801]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_004496a0(CCurtain *this_ptr)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_004496a0(CCurtain *this_ptr)

{
  CCurtain *pCVar2;
  CCurtain_ptr_520 pvVar2;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CCurtain *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar2 = __arrinit(pCVar2->vertices,1000,&g_SCurtainVertexTypeInfo);
  ADJ(pvVar2)->base.vtable._ub = &g_CCurtainVTable;
  pcVar2 = "SGLASS.RAW";
  (ADJ(pvVar2)->curtain_size).x = 4.0;
  (ADJ(pvVar2)->curtain_size).y = 4.0;
  pcVar3 = (ADJ(pvVar2)->curtain_texture).texture_name;
  (ADJ(pvVar2)->curtain_size).z = 0.1;
  strcpy(pcVar3,pcVar2);
  (ADJ(pvVar2)->curtain_texture).base.count = 0;
  (ADJ(pvVar2)->curtain_texture).base.type = 0xd;
  ADJ(pvVar2)->opacity = 0x8000;
  ADJ(pvVar2)->cinched_top = 1;
  ADJ(pvVar2)->cinched_bottom = 0;
  ADJ(pvVar2)->cinched_right = 0;
  pcVar2 = "none";
  ADJ(pvVar2)->cinched_left = 0;
  pcVar3 = ADJ(pvVar2)->let_go_event;
  ADJ(pvVar2)->falling = 0;
  strcpy(pcVar3,pcVar2);
  ADJ(pvVar2)->weight = 1.0;
  ADJ(pvVar2)->dampen = 0.95;
  ADJ(pvVar2)->spring = 0.0;
  ADJ(pvVar2)->friction = 0.5;
  ADJ(pvVar2)->gravity = 32.0;
  ADJ(pvVar2)->hit_floor = 0;
  ADJ(pvVar2)->is_visible = 0;
  ADJ(pvVar2)->simulate_me = 1;
  ADJ(pvVar2)->patch_size = 0.5;
  ADJ(pvVar2)->block_virtual_director_flag = 1;
  ADJ(pvVar2)->needs_update = 0;
  return ADJ(pvVar2);
}
