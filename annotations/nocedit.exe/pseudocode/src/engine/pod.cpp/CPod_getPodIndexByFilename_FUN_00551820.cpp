// Name: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
// Address: 00551820
// Address Range: [[00551820, 005518b0]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod * this_ptr, char * target_filename)
// Cross-references:
//   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0 (005513d0) at 005516a7 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_splitPath_FUN_00481f20

#include "nocturne.h"

int __cdecl
engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod *this_ptr,char *target_filename)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CPod *pCVar3;
  char acStack_208 [248];
  char local_110 [8];
  char acStack_108 [248];
  
  iVar2 = 0;
  engine_dosio_c_splitPath_FUN_00481f20
            (target_filename,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      engine_dosio_c_splitPath_FUN_00481f20
                (pCVar3->pod_files[0]->filename,(char *)0x0,(char *)0x0,&stack0xfffffdf4,(char *)0x0
                );
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(acStack_108,acStack_208);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return -1;
}


// Assembly code:
// 00551820: PUSH EBX
//   Label: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
// 00551821: PUSH ESI
// 00551822: PUSH EDI
// 00551823: PUSH EBP
// 00551824: SUB ESP,0x200
// 0055182a: MOV EDI,dword ptr [ESP + 0x214]
//   XREF to: Stack[0x4] (READ)
// 00551831: PUSH 0x0
// 00551833: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x110] (DATA)
// 0055183a: PUSH EAX
// 0055183b: PUSH 0x0
// 0055183d: PUSH 0x0
// 0055183f: MOV EDX,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x8] (READ)
// 00551846: PUSH EDX
// 00551847: XOR EBX,EBX
// 00551849: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0055184e: MOV ECX,dword ptr [EDI]
// 00551850: ADD ESP,0x14
// 00551853: TEST ECX,ECX
// 00551855: JLE 0x00551894
//   XREF to: 00551894 (CONDITIONAL_JUMP)
// 00551857: MOV ESI,EDI
// 00551859: PUSH 0x0
//   Label: LAB_00551859
// 0055185b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 0055185f: PUSH EAX
// 00551860: PUSH 0x0
// 00551862: MOV EAX,dword ptr [ESI + 0x4]
// 00551865: PUSH 0x0
// 00551867: ADD EAX,0x4
// 0055186a: PUSH EAX
// 0055186b: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00551870: ADD ESP,0x14
// 00551873: MOV EAX,ESP
// 00551875: PUSH EAX
// 00551876: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x110] (DATA)
// 0055187d: PUSH EAX
// 0055187e: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00551883: ADD ESP,0x8
// 00551886: TEST EAX,EAX
// 00551888: JZ 0x005518a4
//   XREF to: 005518a4 (CONDITIONAL_JUMP)
// 0055188a: INC EBX
// 0055188b: MOV EBP,dword ptr [EDI]
// 0055188d: ADD ESI,0x4
// 00551890: CMP EBX,EBP
// 00551892: JL 0x00551859
//   XREF to: 00551859 (CONDITIONAL_JUMP)
// 00551894: MOV EAX,0xffffffff
//   Label: LAB_00551894
// 00551899: ADD ESP,0x200
// 0055189f: POP EBP
// 005518a0: POP EDI
// 005518a1: POP ESI
// 005518a2: POP EBX
// 005518a3: RET
// 005518a4: MOV EAX,EBX
//   Label: LAB_005518a4
// 005518a6: ADD ESP,0x200
// 005518ac: POP EBP
// 005518ad: POP EDI
// 005518ae: POP ESI
// 005518af: POP EBX
// 005518b0: RET
