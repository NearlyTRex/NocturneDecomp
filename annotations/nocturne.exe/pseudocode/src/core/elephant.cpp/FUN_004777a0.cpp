// Name: core_elephant.cpp_FUN_004777a0
// Address: 004777a0
// Address Range: [[004777a0, 00477889]]
// Convention: unknown
// Signature: void core_elephant_cpp_FUN_004777a0(CWeapon *param_1,undefined4 param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_elephant_cpp_FUN_004777a0(CWeapon *param_1,uint param_2,float param_3)

{
  CWeapon *pCVar1;
  CVector3f *input_local_point;
  CVector3f CStack_1c;
  
  if (*(int *)(param_1[1].base.actor_name + 4) != 0) {
    _DAT_01c762f4 = 1;
    input_local_point =
         (CVector3f *)(*((param_1->base).vtable._ub)->initializeInEditor)(&param_1->base);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (&param_1->base,&CStack_1c,input_local_point);
    _DAT_01c762fc = 0;
    if (&stack0x00000000 != (byte *)0x1c74760) {
      _DAT_01c74744 = CStack_1c.x;
      _DAT_01c74748 = CStack_1c.y;
      _DAT_01c7474c = CStack_1c.z;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
              ((CMatrix3x3f *)&DAT_01c74750,&(param_1->base).orient.vec);
    _DAT_01c74740 = *(uint *)(param_1[1].base.actor_name + 8);
    _DAT_01c74778 = 0x42e00000;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
              ((CDemonLight *)&DAT_01c74640,1.0);
    _DAT_01c76310 = 0;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(0x01E57284,(CDemonLight *)&DAT_01c74640);
  }
  pCVar1 = param_1 + 1;
  (pCVar1->base).actor_name[4] = '\0';
  (pCVar1->base).actor_name[5] = '\0';
  (pCVar1->base).actor_name[6] = '\0';
  (pCVar1->base).actor_name[7] = '\0';
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_3);
  return;
}
