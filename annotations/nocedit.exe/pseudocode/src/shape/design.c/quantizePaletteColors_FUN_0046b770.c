// Name: shape_design.c_quantizePaletteColors_FUN_0046b770
// Address: 0046b770
// Address Range: [[0046b770, 0046b991]]
// Convention: __cdecl
// Signature: void shape_design.c_quantizePaletteColors_FUN_0046b770(byte * image_data, int pixel_count, int stride, byte * palette_data, int mode_flag, char * bit_mask)
// Cross-references:
//   shape_design.c_embedCopyrightWatermark_FUN_0046b9a0 (0046b9a0) at 0046ba80 [UNCONDITIONAL_CALL]
// Globals:
//   double g_ColorMagnitudeWeightOriginal = 0.577350270000000
//   double g_ColorMagnitudeWeightPalette = 0.577350270000000
//   double g_RedChannelWeight = 0.300000000000000
//   double g_GreenChannelWeight = 0.590000000000000
//   double g_BlueChannelWeight = 0.110000000000000
//   double g_MagnitudeDifferenceWeight = 0.700000000000000

#include "nocturne.h"

void __cdecl
shape_design_c_quantizePaletteColors_FUN_0046b770
          (byte *image_data,int pixel_count,int stride,byte *palette_data,int mode_flag,
          char *bit_mask)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  float local_34;
  uint local_30;
  uint local_2c;
  byte local_1c;
  int local_14;
  
  uVar10 = 0xffffffff;
  pcVar11 = bit_mask;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  for (local_14 = 0; local_14 < pixel_count; local_14 = local_14 + 1) {
    local_1c = image_data[(int)palette_data];
    uVar3 = (uint)local_1c;
    if ((local_14 < (int)((~uVar10 - 1) * 8)) &&
       (((uint)(byte)bit_mask[(int)((local_14 + (local_14 >> 0x1f) * -8) -
                                   (uint)((local_14 >> 0x1f) << 2 < 0)) >> 3] &
        1 << ((byte)local_14 & 7)) != 0)) {
      uVar4 = (uint)*(byte *)(mode_flag + uVar3 * 3);
      uVar5 = (uint)*(byte *)(mode_flag + uVar3 * 3 + 1);
      uVar6 = (uint)*(byte *)(mode_flag + uVar3 * 3 + 2);
      local_34 = 1e+30;
      local_30 = uVar3;
      for (local_2c = 0; (int)local_2c < 0x100; local_2c = local_2c + 1) {
        if (local_2c != uVar3) {
          uVar7 = (uint)*(byte *)(mode_flag + local_2c * 3);
          uVar8 = (uint)*(byte *)(mode_flag + local_2c * 3 + 1);
          uVar9 = (uint)*(byte *)(mode_flag + local_2c * 3 + 2);
          fVar2 = SQRT((float)(uVar6 * uVar6 + uVar5 * uVar5 + uVar4 * uVar4)) *
                  (float)g_ColorMagnitudeWeightOriginal -
                  SQRT((float)(uVar9 * uVar9 + uVar8 * uVar8 + uVar7 * uVar7)) *
                  (float)g_ColorMagnitudeWeightPalette;
          fVar2 = fVar2 * fVar2 * (float)g_MagnitudeDifferenceWeight +
                  (float)(int)((uVar6 - uVar9) * (uVar6 - uVar9)) * (float)g_BlueChannelWeight +
                  (float)(int)((uVar5 - uVar8) * (uVar5 - uVar8)) * (float)g_GreenChannelWeight +
                  (float)(int)((uVar4 - uVar7) * (uVar4 - uVar7)) * (float)g_RedChannelWeight;
          if (fVar2 < local_34) {
            local_30 = local_2c;
            local_34 = fVar2;
          }
        }
      }
      local_1c = (byte)local_30;
    }
    *image_data = local_1c;
    image_data = image_data + stride;
  }
  return;
}


// Assembly code:
// 0046b770: PUSH EBX
//   Label: shape_design.c_quantizePaletteColors_FUN_0046b770
// 0046b771: PUSH ESI
// 0046b772: PUSH EDI
// 0046b773: PUSH EBP
// 0046b774: MOV EBP,ESP
// 0046b776: SUB ESP,0x50
// 0046b77c: MOV EDI,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0046b77f: SUB ECX,ECX
// 0046b781: DEC ECX
// 0046b782: XOR EAX,EAX
// 0046b784: SCASB.REPNE ES:EDI
// 0046b786: NOT ECX
// 0046b788: DEC ECX
// 0046b789: SHL ECX,0x3
// 0046b78c: MOV dword ptr [EBP + -0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0046b78f: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046b796: JMP 0x0046b79b
//   XREF to: 0046b79b (UNCONDITIONAL_JUMP)
// 0046b798: INC dword ptr [EBP + -0x4]
//   Label: LAB_0046b798
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046b79b: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046b79b
//   XREF to: Stack[-0x14] (READ)
// 0046b79e: CMP EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046b7a1: JGE 0x0046b98b
//   XREF to: 0046b98b (CONDITIONAL_JUMP)
// 0046b7a7: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b7aa: ADD EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0046b7ad: XOR EAX,EAX
// 0046b7af: MOV AL,byte ptr [EDX]
// 0046b7b1: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046b7b4: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046b7b7: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046b7ba: JGE 0x0046b978
//   XREF to: 0046b978 (CONDITIONAL_JUMP)
// 0046b7c0: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046b7c3: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046b7c6: SAR EDX,0x1f
// 0046b7c9: SHL EDX,0x3
// 0046b7cc: SBB EAX,EDX
// 0046b7ce: SAR EAX,0x3
// 0046b7d1: ADD EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0046b7d4: XOR EDX,EDX
// 0046b7d6: MOV DL,byte ptr [EAX]
// 0046b7d8: MOV ECX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046b7db: AND ECX,0x7
// 0046b7de: MOV EAX,0x1
// 0046b7e3: SHL EAX,CL
// 0046b7e5: TEST EDX,EAX
// 0046b7e7: JZ 0x0046b978
//   XREF to: 0046b978 (CONDITIONAL_JUMP)
// 0046b7ed: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b7f0: LEA EAX,[EAX + EAX*0x2]
// 0046b7f3: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046b7f6: ADD EDX,EAX
// 0046b7f8: XOR EAX,EAX
// 0046b7fa: MOV AL,byte ptr [EDX]
// 0046b7fc: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0046b7ff: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b802: LEA EAX,[EAX + EAX*0x2]
// 0046b805: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046b808: ADD EDX,EAX
// 0046b80a: XOR EAX,EAX
// 0046b80c: MOV AL,byte ptr [EDX + 0x1]
// 0046b80f: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0046b812: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b815: LEA EAX,[EAX + EAX*0x2]
// 0046b818: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046b81b: ADD EDX,EAX
// 0046b81d: XOR EAX,EAX
// 0046b81f: MOV AL,byte ptr [EDX + 0x2]
// 0046b822: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0046b825: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046b828: IMUL EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046b82c: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046b82f: IMUL EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046b833: ADD EDX,EAX
// 0046b835: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046b838: IMUL EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046b83c: ADD EAX,EDX
// 0046b83e: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0046b841: FILD dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b844: FSQRT
// 0046b846: FMUL double ptr [0x0061d3ae]
//   XREF to: 0061d3ae (READ)
// 0046b84c: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0046b84f: MOV dword ptr [EBP + -0x24],0x7149f2ca
//   XREF to: Stack[-0x34] (WRITE)
// 0046b856: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b859: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0046b85c: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 0046b863: JMP 0x0046b868
//   XREF to: 0046b868 (UNCONDITIONAL_JUMP)
// 0046b865: INC dword ptr [EBP + -0x1c]
//   Label: LAB_0046b865
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 0046b868: CMP dword ptr [EBP + -0x1c],0x100
//   Label: LAB_0046b868
//   XREF to: Stack[-0x2c] (READ)
// 0046b86f: JGE 0x0046b972
//   XREF to: 0046b972 (CONDITIONAL_JUMP)
// 0046b875: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046b878: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046b87b: JNZ 0x0046b882
//   XREF to: 0046b882 (CONDITIONAL_JUMP)
// 0046b87d: JMP 0x0046b96d
//   XREF to: 0046b96d (UNCONDITIONAL_JUMP)
// 0046b882: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0046b882
//   XREF to: Stack[-0x2c] (READ)
// 0046b885: LEA EAX,[EAX + EAX*0x2]
// 0046b888: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046b88b: ADD EDX,EAX
// 0046b88d: XOR EAX,EAX
// 0046b88f: MOV AL,byte ptr [EDX]
// 0046b891: MOV dword ptr [EBP + -0x50],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0046b894: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046b897: LEA EAX,[EAX + EAX*0x2]
// 0046b89a: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046b89d: ADD EDX,EAX
// 0046b89f: XOR EAX,EAX
// 0046b8a1: MOV AL,byte ptr [EDX + 0x1]
// 0046b8a4: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0046b8a7: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046b8aa: LEA EAX,[EAX + EAX*0x2]
// 0046b8ad: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046b8b0: ADD EDX,EAX
// 0046b8b2: XOR EAX,EAX
// 0046b8b4: MOV AL,byte ptr [EDX + 0x2]
// 0046b8b7: MOV dword ptr [EBP + -0x48],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0046b8ba: MOV EDX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046b8bd: IMUL EDX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046b8c1: MOV EAX,dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 0046b8c4: IMUL EAX,dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 0046b8c8: ADD EDX,EAX
// 0046b8ca: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046b8cd: IMUL EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046b8d1: ADD EAX,EDX
// 0046b8d3: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0046b8d6: FILD dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b8d9: FSQRT
// 0046b8db: FMUL double ptr [0x0061d3b6]
//   XREF to: 0061d3b6 (READ)
// 0046b8e1: FSTP float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (WRITE)
// 0046b8e4: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046b8e7: SUB EAX,dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 0046b8ea: MOV dword ptr [EBP + -0x40],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0046b8ed: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046b8f0: SUB EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046b8f3: MOV dword ptr [EBP + -0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0046b8f6: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046b8f9: SUB EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046b8fc: MOV dword ptr [EBP + -0x38],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0046b8ff: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046b902: FSUB float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0046b905: FSTP float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 0046b908: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0046b90b: IMUL EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0046b90f: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0046b912: FILD dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b915: FMUL double ptr [0x0061d3be]
//   XREF to: 0061d3be (READ)
// 0046b91b: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046b91e: IMUL EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046b922: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0046b925: FILD dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b928: FMUL double ptr [0x0061d3c6]
//   XREF to: 0061d3c6 (READ)
// 0046b92e: FADDP
// 0046b930: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0046b933: IMUL EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0046b937: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0046b93a: FILD dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b93d: FMUL double ptr [0x0061d3ce]
//   XREF to: 0061d3ce (READ)
// 0046b943: FADDP
// 0046b945: FLD float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046b948: FMUL float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046b94b: FMUL double ptr [0x0061d3d6]
//   XREF to: 0061d3d6 (READ)
// 0046b951: FADDP
// 0046b953: FSTP float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 0046b956: FLD float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046b959: FCOMP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046b95c: FNSTSW AX
// 0046b95e: SAHF
// 0046b95f: JNC 0x0046b96d
//   XREF to: 0046b96d (CONDITIONAL_JUMP)
// 0046b961: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046b964: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0046b967: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046b96a: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0046b96d: JMP 0x0046b865
//   Label: LAB_0046b96d
//   XREF to: 0046b865 (UNCONDITIONAL_JUMP)
// 0046b972: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_0046b972
//   XREF to: Stack[-0x30] (READ)
// 0046b975: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046b978: MOV AL,byte ptr [EBP + -0xc]
//   Label: LAB_0046b978
//   XREF to: Stack[-0x1c] (READ)
// 0046b97b: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b97e: MOV byte ptr [EDX],AL
// 0046b980: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046b983: ADD dword ptr [EBP + 0x14],EAX
//   XREF to: Stack[0x4] (READ_WRITE)
// 0046b986: JMP 0x0046b798
//   XREF to: 0046b798 (UNCONDITIONAL_JUMP)
// 0046b98b: MOV ESP,EBP
//   Label: LAB_0046b98b
// 0046b98d: POP EBP
// 0046b98e: POP EDI
// 0046b98f: POP ESI
// 0046b990: POP EBX
// 0046b991: RET
