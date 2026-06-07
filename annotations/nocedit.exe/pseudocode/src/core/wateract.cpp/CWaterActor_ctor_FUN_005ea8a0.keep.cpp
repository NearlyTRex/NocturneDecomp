// Name: core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0
// Address: 005ea8a0
// MANUAL RECONSTRUCTION
// Address Range: [[005ea8a0, 005ea9e5]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_005ea8a0(CWaterActor *this_ptr)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_005ea8a0(CWaterActor *this_ptr)

{
  int iVar2;
  CWaterActor *pCVar2;
  CWaterActor_ptr_668 pvVar2;
  
  pCVar2 = (CWaterActor *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar2 = __arrinit(pCVar2->vertices,1000,&g_SWaterVertexTypeInfo);
  ADJ(pvVar2)->base.vtable._ub = &g_CWaterActorVTable;
  (ADJ(pvVar2)->size).x = 4.0;
  (ADJ(pvVar2)->size).y = 0.1;
  (ADJ(pvVar2)->size).z = 4.0;
  ADJ(pvVar2)->opacity = 0x8000;
  ADJ(pvVar2)->texture_frame = 0;
  ADJ(pvVar2)->texture_anim_accum = 0;
  ADJ(pvVar2)->base.is_transparent = 1;
  ADJ(pvVar2)->base.is_renderable = 0;
  ADJ(pvVar2)->time_to_move = 1.0;
  ADJ(pvVar2)->time_to_move_down = 1.0;
  ADJ(pvVar2)->height_delta = 0.0;
  ADJ(pvVar2)->param = 0.0;
  ADJ(pvVar2)->move_sound[0] = '\0';
  ADJ(pvVar2)->move_down_sound[0] = '\0';
  strcpy(ADJ(pvVar2)->move_event,"none");
  strcpy(ADJ(pvVar2)->move_down_event,"none");
  ADJ(pvVar2)->state = 0;
  ADJ(pvVar2)->patch_size = 1.0;
  ADJ(pvVar2)->round_flag = 0;
  (ADJ(pvVar2)->color).b = 0xff;
  iVar2 = (ADJ(pvVar2)->color).b;
  (ADJ(pvVar2)->color).g = iVar2;
  (ADJ(pvVar2)->color).r = iVar2;
  return ADJ(pvVar2);
}
