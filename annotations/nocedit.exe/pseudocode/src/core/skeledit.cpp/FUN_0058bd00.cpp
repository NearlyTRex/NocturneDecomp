// Name: core_skeledit.cpp_FUN_0058bd00
// Address: 0058bd00
// Address Range: [[0058bd00, 0058c188]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058bd00()
// Globals:
//   TerminatedCString s_Importing_vertex_assignm_0064a90c
//   TerminatedCString s_core_skeledit_cpp_0064a934
//   TerminatedCString s_rb_0064a949
//   TerminatedCString s_core_skeledit_cpp_0064a94c
//   TerminatedCString s_CDeformableModel_importV_0064a961
//   TerminatedCString s_core_skeledit_cpp_0064a99c
//   TerminatedCString s_Too_many_links_in_s_d_ma_0064a9b1
//   TerminatedCString s_core_skeledit_cpp_0064a9d5
//   TerminatedCString s_vertex_d_is_influenced_b_0064a9ea
//   TerminatedCString s_core_skeledit_cpp_0064aa34
//   TerminatedCString s_Imported_vertex_assignme_0064aa49
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_0365a3e8
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_0058ac30
//   core_xform.cpp_inverse_FUN_005f6210
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_memory.c_memset_FUN_005fde40
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058bd00(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  CVector3f *pCVar3;
  float fVar4;
  undefined *dest;
  int iVar5;
  CVector3f *pCVar6;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  int iVar7;
  float *pfVar8;
  SIZE_T unaff_EDI;
  int iVar9;
  CMatrix3x4f *pCVar10;
  byte bVar11;
  FILE *in_stack_00000008;
  byte *in_stack_0000000c;
  byte *in_stack_00000010;
  byte *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  CMatrix3x4f *in_stack_fffffc00;
  undefined1 auStack_fc [6];
  int iStack_f6;
  int iStack_f2;
  float afStack_a4 [12];
  CMatrix3x4f CStack_74;
  float local_3c;
  int local_38;
  float local_34;
  undefined4 local_28;
  CVector3f local_24;
  CVector3f local_18;
  FILE *pFStack_c;
  FILE *pFVar12;
  
  bVar11 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x448);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing vertex assignments from %s...");
  pbVar1 = in_stack_00000010;
  local_18.x = (float)shape_memdbg_cpp_openFile_FUN_0050f7a0
                                ((char *)in_stack_00000010,(char *)0x0,"rb",
                                 "..\\core\\skeledit.cpp",0x593);
  if ((FILE *)local_18.x == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x594;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::importVertexAssignmentsVPH can't open %s",pbVar1);
  }
  crt_stdio_c_fread_FUN_005fd990(auStack_fc,0x36,1,(FILE *)local_18.y);
  if (200 < iStack_f6) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x59b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many links in %s: %d, max is %d",in_stack_00000010,iStack_f6,200);
  }
  iVar7 = 0;
  if (0 < iStack_f2) {
    dest = &DAT_0365a3e8;
    iVar9 = 0;
    do {
      crt_stdio_c_fread_FUN_005fd990(&stack0x00000008,4,1,pFStack_c);
      crt_memory_c_memset_FUN_005fde40(dest,0,0x32);
      crt_stdio_c_fread_FUN_005fd990(dest,unaff_EDI,1,(FILE *)local_18.x);
      uVar2 = core_skeledit_cpp_FUN_0058ac30();
      *(undefined4 *)(&stack0xfffffbe8 + iVar9) = uVar2;
      iVar9 = iVar9 + 4;
      crt_stdio_c_fseek_FUN_005ffacc((FILE *)local_18.z,0x102,1);
      iVar7 = iVar7 + 1;
      dest = dest + 0x32;
    } while (iVar7 < iStack_f2);
  }
  crt_stdio_c_fread_FUN_005fd990(&local_24,4,1,pFStack_c);
  pFVar12 = unaff_EBP;
  crt_stdio_c_fread_FUN_005fd990(&local_24.z,4,1,unaff_EBP);
  crt_stdio_c_fseek_FUN_005ffacc(unaff_EBP,(long)local_18.x,1);
  crt_stdio_c_fseek_FUN_005ffacc(unaff_EBP,0x30,1);
  crt_stdio_c_fread_FUN_005fd990(&pFStack_c,4,1,unaff_EBP);
  iVar7 = 0;
  if (0 < (int)pFVar12) {
    in_stack_0000000c = in_stack_00000014 + 4;
    iVar9 = 0;
    do {
      in_stack_00000010 = (byte *)(iVar9 + *(int *)(in_stack_0000000c + 0x40));
      crt_stdio_c_fread_FUN_005fd990(&CStack_74.m[2].z,0x20,1,in_stack_00000008);
      if (local_3c == 0.0) {
        iVar5 = 0;
      }
      else {
        fVar4 = local_3c;
        if ((int)local_3c < 0) {
          fVar4 = CStack_74.m[2].y;
        }
        iVar5 = *(int *)(&stack0xfffffc00 + (int)fVar4 * 4);
        if (iVar5 < 0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x5cc;
          core_main_c_displayErrorAndQuit_FUN_00506f10("vertex %d is influenced by bone %s, but this bone isn't in the .BON file!");
        }
      }
      if ((*(int *)(in_stack_00000014 + iVar5 * 0x84 + 0x24) < 1) || (local_38 < 1)) {
        in_stack_00000010[4] = 0;
        in_stack_00000010[5] = 0;
        in_stack_00000010[6] = 0x80;
        in_stack_00000010[7] = 0x3f;
        *in_stack_00000010 = 1;
        in_stack_00000010[1] = (byte)iVar5;
      }
      else {
        *in_stack_00000010 = 2;
        fVar4 = local_34 * local_34 * local_34;
        in_stack_00000010[1] = (byte)iVar5;
        *(float *)(in_stack_00000010 + 4) = fVar4;
        in_stack_00000010[2] = in_stack_00000014[iVar5 * 0x84 + 0x24];
        *(float *)(in_stack_00000010 + 8) = 1.0 - fVar4;
      }
      local_28 = *(undefined4 *)(in_stack_00000010 + 0x10);
      pCVar6 = (CVector3f *)(in_stack_00000010 + 0x10);
      local_24.x = *(float *)(in_stack_00000010 + 0x14);
      local_24.y = *(float *)(in_stack_00000010 + 0x18);
      in_stack_00000018 = 0;
      in_stack_00000014 = in_stack_00000010;
      while (in_stack_00000018 < (int)(uint)*in_stack_00000010) {
        core_xform_cpp_inverse_FUN_005f6210
                  ((CMatrix3x4f *)(in_stack_0000000c + (uint)in_stack_00000014[1] * 0x84 + 0x54),
                   in_stack_fffffc00);
        in_stack_fffffc00 = &CStack_74;
        pfVar8 = afStack_a4;
        pCVar10 = &CStack_74;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          pCVar10->m[0].w = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
        }
        pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_18,&local_24,in_stack_fffffc00);
        if (pCVar6 != pCVar3) {
          pCVar6->x = pCVar3->x;
          pCVar6->y = pCVar3->y;
          pCVar6->z = pCVar3->z;
        }
        pCVar6 = pCVar6 + 1;
        in_stack_0000001c = in_stack_0000001c + 1;
        in_stack_00000020 = in_stack_00000020 + 1;
      }
      iVar9 = iVar9 + 0x34;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)pFVar12);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000008,"..\\core\\skeledit.cpp",0x5f9);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Imported vertex assignments from %s OK");
  return;
}


// Assembly code:
// 0058bd00: PUSH 0x448
//   Label: core_skeledit.cpp_FUN_0058bd00
// 0058bd05: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058bd0a: PUSH EBX
// 0058bd0b: PUSH ESI
// 0058bd0c: PUSH EDI
// 0058bd0d: PUSH EBP
// 0058bd0e: MOV EBP,ESP
// 0058bd10: SUB ESP,0x420
// 0058bd16: AND ESP,0xfffffff8
// 0058bd19: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058bd1c: PUSH EDX
// 0058bd1d: PUSH 0x64a90c
//   XREF to: 0064a90c (DATA)
// 0058bd22: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058bd28: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0058bd29: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058bd2e: ADD ESP,0xc
// 0058bd31: PUSH 0x593
// 0058bd36: PUSH 0x64a934
//   XREF to: 0064a934 (DATA)
// 0058bd3b: PUSH 0x64a949
//   XREF to: 0064a949 (DATA)
// 0058bd40: PUSH 0x0
// 0058bd42: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058bd45: PUSH EBX
// 0058bd46: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0058bd4b: ADD ESP,0x14
// 0058bd4e: MOV dword ptr [ESP + 0x408],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0058bd55: TEST EAX,EAX
// 0058bd57: JZ 0x0058c07b
//   XREF to: 0058c07b (CONDITIONAL_JUMP)
// 0058bd5d: MOV EDX,dword ptr [ESP + 0x408]
//   Label: LAB_0058bd5d
//   XREF to: Stack[-0x28] (READ)
// 0058bd64: PUSH EDX
// 0058bd65: PUSH 0x1
// 0058bd67: PUSH 0x36
// 0058bd69: LEA EAX,[ESP + 0x32c]
//   XREF to: Stack[-0x110] (DATA)
// 0058bd70: PUSH EAX
// 0058bd71: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0058bd76: ADD ESP,0x10
// 0058bd79: MOV ECX,dword ptr [ESP + 0x322]
//   XREF to: Stack[-0x10e] (READ)
// 0058bd80: CMP ECX,0xc8
// 0058bd86: JLE 0x0058bdb5
//   XREF to: 0058bdb5 (CONDITIONAL_JUMP)
// 0058bd88: PUSH 0xc8
// 0058bd8d: PUSH ECX
// 0058bd8e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058bd91: PUSH EAX
// 0058bd92: MOV EBX,0x64a99c
//   XREF to: 0064a99c (DATA)
// 0058bd97: MOV ESI,0x59b
// 0058bd9c: PUSH 0x64a9b1
//   XREF to: 0064a9b1 (DATA)
// 0058bda1: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0058bda7: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0058bdad: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058bdb2: ADD ESP,0x10
// 0058bdb5: MOV EDX,dword ptr [ESP + 0x322]
//   Label: LAB_0058bdb5
//   XREF to: Stack[-0x10e] (READ)
// 0058bdbc: XOR ESI,ESI
// 0058bdbe: TEST EDX,EDX
// 0058bdc0: JLE 0x0058be50
//   XREF to: 0058be50 (CONDITIONAL_JUMP)
// 0058bdc6: MOV EBX,0x365a3e8
//   XREF to: 0365a3e8 (PARAM)
// 0058bdcb: XOR EDI,EDI
// 0058bdcd: MOV ECX,dword ptr [ESP + 0x408]
//   Label: LAB_0058bdcd
//   XREF to: Stack[-0x28] (READ)
// 0058bdd4: PUSH ECX
// 0058bdd5: PUSH 0x1
// 0058bdd7: PUSH 0x4
// 0058bdd9: LEA EAX,[ESP + 0x428]
//   XREF to: Stack[-0x14] (DATA)
// 0058bde0: PUSH EAX
// 0058bde1: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0058bde6: ADD ESP,0x10
// 0058bde9: PUSH 0x32
// 0058bdeb: PUSH 0x0
// 0058bded: PUSH EBX
//   XREF to: 0365a3e8 (DATA)
// 0058bdee: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0058bdf3: ADD ESP,0xc
// 0058bdf6: MOV EAX,dword ptr [ESP + 0x408]
//   XREF to: Stack[-0x28] (READ)
// 0058bdfd: PUSH EAX
// 0058bdfe: PUSH 0x1
// 0058be00: MOV EDX,dword ptr [ESP + 0x424]
//   XREF to: Stack[-0x14] (READ)
// 0058be07: PUSH EDX
// 0058be08: PUSH EBX
//   XREF to: 0365a3e8 (DATA)
// 0058be09: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0058be0e: ADD ESP,0x10
// 0058be11: PUSH EBX
//   XREF to: 0365a3e8 (DATA)
// 0058be12: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058be15: PUSH ECX
// 0058be16: CALL core_skeledit.cpp_FUN_0058ac30
//   XREF to: 0058ac30 (UNCONDITIONAL_CALL)
// 0058be1b: ADD ESP,0x8
// 0058be1e: PUSH 0x1
// 0058be20: PUSH 0x102
// 0058be25: MOV dword ptr [ESP + EDI*0x1 + 0x8],EAX
// 0058be29: MOV EAX,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x28] (READ)
// 0058be30: PUSH EAX
// 0058be31: ADD EDI,0x4
// 0058be34: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0058be39: ADD ESP,0xc
// 0058be3c: INC ESI
// 0058be3d: MOV EDX,dword ptr [ESP + 0x322]
//   XREF to: Stack[-0x10e] (READ)
// 0058be44: ADD EBX,0x32
// 0058be47: CMP ESI,EDX
// 0058be49: JL 0x0058bdcd
//   XREF to: 0058bdcd (CONDITIONAL_JUMP)
// 0058be4b: LEA EAX,[EAX]
// 0058be4e: MOV ECX,ECX
// 0058be50: MOV ECX,dword ptr [ESP + 0x408]
//   Label: LAB_0058be50
//   XREF to: Stack[-0x28] (READ)
// 0058be57: PUSH ECX
// 0058be58: PUSH 0x1
// 0058be5a: PUSH 0x4
// 0058be5c: LEA EAX,[ESP + 0x3fc]
//   XREF to: Stack[-0x40] (DATA)
// 0058be63: PUSH EAX
// 0058be64: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0058be69: ADD ESP,0x10
// 0058be6c: MOV EBX,dword ptr [ESP + 0x408]
//   XREF to: Stack[-0x28] (READ)
// 0058be73: PUSH EBX
// 0058be74: PUSH 0x1
// 0058be76: PUSH 0x4
// 0058be78: LEA EAX,[ESP + 0x400]
//   XREF to: Stack[-0x3c] (DATA)
// 0058be7f: PUSH EAX
// 0058be80: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0058be85: ADD ESP,0x10
// 0058be88: PUSH 0x1
// 0058be8a: MOV ESI,dword ptr [ESP + 0x3f8]
//   XREF to: Stack[-0x3c] (READ)
// 0058be91: PUSH ESI
// 0058be92: PUSH EBX
// 0058be93: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0058be98: ADD ESP,0xc
// 0058be9b: PUSH 0x1
// 0058be9d: PUSH 0x30
// 0058be9f: PUSH EBX
// 0058bea0: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0058bea5: ADD ESP,0xc
// 0058bea8: PUSH EBX
// 0058bea9: PUSH 0x1
// 0058beab: PUSH 0x4
// 0058bead: LEA EAX,[ESP + 0x404]
//   XREF to: Stack[-0x38] (DATA)
// 0058beb4: PUSH EAX
// 0058beb5: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0058beba: ADD ESP,0x10
// 0058bebd: XOR ECX,ECX
// 0058bebf: MOV EBX,dword ptr [ESP + 0x3f8]
//   XREF to: Stack[-0x38] (READ)
// 0058bec6: MOV dword ptr [ESP + 0x404],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058becd: TEST EBX,EBX
// 0058becf: JLE 0x0058c0d3
//   XREF to: 0058c0d3 (CONDITIONAL_JUMP)
// 0058bed5: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058bed8: ADD EAX,0x4
// 0058bedb: MOV dword ptr [ESP + 0x400],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0058bee2: MOV dword ptr [ESP + 0x40c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0058bee9: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0058bee9
//   XREF to: Stack[0x4] (READ)
// 0058beec: MOV EBX,dword ptr [ESP + 0x400]
//   XREF to: Stack[-0x30] (READ)
// 0058bef3: MOV EAX,dword ptr [EAX + 0x40]
// 0058bef6: ADD EBX,EAX
// 0058bef8: MOV dword ptr [ESP + 0x410],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0058beff: MOV EBX,dword ptr [ESP + 0x408]
//   XREF to: Stack[-0x28] (READ)
// 0058bf06: PUSH EBX
// 0058bf07: PUSH 0x1
// 0058bf09: PUSH 0x20
// 0058bf0b: LEA EAX,[ESP + 0x3c4]
//   XREF to: Stack[-0x78] (DATA)
// 0058bf12: PUSH EAX
// 0058bf13: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0058bf18: ADD ESP,0x10
// 0058bf1b: MOV EAX,dword ptr [ESP + 0x3c8]
//   XREF to: Stack[-0x68] (READ)
// 0058bf22: TEST EAX,EAX
// 0058bf24: JNZ 0x0058c10c
//   XREF to: 0058c10c (CONDITIONAL_JUMP)
// 0058bf2a: XOR EBX,EBX
// 0058bf2c: IMUL EAX,EBX,0x84
//   Label: LAB_0058bf2c
// 0058bf32: ADD EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0058bf35: CMP dword ptr [EAX + 0x24],0x0
// 0058bf39: JLE 0x0058c15b
//   XREF to: 0058c15b (CONDITIONAL_JUMP)
// 0058bf3f: CMP dword ptr [ESP + 0x3c8],0x0
//   XREF to: Stack[-0x68] (READ)
// 0058bf47: JLE 0x0058c15b
//   XREF to: 0058c15b (CONDITIONAL_JUMP)
// 0058bf4d: MOV ESI,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x20] (READ)
// 0058bf54: MOV byte ptr [ESI],0x2
// 0058bf57: MOV ESI,dword ptr [ESP + 0x3cc]
//   XREF to: Stack[-0x64] (READ)
// 0058bf5e: MOV dword ptr [ESP + 0x3fc],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0058bf65: FLD float ptr [ESP + 0x3fc]
//   XREF to: Stack[-0x34] (READ)
// 0058bf6c: FMUL ST0
// 0058bf6e: MOV ESI,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x20] (READ)
// 0058bf75: FMUL float ptr [ESP + 0x3fc]
//   XREF to: Stack[-0x34] (READ)
// 0058bf7c: MOV byte ptr [ESI + 0x1],BL
// 0058bf7f: FST float ptr [ESI + 0x4]
// 0058bf82: FLD1
// 0058bf84: MOV AL,byte ptr [EAX + 0x24]
// 0058bf87: FSUBRP
// 0058bf89: MOV byte ptr [ESI + 0x2],AL
// 0058bf8c: FSTP float ptr [ESI + 0x8]
// 0058bf8f: MOV EBX,dword ptr [ESP + 0x410]
//   Label: LAB_0058bf8f
//   XREF to: Stack[-0x20] (READ)
// 0058bf96: MOV EAX,dword ptr [EBX + 0x10]
// 0058bf99: ADD EBX,0x10
// 0058bf9c: MOV dword ptr [ESP + 0x3d8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0058bfa3: LEA EAX,[EBX + 0x4]
// 0058bfa6: MOV EAX,dword ptr [EAX]
// 0058bfa8: MOV dword ptr [ESP + 0x3dc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0058bfaf: LEA EAX,[EBX + 0x8]
// 0058bfb2: MOV EAX,dword ptr [EAX]
// 0058bfb4: XOR ESI,ESI
// 0058bfb6: MOV dword ptr [ESP + 0x3e0],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0058bfbd: MOV EAX,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x20] (READ)
// 0058bfc4: MOV dword ptr [ESP + 0x418],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0058bfcb: MOV dword ptr [ESP + 0x414],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058bfd2: MOV ESI,dword ptr [ESP + 0x410]
//   Label: LAB_0058bfd2
//   XREF to: Stack[-0x20] (READ)
// 0058bfd9: XOR EAX,EAX
// 0058bfdb: MOV EDI,dword ptr [ESP + 0x418]
//   XREF to: Stack[-0x18] (READ)
// 0058bfe2: MOV AL,byte ptr [ESI]
// 0058bfe4: CMP EAX,EDI
// 0058bfe6: JLE 0x0058c0a4
//   XREF to: 0058c0a4 (CONDITIONAL_JUMP)
// 0058bfec: MOV ESI,dword ptr [ESP + 0x414]
//   XREF to: Stack[-0x1c] (READ)
// 0058bff3: XOR EAX,EAX
// 0058bff5: MOV AL,byte ptr [ESI + 0x1]
// 0058bff8: IMUL EAX,EAX,0x84
// 0058bffe: ADD EAX,dword ptr [ESP + 0x40c]
//   XREF to: Stack[-0x24] (READ)
// 0058c005: ADD EAX,0x54
// 0058c008: PUSH EAX
// 0058c009: LEA ESI,[ESP + 0x35c]
//   XREF to: Stack[-0xd8] (DATA)
// 0058c010: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 0058c015: ADD ESP,0x4
// 0058c018: LEA EAX,[ESP + 0x388]
//   XREF to: Stack[-0xa8] (DATA)
// 0058c01f: LEA EDI,[ESP + 0x388]
//   XREF to: Stack[-0xa8] (DATA)
// 0058c026: PUSH EAX
// 0058c027: LEA EAX,[ESP + 0x3dc]
//   XREF to: Stack[-0x58] (DATA)
// 0058c02e: MOV ECX,0xc
// 0058c033: PUSH EAX
// 0058c034: LEA EAX,[ESP + 0x3ec]
//   XREF to: Stack[-0x4c] (DATA)
// 0058c03b: LEA ESI,[ESP + 0x360]
//   XREF to: Stack[-0xd8] (DATA)
// 0058c042: PUSH EAX
// 0058c043: MOVSD.REP ES:EDI,ESI
// 0058c045: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0058c04a: ADD ESP,0xc
// 0058c04d: CMP EBX,EAX
// 0058c04f: JNZ 0x0058c174
//   XREF to: 0058c174 (CONDITIONAL_JUMP)
// 0058c055: MOV ECX,dword ptr [ESP + 0x414]
//   Label: LAB_0058c055
//   XREF to: Stack[-0x1c] (READ)
// 0058c05c: MOV ESI,dword ptr [ESP + 0x418]
//   XREF to: Stack[-0x18] (READ)
// 0058c063: ADD EBX,0xc
// 0058c066: INC ECX
// 0058c067: INC ESI
// 0058c068: MOV dword ptr [ESP + 0x414],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058c06f: MOV dword ptr [ESP + 0x418],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0058c076: JMP 0x0058bfd2
//   XREF to: 0058bfd2 (UNCONDITIONAL_JUMP)
// 0058c07b: PUSH EBX
//   Label: LAB_0058c07b
// 0058c07c: MOV ESI,0x64a94c
//   XREF to: 0064a94c (DATA)
// 0058c081: MOV EDI,0x594
// 0058c086: PUSH 0x64a961
//   XREF to: 0064a961 (DATA)
// 0058c08b: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0058c091: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0058c097: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058c09c: ADD ESP,0x8
// 0058c09f: JMP 0x0058bd5d
//   XREF to: 0058bd5d (UNCONDITIONAL_JUMP)
// 0058c0a4: MOV ESI,dword ptr [ESP + 0x400]
//   Label: LAB_0058c0a4
//   XREF to: Stack[-0x30] (READ)
// 0058c0ab: MOV EDI,dword ptr [ESP + 0x404]
//   XREF to: Stack[-0x2c] (READ)
// 0058c0b2: MOV EDX,dword ptr [ESP + 0x3f8]
//   XREF to: Stack[-0x38] (READ)
// 0058c0b9: ADD ESI,0x34
// 0058c0bc: INC EDI
// 0058c0bd: MOV dword ptr [ESP + 0x400],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0058c0c4: MOV dword ptr [ESP + 0x404],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0058c0cb: CMP EDI,EDX
// 0058c0cd: JL 0x0058bee9
//   XREF to: 0058bee9 (CONDITIONAL_JUMP)
// 0058c0d3: PUSH 0x5f9
//   Label: LAB_0058c0d3
// 0058c0d8: PUSH 0x64aa34
//   XREF to: 0064aa34 (DATA)
// 0058c0dd: MOV EDI,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x28] (READ)
// 0058c0e4: PUSH EDI
// 0058c0e5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0058c0ea: ADD ESP,0xc
// 0058c0ed: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058c0f0: PUSH EAX
// 0058c0f1: PUSH 0x64aa49
//   XREF to: 0064aa49 (DATA)
// 0058c0f6: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058c0fc: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058c0fd: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058c102: ADD ESP,0xc
// 0058c105: MOV ESP,EBP
// 0058c107: POP EBP
// 0058c108: POP EDI
// 0058c109: POP ESI
// 0058c10a: POP EBX
// 0058c10b: RET
// 0058c10c: JL 0x0058c152
//   Label: LAB_0058c10c
//   XREF to: 0058c152 (CONDITIONAL_JUMP)
// 0058c10e: MOV EBX,dword ptr [ESP + EAX*0x4]
//   Label: LAB_0058c10e
// 0058c111: TEST EBX,EBX
// 0058c113: JGE 0x0058bf2c
//   XREF to: 0058bf2c (CONDITIONAL_JUMP)
// 0058c119: IMUL EAX,EAX,0x32
// 0058c11c: ADD EAX,0x365a3e8
//   XREF to: 0365a3e8 (DATA)
// 0058c121: PUSH EAX
// 0058c122: MOV ESI,dword ptr [ESP + 0x408]
//   XREF to: Stack[-0x2c] (READ)
// 0058c129: PUSH ESI
// 0058c12a: MOV EDX,0x64a9d5
//   XREF to: 0064a9d5 (DATA)
// 0058c12f: MOV ECX,0x5cc
// 0058c134: PUSH 0x64a9ea
//   XREF to: 0064a9ea (DATA)
// 0058c139: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0058c13f: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0058c145: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058c14a: ADD ESP,0xc
// 0058c14d: JMP 0x0058bf2c
//   XREF to: 0058bf2c (UNCONDITIONAL_JUMP)
// 0058c152: MOV EAX,dword ptr [ESP + 0x3b8]
//   Label: LAB_0058c152
//   XREF to: Stack[-0x78] (READ)
// 0058c159: JMP 0x0058c10e
//   XREF to: 0058c10e (UNCONDITIONAL_JUMP)
// 0058c15b: MOV EAX,dword ptr [ESP + 0x410]
//   Label: LAB_0058c15b
//   XREF to: Stack[-0x20] (READ)
// 0058c162: MOV dword ptr [EAX + 0x4],0x3f800000
// 0058c169: MOV byte ptr [EAX],0x1
// 0058c16c: MOV byte ptr [EAX + 0x1],BL
// 0058c16f: JMP 0x0058bf8f
//   XREF to: 0058bf8f (UNCONDITIONAL_JUMP)
// 0058c174: MOV EDX,dword ptr [EAX]
//   Label: LAB_0058c174
// 0058c176: MOV dword ptr [EBX],EDX
// 0058c178: MOV EDX,dword ptr [EAX + 0x4]
// 0058c17b: MOV dword ptr [EBX + 0x4],EDX
// 0058c17e: MOV EDX,dword ptr [EAX + 0x8]
// 0058c181: MOV dword ptr [EBX + 0x8],EDX
// 0058c184: JMP 0x0058c055
//   XREF to: 0058c055 (UNCONDITIONAL_JUMP)
