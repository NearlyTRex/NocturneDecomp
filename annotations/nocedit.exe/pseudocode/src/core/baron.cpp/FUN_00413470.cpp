// Name: core_baron.cpp_FUN_00413470
// Address: 00413470
// Address Range: [[00413470, 0041359b]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_FUN_00413470(int param_1,CDemonActor *param_2)

#include "nocturne.h"

void __cdecl core_baron_cpp_FUN_00413470(int param_1,CDemonActor *param_2)

{
  CCharacter *this_ptr;
  CVector3f *pCVar1;
  int iVar2;
  CVector3f CStack_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((((param_2 != (CDemonActor *)0x0) && (param_2 != *(CDemonActor **)(param_1 + 0x1fcac))) &&
      (*(CDemonActor **)(param_1 + 0x1fcac) == (CDemonActor *)0x0)) &&
     ((this_ptr = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (param_2,g_CCharacterClassInfo.name_hash), this_ptr == (CCharacter *)0x0
      || (iVar2 = (*(((this_ptr->base).vtable._uc)->_uc).isDamageable)(this_ptr), iVar2 < 1)))) {
    *(CDemonActor **)(param_1 + 0x1fcac) = param_2;
    local_18 = 0.0;
    local_14 = 0.0;
    pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (*(CDemonActor **)(param_1 + 0x1fcac),&CStack_30,(CVector3f *)&local_18);
    iVar2 = *(int *)(param_1 + 0x1fcac);
    local_24 = *(float *)(iVar2 + 0x20) + pCVar1->x;
    local_20 = *(float *)(iVar2 + 0x24) + pCVar1->y;
    local_1c = *(float *)(iVar2 + 0x28) + pCVar1->z;
    *(float *)(param_1 + 0x20) = local_24;
    *(float *)(param_1 + 0x24) = local_20;
    *(float *)(param_1 + 0x28) = local_1c;
    iVar2 = *(int *)(param_1 + 0x1fcac);
    if ((uint *)(param_1 + 0x30) != (uint *)(iVar2 + 0x30)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(iVar2 + 0x30);
      *(uint *)(param_1 + 0x34) = *(uint *)(iVar2 + 0x34);
      *(uint *)(param_1 + 0x38) = *(uint *)(iVar2 + 0x38);
    }
    memset((void *)(param_1 + 0xbe2c),0,0x2c);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(param_1 + 0x158),6,1);
    *(uint *)(param_1 + 0x1fccc) = 1;
    *(uint *)(param_1 + 0x1fcd0) = 0;
    return;
  }
  return;
}
