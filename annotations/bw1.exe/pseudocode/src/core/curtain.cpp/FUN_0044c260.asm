; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_FUN_0044c260(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7442
;   undefined4 DAT_005d744a
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0044c260
        ;   Label: core_curtain.cpp_FUN_0044c260
    SUB ESP,0x18                        ; 0044c261
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044c264
    MOV EAX,ESI                         ; 0044c268
    FLD double ptr [0x005d7442]         ; 0044c26a | DAT_005d7442
    FLD float ptr [EDX + 0x158]         ; 0044c270
    FMUL ST1                            ; 0044c276
    FLD float ptr [EDX + 0x160]         ; 0044c278
    FMUL ST2                            ; 0044c27e
    FLD float ptr [EDX + 0x158]         ; 0044c280
    FCHS                                ; 0044c286
    FMUL ST3                            ; 0044c288
    FLD float ptr [EDX + 0x160]         ; 0044c28a
    FCHS                                ; 0044c290
    FMULP ST4                           ; 0044c292
    FLD float ptr [EDX + 0x15c]         ; 0044c294
    MOV ECX,0xbdcccccd                  ; 0044c29a
    MOV EDI,ESI                         ; 0044c29f
    MOV ESI,ESP                         ; 0044c2a1
    MOV dword ptr [ESP + 0x4],ECX       ; 0044c2a3
    FADD double ptr [0x005d744a]        ; 0044c2a7 | DAT_005d744a
    FXCH ST3                            ; 0044c2ad
    FSTP float ptr [ESP + 0xc]          ; 0044c2af
    FXCH ST2                            ; 0044c2b3
    FSTP float ptr [ESP + 0x10]         ; 0044c2b5
    FSTP float ptr [ESP + 0x14]         ; 0044c2b9
    MOV ECX,0x6                         ; 0044c2bd
    FXCH                                ; 0044c2c2
    FSTP float ptr [ESP + 0x8]          ; 0044c2c4
    FSTP float ptr [ESP]                ; 0044c2c8
    MOVSD.REP ES:EDI,ESI                ; 0044c2cb
    ADD ESP,0x18                        ; 0044c2cd
    POP EDI                             ; 0044c2d0
    RET                                 ; 0044c2d1

