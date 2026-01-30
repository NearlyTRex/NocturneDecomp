// Name: core_bodypart.cpp_FUN_0041ae50
// Address: 0041ae50
// Address Range: [[0041ae50, 0041af6e] [0041af82, 0041af87]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_0041ae50(void)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_FUN_0041ae50(void)

{
  char cVar1;
  CVector3f *pCVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  CVector3f *input_local_point;
  char *pcVar6;
  float *pfVar7;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_18;
  
  iVar5 = *(int *)(in_stack_00000004[5].create_event + 0x1c);
  if (iVar5 < 2) {
    input_local_point = (CVector3f *)(in_stack_00000004[iVar5 * 2 + 5].create_event + 0x20);
    *(int *)(in_stack_00000004[5].create_event + 0x1c) = iVar5 + 1;
    if (input_local_point != in_stack_00000008) {
      input_local_point->x = in_stack_00000008->x;
      input_local_point->y = in_stack_00000008->y;
      input_local_point->z = in_stack_00000008->z;
    }
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,&local_18,input_local_point);
    input_local_point[3].z = pCVar2->x;
    input_local_point[4].x = pCVar2->y;
    input_local_point[4].y = pCVar2->z;
    core_flame_cpp_FUN_004c9b90();
    input_local_point[0x24].z = 0.0;
    input_local_point[0x1d].z = 1.5;
    input_local_point[0x1e].x = 3.0;
    pfVar7 = &in_stack_00000004[1].orient_matrix.m[0].y;
    input_local_point[0x1e].y = 1.5;
    in_stack_00000004->is_transparent = 1;
    pcVar6 = "CHAR2.RAW";
    in_stack_00000004[1].orient.bank = 1.4013e-45;
    do {
      cVar1 = *pcVar6;
      *(char *)pfVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      *(char *)((int)pfVar7 + 1) = cVar1;
      pfVar7 = (float *)((int)pfVar7 + 2);
    } while (cVar1 != '\0');
    iVar5 = 0;
    if (0 < (int)in_stack_00000004[1].location.position.z) {
      iVar3 = 0;
      do {
        *(uint *)((int)in_stack_00000004[1].orient.pitch + iVar3) = 0;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < (int)in_stack_00000004[1].location.position.z);
    }
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(12.0,20.0);
    *(float *)(in_stack_00000004[9].create_event + 0x38) = fVar4;
  }
  return;
}
