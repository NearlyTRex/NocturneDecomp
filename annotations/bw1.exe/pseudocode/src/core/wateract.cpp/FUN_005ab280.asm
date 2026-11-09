; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_005ab280(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9312
;   undefined4 DAT_005f931a
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005ab280
        ;   Label: core_wateract.cpp_FUN_005ab280
    SUB ESP,0x18                        ; 005ab281
    MOV EDX,dword ptr [ESP + 0x20]      ; 005ab284
    MOV EAX,ESI                         ; 005ab288
    FLD double ptr [0x005f9312]         ; 005ab28a | DAT_005f9312
    FLD float ptr [EDX + 0x158]         ; 005ab290
    FMUL ST1                            ; 005ab296
    FLD float ptr [EDX + 0x160]         ; 005ab298
    FMUL ST2                            ; 005ab29e
    FLD float ptr [EDX + 0x158]         ; 005ab2a0
    FCHS                                ; 005ab2a6
    FMUL ST3                            ; 005ab2a8
    FLD float ptr [EDX + 0x160]         ; 005ab2aa
    FCHS                                ; 005ab2b0
    FMULP ST4                           ; 005ab2b2
    FLD float ptr [EDX + 0x15c]         ; 005ab2b4
    MOV ECX,0xbdcccccd                  ; 005ab2ba
    MOV EDI,ESI                         ; 005ab2bf
    MOV ESI,ESP                         ; 005ab2c1
    MOV dword ptr [ESP + 0x4],ECX       ; 005ab2c3
    FADD double ptr [0x005f931a]        ; 005ab2c7 | DAT_005f931a
    FXCH ST3                            ; 005ab2cd
    FSTP float ptr [ESP + 0xc]          ; 005ab2cf
    FXCH ST2                            ; 005ab2d3
    FSTP float ptr [ESP + 0x10]         ; 005ab2d5
    FSTP float ptr [ESP + 0x14]         ; 005ab2d9
    MOV ECX,0x6                         ; 005ab2dd
    FXCH                                ; 005ab2e2
    FSTP float ptr [ESP + 0x8]          ; 005ab2e4
    FSTP float ptr [ESP]                ; 005ab2e8
    MOVSD.REP ES:EDI,ESI                ; 005ab2eb
    ADD ESP,0x18                        ; 005ab2ed
    POP EDI                             ; 005ab2f0
    RET                                 ; 005ab2f1

