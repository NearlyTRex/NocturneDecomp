; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_004929e0(void)
;
;
; Referenced Globals:
;   CBitFont* g_CBitFont_PTR_01c3eb50
;   int g_EditorFontMaxCharWidth
;   int g_INT_01c3f53c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c3eb50],0x0      ; 004929e0 | g_CBitFont_PTR_01c3eb50
        ;   Label: shape_edittool.cpp_initEditorFontMetrics_FUN_004929e0
    JZ 0x00492a0b                       ; 004929e7
        ;   XREF to: 00492a0b (CONDITIONAL_JUMP)  ; LAB_00492a0b
    MOV EAX,[0x01c3eb50]                ; 004929e9 | g_CBitFont_PTR_01c3eb50
        ;   Label: LAB_004929e9
    PUSH 0x6a                           ; 004929ee
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 004929f0
    PUSH EAX                            ; 004929f6
    MOV dword ptr [0x01c3f538],EDX      ; 004929f7 | g_EditorFontMaxCharWidth
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004929fd
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00492a02
    MOV [0x01c3f53c],EAX                ; 00492a05 | g_INT_01c3f53c
    RET                                 ; 00492a0a
    PUSH EBX                            ; 00492a0b
        ;   Label: LAB_00492a0b
    MOV ECX,0x5dbc68                    ; 00492a0c
    MOV EBX,0xa4                        ; 00492a11
    PUSH 0x5dbc7e                       ; 00492a16
    MOV dword ptr [0x01d1d400],ECX      ; 00492a1b | g_CurrentFilename
    MOV dword ptr [0x01d1d404],EBX      ; 00492a21 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00492a27
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 00492a2c
    POP EBX                             ; 00492a2f
    JMP 0x004929e9                      ; 00492a30
        ;   XREF to: 004929e9 (UNCONDITIONAL_JUMP)  ; LAB_004929e9

