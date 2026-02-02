; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_script.cpp_CScript_FUN_00565130 at 0056516f
;   core_script.cpp_CScript_FUN_00565ae0 at 00565c5a
;   core_script.cpp_CScript_FUN_00565d00 at 00565e1a
;   core_script.cpp_CScript_FUN_00565f70 at 0056605e
;   core_script.cpp_CScript_FUN_00566080 at 0056614d
;   core_script.cpp_CScript_FUN_005677a0 at 005679ee
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 005648d1
;
; Referenced Globals:
;   CEdScrollBar g_ScriptEditorVScrollBar
;   undefined4 g_ScriptEditorVScrollBar.current_value
;   undefined4 g_ScriptEditorVScrollBar.max_value
;   CEdScrollBar g_ScriptEditorHScrollBar
;   undefined4 g_ScriptEditorHScrollBar.current_value
;   undefined4 g_ScriptEditorHScrollBar.max_value
;   int g_CurrentEditingColumn
;   int g_CurrentEditingLine
;
; Called Functions:
;   core_script.cpp_CScript_updateCursorBounds_FUN_00566910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005669a0
        ;   Label: core_script.cpp_CScript_updateScrollPosition_FUN_005669a0
    PUSH ESI                            ; 005669a1
    PUSH EDI                            ; 005669a2
    PUSH EBP                            ; 005669a3
    MOV EDX,dword ptr [ESP + 0x14]      ; 005669a4
    PUSH EDX                            ; 005669a8
    CALL core_script.cpp_CScript_updateCursorBounds_FUN_00566910 ; 005669a9
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateCursorBounds_FUN_00566910(CScript * this_ptr)
    MOV EAX,[0x0310fcdc]                ; 005669ae | g_ScriptEditorVScrollBar.current_value
    MOV ECX,dword ptr [0x0310fce0]      ; 005669b3 | g_ScriptEditorVScrollBar.max_value
    MOV EBX,dword ptr [0x0310fcd8]      ; 005669b9 | g_ScriptEditorVScrollBar
    SUB EAX,ECX                         ; 005669bf
    ADD ESP,0x4                         ; 005669c1
    CMP EAX,EBX                         ; 005669c4
    JL 0x00566a61                       ; 005669c6
        ;   XREF to: 00566a61 (CONDITIONAL_JUMP)  ; LAB_00566a61
    MOV ESI,dword ptr [0x0310fd48]      ; 005669cc | g_CurrentEditingLine
        ;   Label: LAB_005669cc
    CMP ESI,dword ptr [0x0310fcd8]      ; 005669d2 | g_ScriptEditorVScrollBar
    JGE 0x005669e0                      ; 005669d8
        ;   XREF to: 005669e0 (CONDITIONAL_JUMP)  ; LAB_005669e0
    MOV dword ptr [0x0310fcd8],ESI      ; 005669da | g_ScriptEditorVScrollBar
    MOV EDI,dword ptr [0x0310fce0]      ; 005669e0 | g_ScriptEditorVScrollBar.max_value
        ;   Label: LAB_005669e0
    MOV EAX,[0x0310fd48]                ; 005669e6 | g_CurrentEditingLine
    SUB EAX,EDI                         ; 005669eb
    MOV EBP,dword ptr [0x0310fcd8]      ; 005669ed | g_ScriptEditorVScrollBar
    INC EAX                             ; 005669f3
    CMP EAX,EBP                         ; 005669f4
    JLE 0x005669fd                      ; 005669f6
        ;   XREF to: 005669fd (CONDITIONAL_JUMP)  ; LAB_005669fd
    MOV [0x0310fcd8],EAX                ; 005669f8 | g_ScriptEditorVScrollBar
    CMP dword ptr [0x0310fcd8],0x0      ; 005669fd | g_ScriptEditorVScrollBar
        ;   Label: LAB_005669fd
    JL 0x00566a6b                       ; 00566a04
        ;   XREF to: 00566a6b (CONDITIONAL_JUMP)  ; LAB_00566a6b
    MOV ECX,dword ptr [0x0310fd14]      ; 00566a06 | g_ScriptEditorHScrollBar.max_value
        ;   Label: LAB_00566a06
    MOV EAX,[0x0310fd10]                ; 00566a0c | g_ScriptEditorHScrollBar.current_value
    MOV EBX,dword ptr [0x0310fd0c]      ; 00566a11 | g_ScriptEditorHScrollBar
    SUB EAX,ECX                         ; 00566a17
    CMP EAX,EBX                         ; 00566a19
    JGE 0x00566a22                      ; 00566a1b
        ;   XREF to: 00566a22 (CONDITIONAL_JUMP)  ; LAB_00566a22
    MOV [0x0310fd0c],EAX                ; 00566a1d | g_ScriptEditorHScrollBar
    MOV ESI,dword ptr [0x0310fd44]      ; 00566a22 | g_CurrentEditingColumn
        ;   Label: LAB_00566a22
    CMP ESI,dword ptr [0x0310fd0c]      ; 00566a28 | g_ScriptEditorHScrollBar
    JGE 0x00566a36                      ; 00566a2e
        ;   XREF to: 00566a36 (CONDITIONAL_JUMP)  ; LAB_00566a36
    MOV dword ptr [0x0310fd0c],ESI      ; 00566a30 | g_ScriptEditorHScrollBar
    MOV EDI,dword ptr [0x0310fd14]      ; 00566a36 | g_ScriptEditorHScrollBar.max_value
        ;   Label: LAB_00566a36
    MOV EAX,[0x0310fd44]                ; 00566a3c | g_CurrentEditingColumn
    SUB EAX,EDI                         ; 00566a41
    MOV EBP,dword ptr [0x0310fd0c]      ; 00566a43 | g_ScriptEditorHScrollBar
    INC EAX                             ; 00566a49
    CMP EAX,EBP                         ; 00566a4a
    JLE 0x00566a53                      ; 00566a4c
        ;   XREF to: 00566a53 (CONDITIONAL_JUMP)  ; LAB_00566a53
    MOV [0x0310fd0c],EAX                ; 00566a4e | g_ScriptEditorHScrollBar
    CMP dword ptr [0x0310fd0c],0x0      ; 00566a53 | g_ScriptEditorHScrollBar
        ;   Label: LAB_00566a53
    JL 0x00566a75                       ; 00566a5a
        ;   XREF to: 00566a75 (CONDITIONAL_JUMP)  ; LAB_00566a75
    POP EBP                             ; 00566a5c
    POP EDI                             ; 00566a5d
    POP ESI                             ; 00566a5e
    POP EBX                             ; 00566a5f
    RET                                 ; 00566a60
    MOV [0x0310fcd8],EAX                ; 00566a61 | g_ScriptEditorVScrollBar
        ;   Label: LAB_00566a61
    JMP 0x005669cc                      ; 00566a66
        ;   XREF to: 005669cc (UNCONDITIONAL_JUMP)  ; LAB_005669cc
    XOR EDX,EDX                         ; 00566a6b
        ;   Label: LAB_00566a6b
    MOV dword ptr [0x0310fcd8],EDX      ; 00566a6d | g_ScriptEditorVScrollBar
    JMP 0x00566a06                      ; 00566a73
        ;   XREF to: 00566a06 (UNCONDITIONAL_JUMP)  ; LAB_00566a06
    XOR EDX,EDX                         ; 00566a75
        ;   Label: LAB_00566a75
    MOV dword ptr [0x0310fd0c],EDX      ; 00566a77 | g_ScriptEditorHScrollBar
    POP EBP                             ; 00566a7d
    POP EDI                             ; 00566a7e
    POP ESI                             ; 00566a7f
    POP EBX                             ; 00566a80
    RET                                 ; 00566a81

