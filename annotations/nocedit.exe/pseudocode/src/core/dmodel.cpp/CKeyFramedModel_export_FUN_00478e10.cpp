// Name: core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
// Address: 00478e10
// Address Range: [[00478e10, 0047925a]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel * this_ptr, char * output_filename)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047daa3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f9f9
//   TerminatedCString s_wt_0061fa0c
//   TerminatedCString s_wt_0061fa0f
//   TerminatedCString s_models_0061fa12
//   TerminatedCString s_core_dmodel_cpp_0061fa19
//   TerminatedCString s_Can_t_create_demon_model_0061fa2c
//   TerminatedCString s_KFM_version_0061fa48
//   TerminatedCString s_d_0061fa59
//   TerminatedCString s_vertexCount_polyCount_te_0061fa5d
//   TerminatedCString s_d_d_d_d_d_0061fa99
//   TerminatedCString s_useCollisionListFlag_0061faa9
//   TerminatedCString s_d_0061fac2
//   TerminatedCString s_transparentPixelFlag_0061fac6
//   TerminatedCString s_d_0061fadf
//   TerminatedCString s_disableBackfaceCulling_0061fae3
//   TerminatedCString s_d_0061fafe
//   TerminatedCString s_envMapListFlag_0061fb02
//   TerminatedCString s_d_0061fb15
//   TerminatedCString s_vertex_list_x_y_z_0061fb19
//   TerminatedCString s_d_d_d_0061fb30
//   TerminatedCString s_poly_list_textureIndex_n_0061fb3a
//   TerminatedCString s_d_d_0061fb6f
//   TerminatedCString s_d_d_d_0061fb75
//   TerminatedCString s_anon_0061fb80
//   TerminatedCString s_envMapOpacity_list_0061fb82
//   TerminatedCString s_d_0061fb99
//   TerminatedCString s_texture_list_0061fb9d
//   TerminatedCString s_s_0061fbae
//   TerminatedCString s_part_list_vertexCount_po_0061fbb2
//   TerminatedCString s_d_d_0061fbd9
//   TerminatedCString s_core_dmodel_cpp_0061fbe0
//   TerminatedCString s_Error_writing_model_to_s_0061fbf3
//   TerminatedCString s_core_dmodel_cpp_0061fc0d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel *this_ptr,char *output_filename)

{
  FILE *file;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_0000000c;
  int in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000024;
  int iStack00000028;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  pcVar2 = output_filename;
  do {
    pcVar1 = pcVar2;
    if (*pcVar2 == ':') goto LAB_00478e35;
    if (*pcVar2 == '\0') break;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 == ':') goto LAB_00478e35;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0x0;
LAB_00478e35:
  pcVar2 = output_filename;
  if (pcVar1 == (char *)0x0) {
    do {
      pcVar1 = pcVar2;
      if (*pcVar2 == '\\') goto LAB_00478e57;
      if (*pcVar2 == '\0') break;
      pcVar1 = pcVar2 + 1;
      if (*pcVar1 == '\\') goto LAB_00478e57;
      pcVar2 = pcVar2 + 2;
    } while (*pcVar1 != '\0');
    pcVar1 = (char *)0x0;
LAB_00478e57:
    if (pcVar1 == (char *)0x0) {
      file = engine_dosio_c_getFile_FUN_00481a50("models",output_filename,"wt");
      goto LAB_00478e7f;
    }
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (output_filename,(char *)0x0,"wt","..\\core\\dmodel.cpp",0x569);
LAB_00478e7f:
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x56d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Can't create demon model %s",in_stack_0000000c);
  }
  iVar3 = *(int *)(output_filename + 0x5698);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// .KFM version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",8);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// vertexCount,polyCount,textureCount,partCount,frameCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%d,%d,%d,%d,%d\n",*(undefined4 *)(in_stack_00000014 + 0x104),
             *(undefined4 *)(in_stack_00000014 + 0x110),*(undefined4 *)(in_stack_00000014 + 0x120),
             *(undefined4 *)(in_stack_00000014 + 0x5584),*(undefined4 *)(in_stack_00000014 + 0x100))
  ;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// useCollisionListFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",(uint)(iVar3 != 0));
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// transparentPixelFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",*(undefined4 *)(in_stack_00000024 + 0x569c));
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// disableBackfaceCulling\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// envMapListFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// vertex list: x,y,z\n");
  for (iVar3 = 0; iVar3 < *(int *)(in_stack_0000003c + 0x104) * *(int *)(in_stack_0000003c + 0x100);
      iVar3 = iVar3 + 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d,%d\n");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// poly list: textureIndex, n, verts(index,x2s,y2s)\n");
  iStack00000028 = 0;
  if (0 < *(int *)(in_stack_00000040 + 0x110)) {
    in_stack_00000024 = 0;
    do {
      iVar3 = *(int *)(in_stack_00000040 + 0x114) + in_stack_00000024;
      iVar4 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d");
      if (0 < *(int *)(iVar3 + 4)) {
        do {
          iVar4 = iVar4 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0(file,", %d,%d,%d");
        } while (iVar4 < *(int *)(iVar3 + 4));
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"\n");
      in_stack_00000024 = in_stack_00000024 + 0x48;
      iStack00000028 = iStack00000028 + 1;
    } while (iStack00000028 < *(int *)(in_stack_00000040 + 0x110));
  }
  if (in_stack_0000001c != 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"// envMapOpacity list\n");
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000040 + 0x110)) {
      do {
        crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_stack_00000040 + 0x110));
    }
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// texture list\n");
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000044 + 0x120)) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n");
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_stack_00000044 + 0x120));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// part list (vertexCount, polyCount)\n");
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000048 + 0x5584)) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d\n");
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_stack_00000048 + 0x5584));
  }
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x5e1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing model to %s");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dmodel.cpp",0x5e5);
  return;
}


// Assembly code:
// 00478e10: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
// 00478e11: PUSH ESI
// 00478e12: PUSH EDI
// 00478e13: PUSH EBP
// 00478e14: SUB ESP,0x10
// 00478e17: MOV DL,0x3a
// 00478e19: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00478e1d: MOV AL,byte ptr [ESI]
//   Label: LAB_00478e1d
// 00478e1f: CMP AL,DL
// 00478e21: JZ 0x00478e35
//   XREF to: 00478e35 (CONDITIONAL_JUMP)
// 00478e23: CMP AL,0x0
// 00478e25: JZ 0x00478e33
//   XREF to: 00478e33 (CONDITIONAL_JUMP)
// 00478e27: INC ESI
// 00478e28: MOV AL,byte ptr [ESI]
// 00478e2a: CMP AL,DL
// 00478e2c: JZ 0x00478e35
//   XREF to: 00478e35 (CONDITIONAL_JUMP)
// 00478e2e: INC ESI
// 00478e2f: CMP AL,0x0
// 00478e31: JNZ 0x00478e1d
//   XREF to: 00478e1d (CONDITIONAL_JUMP)
// 00478e33: SUB ESI,ESI
//   Label: LAB_00478e33
// 00478e35: TEST ESI,ESI
//   Label: LAB_00478e35
// 00478e37: JNZ 0x00478e5f
//   XREF to: 00478e5f (CONDITIONAL_JUMP)
// 00478e39: MOV DL,0x5c
// 00478e3b: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00478e3f: MOV AL,byte ptr [ESI]
//   Label: LAB_00478e3f
// 00478e41: CMP AL,DL
// 00478e43: JZ 0x00478e57
//   XREF to: 00478e57 (CONDITIONAL_JUMP)
// 00478e45: CMP AL,0x0
// 00478e47: JZ 0x00478e55
//   XREF to: 00478e55 (CONDITIONAL_JUMP)
// 00478e49: INC ESI
// 00478e4a: MOV AL,byte ptr [ESI]
// 00478e4c: CMP AL,DL
// 00478e4e: JZ 0x00478e57
//   XREF to: 00478e57 (CONDITIONAL_JUMP)
// 00478e50: INC ESI
// 00478e51: CMP AL,0x0
// 00478e53: JNZ 0x00478e3f
//   XREF to: 00478e3f (CONDITIONAL_JUMP)
// 00478e55: SUB ESI,ESI
//   Label: LAB_00478e55
// 00478e57: TEST ESI,ESI
//   Label: LAB_00478e57
// 00478e59: JZ 0x00479015
//   XREF to: 00479015 (CONDITIONAL_JUMP)
// 00478e5f: PUSH 0x569
//   Label: LAB_00478e5f
// 00478e64: PUSH 0x61f9f9
//   XREF to: 0061f9f9 (DATA)
// 00478e69: PUSH 0x61fa0c
//   XREF to: 0061fa0c (DATA)
// 00478e6e: PUSH 0x0
// 00478e70: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 00478e74: PUSH ECX
// 00478e75: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00478e7a: MOV EDI,EAX
// 00478e7c: ADD ESP,0x14
// 00478e7f: TEST EDI,EDI
//   Label: LAB_00478e7f
// 00478e81: JNZ 0x00478eab
//   XREF to: 00478eab (CONDITIONAL_JUMP)
// 00478e83: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00478e87: PUSH EBP
// 00478e88: MOV EBX,0x61fa19
//   XREF to: 0061fa19 (PARAM)
// 00478e8d: MOV ESI,0x56d
// 00478e92: PUSH 0x61fa2c
//   XREF to: 0061fa2c (DATA)
// 00478e97: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00478e9d: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00478ea3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00478ea8: ADD ESP,0x8
// 00478eab: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00478eab
//   XREF to: Stack[0x4] (READ)
// 00478eaf: MOV EDX,dword ptr [EAX + 0x5698]
// 00478eb5: XOR EBX,EBX
// 00478eb7: TEST EDX,EDX
// 00478eb9: JNZ 0x00479033
//   XREF to: 00479033 (CONDITIONAL_JUMP)
// 00478ebf: PUSH 0x61fa48
//   Label: LAB_00478ebf
//   XREF to: 0061fa48 (DATA)
// 00478ec4: PUSH EDI
// 00478ec5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478eca: ADD ESP,0x8
// 00478ecd: PUSH 0x8
// 00478ecf: PUSH 0x61fa59
//   XREF to: 0061fa59 (DATA)
// 00478ed4: PUSH EDI
// 00478ed5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478eda: ADD ESP,0xc
// 00478edd: PUSH 0x61fa5d
//   XREF to: 0061fa5d (DATA)
// 00478ee2: PUSH EDI
// 00478ee3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478ee8: ADD ESP,0x8
// 00478eeb: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00478eef: MOV ECX,dword ptr [EAX + 0x100]
// 00478ef5: PUSH ECX
// 00478ef6: MOV ESI,dword ptr [EAX + 0x5584]
// 00478efc: PUSH ESI
// 00478efd: MOV EBP,dword ptr [EAX + 0x120]
// 00478f03: PUSH EBP
// 00478f04: MOV EDX,dword ptr [EAX + 0x110]
// 00478f0a: PUSH EDX
// 00478f0b: MOV ECX,dword ptr [EAX + 0x104]
// 00478f11: PUSH ECX
// 00478f12: PUSH 0x61fa99
//   XREF to: 0061fa99 (DATA)
// 00478f17: PUSH EDI
// 00478f18: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478f1d: ADD ESP,0x1c
// 00478f20: PUSH 0x61faa9
//   XREF to: 0061faa9 (DATA)
// 00478f25: PUSH EDI
// 00478f26: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478f2b: ADD ESP,0x8
// 00478f2e: PUSH EBX
// 00478f2f: PUSH 0x61fac2
//   XREF to: 0061fac2 (DATA)
// 00478f34: PUSH EDI
// 00478f35: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478f3a: ADD ESP,0xc
// 00478f3d: PUSH 0x61fac6
//   XREF to: 0061fac6 (DATA)
// 00478f42: PUSH EDI
// 00478f43: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478f48: ADD ESP,0x8
// 00478f4b: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00478f4f: MOV EBX,dword ptr [EAX + 0x569c]
// 00478f55: PUSH EBX
// 00478f56: PUSH 0x61fadf
//   XREF to: 0061fadf (DATA)
// 00478f5b: PUSH EDI
// 00478f5c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478f61: ADD ESP,0xc
// 00478f64: PUSH 0x61fae3
//   XREF to: 0061fae3 (DATA)
// 00478f69: PUSH EDI
// 00478f6a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478f6f: ADD ESP,0x8
// 00478f72: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00478f76: MOV ESI,dword ptr [EAX + 0x56a0]
// 00478f7c: PUSH ESI
// 00478f7d: PUSH 0x61fafe
//   XREF to: 0061fafe (DATA)
// 00478f82: PUSH EDI
// 00478f83: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478f88: ADD ESP,0xc
// 00478f8b: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00478f8f: CMP dword ptr [EAX + 0x11c],0x0
// 00478f96: SETNZ BL
// 00478f99: PUSH 0x61fb02
//   XREF to: 0061fb02 (DATA)
// 00478f9e: AND EBX,0xff
// 00478fa4: PUSH EDI
// 00478fa5: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00478fa9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478fae: ADD ESP,0x8
// 00478fb1: PUSH EBX
// 00478fb2: PUSH 0x61fb15
//   XREF to: 0061fb15 (DATA)
// 00478fb7: PUSH EDI
// 00478fb8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478fbd: ADD ESP,0xc
// 00478fc0: PUSH 0x61fb19
//   XREF to: 0061fb19 (DATA)
// 00478fc5: PUSH EDI
// 00478fc6: XOR ESI,ESI
// 00478fc8: XOR EBP,EBP
// 00478fca: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00478fcf: ADD ESP,0x8
// 00478fd2: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00478fd2
//   XREF to: Stack[0x4] (READ)
// 00478fd6: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00478fda: MOV EDX,dword ptr [EAX + 0x100]
// 00478fe0: MOV EBX,dword ptr [EBX + 0x104]
// 00478fe6: IMUL EBX,EDX
// 00478fe9: CMP ESI,EBX
// 00478feb: JGE 0x0047903d
//   XREF to: 0047903d (CONDITIONAL_JUMP)
// 00478fed: MOV EBX,dword ptr [EAX + 0x10c]
// 00478ff3: MOV EAX,dword ptr [EBX + EBP*0x1 + 0x8]
// 00478ff7: PUSH EAX
// 00478ff8: MOV EDX,dword ptr [EBX + EBP*0x1 + 0x4]
// 00478ffc: PUSH EDX
// 00478ffd: MOV ECX,dword ptr [EBX + EBP*0x1]
// 00479000: PUSH ECX
// 00479001: PUSH 0x61fb30
//   XREF to: 0061fb30 (DATA)
// 00479006: PUSH EDI
// 00479007: ADD EBP,0xc
// 0047900a: INC ESI
// 0047900b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00479010: ADD ESP,0x14
// 00479013: JMP 0x00478fd2
//   XREF to: 00478fd2 (UNCONDITIONAL_JUMP)
// 00479015: PUSH 0x61fa0f
//   Label: LAB_00479015
//   XREF to: 0061fa0f (DATA)
// 0047901a: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0047901e: PUSH EDX
// 0047901f: PUSH 0x61fa12
//   XREF to: 0061fa12 (DATA)
// 00479024: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00479029: MOV EDI,EAX
// 0047902b: ADD ESP,0xc
// 0047902e: JMP 0x00478e7f
//   XREF to: 00478e7f (UNCONDITIONAL_JUMP)
// 00479033: MOV EBX,0x1
//   Label: LAB_00479033
// 00479038: JMP 0x00478ebf
//   XREF to: 00478ebf (UNCONDITIONAL_JUMP)
// 0047903d: PUSH 0x61fb3a
//   Label: LAB_0047903d
//   XREF to: 0061fb3a (DATA)
// 00479042: PUSH EDI
// 00479043: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00479048: ADD ESP,0x8
// 0047904b: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0047904f: XOR ECX,ECX
// 00479051: MOV EBX,dword ptr [EAX + 0x110]
// 00479057: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0047905b: TEST EBX,EBX
// 0047905d: JLE 0x0047910f
//   XREF to: 0047910f (CONDITIONAL_JUMP)
// 00479063: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00479067: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047906b: MOV EBP,dword ptr [ESP + 0x24]
//   Label: LAB_0047906b
//   XREF to: Stack[0x4] (READ)
// 0047906f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00479073: MOV EBP,dword ptr [EBP + 0x114]
// 00479079: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0047907d: ADD EBP,EAX
// 0047907f: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00479083: MOV EBX,dword ptr [EBX + 0x118]
// 00479089: MOV EDX,dword ptr [EBP + 0x4]
// 0047908c: ADD EBX,ECX
// 0047908e: PUSH EDX
// 0047908f: MOV ESI,dword ptr [EBX]
// 00479091: PUSH ESI
// 00479092: PUSH 0x61fb6f
//   XREF to: 0061fb6f (DATA)
// 00479097: PUSH EDI
// 00479098: XOR ESI,ESI
// 0047909a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047909f: MOV EAX,dword ptr [EBP + 0x4]
// 004790a2: ADD ESP,0x10
// 004790a5: TEST EAX,EAX
// 004790a7: JLE 0x004790d0
//   XREF to: 004790d0 (CONDITIONAL_JUMP)
// 004790a9: MOV EBX,EBP
// 004790ab: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_004790ab
// 004790ae: PUSH EAX
// 004790af: MOV EDX,dword ptr [EBX + 0x1c]
// 004790b2: PUSH EDX
// 004790b3: MOV ECX,dword ptr [EBX + 0x18]
// 004790b6: PUSH ECX
// 004790b7: PUSH 0x61fb75
//   XREF to: 0061fb75 (DATA)
// 004790bc: PUSH EDI
// 004790bd: ADD EBX,0xc
// 004790c0: INC ESI
// 004790c1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004790c6: MOV EAX,dword ptr [EBP + 0x4]
// 004790c9: ADD ESP,0x14
// 004790cc: CMP ESI,EAX
// 004790ce: JL 0x004790ab
//   XREF to: 004790ab (CONDITIONAL_JUMP)
// 004790d0: PUSH 0x61fb80
//   Label: LAB_004790d0
//   XREF to: 0061fb80 (DATA)
// 004790d5: PUSH EDI
// 004790d6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004790db: ADD ESP,0x8
// 004790de: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004790e2: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 004790e6: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004790ea: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004790ee: ADD EBX,0x4
// 004790f1: ADD ESI,0x48
// 004790f4: INC EBP
// 004790f5: MOV EDX,dword ptr [EAX + 0x110]
// 004790fb: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004790ff: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00479103: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00479107: CMP EBP,EDX
// 00479109: JL 0x0047906b
//   XREF to: 0047906b (CONDITIONAL_JUMP)
// 0047910f: CMP dword ptr [ESP],0x0
//   Label: LAB_0047910f
//   XREF to: Stack[-0x20] (DATA)
// 00479113: JZ 0x00479170
//   XREF to: 00479170 (CONDITIONAL_JUMP)
// 00479115: PUSH 0x61fb82
//   XREF to: 0061fb82 (DATA)
// 0047911a: PUSH EDI
// 0047911b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00479120: ADD ESP,0x8
// 00479123: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00479127: MOV EBX,dword ptr [EAX + 0x110]
// 0047912d: XOR ESI,ESI
// 0047912f: TEST EBX,EBX
// 00479131: JLE 0x00479170
//   XREF to: 00479170 (CONDITIONAL_JUMP)
// 00479133: MOV EBX,dword ptr [ESP + 0x24]
//   Label: LAB_00479133
//   XREF to: Stack[0x4] (READ)
// 00479137: MOV EBX,dword ptr [EBX + 0x11c]
// 0047913d: MOV BL,byte ptr [ESI + EBX*0x1]
// 00479140: AND EBX,0xff
// 00479146: PUSH EBX
// 00479147: PUSH 0x61fb99
//   XREF to: 0061fb99 (DATA)
// 0047914c: PUSH EDI
// 0047914d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00479152: ADD ESP,0xc
// 00479155: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00479159: INC ESI
// 0047915a: CMP ESI,dword ptr [EAX + 0x110]
// 00479160: JL 0x00479133
//   XREF to: 00479133 (CONDITIONAL_JUMP)
// 00479162: LEA EAX,[EAX]
// 00479168: LEA EDX,[EDX]
// 0047916e: MOV EAX,EAX
// 00479170: PUSH 0x61fb9d
//   Label: LAB_00479170
//   XREF to: 0061fb9d (DATA)
// 00479175: PUSH EDI
// 00479176: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047917b: ADD ESP,0x8
// 0047917e: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00479182: MOV ECX,dword ptr [EAX + 0x120]
// 00479188: XOR EBX,EBX
// 0047918a: TEST ECX,ECX
// 0047918c: JLE 0x004791c0
//   XREF to: 004791c0 (CONDITIONAL_JUMP)
// 0047918e: LEA ESI,[EAX + 0x12c]
// 00479194: PUSH ESI
//   Label: LAB_00479194
// 00479195: PUSH 0x61fbae
//   XREF to: 0061fbae (DATA)
// 0047919a: PUSH EDI
// 0047919b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004791a0: ADD ESP,0xc
// 004791a3: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004791a7: INC EBX
// 004791a8: MOV EBP,dword ptr [EAX + 0x120]
// 004791ae: ADD ESI,0x48
// 004791b1: CMP EBX,EBP
// 004791b3: JL 0x00479194
//   XREF to: 00479194 (CONDITIONAL_JUMP)
// 004791b5: LEA EAX,[EAX]
// 004791bb: LEA EDX,[EDX]
// 004791be: MOV EBX,EBX
// 004791c0: PUSH 0x61fbb2
//   Label: LAB_004791c0
//   XREF to: 0061fbb2 (DATA)
// 004791c5: PUSH EDI
// 004791c6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004791cb: ADD ESP,0x8
// 004791ce: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004791d2: MOV EDX,dword ptr [EAX + 0x5584]
// 004791d8: XOR ESI,ESI
// 004791da: TEST EDX,EDX
// 004791dc: JLE 0x00479210
//   XREF to: 00479210 (CONDITIONAL_JUMP)
// 004791de: MOV EBX,EAX
// 004791e0: MOV ECX,dword ptr [EBX + 0x558c]
//   Label: LAB_004791e0
// 004791e6: PUSH ECX
// 004791e7: MOV EBP,dword ptr [EBX + 0x5588]
// 004791ed: PUSH EBP
// 004791ee: PUSH 0x61fbd9
//   XREF to: 0061fbd9 (DATA)
// 004791f3: PUSH EDI
// 004791f4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004791f9: ADD ESP,0x10
// 004791fc: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00479200: INC ESI
// 00479201: MOV EAX,dword ptr [EBP + 0x5584]
// 00479207: ADD EBX,0x8
// 0047920a: CMP ESI,EAX
// 0047920c: JL 0x004791e0
//   XREF to: 004791e0 (CONDITIONAL_JUMP)
// 0047920e: MOV EAX,EAX
// 00479210: TEST byte ptr [EDI + 0xc],0x20
//   Label: LAB_00479210
// 00479214: JNZ 0x00479231
//   XREF to: 00479231 (CONDITIONAL_JUMP)
// 00479216: PUSH 0x5e5
//   Label: LAB_00479216
// 0047921b: PUSH 0x61fc0d
//   XREF to: 0061fc0d (DATA)
// 00479220: PUSH EDI
// 00479221: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00479226: ADD ESP,0xc
// 00479229: ADD ESP,0x10
// 0047922c: POP EBP
// 0047922d: POP EDI
// 0047922e: POP ESI
// 0047922f: POP EBX
// 00479230: RET
// 00479231: MOV EBX,dword ptr [ESP + 0x28]
//   Label: LAB_00479231
//   XREF to: Stack[0x8] (READ)
// 00479235: PUSH EBX
// 00479236: MOV EDX,0x61fbe0
//   XREF to: 0061fbe0 (PARAM)
// 0047923b: MOV ECX,0x5e1
// 00479240: PUSH 0x61fbf3
//   XREF to: 0061fbf3 (DATA)
// 00479245: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0047924b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00479251: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00479256: ADD ESP,0x8
// 00479259: JMP 0x00479216
//   XREF to: 00479216 (UNCONDITIONAL_JUMP)
