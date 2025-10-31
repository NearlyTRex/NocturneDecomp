// Name: core_setedit.cpp_FUN_0057e430
// Address: 0057e430
// Address Range: [[0057e430, 0057e77b]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_0057e430()
// Cross-references:
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ebde [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_0057e430(undefined4 param_1, undefined4 param_2) */

void core_setedit_cpp_FUN_0057e430(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *in_stack_00000004;
  int in_stack_00000008;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_10;
  int *local_c;
  int local_8;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < *in_stack_00000004)) {
    iVar2 = *in_stack_00000004 + -1;
    local_8 = in_stack_00000008;
    *in_stack_00000004 = iVar2;
    if (in_stack_00000008 < iVar2) {
      local_1c = in_stack_00000004 + in_stack_00000008 * 0x69 + 0xaa;
      local_18 = in_stack_00000004 + in_stack_00000008 * 0x69 + 0x41;
      local_10 = in_stack_00000008 << 4;
      local_c = in_stack_00000004 + in_stack_00000008 * 0x69 + 0x6a;
      local_20 = in_stack_00000004 + in_stack_00000008 * 0x69 + 1;
      do {
        piVar4 = local_c;
        piVar5 = local_20;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        if (local_1c != local_18) {
          *local_18 = *local_1c;
          local_18[1] = local_1c[1];
          local_18[2] = local_1c[2];
        }
        if (local_20 + 0x43 != local_c + 0x43) {
          local_20[0x43] = local_c[0x43];
          local_20[0x44] = local_c[0x44];
          local_20[0x45] = local_c[0x45];
        }
        local_20[0x46] = local_c[0x46];
        local_20[0x47] = local_c[0x47];
        local_20[0x48] = local_c[0x48];
        local_20[0x49] = local_c[0x49];
        local_20[0x4a] = local_c[0x4a];
        local_20[0x4b] = local_c[0x4b];
        local_20[0x4c] = local_c[0x4c];
        local_20[0x4d] = local_c[0x4d];
        local_20[0x4e] = local_c[0x4e];
        local_20[0x4f] = local_c[0x4f];
        local_20[0x50] = local_c[0x50];
        local_20[0x51] = local_c[0x51];
        local_20[0x52] = local_c[0x52];
        local_20[0x53] = local_c[0x53];
        local_20[0x54] = local_c[0x54];
        local_20[0x55] = local_c[0x55];
        local_20[0x56] = local_c[0x56];
        local_20[0x57] = local_c[0x57];
        if (local_20 + 0x58 != local_c + 0x58) {
          local_20[0x58] = local_c[0x58];
          local_20[0x59] = local_c[0x59];
          local_20[0x5a] = local_c[0x5a];
        }
        local_20[0x5b] = local_c[0x5b];
        local_20[0x5c] = local_c[0x5c];
        local_20[0x5d] = local_c[0x5d];
        local_20[0x5e] = local_c[0x5e];
        if (local_20 + 0x5f != local_c + 0x5f) {
          local_20[0x5f] = local_c[0x5f];
          local_20[0x60] = local_c[0x60];
          local_20[0x61] = local_c[0x61];
        }
        if (local_20 + 0x62 != local_c + 0x62) {
          local_20[0x62] = local_c[0x62];
          local_20[99] = local_c[99];
          local_20[100] = local_c[100];
        }
        local_20[0x65] = local_c[0x65];
        local_20[0x66] = local_c[0x66];
        local_20[0x67] = local_c[0x67];
        local_20[0x68] = local_c[0x68];
        iVar2 = 0;
        if (0 < in_stack_00000004[0x668b]) {
          iVar3 = (int)in_stack_00000004 + local_8 + 0x19a30;
          iVar1 = (int)in_stack_00000004 + local_10 + 0x19a30;
          do {
            *(undefined1 *)(iVar3 + 0x128) = *(undefined1 *)(iVar3 + 0x129);
            *(undefined4 *)(iVar1 + 0x224) = *(undefined4 *)(iVar1 + 0x234);
            *(undefined4 *)(iVar1 + 0x228) = *(undefined4 *)(iVar1 + 0x238);
            *(undefined4 *)(iVar1 + 0x22c) = *(undefined4 *)(iVar1 + 0x23c);
            *(undefined4 *)(iVar1 + 0x230) = *(undefined4 *)(iVar1 + 0x240);
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x1898;
            iVar1 = iVar1 + 0x1898;
          } while (iVar2 < in_stack_00000004[0x668b]);
        }
        local_1c = local_1c + 0x69;
        local_18 = local_18 + 0x69;
        local_c = local_c + 0x69;
        local_20 = local_20 + 0x69;
        local_10 = local_10 + 0x10;
        local_8 = local_8 + 1;
      } while (local_8 < *in_stack_00000004);
    }
    in_stack_00000004[*in_stack_00000004 * 0x69 + 0x67] = 0;
    in_stack_00000004[*in_stack_00000004 * 0x69 + 0x66] = 0;
  }
  return;
}


// Assembly code:
// 0057e430: PUSH EBP
//   Label: core_setedit.cpp_FUN_0057e430
// 0057e431: SUB ESP,0x1c
// 0057e434: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0057e438: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0057e43c: TEST ECX,ECX
// 0057e43e: JL 0x0057e750
//   XREF to: 0057e750 (CONDITIONAL_JUMP)
// 0057e444: MOV EDX,dword ptr [EBP]
// 0057e447: CMP ECX,EDX
// 0057e449: JGE 0x0057e750
//   XREF to: 0057e750 (CONDITIONAL_JUMP)
// 0057e44f: PUSH EDI
// 0057e450: PUSH ESI
// 0057e451: PUSH EBX
// 0057e452: LEA EBX,[EDX + -0x1]
// 0057e455: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 0057e459: MOV dword ptr [EBP],EBX
// 0057e45c: CMP ECX,EBX
// 0057e45e: JGE 0x0057e729
//   XREF to: 0057e729 (CONDITIONAL_JUMP)
// 0057e464: LEA EAX,[EBP + 0x19a30]
// 0057e46a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0057e46e: IMUL EAX,ECX,0x1a4
// 0057e474: LEA EDX,[EBP + 0x4]
// 0057e477: LEA EBX,[EAX + 0x2a4]
// 0057e47d: ADD EBX,EDX
// 0057e47f: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057e483: LEA EBX,[EAX + 0x100]
// 0057e489: ADD EBX,EDX
// 0057e48b: SHL ECX,0x4
// 0057e48e: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0057e492: LEA EBX,[EAX + 0x1a4]
// 0057e498: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0057e49c: ADD EBX,EDX
// 0057e49e: ADD EAX,EDX
// 0057e4a0: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 0057e4a4: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0057e4a8: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0057e4a8
//   XREF to: Stack[-0x20] (READ)
// 0057e4ac: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0xc] (READ)
// 0057e4b0: MOV ECX,0x40
// 0057e4b5: MOV EDI,EDX
// 0057e4b7: MOV ESI,EAX
// 0057e4b9: MOVSD.REP ES:EDI,ESI
// 0057e4bb: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0057e4bf: CMP EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0057e4c3: JNZ 0x0057e755
//   XREF to: 0057e755 (CONDITIONAL_JUMP)
// 0057e4c9: LEA ECX,[EAX + 0x10c]
//   Label: LAB_0057e4c9
// 0057e4cf: LEA EBX,[EDX + 0x10c]
// 0057e4d5: CMP EBX,ECX
// 0057e4d7: JZ 0x0057e4e9
//   XREF to: 0057e4e9 (CONDITIONAL_JUMP)
// 0057e4d9: MOV ESI,dword ptr [ECX]
// 0057e4db: MOV dword ptr [EBX],ESI
// 0057e4dd: MOV ESI,dword ptr [ECX + 0x4]
// 0057e4e0: MOV dword ptr [EBX + 0x4],ESI
// 0057e4e3: MOV ESI,dword ptr [ECX + 0x8]
// 0057e4e6: MOV dword ptr [EBX + 0x8],ESI
// 0057e4e9: MOV ECX,dword ptr [EAX + 0x118]
//   Label: LAB_0057e4e9
// 0057e4ef: MOV dword ptr [EDX + 0x118],ECX
// 0057e4f5: MOV ECX,dword ptr [EAX + 0x11c]
// 0057e4fb: MOV dword ptr [EDX + 0x11c],ECX
// 0057e501: MOV ECX,dword ptr [EAX + 0x120]
// 0057e507: MOV dword ptr [EDX + 0x120],ECX
// 0057e50d: MOV ECX,dword ptr [EAX + 0x124]
// 0057e513: MOV dword ptr [EDX + 0x124],ECX
// 0057e519: MOV ECX,dword ptr [EAX + 0x128]
// 0057e51f: MOV dword ptr [EDX + 0x128],ECX
// 0057e525: MOV ECX,dword ptr [EAX + 0x12c]
// 0057e52b: MOV dword ptr [EDX + 0x12c],ECX
// 0057e531: MOV ECX,dword ptr [EAX + 0x130]
// 0057e537: MOV dword ptr [EDX + 0x130],ECX
// 0057e53d: MOV ECX,dword ptr [EAX + 0x134]
// 0057e543: MOV dword ptr [EDX + 0x134],ECX
// 0057e549: MOV ECX,dword ptr [EAX + 0x138]
// 0057e54f: MOV dword ptr [EDX + 0x138],ECX
// 0057e555: MOV ECX,dword ptr [EAX + 0x13c]
// 0057e55b: MOV dword ptr [EDX + 0x13c],ECX
// 0057e561: MOV ECX,dword ptr [EAX + 0x140]
// 0057e567: MOV dword ptr [EDX + 0x140],ECX
// 0057e56d: MOV ECX,dword ptr [EAX + 0x144]
// 0057e573: MOV dword ptr [EDX + 0x144],ECX
// 0057e579: MOV ECX,dword ptr [EAX + 0x148]
// 0057e57f: MOV dword ptr [EDX + 0x148],ECX
// 0057e585: MOV ECX,dword ptr [EAX + 0x14c]
// 0057e58b: MOV dword ptr [EDX + 0x14c],ECX
// 0057e591: MOV ECX,dword ptr [EAX + 0x150]
// 0057e597: MOV dword ptr [EDX + 0x150],ECX
// 0057e59d: MOV ECX,dword ptr [EAX + 0x154]
// 0057e5a3: MOV dword ptr [EDX + 0x154],ECX
// 0057e5a9: MOV ECX,dword ptr [EAX + 0x158]
// 0057e5af: MOV dword ptr [EDX + 0x158],ECX
// 0057e5b5: MOV ECX,dword ptr [EAX + 0x15c]
// 0057e5bb: LEA EBX,[EAX + 0x160]
// 0057e5c1: MOV dword ptr [EDX + 0x15c],ECX
// 0057e5c7: LEA ECX,[EDX + 0x160]
// 0057e5cd: CMP ECX,EBX
// 0057e5cf: JZ 0x0057e5e1
//   XREF to: 0057e5e1 (CONDITIONAL_JUMP)
// 0057e5d1: MOV ESI,dword ptr [EBX]
// 0057e5d3: MOV dword ptr [ECX],ESI
// 0057e5d5: MOV ESI,dword ptr [EBX + 0x4]
// 0057e5d8: MOV dword ptr [ECX + 0x4],ESI
// 0057e5db: MOV ESI,dword ptr [EBX + 0x8]
// 0057e5de: MOV dword ptr [ECX + 0x8],ESI
// 0057e5e1: MOV ECX,dword ptr [EAX + 0x16c]
//   Label: LAB_0057e5e1
// 0057e5e7: MOV dword ptr [EDX + 0x16c],ECX
// 0057e5ed: MOV ECX,dword ptr [EAX + 0x170]
// 0057e5f3: MOV dword ptr [EDX + 0x170],ECX
// 0057e5f9: MOV ECX,dword ptr [EAX + 0x174]
// 0057e5ff: MOV dword ptr [EDX + 0x174],ECX
// 0057e605: MOV ECX,dword ptr [EAX + 0x178]
// 0057e60b: LEA EBX,[EDX + 0x17c]
// 0057e611: MOV dword ptr [EDX + 0x178],ECX
// 0057e617: LEA ECX,[EAX + 0x17c]
// 0057e61d: CMP EBX,ECX
// 0057e61f: JZ 0x0057e631
//   XREF to: 0057e631 (CONDITIONAL_JUMP)
// 0057e621: MOV ESI,dword ptr [ECX]
// 0057e623: MOV dword ptr [EBX],ESI
// 0057e625: MOV ESI,dword ptr [ECX + 0x4]
// 0057e628: MOV dword ptr [EBX + 0x4],ESI
// 0057e62b: MOV ESI,dword ptr [ECX + 0x8]
// 0057e62e: MOV dword ptr [EBX + 0x8],ESI
// 0057e631: LEA ECX,[EAX + 0x188]
//   Label: LAB_0057e631
// 0057e637: LEA EBX,[EDX + 0x188]
// 0057e63d: CMP EBX,ECX
// 0057e63f: JZ 0x0057e651
//   XREF to: 0057e651 (CONDITIONAL_JUMP)
// 0057e641: MOV ESI,dword ptr [ECX]
// 0057e643: MOV dword ptr [EBX],ESI
// 0057e645: MOV ESI,dword ptr [ECX + 0x4]
// 0057e648: MOV dword ptr [EBX + 0x4],ESI
// 0057e64b: MOV ESI,dword ptr [ECX + 0x8]
// 0057e64e: MOV dword ptr [EBX + 0x8],ESI
// 0057e651: MOV ECX,dword ptr [EAX + 0x194]
//   Label: LAB_0057e651
// 0057e657: MOV dword ptr [EDX + 0x194],ECX
// 0057e65d: MOV ECX,dword ptr [EAX + 0x198]
// 0057e663: MOV dword ptr [EDX + 0x198],ECX
// 0057e669: MOV ECX,dword ptr [EAX + 0x19c]
// 0057e66f: MOV dword ptr [EDX + 0x19c],ECX
// 0057e675: MOV EAX,dword ptr [EAX + 0x1a0]
// 0057e67b: MOV dword ptr [EDX + 0x1a0],EAX
// 0057e681: MOV ESI,dword ptr [EBP + 0x19a2c]
// 0057e687: XOR ECX,ECX
// 0057e689: TEST ESI,ESI
// 0057e68b: JLE 0x0057e6d3
//   XREF to: 0057e6d3 (CONDITIONAL_JUMP)
// 0057e68d: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x10] (READ)
// 0057e691: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0057e695: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0057e699: ADD EAX,EDX
// 0057e69b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x8] (READ)
// 0057e69f: ADD EDX,EBX
// 0057e6a1: MOV BL,byte ptr [EDX + 0x129]
//   Label: LAB_0057e6a1
// 0057e6a7: MOV byte ptr [EDX + 0x128],BL
// 0057e6ad: LEA EDI,[EAX + 0x224]
// 0057e6b3: LEA ESI,[EAX + 0x234]
// 0057e6b9: ADD EAX,0x1898
// 0057e6be: MOVSD ES:EDI,ESI
// 0057e6bf: MOVSD ES:EDI,ESI
// 0057e6c0: MOVSD ES:EDI,ESI
// 0057e6c1: MOVSD ES:EDI,ESI
// 0057e6c2: INC ECX
// 0057e6c3: MOV EDI,dword ptr [EBP + 0x19a2c]
// 0057e6c9: ADD EDX,0x1898
// 0057e6cf: CMP ECX,EDI
// 0057e6d1: JL 0x0057e6a1
//   XREF to: 0057e6a1 (CONDITIONAL_JUMP)
// 0057e6d3: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_0057e6d3
//   XREF to: Stack[-0x1c] (READ)
// 0057e6d7: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0057e6db: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0xc] (READ)
// 0057e6df: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0057e6e3: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x10] (READ)
// 0057e6e7: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x8] (READ)
// 0057e6eb: ADD EDI,0x1a4
// 0057e6f1: ADD EAX,0x1a4
// 0057e6f6: ADD EDX,0x1a4
// 0057e6fc: ADD ECX,0x1a4
// 0057e702: ADD EBX,0x10
// 0057e705: INC ESI
// 0057e706: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0057e70a: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0057e70e: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0057e712: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0057e716: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 0057e71a: MOV EDI,dword ptr [EBP]
// 0057e71d: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x8] (WRITE)
// 0057e721: CMP ESI,EDI
// 0057e723: JL 0x0057e4a8
//   XREF to: 0057e4a8 (CONDITIONAL_JUMP)
// 0057e729: IMUL EAX,dword ptr [EBP],0x1a4
//   Label: LAB_0057e729
// 0057e730: MOV dword ptr [EAX + EBP*0x1 + 0x19c],0x0
// 0057e73b: IMUL EAX,dword ptr [EBP],0x1a4
// 0057e742: MOV dword ptr [EAX + EBP*0x1 + 0x198],0x0
// 0057e74d: POP EBX
// 0057e74e: POP ESI
// 0057e74f: POP EDI
// 0057e750: ADD ESP,0x1c
//   Label: LAB_0057e750
// 0057e753: POP EBP
// 0057e754: RET
// 0057e755: MOV ECX,EBX
//   Label: LAB_0057e755
// 0057e757: FLD float ptr [ECX]
// 0057e759: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0057e75d: FSTP float ptr [ECX]
// 0057e75f: MOV ECX,EBX
// 0057e761: FLD float ptr [ECX + 0x4]
// 0057e764: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0057e768: FSTP float ptr [ECX + 0x4]
// 0057e76b: MOV ECX,EBX
// 0057e76d: FLD float ptr [ECX + 0x8]
// 0057e770: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0057e774: FSTP float ptr [ECX + 0x8]
// 0057e777: JMP 0x0057e4c9
//   XREF to: 0057e4c9 (UNCONDITIONAL_JUMP)
