// Name: core_passngr.cpp_CPassenger_renderOpaque_FUN_005460c0
// Address: 005460c0
// Address Range: [[005460c0, 0054618d]]
// Convention: __cdecl
// Signature: int __cdecl core_passngr_cpp_CPassenger_renderOpaque_FUN_005460c0(CPassenger *this_ptr)

#include "nocturne.h"

int __cdecl core_passngr_cpp_CPassenger_renderOpaque_FUN_005460c0(CPassenger *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if ((this_ptr->morph_time <= 1.0) && ((this_ptr->base).base.field2_0x240c == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      if (ABS(this_ptr->morph_time) != 0.0) {
        core_morph_cpp_FUN_0052b600();
        core_morph_cpp_FUN_0052b600();
        core_morph_cpp_CMorphModel_FUN_0052bae0((CMorphModel *)(this_ptr->unk + 100));
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
        return iVar1;
      }
      core_charactr_cpp_CCharacter_FUN_00429aa0((CCharacter *)this_ptr);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
