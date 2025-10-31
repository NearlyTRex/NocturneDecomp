// Name: shape_superopt.cpp_FUN_005c7b20
// Address: 005c7b20
// Address Range: [[005c7b20, 005c7db3]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c7b20()
// Cross-references:
//   shape_superopt.cpp_FUN_005d7350 (005d7350) at 005d740b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_malloc_FUN_006021da
//   shape_superopt.cpp_FUN_005c7dc0
//   shape_superopt.cpp_FUN_005c8160
//   shape_superopt.cpp_FUN_005c8280

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005c7b20(undefined4 param_1) */

int * shape_superopt_cpp_FUN_005c7b20(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_stack_00000004;
  uint *in_stack_00000008;
  uint local_10;
  int iVar5;
  
  if ((*in_stack_00000004 == 0) || (in_stack_00000004[1] == 0)) {
    piVar2 = (int *)0x0;
  }
  else {
    in_stack_00000004[0xb] = *in_stack_00000004 * 3;
    piVar2 = (int *)crt_memory_c_malloc_FUN_006021da(*in_stack_00000004 * 0x120);
    in_stack_00000008[0xc] = (uint)piVar2;
    if (piVar2 != (int *)0x0) {
      local_10 = 0;
      iVar3 = *(int *)(**(int **)in_stack_00000008[1] + 4);
      if (*in_stack_00000008 != 0) {
        iVar5 = 0;
        do {
          iVar1 = *(int *)(in_stack_00000008[1] + iVar5);
          iVar4 = *(int *)(iVar1 + 4);
          *piVar2 = iVar4;
          iVar4 = iVar4 * 0x38;
          piVar2[4] = *(int *)(iVar3 + iVar4);
          piVar2[5] = *(int *)(iVar3 + 4 + iVar4);
          piVar2[6] = *(int *)(iVar3 + 8 + iVar4);
          piVar2[7] = *(int *)(iVar3 + 0xc + iVar4);
          piVar2[8] = *(int *)(iVar3 + 0x10 + iVar4);
          piVar2[9] = *(int *)(iVar3 + 0x14 + iVar4);
          piVar2[0x10] = *(int *)(iVar1 + 0x10);
          piVar2[0x11] = *(int *)(iVar1 + 0x14);
          piVar2[0x12] = *(int *)(iVar1 + 0x18);
          piVar2[0x13] = *(int *)(iVar1 + 0x1c);
          iVar4 = *(int *)(iVar1 + 8);
          piVar2[1] = iVar4;
          iVar4 = iVar4 * 0x38;
          piVar2[10] = *(int *)(iVar3 + iVar4);
          piVar2[0xb] = *(int *)(iVar3 + 4 + iVar4);
          piVar2[0xc] = *(int *)(iVar3 + 8 + iVar4);
          piVar2[0xd] = *(int *)(iVar3 + 0xc + iVar4);
          *(undefined8 *)(piVar2 + 0xe) = *(undefined8 *)(iVar3 + 0x10 + iVar4);
          piVar2[0x14] = *(int *)(iVar1 + 0x20);
          piVar2[0x15] = *(int *)(iVar1 + 0x24);
          piVar2[0x16] = *(int *)(iVar1 + 0x28);
          piVar2[0x17] = *(int *)(iVar1 + 0x2c);
          iVar4 = *(int *)(iVar1 + 8);
          piVar2[0x18] = iVar4;
          iVar4 = iVar4 * 0x38;
          *(undefined8 *)(piVar2 + 0x1c) = *(undefined8 *)(iVar3 + iVar4);
          *(undefined8 *)(piVar2 + 0x1e) = *(undefined8 *)(iVar3 + 8 + iVar4);
          *(undefined8 *)(piVar2 + 0x20) = *(undefined8 *)(iVar3 + 0x10 + iVar4);
          piVar2[0x28] = *(int *)(iVar1 + 0x20);
          piVar2[0x29] = *(int *)(iVar1 + 0x24);
          piVar2[0x2a] = *(int *)(iVar1 + 0x28);
          piVar2[0x2b] = *(int *)(iVar1 + 0x2c);
          iVar4 = *(int *)(iVar1 + 0xc);
          piVar2[0x19] = iVar4;
          iVar4 = iVar4 * 0x38;
          piVar2[0x22] = *(int *)(iVar3 + iVar4);
          piVar2[0x23] = *(int *)(iVar3 + 4 + iVar4);
          piVar2[0x24] = *(int *)(iVar3 + 8 + iVar4);
          piVar2[0x25] = *(int *)(iVar3 + 0xc + iVar4);
          *(undefined8 *)(piVar2 + 0x26) = *(undefined8 *)(iVar3 + 0x10 + iVar4);
          piVar2[0x2c] = *(int *)(iVar1 + 0x30);
          piVar2[0x2d] = *(int *)(iVar1 + 0x34);
          piVar2[0x2e] = *(int *)(iVar1 + 0x38);
          piVar2[0x2f] = *(int *)(iVar1 + 0x3c);
          iVar4 = *(int *)(iVar1 + 0xc);
          piVar2[0x30] = iVar4;
          iVar4 = iVar4 * 0x38;
          *(undefined8 *)(piVar2 + 0x34) = *(undefined8 *)(iVar3 + iVar4);
          *(undefined8 *)(piVar2 + 0x36) = *(undefined8 *)(iVar3 + 8 + iVar4);
          *(undefined8 *)(piVar2 + 0x38) = *(undefined8 *)(iVar3 + 0x10 + iVar4);
          piVar2[0x40] = *(int *)(iVar1 + 0x30);
          piVar2[0x41] = *(int *)(iVar1 + 0x34);
          piVar2[0x42] = *(int *)(iVar1 + 0x38);
          piVar2[0x43] = *(int *)(iVar1 + 0x3c);
          iVar4 = *(int *)(iVar1 + 4);
          piVar2[0x31] = iVar4;
          iVar4 = iVar4 * 0x38;
          piVar2[0x3a] = *(int *)(iVar3 + iVar4);
          piVar2[0x3b] = *(int *)(iVar3 + 4 + iVar4);
          piVar2[0x3c] = *(int *)(iVar3 + 8 + iVar4);
          piVar2[0x3d] = *(int *)(iVar3 + 0xc + iVar4);
          piVar2[0x3e] = *(int *)(iVar3 + 0x10 + iVar4);
          piVar2[0x3f] = *(int *)(iVar3 + 0x14 + iVar4);
          *(undefined8 *)(piVar2 + 0x44) = *(undefined8 *)(iVar1 + 0x10);
          piVar2[0x46] = *(int *)(iVar1 + 0x18);
          piVar2[0x47] = *(int *)(iVar1 + 0x1c);
          local_10 = local_10 + 1;
          iVar5 = iVar5 + 4;
          piVar2 = piVar2 + 0x48;
        } while (local_10 < *in_stack_00000008);
      }
      shape_superopt_cpp_FUN_005c8160();
      shape_superopt_cpp_FUN_005c7dc0();
      iVar3 = shape_superopt_cpp_FUN_005c8280();
      if (iVar3 == 0) {
        crt_memory_c_free_FUN_005fe659((void *)in_stack_00000008[0xc]);
        return (int *)0x0;
      }
      return (int *)&DAT_00000001;
    }
  }
  return piVar2;
}


// Assembly code:
// 005c7b20: PUSH ESI
//   Label: shape_superopt.cpp_FUN_005c7b20
// 005c7b21: PUSH EDI
// 005c7b22: PUSH EBP
// 005c7b23: SUB ESP,0x8
// 005c7b26: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005c7b2a: MOV EDX,dword ptr [EAX]
// 005c7b2c: TEST EDX,EDX
// 005c7b2e: JZ 0x005c7b36
//   XREF to: 005c7b36 (CONDITIONAL_JUMP)
// 005c7b30: CMP dword ptr [EAX + 0x4],0x0
// 005c7b34: JNZ 0x005c7b3f
//   XREF to: 005c7b3f (CONDITIONAL_JUMP)
// 005c7b36: XOR EAX,EAX
//   Label: LAB_005c7b36
// 005c7b38: ADD ESP,0x8
//   Label: LAB_005c7b38
// 005c7b3b: POP EBP
// 005c7b3c: POP EDI
// 005c7b3d: POP ESI
// 005c7b3e: RET
// 005c7b3f: LEA EAX,[EDX*0x4 + 0x0]
//   Label: LAB_005c7b3f
// 005c7b46: SUB EAX,EDX
// 005c7b48: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005c7b4c: MOV dword ptr [EDX + 0x2c],EAX
// 005c7b4f: MOV EDX,dword ptr [EDX]
// 005c7b51: LEA EAX,[EDX*0x8 + 0x0]
// 005c7b58: ADD EAX,EDX
// 005c7b5a: SHL EAX,0x5
// 005c7b5d: PUSH EAX
// 005c7b5e: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 005c7b63: ADD ESP,0x4
// 005c7b66: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005c7b6a: MOV dword ptr [EDX + 0x30],EAX
// 005c7b6d: TEST EAX,EAX
// 005c7b6f: JZ 0x005c7b38
//   XREF to: 005c7b38 (CONDITIONAL_JUMP)
// 005c7b71: MOV EDX,dword ptr [EDX + 0x4]
// 005c7b74: MOV ECX,dword ptr [EDX]
// 005c7b76: XOR ESI,ESI
// 005c7b78: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005c7b7c: MOV ECX,dword ptr [ECX]
// 005c7b7e: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 005c7b81: MOV EDI,dword ptr [EDX]
// 005c7b83: MOV ECX,dword ptr [ECX + 0x4]
// 005c7b86: TEST EDI,EDI
// 005c7b88: JBE 0x005c7d68
//   XREF to: 005c7d68 (CONDITIONAL_JUMP)
// 005c7b8e: PUSH EBX
// 005c7b8f: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005c7b93: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_005c7b93
//   XREF to: Stack[0x4] (READ)
// 005c7b97: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 005c7b9b: MOV EDX,dword ptr [EDX + 0x4]
// 005c7b9e: ADD EDX,EBP
// 005c7ba0: MOV EDX,dword ptr [EDX]
// 005c7ba2: MOV EBX,dword ptr [EDX + 0x4]
// 005c7ba5: MOV dword ptr [EAX],EBX
// 005c7ba7: IMUL EBX,EBX,0x38
// 005c7baa: LEA ESI,[EAX + 0x10]
// 005c7bad: MOV EDI,dword ptr [ECX + EBX*0x1]
// 005c7bb0: MOV dword ptr [ESI],EDI
// 005c7bb2: MOV EDI,dword ptr [ECX + EBX*0x1 + 0x4]
// 005c7bb6: MOV dword ptr [ESI + 0x4],EDI
// 005c7bb9: MOV EDI,dword ptr [ECX + EBX*0x1 + 0x8]
// 005c7bbd: MOV dword ptr [ESI + 0x8],EDI
// 005c7bc0: MOV EDI,dword ptr [ECX + EBX*0x1 + 0xc]
// 005c7bc4: MOV dword ptr [ESI + 0xc],EDI
// 005c7bc7: MOV EDI,dword ptr [ECX + EBX*0x1 + 0x10]
// 005c7bcb: MOV dword ptr [ESI + 0x10],EDI
// 005c7bce: MOV EDI,dword ptr [ECX + EBX*0x1 + 0x14]
// 005c7bd2: MOV dword ptr [ESI + 0x14],EDI
// 005c7bd5: LEA ESI,[EDX + 0x10]
// 005c7bd8: LEA EBX,[EAX + 0x40]
// 005c7bdb: MOV EDI,dword ptr [ESI]
// 005c7bdd: MOV dword ptr [EBX],EDI
// 005c7bdf: MOV EDI,dword ptr [ESI + 0x4]
// 005c7be2: MOV dword ptr [EBX + 0x4],EDI
// 005c7be5: MOV EDI,dword ptr [ESI + 0x8]
// 005c7be8: MOV dword ptr [EBX + 0x8],EDI
// 005c7beb: MOV EDI,dword ptr [ESI + 0xc]
// 005c7bee: MOV dword ptr [EBX + 0xc],EDI
// 005c7bf1: MOV EBX,dword ptr [EDX + 0x8]
// 005c7bf4: MOV dword ptr [EAX + 0x4],EBX
// 005c7bf7: IMUL EBX,EBX,0x38
// 005c7bfa: LEA EDI,[EAX + 0x28]
// 005c7bfd: MOV EBP,dword ptr [ECX + EBX*0x1]
// 005c7c00: MOV dword ptr [EDI],EBP
// 005c7c02: MOV EBP,dword ptr [ECX + EBX*0x1 + 0x4]
// 005c7c06: MOV dword ptr [EDI + 0x4],EBP
// 005c7c09: MOV EBP,dword ptr [ECX + EBX*0x1 + 0x8]
// 005c7c0d: MOV dword ptr [EDI + 0x8],EBP
// 005c7c10: MOV EBP,dword ptr [ECX + EBX*0x1 + 0xc]
// 005c7c14: MOV dword ptr [EDI + 0xc],EBP
// 005c7c17: FLD double ptr [ECX + EBX*0x1 + 0x10]
// 005c7c1b: LEA EBX,[EDX + 0x20]
// 005c7c1e: FSTP double ptr [EDI + 0x10]
// 005c7c21: LEA EDI,[EAX + 0x50]
// 005c7c24: MOV EBP,dword ptr [EBX]
// 005c7c26: MOV dword ptr [EDI],EBP
// 005c7c28: MOV EBP,dword ptr [EBX + 0x4]
// 005c7c2b: MOV dword ptr [EDI + 0x4],EBP
// 005c7c2e: MOV EBP,dword ptr [EBX + 0x8]
// 005c7c31: MOV dword ptr [EDI + 0x8],EBP
// 005c7c34: MOV EBP,dword ptr [EBX + 0xc]
// 005c7c37: MOV dword ptr [EDI + 0xc],EBP
// 005c7c3a: MOV EDI,dword ptr [EDX + 0x8]
// 005c7c3d: MOV dword ptr [EAX + 0x60],EDI
// 005c7c40: IMUL EBP,EDI,0x38
// 005c7c43: ADD EAX,0x60
// 005c7c46: LEA EDI,[EAX + 0x10]
// 005c7c49: FLD double ptr [ECX + EBP*0x1]
// 005c7c4c: FSTP double ptr [EDI]
// 005c7c4e: FLD double ptr [ECX + EBP*0x1 + 0x8]
// 005c7c52: FSTP double ptr [EDI + 0x8]
// 005c7c55: FLD double ptr [ECX + EBP*0x1 + 0x10]
// 005c7c59: FSTP double ptr [EDI + 0x10]
// 005c7c5c: LEA EDI,[EAX + 0x40]
// 005c7c5f: MOV EBP,dword ptr [EBX]
// 005c7c61: MOV dword ptr [EDI],EBP
// 005c7c63: MOV EBP,dword ptr [EBX + 0x4]
// 005c7c66: MOV dword ptr [EDI + 0x4],EBP
// 005c7c69: MOV EBP,dword ptr [EBX + 0x8]
// 005c7c6c: MOV dword ptr [EDI + 0x8],EBP
// 005c7c6f: MOV EBP,dword ptr [EBX + 0xc]
// 005c7c72: MOV dword ptr [EDI + 0xc],EBP
// 005c7c75: MOV EBX,dword ptr [EDX + 0xc]
// 005c7c78: MOV dword ptr [EAX + 0x4],EBX
// 005c7c7b: IMUL EBX,EBX,0x38
// 005c7c7e: LEA EDI,[EAX + 0x28]
// 005c7c81: MOV EBP,dword ptr [ECX + EBX*0x1]
// 005c7c84: MOV dword ptr [EDI],EBP
// 005c7c86: MOV EBP,dword ptr [ECX + EBX*0x1 + 0x4]
// 005c7c8a: MOV dword ptr [EDI + 0x4],EBP
// 005c7c8d: MOV EBP,dword ptr [ECX + EBX*0x1 + 0x8]
// 005c7c91: MOV dword ptr [EDI + 0x8],EBP
// 005c7c94: MOV EBP,dword ptr [ECX + EBX*0x1 + 0xc]
// 005c7c98: MOV dword ptr [EDI + 0xc],EBP
// 005c7c9b: FLD double ptr [ECX + EBX*0x1 + 0x10]
// 005c7c9f: LEA EBX,[EDX + 0x30]
// 005c7ca2: FSTP double ptr [EDI + 0x10]
// 005c7ca5: LEA EDI,[EAX + 0x50]
// 005c7ca8: MOV EBP,dword ptr [EBX]
// 005c7caa: MOV dword ptr [EDI],EBP
// 005c7cac: MOV EBP,dword ptr [EBX + 0x4]
// 005c7caf: MOV dword ptr [EDI + 0x4],EBP
// 005c7cb2: MOV EBP,dword ptr [EBX + 0x8]
// 005c7cb5: MOV dword ptr [EDI + 0x8],EBP
// 005c7cb8: MOV EBP,dword ptr [EBX + 0xc]
// 005c7cbb: MOV dword ptr [EDI + 0xc],EBP
// 005c7cbe: MOV EDI,dword ptr [EDX + 0xc]
// 005c7cc1: MOV dword ptr [EAX + 0x60],EDI
// 005c7cc4: IMUL EBP,EDI,0x38
// 005c7cc7: ADD EAX,0x60
// 005c7cca: LEA EDI,[EAX + 0x10]
// 005c7ccd: FLD double ptr [ECX + EBP*0x1]
// 005c7cd0: FSTP double ptr [EDI]
// 005c7cd2: FLD double ptr [ECX + EBP*0x1 + 0x8]
// 005c7cd6: FSTP double ptr [EDI + 0x8]
// 005c7cd9: FLD double ptr [ECX + EBP*0x1 + 0x10]
// 005c7cdd: FSTP double ptr [EDI + 0x10]
// 005c7ce0: LEA EDI,[EAX + 0x40]
// 005c7ce3: MOV EBP,dword ptr [EBX]
// 005c7ce5: MOV dword ptr [EDI],EBP
// 005c7ce7: MOV EBP,dword ptr [EBX + 0x4]
// 005c7cea: MOV dword ptr [EDI + 0x4],EBP
// 005c7ced: MOV EBP,dword ptr [EBX + 0x8]
// 005c7cf0: MOV dword ptr [EDI + 0x8],EBP
// 005c7cf3: MOV EBP,dword ptr [EBX + 0xc]
// 005c7cf6: MOV dword ptr [EDI + 0xc],EBP
// 005c7cf9: MOV EBX,dword ptr [EDX + 0x4]
// 005c7cfc: MOV dword ptr [EAX + 0x4],EBX
// 005c7cff: IMUL EDX,EBX,0x38
// 005c7d02: LEA EBX,[EAX + 0x28]
// 005c7d05: MOV EDI,dword ptr [ECX + EDX*0x1]
// 005c7d08: MOV dword ptr [EBX],EDI
// 005c7d0a: MOV EDI,dword ptr [ECX + EDX*0x1 + 0x4]
// 005c7d0e: MOV dword ptr [EBX + 0x4],EDI
// 005c7d11: MOV EDI,dword ptr [ECX + EDX*0x1 + 0x8]
// 005c7d15: MOV dword ptr [EBX + 0x8],EDI
// 005c7d18: MOV EDI,dword ptr [ECX + EDX*0x1 + 0xc]
// 005c7d1c: MOV dword ptr [EBX + 0xc],EDI
// 005c7d1f: MOV EDI,dword ptr [ECX + EDX*0x1 + 0x10]
// 005c7d23: MOV dword ptr [EBX + 0x10],EDI
// 005c7d26: MOV EDI,dword ptr [ECX + EDX*0x1 + 0x14]
// 005c7d2a: MOV dword ptr [EBX + 0x14],EDI
// 005c7d2d: LEA EDX,[EAX + 0x50]
// 005c7d30: FLD double ptr [ESI]
// 005c7d32: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 005c7d36: FSTP double ptr [EDX]
// 005c7d38: MOV EDI,dword ptr [ESI + 0x8]
// 005c7d3b: MOV dword ptr [EDX + 0x8],EDI
// 005c7d3e: MOV EDI,dword ptr [ESI + 0xc]
// 005c7d41: MOV dword ptr [EDX + 0xc],EDI
// 005c7d44: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 005c7d48: INC EBX
// 005c7d49: ADD EDX,0x4
// 005c7d4c: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005c7d50: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 005c7d54: MOV EDX,EBX
// 005c7d56: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005c7d5a: MOV ESI,dword ptr [EBX]
// 005c7d5c: ADD EAX,0x60
// 005c7d5f: CMP EDX,ESI
// 005c7d61: JC 0x005c7b93
//   XREF to: 005c7b93 (CONDITIONAL_JUMP)
// 005c7d67: POP EBX
// 005c7d68: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_005c7d68
//   XREF to: Stack[0x4] (READ)
// 005c7d6c: PUSH EDI
// 005c7d6d: CALL shape_superopt.cpp_FUN_005c8160
//   XREF to: 005c8160 (UNCONDITIONAL_CALL)
// 005c7d72: ADD ESP,0x4
// 005c7d75: PUSH EDI
// 005c7d76: CALL shape_superopt.cpp_FUN_005c7dc0
//   XREF to: 005c7dc0 (UNCONDITIONAL_CALL)
// 005c7d7b: ADD ESP,0x4
// 005c7d7e: MOV EDX,dword ptr [EDI + 0x2c]
// 005c7d81: PUSH EDX
// 005c7d82: MOV ECX,dword ptr [EDI + 0x30]
// 005c7d85: PUSH ECX
// 005c7d86: PUSH EDI
// 005c7d87: CALL shape_superopt.cpp_FUN_005c8280
//   XREF to: 005c8280 (UNCONDITIONAL_CALL)
// 005c7d8c: ADD ESP,0xc
// 005c7d8f: TEST EAX,EAX
// 005c7d91: JZ 0x005c7d9f
//   XREF to: 005c7d9f (CONDITIONAL_JUMP)
// 005c7d93: MOV EAX,0x1
// 005c7d98: ADD ESP,0x8
// 005c7d9b: POP EBP
// 005c7d9c: POP EDI
// 005c7d9d: POP ESI
// 005c7d9e: RET
// 005c7d9f: MOV ESI,dword ptr [EDI + 0x30]
//   Label: LAB_005c7d9f
// 005c7da2: PUSH ESI
// 005c7da3: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c7da8: ADD ESP,0x4
// 005c7dab: XOR EAX,EAX
// 005c7dad: ADD ESP,0x8
// 005c7db0: POP EBP
// 005c7db1: POP EDI
// 005c7db2: POP ESI
// 005c7db3: RET
