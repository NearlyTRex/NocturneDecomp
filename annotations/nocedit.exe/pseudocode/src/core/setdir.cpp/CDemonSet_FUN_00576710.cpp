// Name: core_setdir.cpp_CDemonSet_FUN_00576710
// Address: 00576710
// Address Range: [[00576710, 0057681d]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_FUN_00576710(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056abe7 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569c11 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583258 [UNCONDITIONAL_CALL]
// Function calls:
//   core_setdir.cpp_CDemonSet_FUN_00576820
//   core_setdir.cpp_FUN_005763a0

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_00576710(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  undefined4 unaff_ESI;
  int iVar4;
  int unaff_EDI;
  int local_24;
  int local_18;
  
  iVar1 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->vdir_box_count) {
    do {
      pCVar3->vdir_boxes[0].field3_0x3c[4] = -1;
      pCVar3->vdir_boxes[0].field3_0x3c[5] = -1;
      pCVar3->vdir_boxes[0].field3_0x3c[6] = -1;
      pCVar3->vdir_boxes[0].field3_0x3c[7] = -1;
      iVar1 = iVar1 + 1;
      pCVar3 = (CDemonSet *)(pCVar3->cameras[0].name + 0x40);
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  local_24 = 0;
  if (0 < this_ptr->vdir_box_count) {
    do {
      core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
      iVar1 = local_24 + 1;
      if (iVar1 < this_ptr->vdir_box_count) {
        iVar4 = iVar1 * 0x44 + local_18;
        do {
          iVar2 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
          if ((iVar2 != unaff_EDI) &&
             ((iVar2 = core_setdir_cpp_FUN_005763a0(), local_24 = iVar4, iVar2 != 0 ||
              (iVar2 = core_setdir_cpp_FUN_005763a0(), iVar2 != 0)))) {
            *(undefined4 *)(this_ptr->vdir_boxes[unaff_EDI].field3_0x3c + 4) = unaff_ESI;
          }
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + 0x44;
        } while (iVar1 < this_ptr->vdir_box_count);
      }
      iVar1 = local_24 + 1;
      local_24 = iVar1;
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  return iVar1;
}


// Assembly code:
// 00576710: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_FUN_00576710
// 00576711: PUSH ESI
// 00576712: PUSH EDI
// 00576713: PUSH EBP
// 00576714: SUB ESP,0x18
// 00576717: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0057671b: MOV EDX,dword ptr [EDI + 0x15b410]
// 00576721: XOR EAX,EAX
// 00576723: TEST EDX,EDX
// 00576725: JLE 0x00576750
//   XREF to: 00576750 (CONDITIONAL_JUMP)
// 00576727: MOV EBX,EDI
// 00576729: MOV dword ptr [EBX + 0x15b454],0xffffffff
//   Label: LAB_00576729
// 00576733: INC EAX
// 00576734: MOV ECX,dword ptr [EDI + 0x15b410]
// 0057673a: ADD EBX,0x44
// 0057673d: CMP EAX,ECX
// 0057673f: JL 0x00576729
//   XREF to: 00576729 (CONDITIONAL_JUMP)
// 00576741: LEA EAX,[EAX]
// 00576747: LEA EDX,[EDX]
// 0057674d: LEA EAX,[EAX]
// 00576750: XOR EBX,EBX
//   Label: LAB_00576750
// 00576752: MOV ESI,dword ptr [EDI + 0x15b410]
// 00576758: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0057675c: TEST ESI,ESI
// 0057675e: JLE 0x005767aa
//   XREF to: 005767aa (CONDITIONAL_JUMP)
// 00576760: LEA EAX,[EDI + 0x15b414]
// 00576766: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x28] (DATA)
// 00576769: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057676d: MOV EBX,dword ptr [ESP + 0x4]
//   Label: LAB_0057676d
//   XREF to: Stack[-0x24] (READ)
// 00576771: PUSH EBX
// 00576772: PUSH EDI
// 00576773: CALL core_setdir.cpp_CDemonSet_FUN_00576820
//   XREF to: 00576820 (UNCONDITIONAL_CALL)
// 00576778: INC EBX
// 00576779: ADD ESP,0x8
// 0057677c: MOV ESI,dword ptr [EDI + 0x15b410]
// 00576782: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00576786: CMP EBX,ESI
// 00576788: JL 0x005767b2
//   XREF to: 005767b2 (CONDITIONAL_JUMP)
// 0057678e: MOV EBP,dword ptr [ESP]
//   Label: LAB_0057678e
//   XREF to: Stack[-0x28] (DATA)
// 00576791: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00576795: MOV EDX,dword ptr [EDI + 0x15b410]
// 0057679b: ADD EBP,0x44
// 0057679e: INC EAX
// 0057679f: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x28] (DATA)
// 005767a2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005767a6: CMP EAX,EDX
// 005767a8: JL 0x0057676d
//   XREF to: 0057676d (CONDITIONAL_JUMP)
// 005767aa: ADD ESP,0x18
//   Label: LAB_005767aa
// 005767ad: POP EBP
// 005767ae: POP EDI
// 005767af: POP ESI
// 005767b0: POP EBX
// 005767b1: RET
// 005767b2: IMUL ESI,EBX,0x44
//   Label: LAB_005767b2
// 005767b5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005767b8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005767bc: ADD ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005767c0: JMP 0x005767de
//   XREF to: 005767de (UNCONDITIONAL_JUMP)
// 005767c2: PUSH EBP
//   Label: LAB_005767c2
// 005767c3: PUSH ESI
// 005767c4: CALL core_setdir.cpp_FUN_005763a0
//   XREF to: 005763a0 (UNCONDITIONAL_CALL)
// 005767c9: ADD ESP,0x8
// 005767cc: TEST EAX,EAX
// 005767ce: JNZ 0x0057680c
//   XREF to: 0057680c (CONDITIONAL_JUMP)
// 005767d0: INC EBX
//   Label: LAB_005767d0
// 005767d1: MOV EBP,dword ptr [EDI + 0x15b410]
// 005767d7: ADD ESI,0x44
// 005767da: CMP EBX,EBP
// 005767dc: JGE 0x0057678e
//   XREF to: 0057678e (CONDITIONAL_JUMP)
// 005767de: PUSH EBX
//   Label: LAB_005767de
// 005767df: PUSH EDI
// 005767e0: CALL core_setdir.cpp_CDemonSet_FUN_00576820
//   XREF to: 00576820 (UNCONDITIONAL_CALL)
// 005767e5: ADD ESP,0x8
// 005767e8: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 005767ec: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005767f0: CMP EAX,EDX
// 005767f2: JZ 0x005767d0
//   XREF to: 005767d0 (CONDITIONAL_JUMP)
// 005767f4: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005767f8: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005767fc: PUSH ESI
// 005767fd: ADD EBP,ECX
// 005767ff: PUSH EBP
// 00576800: CALL core_setdir.cpp_FUN_005763a0
//   XREF to: 005763a0 (UNCONDITIONAL_CALL)
// 00576805: ADD ESP,0x8
// 00576808: TEST EAX,EAX
// 0057680a: JZ 0x005767c2
//   XREF to: 005767c2 (CONDITIONAL_JUMP)
// 0057680c: IMUL EAX,dword ptr [ESP + 0x10],0x44
//   Label: LAB_0057680c
//   XREF to: Stack[-0x18] (READ)
// 00576811: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00576815: MOV dword ptr [EDI + EAX*0x1 + 0x15b454],EBP
// 0057681c: JMP 0x005767d0
//   XREF to: 005767d0 (UNCONDITIONAL_JUMP)
