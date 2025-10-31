// Name: core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
// Address: 0047ed00
// Address Range: [[0047ed00, 0047edc7]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files)
// Cross-references:
//   core_anvil.cpp_CAnvil_FUN_00412090 (00412090) at 004120cf [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00418110 (00418110) at 0041814f [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422900 (00422900) at 00422938 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043e0a0 (0043e0a0) at 0043e0c5 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448b60 (00448b60) at 00448b9f [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 (0047edd0) at 0047ee1c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 (0047ee30) at 0047eea7 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be9b0 (004be9b0) at 004be9ef [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb750 (004cb750) at 004cb78f [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_FUN_004e5ef0 (004e5ef0) at 004e5f2f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_ART_s_RAW_00620f0b
//   TerminatedCString s_ART_s_ACT_00620f17
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
          (CKeyFramedModel *this_ptr,FILE *dependency_file,int skip_raw_files)

{
  char cVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char local_d8 [200];
  
  iVar3 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar2 = this_ptr->texture_list[0].base.texture_name;
    do {
      pcVar6 = local_d8;
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        pcVar5 = local_d8;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
        pcVar5 = local_d8;
      } while (cVar1 != '\0');
      do {
        pcVar4 = pcVar5;
        if (*pcVar5 == '.') goto LAB_0047ed61;
        if (*pcVar5 == '\0') break;
        pcVar4 = pcVar5 + 1;
        if (*pcVar4 == '.') goto LAB_0047ed61;
        pcVar5 = pcVar5 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_0047ed61:
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      if (skip_raw_files == 0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(dependency_file,"ART\\%s.RAW\n",local_d8);
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(dependency_file,"ART\\%s.ACT\n",local_d8);
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x48;
    } while (iVar3 < (int)dependency_file[10]._link);
  }
  return;
}


// Assembly code:
// 0047ed00: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
// 0047ed01: PUSH ESI
// 0047ed02: PUSH EDI
// 0047ed03: PUSH EBP
// 0047ed04: SUB ESP,0xc8
// 0047ed0a: MOV EBX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x4] (READ)
// 0047ed11: MOV EDX,dword ptr [EBX + 0x120]
// 0047ed17: XOR EBP,EBP
// 0047ed19: TEST EDX,EDX
// 0047ed1b: JLE 0x0047edb8
//   XREF to: 0047edb8 (CONDITIONAL_JUMP)
// 0047ed21: ADD EBX,0x12c
// 0047ed27: MOV EDI,ESP
//   Label: LAB_0047ed27
// 0047ed29: MOV ESI,EBX
// 0047ed2b: MOV DL,0x2e
// 0047ed2d: PUSH EDI
// 0047ed2e: MOV AL,byte ptr [ESI]
//   Label: LAB_0047ed2e
// 0047ed30: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xd8] (DATA)
// 0047ed32: CMP AL,0x0
// 0047ed34: JZ 0x0047ed46
//   XREF to: 0047ed46 (CONDITIONAL_JUMP)
// 0047ed36: MOV AL,byte ptr [ESI + 0x1]
// 0047ed39: ADD ESI,0x2
// 0047ed3c: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xd7] (WRITE)
// 0047ed3f: ADD EDI,0x2
// 0047ed42: CMP AL,0x0
// 0047ed44: JNZ 0x0047ed2e
//   XREF to: 0047ed2e (CONDITIONAL_JUMP)
// 0047ed46: POP EDI
//   Label: LAB_0047ed46
// 0047ed47: MOV ESI,ESP
// 0047ed49: MOV AL,byte ptr [ESI]
//   Label: LAB_0047ed49
//   XREF to: Stack[-0xd8] (DATA)
// 0047ed4b: CMP AL,DL
// 0047ed4d: JZ 0x0047ed61
//   XREF to: 0047ed61 (CONDITIONAL_JUMP)
// 0047ed4f: CMP AL,0x0
// 0047ed51: JZ 0x0047ed5f
//   XREF to: 0047ed5f (CONDITIONAL_JUMP)
// 0047ed53: INC ESI
// 0047ed54: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xd7] (DATA)
// 0047ed56: CMP AL,DL
// 0047ed58: JZ 0x0047ed61
//   XREF to: 0047ed61 (CONDITIONAL_JUMP)
// 0047ed5a: INC ESI
// 0047ed5b: CMP AL,0x0
// 0047ed5d: JNZ 0x0047ed49
//   XREF to: 0047ed49 (CONDITIONAL_JUMP)
// 0047ed5f: SUB ESI,ESI
//   Label: LAB_0047ed5f
// 0047ed61: TEST ESI,ESI
//   Label: LAB_0047ed61
// 0047ed63: JNZ 0x0047edc3
//   XREF to: 0047edc3 (CONDITIONAL_JUMP)
// 0047ed65: CMP dword ptr [ESP + 0xe4],0x0
//   Label: LAB_0047ed65
//   XREF to: Stack[0xc] (READ)
// 0047ed6d: JNZ 0x0047ed87
//   XREF to: 0047ed87 (CONDITIONAL_JUMP)
// 0047ed6f: MOV ESI,ESP
// 0047ed71: PUSH ESI
// 0047ed72: PUSH 0x620f0b
//   XREF to: 00620f0b (DATA)
// 0047ed77: MOV EDX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x8] (READ)
// 0047ed7e: PUSH EDX
// 0047ed7f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047ed84: ADD ESP,0xc
// 0047ed87: MOV ESI,ESP
//   Label: LAB_0047ed87
// 0047ed89: PUSH ESI
// 0047ed8a: PUSH 0x620f17
//   XREF to: 00620f17 (DATA)
// 0047ed8f: MOV ECX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x8] (READ)
// 0047ed96: PUSH ECX
// 0047ed97: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047ed9c: ADD ESP,0xc
// 0047ed9f: MOV ESI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x4] (READ)
// 0047eda6: INC EBP
// 0047eda7: MOV EDI,dword ptr [ESI + 0x120]
// 0047edad: ADD EBX,0x48
// 0047edb0: CMP EBP,EDI
// 0047edb2: JL 0x0047ed27
//   XREF to: 0047ed27 (CONDITIONAL_JUMP)
// 0047edb8: ADD ESP,0xc8
//   Label: LAB_0047edb8
// 0047edbe: POP EBP
// 0047edbf: POP EDI
// 0047edc0: POP ESI
// 0047edc1: POP EBX
// 0047edc2: RET
// 0047edc3: MOV byte ptr [ESI],0x0
//   Label: LAB_0047edc3
// 0047edc6: JMP 0x0047ed65
//   XREF to: 0047ed65 (UNCONDITIONAL_JUMP)
