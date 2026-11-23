; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0047d1a0(CEditorTools *this_ptr,char *dialog_text)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_text
;
; Referenced Globals:
;   int g_INT_005fba18 = 0x140
;   CBitFont* g_CBitFont_PTR_01c5b0e0
;   int g_EditorFontMaxCharWidth
;   int g_INT_01c5bae4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0047d1a0
        ;   Label: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0047d1a0
    PUSH EDI                            ; 0047d1a1
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047d1a2 | g_CBitFont_PTR_01c5b0e0
    JZ 0x0047d1fa                       ; 0047d1a9
        ;   XREF to: 0047d1fa (CONDITIONAL_JUMP)  ; LAB_0047d1fa
    MOV EAX,[0x01c5b0e0]                ; 0047d1ab | g_CBitFont_PTR_01c5b0e0
        ;   Label: LAB_0047d1ab
    PUSH 0x6a                           ; 0047d1b0
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047d1b2
    PUSH EAX                            ; 0047d1b8
    MOV dword ptr [0x01c5bae0],EDX      ; 0047d1b9 | g_EditorFontMaxCharWidth
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 0047d1bf
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047d1c4
    MOV ECX,0x5                         ; 0047d1c7
    MOV EDX,dword ptr [0x005fba18]      ; 0047d1cc | g_INT_005fba18
    PUSH 0x0                            ; 0047d1d2
    MOV ESI,dword ptr [ESP + 0x14]      ; 0047d1d4
    MOV [0x01c5bae4],EAX                ; 0047d1d8 | g_INT_01c5bae4
    PUSH ESI                            ; 0047d1dd
    SHL EDX,0x2                         ; 0047d1de
    PUSH EAX                            ; 0047d1e1
    MOV EAX,EDX                         ; 0047d1e2
    SAR EDX,0x1f                        ; 0047d1e4
    IDIV ECX                            ; 0047d1e7
    PUSH EAX                            ; 0047d1e9
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047d1ea
    PUSH EDI                            ; 0047d1ee
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0 ; 0047d1ef
        ;   XREF to: 0047f3e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047d1f4
    POP EDI                             ; 0047d1f7
    POP ESI                             ; 0047d1f8
    RET                                 ; 0047d1f9
    PUSH EBX                            ; 0047d1fa
        ;   Label: LAB_0047d1fa
    MOV ECX,0x5bcd25                    ; 0047d1fb
    MOV EBX,0xa7                        ; 0047d200
    PUSH 0x5bcd3b                       ; 0047d205
    MOV dword ptr [0x01d71de0],ECX      ; 0047d20a | g_CurrentFilename
    MOV dword ptr [0x01d71de4],EBX      ; 0047d210 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 0047d216
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 0047d21b
    POP EBX                             ; 0047d21e
    JMP 0x0047d1ab                      ; 0047d21f
        ;   XREF to: 0047d1ab (UNCONDITIONAL_JUMP)  ; LAB_0047d1ab

