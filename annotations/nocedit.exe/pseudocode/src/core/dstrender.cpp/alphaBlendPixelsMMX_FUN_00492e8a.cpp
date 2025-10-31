// Name: core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a
// Address: 00492e8a
// Address Range: [[00492e8a, 00492f02]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a(uint * output_buffer, uint * source1_buffer, uint * source2_buffer, uint alpha1, uint alpha2, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160 (00453160) at 0045321b [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00492e8a
          (uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,
          int pixel_count)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar7;
  ushort uVar8;
  undefined8 uVar6;
  ushort uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ushort uVar12;
  
  uVar11 = (ushort)(alpha2 >> 0x10);
  uVar12 = (ushort)(alpha1 >> 0x10);
  do {
    uVar1 = *source1_buffer;
    uVar2 = *source2_buffer;
    uVar6 = psllw((ulonglong)
                  CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 
                                                  0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),
                                                  uVar1) >> 0x18),(char)(uVar1 >> 8)),
                           (ushort)(byte)uVar1) & 0xffffffff00ffffff,7);
    uVar10 = psllw((ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),
                                                  uVar2) >> 0x18),
                                            CONCAT12((char)(uVar2 >> 8),(short)uVar2)) >> 0x10),
                            (short)uVar2) & 0xffffffff00ff00ff,7);
    uVar6 = pmulhw(uVar6,CONCAT26(uVar11 >> 1,
                                  CONCAT24((ushort)alpha2 >> 1,
                                           CONCAT22(uVar11 >> 1,(ushort)alpha2 >> 1))));
    uVar10 = pmulhw(uVar10,CONCAT26(uVar12 >> 1,
                                    CONCAT24((ushort)alpha1 >> 1,
                                             CONCAT22(uVar12 >> 1,(ushort)alpha1 >> 1))));
    uVar5 = (ushort)((short)uVar6 + (short)uVar10) >> 6;
    uVar7 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar10 >> 0x10)) >> 6;
    uVar8 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar10 >> 0x20)) >> 6;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar10 >> 0x30)) >> 6;
    *output_buffer =
         CONCAT13((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                  CONCAT12((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                           CONCAT11((uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7),
                                    (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5))))
    ;
    source1_buffer = source1_buffer + 1;
    source2_buffer = source2_buffer + 1;
    output_buffer = output_buffer + 1;
    iVar4 = pixel_count + -4;
    bVar3 = 3 < pixel_count;
    pixel_count = iVar4;
  } while (iVar4 != 0 && bVar3);
  return;
}


// Assembly code:
// 00492e8a: PUSH EBP
//   Label: core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a
// 00492e8b: MOV EBP,ESP
// 00492e8d: PUSH ESI
// 00492e8e: PUSH EDI
// 00492e8f: PUSH EBX
// 00492e90: PUSH ECX
// 00492e91: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00492e94: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00492e97: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00492e9a: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 00492e9d: PXOR MM7,MM7
// 00492ea0: MOVD MM3,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00492ea4: MOVD MM4,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00492ea8: MOVD MM5,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00492eac: MOVD MM6,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00492eb0: PSLLQ MM3,0x20
// 00492eb4: PSLLQ MM4,0x20
// 00492eb8: POR MM3,MM5
// 00492ebb: POR MM4,MM6
// 00492ebe: PSRLW MM3,0x1
// 00492ec2: PSRLW MM4,0x1
// 00492ec6: MOVD MM0,dword ptr [ESI]
//   Label: LAB_00492ec6
// 00492ec9: MOVD MM1,dword ptr [EBX]
// 00492ecc: PUNPCKLBW MM0,MM7
// 00492ecf: PUNPCKLBW MM1,MM7
// 00492ed2: PSLLW MM0,0x7
// 00492ed6: PSLLW MM1,0x7
// 00492eda: PMULHW MM0,MM3
// 00492edd: PMULHW MM1,MM4
// 00492ee0: PADDW MM0,MM1
// 00492ee3: PSRLW MM0,0x6
// 00492ee7: PACKUSWB MM0,MM7
// 00492eea: MOVD dword ptr [EDI],MM0
// 00492eed: ADD ESI,0x4
// 00492ef0: ADD EBX,0x4
// 00492ef3: ADD EDI,0x4
// 00492ef6: SUB ECX,0x4
// 00492ef9: JG 0x00492ec6
//   XREF to: 00492ec6 (CONDITIONAL_JUMP)
// 00492efb: POP ECX
// 00492efc: POP EBX
// 00492efd: EMMS
// 00492eff: POP EDI
// 00492f00: POP ESI
// 00492f01: LEAVE
// 00492f02: RET
