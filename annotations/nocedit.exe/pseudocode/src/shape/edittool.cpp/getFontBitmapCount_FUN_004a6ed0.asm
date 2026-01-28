; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont *font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; XREF[25]:
;   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 at 0056691a
;   core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0 at 00565ab3
;   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 at 0055a390
;   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 at 00559e6b
;   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 at 0055a2b2
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 00565423
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564fc1
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30 at 00566b47
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0 at 005662c6
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90 at 00566aa7
;   ... and 15 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6ed0
        ;   Label: shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
    MOV EAX,dword ptr [EAX]             ; 004a6ed4
    RET                                 ; 004a6ed6

