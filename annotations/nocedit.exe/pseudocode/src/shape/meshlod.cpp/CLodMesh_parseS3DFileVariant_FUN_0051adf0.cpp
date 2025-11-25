// Name: shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0
// Address: 0051adf0
// Address Range: [[0051adf0, 0051b078]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh * this_ptr, FILE * file_handle)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_importFromFileAlt_FUN_0051ad60 (0051ad60) at 0051ada2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_00637c66
//   TerminatedCString s_d_d_d_00637c6e
//   TerminatedCString s_anon_00637c78
//   TerminatedCString s_raw_00637c7f
//   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_00637c83
//   TerminatedCString s_f_f_f_00637ca5
// Function calls:
//   crt_file.c_makepath_FUN_005febfc
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_splitpath_FUN_005ff178
//   shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
//   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh *this_ptr,FILE *file_handle)

{
  int iVar1;
  char *path_buffer;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int unaff_EDI;
  char acStack_114 [4];
  char acStack_110 [244];
  undefined1 local_1c [4];
  int local_18;
  
  iVar3 = 2;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%*d\n",local_1c);
  for (iVar3 = local_18 * 5 + 2; 0 < iVar3; iVar3 = iVar3 + -1) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) goto LAB_0051ae8f;
    } while (iVar1 != 10);
  }
LAB_0051ae8f:
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%d,%d,%d\n",&stack0xfffffff0,&stack0xfffffff4,&stack0xfffffff8);
  iVar3 = 1;
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0(this_ptr,unaff_ESI,unaff_EBX,unaff_EDI);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->submesh_count) {
    iVar1 = 0;
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%[^\n]\n");
      crt_string_c_splitpath_FUN_005ff178
                (&stack0xfffffde8,(char *)0x0,(char *)0x0,acStack_114,(char *)0x0);
      path_buffer = this_ptr->submesh_data->texture_filename + iVar1;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x48;
      crt_file_c_makepath_FUN_005febfc
                (path_buffer,(char *)0x0,(char *)0x0,acStack_110,"raw");
    } while (iVar3 < this_ptr->submesh_count);
  }
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->tri_count) {
    iVar1 = 0;
    do {
      iVar2 = (int)this_ptr->tri_data->attribute_indices + iVar1;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x8c;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file_handle,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n","%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",iVar2,
                 iVar2 + 0x10,iVar2 + 0x1c,iVar2 + 0x20,iVar2 + 0x14,iVar2 + 0x24,iVar2 + 0x28,
                 iVar2 + 0x18);
    } while (iVar3 < this_ptr->tri_count);
  }
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar1 = 0;
    do {
      iVar2 = iVar1 + -0x10;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x4c4;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file_handle,"%f,%f,%f\n","%f,%f,%f\n",
                 this_ptr->vertex_data->lod_workspace + iVar2);
    } while (iVar3 < this_ptr->vertex_count);
  }
  this_ptr->active_attribute_count = 1;
  this_ptr->sort_attribute_count = 2;
  this_ptr->reserved_attribute_count = 0;
  shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(this_ptr);
  return;
}


// Assembly code:
// 0051adf0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0
// 0051adf1: PUSH ESI
// 0051adf2: PUSH EDI
// 0051adf3: PUSH EBP
// 0051adf4: SUB ESP,0x214
// 0051adfa: MOV ESI,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x4] (READ)
// 0051ae01: MOV EDI,dword ptr [ESP + 0x22c]
//   XREF to: Stack[0x8] (READ)
// 0051ae08: MOV EBX,0x2
// 0051ae0d: MOV EBP,EDI
// 0051ae0f: PUSH EBP
//   Label: LAB_0051ae0f
// 0051ae10: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051ae15: ADD ESP,0x4
// 0051ae18: TEST EAX,EAX
// 0051ae1a: JL 0x0051ae26
//   XREF to: 0051ae26 (CONDITIONAL_JUMP)
// 0051ae1c: CMP EAX,0xa
// 0051ae1f: JNZ 0x0051ae0f
//   XREF to: 0051ae0f (CONDITIONAL_JUMP)
// 0051ae21: DEC EBX
// 0051ae22: TEST EBX,EBX
// 0051ae24: JG 0x0051ae0f
//   XREF to: 0051ae0f (CONDITIONAL_JUMP)
// 0051ae26: MOV EBX,0x1
//   Label: LAB_0051ae26
// 0051ae2b: MOV EBP,EDI
// 0051ae2d: PUSH EBP
//   Label: LAB_0051ae2d
// 0051ae2e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051ae33: ADD ESP,0x4
// 0051ae36: TEST EAX,EAX
// 0051ae38: JL 0x0051ae44
//   XREF to: 0051ae44 (CONDITIONAL_JUMP)
// 0051ae3a: CMP EAX,0xa
// 0051ae3d: JNZ 0x0051ae2d
//   XREF to: 0051ae2d (CONDITIONAL_JUMP)
// 0051ae3f: DEC EBX
// 0051ae40: TEST EBX,EBX
// 0051ae42: JG 0x0051ae2d
//   XREF to: 0051ae2d (CONDITIONAL_JUMP)
// 0051ae44: LEA EAX,[ESP + 0x204]
//   Label: LAB_0051ae44
//   XREF to: Stack[-0x20] (DATA)
// 0051ae4b: PUSH EAX
// 0051ae4c: PUSH 0x637c66
//   XREF to: 00637c66 (DATA)
// 0051ae51: PUSH EDI
// 0051ae52: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051ae57: ADD ESP,0xc
// 0051ae5a: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x20] (READ)
// 0051ae61: MOV EDX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x20] (READ)
// 0051ae68: SHL EAX,0x2
// 0051ae6b: ADD EDX,0x2
// 0051ae6e: ADD EAX,EDX
// 0051ae70: MOV EBX,EDI
// 0051ae72: MOV EBP,EAX
// 0051ae74: TEST EAX,EAX
// 0051ae76: JLE 0x0051ae8f
//   XREF to: 0051ae8f (CONDITIONAL_JUMP)
// 0051ae78: PUSH EBX
//   Label: LAB_0051ae78
// 0051ae79: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051ae7e: ADD ESP,0x4
// 0051ae81: TEST EAX,EAX
// 0051ae83: JL 0x0051ae8f
//   XREF to: 0051ae8f (CONDITIONAL_JUMP)
// 0051ae85: CMP EAX,0xa
// 0051ae88: JNZ 0x0051ae78
//   XREF to: 0051ae78 (CONDITIONAL_JUMP)
// 0051ae8a: DEC EBP
// 0051ae8b: TEST EBP,EBP
// 0051ae8d: JG 0x0051ae78
//   XREF to: 0051ae78 (CONDITIONAL_JUMP)
// 0051ae8f: MOV EBX,0x1
//   Label: LAB_0051ae8f
// 0051ae94: MOV EBP,EDI
// 0051ae96: PUSH EBP
//   Label: LAB_0051ae96
// 0051ae97: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051ae9c: ADD ESP,0x4
// 0051ae9f: TEST EAX,EAX
// 0051aea1: JL 0x0051aead
//   XREF to: 0051aead (CONDITIONAL_JUMP)
// 0051aea3: CMP EAX,0xa
// 0051aea6: JNZ 0x0051ae96
//   XREF to: 0051ae96 (CONDITIONAL_JUMP)
// 0051aea8: DEC EBX
// 0051aea9: TEST EBX,EBX
// 0051aeab: JG 0x0051ae96
//   XREF to: 0051ae96 (CONDITIONAL_JUMP)
// 0051aead: LEA EAX,[ESP + 0x210]
//   Label: LAB_0051aead
//   XREF to: Stack[-0x14] (DATA)
// 0051aeb4: PUSH EAX
// 0051aeb5: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x18] (DATA)
// 0051aebc: PUSH EAX
// 0051aebd: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x1c] (DATA)
// 0051aec4: PUSH EAX
// 0051aec5: PUSH 0x637c6e
//   XREF to: 00637c6e (DATA)
// 0051aeca: PUSH EDI
// 0051aecb: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051aed0: ADD ESP,0x14
// 0051aed3: MOV EDX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x1c] (READ)
// 0051aeda: PUSH EDX
// 0051aedb: MOV ECX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x14] (READ)
// 0051aee2: PUSH ECX
// 0051aee3: MOV EBX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x18] (READ)
// 0051aeea: PUSH EBX
// 0051aeeb: PUSH ESI
// 0051aeec: MOV EBP,EDI
// 0051aeee: MOV EBX,0x1
// 0051aef3: CALL shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
//   XREF to: 00515ac0 (UNCONDITIONAL_CALL)
// 0051aef8: ADD ESP,0x10
// 0051aefb: PUSH EBP
//   Label: LAB_0051aefb
// 0051aefc: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051af01: ADD ESP,0x4
// 0051af04: TEST EAX,EAX
// 0051af06: JL 0x0051af12
//   XREF to: 0051af12 (CONDITIONAL_JUMP)
// 0051af08: CMP EAX,0xa
// 0051af0b: JNZ 0x0051aefb
//   XREF to: 0051aefb (CONDITIONAL_JUMP)
// 0051af0d: DEC EBX
// 0051af0e: TEST EBX,EBX
// 0051af10: JG 0x0051aefb
//   XREF to: 0051aefb (CONDITIONAL_JUMP)
// 0051af12: MOV EAX,dword ptr [ESI + 0x10]
//   Label: LAB_0051af12
// 0051af15: XOR EBP,EBP
// 0051af17: TEST EAX,EAX
// 0051af19: JLE 0x0051af80
//   XREF to: 0051af80 (CONDITIONAL_JUMP)
// 0051af1b: XOR EBX,EBX
// 0051af1d: MOV EAX,ESP
//   Label: LAB_0051af1d
// 0051af1f: PUSH EAX
// 0051af20: PUSH 0x637c78
//   XREF to: 00637c78 (DATA)
// 0051af25: PUSH EDI
// 0051af26: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051af2b: ADD ESP,0xc
// 0051af2e: PUSH 0x0
// 0051af30: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x120] (DATA)
// 0051af37: PUSH EAX
// 0051af38: PUSH 0x0
// 0051af3a: PUSH 0x0
// 0051af3c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x224] (DATA)
// 0051af40: PUSH EAX
// 0051af41: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0051af46: ADD ESP,0x14
// 0051af49: PUSH 0x637c7f
//   XREF to: 00637c7f (DATA)
// 0051af4e: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x120] (DATA)
// 0051af55: PUSH EAX
// 0051af56: MOV EAX,dword ptr [ESI + 0x14]
// 0051af59: PUSH 0x0
// 0051af5b: ADD EAX,EBX
// 0051af5d: PUSH 0x0
// 0051af5f: ADD EAX,0x8
// 0051af62: PUSH EAX
// 0051af63: INC EBP
// 0051af64: ADD EBX,0x48
// 0051af67: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0051af6c: MOV EDX,dword ptr [ESI + 0x10]
// 0051af6f: ADD ESP,0x14
// 0051af72: CMP EBP,EDX
// 0051af74: JL 0x0051af1d
//   XREF to: 0051af1d (CONDITIONAL_JUMP)
// 0051af76: LEA EAX,[EAX]
// 0051af7c: LEA EDX,[EDX]
// 0051af80: MOV EBX,0x1
//   Label: LAB_0051af80
// 0051af85: MOV EBP,EDI
// 0051af87: PUSH EBP
//   Label: LAB_0051af87
// 0051af88: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051af8d: ADD ESP,0x4
// 0051af90: TEST EAX,EAX
// 0051af92: JL 0x0051af9e
//   XREF to: 0051af9e (CONDITIONAL_JUMP)
// 0051af94: CMP EAX,0xa
// 0051af97: JNZ 0x0051af87
//   XREF to: 0051af87 (CONDITIONAL_JUMP)
// 0051af99: DEC EBX
// 0051af9a: TEST EBX,EBX
// 0051af9c: JG 0x0051af87
//   XREF to: 0051af87 (CONDITIONAL_JUMP)
// 0051af9e: MOV ECX,dword ptr [ESI + 0x8]
//   Label: LAB_0051af9e
// 0051afa1: XOR EBP,EBP
// 0051afa3: TEST ECX,ECX
// 0051afa5: JLE 0x0051aff0
//   XREF to: 0051aff0 (CONDITIONAL_JUMP)
// 0051afa7: XOR EBX,EBX
// 0051afa9: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_0051afa9
// 0051afac: ADD EAX,EBX
// 0051afae: LEA EDX,[EAX + 0x30]
// 0051afb1: PUSH EDX
// 0051afb2: LEA EDX,[EAX + 0x2c]
// 0051afb5: PUSH EDX
// 0051afb6: LEA EDX,[EAX + 0x18]
// 0051afb9: PUSH EDX
// 0051afba: LEA EDX,[EAX + 0x28]
// 0051afbd: PUSH EDX
// 0051afbe: LEA EDX,[EAX + 0x24]
// 0051afc1: PUSH EDX
// 0051afc2: LEA EDX,[EAX + 0x14]
// 0051afc5: PUSH EDX
// 0051afc6: LEA EDX,[EAX + 0x20]
// 0051afc9: PUSH EDX
// 0051afca: LEA EDX,[EAX + 0x1c]
// 0051afcd: PUSH EDX
// 0051afce: LEA EDX,[EAX + 0x10]
// 0051afd1: PUSH EDX
// 0051afd2: PUSH EAX
// 0051afd3: PUSH 0x637c83
//   XREF to: 00637c83 (DATA)
// 0051afd8: PUSH EDI
// 0051afd9: INC EBP
// 0051afda: ADD EBX,0x8c
// 0051afe0: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051afe5: MOV EAX,dword ptr [ESI + 0x8]
// 0051afe8: ADD ESP,0x30
// 0051afeb: CMP EBP,EAX
// 0051afed: JL 0x0051afa9
//   XREF to: 0051afa9 (CONDITIONAL_JUMP)
// 0051afef: NOP
// 0051aff0: MOV EBX,0x1
//   Label: LAB_0051aff0
// 0051aff5: MOV EBP,EDI
// 0051aff7: PUSH EBP
//   Label: LAB_0051aff7
// 0051aff8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0051affd: ADD ESP,0x4
// 0051b000: TEST EAX,EAX
// 0051b002: JL 0x0051b00e
//   XREF to: 0051b00e (CONDITIONAL_JUMP)
// 0051b004: CMP EAX,0xa
// 0051b007: JNZ 0x0051aff7
//   XREF to: 0051aff7 (CONDITIONAL_JUMP)
// 0051b009: DEC EBX
// 0051b00a: TEST EBX,EBX
// 0051b00c: JG 0x0051aff7
//   XREF to: 0051aff7 (CONDITIONAL_JUMP)
// 0051b00e: MOV EDX,dword ptr [ESI]
//   Label: LAB_0051b00e
// 0051b010: XOR EBP,EBP
// 0051b012: TEST EDX,EDX
// 0051b014: JLE 0x0051b050
//   XREF to: 0051b050 (CONDITIONAL_JUMP)
// 0051b016: XOR EBX,EBX
// 0051b018: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_0051b018
// 0051b01b: ADD EAX,EBX
// 0051b01d: LEA EDX,[EAX + 0x8]
// 0051b020: PUSH EDX
// 0051b021: LEA EDX,[EAX + 0x4]
// 0051b024: PUSH EDX
// 0051b025: PUSH EAX
// 0051b026: PUSH 0x637ca5
//   XREF to: 00637ca5 (DATA)
// 0051b02b: PUSH EDI
// 0051b02c: INC EBP
// 0051b02d: ADD EBX,0x4c4
// 0051b033: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0051b038: MOV ECX,dword ptr [ESI]
// 0051b03a: ADD ESP,0x14
// 0051b03d: CMP EBP,ECX
// 0051b03f: JL 0x0051b018
//   XREF to: 0051b018 (CONDITIONAL_JUMP)
// 0051b041: LEA EAX,[EAX]
// 0051b047: LEA EDX,[EDX]
// 0051b04d: LEA EAX,[EAX]
// 0051b050: MOV dword ptr [ESI + 0x18],0x1
//   Label: LAB_0051b050
// 0051b057: MOV dword ptr [ESI + 0x1c],0x2
// 0051b05e: PUSH ESI
// 0051b05f: MOV dword ptr [ESI + 0x20],0x0
// 0051b066: CALL shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330
//   XREF to: 0051b330 (UNCONDITIONAL_CALL)
// 0051b06b: ADD ESP,0x4
// 0051b06e: ADD ESP,0x214
// 0051b074: POP EBP
// 0051b075: POP EDI
// 0051b076: POP ESI
// 0051b077: POP EBX
// 0051b078: RET
