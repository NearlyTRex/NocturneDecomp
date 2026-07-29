// Name: core_smiley.cpp_CSmiley_attractActorToward_FUN_00520a20
// Address: 00520a20
// Address Range: [[00520a20, 00520ad2]]
// Convention: unknown
// Signature: undefined4 core_smiley_cpp_CSmiley_attractActorToward_FUN_00520a20(CCharacter *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_smiley_cpp_CSmiley_attractActorToward_FUN_00520a20(CCharacter *param_1,int param_2)

{
  EDeathState EVar1;
  CVector3f *input_local_point;
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  if (param_2 == 0) {
    return 0;
  }
  EVar1 = (*(((param_1->base).vtable._uc)->_uc).getDeathState)(param_1);
  if (EVar1 != DEATH_STATE_ALIVE) {
    (**(code **)(*(int *)(param_2 + 0x14c) + 0xe8))(param_2);
    return 1;
  }
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_0055a8b0
                 (&CStack_14,(CVector3f *)&DAT_02dd1184,
                  (param_1->model).bone_transform.bone_world_matrices + _DAT_02da8a7c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&param_1->base,&CStack_20,input_local_point);
  CStack_20.y = CStack_20.y + -4.0f;
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x60))(param_2,&CStack_20,param_2 + 0x30);
  return 1;
}
