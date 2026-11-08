; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568f20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5d1a
;   undefined4 DAT_005d5d22
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00568f20
        ;   Label: FUN_00568f20
    SUB ESP,0x18                        ; 00568f21
    MOV EDX,dword ptr [ESP + 0x20]      ; 00568f24
    MOV EAX,ESI                         ; 00568f28
    FLD double ptr [0x005d5d1a]         ; 00568f2a | DAT_005d5d1a
    FLD float ptr [EDX + 0x158]         ; 00568f30
    FMUL ST1                            ; 00568f36
    FLD float ptr [EDX + 0x160]         ; 00568f38
    FMUL ST2                            ; 00568f3e
    FLD float ptr [EDX + 0x158]         ; 00568f40
    FCHS                                ; 00568f46
    FMUL ST3                            ; 00568f48
    FLD float ptr [EDX + 0x160]         ; 00568f4a
    FCHS                                ; 00568f50
    FMULP ST4                           ; 00568f52
    FLD float ptr [EDX + 0x15c]         ; 00568f54
    MOV ECX,0xbdcccccd                  ; 00568f5a
    MOV EDI,ESI                         ; 00568f5f
    MOV ESI,ESP                         ; 00568f61
    MOV dword ptr [ESP + 0x4],ECX       ; 00568f63
    FADD double ptr [0x005d5d22]        ; 00568f67 | DAT_005d5d22
    FXCH ST3                            ; 00568f6d
    FSTP float ptr [ESP + 0xc]          ; 00568f6f
    FXCH ST2                            ; 00568f73
    FSTP float ptr [ESP + 0x10]         ; 00568f75
    FSTP float ptr [ESP + 0x14]         ; 00568f79
    MOV ECX,0x6                         ; 00568f7d
    FXCH                                ; 00568f82
    FSTP float ptr [ESP + 0x8]          ; 00568f84
    FSTP float ptr [ESP]                ; 00568f88
    MOVSD.REP ES:EDI,ESI                ; 00568f8b
    ADD ESP,0x18                        ; 00568f8d
    POP EDI                             ; 00568f90
    RET                                 ; 00568f91

