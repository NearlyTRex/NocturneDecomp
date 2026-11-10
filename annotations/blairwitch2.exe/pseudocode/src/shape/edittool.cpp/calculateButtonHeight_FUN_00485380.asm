; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int shape_edittool_cpp_calculateButtonHeight_FUN_00485380(char *param_1)
;
;
; XREF[6]:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00 at 00482e88
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004831d0 at 0048330b
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c2f7
;   shape_edittool.cpp_FUN_0047eff0 at 0047f046
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047b868
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b289
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485380
        ;   Label: shape_edittool.cpp_calculateButtonHeight_FUN_00485380
    PUSH EDI                            ; 00485381
    MOV EBX,dword ptr [ESP + 0xc]       ; 00485382
    CMP dword ptr [0x01c25590],0x0      ; 00485386 | DAT_01c25590
    JNZ 0x004853b4                      ; 0048538d
        ;   XREF to: 004853b4 (CONDITIONAL_JUMP)  ; LAB_004853b4
    PUSH ESI                            ; 0048538f
    MOV ECX,0x5d1e6f                    ; 00485390 | = "..\\shape\\edittool.cpp"
    MOV ESI,0xa0                        ; 00485395
    PUSH 0x5d1e85                       ; 0048539a | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0048539f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004853a5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004853ab
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004853b0
    POP ESI                             ; 004853b3
    MOV EAX,[0x01c25590]                ; 004853b4 | DAT_01c25590
        ;   Label: LAB_004853b4
    PUSH 0x6a                           ; 004853b9
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 004853bb
    PUSH EAX                            ; 004853c1
    MOV dword ptr [0x01c25f78],ECX      ; 004853c2 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004853c8
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004853cd
    MOV [0x01c25f7c],EAX                ; 004853d0 | DAT_01c25f7c
    TEST EBX,EBX                        ; 004853d5
    JNZ 0x004853fb                      ; 004853d7
        ;   XREF to: 004853fb (CONDITIONAL_JUMP)  ; LAB_004853fb
    MOV ECX,dword ptr [0x01c25590]      ; 004853d9 | DAT_01c25590
    MOV ECX,dword ptr [ECX + 0x41ec]    ; 004853df
    MOV EAX,[0x006141bc]                ; 004853e5 | DAT_006141bc
        ;   Label: LAB_004853e5
    MOV EDX,EAX                         ; 004853ea
    MOV EBX,0x50                        ; 004853ec
    SAR EDX,0x1f                        ; 004853f1
    IDIV EBX                            ; 004853f4
    ADD EAX,ECX                         ; 004853f6
    POP EDI                             ; 004853f8
    POP EBX                             ; 004853f9
    RET                                 ; 004853fa
    PUSH EBX                            ; 004853fb
        ;   Label: LAB_004853fb
    MOV EDI,dword ptr [0x01c25590]      ; 004853fc | DAT_01c25590
    PUSH EDI                            ; 00485402
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0 ; 00485403
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 00485408
    MOV ECX,EAX                         ; 0048540b
    JMP 0x004853e5                      ; 0048540d
        ;   XREF to: 004853e5 (UNCONDITIONAL_JUMP)  ; LAB_004853e5

