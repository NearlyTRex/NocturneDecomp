// Name: core_setedit.cpp_FUN_005801b0
// Address: 005801b0
// Address Range: [[005801b0, 00580309]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_005801b0()
// Cross-references:
//   core_setedit.cpp_CDemonSet_FUN_005800d0 (005800d0) at 00580180 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03659384
// Function calls:
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_005801b0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

bool core_setedit_cpp_FUN_005801b0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_stack_00000008;
  int in_stack_00000010;
  
  core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310();
  piVar2 = (int *)(DAT_03659384 + in_stack_00000010 * 0x4b030);
  iVar1 = in_stack_00000008[1] - piVar2[1];
  iVar4 = *in_stack_00000008 - *piVar2;
  iVar7 = in_stack_00000008[2] - piVar2[2];
  iVar6 = ((uint)((longlong)piVar2[5] * (longlong)iVar4) >> 0x10 |
          (int)((ulonglong)((longlong)piVar2[5] * (longlong)iVar4) >> 0x20) << 0x10) +
          ((uint)((longlong)piVar2[8] * (longlong)iVar1) >> 0x10 |
          (int)((ulonglong)((longlong)piVar2[8] * (longlong)iVar1) >> 0x20) << 0x10) +
          ((uint)((longlong)piVar2[0xb] * (longlong)iVar7) >> 0x10 |
          (int)((ulonglong)((longlong)piVar2[0xb] * (longlong)iVar7) >> 0x20) << 0x10);
  if ((0 < iVar6) &&
     (iVar5 = ((uint)((longlong)piVar2[3] * (longlong)iVar4) >> 0x10 |
              (int)((ulonglong)((longlong)piVar2[3] * (longlong)iVar4) >> 0x20) << 0x10) +
              ((uint)((longlong)piVar2[6] * (longlong)iVar1) >> 0x10 |
              (int)((ulonglong)((longlong)piVar2[6] * (longlong)iVar1) >> 0x20) << 0x10) +
              ((uint)((longlong)piVar2[9] * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)piVar2[9] * (longlong)iVar7) >> 0x20) << 0x10),
     iVar5 < iVar6)) {
    iVar3 = -iVar6;
    if ((iVar5 != iVar3 && SBORROW4(iVar5,iVar3) == iVar5 + iVar6 < 0) &&
       ((iVar1 = ((uint)((longlong)piVar2[4] * (longlong)iVar4) >> 0x10 |
                 (int)((ulonglong)((longlong)piVar2[4] * (longlong)iVar4) >> 0x20) << 0x10) +
                 ((uint)((longlong)piVar2[7] * (longlong)iVar1) >> 0x10 |
                 (int)((ulonglong)((longlong)piVar2[7] * (longlong)iVar1) >> 0x20) << 0x10) +
                 ((uint)((longlong)piVar2[10] * (longlong)iVar7) >> 0x10 |
                 (int)((ulonglong)((longlong)piVar2[10] * (longlong)iVar7) >> 0x20) << 0x10),
        iVar1 < iVar6 && (iVar3 < iVar1)))) {
      iVar4 = (int)(((longlong)iVar5 * 0xa0) / (longlong)iVar6) + 0xa0;
      iVar7 = (int)(((longlong)iVar1 * 0x78) / (longlong)iVar6);
      iVar1 = iVar7 + 0x78;
      if ((0 < iVar4) && (((0 < iVar1 && (iVar4 < 0x13f)) && (iVar1 < 0xef)))) {
        return iVar6 + -0x100 < piVar2[iVar4 * 0xf0 + iVar7 + 0x84];
      }
    }
  }
  return false;
}


// Assembly code:
// 005801b0: PUSH EBX
//   Label: core_setedit.cpp_FUN_005801b0
// 005801b1: PUSH ESI
// 005801b2: PUSH EDI
// 005801b3: PUSH EBP
// 005801b4: SUB ESP,0x8
// 005801b7: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005801bb: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005801bf: PUSH EDX
// 005801c0: CALL core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
//   XREF to: 00580310 (UNCONDITIONAL_CALL)
// 005801c5: ADD ESP,0x4
// 005801c8: IMUL EAX,dword ptr [ESP + 0x24],0x4b030
//   XREF to: Stack[0xc] (READ)
// 005801d0: MOV ECX,dword ptr [0x03659384]
//   XREF to: 03659384 (READ)
// 005801d6: ADD ECX,EAX
// 005801d8: MOV EBX,dword ptr [EDI]
// 005801da: MOV ESI,dword ptr [ECX]
// 005801dc: MOV EAX,dword ptr [EDI + 0x4]
// 005801df: MOV EBP,dword ptr [ECX + 0x4]
// 005801e2: MOV EDI,dword ptr [EDI + 0x8]
// 005801e5: SUB EAX,EBP
// 005801e7: SUB EBX,ESI
// 005801e9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005801ed: MOV EAX,dword ptr [ECX + 0x8]
// 005801f0: MOV EDX,EBX
// 005801f2: SUB EDI,EAX
// 005801f4: MOV EAX,dword ptr [ECX + 0x14]
// 005801f7: IMUL EDX
// 005801f9: SHRD EAX,EDX,0x10
// 005801fd: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00580201: MOV ESI,EAX
// 00580203: MOV EAX,dword ptr [ECX + 0x20]
// 00580206: IMUL EDX
// 00580208: SHRD EAX,EDX,0x10
// 0058020c: MOV EDX,EDI
// 0058020e: ADD ESI,EAX
// 00580210: MOV EAX,dword ptr [ECX + 0x2c]
// 00580213: IMUL EDX
// 00580215: SHRD EAX,EDX,0x10
// 00580219: ADD ESI,EAX
// 0058021b: TEST ESI,ESI
// 0058021d: JG 0x00580229
//   XREF to: 00580229 (CONDITIONAL_JUMP)
// 0058021f: XOR EAX,EAX
//   Label: LAB_0058021f
// 00580221: ADD ESP,0x8
// 00580224: POP EBP
// 00580225: POP EDI
// 00580226: POP ESI
// 00580227: POP EBX
// 00580228: RET
// 00580229: MOV EDX,EBX
//   Label: LAB_00580229
// 0058022b: MOV EAX,dword ptr [ECX + 0xc]
// 0058022e: IMUL EDX
// 00580230: SHRD EAX,EDX,0x10
// 00580234: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00580238: MOV EBP,EAX
// 0058023a: MOV EAX,dword ptr [ECX + 0x18]
// 0058023d: IMUL EDX
// 0058023f: SHRD EAX,EDX,0x10
// 00580243: MOV EDX,EDI
// 00580245: ADD EBP,EAX
// 00580247: MOV EAX,dword ptr [ECX + 0x24]
// 0058024a: IMUL EDX
// 0058024c: SHRD EAX,EDX,0x10
// 00580250: ADD EBP,EAX
// 00580252: CMP EBP,ESI
// 00580254: JGE 0x0058021f
//   XREF to: 0058021f (CONDITIONAL_JUMP)
// 00580256: MOV EDX,ESI
// 00580258: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 0058025b: NEG EDX
// 0058025d: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 00580260: CMP EBP,EDX
// 00580262: JLE 0x0058021f
//   XREF to: 0058021f (CONDITIONAL_JUMP)
// 00580264: MOV EDX,EBX
// 00580266: MOV EAX,dword ptr [ECX + 0x10]
// 00580269: IMUL EDX
// 0058026b: SHRD EAX,EDX,0x10
// 0058026f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00580273: MOV EBX,EAX
// 00580275: MOV EAX,dword ptr [ECX + 0x1c]
// 00580278: IMUL EDX
// 0058027a: SHRD EAX,EDX,0x10
// 0058027e: MOV EDX,EDI
// 00580280: ADD EBX,EAX
// 00580282: MOV EAX,dword ptr [ECX + 0x28]
// 00580285: IMUL EDX
// 00580287: SHRD EAX,EDX,0x10
// 0058028b: LEA EDI,[EBX + EAX*0x1]
// 0058028e: CMP EDI,ESI
// 00580290: JGE 0x0058021f
//   XREF to: 0058021f (CONDITIONAL_JUMP)
// 00580292: CMP EDI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00580295: JLE 0x0058021f
//   XREF to: 0058021f (CONDITIONAL_JUMP)
// 00580297: MOV EDX,0xa0
// 0058029c: MOV EBX,ESI
// 0058029e: MOV EAX,EBP
// 005802a0: IMUL EDX
// 005802a2: IDIV EBX
// 005802a4: MOV EDX,0x78
// 005802a9: LEA EBP,[EAX + 0xa0]
// 005802af: MOV EBX,ESI
// 005802b1: MOV EAX,EDI
// 005802b3: IMUL EDX
// 005802b5: IDIV EBX
// 005802b7: LEA EDI,[EAX + 0x78]
// 005802ba: CMP EBP,0x1
// 005802bd: JL 0x0058021f
//   XREF to: 0058021f (CONDITIONAL_JUMP)
// 005802c3: CMP EDI,0x1
// 005802c6: JL 0x0058021f
//   XREF to: 0058021f (CONDITIONAL_JUMP)
// 005802cc: CMP EBP,0x13f
// 005802d2: JGE 0x0058021f
//   XREF to: 0058021f (CONDITIONAL_JUMP)
// 005802d8: CMP EDI,0xef
// 005802de: JGE 0x0058021f
//   XREF to: 0058021f (CONDITIONAL_JUMP)
// 005802e4: SHL EBP,0x6
// 005802e7: MOV EAX,EBP
// 005802e9: SHL EAX,0x4
// 005802ec: SUB EAX,EBP
// 005802ee: ADD ECX,EAX
// 005802f0: SUB ESI,0x100
// 005802f6: CMP ESI,dword ptr [ECX + EDI*0x4 + 0x30]
// 005802fa: SETL AL
// 005802fd: AND EAX,0xff
// 00580302: ADD ESP,0x8
// 00580305: POP EBP
// 00580306: POP EDI
// 00580307: POP ESI
// 00580308: POP EBX
// 00580309: RET
