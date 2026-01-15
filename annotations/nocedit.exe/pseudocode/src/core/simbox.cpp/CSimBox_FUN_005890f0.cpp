// Name: core_simbox.cpp_CSimBox_FUN_005890f0
// Address: 005890f0
// Address Range: [[005890f0, 00589155]]
// Convention: __cdecl
// Signature: int core_simbox.cpp_CSimBox_FUN_005890f0(CSimBox * this_ptr)

#include "nocturne.h"

int __cdecl core_simbox_cpp_CSimBox_FUN_005890f0(CSimBox *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)this_ptr->field1_0x158,0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return iVar1;
}
