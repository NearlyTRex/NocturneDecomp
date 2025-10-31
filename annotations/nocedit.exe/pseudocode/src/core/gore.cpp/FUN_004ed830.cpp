// Name: core_gore.cpp_FUN_004ed830
// Address: 004ed830
// Address Range: [[004ed830, 004ed9de]]
// Convention: __cdecl
// Signature: void core_gore.cpp_FUN_004ed830(CGore * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c5c9 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b724 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_00571380 (00571380) at 00571390 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005713c0 (005713c0) at 005713eb [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.blood_flag
//   undefined4 DAT_02d873d8
//   CBloodSplat[2000] DAT_02d873dc
//   undefined4 DAT_02d87420
//   undefined4 DAT_02da8720
//   CBloodPool[32] DAT_02da8724
//   undefined4 DAT_02da874c
//   undefined4 DAT_02da8c28
//   CFootstep[1000] DAT_02da8c2c
//   undefined4 DAT_02da8c6c
// Function calls:
//   core_gore.cpp_FUN_004ec470
//   core_gore.cpp_FUN_004ec500
//   core_gore.cpp_FUN_004ecc40
//   core_gore.cpp_FUN_004ecce0
//   core_gore.cpp_FUN_004ed3c0

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004ed830(CGore *this_ptr)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int in_stack_00000008;
  
  if (g_CGamePtr->blood_flag != 0) {
    uVar4 = core_gore_cpp_FUN_004ec470();
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (in_stack_00000008 == 0) {
      iVar3 = 0;
      if (0 < DAT_02d873d8) {
        iVar2 = 0;
        do {
          if (*(int *)(DAT_02d873dc[0].field0_0x0 + iVar2) == 0) {
            core_gore_cpp_FUN_004ec500();
            uVar1 = extraout_EDX;
          }
          uVar4 = CONCAT44(uVar1,DAT_02d873d8);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x44;
        } while (iVar3 < DAT_02d873d8);
      }
    }
    else {
      iVar3 = 0;
      if (0 < DAT_02d873d8) {
        do {
          iVar3 = iVar3 + 1;
          uVar4 = core_gore_cpp_FUN_004ec500();
        } while (iVar3 < DAT_02d873d8);
      }
    }
    core_gore_cpp_FUN_004ecc40((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    if (in_stack_00000008 == 0) {
      iVar3 = 0;
      if (0 < DAT_02da8720) {
        iVar2 = 0;
        do {
          if (*(int *)(DAT_02da8724[0].field0_0x0 + iVar2) == 0) {
            core_gore_cpp_FUN_004ecce0();
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x28;
        } while (iVar3 < DAT_02da8720);
      }
    }
    else {
      iVar3 = 0;
      if (0 < DAT_02da8720) {
        do {
          iVar3 = iVar3 + 1;
          core_gore_cpp_FUN_004ecce0();
        } while (iVar3 < DAT_02da8720);
      }
    }
    if (in_stack_00000008 == 0) {
      iVar3 = 0;
      if (0 < DAT_02da8c28) {
        iVar2 = 0;
        do {
          if (*(int *)(DAT_02da8c2c[0].field0_0x0 + iVar2) == 0) {
            core_gore_cpp_FUN_004ed3c0();
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x40;
        } while (iVar3 < DAT_02da8c28);
      }
    }
    else {
      iVar3 = 0;
      if (0 < DAT_02da8c28) {
        do {
          iVar3 = iVar3 + 1;
          core_gore_cpp_FUN_004ed3c0();
        } while (iVar3 < DAT_02da8c28);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 004ed830: PUSH EBX
//   Label: core_gore.cpp_FUN_004ed830
// 004ed831: PUSH ESI
// 004ed832: PUSH EDI
// 004ed833: PUSH EBP
// 004ed834: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ed838: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004ed83c: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 004ed841: CMP dword ptr [EAX + 0x14],0x0
//   XREF to: 02d81ab0 (READ)
// 004ed845: JNZ 0x004ed855
//   XREF to: 004ed855 (CONDITIONAL_JUMP)
// 004ed847: LEA EAX,[EAX]
//   XREF to: 02d81a9c (DATA)
// 004ed84d: LEA EDX,[EDX]
// 004ed850: POP EBP
//   Label: LAB_004ed850
// 004ed851: POP EDI
// 004ed852: POP ESI
// 004ed853: POP EBX
// 004ed854: RET
// 004ed855: PUSH 0x2d873dc
//   Label: LAB_004ed855
//   XREF to: 02d873dc (DATA)
// 004ed85a: CALL core_gore.cpp_FUN_004ec470
//   XREF to: 004ec470 (UNCONDITIONAL_CALL)
// 004ed85f: ADD ESP,0x4
// 004ed862: TEST EBP,EBP
// 004ed864: JZ 0x004ed91b
//   XREF to: 004ed91b (CONDITIONAL_JUMP)
// 004ed86a: MOV EBX,dword ptr [0x02d873d8]
//   XREF to: 02d873d8 (READ)
// 004ed870: XOR ESI,ESI
// 004ed872: TEST EBX,EBX
// 004ed874: JLE 0x004ed8a0
//   XREF to: 004ed8a0 (CONDITIONAL_JUMP)
// 004ed876: MOV EBX,0x2d873dc
//   XREF to: 02d873dc (PARAM)
// 004ed87b: PUSH 0x0
//   Label: LAB_004ed87b
// 004ed87d: PUSH EBX
//   XREF to: 02d873dc (DATA)
//   XREF to: 02d87420 (DATA)
// 004ed87e: INC ESI
// 004ed87f: CALL core_gore.cpp_FUN_004ec500
//   XREF to: 004ec500 (UNCONDITIONAL_CALL)
// 004ed884: MOV ECX,dword ptr [0x02d873d8]
//   XREF to: 02d873d8 (READ)
// 004ed88a: ADD ESP,0x8
// 004ed88d: ADD EBX,0x44
//   XREF to: 02d87420 (PARAM)
// 004ed890: CMP ESI,ECX
// 004ed892: JL 0x004ed87b
//   XREF to: 004ed87b (CONDITIONAL_JUMP)
// 004ed894: LEA EAX,[EAX]
// 004ed89a: LEA EDX,[EDX]
// 004ed8a0: PUSH 0x2da8724
//   Label: LAB_004ed8a0
//   XREF to: 02da8724 (DATA)
// 004ed8a5: CALL core_gore.cpp_FUN_004ecc40
//   XREF to: 004ecc40 (UNCONDITIONAL_CALL)
// 004ed8aa: ADD ESP,0x4
// 004ed8ad: TEST EBP,EBP
// 004ed8af: JZ 0x004ed95c
//   XREF to: 004ed95c (CONDITIONAL_JUMP)
// 004ed8b5: MOV ESI,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004ed8bb: XOR EBX,EBX
// 004ed8bd: TEST ESI,ESI
// 004ed8bf: JLE 0x004ed8e0
//   XREF to: 004ed8e0 (CONDITIONAL_JUMP)
// 004ed8c1: MOV ESI,0x2da8724
//   XREF to: 02da8724 (DATA)
// 004ed8c6: PUSH 0x0
//   Label: LAB_004ed8c6
// 004ed8c8: PUSH ESI
//   XREF to: 02da8724 (DATA)
//   XREF to: 02da874c (DATA)
// 004ed8c9: INC EBX
// 004ed8ca: CALL core_gore.cpp_FUN_004ecce0
//   XREF to: 004ecce0 (UNCONDITIONAL_CALL)
// 004ed8cf: MOV ECX,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004ed8d5: ADD ESP,0x8
// 004ed8d8: ADD ESI,0x28
// 004ed8db: CMP EBX,ECX
// 004ed8dd: JL 0x004ed8c6
//   XREF to: 004ed8c6 (CONDITIONAL_JUMP)
// 004ed8df: NOP
// 004ed8e0: TEST EBP,EBP
//   Label: LAB_004ed8e0
// 004ed8e2: JZ 0x004ed99d
//   XREF to: 004ed99d (CONDITIONAL_JUMP)
// 004ed8e8: MOV ESI,dword ptr [0x02da8c28]
//   XREF to: 02da8c28 (READ)
// 004ed8ee: XOR EBX,EBX
// 004ed8f0: TEST ESI,ESI
// 004ed8f2: JLE 0x004ed850
//   XREF to: 004ed850 (CONDITIONAL_JUMP)
// 004ed8f8: MOV ESI,0x2da8c2c
//   XREF to: 02da8c2c (DATA)
// 004ed8fd: PUSH 0x0
//   Label: LAB_004ed8fd
// 004ed8ff: PUSH ESI
//   XREF to: 02da8c2c (DATA)
//   XREF to: 02da8c6c (DATA)
// 004ed900: INC EBX
// 004ed901: CALL core_gore.cpp_FUN_004ed3c0
//   XREF to: 004ed3c0 (UNCONDITIONAL_CALL)
// 004ed906: MOV EDX,dword ptr [0x02da8c28]
//   XREF to: 02da8c28 (READ)
// 004ed90c: ADD ESP,0x8
// 004ed90f: ADD ESI,0x40
// 004ed912: CMP EBX,EDX
// 004ed914: JL 0x004ed8fd
//   XREF to: 004ed8fd (CONDITIONAL_JUMP)
// 004ed916: POP EBP
// 004ed917: POP EDI
// 004ed918: POP ESI
// 004ed919: POP EBX
// 004ed91a: RET
// 004ed91b: MOV ECX,dword ptr [0x02d873d8]
//   Label: LAB_004ed91b
//   XREF to: 02d873d8 (READ)
// 004ed921: XOR ESI,ESI
// 004ed923: TEST ECX,ECX
// 004ed925: JLE 0x004ed8a0
//   XREF to: 004ed8a0 (CONDITIONAL_JUMP)
// 004ed92b: XOR EBX,EBX
// 004ed92d: CMP dword ptr [EBX + 0x2d873dc],0x0
//   Label: LAB_004ed92d
//   XREF to: 02d873dc (READ)
//   XREF to: 02d87420 (READ)
// 004ed934: JZ 0x004ed949
//   XREF to: 004ed949 (CONDITIONAL_JUMP)
// 004ed936: MOV EAX,[0x02d873d8]
//   Label: LAB_004ed936
//   XREF to: 02d873d8 (READ)
// 004ed93b: INC ESI
// 004ed93c: ADD EBX,0x44
// 004ed93f: CMP ESI,EAX
// 004ed941: JGE 0x004ed8a0
//   XREF to: 004ed8a0 (CONDITIONAL_JUMP)
// 004ed947: JMP 0x004ed92d
//   XREF to: 004ed92d (UNCONDITIONAL_JUMP)
// 004ed949: MOV EAX,0x2d873dc
//   Label: LAB_004ed949
//   XREF to: 02d873dc (DATA)
// 004ed94e: PUSH EDI
// 004ed94f: ADD EAX,EBX
//   XREF to: 02d87420 (PARAM)
// 004ed951: PUSH EAX
//   XREF to: 02d87420 (DATA)
// 004ed952: CALL core_gore.cpp_FUN_004ec500
//   XREF to: 004ec500 (UNCONDITIONAL_CALL)
// 004ed957: ADD ESP,0x8
// 004ed95a: JMP 0x004ed936
//   XREF to: 004ed936 (UNCONDITIONAL_JUMP)
// 004ed95c: MOV EBX,dword ptr [0x02da8720]
//   Label: LAB_004ed95c
//   XREF to: 02da8720 (READ)
// 004ed962: XOR ESI,ESI
// 004ed964: TEST EBX,EBX
// 004ed966: JLE 0x004ed8e0
//   XREF to: 004ed8e0 (CONDITIONAL_JUMP)
// 004ed96c: XOR EBX,EBX
// 004ed96e: CMP dword ptr [EBX + 0x2da8724],0x0
//   Label: LAB_004ed96e
//   XREF to: 02da8724 (READ)
//   XREF to: 02da874c (READ)
// 004ed975: JZ 0x004ed98a
//   XREF to: 004ed98a (CONDITIONAL_JUMP)
// 004ed977: MOV EAX,[0x02da8720]
//   Label: LAB_004ed977
//   XREF to: 02da8720 (READ)
// 004ed97c: INC ESI
// 004ed97d: ADD EBX,0x28
// 004ed980: CMP ESI,EAX
// 004ed982: JGE 0x004ed8e0
//   XREF to: 004ed8e0 (CONDITIONAL_JUMP)
// 004ed988: JMP 0x004ed96e
//   XREF to: 004ed96e (UNCONDITIONAL_JUMP)
// 004ed98a: MOV EAX,0x2da8724
//   Label: LAB_004ed98a
//   XREF to: 02da8724 (DATA)
// 004ed98f: PUSH EDI
// 004ed990: ADD EAX,EBX
//   XREF to: 02da874c (PARAM)
// 004ed992: PUSH EAX
//   XREF to: 02da874c (DATA)
// 004ed993: CALL core_gore.cpp_FUN_004ecce0
//   XREF to: 004ecce0 (UNCONDITIONAL_CALL)
// 004ed998: ADD ESP,0x8
// 004ed99b: JMP 0x004ed977
//   XREF to: 004ed977 (UNCONDITIONAL_JUMP)
// 004ed99d: MOV EBX,dword ptr [0x02da8c28]
//   Label: LAB_004ed99d
//   XREF to: 02da8c28 (READ)
// 004ed9a3: XOR ESI,ESI
// 004ed9a5: TEST EBX,EBX
// 004ed9a7: JLE 0x004ed850
//   XREF to: 004ed850 (CONDITIONAL_JUMP)
// 004ed9ad: XOR EBX,EBX
// 004ed9af: CMP dword ptr [EBX + 0x2da8c2c],0x0
//   Label: LAB_004ed9af
//   XREF to: 02da8c2c (READ)
//   XREF to: 02da8c6c (READ)
// 004ed9b6: JZ 0x004ed9cc
//   XREF to: 004ed9cc (CONDITIONAL_JUMP)
// 004ed9b8: MOV EBP,dword ptr [0x02da8c28]
//   Label: LAB_004ed9b8
//   XREF to: 02da8c28 (READ)
// 004ed9be: INC ESI
// 004ed9bf: ADD EBX,0x40
// 004ed9c2: CMP ESI,EBP
// 004ed9c4: JGE 0x004ed850
//   XREF to: 004ed850 (CONDITIONAL_JUMP)
// 004ed9ca: JMP 0x004ed9af
//   XREF to: 004ed9af (UNCONDITIONAL_JUMP)
// 004ed9cc: MOV EAX,0x2da8c2c
//   Label: LAB_004ed9cc
//   XREF to: 02da8c2c (DATA)
// 004ed9d1: PUSH EDI
// 004ed9d2: ADD EAX,EBX
//   XREF to: 02da8c6c (PARAM)
// 004ed9d4: PUSH EAX
//   XREF to: 02da8c6c (DATA)
// 004ed9d5: CALL core_gore.cpp_FUN_004ed3c0
//   XREF to: 004ed3c0 (UNCONDITIONAL_CALL)
// 004ed9da: ADD ESP,0x8
// 004ed9dd: JMP 0x004ed9b8
//   XREF to: 004ed9b8 (UNCONDITIONAL_JUMP)
