// Name: core_lever.cpp_CLever_ctor_FUN_005047d0
// Address: 005047d0
// Address Range: [[005047d0, 00504891]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_005047d0(CLever *this_ptr)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_005047d0(CLever *this_ptr)

{
  CLever *pCVar1;
  CLever_ptr_344 this_ptr_00;
  
  pCVar1 = (CLever *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  core_event_cpp_CRuleList_clear_FUN_004b1670(&ADJ(this_ptr_00)->rule);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CLeverVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"glever.kfm");
  ADJ(this_ptr_00)->lever_type = LEVER_TYPE_GROUND;
  ADJ(this_ptr_00)->on_event[0] = '\0';
  ADJ(this_ptr_00)->off_event[0] = '\0';
  ADJ(this_ptr_00)->sound[0] = '\0';
  ADJ(this_ptr_00)->param = 0.0;
  ADJ(this_ptr_00)->momentary_flag = 1;
  ADJ(this_ptr_00)->linked_lever = 0;
  ADJ(this_ptr_00)->end_vertex_index = 0x17;
  ADJ(this_ptr_00)->moving = 0;
  ADJ(this_ptr_00)->move_to_pct = 0.0;
  ADJ(this_ptr_00)->allowed_sides = 2;
  ADJ(this_ptr_00)->enable_collision = 1;
  return ADJ(this_ptr_00);
}
