// Name: core_actor.cpp_hashClassName_FUN_0040c290
// Address: 0040c290
// Address Range: [[0040c290, 0040c2d6]]
// Convention: __cdecl
// Signature: uint core_actor.cpp_hashClassName_FUN_0040c290(char * class_name)
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_ctype.c_tolower_FUN_005feb30

#include "nocturne.h"

uint __cdecl core_actor_cpp_hashClassName_FUN_0040c290(char *class_name)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    bVar1 = *class_name;
    class_name = (char *)((byte *)class_name + 1);
    if (bVar1 == 0) break;
    if ((g_CharacterClassificationTable[(byte)(bVar1 + 1)] & 0xe0U) != 0) {
      iVar2 = crt_ctype_c_tolower_FUN_005feb30((uint)bVar1);
      uVar3 = (uVar3 >> 0x19) + uVar3 * 0x80 + iVar2 * 0x20001;
    }
  }
  return uVar3;
}


// Assembly code:
// 0040c290: PUSH EBX
//   Label: core_actor.cpp_hashClassName_FUN_0040c290
// 0040c291: PUSH ESI
// 0040c292: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040c296: XOR EBX,EBX
// 0040c298: XOR EAX,EAX
//   Label: LAB_0040c298
// 0040c29a: MOV AL,byte ptr [ESI]
// 0040c29c: INC ESI
// 0040c29d: TEST EAX,EAX
// 0040c29f: JZ 0x0040c2d2
//   XREF to: 0040c2d2 (CONDITIONAL_JUMP)
// 0040c2a1: MOV DL,AL
// 0040c2a3: INC DL
// 0040c2a5: AND EDX,0xff
// 0040c2ab: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 0040c2b2: JZ 0x0040c298
//   XREF to: 0040c298 (CONDITIONAL_JUMP)
// 0040c2b4: PUSH EAX
// 0040c2b5: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 0040c2ba: MOV EDX,EBX
// 0040c2bc: SHL EDX,0x7
// 0040c2bf: SHR EBX,0x19
// 0040c2c2: ADD EBX,EDX
// 0040c2c4: MOV EDX,EAX
// 0040c2c6: SHL EDX,0x11
// 0040c2c9: ADD EBX,EDX
// 0040c2cb: ADD ESP,0x4
// 0040c2ce: ADD EBX,EAX
// 0040c2d0: JMP 0x0040c298
//   XREF to: 0040c298 (UNCONDITIONAL_JUMP)
// 0040c2d2: MOV EAX,EBX
//   Label: LAB_0040c2d2
// 0040c2d4: POP ESI
// 0040c2d5: POP EBX
// 0040c2d6: RET
