; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[25]:
;   core_script.cpp_CScript_browseEventXRefs_FUN_005677a0 at 00567a36
;   core_script.cpp_CScript_buildParsedLines_FUN_0055a370 at 0055a390
;   core_script.cpp_CScript_checkSyntax_FUN_00566080 at 005660ae
;   core_script.cpp_CScript_drawLine_FUN_005664d0 at 005664ef
;   core_script.cpp_CScript_editParameterAtPosition_FUN_00565ae0 at 00565b09
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564fc1
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30 at 00566b47
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0 at 005662c6
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90 at 00566aa7
;   core_script.cpp_CScript_executeContextAction_FUN_00565d00 at 00565d19
;   ... and 15 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6ed0
        ;   Label: shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
    MOV EAX,dword ptr [EAX]             ; 004a6ed4
    RET                                 ; 004a6ed6

