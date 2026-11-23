; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_0049d9e0(char *button_text)
;
; Parameters:
; char *           Stack[0x4]:4   button_text
;
; XREF[6]:
;   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_00497660 at 004976b6
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_0049b060 at 0049b4e8
;   shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830 at 0049b96b
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493da8
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690 at 004948a1
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 004937b9
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   int g_INT_0061b49c = 0xc8
;   CBitFont* g_CBitFont_PTR_01c3eb50
;   int g_EditorFontMaxCharWidth
;   int g_INT_01c3f53c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d9e0
        ;   Label: shape_edittool.cpp_calculateButtonHeight_FUN_0049d9e0
    PUSH EDI                            ; 0049d9e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049d9e2
    CMP dword ptr [0x01c3eb50],0x0      ; 0049d9e6 | g_CBitFont_PTR_01c3eb50
    JNZ 0x0049da14                      ; 0049d9ed
        ;   XREF to: 0049da14 (CONDITIONAL_JUMP)  ; LAB_0049da14
    PUSH ESI                            ; 0049d9ef
    MOV ECX,0x5dbc68                    ; 0049d9f0 | = "..\\shape\\edittool.cpp"
    MOV ESI,0xa4                        ; 0049d9f5
    PUSH 0x5dbc7e                       ; 0049d9fa | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 0049d9ff | g_CurrentFilename
    MOV dword ptr [0x01d1d404],ESI      ; 0049da05 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0049da0b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0049da10
    POP ESI                             ; 0049da13
    MOV EAX,[0x01c3eb50]                ; 0049da14 | g_CBitFont_PTR_01c3eb50
        ;   Label: LAB_0049da14
    PUSH 0x6a                           ; 0049da19
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 0049da1b
    PUSH EAX                            ; 0049da21
    MOV dword ptr [0x01c3f538],ECX      ; 0049da22 | g_EditorFontMaxCharWidth
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0049da28
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049da2d
    MOV [0x01c3f53c],EAX                ; 0049da30 | g_INT_01c3f53c
    TEST EBX,EBX                        ; 0049da35
    JNZ 0x0049da5b                      ; 0049da37
        ;   XREF to: 0049da5b (CONDITIONAL_JUMP)  ; LAB_0049da5b
    MOV ECX,dword ptr [0x01c3eb50]      ; 0049da39 | g_CBitFont_PTR_01c3eb50
    MOV ECX,dword ptr [ECX + 0x41ec]    ; 0049da3f
    MOV EAX,[0x0061b49c]                ; 0049da45 | g_INT_0061b49c
        ;   Label: LAB_0049da45
    MOV EDX,EAX                         ; 0049da4a
    MOV EBX,0x50                        ; 0049da4c
    SAR EDX,0x1f                        ; 0049da51
    IDIV EBX                            ; 0049da54
    ADD EAX,ECX                         ; 0049da56
    POP EDI                             ; 0049da58
    POP EBX                             ; 0049da59
    RET                                 ; 0049da5a
    PUSH EBX                            ; 0049da5b
        ;   Label: LAB_0049da5b
    MOV EDI,dword ptr [0x01c3eb50]      ; 0049da5c | g_CBitFont_PTR_01c3eb50
    PUSH EDI                            ; 0049da62
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50 ; 0049da63
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0049da68
    MOV ECX,EAX                         ; 0049da6b
    JMP 0x0049da45                      ; 0049da6d
        ;   XREF to: 0049da45 (UNCONDITIONAL_JUMP)  ; LAB_0049da45

