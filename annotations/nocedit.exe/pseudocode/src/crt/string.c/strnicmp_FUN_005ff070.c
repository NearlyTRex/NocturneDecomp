// Name: crt_string.c_strnicmp_FUN_005ff070
// Address: 005ff070
// Address Range: [[005ff070, 005ff0c7]]
// Convention: __watcallStack
// Signature: int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00428f40 (00428f40) at 004294c3 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c580 (0042c580) at 0042c5a8 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a82c0 [UNCONDITIONAL_CALL]
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ab860 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e171e [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524660 (00524660) at 0052468f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055aa37 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005601c0 (005601c0) at 0056025e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566cc0 (00566cc0) at 00566dc5 [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0 (00560de0) at 00560fc2 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056a0a4 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_process_FUN_0056f940 (0056f940) at 0056fa5d [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592a9b [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1870 (005b1870) at 005b1ba3 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2fd0 (005b2fd0) at 005b30e4 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fb1f0 (005fb1f0) at 005fb24f [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbd00 (005fbd00) at 005fbd36 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad339 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __watcallStack crt_string_c_strnicmp_FUN_005ff070(char *str1,char *str2,int count)

{
  byte bVar2;
  uint uVar1;
  
  if (count != 0) {
    do {
      bVar2 = *str1;
      uVar1 = (uint)CONCAT11(*str2,bVar2);
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar1 = (uint)CONCAT11(*str2,bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar1 >> 8);
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar1 = (uint)CONCAT11(bVar2 + 0x20,(char)uVar1);
      }
      bVar2 = (byte)(uVar1 >> 8);
      if ((byte)uVar1 != bVar2) {
        return (uVar1 & 0xff) - (uint)bVar2;
      }
      if (bVar2 == 0) {
        return 0;
      }
      str1 = (char *)((byte *)str1 + 1);
      str2 = str2 + 1;
      count = count + -1;
    } while (count != 0);
  }
  return 0;
}


// Assembly code:
// 005ff070: PUSH EBX
//   Label: crt_string.c_strnicmp_FUN_005ff070
// 005ff071: PUSH ESI
// 005ff072: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ff076: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005ff07a: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005ff07e: TEST EDX,EDX
// 005ff080: JNZ 0x005ff087
//   XREF to: 005ff087 (CONDITIONAL_JUMP)
// 005ff082: XOR EAX,EAX
//   Label: LAB_005ff082
// 005ff084: POP ESI
// 005ff085: POP EBX
// 005ff086: RET
// 005ff087: MOV AL,byte ptr [EBX]
//   Label: LAB_005ff087
// 005ff089: MOV AH,byte ptr [ESI]
// 005ff08b: CMP AL,0x41
// 005ff08d: JC 0x005ff095
//   XREF to: 005ff095 (CONDITIONAL_JUMP)
// 005ff08f: CMP AL,0x5a
// 005ff091: JA 0x005ff095
//   XREF to: 005ff095 (CONDITIONAL_JUMP)
// 005ff093: ADD AL,0x20
// 005ff095: CMP AH,0x41
//   Label: LAB_005ff095
// 005ff098: JC 0x005ff0a2
//   XREF to: 005ff0a2 (CONDITIONAL_JUMP)
// 005ff09a: CMP AH,0x5a
// 005ff09d: JA 0x005ff0a2
//   XREF to: 005ff0a2 (CONDITIONAL_JUMP)
// 005ff09f: ADD AH,0x20
// 005ff0a2: CMP AL,AH
//   Label: LAB_005ff0a2
// 005ff0a4: JZ 0x005ff0b8
//   XREF to: 005ff0b8 (CONDITIONAL_JUMP)
// 005ff0a6: XOR EDX,EDX
// 005ff0a8: MOV DL,AL
// 005ff0aa: MOV AL,AH
// 005ff0ac: AND EAX,0xff
// 005ff0b1: SUB EDX,EAX
// 005ff0b3: MOV EAX,EDX
// 005ff0b5: POP ESI
// 005ff0b6: POP EBX
// 005ff0b7: RET
// 005ff0b8: TEST AH,AH
//   Label: LAB_005ff0b8
// 005ff0ba: JNZ 0x005ff0c1
//   XREF to: 005ff0c1 (CONDITIONAL_JUMP)
// 005ff0bc: XOR EAX,EAX
// 005ff0be: POP ESI
// 005ff0bf: POP EBX
// 005ff0c0: RET
// 005ff0c1: INC EBX
//   Label: LAB_005ff0c1
// 005ff0c2: INC ESI
// 005ff0c3: DEC EDX
// 005ff0c4: JZ 0x005ff082
//   XREF to: 005ff082 (CONDITIONAL_JUMP)
// 005ff0c6: JMP 0x005ff087
//   XREF to: 005ff087 (UNCONDITIONAL_JUMP)
