// Name: core_setedit.cpp_FUN_005817d0
// Address: 005817d0
// Address Range: [[005817d0, 00581a96]]
// Convention: __watcallRegister
// Signature: void core_setedit.cpp_FUN_005817d0(void * unk)
// Cross-references:
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581d54 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583514 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00648b39
//   double DOUBLE_00648b3d = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_006816c0
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setedit_cpp_FUN_005817d0(void *unk)

{
  float fVar1;
  float *pfVar2;
  undefined4 in_EDX;
  CDemonRenderer *this_ptr;
  undefined4 unaff_EBX;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_ESI;
  int iVar3;
  undefined4 unaff_EDI;
  uint uVar4;
  float10 fVar5;
  double dVar6;
  undefined4 unaff_retaddr;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  fVar5 = (float10)in_stack_0000000c * (float10)_DAT_00648b39;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,unk));
  this_ptr = (CDemonRenderer *)(int)ROUND(fVar5);
  local_1c = in_stack_00000010 << 8;
  local_18 = in_stack_00000014 << 8;
  local_14 = in_stack_00000018 << 8;
  uVar4 = 0;
  do {
    fVar1 = *in_stack_00000008;
    iVar3 = uVar4 * 0x30;
    while( true ) {
      fVar5 = (float10)fVar1 * (float10)DOUBLE_00648b3d;
      dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(this_ptr,fVar1));
      local_24 = (int)ROUND(fVar5);
      pfVar2 = in_stack_00000008;
      if ((uVar4 & 2) != 0) {
        pfVar2 = in_stack_00000004;
      }
      fVar5 = (float10)pfVar2[1] * (float10)DOUBLE_00648b3d;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),pfVar2[1]));
      local_1c = (int)ROUND(fVar5);
      pfVar2 = in_stack_00000008;
      if ((uVar4 & 4) != 0) {
        pfVar2 = in_stack_00000004;
      }
      fVar5 = (float10)pfVar2[2] * (float10)DOUBLE_00648b3d;
      dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(&local_20,g_CDemonRendererPtr));
      local_14 = (int)ROUND(fVar5);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)(*SUB84(dVar6,0) + iVar3),
                 (CVector3i *)((ulonglong)dVar6 >> 0x20));
      this_ptr = g_CDemonRendererPtr;
      *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar3) = 0x80000;
      *(undefined4 *)((int)&this_ptr->vertex_buffer_ptr->v + iVar3) = 0x80000;
      *(undefined4 *)((int)&this_ptr->vertex_buffer_ptr->light + iVar3) = unaff_EDI;
      *(undefined4 *)((int)&this_ptr->vertex_buffer_ptr->color + iVar3) = unaff_ESI;
      *(undefined4 *)((int)&this_ptr->vertex_buffer_ptr->fog + iVar3) = unaff_EBX;
      uVar4 = uVar4 + 1;
      *(undefined4 *)((int)&this_ptr->vertex_buffer_ptr->w_recip + iVar3) = unaff_retaddr;
      if (7 < (int)uVar4) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr,&DAT_006816c0);
        local_2c._4_4_ = 0;
        local_2c._0_4_ = 0;
        local_34._4_4_ = 0;
        local_34._0_4_ = 0;
        local_24 = 0;
        local_1c = 6;
        local_18 = 4;
        local_20 = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffc4);
        local_14 = 5;
        local_20 = 1;
        local_1c = 3;
        local_18 = 7;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffc8);
        local_1c = 0;
        local_18 = 1;
        local_14 = 3;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_34);
        local_18 = 4;
        local_14 = 5;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_34 + 4));
        local_14 = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_2c);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_2c + 4));
        return;
      }
      if ((uVar4 & 1) == 0) break;
      fVar1 = *in_stack_00000004;
      iVar3 = iVar3 + 0x30;
    }
  } while( true );
}


// Assembly code:
// 005817d0: PUSH EBX
//   Label: core_setedit.cpp_FUN_005817d0
// 005817d1: PUSH ESI
// 005817d2: PUSH EDI
// 005817d3: PUSH EBP
// 005817d4: MOV EBP,ESP
// 005817d6: SUB ESP,0x50
// 005817d9: AND ESP,0xfffffff8
// 005817dc: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005817df: FMUL float ptr [0x00648b39]
//   XREF to: 00648b39 (READ)
// 005817e5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005817ea: FISTP dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (WRITE)
// 005817ee: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 005817f2: TEST EDX,EDX
// 005817f4: JL 0x0058190f
//   XREF to: 0058190f (CONDITIONAL_JUMP)
// 005817fa: CMP EDX,0xffff
// 00581800: JG 0x0058191a
//   XREF to: 0058191a (CONDITIONAL_JUMP)
// 00581806: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_00581806
//   XREF to: Stack[0x10] (READ)
// 00581809: SHL EAX,0x8
// 0058180c: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00581810: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00581813: SHL EAX,0x8
// 00581816: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058181a: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0058181d: SHL EAX,0x8
// 00581820: XOR EDI,EDI
// 00581822: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00581826: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00581826
//   XREF to: Stack[0x8] (READ)
// 00581829: MOV EAX,dword ptr [EAX]
// 0058182b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x60] (DATA)
// 0058182e: IMUL ESI,EDI,0x30
// 00581831: FLD float ptr [ESP]
//   Label: LAB_00581831
//   XREF to: Stack[-0x60] (DATA)
// 00581834: FMUL double ptr [0x00648b3d]
//   XREF to: 00648b3d (READ)
// 0058183a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0058183f: FISTP dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (WRITE)
// 00581843: TEST DI,0x2
// 00581848: JZ 0x00581927
//   XREF to: 00581927 (CONDITIONAL_JUMP)
// 0058184e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00581851: MOV EAX,dword ptr [EAX + 0x4]
//   Label: LAB_00581851
// 00581854: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00581858: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x5c] (READ)
// 0058185c: FMUL double ptr [0x00648b3d]
//   XREF to: 00648b3d (READ)
// 00581862: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00581867: FISTP dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (WRITE)
// 0058186b: TEST DI,0x4
// 00581870: JZ 0x0058192f
//   XREF to: 0058192f (CONDITIONAL_JUMP)
// 00581876: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00581879: MOV EAX,dword ptr [EAX + 0x8]
//   Label: LAB_00581879
// 0058187c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00581880: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00581884: FMUL double ptr [0x00648b3d]
//   XREF to: 00648b3d (READ)
// 0058188a: LEA EDX,[ESP + 0x34]
//   XREF to: Stack[-0x2c] (DATA)
// 0058188e: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00581893: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00581898: FISTP dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (WRITE)
// 0058189c: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0058189e: PUSH EDX
// 0058189f: ADD EAX,ESI
// 005818a1: PUSH EAX
// 005818a2: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005818a7: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005818ad: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005818af: MOV dword ptr [ESI + EAX*0x1 + 0x18],0x80000
// 005818b7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005818b9: MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x80000
// 005818c1: ADD ESP,0x8
// 005818c4: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005818c6: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 005818ca: MOV dword ptr [ESI + EAX*0x1 + 0x20],ECX
// 005818ce: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005818d0: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 005818d4: MOV dword ptr [ESI + EAX*0x1 + 0x24],ECX
// 005818d8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005818da: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005818de: MOV dword ptr [ESI + EAX*0x1 + 0x28],ECX
// 005818e2: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005818e4: LEA ECX,[EAX + ESI*0x1]
// 005818e7: INC EDI
// 005818e8: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 005818ec: ADD ESI,0x30
// 005818ef: MOV dword ptr [ECX + 0x2c],EAX
// 005818f2: CMP EDI,0x8
// 005818f5: JGE 0x00581937
//   XREF to: 00581937 (CONDITIONAL_JUMP)
// 005818f7: TEST DI,0x1
// 005818fc: JZ 0x00581826
//   XREF to: 00581826 (CONDITIONAL_JUMP)
// 00581902: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00581905: MOV EAX,dword ptr [EAX]
// 00581907: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x60] (DATA)
// 0058190a: JMP 0x00581831
//   XREF to: 00581831 (UNCONDITIONAL_JUMP)
// 0058190f: XOR ESI,ESI
//   Label: LAB_0058190f
// 00581911: MOV dword ptr [ESP + 0x4c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00581915: JMP 0x00581806
//   XREF to: 00581806 (UNCONDITIONAL_JUMP)
// 0058191a: MOV dword ptr [ESP + 0x4c],0xffff
//   Label: LAB_0058191a
//   XREF to: Stack[-0x14] (WRITE)
// 00581922: JMP 0x00581806
//   XREF to: 00581806 (UNCONDITIONAL_JUMP)
// 00581927: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00581927
//   XREF to: Stack[0x8] (READ)
// 0058192a: JMP 0x00581851
//   XREF to: 00581851 (UNCONDITIONAL_JUMP)
// 0058192f: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0058192f
//   XREF to: Stack[0x8] (READ)
// 00581932: JMP 0x00581879
//   XREF to: 00581879 (UNCONDITIONAL_JUMP)
// 00581937: PUSH 0x6816c0
//   Label: LAB_00581937
//   XREF to: 006816c0 (DATA)
// 0058193c: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0058193d: MOV EDI,0x4
// 00581942: MOV EBX,0x1
// 00581947: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0058194c: ADD ESP,0x8
// 0058194f: XOR EAX,EAX
// 00581951: MOV ESI,0x3
// 00581956: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0058195a: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0058195e: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00581962: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00581966: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0058196a: MOV EAX,0x6
// 0058196f: MOV EDX,0x4
// 00581974: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00581978: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 0058197c: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00581982: PUSH EAX
// 00581983: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 00581987: MOV EDI,0x2
// 0058198c: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0058198d: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00581991: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 00581995: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 0058199a: MOV EAX,0x5
// 0058199f: ADD ESP,0x8
// 005819a2: MOV EDI,0x7
// 005819a7: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005819ab: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 005819af: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005819b5: PUSH EAX
// 005819b6: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 005819ba: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 005819be: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005819bf: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 005819c3: MOV EDI,0x2
// 005819c8: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 005819cd: ADD ESP,0x8
// 005819d0: XOR ECX,ECX
// 005819d2: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 005819d6: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 005819da: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 005819de: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 005819e2: PUSH EAX
// 005819e3: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005819e8: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005819ec: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005819ed: MOV EBX,0x7
// 005819f2: MOV ESI,0x6
// 005819f7: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 005819fc: MOV EDX,0x4
// 00581a01: MOV ECX,0x5
// 00581a06: ADD ESP,0x8
// 00581a09: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 00581a0d: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00581a13: PUSH EAX
// 00581a14: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00581a18: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00581a1c: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00581a1d: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 00581a21: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00581a25: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 00581a2a: MOV EAX,0x2
// 00581a2f: ADD ESP,0x8
// 00581a32: MOV EDX,0x3
// 00581a37: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00581a3b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 00581a3f: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00581a43: PUSH EAX
// 00581a44: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00581a4a: XOR EDI,EDI
// 00581a4c: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00581a4d: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00581a51: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 00581a55: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 00581a5a: MOV EAX,0x1
// 00581a5f: ADD ESP,0x8
// 00581a62: MOV EDX,0x5
// 00581a67: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00581a6b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 00581a6f: MOV ECX,0x4
// 00581a74: PUSH EAX
// 00581a75: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00581a7b: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 00581a7f: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00581a80: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 00581a84: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00581a88: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 00581a8d: ADD ESP,0x8
// 00581a90: MOV ESP,EBP
// 00581a92: POP EBP
// 00581a93: POP EDI
// 00581a94: POP ESI
// 00581a95: POP EBX
// 00581a96: RET
