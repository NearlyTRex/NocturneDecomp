// Name: core_gore.cpp_FUN_004ed240
// Address: 004ed240
// Address Range: [[004ed240, 004ed3b6]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ed240(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004ed240(void)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  uint *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  CVector3f local_40;
  CVector3f local_34 [2];
  float local_18;
  
  iVar2 = 0;
  pfVar4 = (float *)(in_stack_00000004 + 2);
  do {
    fVar5 = (float10)fsin((float10)*(float *)(in_stack_0000000c + 4));
    fVar6 = (float10)fcos((float10)*(float *)(in_stack_0000000c + 4));
    fVar5 = fVar5 * (float10)0.5;
    fVar6 = fVar6 * (float10)0.5;
    local_40.x = (float)(fVar5 * (float10)*(float *)((int)&0x3F800000 + iVar2) +
                         -fVar6 * (float10)*(float *)((int)&0x3F800000 + iVar2) +
                        (float10)*in_stack_00000008);
    local_40.z = (float)(fVar6 * (float10)*(float *)((int)&0x3F800000 + iVar2) +
                        fVar5 * (float10)*(float *)((int)&0x3F800000 + iVar2)) +
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
    if ((CVector3f *)pfVar4 != &local_40) {
      *pfVar4 = local_40.x;
      pfVar4[1] = fVar1;
      pfVar4[2] = local_40.z;
    }
    iVar2 = iVar2 + 4;
    pfVar4 = pfVar4 + 3;
  } while (iVar2 != 0x10);
  puVar3 = in_stack_00000004 + 3;
  do {
    if ((float)0.5 < ABS((float)in_stack_00000004[3] - (float)puVar3[3])) {
      puVar3[3] = in_stack_00000004[3];
    }
    puVar3 = puVar3 + 3;
  } while (puVar3 != in_stack_00000004 + 0xc);
  *in_stack_00000004 = 0;
  in_stack_00000004[0xe] = in_stack_00000014;
  in_stack_00000004[0xf] = in_stack_00000010;
  in_stack_00000004[1] = in_stack_00000018;
  return;
}
