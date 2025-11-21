// Name: shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
// Address: 004a6e20
// Address Range: [[004a6e20, 004a6ec1]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042e050 (0042e050) at 0042e14e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e13a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 00537cdf [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053ded2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053d135 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0 (005b1ed0) at 005b1f16 [UNCONDITIONAL_CALL]
//   core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0 (005b17d0) at 005b1802 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005dfff3 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_FUN_005e0ac0 (005e0ac0) at 005e0af0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b40db [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0 (00550ef0) at 00550f98 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_ctype.c_tolower_FUN_005feb30

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
          (char *pattern,char *target_string,int case_sensitive)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = *pattern;
  do {
    if (bVar1 == 0) {
      return (uint)(*target_string == 0);
    }
    bVar1 = *pattern;
    if (bVar1 < 0x2a) {
LAB_004a6e42:
      if (case_sensitive == 0) {
        iVar2 = crt_ctype_c_tolower_FUN_005feb30((uint)(byte)*pattern);
        iVar3 = crt_ctype_c_tolower_FUN_005feb30((uint)(byte)*target_string);
        if (iVar2 != iVar3) {
          return 0;
        }
      }
      else if (*pattern != *target_string) {
        return 0;
      }
    }
    else {
      if (bVar1 < 0x2b) {
        while( true ) {
          iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            ((char *)((byte *)pattern + 1),target_string,case_sensitive);
          if (iVar2 != 0) {
            return 1;
          }
          if (*target_string == 0) break;
          target_string = (char *)((byte *)target_string + 1);
        }
        return 0;
      }
      if (bVar1 != 0x3f) goto LAB_004a6e42;
      if (*target_string == 0) {
        return 0;
      }
    }
    target_string = (char *)((byte *)target_string + 1);
    bVar1 = ((byte *)pattern)[1];
    pattern = (char *)((byte *)pattern + 1);
  } while( true );
}


// Assembly code:
// 004a6e20: PUSH EBX
//   Label: shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
// 004a6e21: PUSH ESI
// 004a6e22: PUSH EDI
// 004a6e23: PUSH EBP
// 004a6e24: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a6e28: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a6e2c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a6e30: MOV DL,byte ptr [EAX]
// 004a6e32: MOV ESI,EAX
// 004a6e34: TEST DL,DL
// 004a6e36: JZ 0x004a6e55
//   XREF to: 004a6e55 (CONDITIONAL_JUMP)
// 004a6e38: MOV AL,byte ptr [ESI]
//   Label: LAB_004a6e38
// 004a6e3a: CMP AL,0x2a
// 004a6e3c: JNC 0x004a6eba
//   XREF to: 004a6eba (CONDITIONAL_JUMP)
// 004a6e42: TEST EBP,EBP
//   Label: LAB_004a6e42
// 004a6e44: JZ 0x004a6e93
//   XREF to: 004a6e93 (CONDITIONAL_JUMP)
// 004a6e46: MOV AL,byte ptr [ESI]
// 004a6e48: CMP AL,byte ptr [EBX]
// 004a6e4a: JNZ 0x004a6e8c
//   XREF to: 004a6e8c (CONDITIONAL_JUMP)
// 004a6e4c: INC EBX
//   Label: LAB_004a6e4c
// 004a6e4d: MOV DH,byte ptr [ESI + 0x1]
// 004a6e50: INC ESI
// 004a6e51: TEST DH,DH
// 004a6e53: JNZ 0x004a6e38
//   XREF to: 004a6e38 (CONDITIONAL_JUMP)
// 004a6e55: CMP byte ptr [EBX],0x0
//   Label: LAB_004a6e55
// 004a6e58: SETZ AL
// 004a6e5b: AND EAX,0xff
// 004a6e60: POP EBP
//   Label: LAB_004a6e60
// 004a6e61: POP EDI
// 004a6e62: POP ESI
// 004a6e63: POP EBX
// 004a6e64: RET
// 004a6e65: INC ESI
//   Label: LAB_004a6e65
// 004a6e66: PUSH EBP
//   Label: LAB_004a6e66
// 004a6e67: PUSH EBX
// 004a6e68: PUSH ESI
// 004a6e69: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 004a6e6e: ADD ESP,0xc
// 004a6e71: TEST EAX,EAX
// 004a6e73: JNZ 0x004a6e7d
//   XREF to: 004a6e7d (CONDITIONAL_JUMP)
// 004a6e75: CMP byte ptr [EBX],0x0
// 004a6e78: JZ 0x004a6e60
//   XREF to: 004a6e60 (CONDITIONAL_JUMP)
// 004a6e7a: INC EBX
// 004a6e7b: JMP 0x004a6e66
//   XREF to: 004a6e66 (UNCONDITIONAL_JUMP)
// 004a6e7d: MOV EAX,0x1
//   Label: LAB_004a6e7d
// 004a6e82: POP EBP
// 004a6e83: POP EDI
// 004a6e84: POP ESI
// 004a6e85: POP EBX
// 004a6e86: RET
// 004a6e87: CMP byte ptr [EBX],0x0
//   Label: LAB_004a6e87
// 004a6e8a: JNZ 0x004a6e4c
//   XREF to: 004a6e4c (CONDITIONAL_JUMP)
// 004a6e8c: XOR EAX,EAX
//   Label: LAB_004a6e8c
// 004a6e8e: POP EBP
// 004a6e8f: POP EDI
// 004a6e90: POP ESI
// 004a6e91: POP EBX
// 004a6e92: RET
// 004a6e93: XOR EAX,EAX
//   Label: LAB_004a6e93
// 004a6e95: MOV AL,byte ptr [ESI]
// 004a6e97: PUSH EAX
// 004a6e98: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 004a6e9d: MOV EDI,EAX
// 004a6e9f: XOR EAX,EAX
// 004a6ea1: ADD ESP,0x4
// 004a6ea4: MOV AL,byte ptr [EBX]
// 004a6ea6: PUSH EAX
// 004a6ea7: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 004a6eac: ADD ESP,0x4
// 004a6eaf: CMP EDI,EAX
// 004a6eb1: JZ 0x004a6e4c
//   XREF to: 004a6e4c (CONDITIONAL_JUMP)
// 004a6eb3: XOR EAX,EAX
// 004a6eb5: POP EBP
// 004a6eb6: POP EDI
// 004a6eb7: POP ESI
// 004a6eb8: POP EBX
// 004a6eb9: RET
// 004a6eba: JBE 0x004a6e65
//   Label: LAB_004a6eba
//   XREF to: 004a6e65 (CONDITIONAL_JUMP)
// 004a6ebc: CMP AL,0x3f
// 004a6ebe: JZ 0x004a6e87
//   XREF to: 004a6e87 (CONDITIONAL_JUMP)
// 004a6ec0: JMP 0x004a6e42
//   XREF to: 004a6e42 (UNCONDITIONAL_JUMP)
