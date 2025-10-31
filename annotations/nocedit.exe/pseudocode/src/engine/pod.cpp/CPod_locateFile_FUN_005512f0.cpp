// Name: engine_pod.cpp_CPod_locateFile_FUN_005512f0
// Address: 005512f0
// Address Range: [[005512f0, 00551372]]
// Convention: __cdecl
// Signature: CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538981 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 (0053d190) at 0053d1ae [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537230 (00537230) at 00537274 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 (0058f040) at 0058f075 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589f40 (00589f40) at 00589f5f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b2c0 (0058b2c0) at 0058b2f5 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140

#include "nocturne.h"

CPodFile * __cdecl
engine_pod_cpp_CPod_locateFile_FUN_005512f0
          (CPod *this_ptr,char *base_path,char *filename,int *file_index_out)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CPod *pCVar3;
  int *in_stack_00000018;
  char acStack_220 [528];
  
  iVar2 = 0;
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(&stack0xfffffddc,base_path,filename);
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      iVar1 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(pCVar3->pod_files[0],acStack_220);
      if (-1 < iVar1) {
        if (in_stack_00000018 != (int *)0x0) {
          *in_stack_00000018 = iVar1;
        }
        return this_ptr->pod_files[iVar2];
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return (CPodFile *)0x0;
}


// Assembly code:
// 005512f0: PUSH EBX
//   Label: engine_pod.cpp_CPod_locateFile_FUN_005512f0
// 005512f1: PUSH ESI
// 005512f2: PUSH EDI
// 005512f3: PUSH EBP
// 005512f4: SUB ESP,0x214
// 005512fa: MOV EDI,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x4] (READ)
// 00551301: MOV EDX,dword ptr [ESP + 0x230]
//   XREF to: Stack[0xc] (READ)
// 00551308: PUSH EDX
// 00551309: MOV ECX,dword ptr [ESP + 0x230]
//   XREF to: Stack[0x8] (READ)
// 00551310: PUSH ECX
// 00551311: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x224] (DATA)
// 00551315: PUSH EAX
// 00551316: XOR EBX,EBX
// 00551318: CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   XREF to: 004816c0 (UNCONDITIONAL_CALL)
// 0055131d: MOV ESI,dword ptr [EDI]
// 0055131f: ADD ESP,0xc
// 00551322: TEST ESI,ESI
// 00551324: JLE 0x00551366
//   XREF to: 00551366 (CONDITIONAL_JUMP)
// 00551326: MOV ESI,EDI
// 00551328: MOV EAX,ESP
//   Label: LAB_00551328
// 0055132a: PUSH EAX
// 0055132b: MOV EAX,dword ptr [ESI + 0x4]
// 0055132e: PUSH EAX
// 0055132f: CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   XREF to: 00550140 (UNCONDITIONAL_CALL)
// 00551334: ADD ESP,0x8
// 00551337: TEST EAX,EAX
// 00551339: JL 0x0055135c
//   XREF to: 0055135c (CONDITIONAL_JUMP)
// 0055133b: MOV EDX,dword ptr [ESP + 0x234]
//   XREF to: Stack[0x10] (READ)
// 00551342: TEST EDX,EDX
// 00551344: JZ 0x00551348
//   XREF to: 00551348 (CONDITIONAL_JUMP)
// 00551346: MOV dword ptr [EDX],EAX
// 00551348: SHL EBX,0x2
//   Label: LAB_00551348
// 0055134b: LEA EAX,[EDI + EBX*0x1]
// 0055134e: MOV EAX,dword ptr [EAX + 0x4]
// 00551351: ADD ESP,0x214
// 00551357: POP EBP
// 00551358: POP EDI
// 00551359: POP ESI
// 0055135a: POP EBX
// 0055135b: RET
// 0055135c: INC EBX
//   Label: LAB_0055135c
// 0055135d: MOV EBP,dword ptr [EDI]
// 0055135f: ADD ESI,0x4
// 00551362: CMP EBX,EBP
// 00551364: JL 0x00551328
//   XREF to: 00551328 (CONDITIONAL_JUMP)
// 00551366: XOR EAX,EAX
//   Label: LAB_00551366
// 00551368: ADD ESP,0x214
// 0055136e: POP EBP
// 0055136f: POP EDI
// 00551370: POP ESI
// 00551371: POP EBX
// 00551372: RET
