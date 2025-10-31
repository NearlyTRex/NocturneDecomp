// Name: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90
// Address: 00409b90
// Address Range: [[00409b90, 00409e61]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_006138e0
//   float FLOAT_006597b0 = 256
//   WatcomTypeInfo g_CVectorTypeInfo
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 UCHAR_ARRAY_02d00c20
//   int g_ActiveRenderColor
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   engine_2d.c_plotPixel_FUN_00401140
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90(CDemonActor *this_ptr)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  uint uStack00000008;
  int in_stack_0000000c;
  CVector3f CStack_94;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x4ff);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xffffff68,10,&g_CVectorTypeInfo)
  ;
  iVar4 = (*((this_ptr->metadata).vtable)->getTargetPoints)(this_ptr,&CStack_94);
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      uStack00000008 = (uint)g_ColorCubeLookup[0x7c00];
      CStack_94.z = 5.933508e-39;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,
                 (CVector3i *)&stack0xfffffff8);
      pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
      if ((int)(pSVar3[19999].projected_vertex.screen_x & -0x80000000) == 0) {
        iVar5 = pSVar3[19999].projected_vertex.screen_x >> 0x10;
        g_ActiveRenderColor = in_stack_0000000c;
        iVar7 = pSVar3[19999].projected_vertex.screen_y >> 0x10;
        if ((((-1 < iVar5) && (-1 < iVar7)) && (iVar5 < g_WindowWidth)) && (iVar7 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar7);
        }
        iVar1 = iVar5 + -1;
        iVar2 = iVar7 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + -1;
        iVar2 = iVar7 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + 1;
        iVar2 = iVar7 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + 1;
        iVar2 = iVar7 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + -2;
        iVar2 = iVar7 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + -2;
        iVar2 = iVar7 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + 2;
        iVar2 = iVar7 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar5 = iVar5 + 2;
        iVar7 = iVar7 + 2;
        if (((-1 < iVar5) && (-1 < iVar7)) && ((iVar5 < g_WindowWidth && (iVar7 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar7);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}


// Assembly code:
// 00409b90: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90
// 00409b91: PUSH ESI
// 00409b92: PUSH EDI
// 00409b93: PUSH EBP
// 00409b94: SUB ESP,0x8c
// 00409b9a: MOV EBX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0x4] (READ)
// 00409ba1: PUSH 0x4ff
// 00409ba6: PUSH 0x6138e0
//   XREF to: 006138e0 (DATA)
// 00409bab: PUSH EBX
// 00409bac: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409bb1: ADD ESP,0xc
// 00409bb4: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00409bb9: PUSH 0xa
// 00409bbb: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x9c] (DATA)
// 00409bbf: PUSH EAX
// 00409bc0: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00409bc5: ADD ESP,0xc
// 00409bc8: MOV EAX,ESP
// 00409bca: PUSH EAX
// 00409bcb: MOV EDX,dword ptr [EBX + 0x154]
// 00409bd1: PUSH EBX
// 00409bd2: CALL dword ptr [EDX + 0x4c]
// 00409bd5: ADD ESP,0x8
// 00409bd8: XOR EBP,EBP
// 00409bda: MOV dword ptr [ESP + 0x84],EAX
// 00409be1: TEST EAX,EAX
// 00409be3: JLE 0x00409c5a
//   XREF to: 00409c5a (CONDITIONAL_JUMP)
// 00409be5: MOV EDI,ESP
// 00409be7: XOR EAX,EAX
//   Label: LAB_00409be7
// 00409be9: MOV AL,[0x02d00c20]
//   XREF to: 02d00c20 (READ)
// 00409bee: LEA EBX,[ESP + 0x78]
// 00409bf2: MOV dword ptr [ESP + 0x88],EAX
// 00409bf9: MOV EAX,EDI
// 00409bfb: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00409c01: FLD float ptr [EAX]
// 00409c03: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 00409c09: FISTP dword ptr [EBX]
// 00409c0b: FLD float ptr [EAX + 0x4]
// 00409c0e: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 00409c14: FISTP dword ptr [EBX + 0x4]
// 00409c17: FLD float ptr [EAX + 0x8]
// 00409c1a: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 00409c20: FISTP dword ptr [EBX + 0x8]
// 00409c23: LEA EAX,[ESP + 0x78]
// 00409c27: PUSH EAX
// 00409c28: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00409c2a: ADD EAX,0xea5d0
// 00409c2f: PUSH EAX
// 00409c30: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00409c35: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00409c3b: MOV ESI,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 00409c3d: MOV AH,byte ptr [ESI + 0xea5e3]
// 00409c43: ADD ESP,0x8
// 00409c46: TEST AH,0x80
// 00409c49: JZ 0x00409c65
//   XREF to: 00409c65 (CONDITIONAL_JUMP)
// 00409c4b: MOV EDX,dword ptr [ESP + 0x84]
//   Label: LAB_00409c4b
// 00409c52: INC EBP
// 00409c53: ADD EDI,0xc
// 00409c56: CMP EBP,EDX
// 00409c58: JL 0x00409be7
//   XREF to: 00409be7 (CONDITIONAL_JUMP)
// 00409c5a: ADD ESP,0x8c
//   Label: LAB_00409c5a
// 00409c60: POP EBP
// 00409c61: POP EDI
// 00409c62: POP ESI
// 00409c63: POP EBX
// 00409c64: RET
// 00409c65: MOV EBX,dword ptr [ESI + 0xea5e0]
//   Label: LAB_00409c65
// 00409c6b: MOV EAX,dword ptr [ESP + 0x88]
// 00409c72: SAR EBX,0x10
// 00409c75: MOV ESI,dword ptr [ESI + 0xea5e4]
// 00409c7b: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00409c80: SAR ESI,0x10
// 00409c83: TEST EBX,EBX
// 00409c85: JL 0x00409c97
//   XREF to: 00409c97 (CONDITIONAL_JUMP)
// 00409c87: TEST ESI,ESI
// 00409c89: JL 0x00409c97
//   XREF to: 00409c97 (CONDITIONAL_JUMP)
// 00409c8b: CMP EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409c91: JL 0x00409d8a
//   XREF to: 00409d8a (CONDITIONAL_JUMP)
// 00409c97: LEA EAX,[EBX + -0x1]
//   Label: LAB_00409c97
// 00409c9a: LEA EDX,[ESI + -0x1]
// 00409c9d: TEST EAX,EAX
// 00409c9f: JL 0x00409cb1
//   XREF to: 00409cb1 (CONDITIONAL_JUMP)
// 00409ca1: TEST EDX,EDX
// 00409ca3: JL 0x00409cb1
//   XREF to: 00409cb1 (CONDITIONAL_JUMP)
// 00409ca5: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409cab: JL 0x00409da5
//   XREF to: 00409da5 (CONDITIONAL_JUMP)
// 00409cb1: LEA EAX,[EBX + -0x1]
//   Label: LAB_00409cb1
// 00409cb4: LEA EDX,[ESI + 0x1]
// 00409cb7: TEST EAX,EAX
// 00409cb9: JL 0x00409ccb
//   XREF to: 00409ccb (CONDITIONAL_JUMP)
// 00409cbb: TEST EDX,EDX
// 00409cbd: JL 0x00409ccb
//   XREF to: 00409ccb (CONDITIONAL_JUMP)
// 00409cbf: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409cc5: JL 0x00409dc0
//   XREF to: 00409dc0 (CONDITIONAL_JUMP)
// 00409ccb: LEA EAX,[EBX + 0x1]
//   Label: LAB_00409ccb
// 00409cce: LEA EDX,[ESI + -0x1]
// 00409cd1: TEST EAX,EAX
// 00409cd3: JL 0x00409ce5
//   XREF to: 00409ce5 (CONDITIONAL_JUMP)
// 00409cd5: TEST EDX,EDX
// 00409cd7: JL 0x00409ce5
//   XREF to: 00409ce5 (CONDITIONAL_JUMP)
// 00409cd9: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409cdf: JL 0x00409ddb
//   XREF to: 00409ddb (CONDITIONAL_JUMP)
// 00409ce5: LEA EDX,[EBX + 0x1]
//   Label: LAB_00409ce5
// 00409ce8: LEA EAX,[ESI + 0x1]
// 00409ceb: TEST EDX,EDX
// 00409ced: JL 0x00409cff
//   XREF to: 00409cff (CONDITIONAL_JUMP)
// 00409cef: TEST EAX,EAX
// 00409cf1: JL 0x00409cff
//   XREF to: 00409cff (CONDITIONAL_JUMP)
// 00409cf3: CMP EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409cf9: JL 0x00409df6
//   XREF to: 00409df6 (CONDITIONAL_JUMP)
// 00409cff: LEA EAX,[EBX + -0x2]
//   Label: LAB_00409cff
// 00409d02: LEA EDX,[ESI + -0x2]
// 00409d05: TEST EAX,EAX
// 00409d07: JL 0x00409d19
//   XREF to: 00409d19 (CONDITIONAL_JUMP)
// 00409d09: TEST EDX,EDX
// 00409d0b: JL 0x00409d19
//   XREF to: 00409d19 (CONDITIONAL_JUMP)
// 00409d0d: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409d13: JL 0x00409e11
//   XREF to: 00409e11 (CONDITIONAL_JUMP)
// 00409d19: LEA EAX,[EBX + -0x2]
//   Label: LAB_00409d19
// 00409d1c: LEA EDX,[ESI + 0x2]
// 00409d1f: TEST EAX,EAX
// 00409d21: JL 0x00409d33
//   XREF to: 00409d33 (CONDITIONAL_JUMP)
// 00409d23: TEST EDX,EDX
// 00409d25: JL 0x00409d33
//   XREF to: 00409d33 (CONDITIONAL_JUMP)
// 00409d27: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409d2d: JL 0x00409e2c
//   XREF to: 00409e2c (CONDITIONAL_JUMP)
// 00409d33: LEA EAX,[EBX + 0x2]
//   Label: LAB_00409d33
// 00409d36: LEA EDX,[ESI + -0x2]
// 00409d39: TEST EAX,EAX
// 00409d3b: JL 0x00409d4d
//   XREF to: 00409d4d (CONDITIONAL_JUMP)
// 00409d3d: TEST EDX,EDX
// 00409d3f: JL 0x00409d4d
//   XREF to: 00409d4d (CONDITIONAL_JUMP)
// 00409d41: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409d47: JL 0x00409e47
//   XREF to: 00409e47 (CONDITIONAL_JUMP)
// 00409d4d: ADD EBX,0x2
//   Label: LAB_00409d4d
// 00409d50: ADD ESI,0x2
// 00409d53: TEST EBX,EBX
// 00409d55: JL 0x00409c4b
//   XREF to: 00409c4b (CONDITIONAL_JUMP)
// 00409d5b: TEST ESI,ESI
// 00409d5d: JL 0x00409c4b
//   XREF to: 00409c4b (CONDITIONAL_JUMP)
// 00409d63: CMP EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409d69: JGE 0x00409c4b
//   XREF to: 00409c4b (CONDITIONAL_JUMP)
// 00409d6f: CMP ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00409d75: JGE 0x00409c4b
//   XREF to: 00409c4b (CONDITIONAL_JUMP)
// 00409d7b: PUSH ESI
// 00409d7c: PUSH EBX
// 00409d7d: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409d82: ADD ESP,0x8
// 00409d85: JMP 0x00409c4b
//   XREF to: 00409c4b (UNCONDITIONAL_JUMP)
// 00409d8a: CMP ESI,dword ptr [0x00679398]
//   Label: LAB_00409d8a
//   XREF to: 00679398 (READ)
// 00409d90: JGE 0x00409c97
//   XREF to: 00409c97 (CONDITIONAL_JUMP)
// 00409d96: PUSH ESI
// 00409d97: PUSH EBX
// 00409d98: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409d9d: ADD ESP,0x8
// 00409da0: JMP 0x00409c97
//   XREF to: 00409c97 (UNCONDITIONAL_JUMP)
// 00409da5: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409da5
//   XREF to: 00679398 (READ)
// 00409dab: JGE 0x00409cb1
//   XREF to: 00409cb1 (CONDITIONAL_JUMP)
// 00409db1: PUSH EDX
// 00409db2: PUSH EAX
// 00409db3: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409db8: ADD ESP,0x8
// 00409dbb: JMP 0x00409cb1
//   XREF to: 00409cb1 (UNCONDITIONAL_JUMP)
// 00409dc0: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409dc0
//   XREF to: 00679398 (READ)
// 00409dc6: JGE 0x00409ccb
//   XREF to: 00409ccb (CONDITIONAL_JUMP)
// 00409dcc: PUSH EDX
// 00409dcd: PUSH EAX
// 00409dce: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409dd3: ADD ESP,0x8
// 00409dd6: JMP 0x00409ccb
//   XREF to: 00409ccb (UNCONDITIONAL_JUMP)
// 00409ddb: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409ddb
//   XREF to: 00679398 (READ)
// 00409de1: JGE 0x00409ce5
//   XREF to: 00409ce5 (CONDITIONAL_JUMP)
// 00409de7: PUSH EDX
// 00409de8: PUSH EAX
// 00409de9: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409dee: ADD ESP,0x8
// 00409df1: JMP 0x00409ce5
//   XREF to: 00409ce5 (UNCONDITIONAL_JUMP)
// 00409df6: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_00409df6
//   XREF to: 00679398 (READ)
// 00409dfc: JGE 0x00409cff
//   XREF to: 00409cff (CONDITIONAL_JUMP)
// 00409e02: PUSH EAX
// 00409e03: PUSH EDX
// 00409e04: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409e09: ADD ESP,0x8
// 00409e0c: JMP 0x00409cff
//   XREF to: 00409cff (UNCONDITIONAL_JUMP)
// 00409e11: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409e11
//   XREF to: 00679398 (READ)
// 00409e17: JGE 0x00409d19
//   XREF to: 00409d19 (CONDITIONAL_JUMP)
// 00409e1d: PUSH EDX
// 00409e1e: PUSH EAX
// 00409e1f: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409e24: ADD ESP,0x8
// 00409e27: JMP 0x00409d19
//   XREF to: 00409d19 (UNCONDITIONAL_JUMP)
// 00409e2c: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409e2c
//   XREF to: 00679398 (READ)
// 00409e32: JGE 0x00409d33
//   XREF to: 00409d33 (CONDITIONAL_JUMP)
// 00409e38: PUSH EDX
// 00409e39: PUSH EAX
// 00409e3a: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409e3f: ADD ESP,0x8
// 00409e42: JMP 0x00409d33
//   XREF to: 00409d33 (UNCONDITIONAL_JUMP)
// 00409e47: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409e47
//   XREF to: 00679398 (READ)
// 00409e4d: JGE 0x00409d4d
//   XREF to: 00409d4d (CONDITIONAL_JUMP)
// 00409e53: PUSH EDX
// 00409e54: PUSH EAX
// 00409e55: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409e5a: ADD ESP,0x8
// 00409e5d: JMP 0x00409d4d
//   XREF to: 00409d4d (UNCONDITIONAL_JUMP)
