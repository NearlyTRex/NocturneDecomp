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
  uchar *puVar8;
  int iVar9;
  CColorQuantizer *pCVar10;
  int iVar11;
  double dVar12;
  uchar uStack_20;
  uchar uStack_1c;
  uchar uStack_18;
  
  iVar11 = 0;
  if (0 < this_ptr->num_colors) {
    fVar4 = (float)0.11;
    fVar5 = (float)0.29999999999999999;
    fVar6 = (float)0.58999999999999997;
    pCVar7 = this_ptr;
    pCVar10 = this_ptr;
    do {
      pCVar7->palette[0].r = (float)pCVar10->boxes[0].avg_red;
      pCVar7->palette[0].g = (float)pCVar10->boxes[0].avg_green;
      sVar1 = pCVar10->boxes[0].avg_blue;
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
      iVar11 = iVar11 + 1;
      pCVar7->palette[0].intensity = (float)sVar1 * fVar4 + fVar3 * fVar5 + fVar2 * fVar6;
      pCVar10 = (CColorQuantizer *)&pCVar10->current_b;
      pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
    } while (iVar11 < this_ptr->num_colors);
  }
  iVar11 = 0;
  if (0 < this_ptr->num_colors) {
    do {
      iVar9 = 0;
      pCVar7 = this_ptr;
      while (iVar9 < this_ptr->num_colors + -1) {
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
          iVar9 = iVar9 + 1;
          pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
        }
        else {
          iVar9 = iVar9 + 1;
          pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < this_ptr->num_colors);
  }
  puVar8 = (uchar *)this_ptr->num_colors;
  iVar11 = 0;
  pCVar7 = this_ptr;
  if (0 < (int)puVar8) {
    do {
      dVar12 = crt_math_c_round_FUN_005fe6b0((double)pCVar7->palette[0].r);
      puVar8 = output_buffer + 3;
      uStack_18 = (uchar)(int)ROUND(dVar12);
      output_buffer[2] = uStack_18;
      dVar12 = crt_math_c_round_FUN_005fe6b0((double)pCVar7->palette[0].g);
      uStack_1c = (uchar)(int)ROUND(dVar12);
      output_buffer[1] = uStack_1c;
      dVar12 = crt_math_c_round_FUN_005fe6b0((double)pCVar7->palette[0].b);
      uStack_20 = (uchar)(int)ROUND(dVar12);
      iVar11 = iVar11 + 1;
      *output_buffer = uStack_20;
      output_buffer = puVar8;
      pCVar7 = (CColorQuantizer *)&pCVar7->error_buffer_r;
    } while (iVar11 < this_ptr->num_colors);
  }
  return (int)puVar8;
}
