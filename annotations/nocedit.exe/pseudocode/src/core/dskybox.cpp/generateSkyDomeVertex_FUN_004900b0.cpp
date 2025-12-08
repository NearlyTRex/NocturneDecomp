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
  int extraout_EAX;
  int *extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  CVector3i *input;
  float local_48;
  
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * 0.25f * (float)3.1415926535000001 *
               (float)0.5;
  }
  fVar2 = (float10)fsin((float10)local_48);
  fVar3 = (float10)((float)u_coord * 0.0625f * (float)3.1415926535000001 *
                   (float)2) + (float10)light_color[7];
  fVar4 = (float10)fsin(fVar3);
  fVar5 = (float10)fcos((float10)local_48);
  fVar3 = (float10)fcos(fVar3);
  fVar6 = (float10)5f;
  fVar7 = (float10)256;
  fVar4 = fVar4 * fVar6 * (float10)(double)fVar5 * fVar7;
  fVar3 = fVar3 * fVar6 * (float10)(double)fVar5 * fVar7;
  crt_math_c_round_FUN_005fe6b0((double)(fVar2 * fVar6 * fVar7));
  crt_math_c_round_FUN_005fe6b0((double)fVar4);
  input = (CVector3i *)0x49018a;
  crt_math_c_round_FUN_005fe6b0((double)fVar3);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*extraout_EDX + extraout_EAX * 0x10),input);
  fVar1 = *light_color;
  (&g_RenderVertexBuffer[0].light)[extraout_EAX * 4] = fVar1;
  (&g_RenderVertexBuffer[0].color)[extraout_EAX * 4] = (int)fVar1;
  (&g_RenderVertexBuffer[0].fog)[extraout_EAX * 4] = fVar1;
  (&g_RenderVertexBuffer[0].w_recip)[extraout_EAX * 4] = 0.0;
  return;
}
