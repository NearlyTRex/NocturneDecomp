; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004b0480(CBitFont *param_1)
;
;
; XREF[2]:
;   engine_font.cpp_CBitFont_dtor_FUN_004af7b0 at 004af7b6
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004b0190 at 004b0198
;
; Called Functions:
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a3770
;   engine_font.cpp_CBitFont_reset_FUN_004af7d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0480
        ;   Label: engine_font.cpp_FUN_004b0480
    PUSH ESI                            ; 004b0481
    PUSH EDI                            ; 004b0482
    MOV EDI,dword ptr [ESP + 0x10]      ; 004b0483
    MOV EBX,EDI                         ; 004b0487
    LEA ESI,[EDI + 0x10]                ; 004b0489
    MOV EDX,dword ptr [EBX + 0x194]     ; 004b048c
        ;   Label: LAB_004b048c
    PUSH EDX                            ; 004b0492
    ADD EBX,0x4                         ; 004b0493
    CALL crt_unknown.c_FUN_005a30b6     ; 004b0496
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004b049b
    MOV dword ptr [EBX + 0x190],0x0     ; 004b049e
    CMP EBX,ESI                         ; 004b04a8
    JNZ 0x004b048c                      ; 004b04aa
        ;   XREF to: 004b048c (CONDITIONAL_JUMP)  ; LAB_004b048c
    MOV ECX,dword ptr [EDI + 0x1dcc]    ; 004b04ac
    TEST ECX,ECX                        ; 004b04b2
    JNZ 0x004b04cd                      ; 004b04b4
        ;   XREF to: 004b04cd (CONDITIONAL_JUMP)  ; LAB_004b04cd
    MOV ESI,dword ptr [EDI + 0x1dd4]    ; 004b04b6
        ;   Label: LAB_004b04b6
    TEST ESI,ESI                        ; 004b04bc
    JNZ 0x004b04e2                      ; 004b04be
        ;   XREF to: 004b04e2 (CONDITIONAL_JUMP)  ; LAB_004b04e2
    PUSH EDI                            ; 004b04c0
    CALL engine_font.cpp_CBitFont_reset_FUN_004af7d0 ; 004b04c1
        ;   XREF to: 004af7d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_reset_FUN_004af7d0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004b04c6
    POP EDI                             ; 004b04c9
    POP ESI                             ; 004b04ca
    POP EBX                             ; 004b04cb
    RET                                 ; 004b04cc
    PUSH ECX                            ; 004b04cd
        ;   Label: LAB_004b04cd
    CALL crt_unknown.c_FUN_005a3770     ; 004b04ce
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004b04d3
    MOV dword ptr [EDI + 0x1dcc],0x0    ; 004b04d6
    JMP 0x004b04b6                      ; 004b04e0
        ;   XREF to: 004b04b6 (UNCONDITIONAL_JUMP)  ; LAB_004b04b6
    PUSH ESI                            ; 004b04e2
        ;   Label: LAB_004b04e2
    CALL crt_unknown.c_FUN_005a3770     ; 004b04e3
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004b04e8
    PUSH EDI                            ; 004b04eb
    CALL engine_font.cpp_CBitFont_reset_FUN_004af7d0 ; 004b04ec
        ;   XREF to: 004af7d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_reset_FUN_004af7d0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004b04f1
    POP EDI                             ; 004b04f4
    POP ESI                             ; 004b04f5
    POP EBX                             ; 004b04f6
    RET                                 ; 004b04f7

