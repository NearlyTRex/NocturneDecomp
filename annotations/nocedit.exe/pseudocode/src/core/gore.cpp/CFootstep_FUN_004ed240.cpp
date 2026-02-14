// Name: core_gore.cpp_CFootstep_FUN_004ed240
// Address: 004ed240
// Address Range: [[004ed240, 004ed3b6]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_FUN_004ed240(CFootstep *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CFootstep_FUN_004ed240(CFootstep *this_ptr)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  CVector3f *pCVar4;
  float10 fVar5;
  float10 fVar6;
  float *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  CVector3f local_40;
  CVector3f local_34 [2];
  float local_18;
  
  iVar2 = 0;
  pCVar4 = this_ptr->unk2;
  do {
    fVar5 = (float10)fsin((float10)*(float *)(in_stack_0000000c + 4));
    fVar6 = (float10)fcos((float10)*(float *)(in_stack_0000000c + 4));
    fVar5 = fVar5 * (float10)0.5;
    fVar6 = fVar6 * (float10)0.5;
    local_40.x = (float)(fVar5 * (float10)*(float *)((int)&1.0f + iVar2) +
                         -fVar6 * (float10)*(float *)((int)&1.0f + iVar2) +
                        (float10)*in_stack_00000008);
    local_40.z = (float)(fVar6 * (float10)*(float *)((int)&1.0f + iVar2) +
                        fVar5 * (float10)*(float *)((int)&1.0f + iVar2)) +
                 in_stack_00000008[2];
    if (local_34 != &local_40) {
      local_34[0].x = local_40.x;
      local_34[0].y = in_stack_00000008[1];
      local_34[0].z = local_40.z;
    }
    local_40.y = in_stack_00000008[1] + 1.0;
    local_34[0].y = local_34[0].y + -3.0f;
    local_18 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                         (&g_CDemonRaytraceInstance,&local_40,local_34,(CVector3f *)0x0,(int *)0x0);
    fVar1 = (local_40.y - local_18 * (float)4) + 0.08333334f;
    if (pCVar4 != &local_40) {
      pCVar4->x = local_40.x;
      pCVar4->y = fVar1;
      pCVar4->z = local_40.z;
    }
    iVar2 = iVar2 + 4;
    pCVar4 = pCVar4 + 1;
  } while (iVar2 != 0x10);
  pfVar3 = &this_ptr->unk2[0].y;
  do {
    if ((float)0.5 < ABS(this_ptr->unk2[0].y - pfVar3[3])) {
      pfVar3[3] = this_ptr->unk2[0].y;
    }
    pfVar3 = pfVar3 + 3;
  } while (pfVar3 != &this_ptr->unk2[3].y);
  this_ptr->unk1[0] = '\0';
  this_ptr->unk1[1] = '\0';
  this_ptr->unk1[2] = '\0';
  this_ptr->unk1[3] = '\0';
  *(uint *)this_ptr->field2_0x38 = in_stack_00000014;
  *(uint *)(this_ptr->field2_0x38 + 4) = in_stack_00000010;
  *(uint *)(this_ptr->unk1 + 4) = in_stack_00000018;
  return;
}
