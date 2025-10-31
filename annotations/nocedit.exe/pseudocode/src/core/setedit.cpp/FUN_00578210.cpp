// Name: core_setedit.cpp_FUN_00578210
// Address: 00578210
// Address Range: [[00578210, 00578285]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00578210()
// Globals:
//   undefined4 DAT_03654368
//   undefined4 DAT_03654370
//   undefined4 DAT_03654398
//   undefined1 DAT_03659190
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_splitPath_FUN_00481f20

#include "nocturne.h"

undefined1 core_setedit_cpp_FUN_00578210(void)

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
        if (iVar2 < 0) {
          return 0xff;
        }
        return (&DAT_03659190)[iVar2];
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x28;
    } while (iVar2 < DAT_03654368);
  }
  return 0xff;
}


// Assembly code:
// 00578210: PUSH EBX
//   Label: core_setedit.cpp_FUN_00578210
// 00578211: PUSH ESI
// 00578212: PUSH EDI
// 00578213: SUB ESP,0x100
// 00578219: PUSH 0x0
// 0057821b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10c] (DATA)
// 0057821f: PUSH EAX
// 00578220: PUSH 0x0
// 00578222: PUSH 0x0
// 00578224: MOV EDX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x4] (READ)
// 0057822b: PUSH EDX
// 0057822c: XOR EBX,EBX
// 0057822e: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00578233: MOV ECX,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 00578239: ADD ESP,0x14
// 0057823c: TEST ECX,ECX
// 0057823e: JLE 0x00578277
//   XREF to: 00578277 (CONDITIONAL_JUMP)
// 00578240: MOV ESI,0x3654370
//   XREF to: 03654370 (DATA)
// 00578245: MOV EAX,ESP
//   Label: LAB_00578245
// 00578247: PUSH EAX
// 00578248: PUSH ESI
//   XREF to: 03654370 (DATA)
//   XREF to: 03654398 (DATA)
// 00578249: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0057824e: ADD ESP,0x8
// 00578251: TEST EAX,EAX
// 00578253: JNZ 0x00578269
//   XREF to: 00578269 (CONDITIONAL_JUMP)
// 00578255: TEST EBX,EBX
// 00578257: JL 0x00578277
//   XREF to: 00578277 (CONDITIONAL_JUMP)
// 00578259: MOV AL,byte ptr [EBX + 0x3659190]
//   XREF to: 03659190 (READ)
// 0057825f: ADD ESP,0x100
// 00578265: POP EDI
// 00578266: POP ESI
// 00578267: POP EBX
// 00578268: RET
// 00578269: MOV EDI,dword ptr [0x03654368]
//   Label: LAB_00578269
//   XREF to: 03654368 (READ)
// 0057826f: INC EBX
// 00578270: ADD ESI,0x28
// 00578273: CMP EBX,EDI
// 00578275: JL 0x00578245
//   XREF to: 00578245 (CONDITIONAL_JUMP)
// 00578277: MOV EAX,0xffffffff
//   Label: LAB_00578277
// 0057827c: ADD ESP,0x100
// 00578282: POP EDI
// 00578283: POP ESI
// 00578284: POP EBX
// 00578285: RET
