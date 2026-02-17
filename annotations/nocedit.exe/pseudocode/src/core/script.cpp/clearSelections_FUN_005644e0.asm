; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_clearSelections_FUN_005644e0(void)
;
;
; XREF[8]:
;   core_script.cpp_CScript_browseEventXRefs_FUN_005677a0 at 005679df
;   core_script.cpp_CScript_checkSyntax_FUN_00566080 at 0056612e
;   core_script.cpp_CScript_editParameterAtPosition_FUN_00565ae0 at 00565c4b
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564d2a
;   core_script.cpp_CScript_executeContextAction_FUN_00565d00 at 00565e0b
;   core_script.cpp_CScript_initEditorLayout_FUN_00566660 at 005667e3
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 00565a62
;   core_script.cpp_CScript_setParameterValue_FUN_00565f70 at 0056604f
;
; Referenced Globals:
;   int g_SelectionAnchorColumn
;   int g_SelectionAnchorLine
;
; *****************************************************************************

section .text

    MOV EDX,0xffffffff                  ; 005644e0
        ;   Label: core_script.cpp_clearSelections_FUN_005644e0
    MOV dword ptr [0x0310fd50],EDX      ; 005644e5 | g_SelectionAnchorLine
    MOV dword ptr [0x0310fd4c],EDX      ; 005644eb | g_SelectionAnchorColumn

