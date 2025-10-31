// Name: core_setedit.cpp_FUN_0057b910
// Address: 0057b910
// Address Range: [[0057b910, 0057bbac]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_0057b910()
// Cross-references:
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057ce3a [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_0057b910(undefined4 param_1, undefined4 param_2) */

void core_setedit_cpp_FUN_0057b910(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if (-1 < in_stack_00000008) {
    if (in_stack_00000008 < *(int *)(in_stack_00000004 + 0x19a2c)) {
      local_10 = in_stack_00000008;
      if (in_stack_00000008 < *(int *)(in_stack_00000004 + 0x19a2c)) {
        in_stack_00000008 = in_stack_00000008 * 0x1898;
        iVar1 = in_stack_00000004 + 0x19a30;
        puVar3 = (undefined4 *)(in_stack_00000008 + 0x199c + iVar1);
        puVar2 = (undefined4 *)(in_stack_00000008 + 0x104 + iVar1);
        local_c = (undefined4 *)(iVar1 + in_stack_00000008);
        local_8 = (undefined4 *)(in_stack_00000008 + 0x1898 + iVar1);
        do {
          *local_c = *local_8;
          iVar1 = 0x40;
          puVar4 = local_8;
          puVar5 = local_c;
          while( true ) {
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            *puVar5 = *puVar4;
          }
          if (puVar2 != puVar3) {
            *puVar2 = *puVar3;
            puVar2[1] = puVar3[1];
            puVar2[2] = puVar3[2];
          }
          if (local_c + 0x44 != local_8 + 0x44) {
            local_c[0x44] = local_8[0x44];
            local_c[0x45] = local_8[0x45];
            local_c[0x46] = local_8[0x46];
          }
          local_c[0x47] = local_8[0x47];
          local_c[0x48] = local_8[0x48];
          local_c[0x49] = local_8[0x49];
          puVar4 = local_8 + 0x4a;
          puVar5 = local_c + 0x4a;
          for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
          local_c[0x89] = local_8[0x89];
          local_c[0x8a] = local_8[0x8a];
          local_c[0x8b] = local_8[0x8b];
          local_c[0x8c] = local_8[0x8c];
          local_c[0x471] = local_8[0x471];
          local_c[0x472] = local_8[0x472];
          local_c[0x473] = local_8[0x473];
          local_c[0x474] = local_8[0x474];
          local_c[0x475] = local_8[0x475];
          local_c[0x476] = local_8[0x476];
          local_c[0x477] = local_8[0x477];
          local_c[0x478] = local_8[0x478];
          local_c[0x479] = local_8[0x479];
          local_c[0x47a] = local_8[0x47a];
          local_c[0x47b] = local_8[0x47b];
          local_c[0x47c] = local_8[0x47c];
          puVar4 = local_8 + 0x47d;
          puVar5 = local_c + 0x47d;
          for (iVar1 = 0x140; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = local_8 + 0x5bd;
          puVar5 = local_c + 0x5bd;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = local_8 + 0x5dd;
          puVar5 = local_c + 0x5dd;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          local_c[0x5fd] = local_8[0x5fd];
          local_c[0x5fe] = local_8[0x5fe];
          local_c[0x5ff] = local_8[0x5ff];
          local_c[0x600] = local_8[0x600];
          local_c[0x601] = local_8[0x601];
          local_c[0x602] = local_8[0x602];
          local_c[0x603] = local_8[0x603];
          puVar3 = puVar3 + 0x626;
          puVar4 = local_8 + 0x604;
          puVar5 = local_c + 0x604;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar2 = puVar2 + 0x626;
          local_c[0x624] = local_8[0x624];
          local_c[0x625] = local_8[0x625];
          local_10 = local_10 + 1;
          local_c = local_c + 0x626;
          local_8 = local_8 + 0x626;
        } while (local_10 < *(int *)(in_stack_00000004 + 0x19a2c));
      }
      *(int *)(in_stack_00000004 + 0x19a2c) = *(int *)(in_stack_00000004 + 0x19a2c) + -1;
    }
  }
  return;
}


// Assembly code:
// 0057b910: PUSH EBP
//   Label: core_setedit.cpp_FUN_0057b910
// 0057b911: SUB ESP,0xc
// 0057b914: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057b918: TEST ECX,ECX
// 0057b91a: JL 0x0057bb92
//   XREF to: 0057bb92 (CONDITIONAL_JUMP)
// 0057b920: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057b924: MOV EDX,dword ptr [EAX + 0x19a2c]
// 0057b92a: CMP ECX,EDX
// 0057b92c: JGE 0x0057bb92
//   XREF to: 0057bb92 (CONDITIONAL_JUMP)
// 0057b932: PUSH EDI
// 0057b933: PUSH ESI
// 0057b934: PUSH EBX
// 0057b935: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0057b939: JGE 0x0057bb85
//   XREF to: 0057bb85 (CONDITIONAL_JUMP)
// 0057b93f: IMUL EDX,ECX,0x1898
// 0057b945: LEA EBP,[EDX + 0x199c]
// 0057b94b: ADD EAX,0x19a30
// 0057b950: LEA EBX,[EDX + 0x104]
// 0057b956: ADD EBP,EAX
// 0057b958: LEA ECX,[EDX + 0x1898]
// 0057b95e: ADD EBX,EAX
// 0057b960: ADD ECX,EAX
// 0057b962: ADD EAX,EDX
// 0057b964: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 0057b968: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0057b96c: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0057b96c
//   XREF to: Stack[-0xc] (READ)
// 0057b970: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 0057b974: MOV EDI,EAX
// 0057b976: MOV ECX,dword ptr [EDX]
// 0057b978: MOV ESI,EDX
// 0057b97a: MOV dword ptr [EAX],ECX
// 0057b97c: MOV ECX,0x40
// 0057b981: LEA EDI,[EDI + 0x4]
// 0057b984: LEA ESI,[ESI + 0x4]
// 0057b987: MOVSD.REP ES:EDI,ESI
// 0057b989: CMP EBX,EBP
// 0057b98b: JNZ 0x0057bb97
//   XREF to: 0057bb97 (CONDITIONAL_JUMP)
// 0057b991: LEA ECX,[EDX + 0x110]
//   Label: LAB_0057b991
// 0057b997: LEA ESI,[EAX + 0x110]
// 0057b99d: CMP ESI,ECX
// 0057b99f: JZ 0x0057b9b1
//   XREF to: 0057b9b1 (CONDITIONAL_JUMP)
// 0057b9a1: MOV EDI,dword ptr [ECX]
// 0057b9a3: MOV dword ptr [ESI],EDI
// 0057b9a5: MOV EDI,dword ptr [ECX + 0x4]
// 0057b9a8: MOV dword ptr [ESI + 0x4],EDI
// 0057b9ab: MOV EDI,dword ptr [ECX + 0x8]
// 0057b9ae: MOV dword ptr [ESI + 0x8],EDI
// 0057b9b1: FLD float ptr [EDX + 0x11c]
//   Label: LAB_0057b9b1
// 0057b9b7: MOV ECX,0x3e
// 0057b9bc: LEA EDI,[EAX + 0x128]
// 0057b9c2: FSTP float ptr [EAX + 0x11c]
// 0057b9c8: MOV ESI,dword ptr [EDX + 0x120]
// 0057b9ce: MOV dword ptr [EAX + 0x120],ESI
// 0057b9d4: MOV ESI,dword ptr [EDX + 0x124]
// 0057b9da: MOV dword ptr [EAX + 0x124],ESI
// 0057b9e0: LEA ESI,[EDX + 0x128]
// 0057b9e6: MOVSD.REP ES:EDI,ESI
// 0057b9e8: MOVSW ES:EDI,ESI
// 0057b9ea: LEA EDI,[EAX + 0x224]
// 0057b9f0: LEA ESI,[EDX + 0x224]
// 0057b9f6: MOVSD ES:EDI,ESI
// 0057b9f7: MOVSD ES:EDI,ESI
// 0057b9f8: MOVSD ES:EDI,ESI
// 0057b9f9: MOVSD ES:EDI,ESI
// 0057b9fa: MOV ECX,dword ptr [EDX + 0x11c4]
// 0057ba00: MOV dword ptr [EAX + 0x11c4],ECX
// 0057ba06: MOV ECX,dword ptr [EDX + 0x11c8]
// 0057ba0c: MOV dword ptr [EAX + 0x11c8],ECX
// 0057ba12: MOV ECX,dword ptr [EDX + 0x11cc]
// 0057ba18: MOV dword ptr [EAX + 0x11cc],ECX
// 0057ba1e: MOV ECX,dword ptr [EDX + 0x11d0]
// 0057ba24: MOV dword ptr [EAX + 0x11d0],ECX
// 0057ba2a: MOV ECX,dword ptr [EDX + 0x11d4]
// 0057ba30: MOV dword ptr [EAX + 0x11d4],ECX
// 0057ba36: MOV ECX,dword ptr [EDX + 0x11d8]
// 0057ba3c: MOV dword ptr [EAX + 0x11d8],ECX
// 0057ba42: MOV ECX,dword ptr [EDX + 0x11dc]
// 0057ba48: MOV dword ptr [EAX + 0x11dc],ECX
// 0057ba4e: MOV ECX,dword ptr [EDX + 0x11e0]
// 0057ba54: MOV dword ptr [EAX + 0x11e0],ECX
// 0057ba5a: MOV ECX,dword ptr [EDX + 0x11e4]
// 0057ba60: MOV dword ptr [EAX + 0x11e4],ECX
// 0057ba66: MOV ECX,dword ptr [EDX + 0x11e8]
// 0057ba6c: MOV dword ptr [EAX + 0x11e8],ECX
// 0057ba72: MOV ECX,dword ptr [EDX + 0x11ec]
// 0057ba78: MOV dword ptr [EAX + 0x11ec],ECX
// 0057ba7e: MOV ECX,dword ptr [EDX + 0x11f0]
// 0057ba84: LEA EDI,[EAX + 0x11f4]
// 0057ba8a: MOV dword ptr [EAX + 0x11f0],ECX
// 0057ba90: MOV ECX,0x140
// 0057ba95: LEA ESI,[EDX + 0x11f4]
// 0057ba9b: MOVSD.REP ES:EDI,ESI
// 0057ba9d: MOV ECX,0x20
// 0057baa2: LEA EDI,[EAX + 0x16f4]
// 0057baa8: LEA ESI,[EDX + 0x16f4]
// 0057baae: MOVSD.REP ES:EDI,ESI
// 0057bab0: MOV ECX,0x20
// 0057bab5: LEA EDI,[EAX + 0x1774]
// 0057babb: LEA ESI,[EDX + 0x1774]
// 0057bac1: MOVSD.REP ES:EDI,ESI
// 0057bac3: MOV ECX,dword ptr [EDX + 0x17f4]
// 0057bac9: MOV dword ptr [EAX + 0x17f4],ECX
// 0057bacf: MOV ECX,dword ptr [EDX + 0x17f8]
// 0057bad5: MOV dword ptr [EAX + 0x17f8],ECX
// 0057badb: MOV ECX,dword ptr [EDX + 0x17fc]
// 0057bae1: MOV dword ptr [EAX + 0x17fc],ECX
// 0057bae7: MOV ECX,dword ptr [EDX + 0x1800]
// 0057baed: MOV dword ptr [EAX + 0x1800],ECX
// 0057baf3: MOV ECX,dword ptr [EDX + 0x1804]
// 0057baf9: MOV dword ptr [EAX + 0x1804],ECX
// 0057baff: MOV ECX,dword ptr [EDX + 0x1808]
// 0057bb05: MOV dword ptr [EAX + 0x1808],ECX
// 0057bb0b: MOV ECX,dword ptr [EDX + 0x180c]
// 0057bb11: LEA EDI,[EAX + 0x1810]
// 0057bb17: MOV dword ptr [EAX + 0x180c],ECX
// 0057bb1d: MOV ECX,0x20
// 0057bb22: LEA ESI,[EDX + 0x1810]
// 0057bb28: ADD EBP,0x1898
// 0057bb2e: MOVSD.REP ES:EDI,ESI
// 0057bb30: ADD EBX,0x1898
// 0057bb36: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 0057bb3a: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 0057bb3e: MOV ECX,dword ptr [EDX + 0x1890]
// 0057bb44: ADD ESI,0x1898
// 0057bb4a: MOV dword ptr [EAX + 0x1890],ECX
// 0057bb50: ADD EDI,0x1898
// 0057bb56: FLD float ptr [EDX + 0x1894]
// 0057bb5c: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x8] (WRITE)
// 0057bb60: FSTP float ptr [EAX + 0x1894]
// 0057bb66: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0057bb6a: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 0057bb6e: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 0057bb72: INC EAX
// 0057bb73: MOV ECX,dword ptr [EDX + 0x19a2c]
// 0057bb79: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0057bb7d: CMP EAX,ECX
// 0057bb7f: JL 0x0057b96c
//   XREF to: 0057b96c (CONDITIONAL_JUMP)
// 0057bb85: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0057bb85
//   XREF to: Stack[0x4] (READ)
// 0057bb89: DEC dword ptr [EAX + 0x19a2c]
// 0057bb8f: POP EBX
// 0057bb90: POP ESI
// 0057bb91: POP EDI
// 0057bb92: ADD ESP,0xc
//   Label: LAB_0057bb92
// 0057bb95: POP EBP
// 0057bb96: RET
// 0057bb97: MOV ECX,dword ptr [EBP]
//   Label: LAB_0057bb97
// 0057bb9a: MOV dword ptr [EBX],ECX
// 0057bb9c: MOV ECX,dword ptr [EBP + 0x4]
// 0057bb9f: MOV dword ptr [EBX + 0x4],ECX
// 0057bba2: MOV ECX,dword ptr [EBP + 0x8]
// 0057bba5: MOV dword ptr [EBX + 0x8],ECX
// 0057bba8: JMP 0x0057b991
//   XREF to: 0057b991 (UNCONDITIONAL_JUMP)
