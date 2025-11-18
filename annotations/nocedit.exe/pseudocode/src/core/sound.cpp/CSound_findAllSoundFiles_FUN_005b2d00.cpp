// Name: core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00
// Address: 005b2d00
// Address Range: [[005b2d00, 005b2d57]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00(CSound * this_ptr)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 0050810c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wav_006524ee
//   TerminatedCString s_sound_006524f4
//   TerminatedCString s_mp3_006524fa
//   TerminatedCString s_sound_00652500
//   CStrList CStrList_03f6b128
// Function calls:
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
//   sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_findAllSoundFiles_FUN_005b2d00(CSound *this_ptr)

{
  uint uVar1;
  
  if (CStrList_03f6b128.item_count == 0) {
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              (&CStrList_03f6b128,"sound","*.wav");
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              (&CStrList_03f6b128,"sound","*.mp3");
  }
  sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
  if (uVar1 == 0) {
    return;
  }
  sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
  return;
}


// Assembly code:
// 005b2d00: MOV EAX,[0x03f6b128]
//   Label: core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00
//   XREF to: 03f6b128 (READ)
// 005b2d05: TEST EAX,EAX
// 005b2d07: JNZ 0x005b2d37
//   XREF to: 005b2d37 (CONDITIONAL_JUMP)
// 005b2d09: PUSH 0x6524ee
//   XREF to: 006524ee (DATA)
// 005b2d0e: PUSH 0x6524f4
//   XREF to: 006524f4 (DATA)
// 005b2d13: PUSH 0x3f6b128
//   XREF to: 03f6b128 (DATA)
// 005b2d18: CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
// 005b2d1d: ADD ESP,0xc
// 005b2d20: PUSH 0x6524fa
//   XREF to: 006524fa (DATA)
// 005b2d25: PUSH 0x652500
//   XREF to: 00652500 (DATA)
// 005b2d2a: PUSH 0x3f6b128
//   XREF to: 03f6b128 (DATA)
// 005b2d2f: CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
// 005b2d34: ADD ESP,0xc
// 005b2d37: CALL sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0
//   Label: LAB_005b2d37
//   XREF to: 005ab5b0 (UNCONDITIONAL_CALL)
// 005b2d3c: CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 005b2d41: TEST EAX,EAX
// 005b2d43: JNZ 0x005b2d46
//   XREF to: 005b2d46 (CONDITIONAL_JUMP)
// 005b2d45: RET
// 005b2d46: PUSH 0xac44
//   Label: LAB_005b2d46
// 005b2d4b: PUSH 0x2
// 005b2d4d: PUSH 0x10
// 005b2d4f: CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
//   XREF to: 005ab170 (UNCONDITIONAL_CALL)
// 005b2d54: ADD ESP,0xc
// 005b2d57: RET
