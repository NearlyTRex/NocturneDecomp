// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
// Address: 004900b0
// Address Range: [[004900b0, 004901ea]]
// Convention: __cdecl
// Signature: void core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0(float * light_color, int u_coord, int v_coord, float * uv_offset)

#include "nocturne.h"

void __cdecl
core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0
          (float *light_color,int u_coord,int v_coord,float *uv_offset)

{
  float fVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  double dVar4;
  float local_48;
  CVector3i *in_stack_ffffffc0;
  
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * 0.25f * (float)3.1415926535000001 *
               (float)0.5;
  }
  fsin((float10)local_48);
  fVar3 = (float10)((float)u_coord * 0.0625f * (float)3.1415926535000001 *
                   (float)2) + (float10)light_color[7];
  fsin(fVar3);
  fcos((float10)local_48);
  fcos(fVar3);
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,&stack0xffffffbc));
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar4 >> 0x20),(int)uv_offset * 3));
  dVar4 = crt_math_c_round_FUN_005fe6b0(dVar4);
  iVar2 = SUB84 /* extract 2-byte value */(dVar4,0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*(int *)((ulonglong)dVar4 >> 0x20) + iVar2 * 0x10),
             in_stack_ffffffc0);
  fVar1 = *light_color;
  (&g_RenderVertexBuffer[0].light)[iVar2 * 4] = fVar1;
  (&g_RenderVertexBuffer[0].color)[iVar2 * 4] = (int)fVar1;
  (&g_RenderVertexBuffer[0].fog)[iVar2 * 4] = fVar1;
  (&g_RenderVertexBuffer[0].w_recip)[iVar2 * 4] = 0.0;
  return;
}
