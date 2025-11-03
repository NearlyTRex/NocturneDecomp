// Name: core_set.cpp_CDemonSet_FUN_00570040
// Address: 00570040
// Address Range: [[00570040, 005702ab]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570040(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056ffe0 (0056ffe0) at 0056fff8 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570010 (00570010) at 00570028 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_CurrentAlphaValue = 0xff
//   CGame* g_CGamePtr = 02d81a9c
//   SMRGLTextureBasic DAT_006813e4
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   undefined4 DAT_02d81c90
//   CVector3f[20000] g_VertexNormalArray
//   undefined4 DAT_033081d0
//   undefined4 DAT_033081d4
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
//   engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570040(CDemonSet *this_ptr)

{
  short *psVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar7;
  int iVar8;
  SMRGLHeaderPrimitive *pSVar9;
  byte bVar10;
  int unaff_retaddr;
  undefined4 *in_stack_00000008;
  int in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000028;
  CVector3i *in_stack_ffffff18;
  SMRGLHeaderPrimitive SStack_e4;
  int aiStack_cc [12];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_006813e4);
  if (g_CGamePtr->field62_0x1f4 != 2) {
    lVar4 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)in_stack_00000014;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_ffffff18);
  if (0 < in_stack_0000001c) {
    do {
      puVar7 = in_stack_00000008;
      pSVar9 = &SStack_e4;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pSVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        pSVar9 = (SMRGLHeaderPrimitive *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
      }
      iVar5 = 0;
      if (0 < SStack_e4.base.count) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          iVar3 = *(int *)((int)aiStack_cc + iVar8);
          iVar8 = iVar8 + 0xc;
          iVar5 = iVar5 + 1;
          iStack_1c = (int)ROUND(g_VertexNormalArray[iVar3].x);
          fVar2 = g_VertexNormalArray[iVar3].y;
          iStack_18 = (int)ROUND(fVar2);
          local_14 = (int)ROUND(g_VertexNormalArray[iVar3].z);
          *(int *)((int)&uStack_5c + iVar6) = (int)ROUND(g_VertexNormalArray[iVar3].x) + 0x8000;
          *(int *)((int)&uStack_9c + iVar6) = 0x8000 - (int)ROUND(fVar2);
          iVar6 = iVar6 + 4;
        } while (iVar5 < SStack_e4.base.count);
      }
      if (1 < SStack_e4.base.count) {
        iVar5 = 4;
        do {
          if ((0x8000 < uStack_5c) && (*(int *)((int)&uStack_5c + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&uStack_5c + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((uStack_5c < -0x8000) && (0x8000 < *(int *)((int)&uStack_5c + iVar5))) {
            *(int *)((int)&uStack_5c + iVar5) = *(int *)((int)&uStack_5c + iVar5) + -0x10000;
          }
          if ((0x8000 < uStack_9c) && (*(int *)((int)&uStack_9c + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&uStack_9c + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((uStack_9c < -0x8000) && (0x8000 < *(int *)((int)&uStack_9c + iVar5))) {
            *(int *)((int)&uStack_9c + iVar5) = *(int *)((int)&uStack_9c + iVar5) + -0x10000;
          }
          iVar5 = iVar5 + 4;
        } while (SBORROW4(iVar5,SStack_e4.base.count * 4) != iVar5 + SStack_e4.base.count * -4 < 0);
      }
      iVar5 = 0;
      if (0 < SStack_e4.base.count) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          *(int *)((int)aiStack_cc + iVar6 + 4) = *(int *)((int)&uStack_5c + iVar8) << 8;
          *(int *)((int)aiStack_cc + iVar6 + 8) = *(int *)((int)&uStack_9c + iVar8) << 8;
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
          iVar6 = iVar6 + 0xc;
        } while (iVar5 < SStack_e4.base.count);
      }
      if (in_stack_00000020 < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
                  (g_CDemonRendererPtr,&SStack_e4);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0(g_CDemonRendererPtr,&SStack_e4)
        ;
      }
      unaff_retaddr = unaff_retaddr + 1;
      in_stack_00000008 = (undefined4 *)((int)in_stack_00000008 + in_stack_00000028);
    } while (unaff_retaddr < in_stack_00000020);
  }
  return;
}


// Assembly code:
// 00570040: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00570040
// 00570041: PUSH ESI
// 00570042: PUSH EDI
// 00570043: PUSH EBP
// 00570044: SUB ESP,0xe4
// 0057004a: MOV EBP,dword ptr [ESP + 0xfc]
//   XREF to: Stack[0x8] (READ)
// 00570051: PUSH 0x6813e4
//   XREF to: 006813e4 (DATA)
// 00570056: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057005c: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0057005d: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00570062: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00570067: MOV ECX,dword ptr [EAX + 0x1f4]
//   XREF to: 02d81c90 (READ)
// 0057006d: ADD ESP,0x8
// 00570070: CMP ECX,0x2
// 00570073: JNZ 0x00570259
//   XREF to: 00570259 (CONDITIONAL_JUMP)
// 00570079: MOV EAX,[0x006793b4]
//   XREF to: 006793b4 (READ)
// 0057007e: SHL EAX,0x8
// 00570081: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[0x10] (WRITE)
// 00570088: MOV EAX,[0x006703ec]
//   Label: LAB_00570088
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057008d: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0057008e: LEA ESI,[ESP + 0xd8]
//   XREF to: Stack[-0x20] (DATA)
// 00570095: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   XREF to: 0048c760 (UNCONDITIONAL_CALL)
// 0057009a: ADD ESP,0x4
// 0057009d: XOR EDX,EDX
// 0057009f: MOV ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0xc] (READ)
// 005700a6: MOV dword ptr [ESP + 0xe0],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005700ad: TEST ECX,ECX
// 005700af: JLE 0x0057024e
//   XREF to: 0057024e (CONDITIONAL_JUMP)
// 005700b5: MOV ECX,0x12
//   Label: LAB_005700b5
// 005700ba: MOV EDI,ESP
// 005700bc: MOV ESI,EBP
// 005700be: MOVSD.REP ES:EDI,ESI
// 005700c0: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xf0] (READ)
// 005700c4: XOR ECX,ECX
// 005700c6: TEST EAX,EAX
// 005700c8: JLE 0x00570126
//   XREF to: 00570126 (CONDITIONAL_JUMP)
// 005700ca: XOR ESI,ESI
// 005700cc: XOR EDX,EDX
// 005700ce: MOV EAX,dword ptr [ESP + ESI*0x1 + 0x18]
//   Label: LAB_005700ce
// 005700d2: IMUL EAX,EAX,0xc
// 005700d5: LEA EBX,[ESP + 0xc8]
//   XREF to: Stack[-0x2c] (DATA)
// 005700dc: ADD EDX,0x4
// 005700df: ADD ESI,0xc
// 005700e2: ADD EAX,0x33081cc
//   XREF to: 033081cc (DATA)
// 005700e7: INC ECX
// 005700e8: FLD float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 005700ea: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x2c] (DATA)
// 005700ec: FLD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 005700ef: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x28] (WRITE)
// 005700f2: FLD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 005700f5: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x24] (WRITE)
// 005700f8: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x28] (READ)
// 005700ff: MOV EBX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x2c] (DATA)
// 00570106: NEG EAX
// 00570108: ADD EBX,0x8000
// 0057010e: ADD EAX,0x8000
// 00570113: MOV dword ptr [ESP + EDX*0x1 + 0x84],EBX
// 0057011a: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xf0] (READ)
// 0057011e: MOV dword ptr [ESP + EDX*0x1 + 0x44],EAX
// 00570122: CMP ECX,EBX
// 00570124: JL 0x005700ce
//   XREF to: 005700ce (CONDITIONAL_JUMP)
// 00570126: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_00570126
//   XREF to: Stack[-0xf0] (READ)
// 0057012a: CMP ESI,0x1
// 0057012d: JLE 0x005701ce
//   XREF to: 005701ce (CONDITIONAL_JUMP)
// 00570133: MOV EAX,0x4
// 00570138: LEA ECX,[ESI*0x4 + 0x0]
// 0057013f: CMP dword ptr [ESP + 0x88],0x8000
//   Label: LAB_0057013f
//   XREF to: Stack[-0x6c] (READ)
// 0057014a: JLE 0x00570161
//   XREF to: 00570161 (CONDITIONAL_JUMP)
// 0057014c: CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000
// 00570157: JGE 0x00570161
//   XREF to: 00570161 (CONDITIONAL_JUMP)
// 00570159: INC word ptr [ESP + EAX*0x1 + 0x8a]
// 00570161: CMP dword ptr [ESP + 0x88],0xffff8000
//   Label: LAB_00570161
//   XREF to: Stack[-0x6c] (READ)
// 0057016c: JGE 0x0057018a
//   XREF to: 0057018a (CONDITIONAL_JUMP)
// 0057016e: MOV EDI,dword ptr [ESP + EAX*0x1 + 0x88]
// 00570175: CMP EDI,0x8000
// 0057017b: JLE 0x0057018a
//   XREF to: 0057018a (CONDITIONAL_JUMP)
// 0057017d: LEA EDX,[EDI + 0xffff0000]
// 00570183: MOV dword ptr [ESP + EAX*0x1 + 0x88],EDX
// 0057018a: CMP dword ptr [ESP + 0x48],0x8000
//   Label: LAB_0057018a
//   XREF to: Stack[-0xac] (READ)
// 00570192: JLE 0x005701a3
//   XREF to: 005701a3 (CONDITIONAL_JUMP)
// 00570194: CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000
// 0057019c: JGE 0x005701a3
//   XREF to: 005701a3 (CONDITIONAL_JUMP)
// 0057019e: INC word ptr [ESP + EAX*0x1 + 0x4a]
// 005701a3: CMP dword ptr [ESP + 0x48],0xffff8000
//   Label: LAB_005701a3
//   XREF to: Stack[-0xac] (READ)
// 005701ab: JGE 0x005701c3
//   XREF to: 005701c3 (CONDITIONAL_JUMP)
// 005701ad: MOV EDX,dword ptr [ESP + EAX*0x1 + 0x48]
// 005701b1: CMP EDX,0x8000
// 005701b7: JLE 0x005701c3
//   XREF to: 005701c3 (CONDITIONAL_JUMP)
// 005701b9: LEA EBX,[EDX + 0xffff0000]
// 005701bf: MOV dword ptr [ESP + EAX*0x1 + 0x48],EBX
// 005701c3: ADD EAX,0x4
//   Label: LAB_005701c3
// 005701c6: CMP EAX,ECX
// 005701c8: JL 0x0057013f
//   XREF to: 0057013f (CONDITIONAL_JUMP)
// 005701ce: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_005701ce
//   XREF to: Stack[-0xf0] (READ)
//   XREF to: Stack[-0xf0] (DATA)
// 005701d2: XOR ECX,ECX
// 005701d4: TEST EDI,EDI
// 005701d6: JLE 0x00570204
//   XREF to: 00570204 (CONDITIONAL_JUMP)
// 005701d8: XOR EAX,EAX
// 005701da: XOR EDX,EDX
// 005701dc: MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88]
//   Label: LAB_005701dc
// 005701e3: SHL EBX,0x8
// 005701e6: MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX
// 005701ea: MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48]
// 005701ee: ADD EDX,0xc
// 005701f1: SHL EBX,0x8
// 005701f4: MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX
// 005701f8: INC ECX
// 005701f9: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xf0] (READ)
// 005701fd: ADD EAX,0x4
// 00570200: CMP ECX,ESI
// 00570202: JL 0x005701dc
//   XREF to: 005701dc (CONDITIONAL_JUMP)
// 00570204: CMP dword ptr [ESP + 0x104],0xfde8
//   Label: LAB_00570204
//   XREF to: Stack[0x10] (READ)
// 0057020f: JLE 0x00570299
//   XREF to: 00570299 (CONDITIONAL_JUMP)
// 00570215: MOV EAX,ESP
// 00570217: PUSH EAX
// 00570218: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057021e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0057021f: CALL engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
//   XREF to: 0048b1e0 (UNCONDITIONAL_CALL)
// 00570224: ADD ESP,0x8
//   Label: LAB_00570224
// 00570227: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x14] (READ)
// 0057022e: MOV ESI,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x14] (READ)
// 00570235: MOV EDI,dword ptr [ESP + 0x100]
//   XREF to: Stack[0xc] (READ)
// 0057023c: INC ESI
// 0057023d: ADD EBP,EBX
// 0057023f: MOV dword ptr [ESP + 0xe0],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00570246: CMP ESI,EDI
// 00570248: JL 0x005700b5
//   XREF to: 005700b5 (CONDITIONAL_JUMP)
// 0057024e: ADD ESP,0xe4
//   Label: LAB_0057024e
// 00570254: POP EBP
// 00570255: POP EDI
// 00570256: POP ESI
// 00570257: POP EBX
// 00570258: RET
// 00570259: MOV EAX,0xffff
//   Label: LAB_00570259
// 0057025e: MOV EBX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 00570264: MOV EDX,dword ptr [ESP + 0x104]
//   XREF to: Stack[0x10] (READ)
// 0057026b: SUB EAX,EBX
// 0057026d: IMUL EDX
// 0057026f: SHRD EAX,EDX,0x10
// 00570273: PUSH EAX
// 00570274: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0057027a: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0057027b: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 00570280: ADD ESP,0x8
// 00570283: PUSH 0x0
// 00570285: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0057028b: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0057028c: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00570291: ADD ESP,0x8
// 00570294: JMP 0x00570088
//   XREF to: 00570088 (UNCONDITIONAL_JUMP)
// 00570299: MOV EAX,ESP
//   Label: LAB_00570299
// 0057029b: PUSH EAX
// 0057029c: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005702a1: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005702a2: CALL engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
//   XREF to: 0048b970 (UNCONDITIONAL_CALL)
// 005702a7: JMP 0x00570224
//   XREF to: 00570224 (UNCONDITIONAL_JUMP)
