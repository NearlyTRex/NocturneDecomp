; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_clearSelections_FUN_005644e0(void)
;
;
; XREF[8]:
;   core_script.cpp_CScript_FUN_00565130 at 00565a62
;   core_script.cpp_CScript_FUN_00565f70 at 0056604f
;   core_script.cpp_CScript_FUN_00566080 at 0056612e
;   core_script.cpp_CScript_FUN_005677a0 at 005679df
;   core_script.cpp_CScript_editParameterAtPosition_FUN_00565ae0 at 00565c4b
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564d2a
;   core_script.cpp_CScript_executeContextAction_FUN_00565d00 at 00565e0b
;   core_script.cpp_CScript_initEditorLayout_FUN_00566660 at 005667e3
;
; Referenced Globals:
;   int g_CurrentEditingColumn
;   int g_SelectionAnchorColumn
;   int g_SelectionAnchorLine
;
; *****************************************************************************

section .text

    MOV EDX,0xffffffff                  ; 0056449b
        ;   Label: LAB_0056449b
    MOV EBX,EDX                         ; 005644a0
    MOV ECX,EDX                         ; 005644a2
    MOV EBP,EDX                         ; 005644a4
    JMP 0x00564535                      ; 005644a6
        ;   XREF to: 00564535 (UNCONDITIONAL_JUMP)  ; LAB_00564535
    MOV EDX,dword ptr [0x0310fd44]      ; 005644ab | g_CurrentEditingColumn
        ;   Label: LAB_005644ab
    MOV EBX,EDI                         ; 005644b1
    MOV EBP,ESI                         ; 005644b3
    JMP 0x00564535                      ; 005644b5
        ;   XREF to: 00564535 (UNCONDITIONAL_JUMP)  ; LAB_00564535
    MOV EBX,dword ptr [0x0310fd44]      ; 005644ba | g_CurrentEditingColumn
        ;   Label: LAB_005644ba
    MOV EBP,ECX                         ; 005644c0
    MOV EDX,EDI                         ; 005644c2
    MOV ECX,ESI                         ; 005644c4
    JMP 0x00564535                      ; 005644c6
        ;   XREF to: 00564535 (UNCONDITIONAL_JUMP)  ; LAB_00564535
    MOV EDX,EDI                         ; 005644cb
        ;   Label: LAB_005644cb
    MOV EBX,EAX                         ; 005644cd
    JMP 0x00564535                      ; 005644cf
        ;   XREF to: 00564535 (UNCONDITIONAL_JUMP)  ; LAB_00564535
    MOV EDX,0xffffffff                  ; 005644e0
        ;   Label: core_script.cpp_clearSelections_FUN_005644e0
    MOV dword ptr [0x0310fd50],EDX      ; 005644e5 | g_SelectionAnchorLine
    MOV dword ptr [0x0310fd4c],EDX      ; 005644eb | g_SelectionAnchorColumn

