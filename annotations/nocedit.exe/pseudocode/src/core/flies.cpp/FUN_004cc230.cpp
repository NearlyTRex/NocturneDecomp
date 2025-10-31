// Name: core_flies.cpp_FUN_004cc230
// Address: 004cc230
// Address Range: [[004cc230, 004cc2b6]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc230()
// Cross-references:
//   core_flies.cpp_FUN_004cc2c0 (004cc2c0) at 004cc2e9 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc6e6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
//   int g_ActiveRenderColor
//   undefined4 DAT_02d7a800
//   undefined4 DAT_02d7a804

#include "nocturne.h"

/* Signature: undefined1 actors_other_flies.cpp_FUN_004cc230(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_flies_cpp_FUN_004cc230(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint5 uVar12;
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((g_ZBufferScanlineArray[in_stack_00000008][in_stack_00000004] < in_stack_0000000c) &&
     (g_BitsPerPixel == 0x20)) {
    puVar3 = (undefined4 *)((int)g_ScreenBufferArray[in_stack_00000008] + in_stack_00000004 * 4);
    uVar1 = *puVar3;
    uVar9 = (ushort)(((uint7)(byte)((uint)g_ActiveRenderColor >> 0x18) << 0x30) >> 0x28);
    uVar2 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar12 = (uint5)uVar2 & 0xffffffff00;
    uVar5 = (ushort)(((uint7)(byte)((uint)DAT_02d7a800 >> 0x18) << 0x30) >> 0x28);
    uVar7 = (ushort)(((uint7)(byte)((uint)DAT_02d7a804 >> 0x18) << 0x30) >> 0x28);
    uVar4 = (ushort)(byte)g_ActiveRenderColor * ((ushort)DAT_02d7a804 & 0xff) +
            ((ushort)uVar1 & 0xff) * (ushort)(byte)DAT_02d7a800;
    uVar6 = (ushort)(byte)((uint)g_ActiveRenderColor >> 8) * (ushort)(byte)((uint)DAT_02d7a804 >> 8)
            + ((ushort)(CONCAT43(uVar2,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10) &
              0xff) * (ushort)(byte)((uint)DAT_02d7a800 >> 8);
    uVar8 = (short)CONCAT21(uVar9,(char)((uint)g_ActiveRenderColor >> 0x10)) *
            (short)CONCAT21(uVar7,(char)((uint)DAT_02d7a804 >> 0x10)) +
            (short)(uVar12 >> 8) * (short)CONCAT21(uVar5,(char)((uint)DAT_02d7a800 >> 0x10));
    uVar10 = (uVar9 >> 8) * (uVar7 >> 8) + (short)(uVar12 >> 0x18) * (uVar5 >> 8);
    uVar5 = uVar4 >> 8;
    uVar7 = uVar6 >> 8;
    uVar9 = uVar8 >> 8;
    uVar11 = uVar10 >> 8;
    *puVar3 = CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)(uVar10 >> 8) - (0xff < uVar11),
                       CONCAT12((uVar9 != 0) * (uVar9 < 0x100) * (char)(uVar8 >> 8) - (0xff < uVar9)
                                ,CONCAT11((uVar7 != 0) * (uVar7 < 0x100) * (char)(uVar6 >> 8) -
                                          (0xff < uVar7),
                                          (uVar5 != 0) * (uVar5 < 0x100) * (char)(uVar4 >> 8) -
                                          (0xff < uVar5))));
    return;
  }
  return;
}


// Assembly code:
// 004cc230: PUSH EBX
//   Label: core_flies.cpp_FUN_004cc230
// 004cc231: PUSH ESI
// 004cc232: PUSH EDI
// 004cc233: PUSH EBP
// 004cc234: MOV EBP,ESP
// 004cc236: SUB ESP,0x4
// 004cc239: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004cc23c: SHL EAX,0x2
// 004cc23f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cc242: MOV ECX,dword ptr [EAX + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 004cc248: SHL EDX,0x2
// 004cc24b: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004cc24e: CMP EBX,dword ptr [ECX + EDX*0x1]
// 004cc251: JBE 0x004cc25c
//   XREF to: 004cc25c (CONDITIONAL_JUMP)
// 004cc253: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004cc25a: JZ 0x004cc263
//   XREF to: 004cc263 (CONDITIONAL_JUMP)
// 004cc25c: MOV ESP,EBP
//   Label: LAB_004cc25c
// 004cc25e: POP EBP
// 004cc25f: POP EDI
// 004cc260: POP ESI
// 004cc261: POP EBX
// 004cc262: RET
// 004cc263: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   Label: LAB_004cc263
//   XREF to: 02cf6a9c (DATA)
// 004cc269: ADD EAX,EDX
// 004cc26b: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004cc26e: MOV EDI,dword ptr [EBP + 0xfffffffc]
//   XREF to: Stack[-0x14] (READ)
// 004cc274: MOVD MM0,dword ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 004cc27b: PXOR MM7,MM7
// 004cc27e: MOVD MM1,dword ptr [EDI]
// 004cc281: MOVD MM2,dword ptr [0x02d7a800]
//   XREF to: 02d7a800 (READ)
// 004cc288: MOVD MM3,dword ptr [0x02d7a804]
//   XREF to: 02d7a804 (READ)
// 004cc28f: PUNPCKLBW MM0,MM7
// 004cc292: PUNPCKLBW MM1,MM7
// 004cc295: PUNPCKLBW MM2,MM7
// 004cc298: PUNPCKLBW MM3,MM7
// 004cc29b: PMULLW MM0,MM3
// 004cc29e: PMULLW MM1,MM2
// 004cc2a1: PADDW MM0,MM1
// 004cc2a4: PSRLW MM0,0x8
// 004cc2a8: PACKUSWB MM0,MM7
// 004cc2ab: MOVD dword ptr [EDI],MM0
// 004cc2ae: EMMS
// 004cc2b0: MOV ESP,EBP
// 004cc2b2: POP EBP
// 004cc2b3: POP EDI
// 004cc2b4: POP ESI
// 004cc2b5: POP EBX
// 004cc2b6: RET
