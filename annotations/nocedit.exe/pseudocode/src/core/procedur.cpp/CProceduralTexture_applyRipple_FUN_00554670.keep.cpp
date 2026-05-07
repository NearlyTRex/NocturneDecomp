// Name: core_procedur.cpp_CProceduralTexture_applyRipple_FUN_00554670
// Address: 00554670
// MANUAL RECONSTRUCTION
// Address Range: [[00554670, 0055487b]]
// Convention: __cdecl
// Signature: void __cdecl core_procedur_cpp_CProceduralTexture_applyRipple_FUN_00554670(CProceduralTexture *this_ptr,float wave_x,float wave_y,float wave_offset)

#include "nocturne.h"

void __cdecl core_procedur_cpp_CProceduralTexture_applyRipple_FUN_00554670(CProceduralTexture *this_ptr,float wave_x,float wave_y,float wave_offset)

{
  float fVar3;
  uint uVar3;
  int iVar4;
  int iVar6;
  int iVar5;
  int iVar7;
  int iVar9;
  float10 fVar10;
  float local_40;
  int local_28;
  int local_20;
  int local_1c;
  uchar local_14;
  float fVar2;
  float fVar1;
  
  local_40 = wave_offset + -32.0f;
  if (local_40 < 0.0) {
    local_40 = 0.0;
  }
  iVar7 = 0;
  iVar9 = 0;
  memset(g_RippleBuffer,0,0x10000);
  do {
    iVar6 = 0;
    iVar4 = iVar9;
    do {
      fVar2 = (float)128 - (float)iVar6;
      fVar3 = (float)128 - (float)iVar7;
      fVar1 = fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar1 <= wave_offset * wave_offset) {
        if (local_40 * local_40 <= fVar1) {
          fVar10 = (float10)fsin(((float10)wave_offset - (float10)SQRT(fVar1)) *
                                 (float10)0.03125f * (float10)3.1415899999999999);
          local_14 = (uchar)(int)ROUND(ROUND(((float10)128 - (float10)wave_offset) *
                                             fVar10 * (float10)16 *
                                             (float10)0.0078125));
          g_RippleBuffer[iVar4] = local_14;
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar6 < 0x100);
    iVar7 = iVar7 + 1;
    iVar9 = iVar9 + 0x100;
  } while (iVar7 < 0x100);
  local_28 = 0;
  do {
    iVar5 = 0;
    do {
      local_1c = (int)ROUND(ROUND((float)iVar5 - wave_x));
      local_20 = (int)ROUND(ROUND((float)local_28 - wave_y));
      if (local_1c < 0) {
        local_1c = local_1c + 0x100;
      }
      if (0xff < local_1c) {
        local_1c = local_1c + -0x100;
      }
      if (local_20 < 0) {
        local_20 = local_20 + 0x100;
      }
      if (0xff < local_20) {
        local_20 = local_20 + -0x100;
      }
      uVar3 = (uint)this_ptr->texture[local_28 * 0x100 + iVar5] +
              (uint)g_RippleBuffer[local_20 * 0x100 + local_1c];
      if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      this_ptr->texture[local_28 * 0x100 + iVar5] = (uchar)uVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x100);
    local_28 = local_28 + 1;
  } while (local_28 < 0x100);
  return;
}
