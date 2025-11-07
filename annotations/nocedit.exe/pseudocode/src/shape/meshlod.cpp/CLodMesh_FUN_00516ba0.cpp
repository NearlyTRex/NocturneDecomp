// Name: shape_meshlod.cpp_CLodMesh_FUN_00516ba0
// Address: 00516ba0
// Address Range: [[00516ba0, 00516d46]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_FUN_00516ba0(CLodMesh * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589e84 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d17d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Mesh_degredation_in_prog_00637615
//   TerminatedCString s_est_d_02d_remaining_00637644
//   double DOUBLE_0063765d = 0.0000152587890625
//   double DOUBLE_00637665 = 0.0555555555555556
//   undefined1 DAT_02f31258
//   undefined1 DAT_02f31259
//   undefined1 DAT_02f3125a
//   undefined1 DAT_02f3125b
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_meshlod.cpp_CLodMesh_FUN_005164d0
//   shape_meshlod.cpp_CLodMesh_FUN_00516d50
//   shape_meshlod.cpp_CLodMesh_FUN_00517630
//   shape_meshlod.cpp_CLodMesh_FUN_00519680
//   shape_meshlod.cpp_CLodMesh_FUN_0051b870
//   shape_meshlod.cpp_CLodMesh_FUN_0051d250
//   shape_meshlod.cpp_CLodMesh_FUN_0051d4a0
//   shape_meshlod.cpp_FUN_0051d520
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_FUN_00516ba0(CLodMesh *this_ptr)

{
  SLodEdge *pSVar1;
  CLodMesh *pCVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  int unaff_EBX;
  char *pcVar5;
  char *buffer;
  float10 fVar6;
  double dVar7;
  double dVar8;
  int in_stack_00000008;
  float in_stack_ffffffe0;
  float in_stack_ffffffe8;
  
  shape_meshlod_cpp_CLodMesh_FUN_00516d50(this_ptr);
  pCVar2 = (CLodMesh *)wincore_winrun_cpp_getTime_FUN_005f2dc0();
  while ((iVar3 = shape_meshlod_cpp_CLodMesh_FUN_005164d0(this_ptr), in_stack_00000008 < iVar3 &&
         (iVar4 = shape_meshlod_cpp_CLodMesh_FUN_00519680(this_ptr), -1 < iVar4))) {
    fVar6 = (float10)in_stack_ffffffe0;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,iVar4 * 0xf0));
    pSVar1 = this_ptr->edges_ptr;
    iVar4 = crt_stdio_c_sprintf_FUN_005fdbd0
                      (&DAT_02f31258,"Mesh degredation in progress...%d:%02d elapsed",(int)ROUND(fVar6) / 0x3c,
                       (int)ROUND(fVar6) % 0x3c,pCVar2);
    if ((5 < unaff_EBX) && (iVar4 = this_ptr->next_lod->tri_count - iVar3, 10 < iVar4)) {
      fVar6 = ((float10)(iVar3 - in_stack_00000008) * (float10)in_stack_ffffffe8) / (float10)iVar4;
      dVar8 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_stack_00000008,iVar4));
      iVar4 = SUB84(dVar8,0);
      unaff_EBX = (int)ROUND(fVar6);
      if (0 < unaff_EBX) {
        pcVar5 = &DAT_02f31258;
        do {
          buffer = pcVar5;
          if (*pcVar5 == '\0') goto LAB_00516cb3;
          if (*pcVar5 == '\0') break;
          buffer = pcVar5 + 1;
          if (*buffer == '\0') goto LAB_00516cb3;
          pcVar5 = pcVar5 + 2;
        } while (*buffer != '\0');
        buffer = (char *)0x0;
LAB_00516cb3:
        iVar4 = crt_stdio_c_sprintf_FUN_005fdbd0
                          (buffer,", est %d:%02d remaining",unaff_EBX / 0x3c,unaff_EBX % 0x3c);
      }
    }
    iVar3 = shape_meshlod_cpp_FUN_0051d520(iVar4);
    if (iVar3 == 0) break;
    in_stack_ffffffe8 = *(float *)(pSVar1->field2_0x8 + SUB84(dVar7,0) + -8);
    in_stack_ffffffe0 = 7.477731e-39;
    pCVar2 = this_ptr;
    shape_meshlod_cpp_CLodMesh_FUN_00517630(this_ptr);
    shape_meshlod_cpp_CLodMesh_FUN_0051d4a0(this_ptr);
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  shape_meshlod_cpp_CLodMesh_FUN_0051d250(this_ptr);
  shape_meshlod_cpp_CLodMesh_FUN_0051b870(this_ptr);
  return;
}


// Assembly code:
// 00516ba0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_00516ba0
// 00516ba1: PUSH ESI
// 00516ba2: PUSH EDI
// 00516ba3: PUSH EBP
// 00516ba4: MOV EBP,ESP
// 00516ba6: SUB ESP,0x1c
// 00516ba9: AND ESP,0xfffffff8
// 00516bac: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00516baf: PUSH EBX
// 00516bb0: CALL shape_meshlod.cpp_CLodMesh_FUN_00516d50
//   XREF to: 00516d50 (UNCONDITIONAL_CALL)
// 00516bb5: ADD ESP,0x4
// 00516bb8: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00516bbd: XOR EDX,EDX
// 00516bbf: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00516bc3: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x30] (DATA)
// 00516bc6: PUSH EBX
//   Label: LAB_00516bc6
// 00516bc7: CALL shape_meshlod.cpp_CLodMesh_FUN_005164d0
//   XREF to: 005164d0 (UNCONDITIONAL_CALL)
// 00516bcc: ADD ESP,0x4
// 00516bcf: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00516bd2: MOV ESI,EAX
// 00516bd4: CMP EAX,ECX
// 00516bd6: JLE 0x00516d2a
//   XREF to: 00516d2a (CONDITIONAL_JUMP)
// 00516bdc: PUSH EBX
// 00516bdd: CALL shape_meshlod.cpp_CLodMesh_FUN_00519680
//   XREF to: 00519680 (UNCONDITIONAL_CALL)
// 00516be2: ADD ESP,0x4
// 00516be5: TEST EAX,EAX
// 00516be7: JL 0x00516d2a
//   XREF to: 00516d2a (CONDITIONAL_JUMP)
// 00516bed: IMUL EAX,EAX,0xf0
// 00516bf3: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00516bf6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00516bfb: MOV EDI,dword ptr [EBX + 0x48]
// 00516bfe: FISTP dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 00516c02: ADD EDI,EAX
// 00516c04: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00516c08: MOV EDX,EAX
// 00516c0a: MOV ECX,0x3c
// 00516c0f: SAR EDX,0x1f
// 00516c12: IDIV ECX
// 00516c14: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00516c18: PUSH EDX
// 00516c19: MOV EDX,EAX
// 00516c1b: SAR EDX,0x1f
// 00516c1e: IDIV ECX
// 00516c20: PUSH EAX
// 00516c21: PUSH 0x637615
//   XREF to: 00637615 (DATA)
// 00516c26: PUSH 0x2f31258
//   XREF to: 02f31258 (DATA)
// 00516c2b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00516c30: ADD ESP,0x10
// 00516c33: CMP dword ptr [ESP + 0x14],0x5
//   XREF to: Stack[-0x1c] (READ)
// 00516c38: JLE 0x00516cbc
//   XREF to: 00516cbc (CONDITIONAL_JUMP)
// 00516c3e: MOV EAX,dword ptr [EBX + 0x34]
// 00516c41: MOV EAX,dword ptr [EAX + 0x8]
// 00516c44: SUB EAX,ESI
// 00516c46: CMP EAX,0xa
// 00516c49: JLE 0x00516cbc
//   XREF to: 00516cbc (CONDITIONAL_JUMP)
// 00516c4b: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00516c4e: SUB ESI,EDX
// 00516c50: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00516c54: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00516c58: FMUL float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00516c5b: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00516c5f: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00516c63: FDIVP
// 00516c65: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00516c6a: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00516c6e: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00516c72: TEST ECX,ECX
// 00516c74: JLE 0x00516cbc
//   XREF to: 00516cbc (CONDITIONAL_JUMP)
// 00516c76: MOV ESI,0x3c
// 00516c7b: MOV EDX,ECX
// 00516c7d: MOV EAX,ECX
// 00516c7f: SAR EDX,0x1f
// 00516c82: IDIV ESI
// 00516c84: PUSH EDX
// 00516c85: MOV EDX,ECX
// 00516c87: MOV EAX,ECX
// 00516c89: SAR EDX,0x1f
// 00516c8c: IDIV ESI
// 00516c8e: PUSH EAX
// 00516c8f: PUSH 0x637644
//   XREF to: 00637644 (DATA)
// 00516c94: MOV ESI,0x2f31258
//   XREF to: 02f31258 (DATA)
// 00516c99: XOR DL,DL
// 00516c9b: MOV AL,byte ptr [ESI]
//   Label: LAB_00516c9b
//   XREF to: 02f31258 (READ)
//   XREF to: 02f3125a (READ)
// 00516c9d: CMP AL,DL
// 00516c9f: JZ 0x00516cb3
//   XREF to: 00516cb3 (CONDITIONAL_JUMP)
// 00516ca1: CMP AL,0x0
// 00516ca3: JZ 0x00516cb1
//   XREF to: 00516cb1 (CONDITIONAL_JUMP)
// 00516ca5: INC ESI
// 00516ca6: MOV AL,byte ptr [ESI]
//   XREF to: 02f31259 (READ)
//   XREF to: 02f3125b (READ)
// 00516ca8: CMP AL,DL
// 00516caa: JZ 0x00516cb3
//   XREF to: 00516cb3 (CONDITIONAL_JUMP)
// 00516cac: INC ESI
// 00516cad: CMP AL,0x0
// 00516caf: JNZ 0x00516c9b
//   XREF to: 00516c9b (CONDITIONAL_JUMP)
// 00516cb1: SUB ESI,ESI
//   Label: LAB_00516cb1
// 00516cb3: PUSH ESI
//   Label: LAB_00516cb3
//   XREF to: 02f3125b (DATA)
//   XREF to: 02f3125a (DATA)
// 00516cb4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00516cb9: ADD ESP,0x10
// 00516cbc: MOV ESI,dword ptr [EBP + 0x1c]
//   Label: LAB_00516cbc
//   XREF to: Stack[0xc] (READ)
// 00516cbf: PUSH ESI
// 00516cc0: PUSH 0x0
// 00516cc2: PUSH EBX
// 00516cc3: CALL shape_meshlod.cpp_FUN_0051d520
//   XREF to: 0051d520 (UNCONDITIONAL_CALL)
// 00516cc8: ADD ESP,0xc
// 00516ccb: TEST EAX,EAX
// 00516ccd: JZ 0x00516d2a
//   XREF to: 00516d2a (CONDITIONAL_JUMP)
// 00516ccf: MOV EAX,dword ptr [EDI + 0x4]
// 00516cd2: PUSH dword ptr [EDI + 0x10]
// 00516cd5: PUSH EAX
// 00516cd6: MOV EDX,dword ptr [EDI]
// 00516cd8: PUSH EDX
// 00516cd9: PUSH EBX
// 00516cda: CALL shape_meshlod.cpp_CLodMesh_FUN_00517630
//   XREF to: 00517630 (UNCONDITIONAL_CALL)
// 00516cdf: ADD ESP,0x10
// 00516ce2: PUSH EDI
// 00516ce3: PUSH EBX
// 00516ce4: CALL shape_meshlod.cpp_CLodMesh_FUN_0051d4a0
//   XREF to: 0051d4a0 (UNCONDITIONAL_CALL)
// 00516ce9: ADD ESP,0x8
// 00516cec: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00516cf1: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 00516cf5: MOV EDX,EAX
// 00516cf7: SUB EAX,ECX
// 00516cf9: TEST EAX,EAX
// 00516cfb: JL 0x00516d26
//   XREF to: 00516d26 (CONDITIONAL_JUMP)
// 00516cfd: MOV dword ptr [ESP + 0x18],EAX
//   Label: LAB_00516cfd
//   XREF to: Stack[-0x18] (WRITE)
// 00516d01: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00516d05: FMUL double ptr [0x0063765d]
//   XREF to: 0063765d (READ)
// 00516d0b: FMUL double ptr [0x00637665]
//   XREF to: 00637665 (READ)
// 00516d11: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00516d14: FXCH
// 00516d16: FADD ST0,ST1
// 00516d18: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00516d1c: FSTP ST1
// 00516d1e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00516d21: JMP 0x00516bc6
//   XREF to: 00516bc6 (UNCONDITIONAL_JUMP)
// 00516d26: XOR EAX,EAX
//   Label: LAB_00516d26
// 00516d28: JMP 0x00516cfd
//   XREF to: 00516cfd (UNCONDITIONAL_JUMP)
// 00516d2a: MOV ESI,dword ptr [EBX + 0x38]
//   Label: LAB_00516d2a
// 00516d2d: PUSH ESI
// 00516d2e: PUSH EBX
// 00516d2f: CALL shape_meshlod.cpp_CLodMesh_FUN_0051d250
//   XREF to: 0051d250 (UNCONDITIONAL_CALL)
// 00516d34: ADD ESP,0x8
// 00516d37: PUSH EBX
// 00516d38: CALL shape_meshlod.cpp_CLodMesh_FUN_0051b870
//   XREF to: 0051b870 (UNCONDITIONAL_CALL)
// 00516d3d: ADD ESP,0x4
// 00516d40: MOV ESP,EBP
// 00516d42: POP EBP
// 00516d43: POP EDI
// 00516d44: POP ESI
// 00516d45: POP EBX
// 00516d46: RET
