// Name: shape_superopt.cpp_FUN_005cb3a0
// Address: 005cb3a0
// Address Range: [[005cb3a0, 005cbb36]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cb3a0()
// Cross-references:
//   shape_superopt.cpp_FUN_005c8b50 (005c8b50) at 005c8d67 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c91e0 (005c91e0) at 005c92b4 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_superopt.cpp_FUN_005cbb40
//   shape_superopt.cpp_FUN_005d6640

#include "nocturne.h"

undefined4 shape_superopt_cpp_FUN_005cb3a0(void)

{
  int extraout_EDX;
  uint uVar1;
  uint uVar2;
  double dVar3;
  int in_stack_00000004;
  uint in_stack_0000000c;
  undefined4 uStack_13c;
  uint local_138;
  double dStack_134;
  double dStack_12c;
  
  shape_superopt_cpp_FUN_005cbb40();
  if (dStack_12c * *(double *)(in_stack_00000004 + 0x24) +
      (double)CONCAT44(local_138,uStack_13c) * *(double *)(in_stack_00000004 + 0x14) +
      dStack_134 * *(double *)(in_stack_00000004 + 0x1c) < 0.0) {
    return 0;
  }
  uVar2 = 0;
  if (in_stack_0000000c != 0) {
    do {
      uVar1 = 0;
      if (in_stack_0000000c != 0) {
        do {
          if (uVar1 != uVar2) {
            shape_superopt_cpp_FUN_005d6640();
            dVar3 = (double)shape_superopt_cpp_FUN_005d6640();
            if ((((((local_138 & 0x7fffffff) == 0) && (extraout_EDX == 0)) &&
                 (((ulonglong)dVar3 & 0x7fffffff00000000) == 0)) && (SUB84(dVar3,0) == 0)) ||
               ((((double)CONCAT44(local_138,extraout_EDX) < 0.0 && (0.0 < dVar3)) ||
                ((0.0 < (double)CONCAT44(local_138,extraout_EDX) && (dVar3 < 0.0)))))) {
              return 0;
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < in_stack_0000000c);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < in_stack_0000000c);
  }
  return 1;
}


// Assembly code:
// 005cb3a0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cb3a0
// 005cb3a1: PUSH ESI
// 005cb3a2: PUSH EDI
// 005cb3a3: PUSH EBP
// 005cb3a4: MOV EBP,ESP
// 005cb3a6: SUB ESP,0x16c
// 005cb3ac: AND ESP,0xfffffff8
// 005cb3af: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cb3b2: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cb3b5: PUSH EDX
// 005cb3b6: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cb3b9: PUSH ECX
// 005cb3ba: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x140] (DATA)
// 005cb3be: PUSH EAX
// 005cb3bf: PUSH EBX
// 005cb3c0: CALL shape_superopt.cpp_FUN_005cbb40
//   XREF to: 005cbb40 (UNCONDITIONAL_CALL)
// 005cb3c5: ADD ESP,0x10
// 005cb3c8: LEA EAX,[EBX + 0x14]
// 005cb3cb: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x138] (READ)
// 005cb3cf: FMUL double ptr [EAX + 0x8]
// 005cb3d2: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x140] (READ)
// 005cb3d6: FMUL double ptr [EAX]
// 005cb3d8: FADDP
// 005cb3da: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x130] (READ)
// 005cb3de: FMUL double ptr [EAX + 0x10]
// 005cb3e1: FADDP
// 005cb3e3: FLDZ
// 005cb3e5: FCOMPP
// 005cb3e7: FNSTSW AX
// 005cb3e9: SAHF
// 005cb3ea: JA 0x005cb62c
//   XREF to: 005cb62c (CONDITIONAL_JUMP)
// 005cb3f0: FLDZ
// 005cb3f2: FCOMP double ptr [EBX + 0x14]
// 005cb3f5: FNSTSW AX
// 005cb3f7: SAHF
// 005cb3f8: JBE 0x005cb635
//   XREF to: 005cb635 (CONDITIONAL_JUMP)
// 005cb3fe: FLD double ptr [EBX + 0x14]
// 005cb401: FCHS
// 005cb403: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x160] (WRITE)
// 005cb407: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005cb407
//   XREF to: Stack[-0x160] (READ)
// 005cb40b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 005cb40f: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x15c] (READ)
// 005cb413: FLDZ
// 005cb415: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 005cb419: FCOMP double ptr [EBX + 0x1c]
// 005cb41c: FNSTSW AX
// 005cb41e: SAHF
// 005cb41f: JA 0x005cb648
//   XREF to: 005cb648 (CONDITIONAL_JUMP)
// 005cb425: MOV EAX,dword ptr [EBX + 0x1c]
// 005cb428: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 005cb42c: MOV EAX,dword ptr [EBX + 0x20]
// 005cb42f: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005cb433: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005cb433
//   XREF to: Stack[-0x170] (READ)
// 005cb437: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 005cb43b: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x16c] (READ)
// 005cb43f: FLDZ
// 005cb441: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 005cb445: FCOMP double ptr [EBX + 0x24]
// 005cb448: FNSTSW AX
// 005cb44a: SAHF
// 005cb44b: JA 0x005cb656
//   XREF to: 005cb656 (CONDITIONAL_JUMP)
// 005cb451: MOV EAX,dword ptr [EBX + 0x24]
// 005cb454: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 005cb458: MOV EAX,dword ptr [EBX + 0x28]
// 005cb45b: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 005cb45f: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005cb45f
//   XREF to: Stack[-0x168] (READ)
// 005cb463: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005cb467: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x164] (READ)
// 005cb46b: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x158] (READ)
// 005cb46f: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005cb473: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x150] (READ)
// 005cb477: FNSTSW AX
// 005cb479: SAHF
// 005cb47a: JC 0x005cb664
//   XREF to: 005cb664 (CONDITIONAL_JUMP)
// 005cb480: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x158] (READ)
// 005cb484: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x168] (READ)
// 005cb488: FNSTSW AX
// 005cb48a: SAHF
// 005cb48b: JC 0x005cb664
//   XREF to: 005cb664 (CONDITIONAL_JUMP)
// 005cb491: MOV EAX,0x1
// 005cb496: FLD double ptr [ESP + 0x30]
//   Label: LAB_005cb496
//   XREF to: Stack[-0x150] (READ)
// 005cb49a: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005cb4a1: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x158] (READ)
// 005cb4a5: FNSTSW AX
// 005cb4a7: SAHF
// 005cb4a8: JC 0x005cb66b
//   XREF to: 005cb66b (CONDITIONAL_JUMP)
// 005cb4ae: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x150] (READ)
// 005cb4b2: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x178] (READ)
// 005cb4b6: FNSTSW AX
// 005cb4b8: SAHF
// 005cb4b9: JC 0x005cb66b
//   XREF to: 005cb66b (CONDITIONAL_JUMP)
// 005cb4bf: MOV EAX,0x1
// 005cb4c4: MOV EBX,dword ptr [EBP + 0x1c]
//   Label: LAB_005cb4c4
//   XREF to: Stack[0xc] (READ)
// 005cb4c7: MOV dword ptr [ESP + 0x168],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005cb4ce: XOR EDI,EDI
// 005cb4d0: TEST EBX,EBX
// 005cb4d2: JBE 0x005cb620
//   XREF to: 005cb620 (CONDITIONAL_JUMP)
// 005cb4d8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cb4db: MOV dword ptr [ESP + 0x160],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005cb4e2: CMP dword ptr [ESP + 0x164],0x0
//   Label: LAB_005cb4e2
//   XREF to: Stack[-0x1c] (READ)
// 005cb4ea: JNZ 0x005cb672
//   XREF to: 005cb672 (CONDITIONAL_JUMP)
// 005cb4f0: CMP dword ptr [ESP + 0x168],0x0
//   XREF to: Stack[-0x18] (READ)
// 005cb4f8: JZ 0x005cb756
//   XREF to: 005cb756 (CONDITIONAL_JUMP)
// 005cb4fe: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb505: MOV EAX,dword ptr [EAX + 0x10]
// 005cb508: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005cb50f: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb516: MOV EAX,dword ptr [EAX + 0x14]
// 005cb519: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005cb520: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb527: MOV EAX,dword ptr [EAX + 0x20]
// 005cb52a: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005cb531: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb538: MOV EAX,dword ptr [EAX + 0x24]
// 005cb53b: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005cb542: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0xc0] (READ)
// 005cb549: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005cb54d: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0xbc] (READ)
// 005cb554: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005cb558: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x38] (READ)
// 005cb55f: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005cb563: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x34] (READ)
// 005cb56a: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005cb56e: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb575: MOV EAX,dword ptr [EAX + 0x28]
// 005cb578: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005cb57f: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb586: MOV EAX,dword ptr [EAX + 0x2c]
// 005cb589: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005cb590: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb597: MOV EAX,dword ptr [EAX + 0x38]
// 005cb59a: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005cb5a1: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb5a8: MOV EAX,dword ptr [EAX + 0x3c]
// 005cb5ab: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005cb5b2: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x30] (READ)
// 005cb5b9: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 005cb5bd: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x2c] (READ)
// 005cb5c4: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 005cb5c8: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x28] (READ)
// 005cb5cf: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 005cb5d6: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x24] (READ)
// 005cb5dd: MOV dword ptr [ESP + 0x84],EAX
//   Label: LAB_005cb5dd
//   XREF to: Stack[-0xfc] (WRITE)
// 005cb5e4: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cb5e7: XOR ESI,ESI
// 005cb5e9: TEST EBX,EBX
// 005cb5eb: JBE 0x005cb603
//   XREF to: 005cb603 (CONDITIONAL_JUMP)
// 005cb5ed: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cb5f0: CMP ESI,EDI
//   Label: LAB_005cb5f0
// 005cb5f2: JNZ 0x005cb83a
//   XREF to: 005cb83a (CONDITIONAL_JUMP)
// 005cb5f8: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_005cb5f8
//   XREF to: Stack[0xc] (READ)
// 005cb5fb: INC ESI
// 005cb5fc: ADD EBX,0x60
// 005cb5ff: CMP ESI,EAX
// 005cb601: JC 0x005cb5f0
//   XREF to: 005cb5f0 (CONDITIONAL_JUMP)
// 005cb603: MOV ESI,dword ptr [ESP + 0x160]
//   Label: LAB_005cb603
//   XREF to: Stack[-0x20] (READ)
// 005cb60a: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cb60d: ADD ESI,0x60
// 005cb610: INC EDI
// 005cb611: MOV dword ptr [ESP + 0x160],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005cb618: CMP EDI,EAX
// 005cb61a: JC 0x005cb4e2
//   XREF to: 005cb4e2 (CONDITIONAL_JUMP)
// 005cb620: MOV EAX,0x1
//   Label: LAB_005cb620
// 005cb625: MOV ESP,EBP
// 005cb627: POP EBP
// 005cb628: POP EDI
// 005cb629: POP ESI
// 005cb62a: POP EBX
// 005cb62b: RET
// 005cb62c: XOR EAX,EAX
//   Label: LAB_005cb62c
// 005cb62e: MOV ESP,EBP
// 005cb630: POP EBP
// 005cb631: POP EDI
// 005cb632: POP ESI
// 005cb633: POP EBX
// 005cb634: RET
// 005cb635: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_005cb635
// 005cb638: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 005cb63c: MOV EAX,dword ptr [EBX + 0x18]
// 005cb63f: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 005cb643: JMP 0x005cb407
//   XREF to: 005cb407 (UNCONDITIONAL_JUMP)
// 005cb648: FLD double ptr [EBX + 0x1c]
//   Label: LAB_005cb648
// 005cb64b: FCHS
// 005cb64d: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x170] (WRITE)
// 005cb651: JMP 0x005cb433
//   XREF to: 005cb433 (UNCONDITIONAL_JUMP)
// 005cb656: FLD double ptr [EBX + 0x24]
//   Label: LAB_005cb656
// 005cb659: FCHS
// 005cb65b: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x168] (WRITE)
// 005cb65f: JMP 0x005cb45f
//   XREF to: 005cb45f (UNCONDITIONAL_JUMP)
// 005cb664: XOR EAX,EAX
//   Label: LAB_005cb664
// 005cb666: JMP 0x005cb496
//   XREF to: 005cb496 (UNCONDITIONAL_JUMP)
// 005cb66b: XOR EAX,EAX
//   Label: LAB_005cb66b
// 005cb66d: JMP 0x005cb4c4
//   XREF to: 005cb4c4 (UNCONDITIONAL_JUMP)
// 005cb672: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_005cb672
//   XREF to: Stack[-0x20] (READ)
// 005cb679: MOV EAX,dword ptr [EAX + 0x18]
// 005cb67c: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005cb683: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb68a: MOV EAX,dword ptr [EAX + 0x1c]
// 005cb68d: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005cb694: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb69b: MOV EAX,dword ptr [EAX + 0x20]
// 005cb69e: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005cb6a5: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb6ac: MOV EAX,dword ptr [EAX + 0x24]
// 005cb6af: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005cb6b6: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0xe8] (READ)
// 005cb6bd: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005cb6c1: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0xe4] (READ)
// 005cb6c8: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005cb6cc: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x98] (READ)
// 005cb6d3: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005cb6d7: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x94] (READ)
// 005cb6de: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005cb6e2: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb6e9: MOV EAX,dword ptr [EAX + 0x30]
// 005cb6ec: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005cb6f3: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb6fa: MOV EAX,dword ptr [EAX + 0x34]
// 005cb6fd: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005cb704: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb70b: MOV EAX,dword ptr [EAX + 0x38]
// 005cb70e: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 005cb715: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb71c: MOV EAX,dword ptr [EAX + 0x3c]
// 005cb71f: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 005cb726: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x90] (READ)
// 005cb72d: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 005cb731: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x8c] (READ)
// 005cb738: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 005cb73c: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0xd0] (READ)
// 005cb743: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 005cb74a: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0xcc] (READ)
// 005cb751: JMP 0x005cb5dd
//   XREF to: 005cb5dd (UNCONDITIONAL_JUMP)
// 005cb756: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_005cb756
//   XREF to: Stack[-0x20] (READ)
// 005cb75d: MOV EAX,dword ptr [EAX + 0x10]
// 005cb760: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005cb767: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb76e: MOV EAX,dword ptr [EAX + 0x14]
// 005cb771: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005cb778: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb77f: MOV EAX,dword ptr [EAX + 0x18]
// 005cb782: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005cb789: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb790: MOV EAX,dword ptr [EAX + 0x1c]
// 005cb793: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005cb79a: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x60] (READ)
// 005cb7a1: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005cb7a5: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x5c] (READ)
// 005cb7ac: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005cb7b0: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0xb8] (READ)
// 005cb7b7: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005cb7bb: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0xb4] (READ)
// 005cb7c2: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005cb7c6: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb7cd: MOV EAX,dword ptr [EAX + 0x28]
// 005cb7d0: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005cb7d7: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb7de: MOV EAX,dword ptr [EAX + 0x2c]
// 005cb7e1: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005cb7e8: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb7ef: MOV EAX,dword ptr [EAX + 0x30]
// 005cb7f2: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005cb7f9: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x20] (READ)
// 005cb800: MOV EAX,dword ptr [EAX + 0x34]
// 005cb803: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005cb80a: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0xc8] (READ)
// 005cb811: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 005cb815: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0xc4] (READ)
// 005cb81c: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 005cb820: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0xa8] (READ)
// 005cb827: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 005cb82e: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0xa4] (READ)
// 005cb835: JMP 0x005cb5dd
//   XREF to: 005cb5dd (UNCONDITIONAL_JUMP)
// 005cb83a: CMP dword ptr [ESP + 0x164],0x0
//   Label: LAB_005cb83a
//   XREF to: Stack[-0x1c] (READ)
// 005cb842: JZ 0x005cb9bf
//   XREF to: 005cb9bf (CONDITIONAL_JUMP)
// 005cb848: MOV EAX,dword ptr [EBX + 0x18]
// 005cb84b: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005cb852: MOV EAX,dword ptr [EBX + 0x1c]
// 005cb855: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005cb85c: MOV EAX,dword ptr [EBX + 0x20]
// 005cb85f: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005cb866: MOV EAX,dword ptr [EBX + 0x24]
// 005cb869: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005cb870: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0xb0] (READ)
// 005cb877: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005cb87e: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0xac] (READ)
// 005cb885: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005cb88c: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0xe0] (READ)
// 005cb893: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005cb89a: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0xdc] (READ)
// 005cb8a1: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005cb8a8: MOV EAX,dword ptr [EBX + 0x30]
// 005cb8ab: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005cb8b2: MOV EAX,dword ptr [EBX + 0x34]
// 005cb8b5: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005cb8bc: MOV EAX,dword ptr [EBX + 0x38]
// 005cb8bf: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005cb8c6: MOV EAX,dword ptr [EBX + 0x3c]
// 005cb8c9: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005cb8d0: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0xd8] (READ)
// 005cb8d7: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005cb8db: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0xd4] (READ)
// 005cb8e2: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 005cb8e6: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x88] (READ)
// 005cb8ed: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 005cb8f1: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x84] (READ)
// 005cb8f8: MOV dword ptr [ESP + 0x74],EAX
//   Label: LAB_005cb8f8
//   XREF to: Stack[-0x10c] (WRITE)
// 005cb8fc: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0xf8] (DATA)
// 005cb903: PUSH EAX
// 005cb904: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x108] (DATA)
// 005cb908: PUSH EAX
// 005cb909: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x128] (DATA)
// 005cb90d: PUSH EAX
// 005cb90e: CALL shape_superopt.cpp_FUN_005d6640
//   XREF to: 005d6640 (UNCONDITIONAL_CALL)
// 005cb913: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005cb91a: MOV dword ptr [ESP + 0x150],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 005cb921: FLD double ptr [ESP + 0x14c]
//   XREF to: Stack[-0x40] (READ)
// 005cb928: ADD ESP,0xc
// 005cb92b: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x118] (DATA)
// 005cb92f: PUSH EAX
// 005cb930: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x108] (DATA)
// 005cb934: PUSH EAX
// 005cb935: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x128] (DATA)
// 005cb939: PUSH EAX
// 005cb93a: FSTP double ptr [ESP + 0x44]
//   XREF to: Stack[-0x148] (WRITE)
// 005cb93e: CALL shape_superopt.cpp_FUN_005d6640
//   XREF to: 005d6640 (UNCONDITIONAL_CALL)
// 005cb943: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005cb94a: MOV dword ptr [ESP + 0x150],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 005cb951: FLD double ptr [ESP + 0x14c]
//   XREF to: Stack[-0x40] (READ)
// 005cb958: ADD ESP,0xc
// 005cb95b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x180] (DATA)
// 005cb95e: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x144] (READ)
// 005cb962: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x148] (READ)
// 005cb966: TEST EAX,0x7fffffff
// 005cb96b: JNZ 0x005cb984
//   XREF to: 005cb984 (CONDITIONAL_JUMP)
// 005cb96d: TEST EDX,EDX
// 005cb96f: JNZ 0x005cb984
//   XREF to: 005cb984 (CONDITIONAL_JUMP)
// 005cb971: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x17c] (READ)
// 005cb975: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x180] (DATA)
// 005cb978: TEST ECX,0x7fffffff
// 005cb97e: JNZ 0x005cb984
//   XREF to: 005cb984 (CONDITIONAL_JUMP)
// 005cb980: TEST EAX,EAX
// 005cb982: JZ 0x005cb9b6
//   XREF to: 005cb9b6 (CONDITIONAL_JUMP)
// 005cb984: FLDZ
//   Label: LAB_005cb984
// 005cb986: FCOMP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x148] (READ)
// 005cb98a: FNSTSW AX
// 005cb98c: SAHF
// 005cb98d: JBE 0x005cb999
//   XREF to: 005cb999 (CONDITIONAL_JUMP)
// 005cb98f: FLDZ
// 005cb991: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x180] (DATA)
// 005cb994: FNSTSW AX
// 005cb996: SAHF
// 005cb997: JC 0x005cb9b6
//   XREF to: 005cb9b6 (CONDITIONAL_JUMP)
// 005cb999: FLDZ
//   Label: LAB_005cb999
// 005cb99b: FCOMP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x148] (READ)
// 005cb99f: FNSTSW AX
// 005cb9a1: SAHF
// 005cb9a2: JNC 0x005cb5f8
//   XREF to: 005cb5f8 (CONDITIONAL_JUMP)
// 005cb9a8: FLDZ
// 005cb9aa: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x180] (DATA)
// 005cb9ad: FNSTSW AX
// 005cb9af: SAHF
// 005cb9b0: JBE 0x005cb5f8
//   XREF to: 005cb5f8 (CONDITIONAL_JUMP)
// 005cb9b6: XOR EAX,EAX
//   Label: LAB_005cb9b6
// 005cb9b8: MOV ESP,EBP
// 005cb9ba: POP EBP
// 005cb9bb: POP EDI
// 005cb9bc: POP ESI
// 005cb9bd: POP EBX
// 005cb9be: RET
// 005cb9bf: CMP dword ptr [ESP + 0x168],0x0
//   Label: LAB_005cb9bf
//   XREF to: Stack[-0x18] (READ)
// 005cb9c7: JZ 0x005cba82
//   XREF to: 005cba82 (CONDITIONAL_JUMP)
// 005cb9cd: MOV EAX,dword ptr [EBX + 0x10]
// 005cb9d0: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005cb9d7: MOV EAX,dword ptr [EBX + 0x14]
// 005cb9da: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005cb9e1: MOV EAX,dword ptr [EBX + 0x20]
// 005cb9e4: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005cb9eb: MOV EAX,dword ptr [EBX + 0x24]
// 005cb9ee: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005cb9f5: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x80] (READ)
// 005cb9fc: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005cba03: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x7c] (READ)
// 005cba0a: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005cba11: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x78] (READ)
// 005cba18: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005cba1f: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x74] (READ)
// 005cba26: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005cba2d: MOV EAX,dword ptr [EBX + 0x28]
// 005cba30: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005cba37: MOV EAX,dword ptr [EBX + 0x2c]
// 005cba3a: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005cba41: MOV EAX,dword ptr [EBX + 0x38]
// 005cba44: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005cba4b: MOV EAX,dword ptr [EBX + 0x3c]
// 005cba4e: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005cba55: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x70] (READ)
// 005cba5c: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005cba60: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x6c] (READ)
// 005cba67: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 005cba6b: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x68] (READ)
// 005cba72: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 005cba76: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x64] (READ)
// 005cba7d: JMP 0x005cb8f8
//   XREF to: 005cb8f8 (UNCONDITIONAL_JUMP)
// 005cba82: MOV EAX,dword ptr [EBX + 0x10]
//   Label: LAB_005cba82
// 005cba85: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005cba8c: MOV EAX,dword ptr [EBX + 0x14]
// 005cba8f: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005cba96: MOV EAX,dword ptr [EBX + 0x18]
// 005cba99: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005cbaa0: MOV EAX,dword ptr [EBX + 0x1c]
// 005cbaa3: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005cbaaa: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0xa0] (READ)
// 005cbab1: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005cbab8: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x9c] (READ)
// 005cbabf: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005cbac6: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x58] (READ)
// 005cbacd: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005cbad4: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x54] (READ)
// 005cbadb: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005cbae2: MOV EAX,dword ptr [EBX + 0x28]
// 005cbae5: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005cbaec: MOV EAX,dword ptr [EBX + 0x2c]
// 005cbaef: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005cbaf6: MOV EAX,dword ptr [EBX + 0x30]
// 005cbaf9: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005cbb00: MOV EAX,dword ptr [EBX + 0x34]
// 005cbb03: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005cbb0a: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x50] (READ)
// 005cbb11: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005cbb15: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x4c] (READ)
// 005cbb1c: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 005cbb20: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x48] (READ)
// 005cbb27: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 005cbb2b: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x44] (READ)
// 005cbb32: JMP 0x005cb8f8
//   XREF to: 005cb8f8 (UNCONDITIONAL_JUMP)
