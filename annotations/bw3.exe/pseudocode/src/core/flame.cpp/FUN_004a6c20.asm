; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flame_cpp_FUN_004a6c20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c0bfc
;   undefined4 DAT_005c0c04
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004a6c20
        ;   Label: core_flame.cpp_FUN_004a6c20
    SUB ESP,0x18                        ; 004a6c21
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a6c24
    MOV EAX,ESI                         ; 004a6c28
    FLD double ptr [0x005c0bfc]         ; 004a6c2a | DAT_005c0bfc
    FLD float ptr [EDX + 0x158]         ; 004a6c30
    FMUL ST1                            ; 004a6c36
    FLD float ptr [EDX + 0x160]         ; 004a6c38
    FMUL ST2                            ; 004a6c3e
    FLD float ptr [EDX + 0x158]         ; 004a6c40
    FCHS                                ; 004a6c46
    FMUL ST3                            ; 004a6c48
    FLD float ptr [EDX + 0x160]         ; 004a6c4a
    FCHS                                ; 004a6c50
    FMULP ST4                           ; 004a6c52
    FLD float ptr [EDX + 0x15c]         ; 004a6c54
    MOV ECX,0xbdcccccd                  ; 004a6c5a
    MOV EDI,ESI                         ; 004a6c5f
    MOV ESI,ESP                         ; 004a6c61
    MOV dword ptr [ESP + 0x4],ECX       ; 004a6c63
    FADD double ptr [0x005c0c04]        ; 004a6c67 | DAT_005c0c04
    FXCH ST3                            ; 004a6c6d
    FSTP float ptr [ESP + 0xc]          ; 004a6c6f
    FXCH ST2                            ; 004a6c73
    FSTP float ptr [ESP + 0x10]         ; 004a6c75
    FSTP float ptr [ESP + 0x14]         ; 004a6c79
    MOV ECX,0x6                         ; 004a6c7d
    FXCH                                ; 004a6c82
    FSTP float ptr [ESP + 0x8]          ; 004a6c84
    FSTP float ptr [ESP]                ; 004a6c88
    MOVSD.REP ES:EDI,ESI                ; 004a6c8b
    ADD ESP,0x18                        ; 004a6c8d
    POP EDI                             ; 004a6c90
    RET                                 ; 004a6c91

