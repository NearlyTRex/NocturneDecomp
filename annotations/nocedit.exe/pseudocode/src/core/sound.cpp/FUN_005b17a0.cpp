// Name: core_sound.cpp_FUN_005b17a0
// Address: 005b17a0
// Address Range: [[005b17a0, 005b17ce]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b17a0()
// Globals:
//   TerminatedCString s_wav_006524ee
//   TerminatedCString s_sound_006524f4
//   TerminatedCString s_mp3_006524fa
//   TerminatedCString s_sound_00652500
//   CStrList CStrList_03f6b128
// Function calls:
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0

#include "nocturne.h"

void core_sound_cpp_FUN_005b17a0(void)

{
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            (&CStrList_03f6b128,"sound","*.wav");
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            (&CStrList_03f6b128,"sound","*.mp3");
  return;
}


// Assembly code:
// 005b17a0: PUSH 0x6524ee
//   Label: core_sound.cpp_FUN_005b17a0
//   XREF to: 006524ee (DATA)
// 005b17a5: PUSH 0x6524f4
//   XREF to: 006524f4 (DATA)
// 005b17aa: PUSH 0x3f6b128
//   XREF to: 03f6b128 (DATA)
// 005b17af: CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
// 005b17b4: ADD ESP,0xc
// 005b17b7: PUSH 0x6524fa
//   XREF to: 006524fa (DATA)
// 005b17bc: PUSH 0x652500
//   XREF to: 00652500 (DATA)
// 005b17c1: PUSH 0x3f6b128
//   XREF to: 03f6b128 (DATA)
// 005b17c6: CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
// 005b17cb: ADD ESP,0xc
// 005b17ce: RET
