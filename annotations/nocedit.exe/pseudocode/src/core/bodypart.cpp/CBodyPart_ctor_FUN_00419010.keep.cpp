// Name: core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
// Address: 00419010
// MANUAL RECONSTRUCTION
// Address Range: [[00419010, 00419126]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(CBodyPart *this_ptr)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(CBodyPart *this_ptr)

{
  CBodyPart *pCVar1;
  CBodyPart_ptr_656 pvVar1;
  CBodyPart_ptr_1872 pvVar2;
  CBodyPart_ptr_3276 pCVar2;
  
  pCVar1 = (CBodyPart *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar1 = __arrinit(pCVar1->attached_models,3,&g_SBodyPartModelTypeInfo);
  pvVar2 = __arrinit(ADJ(pvVar1)->fires,2,&g_SBodyPartFireTypeInfo);
  pCVar2 = core_box_cpp_CBox_ctor_FUN_0041dc50(&ADJ(pvVar2)->physics_box);
  ADJ(pCVar2)->base.vtable._ub = &g_CBodyPartVTable;
  ADJ(pCVar2)->carried_by_actor = (CDemonActor *)0x0;
  ADJ(pCVar2)->vertex_count = 0;
  ADJ(pCVar2)->vertices = (CVector3i *)0x0;
  ADJ(pCVar2)->normals = (CVector3i *)0x0;
  ADJ(pCVar2)->tri_count = 0;
  ADJ(pCVar2)->faces = (SMRGLPrimitiveTriangle *)0x0;
  ADJ(pCVar2)->face_texture_indices = (int *)0x0;
  ADJ(pCVar2)->texture_count = 0;
  ADJ(pCVar2)->render_in_background = 0;
  memset(&ADJ(pCVar2)->initial_velocity, 0, sizeof(ADJ(pCVar2)->initial_velocity));
  ADJ(pCVar2)->fire_count = 0;
  ADJ(pCVar2)->attached_model_count = 0;
  ADJ(pCVar2)->physics_timer = 5.0;
  ADJ(pCVar2)->blood_type = 0;
  ADJ(pCVar2)->render_alpha = 0xffff;
  ADJ(pCVar2)->is_visible = 0;
  ADJ(pCVar2)->dont_pick_me_up = 0;
  ADJ(pCVar2)->fire_time_remaining = 0;
  return ADJ(pCVar2);
}
