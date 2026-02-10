// Name: core_stranger.cpp_CStranger_FUN_005c6590
// Address: 005c6590
// Address Range: [[005c6590, 005c664d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6590(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6590(CStranger *this_ptr)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  float fVar2;
  bool bVar3;
  CCharacter *this_ptr_01;
  undefined3 extraout_var;
  float in_stack_00000008;
  
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    (*((this_ptr_00->vtable)._ub)->process)(this_ptr_00,in_stack_00000008);
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (this_ptr->weapon,g_CDynamiteClassInfo.name_hash);
    if (this_ptr_01 != (CCharacter *)0x0) {
      bVar3 = core_dynamite_cpp_CDynamite_FUN_0049cf90((CDynamite *)this_ptr_01);
      if (CONCAT31(extraout_var,bVar3) != 0) {
        (this_ptr_01->model).transformed_vertices[0x51].z = 0.0;
        (this_ptr_01->model).transformed_vertices[0x51].y =
             (this_ptr_01->model).transformed_vertices[0x51].z;
        (this_ptr_01->model).transformed_vertices[0x51].x =
             (this_ptr_01->model).transformed_vertices[0x51].y;
        (*(((this_ptr_01->base).vtable._uc)->_uc).isGrabbable)(this_ptr_01);
        this_ptr->weapon = (CDemonActor *)0x0;
        (this_ptr->base).base.layer_action_index = 0;
        fVar2 = 10.0f;
        (this_ptr->base).base.layer_action_t = 0.0;
        iVar1 = this_ptr->action_pending;
        *(float *)(this_ptr->unk1 + 0xc) = fVar2;
        if (iVar1 == 3) {
          this_ptr->action_pending = 0;
          return;
        }
      }
    }
  }
  return;
}
