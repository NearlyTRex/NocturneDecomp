// Name: core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
// Address: 00479f30
// Address Range: [[00479f30, 0047a3a3]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel * this_ptr, char * filename)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047de1a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0062001b
//   TerminatedCString s_wt_0062002e
//   TerminatedCString s_Can_t_create_s_00620031
//   TerminatedCString s_S3D_version_00620041
//   TerminatedCString s_s_103_00620052
//   TerminatedCString s_numTextures_numTris_numV_00620057
//   TerminatedCString s_d_d_d_1_d_0_0_006200a0
//   TerminatedCString s_partList_firstVert_numVe_006200b3
//   TerminatedCString s_s_0_d_0_d_s_006200ec
//   TerminatedCString s_texture_list_name_006200fc
//   TerminatedCString s_s_00620113
//   TerminatedCString s_triList_materialIndex_ve_00620117
//   TerminatedCString s_d_d_g_g_d_g_g_d_g_g_0062014e
//   TerminatedCString s_vertList_x_y_z_00620170
//   TerminatedCString s_g_g_g_00620184
//   TerminatedCString s_lightList_name_type_x_y__0062018e
//   TerminatedCString s_cameraList_name_x_y_z_p__006201ce
//   TerminatedCString s_core_dmodel_cpp_006201fd
//   double DOUBLE_00620213 = 0.00390625
//   double DOUBLE_0062021b = 0.0000152587890625
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_string.c_splitpath_FUN_005ff178
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel *this_ptr,char *filename)

{
  uint uVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  int iVar5;
  FILE *unaff_ESI;
  undefined4 *puVar6;
  byte bVar7;
  FILE *in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int aiStackY_100c [935];
  undefined4 local_24;
  int local_20;
  int local_1c;
  streambuf *local_18;
  FILE *local_14;
  int local_10;
  
  bVar7 = 0;
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"wt","..\\core\\dmodel.cpp",0x75b);
  local_14 = pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create %s",filename);
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// .S3D version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"103\n");
  iVar5 = 0;
  iVar3 = 0;
  if (0 < (int)in_stack_00000010[9]._bufsize) {
    iVar4 = *(int *)&in_stack_00000010[9]._ungotten;
    do {
      iVar5 = iVar5 + *(int *)(iVar4 + 4) + -2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x48;
    } while (iVar3 < (int)in_stack_00000010[9]._bufsize);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_EBP,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (unaff_ESI,"%d,%d,%d,1,%d,0,0\n",in_stack_00000014[10]._link,iVar5,
             in_stack_00000014[9]._link,in_stack_00000014[9]._cnt);
  crt_string_c_splitpath_FUN_005ff178(filename,(char *)0x0,(char *)0x0,&stack0xfffffec8,(char *)0x0)
  ;
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_ESI,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_ESI,"0,%d,0,%d,\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_ESI,"// texture list: name\n");
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000028 + 0x120)) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"%s\n");
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_stack_00000028 + 0x120));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"// triList: materialIndex,vertices(index, texX, texY)\n");
  filename = (char *)0x0;
  if (0 < *(int *)(in_stack_0000002c + 0x110)) {
    this_ptr = (CKeyFramedModel *)0x0;
    iVar3 = 0;
    do {
      in_stack_00000014 = (FILE *)(iVar3 + *(int *)(in_stack_0000002c + 0x114));
      iVar5 = 2;
      pFVar2 = in_stack_00000014;
      if (2 < in_stack_00000014->_cnt) {
        do {
          puVar6 = (undefined4 *)((int)in_stack_00000014 + (uint)bVar7 * -8 + 0x1c);
          local_24 = *(undefined4 *)&in_stack_00000014->_ungotten;
          *(undefined4 *)((int)&stack0xffffffe0 + (uint)bVar7 * -8) = *puVar6;
          *(undefined4 *)((int)&stack0xffffffe4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               puVar6[(uint)bVar7 * -2 + 1];
          puVar6 = (undefined4 *)((int)pFVar2 + (uint)bVar7 * -8 + 0x28);
          local_18 = pFVar2[1]._link;
          (&local_14)[(uint)bVar7 * -2] = (FILE *)*puVar6;
          (&local_10)[(uint)bVar7 * -2 + (uint)bVar7 * -2] = puVar6[(uint)bVar7 * -2 + 1];
          puVar6 = (undefined4 *)((int)pFVar2 + (uint)bVar7 * -8 + 0x34);
          uVar1 = pFVar2[1]._bufsize;
          *(undefined4 *)(&stack0xfffffff8 + (uint)bVar7 * -8) = *puVar6;
          *(undefined4 *)(&stack0xfffffffc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               puVar6[(uint)bVar7 * -2 + 1];
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (in_stack_00000010,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g\n",
                     *(undefined4 *)(this_ptr->model_filename + *(int *)(in_stack_0000002c + 0x118))
                     ,local_24,(double)local_20 * DOUBLE_0062021b,(double)local_1c * DOUBLE_0062021b
                     ,local_18,(double)(int)local_14 * DOUBLE_0062021b,
                     (double)local_10 * DOUBLE_0062021b,uVar1);
          iVar5 = iVar5 + 1;
          pFVar2 = (FILE *)&pFVar2->_flag;
        } while (iVar5 < in_stack_00000014->_cnt);
      }
      iVar3 = iVar3 + 0x48;
      this_ptr = (CKeyFramedModel *)(this_ptr->model_filename + 4);
      filename = filename + 1;
    } while ((int)filename < *(int *)(in_stack_0000002c + 0x110));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// vertList: x,y,z\n");
  for (iVar3 = 0; iVar3 < *(int *)(in_stack_00000030 + 0x104) * *(int *)(in_stack_00000030 + 0x100);
      iVar3 = iVar3 + 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"%g,%g,%g\n");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"// lightList: \"name\", type, x,y,z, r,g,b, (type-specific info)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"// cameraList: \"name\", x,y,z, p,b,h, fov(rad)\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000014,"..\\core\\dmodel.cpp",0x7a0);
  return;
}


// Assembly code:
// 00479f30: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
// 00479f31: PUSH ESI
// 00479f32: PUSH EBP
// 00479f33: SUB ESP,0x140
// 00479f39: MOV ESI,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x8] (READ)
// 00479f40: PUSH 0x75b
// 00479f45: PUSH 0x62001b
//   XREF to: 0062001b (DATA)
// 00479f4a: PUSH 0x62002e
//   XREF to: 0062002e (DATA)
// 00479f4f: PUSH 0x0
// 00479f51: PUSH ESI
// 00479f52: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00479f57: ADD ESP,0x14
// 00479f5a: MOV EBX,EAX
// 00479f5c: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00479f63: TEST EAX,EAX
// 00479f65: JZ 0x0047a345
//   XREF to: 0047a345 (CONDITIONAL_JUMP)
// 00479f6b: PUSH EDI
// 00479f6c: PUSH 0x620041
//   XREF to: 00620041 (DATA)
// 00479f71: PUSH EAX
// 00479f72: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00479f77: ADD ESP,0x8
// 00479f7a: PUSH 0x620052
//   XREF to: 00620052 (DATA)
// 00479f7f: PUSH EBX
// 00479f80: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00479f85: ADD ESP,0x8
// 00479f88: MOV EDX,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x4] (READ)
// 00479f8f: XOR EBP,EBP
// 00479f91: MOV ECX,dword ptr [EDX + 0x110]
// 00479f97: XOR EAX,EAX
// 00479f99: TEST ECX,ECX
// 00479f9b: JLE 0x00479fc0
//   XREF to: 00479fc0 (CONDITIONAL_JUMP)
// 00479f9d: MOV EBX,dword ptr [EDX + 0x114]
// 00479fa3: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_00479fa3
// 00479fa6: SUB EDX,0x2
// 00479fa9: ADD EBP,EDX
// 00479fab: MOV EDX,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x4] (READ)
// 00479fb2: INC EAX
// 00479fb3: MOV EDI,dword ptr [EDX + 0x110]
// 00479fb9: ADD EBX,0x48
// 00479fbc: CMP EAX,EDI
// 00479fbe: JL 0x00479fa3
//   XREF to: 00479fa3 (CONDITIONAL_JUMP)
// 00479fc0: PUSH 0x620057
//   Label: LAB_00479fc0
//   XREF to: 00620057 (DATA)
// 00479fc5: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x18] (READ)
// 00479fcc: PUSH EAX
// 00479fcd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00479fd2: ADD ESP,0x8
// 00479fd5: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x4] (READ)
// 00479fdc: MOV EDX,dword ptr [EAX + 0x100]
// 00479fe2: PUSH EDX
// 00479fe3: MOV ECX,dword ptr [EAX + 0x104]
// 00479fe9: PUSH ECX
// 00479fea: PUSH EBP
// 00479feb: MOV EBX,dword ptr [EAX + 0x120]
// 00479ff1: PUSH EBX
// 00479ff2: PUSH 0x6200a0
//   XREF to: 006200a0 (DATA)
// 00479ff7: MOV EDI,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x18] (READ)
// 00479ffe: PUSH EDI
// 00479fff: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a004: ADD ESP,0x18
// 0047a007: PUSH 0x0
// 0047a009: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14c] (DATA)
// 0047a00d: PUSH EAX
// 0047a00e: PUSH 0x0
// 0047a010: PUSH 0x0
// 0047a012: PUSH ESI
// 0047a013: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0047a018: ADD ESP,0x14
// 0047a01b: PUSH 0x6200b3
//   XREF to: 006200b3 (DATA)
// 0047a020: PUSH EDI
// 0047a021: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a026: ADD ESP,0x8
// 0047a029: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14c] (DATA)
// 0047a02d: PUSH EAX
// 0047a02e: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[0x4] (READ)
// 0047a035: PUSH EBP
// 0047a036: MOV EDX,dword ptr [EAX + 0x104]
// 0047a03c: PUSH EDX
// 0047a03d: PUSH 0x6200ec
//   XREF to: 006200ec (DATA)
// 0047a042: PUSH EDI
// 0047a043: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a048: ADD ESP,0x14
// 0047a04b: PUSH 0x6200fc
//   XREF to: 006200fc (DATA)
// 0047a050: PUSH EDI
// 0047a051: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a056: ADD ESP,0x8
// 0047a059: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x4] (READ)
// 0047a060: MOV EBX,EDI
// 0047a062: MOV ESI,dword ptr [EAX + 0x120]
// 0047a068: XOR EBX,EDI
// 0047a06a: TEST ESI,ESI
// 0047a06c: JLE 0x0047a0a0
//   XREF to: 0047a0a0 (CONDITIONAL_JUMP)
// 0047a06e: MOV EDI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x18] (READ)
// 0047a075: LEA EBP,[EAX + 0x12c]
// 0047a07b: PUSH EBP
//   Label: LAB_0047a07b
// 0047a07c: PUSH 0x620113
//   XREF to: 00620113 (DATA)
// 0047a081: PUSH EDI
// 0047a082: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a087: ADD ESP,0xc
// 0047a08a: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x4] (READ)
// 0047a091: INC EBX
// 0047a092: MOV EDX,dword ptr [EAX + 0x120]
// 0047a098: ADD EBP,0x48
// 0047a09b: CMP EBX,EDX
// 0047a09d: JL 0x0047a07b
//   XREF to: 0047a07b (CONDITIONAL_JUMP)
// 0047a09f: NOP
// 0047a0a0: PUSH 0x620117
//   Label: LAB_0047a0a0
//   XREF to: 00620117 (DATA)
// 0047a0a5: MOV ECX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x18] (READ)
// 0047a0ac: PUSH ECX
// 0047a0ad: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a0b2: ADD ESP,0x8
// 0047a0b5: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x4] (READ)
// 0047a0bc: XOR EBX,EBX
// 0047a0be: MOV ESI,dword ptr [EAX + 0x110]
// 0047a0c4: MOV dword ptr [ESP + 0x130],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0047a0cb: TEST ESI,ESI
// 0047a0cd: JLE 0x0047a2c0
//   XREF to: 0047a2c0 (CONDITIONAL_JUMP)
// 0047a0d3: MOV dword ptr [ESP + 0x12c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0047a0da: MOV dword ptr [ESP + 0x128],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0047a0e1: MOV EAX,dword ptr [ESP + 0x154]
//   Label: LAB_0047a0e1
//   XREF to: Stack[0x4] (READ)
// 0047a0e8: MOV EDX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x28] (READ)
// 0047a0ef: MOV EAX,dword ptr [EAX + 0x114]
// 0047a0f5: ADD EDX,EAX
// 0047a0f7: MOV EBP,0x2
// 0047a0fc: MOV dword ptr [ESP + 0x13c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0047a103: CMP EBP,dword ptr [EDX + 0x4]
// 0047a106: JGE 0x0047a27a
//   XREF to: 0047a27a (CONDITIONAL_JUMP)
// 0047a10c: MOV EBX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x14] (READ)
// 0047a113: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x24] (READ)
// 0047a11a: ADD EBX,0xc
// 0047a11d: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047a124: MOV ESI,dword ptr [ESP + 0x13c]
//   Label: LAB_0047a124
//   XREF to: Stack[-0x14] (READ)
// 0047a12b: LEA EDI,[ESP + 0x104]
//   XREF to: Stack[-0x4c] (DATA)
// 0047a132: LEA ESI,[ESI + 0x18]
// 0047a135: MOVSD ES:EDI,ESI
// 0047a136: MOVSD ES:EDI,ESI
// 0047a137: MOVSD ES:EDI,ESI
// 0047a138: LEA EDI,[ESP + 0x110]
//   XREF to: Stack[-0x40] (DATA)
// 0047a13f: LEA ESI,[EBX + 0x18]
// 0047a142: MOVSD ES:EDI,ESI
// 0047a143: MOVSD ES:EDI,ESI
// 0047a144: MOVSD ES:EDI,ESI
// 0047a145: LEA EDI,[ESP + 0x11c]
//   XREF to: Stack[-0x34] (DATA)
// 0047a14c: LEA ESI,[EBX + 0x24]
// 0047a14f: MOVSD ES:EDI,ESI
// 0047a150: MOVSD ES:EDI,ESI
// 0047a151: MOVSD ES:EDI,ESI
// 0047a152: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x2c] (READ)
// 0047a159: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0047a160: FILD dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x10] (READ)
// 0047a167: SUB ESP,0x8
// 0047a16a: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x30] (READ)
// 0047a171: FMUL double ptr [0x0062021b]
//   XREF to: 0062021b (READ)
// 0047a177: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0047a17e: FILD dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x10] (READ)
// 0047a185: FMUL double ptr [0x0062021b]
//   XREF to: 0062021b (READ)
// 0047a18b: FXCH
// 0047a18d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x158] (DATA)
// 0047a190: SUB ESP,0x8
// 0047a193: MOV EDX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x34] (READ)
// 0047a19a: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x38] (READ)
// 0047a1a1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x160] (DATA)
// 0047a1a4: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0047a1ab: PUSH EDX
// 0047a1ac: FILD dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x10] (READ)
// 0047a1b3: SUB ESP,0x8
// 0047a1b6: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x3c] (READ)
// 0047a1bd: FMUL double ptr [0x0062021b]
//   XREF to: 0062021b (READ)
// 0047a1c3: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0047a1ca: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x10] (READ)
// 0047a1d1: FMUL double ptr [0x0062021b]
//   XREF to: 0062021b (READ)
// 0047a1d7: FXCH
// 0047a1d9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x16c] (DATA)
// 0047a1dc: SUB ESP,0x8
// 0047a1df: MOV ECX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x40] (READ)
// 0047a1e6: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x44] (READ)
// 0047a1ed: FSTP double ptr [ESP]
//   XREF to: Stack[-0x174] (DATA)
// 0047a1f0: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0047a1f7: PUSH ECX
// 0047a1f8: FILD dword ptr [ESP + 0x168]
//   XREF to: Stack[-0x10] (READ)
// 0047a1ff: SUB ESP,0x8
// 0047a202: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x48] (READ)
// 0047a209: FMUL double ptr [0x0062021b]
//   XREF to: 0062021b (READ)
// 0047a20f: MOV dword ptr [ESP + 0x170],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0047a216: FILD dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x10] (READ)
// 0047a21d: FMUL double ptr [0x0062021b]
//   XREF to: 0062021b (READ)
// 0047a223: FXCH
// 0047a225: FSTP double ptr [ESP]
//   XREF to: Stack[-0x180] (DATA)
// 0047a228: SUB ESP,0x8
// 0047a22b: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x4] (READ)
// 0047a232: MOV EDI,dword ptr [ESP + 0x16c]
//   XREF to: Stack[-0x1c] (READ)
// 0047a239: FSTP double ptr [ESP]
//   XREF to: Stack[-0x188] (DATA)
// 0047a23c: MOV EAX,dword ptr [EAX + 0x118]
// 0047a242: MOV ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x4c] (READ)
// 0047a249: ADD EAX,EDI
// 0047a24b: PUSH ESI
// 0047a24c: MOV EDX,dword ptr [EAX]
// 0047a24e: PUSH EDX
// 0047a24f: PUSH 0x62014e
//   XREF to: 0062014e (DATA)
// 0047a254: MOV ECX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[-0x18] (READ)
// 0047a25b: PUSH ECX
// 0047a25c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a261: ADD ESP,0x48
// 0047a264: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x14] (READ)
// 0047a26b: INC EBP
// 0047a26c: MOV ESI,dword ptr [EAX + 0x4]
// 0047a26f: ADD EBX,0xc
// 0047a272: CMP EBP,ESI
// 0047a274: JL 0x0047a124
//   XREF to: 0047a124 (CONDITIONAL_JUMP)
// 0047a27a: MOV EDI,dword ptr [ESP + 0x128]
//   Label: LAB_0047a27a
//   XREF to: Stack[-0x28] (READ)
// 0047a281: MOV EBP,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x24] (READ)
// 0047a288: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x20] (READ)
// 0047a28f: MOV EDX,dword ptr [ESP + 0x154]
//   XREF to: Stack[0x4] (READ)
// 0047a296: ADD EDI,0x48
// 0047a299: ADD EBP,0x4
// 0047a29c: INC EAX
// 0047a29d: MOV ECX,dword ptr [EDX + 0x110]
// 0047a2a3: MOV dword ptr [ESP + 0x128],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0047a2aa: MOV dword ptr [ESP + 0x12c],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0047a2b1: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047a2b8: CMP EAX,ECX
// 0047a2ba: JL 0x0047a0e1
//   XREF to: 0047a0e1 (CONDITIONAL_JUMP)
// 0047a2c0: PUSH 0x620170
//   Label: LAB_0047a2c0
//   XREF to: 00620170 (DATA)
// 0047a2c5: MOV EBX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x18] (READ)
// 0047a2cc: PUSH EBX
// 0047a2cd: XOR EBP,EBP
// 0047a2cf: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a2d4: ADD ESP,0x8
// 0047a2d7: XOR EBX,EBX
// 0047a2d9: POP EDI
// 0047a2da: MOV EDX,dword ptr [ESP + 0x150]
//   Label: LAB_0047a2da
//   XREF to: Stack[0x4] (READ)
// 0047a2e1: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[0x4] (READ)
// 0047a2e8: MOV ECX,dword ptr [EDX + 0x100]
// 0047a2ee: MOV EAX,dword ptr [EAX + 0x104]
// 0047a2f4: IMUL EAX,ECX
// 0047a2f7: CMP EBP,EAX
// 0047a2f9: JGE 0x0047a364
//   XREF to: 0047a364 (CONDITIONAL_JUMP)
// 0047a2fb: MOV EAX,dword ptr [EDX + 0x10c]
// 0047a301: FLD double ptr [0x00620213]
//   XREF to: 00620213 (READ)
// 0047a307: FILD dword ptr [EBX + EAX*0x1 + 0x8]
// 0047a30b: FMUL ST1
// 0047a30d: SUB ESP,0x8
// 0047a310: FSTP double ptr [ESP]
//   XREF to: Stack[-0x154] (DATA)
// 0047a313: FILD dword ptr [EBX + EAX*0x1 + 0x4]
// 0047a317: FMUL ST1
// 0047a319: SUB ESP,0x8
// 0047a31c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x15c] (DATA)
// 0047a31f: FILD dword ptr [EBX + EAX*0x1]
// 0047a322: FMULP
// 0047a324: SUB ESP,0x8
// 0047a327: FSTP double ptr [ESP]
//   XREF to: Stack[-0x164] (DATA)
// 0047a32a: PUSH 0x620184
//   XREF to: 00620184 (DATA)
// 0047a32f: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x18] (READ)
// 0047a336: PUSH EAX
// 0047a337: ADD EBX,0xc
// 0047a33a: INC EBP
// 0047a33b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a340: ADD ESP,0x20
// 0047a343: JMP 0x0047a2da
//   XREF to: 0047a2da (UNCONDITIONAL_JUMP)
// 0047a345: PUSH ESI
//   Label: LAB_0047a345
// 0047a346: PUSH 0x620031
//   XREF to: 00620031 (DATA)
// 0047a34b: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047a351: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0047a352: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047a357: ADD ESP,0xc
// 0047a35a: ADD ESP,0x140
// 0047a360: POP EBP
// 0047a361: POP ESI
// 0047a362: POP EBX
// 0047a363: RET
// 0047a364: PUSH 0x62018e
//   Label: LAB_0047a364
//   XREF to: 0062018e (DATA)
// 0047a369: MOV EBX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x18] (READ)
// 0047a370: PUSH EBX
// 0047a371: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a376: ADD ESP,0x8
// 0047a379: PUSH 0x6201ce
//   XREF to: 006201ce (DATA)
// 0047a37e: PUSH EBX
// 0047a37f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047a384: ADD ESP,0x8
// 0047a387: PUSH 0x7a0
// 0047a38c: PUSH 0x6201fd
//   XREF to: 006201fd (DATA)
// 0047a391: PUSH EBX
// 0047a392: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0047a397: ADD ESP,0xc
// 0047a39a: ADD ESP,0x140
// 0047a3a0: POP EBP
// 0047a3a1: POP ESI
// 0047a3a2: POP EBX
// 0047a3a3: RET
