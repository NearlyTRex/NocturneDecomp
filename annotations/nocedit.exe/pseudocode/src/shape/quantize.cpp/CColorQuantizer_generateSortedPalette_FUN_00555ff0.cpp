// Name: shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
// Address: 00555ff0
// Address Range: [[00555ff0, 00556178]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0(CColorQuantizer * this_ptr, uchar * output_buffer)

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
          (CColorQuantizer *this_ptr,uchar *output_buffer)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CColorQuantizer *pCVar7;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar8;
  CColorQuantizer *pCVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar10;
  double dVar11;
  byte uStack_1c;
  byte uStack_18;
  byte local_14;
  
  iVar10 = 0;
  if (0 < this_ptr->num_colors) {
    fVar4 = (float)0.11;
    fVar5 = (float)0.29999999999999999;
    fVar6 = (float)0.58999999999999997;
    pCVar7 = this_ptr;
    pCVar9 = this_ptr;
    do {
      pCVar7->palette[0].r = (float)pCVar9->boxes[0].avg_red;
      pCVar7->palette[0].g = (float)pCVar9->boxes[0].avg_green;
      sVar1 = pCVar9->boxes[0].avg_blue;
      fVar2 = pCVar7->palette[0].g;
      pCVar7->field12_0x30[0] = '\0';
      pCVar7->field12_0x30[1] = '\0';
      pCVar7->field12_0x30[2] = '\0';
      pCVar7->field12_0x30[3] = '\0';
      pCVar7->field12_0x30[4] = '\0';
      pCVar7->field12_0x30[5] = '\0';
      pCVar7->field12_0x30[6] = '\0';
      pCVar7->field12_0x30[7] = '\0';
      fVar3 = pCVar7->palette[0].r;
      pCVar7->field12_0x30[8] = '\0';
      pCVar7->field12_0x30[9] = '\0';
      pCVar7->field12_0x30[10] = '\0';
      pCVar7->field12_0x30[0xb] = '\0';
      pCVar7->palette[0].b = (float)sVar1;
      pCVar7->field12_0x30[0xc] = '\0';
      pCVar7->field12_0x30[0xd] = '\0';
      pCVar7->field12_0x30[0xe] = '\0';
      pCVar7->field12_0x30[0xf] = '\0';
      iVar10 = iVar10 + 1;
      pCVar7->palette[0].intensity = (float)sVar1 * fVar4 + fVar3 * fVar5 + fVar2 * fVar6;
      pCVar9 = (CColorQuantizer *)&pCVar9->current_b;
      pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
    } while (iVar10 < this_ptr->num_colors);
  }
  iVar10 = 0;
  if (0 < this_ptr->num_colors) {
    do {
      iVar8 = 0;
      pCVar7 = this_ptr;
      while (iVar8 < this_ptr->num_colors + -1) {
        if (pCVar7->palette[1].intensity < pCVar7->palette[0].intensity) {
          fVar4 = pCVar7->palette[0].r;
          fVar5 = pCVar7->palette[0].g;
          fVar6 = pCVar7->palette[0].b;
          fVar2 = pCVar7->palette[0].intensity;
          pCVar7->palette[0].r = pCVar7->palette[1].r;
          pCVar7->palette[0].g = pCVar7->palette[1].g;
          pCVar7->palette[0].b = pCVar7->palette[1].b;
          pCVar7->palette[0].intensity = pCVar7->palette[1].intensity;
          pCVar7->palette[1].r = fVar4;
          pCVar7->palette[1].g = fVar5;
          pCVar7->palette[1].b = fVar6;
          pCVar7->palette[1].intensity = fVar2;
          iVar8 = iVar8 + 1;
          pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
        }
        else {
          iVar8 = iVar8 + 1;
          pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < this_ptr->num_colors);
  }
  iVar10 = this_ptr->num_colors;
  iVar8 = 0;
  pCVar7 = this_ptr;
  if (0 < iVar10) {
    do {
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)pCVar7->palette[0].r);
      uStack_18 = (byte)(int)ROUND(dVar11);
      *(byte *)(extraout_EAX + 2) = uStack_18;
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)*(float *)(extraout_EDX + 0x1034));
      uStack_1c = (byte)(int)ROUND(dVar11);
      *(byte *)(extraout_EAX_00 + -2) = uStack_1c;
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)*(float *)(extraout_EDX_00 + 0x1038));
      local_14 = (byte)(int)ROUND(dVar11);
      iVar8 = iVar8 + 1;
      *(byte *)(extraout_EAX_01 + -3) = local_14;
      iVar10 = extraout_EAX_01;
      pCVar7 = (CColorQuantizer *)(extraout_EDX_01 + 0x10);
    } while (iVar8 < this_ptr->num_colors);
  }
  return iVar10;
}
