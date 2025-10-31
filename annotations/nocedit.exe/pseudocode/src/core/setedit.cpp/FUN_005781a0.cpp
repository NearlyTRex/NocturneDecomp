// Name: core_setedit.cpp_FUN_005781a0
// Address: 005781a0
// Address Range: [[005781a0, 0057820d]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_005781a0()
// Globals:
//   undefined4 DAT_03654368
//   undefined4 DAT_03654370
//   undefined4 DAT_03654398
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_splitPath_FUN_00481f20

#include "nocturne.h"

int core_setedit_cpp_FUN_005781a0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *str1;
  char *in_stack_00000004;
  char acStack_108 [252];
  
  iVar2 = 0;
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000004,(char *)0x0,(char *)0x0,&stack0xfffffef4,(char *)0x0);
  if (0 < DAT_03654368) {
    str1 = &DAT_03654370;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,acStack_108);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x28;
    } while (iVar2 < DAT_03654368);
  }
  return -1;
}


// Assembly code:
// 005781a0: PUSH EBX
//   Label: core_setedit.cpp_FUN_005781a0
// 005781a1: PUSH ESI
// 005781a2: PUSH EDI
// 005781a3: SUB ESP,0x100
// 005781a9: PUSH 0x0
// 005781ab: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10c] (DATA)
// 005781af: PUSH EAX
// 005781b0: PUSH 0x0
// 005781b2: PUSH 0x0
// 005781b4: MOV EDX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x4] (READ)
// 005781bb: PUSH EDX
// 005781bc: XOR EBX,EBX
// 005781be: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005781c3: MOV ECX,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 005781c9: ADD ESP,0x14
// 005781cc: TEST ECX,ECX
// 005781ce: JLE 0x005781f3
//   XREF to: 005781f3 (CONDITIONAL_JUMP)
// 005781d0: MOV ESI,0x3654370
//   XREF to: 03654370 (DATA)
// 005781d5: MOV EAX,ESP
//   Label: LAB_005781d5
// 005781d7: PUSH EAX
// 005781d8: PUSH ESI
//   XREF to: 03654370 (DATA)
//   XREF to: 03654398 (DATA)
// 005781d9: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005781de: ADD ESP,0x8
// 005781e1: TEST EAX,EAX
// 005781e3: JZ 0x00578202
//   XREF to: 00578202 (CONDITIONAL_JUMP)
// 005781e5: MOV EDI,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 005781eb: INC EBX
// 005781ec: ADD ESI,0x28
// 005781ef: CMP EBX,EDI
// 005781f1: JL 0x005781d5
//   XREF to: 005781d5 (CONDITIONAL_JUMP)
// 005781f3: MOV EAX,0xffffffff
//   Label: LAB_005781f3
// 005781f8: ADD ESP,0x100
// 005781fe: POP EDI
// 005781ff: POP ESI
// 00578200: POP EBX
// 00578201: RET
// 00578202: MOV EAX,EBX
//   Label: LAB_00578202
// 00578204: ADD ESP,0x100
// 0057820a: POP EDI
// 0057820b: POP ESI
// 0057820c: POP EBX
// 0057820d: RET
