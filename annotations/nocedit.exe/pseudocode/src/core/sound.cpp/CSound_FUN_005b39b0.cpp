// Name: core_sound.cpp_CSound_FUN_005b39b0
// Address: 005b39b0
// Address Range: [[005b39b0, 005b3a11]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_FUN_005b39b0(CSound * this_ptr)
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055ea8d [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055a540 (0055a540) at 0055a673 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet g_CDemonSetInstance
//   char[40] g_SoundAmbientSoundName
//   undefined4 DAT_03f6b781
//   undefined4 DAT_03f6b782
//   undefined4 DAT_03f6b783
//   int g_SoundAmbientSfxHandle
//   int g_SoundAudioInitialized
// Function calls:
//   core_sound.cpp_CSound_killSfx_FUN_005b3b90
//   core_sound.cpp_CSound_playSfx_FUN_005b3a20

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_FUN_005b39b0(CSound *this_ptr)

{
  char cVar1;
  int extraout_EAX;
  char *pcVar2;
  CSound *in_stack_00000008;
  char *in_stack_0000000c;
  
  core_sound_cpp_CSound_killSfx_FUN_005b3b90(this_ptr,g_SoundAmbientSfxHandle);
  pcVar2 = g_SoundAmbientSoundName;
  do {
    cVar1 = *in_stack_0000000c;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  if (g_SoundAudioInitialized == 0) {
    return;
  }
  core_sound_cpp_CSound_playSfx_FUN_005b3a20
            (in_stack_00000008,(int)g_CDemonSetPtr,g_SoundAmbientSoundName);
  g_SoundAmbientSfxHandle = extraout_EAX;
  return;
}


// Assembly code:
// 005b39b0: PUSH ESI
//   Label: core_sound.cpp_CSound_FUN_005b39b0
// 005b39b1: PUSH EDI
// 005b39b2: MOV EDX,dword ptr [0x03f6b7a8]
//   XREF to: 03f6b7a8 (READ)
// 005b39b8: PUSH EDX
// 005b39b9: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005b39bd: PUSH ECX
// 005b39be: CALL core_sound.cpp_CSound_killSfx_FUN_005b3b90
//   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
// 005b39c3: ADD ESP,0x8
// 005b39c6: MOV EDI,0x3f6b780
//   XREF to: 03f6b780 (DATA)
// 005b39cb: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005b39cf: PUSH EDI
//   XREF to: 03f6b780 (DATA)
// 005b39d0: MOV AL,byte ptr [ESI]
//   Label: LAB_005b39d0
// 005b39d2: MOV byte ptr [EDI],AL
//   XREF to: 03f6b780 (WRITE)
//   XREF to: 03f6b782 (WRITE)
// 005b39d4: CMP AL,0x0
// 005b39d6: JZ 0x005b39e8
//   XREF to: 005b39e8 (CONDITIONAL_JUMP)
// 005b39d8: MOV AL,byte ptr [ESI + 0x1]
// 005b39db: ADD ESI,0x2
// 005b39de: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 03f6b781 (WRITE)
//   XREF to: 03f6b783 (WRITE)
// 005b39e1: ADD EDI,0x2
// 005b39e4: CMP AL,0x0
// 005b39e6: JNZ 0x005b39d0
//   XREF to: 005b39d0 (CONDITIONAL_JUMP)
// 005b39e8: POP EDI
//   Label: LAB_005b39e8
// 005b39e9: CMP dword ptr [0x03f6b7ac],0x0
//   XREF to: 03f6b7ac (READ)
// 005b39f0: JNZ 0x005b39f5
//   XREF to: 005b39f5 (CONDITIONAL_JUMP)
// 005b39f2: POP EDI
// 005b39f3: POP ESI
// 005b39f4: RET
// 005b39f5: PUSH EDI
//   Label: LAB_005b39f5
//   XREF to: 03f6b780 (DATA)
// 005b39f6: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005b39fc: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005b39fd: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b3a01: PUSH EDI
// 005b3a02: CALL core_sound.cpp_CSound_playSfx_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 005b3a07: ADD ESP,0xc
// 005b3a0a: MOV [0x03f6b7a8],EAX
//   XREF to: 03f6b7a8 (WRITE)
// 005b3a0f: POP EDI
// 005b3a10: POP ESI
// 005b3a11: RET
