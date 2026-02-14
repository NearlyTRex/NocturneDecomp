; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_clampCursorToView_FUN_00566880(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 00565197
;
; Referenced Globals:
;   CEdScrollBar g_ScriptEditorVScrollBar
;   undefined4 g_ScriptEditorVScrollBar.max_value
;   CEdScrollBar g_ScriptEditorHScrollBar
;   undefined4 g_ScriptEditorHScrollBar.max_value
;   int g_CurrentEditingColumn
;   int g_CurrentEditingLine
;
; Called Functions:
;   core_script.cpp_CScript_updateCursorBounds_FUN_00566910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566880
        ;   Label: core_script.cpp_CScript_clampCursorToView_FUN_00566880
    PUSH ESI                            ; 00566881
    PUSH EDI                            ; 00566882
    PUSH EBP                            ; 00566883
    MOV EDX,dword ptr [ESP + 0x14]      ; 00566884
    PUSH EDX                            ; 00566888
    CALL core_script.cpp_CScript_updateCursorBounds_FUN_00566910 ; 00566889
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateCursorBounds_FUN_00566910(CScript * this_ptr)
    MOV EAX,[0x0310fcd8]                ; 0056688e | g_ScriptEditorVScrollBar
    MOV ECX,dword ptr [0x0310fce0]      ; 00566893 | g_ScriptEditorVScrollBar.max_value
    MOV EBX,dword ptr [0x0310fd48]      ; 00566899 | g_CurrentEditingLine
    ADD EAX,ECX                         ; 0056689f
    ADD ESP,0x4                         ; 005668a1
    CMP EAX,EBX                         ; 005668a4
    JLE 0x005668ff                      ; 005668a6
        ;   XREF to: 005668ff (CONDITIONAL_JUMP)  ; LAB_005668ff
    MOV ESI,dword ptr [0x0310fcd8]      ; 005668a8 | g_ScriptEditorVScrollBar
        ;   Label: LAB_005668a8
    CMP ESI,dword ptr [0x0310fd48]      ; 005668ae | g_CurrentEditingLine
    JLE 0x005668bc                      ; 005668b4
        ;   XREF to: 005668bc (CONDITIONAL_JUMP)  ; LAB_005668bc
    MOV dword ptr [0x0310fd48],ESI      ; 005668b6 | g_CurrentEditingLine
    MOV EDI,dword ptr [0x0310fd14]      ; 005668bc | g_ScriptEditorHScrollBar.max_value
        ;   Label: LAB_005668bc
    MOV EAX,[0x0310fd0c]                ; 005668c2 | g_ScriptEditorHScrollBar
    MOV EBP,dword ptr [0x0310fd44]      ; 005668c7 | g_CurrentEditingColumn
    ADD EAX,EDI                         ; 005668cd
    CMP EAX,EBP                         ; 005668cf
    JG 0x005668d9                       ; 005668d1
        ;   XREF to: 005668d9 (CONDITIONAL_JUMP)  ; LAB_005668d9
    DEC EAX                             ; 005668d3
    MOV [0x0310fd44],EAX                ; 005668d4 | g_CurrentEditingColumn
    MOV EDX,dword ptr [0x0310fd0c]      ; 005668d9 | g_ScriptEditorHScrollBar
        ;   Label: LAB_005668d9
    CMP EDX,dword ptr [0x0310fd44]      ; 005668df | g_CurrentEditingColumn
    JLE 0x005668ed                      ; 005668e5
        ;   XREF to: 005668ed (CONDITIONAL_JUMP)  ; LAB_005668ed
    MOV dword ptr [0x0310fd44],EDX      ; 005668e7 | g_CurrentEditingColumn
    MOV ECX,dword ptr [ESP + 0x14]      ; 005668ed
        ;   Label: LAB_005668ed
    PUSH ECX                            ; 005668f1
    CALL core_script.cpp_CScript_updateCursorBounds_FUN_00566910 ; 005668f2
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateCursorBounds_FUN_00566910(CScript * this_ptr)
    ADD ESP,0x4                         ; 005668f7
    POP EBP                             ; 005668fa
    POP EDI                             ; 005668fb
    POP ESI                             ; 005668fc
    POP EBX                             ; 005668fd
    RET                                 ; 005668fe
    DEC EAX                             ; 005668ff
        ;   Label: LAB_005668ff
    MOV [0x0310fd48],EAX                ; 00566900 | g_CurrentEditingLine
    JMP 0x005668a8                      ; 00566905
        ;   XREF to: 005668a8 (UNCONDITIONAL_JUMP)  ; LAB_005668a8

