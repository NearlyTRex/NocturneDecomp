// Name: core_charactr.cpp_CCharacter_FUN_0042b670
// Address: 0042b670
// Address Range: [[0042b670, 0042b755]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042b670(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b670(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *input_vector;
  char *pcVar2;
  int iVar3;
  CMatrix3x4f *matrix;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  CMatrix3x4f *local_14;
  
  iVar3 = 0;
  if (0 < this_ptr->field60_0x2df4) {
    local_14 = (this_ptr->model).bone_transform.bone_world_matrices;
    pcVar2 = this_ptr->field61_0x2df8;
    do {
      if ((this_ptr->model).part_visibility_flags[*(int *)pcVar2] != 0) {
        iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar1 != 0) {
          matrix = local_14 + *(int *)(pcVar2 + 4);
          local_2c.x = 0.0;
          local_2c.y = 0.0;
          local_2c.z = -0.2;
          input_vector = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_50,&local_2c,(CMatrix3x4f *)(pcVar2 + 8));
          core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_20,input_vector,matrix);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&this_ptr->base,&local_44,&local_20);
          local_38.y = 0.0;
          local_38.z = 0.0;
          local_38.x = 3.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                    (&this_ptr->base,&local_5c,&local_38);
          core_gore_cpp_CGore_FUN_004edaa0(g_CGorePtr);
        }
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x38;
    } while (iVar3 < this_ptr->field60_0x2df4);
  }
  return;
}
