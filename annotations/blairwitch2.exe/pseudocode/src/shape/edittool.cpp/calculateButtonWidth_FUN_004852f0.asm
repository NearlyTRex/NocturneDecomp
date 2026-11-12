; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_004852f0(char *button_text)
;
; Parameters:
; char *           Stack[0x4]:4   button_text
;
; XREF[4]:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00 at 00482e24
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c248
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047b857
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b2d2
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   undefined4 DAT_005d2b04
;   undefined4 DAT_006141b8
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004852f0
        ;   Label: shape_edittool.cpp_calculateButtonWidth_FUN_004852f0
    PUSH EDI                            ; 004852f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004852f2
    CMP dword ptr [0x01c25590],0x0      ; 004852f6 | DAT_01c25590
    JNZ 0x00485324                      ; 004852fd
        ;   XREF to: 00485324 (CONDITIONAL_JUMP)  ; LAB_00485324
    PUSH ESI                            ; 004852ff
    MOV ECX,0x5d1e6f                    ; 00485300 | = "..\\shape\\edittool.cpp"
    MOV ESI,0xa0                        ; 00485305
    PUSH 0x5d1e85                       ; 0048530a | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0048530f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00485315 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0048531b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00485320
    POP ESI                             ; 00485323
    MOV EAX,[0x01c25590]                ; 00485324 | DAT_01c25590
        ;   Label: LAB_00485324
    PUSH 0x6a                           ; 00485329
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 0048532b
    PUSH EAX                            ; 00485331
    MOV dword ptr [0x01c25f78],ECX      ; 00485332 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 00485338
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0048533d
    MOV [0x01c25f7c],EAX                ; 00485340 | DAT_01c25f7c
    TEST EBX,EBX                        ; 00485345
    JNZ 0x0048534e                      ; 00485347
        ;   XREF to: 0048534e (CONDITIONAL_JUMP)  ; LAB_0048534e
    MOV EBX,0x5d2b04                    ; 00485349 | DAT_005d2b04
    PUSH EBX                            ; 0048534e | DAT_005d2b04
        ;   Label: LAB_0048534e
    MOV EDI,dword ptr [0x01c25590]      ; 0048534f | DAT_01c25590
    PUSH EDI                            ; 00485355
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 00485356
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    MOV ECX,EAX                         ; 0048535b
    MOV EAX,[0x006141b8]                ; 0048535d | DAT_006141b8
    MOV EDX,EAX                         ; 00485362
    MOV EBX,0x28                        ; 00485364
    SAR EDX,0x1f                        ; 00485369
    IDIV EBX                            ; 0048536c
    ADD ESP,0x8                         ; 0048536e
    ADD EAX,ECX                         ; 00485371
    POP EDI                             ; 00485373
    POP EBX                             ; 00485374
    RET                                 ; 00485375

