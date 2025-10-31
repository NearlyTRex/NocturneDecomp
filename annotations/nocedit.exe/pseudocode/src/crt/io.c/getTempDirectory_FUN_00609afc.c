// Name: crt_io.c_getTempDirectory_FUN_00609afc
// Address: 00609afc
// Address Range: [[00609afc, 00609bc9]]
// Convention: __cdecl
// Signature: undefined crt_io.c_getTempDirectory_FUN_00609afc()
// Cross-references:
//   crt_io.c_generateTempFilename_FUN_00601f1c (00601f1c) at 00601f32 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_006590a4
//   char** g_TempEnvVarNames = 006590a4
//   void* PTR_DAT_006852cc = 006590a8
//   undefined1 DAT_006852db
//   char[260] g_TempDirectoryBuffer
//   undefined4 DAT_006852dd
//   undefined4 DAT_006852de
//   undefined4 s__006852df
// Function calls:
//   crt_env.c_getenv_FUN_006013f0
//   crt_io.c_getcwd_FUN_00608d20
//   crt_io.c_realpath_FUN_00601140

#include "nocturne.h"

char * __cdecl crt_io_c_getTempDirectory_FUN_00609afc(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char ***pppcVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (g_TempDirectoryBuffer[0] == '\0') {
    for (pppcVar4 = &g_TempEnvVarNames; *(char *)*pppcVar4 != '\0'; pppcVar4 = pppcVar4 + 1) {
      pcVar2 = crt_env_c_getenv_FUN_006013f0((char *)*pppcVar4);
      if (pcVar2 != (char *)0x0) {
        uVar3 = 0xffffffff;
        pcVar5 = pcVar2;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        if (~uVar3 - 1 < 0x104) {
          crt_io_c_realpath_FUN_00601140(g_TempDirectoryBuffer,pcVar2,0x103);
          break;
        }
      }
    }
    if (g_TempDirectoryBuffer[0] == '\0') {
      pcVar2 = crt_io_c_getcwd_FUN_00608d20((char *)0x0,0);
      pcVar5 = g_TempDirectoryBuffer;
      do {
        cVar1 = *pcVar2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    uVar3 = 0xffffffff;
    pcVar2 = g_TempDirectoryBuffer;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    if ((*(char *)(uVar3 + 0x6852da) != '\\') && (*(char *)(uVar3 + 0x6852da) != '/')) {
      (&DAT_006852db)[uVar3] = 0x5c;
      g_TempDirectoryBuffer[uVar3] = '\0';
    }
  }
  return g_TempDirectoryBuffer;
}


// Assembly code:
// 00609afc: PUSH EBX
//   Label: crt_io.c_getTempDirectory_FUN_00609afc
// 00609afd: PUSH ESI
// 00609afe: PUSH EDI
// 00609aff: CMP byte ptr [0x006852dc],0x0
//   XREF to: 006852dc (READ)
// 00609b06: JNZ 0x00609bc1
//   XREF to: 00609bc1 (CONDITIONAL_JUMP)
// 00609b0c: MOV EBX,0x6852c8
//   XREF to: 006852c8 (PARAM)
// 00609b11: JMP 0x00609b54
//   XREF to: 00609b54 (UNCONDITIONAL_JUMP)
// 00609b13: PUSH EDX
//   Label: LAB_00609b13
//   XREF to: 006590a4 (DATA)
// 00609b14: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 00609b19: MOV EDX,EAX
// 00609b1b: ADD ESP,0x4
// 00609b1e: TEST EAX,EAX
// 00609b20: JZ 0x00609b51
//   XREF to: 00609b51 (CONDITIONAL_JUMP)
// 00609b22: MOV EDI,EAX
// 00609b24: PUSH ES
// 00609b25: MOV AX,DS
// 00609b27: MOV ES,AX
// 00609b29: SUB ECX,ECX
// 00609b2b: DEC ECX
// 00609b2c: XOR EAX,EAX
// 00609b2e: SCASB.REPNE ES:EDI
// 00609b30: NOT ECX
// 00609b32: DEC ECX
// 00609b33: POP ES
// 00609b34: CMP ECX,0x103
// 00609b3a: JA 0x00609b51
//   XREF to: 00609b51 (CONDITIONAL_JUMP)
// 00609b3c: PUSH 0x103
// 00609b41: PUSH EDX
// 00609b42: PUSH 0x6852dc
//   XREF to: 006852dc (DATA)
// 00609b47: CALL crt_io.c_realpath_FUN_00601140
//   XREF to: 00601140 (UNCONDITIONAL_CALL)
// 00609b4c: ADD ESP,0xc
// 00609b4f: JMP 0x00609b5b
//   XREF to: 00609b5b (UNCONDITIONAL_JUMP)
// 00609b51: ADD EBX,0x4
//   Label: LAB_00609b51
// 00609b54: MOV EDX,dword ptr [EBX]
//   Label: LAB_00609b54
//   XREF to: 006590a4 (PARAM)
//   XREF to: 006852c8 (READ)
//   XREF to: 006852cc (READ)
// 00609b56: CMP byte ptr [EDX],0x0
//   XREF to: 006590a4 (READ)
//   XREF to: 006590a8 (READ)
// 00609b59: JNZ 0x00609b13
//   XREF to: 00609b13 (CONDITIONAL_JUMP)
// 00609b5b: CMP byte ptr [0x006852dc],0x0
//   Label: LAB_00609b5b
//   XREF to: 006852dc (READ)
// 00609b62: JNZ 0x00609b91
//   XREF to: 00609b91 (CONDITIONAL_JUMP)
// 00609b64: PUSH 0x0
// 00609b66: PUSH 0x0
// 00609b68: CALL crt_io.c_getcwd_FUN_00608d20
//   XREF to: 00608d20 (UNCONDITIONAL_CALL)
// 00609b6d: ADD ESP,0x8
// 00609b70: MOV EDI,0x6852dc
//   XREF to: 006852dc (DATA)
// 00609b75: MOV ESI,EAX
// 00609b77: PUSH EDI
//   XREF to: 006852dc (DATA)
// 00609b78: MOV AL,byte ptr [ESI]
//   Label: LAB_00609b78
// 00609b7a: MOV byte ptr [EDI],AL
//   XREF to: 006852dc (WRITE)
//   XREF to: 006852de (WRITE)
// 00609b7c: CMP AL,0x0
// 00609b7e: JZ 0x00609b90
//   XREF to: 00609b90 (CONDITIONAL_JUMP)
// 00609b80: MOV AL,byte ptr [ESI + 0x1]
// 00609b83: ADD ESI,0x2
// 00609b86: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 006852dd (WRITE)
//   XREF to: 006852df (WRITE)
// 00609b89: ADD EDI,0x2
// 00609b8c: CMP AL,0x0
// 00609b8e: JNZ 0x00609b78
//   XREF to: 00609b78 (CONDITIONAL_JUMP)
// 00609b90: POP EDI
//   Label: LAB_00609b90
// 00609b91: MOV EDI,0x6852dc
//   Label: LAB_00609b91
//   XREF to: 006852dc (DATA)
// 00609b96: PUSH ES
// 00609b97: MOV AX,DS
// 00609b99: MOV ES,AX
// 00609b9b: SUB ECX,ECX
// 00609b9d: DEC ECX
// 00609b9e: XOR EAX,EAX
// 00609ba0: SCASB.REPNE ES:EDI
//   XREF to: 006852dc (READ)
//   XREF to: 006852dd (READ)
// 00609ba2: NOT ECX
// 00609ba4: DEC ECX
// 00609ba5: POP ES
// 00609ba6: LEA EDX,[ECX + -0x1]
// 00609ba9: ADD EDX,0x6852dc
//   XREF to: 006852dc (DATA)
// 00609baf: MOV AL,byte ptr [EDX]
//   XREF to: 006852db (READ)
//   XREF to: 006852dc (READ)
// 00609bb1: CMP AL,0x5c
// 00609bb3: JZ 0x00609bc1
//   XREF to: 00609bc1 (CONDITIONAL_JUMP)
// 00609bb5: CMP AL,0x2f
// 00609bb7: JZ 0x00609bc1
//   XREF to: 00609bc1 (CONDITIONAL_JUMP)
// 00609bb9: INC EDX
// 00609bba: MOV byte ptr [EDX],0x5c
//   XREF to: 006852dc (WRITE)
//   XREF to: 006852dd (WRITE)
// 00609bbd: INC EDX
// 00609bbe: MOV byte ptr [EDX],0x0
//   XREF to: 006852dd (WRITE)
//   XREF to: 006852de (WRITE)
// 00609bc1: MOV EAX,0x6852dc
//   Label: LAB_00609bc1
//   XREF to: 006852dc (DATA)
// 00609bc6: POP EDI
// 00609bc7: POP ESI
// 00609bc8: POP EBX
// 00609bc9: RET
