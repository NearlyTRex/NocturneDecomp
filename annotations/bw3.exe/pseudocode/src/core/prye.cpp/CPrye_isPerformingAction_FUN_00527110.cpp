// Name: core_prye.cpp_CPrye_isPerformingAction_FUN_00527110
// Address: 00527110
// Address Range: [[00527110, 00527197]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_isPerformingAction_FUN_00527110(CPrye *this_ptr)

#include "nocturne.h"

int __cdecl core_prye_cpp_CPrye_isPerformingAction_FUN_00527110(CPrye *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                    (&this_ptr_00->base,0x2a);
  if (fVar1 <= 0.0) {
    fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                      (&this_ptr_00->base,0x2b);
    if (fVar1 <= 0.0) {
      iVar2 = core_motion_cpp_CMotionController_getStateIndex_FUN_004fc0c0(&this_ptr_00->base);
      if (iVar2 != 0x2a) {
        iVar2 = core_motion_cpp_CMotionController_getStateIndex_FUN_004fc0c0(&this_ptr_00->base);
        if (((iVar2 != 0x2b) && ((this_ptr->base).action_pending != 5)) &&
           ((this_ptr->base).door_to_open == (CDoor *)0x0)) {
          return 0;
        }
      }
    }
  }
  return 1;
}
