// Name: engine_dosio.c_ensureTrailingSlash_FUN_00481f80
// Address: 00481f80
// Address Range: [[00481f80, 00482030]]
// Convention: __cdecl
// Signature: void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579692 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584cae [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3a26 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b50a0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b42b3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b362e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b28d5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb0c0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba969 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60 (004b1e60) at 004b1e88 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_buildFilePath_FUN_004b1de0 (004b1de0) at 004b1e02 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10 (004b1f10) at 004b1f64 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b3249 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_00621654
//   undefined4 DAT_00621655
//   TerminatedCString s_core_dpart_cpp_00621656
//   undefined4 s_.\core\dpart.cpp_00621657
// Function calls:
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20

#include "nocturne.h"

void __cdecl
engine_dosio_c_ensureTrailingSlash_FUN_00481f80(char *input_path,char *drive,char *output_path)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_208 [4];
  char acStack_204 [252];
  char local_108 [4];
  char acStack_104 [252];
  
  bVar6 = 0;
  engine_dosio_c_splitPath_FUN_00481f20(input_path,drive,local_208,local_108,&stack0xfffffcf8);
  engine_dosio_c_makePath_FUN_00481f50
            (output_path,(char *)0x0,acStack_204,acStack_104,&stack0xfffffcfc);
  if ((output_path != (char *)0x0) && (*output_path != '\0')) {
    uVar2 = 0xffffffff;
    pcVar4 = output_path;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    if (output_path[~uVar2 - 2] != '\\') {
      pcVar4 = "\\";
      iVar3 = -1;
      do {
        pcVar5 = output_path;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar5 = output_path + (uint)bVar6 * -2 + 1;
        cVar1 = *output_path;
        output_path = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      return;
    }
  }
  return;
}


// Assembly code:
// 00481f80: PUSH EBX
//   Label: engine_dosio.c_ensureTrailingSlash_FUN_00481f80
// 00481f81: PUSH EDI
// 00481f82: SUB ESP,0x300
// 00481f88: MOV EBX,dword ptr [ESP + 0x314]
//   XREF to: Stack[0xc] (READ)
// 00481f8f: MOV ECX,ESP
// 00481f91: PUSH ECX
// 00481f92: LEA ECX,[ESP + 0x204]
//   XREF to: Stack[-0x108] (DATA)
// 00481f99: PUSH ECX
// 00481f9a: LEA ECX,[ESP + 0x108]
//   XREF to: Stack[-0x208] (DATA)
// 00481fa1: PUSH ECX
// 00481fa2: MOV EDX,dword ptr [ESP + 0x31c]
//   XREF to: Stack[0x8] (READ)
// 00481fa9: PUSH EDX
// 00481faa: MOV ECX,dword ptr [ESP + 0x31c]
//   XREF to: Stack[0x4] (READ)
// 00481fb1: PUSH ECX
// 00481fb2: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00481fb7: ADD ESP,0x14
// 00481fba: MOV ECX,ESP
// 00481fbc: PUSH ECX
// 00481fbd: LEA ECX,[ESP + 0x204]
//   XREF to: Stack[-0x108] (DATA)
// 00481fc4: PUSH ECX
// 00481fc5: LEA ECX,[ESP + 0x108]
//   XREF to: Stack[-0x208] (DATA)
// 00481fcc: PUSH ECX
// 00481fcd: PUSH 0x0
// 00481fcf: PUSH EBX
// 00481fd0: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 00481fd5: ADD ESP,0x14
// 00481fd8: TEST EBX,EBX
// 00481fda: JZ 0x00481fe1
//   XREF to: 00481fe1 (CONDITIONAL_JUMP)
// 00481fdc: CMP byte ptr [EBX],0x0
// 00481fdf: JNZ 0x00481fea
//   XREF to: 00481fea (CONDITIONAL_JUMP)
// 00481fe1: ADD ESP,0x300
//   Label: LAB_00481fe1
// 00481fe7: POP EDI
// 00481fe8: POP EBX
// 00481fe9: RET
// 00481fea: MOV EDI,EBX
//   Label: LAB_00481fea
// 00481fec: SUB ECX,ECX
// 00481fee: DEC ECX
// 00481fef: XOR EAX,EAX
// 00481ff1: SCASB.REPNE ES:EDI
// 00481ff3: NOT ECX
// 00481ff5: DEC ECX
// 00481ff6: CMP byte ptr [ECX + EBX*0x1 + -0x1],0x5c
// 00481ffb: JZ 0x00481fe1
//   XREF to: 00481fe1 (CONDITIONAL_JUMP)
// 00481ffd: PUSH ESI
// 00481ffe: MOV ESI,0x621654
//   XREF to: 00621654 (DATA)
// 00482003: MOV EDI,EBX
// 00482005: PUSH EDI
// 00482006: SUB ECX,ECX
// 00482008: DEC ECX
// 00482009: MOV AL,0x0
// 0048200b: SCASB.REPNE ES:EDI
// 0048200d: DEC EDI
// 0048200e: MOV AL,byte ptr [ESI]
//   Label: LAB_0048200e
//   XREF to: 00621654 (READ)
//   XREF to: 00621656 (READ)
// 00482010: MOV byte ptr [EDI],AL
// 00482012: CMP AL,0x0
// 00482014: JZ 0x00482026
//   XREF to: 00482026 (CONDITIONAL_JUMP)
// 00482016: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00621655 (READ)
//   XREF to: 00621657 (READ)
// 00482019: ADD ESI,0x2
// 0048201c: MOV byte ptr [EDI + 0x1],AL
// 0048201f: ADD EDI,0x2
// 00482022: CMP AL,0x0
// 00482024: JNZ 0x0048200e
//   XREF to: 0048200e (CONDITIONAL_JUMP)
// 00482026: POP EDI
//   Label: LAB_00482026
// 00482027: POP ESI
// 00482028: ADD ESP,0x300
// 0048202e: POP EDI
// 0048202f: POP EBX
// 00482030: RET
