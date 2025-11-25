// Name: shape_superopt.cpp_FUN_005c8160
// Address: 005c8160
// Address Range: [[005c8160, 005c8273]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c8160()
// Cross-references:
//   shape_superopt.cpp_FUN_005c7b20 (005c7b20) at 005c7d6d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c8160(void)

{
  int *piVar1;
  int iVar2;
  void *dest;
  bool bVar3;
  int iVar4;
  int unaff_EBP;
  int *src;
  int *dest_00;
  uint uVar5;
  int in_stack_00000004;
  int *local_28;
  uint local_14;
  
  piVar1 = *(int **)(in_stack_00000004 + 0x30);
  do {
    bVar3 = true;
    local_14 = 0;
    local_28 = piVar1;
    if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
      do {
        if (!bVar3) break;
        iVar2 = *local_28;
        dest = (void *)local_28[1];
        uVar5 = local_14 + 1;
        if (uVar5 < *(uint *)(in_stack_00000004 + 0x2c)) {
          dest_00 = piVar1 + uVar5 * 0x18;
          src = piVar1 + uVar5 * 0x18 + 0x18;
          do {
            if (!bVar3) break;
            if (((void *)*dest_00 == dest) && (dest_00[1] == iVar2)) {
              crt_string_c_memmove_FUN_005fe5e0
                        (dest_00,src,((*(int *)(in_stack_00000004 + 0x2c) - uVar5) + -1) * 0x60);
              iVar4 = *(int *)(in_stack_00000004 + 0x2c) + -1;
              *(int *)(in_stack_00000004 + 0x2c) = iVar4;
              crt_string_c_memmove_FUN_005fe5e0(dest,local_28,((iVar4 - unaff_EBP) + -1) * 0x60);
              bVar3 = false;
              *(int *)(in_stack_00000004 + 0x2c) = *(int *)(in_stack_00000004 + 0x2c) + -1;
            }
            dest_00 = dest_00 + 0x18;
            uVar5 = uVar5 + 1;
            src = src + 0x18;
          } while (uVar5 < *(uint *)(in_stack_00000004 + 0x2c));
        }
        local_14 = local_14 + 1;
        local_28 = local_28 + 0x18;
      } while (local_14 < *(uint *)(in_stack_00000004 + 0x2c));
    }
    if (bVar3) {
      return;
    }
  } while( true );
}


// Assembly code:
// 005c8160: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c8160
// 005c8161: PUSH ESI
// 005c8162: PUSH EDI
// 005c8163: PUSH EBP
// 005c8164: SUB ESP,0x20
// 005c8167: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005c816b: MOV EAX,dword ptr [EBX + 0x30]
// 005c816e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c8172: MOV EAX,0x1
//   Label: LAB_005c8172
// 005c8177: XOR EDX,EDX
// 005c8179: MOV ECX,dword ptr [EBX + 0x2c]
// 005c817c: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005c8180: TEST ECX,ECX
// 005c8182: JBE 0x005c8190
//   XREF to: 005c8190 (CONDITIONAL_JUMP)
// 005c8184: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005c8188: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005c818c: TEST EAX,EAX
//   Label: LAB_005c818c
// 005c818e: JNZ 0x005c819c
//   XREF to: 005c819c (CONDITIONAL_JUMP)
// 005c8190: TEST EAX,EAX
//   Label: LAB_005c8190
// 005c8192: JZ 0x005c8172
//   XREF to: 005c8172 (CONDITIONAL_JUMP)
// 005c8194: ADD ESP,0x20
// 005c8197: POP EBP
// 005c8198: POP EDI
// 005c8199: POP ESI
// 005c819a: POP EBX
// 005c819b: RET
// 005c819c: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_005c819c
//   XREF to: Stack[-0x28] (READ)
// 005c81a0: MOV EDX,dword ptr [EDX]
// 005c81a2: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005c81a6: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005c81aa: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005c81ae: MOV EDX,dword ptr [EDX + 0x4]
// 005c81b1: INC EDI
// 005c81b2: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005c81b6: CMP EDI,dword ptr [EBX + 0x2c]
// 005c81b9: JNC 0x005c8250
//   XREF to: 005c8250 (CONDITIONAL_JUMP)
// 005c81bf: IMUL EDX,EDI,0x60
// 005c81c2: IMUL EBP,EDI,0x60
// 005c81c5: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005c81c9: ADD ESI,EDX
// 005c81cb: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005c81cf: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005c81d3: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005c81d7: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c81db: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005c81df: ADD ESI,EBP
// 005c81e1: ADD EBP,0x60
// 005c81e4: ADD EBP,EDX
// 005c81e6: TEST EAX,EAX
//   Label: LAB_005c81e6
// 005c81e8: JZ 0x005c8250
//   XREF to: 005c8250 (CONDITIONAL_JUMP)
// 005c81ea: MOV EDX,dword ptr [ESI]
// 005c81ec: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x30] (DATA)
// 005c81ef: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005c81f2: MOV EDX,dword ptr [ESI + 0x4]
// 005c81f5: CMP ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005c81f9: JNZ 0x005c8242
//   XREF to: 005c8242 (CONDITIONAL_JUMP)
// 005c81fb: CMP EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005c81ff: JNZ 0x005c8242
//   XREF to: 005c8242 (CONDITIONAL_JUMP)
// 005c8201: MOV EAX,dword ptr [EBX + 0x2c]
// 005c8204: SUB EAX,EDI
// 005c8206: DEC EAX
// 005c8207: IMUL EAX,EAX,0x60
// 005c820a: PUSH EAX
// 005c820b: PUSH EBP
// 005c820c: PUSH ESI
// 005c820d: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005c8212: MOV EAX,dword ptr [EBX + 0x2c]
// 005c8215: ADD ESP,0xc
// 005c8218: DEC EAX
// 005c8219: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005c821d: MOV dword ptr [EBX + 0x2c],EAX
// 005c8220: SUB EAX,EDX
// 005c8222: DEC EAX
// 005c8223: IMUL EAX,EAX,0x60
// 005c8226: PUSH EAX
// 005c8227: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 005c822b: PUSH ECX
// 005c822c: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 005c8230: PUSH EAX
// 005c8231: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005c8236: MOV EDX,dword ptr [EBX + 0x2c]
// 005c8239: ADD ESP,0xc
// 005c823c: DEC EDX
// 005c823d: XOR EAX,EAX
// 005c823f: MOV dword ptr [EBX + 0x2c],EDX
// 005c8242: ADD ESI,0x60
//   Label: LAB_005c8242
// 005c8245: INC EDI
// 005c8246: MOV ECX,dword ptr [EBX + 0x2c]
// 005c8249: ADD EBP,0x60
// 005c824c: CMP EDI,ECX
// 005c824e: JC 0x005c81e6
//   XREF to: 005c81e6 (CONDITIONAL_JUMP)
// 005c8250: MOV ESI,dword ptr [ESP + 0x8]
//   Label: LAB_005c8250
//   XREF to: Stack[-0x28] (READ)
// 005c8254: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005c8258: MOV EBP,dword ptr [EBX + 0x2c]
// 005c825b: ADD ESI,0x60
// 005c825e: INC EDI
// 005c825f: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 005c8263: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005c8267: CMP EDI,EBP
// 005c8269: JC 0x005c818c
//   XREF to: 005c818c (CONDITIONAL_JUMP)
// 005c826f: JMP 0x005c8190
//   XREF to: 005c8190 (UNCONDITIONAL_JUMP)
