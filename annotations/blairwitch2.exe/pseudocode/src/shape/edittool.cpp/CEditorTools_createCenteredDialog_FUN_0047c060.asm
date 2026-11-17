; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0047c060(CEditorTools *this_ptr,char *dialog_text)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_text
;
; Referenced Globals:
;   int g_INT_006141b8 = 0x140
;   CBitFont* g_CBitFont_PTR_01c25590
;   int g_INT_01c25f78
;   int g_INT_01c25f7c
;   char* g_CHAR_PTR_01d046a0
;   int g_INT_01d046a4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0047c060
        ;   Label: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0047c060
    PUSH EDI                            ; 0047c061
    CMP dword ptr [0x01c25590],0x0      ; 0047c062 | g_CBitFont_PTR_01c25590
    JZ 0x0047c0ba                       ; 0047c069
        ;   XREF to: 0047c0ba (CONDITIONAL_JUMP)  ; LAB_0047c0ba
    MOV EAX,[0x01c25590]                ; 0047c06b | g_CBitFont_PTR_01c25590
        ;   Label: LAB_0047c06b
    PUSH 0x6a                           ; 0047c070
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047c072
    PUSH EAX                            ; 0047c078
    MOV dword ptr [0x01c25f78],EDX      ; 0047c079 | g_INT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047c07f
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047c084
    MOV ECX,0x5                         ; 0047c087
    MOV EDX,dword ptr [0x006141b8]      ; 0047c08c | g_INT_006141b8
    PUSH 0x0                            ; 0047c092
    MOV ESI,dword ptr [ESP + 0x14]      ; 0047c094
    MOV [0x01c25f7c],EAX                ; 0047c098 | g_INT_01c25f7c
    PUSH ESI                            ; 0047c09d
    SHL EDX,0x2                         ; 0047c09e
    PUSH EAX                            ; 0047c0a1
    MOV EAX,EDX                         ; 0047c0a2
    SAR EDX,0x1f                        ; 0047c0a4
    IDIV ECX                            ; 0047c0a7
    PUSH EAX                            ; 0047c0a9
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047c0aa
    PUSH EDI                            ; 0047c0ae
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0 ; 0047c0af
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047c0b4
    POP EDI                             ; 0047c0b7
    POP ESI                             ; 0047c0b8
    RET                                 ; 0047c0b9
    PUSH EBX                            ; 0047c0ba
        ;   Label: LAB_0047c0ba
    MOV ECX,0x5d1e6f                    ; 0047c0bb
    MOV EBX,0xa0                        ; 0047c0c0
    PUSH 0x5d1e85                       ; 0047c0c5
    MOV dword ptr [0x01d046a0],ECX      ; 0047c0ca | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047c0d0 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 0047c0d6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 0047c0db
    POP EBX                             ; 0047c0de
    JMP 0x0047c06b                      ; 0047c0df
        ;   XREF to: 0047c06b (UNCONDITIONAL_JUMP)  ; LAB_0047c06b

