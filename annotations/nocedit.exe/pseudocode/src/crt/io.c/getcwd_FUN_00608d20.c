// Name: crt_io.c_getcwd_FUN_00608d20
// Address: 00608d20
// Address Range: [[00608d20, 00608dc7]]
// Convention: __cdecl
// Signature: char * crt_io.c_getcwd_FUN_00608d20(char * buffer, SIZE_T size)
// Cross-references:
//   crt_io.c_getTempDirectory_FUN_00609afc (00609afc) at 00609b68 [UNCONDITIONAL_CALL]
//   crt_io.c_getcwd_wrapper_FUN_00608d20 (0060128c) at 0060128c [UNCONDITIONAL_JUMP]
//   crt_io.c_realpath_FUN_00601140 (00601140) at 00601189 [UNCONDITIONAL_CALL]
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607eb7 [UNCONDITIONAL_CALL]
// Globals:
//   GetCurrentDirectoryA* GetCurrentDirectoryA = 00211e42
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_memory.c_malloc_FUN_00601bb0
//   GetCurrentDirectoryA

#include "nocturne.h"

char * __cdecl crt_io_c_getcwd_FUN_00608d20(char *buffer,SIZE_T size)

{
  DWORD DVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  CHAR aCStack_110 [4];
  undefined4 uStack_10c;
  char acStack_100 [244];
  
  bVar5 = 0;
  DVar1 = (*GetCurrentDirectoryA)(0x104,aCStack_110);
  if (DVar1 == 0) {
    crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    buffer = (char *)0x0;
  }
  else {
    if (buffer == (char *)0x0) {
      uVar2 = DVar1 + 1;
      if (DVar1 + 1 < size) {
        uVar2 = size;
      }
      uStack_10c = 0x608d66;
      buffer = (char *)crt_memory_c_malloc_FUN_00601bb0(uVar2);
      if (buffer == (char *)0x0) {
        crt_errno_c_setErrno_FUN_00602790(5);
        return (char *)0x0;
      }
    }
    else if (size < DVar1) {
      uStack_10c = 0x608d90;
      crt_errno_c_setErrno_FUN_00602790(0xe);
      return (char *)0x0;
    }
    pcVar3 = acStack_100;
    pcVar4 = buffer;
    for (uVar2 = DVar1 + 1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + (uint)bVar5 * -8 + 4;
      pcVar4 = pcVar4 + (uint)bVar5 * -8 + 4;
    }
    for (uVar2 = DVar1 + 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  return buffer;
}


// Assembly code:
// 00608d20: PUSH EBX
//   Label: crt_io.c_getcwd_FUN_00608d20
// 00608d21: PUSH ESI
// 00608d22: PUSH EDI
// 00608d23: SUB ESP,0x104
// 00608d29: MOV EBX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 00608d30: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 00608d37: MOV EAX,ESP
// 00608d39: PUSH EAX
// 00608d3a: PUSH 0x104
// 00608d3f: CALL dword ptr CS:[0x611578]
//   XREF to: EXTERNAL:00000069 (COMPUTED_CALL)
//   XREF to: 00611578 (READ)
// 00608d46: MOV EDI,EAX
// 00608d48: TEST EAX,EAX
// 00608d4a: JNZ 0x00608d55
//   XREF to: 00608d55 (CONDITIONAL_JUMP)
// 00608d4c: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00608d51: XOR EAX,EAX
// 00608d53: JMP 0x00608dbe
//   XREF to: 00608dbe (UNCONDITIONAL_JUMP)
// 00608d55: TEST EBX,EBX
//   Label: LAB_00608d55
// 00608d57: JNZ 0x00608d85
//   XREF to: 00608d85 (CONDITIONAL_JUMP)
// 00608d59: INC EAX
// 00608d5a: CMP ESI,EAX
// 00608d5c: JBE 0x00608d60
//   XREF to: 00608d60 (CONDITIONAL_JUMP)
// 00608d5e: MOV EAX,ESI
// 00608d60: PUSH EAX
//   Label: LAB_00608d60
// 00608d61: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 00608d66: ADD ESP,0x4
// 00608d69: MOV EBX,EAX
// 00608d6b: TEST EAX,EAX
// 00608d6d: JNZ 0x00608d9f
//   XREF to: 00608d9f (CONDITIONAL_JUMP)
// 00608d6f: PUSH 0x5
// 00608d71: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00608d76: ADD ESP,0x4
// 00608d79: XOR EAX,EAX
// 00608d7b: ADD ESP,0x104
// 00608d81: POP EDI
// 00608d82: POP ESI
// 00608d83: POP EBX
// 00608d84: RET
// 00608d85: CMP EAX,ESI
//   Label: LAB_00608d85
// 00608d87: JBE 0x00608d9f
//   XREF to: 00608d9f (CONDITIONAL_JUMP)
// 00608d89: PUSH 0xe
// 00608d8b: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00608d90: ADD ESP,0x4
// 00608d93: XOR EAX,EAX
// 00608d95: ADD ESP,0x104
// 00608d9b: POP EDI
// 00608d9c: POP ESI
// 00608d9d: POP EBX
// 00608d9e: RET
// 00608d9f: LEA ECX,[EDI + 0x1]
//   Label: LAB_00608d9f
// 00608da2: MOV ESI,ESP
// 00608da4: MOV EDI,EBX
// 00608da6: PUSH ES
// 00608da7: MOV AX,DS
// 00608da9: MOV ES,AX
// 00608dab: PUSH EDI
// 00608dac: MOV EAX,ECX
// 00608dae: SHR ECX,0x2
// 00608db1: MOVSD.REP ES:EDI,ESI
// 00608db3: MOV CL,AL
// 00608db5: AND CL,0x3
// 00608db8: MOVSB.REP ES:EDI,ESI
// 00608dba: POP EDI
// 00608dbb: POP ES
// 00608dbc: MOV EAX,EBX
// 00608dbe: ADD ESP,0x104
//   Label: LAB_00608dbe
// 00608dc4: POP EDI
// 00608dc5: POP ESI
// 00608dc6: POP EBX
// 00608dc7: RET
