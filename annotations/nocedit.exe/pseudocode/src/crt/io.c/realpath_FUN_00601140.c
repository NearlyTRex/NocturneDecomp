// Name: crt_io.c_realpath_FUN_00601140
// Address: 00601140
// Address Range: [[00601140, 006011ff]]
// Convention: __cdecl
// Signature: char * crt_io.c_realpath_FUN_00601140(char * buffer, char * path, SIZE_T buffer_size)
// Cross-references:
//   crt_io.c_getTempDirectory_FUN_00609afc (00609afc) at 00609b47 [UNCONDITIONAL_CALL]
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607ecd [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFullPath_FUN_004820c0 (004820c0) at 004820d1 [UNCONDITIONAL_CALL]
// Globals:
//   GetFullPathNameA* PTR_GetFullPathNameA_006115a0 = 00211f0e
//   TerminatedCString s_con_00658c2c
//   undefined4 DAT_006e6f63
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_getcwd_FUN_00608d20
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_string.c_stricmp_FUN_005fe7f0
//   GetFullPathNameA

#include "nocturne.h"

char * __cdecl crt_io_c_realpath_FUN_00601140(char *buffer,char *path,SIZE_T buffer_size)

{
  char *pcVar1;
  int iVar2;
  DWORD DVar3;
  BADSPACEBASE *in_ESP;
  char (*unaff_EBP) [4];
  
  if (buffer == (char *)0x0) {
    buffer_size = 0x104;
    buffer = (char *)crt_memory_c_malloc_FUN_00601bb0(0x104);
    unaff_EBP = (char (*) [4])buffer;
    if ((char (*) [4])buffer == (char (*) [4])0x0) {
      crt_errno_c_setErrno_FUN_00602790(5);
      return (char *)0x0;
    }
  }
  if ((path != (char *)0x0) && (*path != '\0')) {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(path,"con");
    if (iVar2 == 0) {
      if (buffer_size < 4) {
        crt_memory_c_free_FUN_00601cd0(unaff_EBP);
        crt_errno_c_setErrno_FUN_00602790(0xe);
        return (char *)0x0;
      }
      *(char (*) [4])buffer = "con";
    }
    else {
      DVar3 = (*PTR_GetFullPathNameA_006115a0)(path,buffer_size,buffer,(LPSTR *)&stack0xfffffff4);
      if (DVar3 == 0) {
        crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return (char *)0x0;
      }
    }
    return buffer;
  }
  pcVar1 = crt_io_c_getcwd_FUN_00608d20(buffer,buffer_size);
  return pcVar1;
}


// Assembly code:
// 00601140: PUSH EBX
//   Label: crt_io.c_realpath_FUN_00601140
// 00601141: PUSH ESI
// 00601142: PUSH EDI
// 00601143: PUSH EBP
// 00601144: SUB ESP,0x4
// 00601147: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060114b: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0060114f: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00601153: TEST EBX,EBX
// 00601155: JNZ 0x0060117e
//   XREF to: 0060117e (CONDITIONAL_JUMP)
// 00601157: MOV EDI,0x104
// 0060115c: PUSH EDI
// 0060115d: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 00601162: ADD ESP,0x4
// 00601165: MOV EBP,EAX
// 00601167: TEST EAX,EAX
// 00601169: JNZ 0x0060117c
//   XREF to: 0060117c (CONDITIONAL_JUMP)
// 0060116b: PUSH 0x5
// 0060116d: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00601172: ADD ESP,0x4
// 00601175: XOR EAX,EAX
// 00601177: JMP 0x006011f8
//   XREF to: 006011f8 (UNCONDITIONAL_JUMP)
// 0060117c: MOV EBX,EAX
//   Label: LAB_0060117c
// 0060117e: TEST ESI,ESI
//   Label: LAB_0060117e
// 00601180: JZ 0x00601187
//   XREF to: 00601187 (CONDITIONAL_JUMP)
// 00601182: CMP byte ptr [ESI],0x0
// 00601185: JNZ 0x00601199
//   XREF to: 00601199 (CONDITIONAL_JUMP)
// 00601187: PUSH EDI
//   Label: LAB_00601187
// 00601188: PUSH EBX
// 00601189: CALL crt_io.c_getcwd_FUN_00608d20
//   XREF to: 00608d20 (UNCONDITIONAL_CALL)
// 0060118e: ADD ESP,0x8
// 00601191: ADD ESP,0x4
// 00601194: POP EBP
// 00601195: POP EDI
// 00601196: POP ESI
// 00601197: POP EBX
// 00601198: RET
// 00601199: PUSH 0x658c2c
//   Label: LAB_00601199
//   XREF to: 00658c2c (DATA)
// 0060119e: PUSH ESI
// 0060119f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 006011a4: ADD ESP,0x8
// 006011a7: TEST EAX,EAX
// 006011a9: JNZ 0x006011d6
//   XREF to: 006011d6 (CONDITIONAL_JUMP)
// 006011ab: CMP EDI,0x4
// 006011ae: JNC 0x006011cd
//   XREF to: 006011cd (CONDITIONAL_JUMP)
// 006011b0: PUSH EBP
// 006011b1: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 006011b6: ADD ESP,0x4
// 006011b9: PUSH 0xe
// 006011bb: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006011c0: ADD ESP,0x4
// 006011c3: XOR EAX,EAX
// 006011c5: ADD ESP,0x4
// 006011c8: POP EBP
// 006011c9: POP EDI
// 006011ca: POP ESI
// 006011cb: POP EBX
// 006011cc: RET
// 006011cd: MOV EAX,[0x00658c2c]
//   Label: LAB_006011cd
//   XREF to: 00658c2c (READ)
// 006011d2: MOV dword ptr [EBX],EAX
//   XREF to: 006e6f63 (DATA)
// 006011d4: JMP 0x006011f6
//   XREF to: 006011f6 (UNCONDITIONAL_JUMP)
// 006011d6: MOV EAX,ESP
//   Label: LAB_006011d6
// 006011d8: PUSH EAX
// 006011d9: PUSH EBX
// 006011da: PUSH EDI
// 006011db: PUSH ESI
// 006011dc: CALL dword ptr CS:[0x6115a0]
//   XREF to: EXTERNAL:00000073 (COMPUTED_CALL)
//   XREF to: 006115a0 (READ)
// 006011e3: TEST EAX,EAX
// 006011e5: JNZ 0x006011f6
//   XREF to: 006011f6 (CONDITIONAL_JUMP)
// 006011e7: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 006011ec: XOR EAX,EAX
// 006011ee: ADD ESP,0x4
// 006011f1: POP EBP
// 006011f2: POP EDI
// 006011f3: POP ESI
// 006011f4: POP EBX
// 006011f5: RET
// 006011f6: MOV EAX,EBX
//   Label: LAB_006011f6
// 006011f8: ADD ESP,0x4
//   Label: LAB_006011f8
// 006011fb: POP EBP
// 006011fc: POP EDI
// 006011fd: POP ESI
// 006011fe: POP EBX
// 006011ff: RET
