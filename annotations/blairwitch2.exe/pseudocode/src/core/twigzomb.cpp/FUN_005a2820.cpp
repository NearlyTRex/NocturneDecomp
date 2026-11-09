// Name: core_twigzomb.cpp_FUN_005a2820
// Address: 005a2820
// Address Range: [[005a2820, 005a2895]]
// Convention: unknown
// Signature: void core_twigzomb_cpp_FUN_005a2820(int param_1)

#include "nocturne.h"

void core_twigzomb_cpp_FUN_005a2820(int param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  unkafter_basicene_cpp_FUN_0059e6a0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Finger0",1);
  *(int *)(param_1 + 0x11854) = iVar1;
  *(uint *)(param_1 + 0x11850) = *(uint *)(&this_ptr->field_0x1d21c + iVar1 * 0x24);
  iVar1 = _strcmp((char *)(param_1 + 0x2514),"SM_TWIG.DFM");
  if (iVar1 != 0) {
    return;
  }
  *(uint *)(param_1 + 0x11388) = 6;
  return;
}
