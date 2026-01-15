// Name: core_baron.cpp_FUN_00413470
// Address: 00413470
// Address Range: [[00413470, 0041359b]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_00413470()

#include "nocturne.h"

/* Signature: byte actors_hero_baron.cpp_FUN_00413470(uint param_1, uint param_2)
    */

void core_baron_cpp_FUN_00413470(void)

{
  CDemonActor *this_ptr;
  CVector3f *pCVar1;
  int iVar2;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  SCollisionInfo *in_stack_ffffffcc;
  CVector3f CStack_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((((in_stack_00000008 != (CDemonActor *)0x0) &&
       (in_stack_00000008 != *(CDemonActor **)(in_stack_00000004 + 0x1fcac))) &&
      (*(CDemonActor **)(in_stack_00000004 + 0x1fcac) == (CDemonActor *)0x0)) &&
     ((this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                            (in_stack_00000008,g_CCharacterClassInfo.name_hash),
      this_ptr == (CDemonActor *)0x0 ||
      (iVar2 = (*this_ptr->vtable[1].hasCollision)(this_ptr,in_stack_ffffffcc), iVar2 < 1)))) {
    *(CDemonActor **)(in_stack_00000004 + 0x1fcac) = in_stack_00000008;
    local_14 = 0.0;
    pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (*(CDemonActor **)(in_stack_00000004 + 0x1fcac),&CStack_2c,
                        (CVector3f *)&local_14);
    iVar2 = *(int *)(in_stack_00000004 + 0x1fcac);
    local_20 = *(float *)(iVar2 + 0x20) + pCVar1->x;
    local_1c = *(float *)(iVar2 + 0x24) + pCVar1->y;
    local_18 = *(float *)(iVar2 + 0x28) + pCVar1->z;
    *(float *)(in_stack_00000004 + 0x20) = local_20;
    *(float *)(in_stack_00000004 + 0x24) = local_1c;
    *(float *)(in_stack_00000004 + 0x28) = local_18;
    iVar2 = *(int *)(in_stack_00000004 + 0x1fcac);
    if ((uint *)(in_stack_00000004 + 0x30) != (uint *)(iVar2 + 0x30)) {
      *(uint *)(in_stack_00000004 + 0x30) = *(uint *)(iVar2 + 0x30);
      *(uint *)(in_stack_00000004 + 0x34) = *(uint *)(iVar2 + 0x34);
      *(uint *)(in_stack_00000004 + 0x38) = *(uint *)(iVar2 + 0x38);
    }
    crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0xbe2c),0,0x2c);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158),6,1);
    *(uint *)(in_stack_00000004 + 0x1fccc) = 1;
    *(uint *)(in_stack_00000004 + 0x1fcd0) = 0;
    return;
  }
  return;
}
