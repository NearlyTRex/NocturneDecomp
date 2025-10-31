// Name: core_dstrender.cpp_blendSinglePixelLightmapMMX_FUN_004937b6
// Address: 004937b6
// Address Range: [[004937b6, 0049385f]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendSinglePixelLightmapMMX_FUN_004937b6(ushort * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0 (00453db0) at 00453e3b [UNCONDITIONAL_CALL]
// Globals:
//   ushort[384] g_LightmapData
//   double g_LightmapXorMask = 0.126945525291829
//   ulonglong g_RedMask32 = 0xf80000
//   ulonglong g_GreenMask32 = 0xfc00
//   ulonglong g_BlueMask32 = 0xf8
//   ulonglong g_TotalColorBits = 0x8
//   ulonglong g_GreenBlueBits = 0x5
//   ulonglong g_BlueBitShift = 0x3
//   uint[256] g_LightmapTexturePalette
//   int g_SolidColorMode

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendSinglePixelLightmapMMX_FUN_004937b6
          (ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar8;
  ushort uVar10;
  uint5 uVar9;
  undefined8 uVar6;
  ushort uVar11;
  ulonglong uVar7;
  uint5 uVar12;
  undefined8 uVar13;
  
  uVar13 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)
                                                  g_SolidColorMode >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)((uint)g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  uVar1 = *texture_pixel;
  uVar2 = g_LightmapTexturePalette[*texture_index];
  uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1) >>
                0x18);
  uVar9 = (uint5)uVar3 & 0xffffffff00;
  uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2) >>
                0x18);
  uVar12 = (uint5)uVar4 & 0xffffffff00;
  uVar6 = pmulhw(CONCAT26((short)(uVar9 >> 0x18) * (short)(uVar12 >> 0x18),
                          CONCAT24((short)(uVar9 >> 8) * (short)(uVar12 >> 8),
                                   CONCAT22(((ushort)(CONCAT43(uVar3,CONCAT12((char)(uVar1 >> 8),
                                                                              (ushort)uVar1)) >>
                                                     0x10) & 0xff) *
                                            ((ushort)CONCAT41(uVar4,(char)(uVar2 >> 8)) & 0xff),
                                            ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                 *(ulonglong *)
                  (g_LightmapData + ((uint)*lightmap_index + (uint)(*texture_index >> 1)) * 4) ^
                 (ulonglong)g_LightmapXorMask);
  uVar13 = pmulhw(uVar13,*(ulonglong *)
                          (g_LightmapData +
                          ((uint)*lightmap_index + (uint)(*texture_index >> 1)) * 4));
  uVar5 = (ushort)((short)uVar6 + (short)uVar13) >> 4;
  uVar8 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10)) >> 4;
  uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20)) >> 4;
  uVar11 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30)) >> 4;
  uVar7 = (ulonglong)
          CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                   CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                            CONCAT11((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                                     (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5)))
                  );
  *output_pixel =
       (ushort)((uVar7 & g_BlueMask32) >> g_BlueBitShift) |
       (ushort)((uVar7 & g_GreenMask32) >> g_GreenBlueBits) |
       (ushort)((uVar7 & g_RedMask32) >> g_TotalColorBits);
  return;
}


// Assembly code:
// 004937b6: PUSH EBP
//   Label: core_dstrender.cpp_blendSinglePixelLightmapMMX_FUN_004937b6
// 004937b7: MOV EBP,ESP
// 004937b9: PUSH ESI
// 004937ba: PUSH EDI
// 004937bb: PUSH EBP
// 004937bc: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004937bf: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004937c2: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004937c5: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004937c8: PXOR MM7,MM7
// 004937cb: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 004937d2: PUNPCKLBW MM5,MM7
// 004937d5: PSLLW MM5,0x6
// 004937d9: MOVZX EDX,byte ptr [EBX]
// 004937dc: MOVD MM0,dword ptr [ESI]
// 004937df: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 004937e7: MOVZX EAX,byte ptr [EBP]
// 004937eb: PUNPCKLBW MM0,MM7
// 004937ee: SHR EDX,0x1
// 004937f0: PUNPCKLBW MM2,MM7
// 004937f3: ADD EAX,EDX
// 004937f5: PMULLW MM0,MM2
// 004937f8: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00493800: MOVQ MM2,MM3
// 00493803: MOVQ MM4,MM5
// 00493806: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 0049380d: PMULHW MM0,MM2
// 00493810: PMULHW MM4,MM3
// 00493813: PADDW MM0,MM4
// 00493816: PSRLW MM0,0x4
// 0049381a: PACKUSWB MM0,MM7
// 0049381d: MOVQ MM2,MM0
// 00493820: MOVQ MM3,MM0
// 00493823: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 0049382a: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 00493831: PAND MM3,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 00493838: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 0049383f: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 00493846: PSRLQ MM3,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 0049384d: POR MM0,MM2
// 00493850: POR MM0,MM3
// 00493853: MOVD EAX,MM0
// 00493856: MOV word ptr [EDI],AX
// 00493859: POP EBP
// 0049385a: EMMS
// 0049385c: POP EDI
// 0049385d: POP ESI
// 0049385e: LEAVE
// 0049385f: RET
