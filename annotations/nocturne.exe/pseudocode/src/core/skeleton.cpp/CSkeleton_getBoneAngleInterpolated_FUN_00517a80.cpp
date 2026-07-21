// Name: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
// Address: 00517a80
// Address Range: [[00517a80, 00517b0f]]
// Convention: __stack5_esi
// Signature: undefined4 * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5 ,undefined4 *param_6)

#include "nocturne.h"

uint * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80(uint param_1,uint param_2,uint param_3,uint param_4,float param_5 ,uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_180c [1520];
  
  bVar4 = 0;
  uVar2 = param_3;
  if ((param_5 <= 0.0) || (uVar2 = param_4, 1.0 <= param_5)) {
    puVar1 = (uint *)
             core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60(param_1,param_2,uVar2);
  }
  else {
    uVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
                      (param_1,param_2,param_4,param_5);
    uVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
                      (param_1,param_2,param_3,uVar2);
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0(uVar2);
    puVar1 = (uint *)&stack0xffffffe0;
  }
  puVar3 = puVar1 + (uint)bVar4 * -2 + 1;
  uVar2 = *puVar1;
  *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8) = *puVar3;
  *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar3[(uint)bVar4 * -2 + 1];
  *(uint *)
   ((int)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  puVar1 = param_6 + (uint)bVar4 * -2 + 1;
  *param_6 = uVar2;
  *puVar1 = *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8);
  puVar1[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  (puVar1 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  return param_6;
}
