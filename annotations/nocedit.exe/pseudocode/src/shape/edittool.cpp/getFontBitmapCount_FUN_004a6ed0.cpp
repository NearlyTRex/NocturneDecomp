// Name: shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
// Address: 004a6ed0
// Address Range: [[004a6ed0, 004a6ed6]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
// Cross-references:
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 (00566910) at 0056691a [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0 (00565aa0) at 00565ab3 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 (0055a370) at 0055a390 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559e6b [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a2b2 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565423 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564fc1 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30 (00566b30) at 00566b47 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0 (005662a0) at 005662c6 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90 (00566a90) at 00566aa7 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_unk50_FUN_00566660 (00566660) at 005667c9 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563e9f [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565b09 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565d19 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565e70 (00565e70) at 00565e99 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 00565f8e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566080 (00566080) at 005660ae [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566180 (00566180) at 005661c6 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566230 (00566230) at 00566248 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005664d0 (005664d0) at 005664ef [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566800 (00566800) at 00566819 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566cc0 (00566cc0) at 00566d61 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005671a0 (005671a0) at 005671f8 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567310 (00567310) at 0056745c [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 00567a36 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont *font_ptr)

{
  return font_ptr->bitmap_count;
}


// Assembly code:
// 004a6ed0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: Stack[0x4] (READ)
// 004a6ed4: MOV EAX,dword ptr [EAX]
// 004a6ed6: RET
