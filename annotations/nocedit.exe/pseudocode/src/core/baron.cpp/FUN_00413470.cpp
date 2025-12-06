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
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *this_ptr;
  CVector3f *pCVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  SCollisionInfo *in_stack_ffffffd0;
  
  if ((((in_stack_00000008 != (CDemonActor *)0x0) &&
       (in_stack_00000008 != *(CDemonActor **)(in_stack_00000004 + 0x1fcac))) &&
      (*(CDemonActor **)(in_stack_00000004 + 0x1fcac) == (CDemonActor *)0x0)) &&
     ((this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                            (in_stack_00000008,g_CCharacterClassInfo.name_hash),
      this_ptr == (CDemonActor *)0x0 ||
      (iVar6 = (*this_ptr->vtable[1].hasCollision)(this_ptr,in_stack_ffffffd0), iVar6 < 1)))) {
    *(CDemonActor **)(in_stack_00000004 + 0x1fcac) = in_stack_00000008;
    pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (*(CDemonActor **)(in_stack_00000004 + 0x1fcac),(CVector3f *)&stack0xffffffe4
                        ,(CVector3f *)&stack0xfffffffc);
    iVar6 = *(int *)(in_stack_00000004 + 0x1fcac);
    fVar1 = *(float *)(iVar6 + 0x24);
    fVar2 = pCVar5->y;
    fVar3 = *(float *)(iVar6 + 0x28);
    fVar4 = pCVar5->z;
    *(float *)(in_stack_00000004 + 0x20) = *(float *)(iVar6 + 0x20) + pCVar5->x;
    *(float *)(in_stack_00000004 + 0x24) = fVar1 + fVar2;
    *(float *)(in_stack_00000004 + 0x28) = fVar3 + fVar4;
    iVar6 = *(int *)(in_stack_00000004 + 0x1fcac);
    if ((uint *)(in_stack_00000004 + 0x30) != (uint *)(iVar6 + 0x30)) {
      *(uint *)(in_stack_00000004 + 0x30) = *(uint *)(iVar6 + 0x30);
      *(uint *)(in_stack_00000004 + 0x34) = *(uint *)(iVar6 + 0x34);
      *(uint *)(in_stack_00000004 + 0x38) = *(uint *)(iVar6 + 0x38);
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
