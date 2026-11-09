; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stairs_cpp_FUN_005849f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f634c
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005849f0
        ;   Label: core_stairs.cpp_FUN_005849f0
    SUB ESP,0x1c                        ; 005849f1
    MOV EDX,dword ptr [ESP + 0x24]      ; 005849f4
    MOV EAX,ESI                         ; 005849f8
    FLD double ptr [0x005f634c]         ; 005849fa | DAT_005f634c
    FLD float ptr [EDX + 0x160]         ; 00584a00
    FMUL ST1                            ; 00584a06
    FILD dword ptr [EDX + 0x16c]        ; 00584a08
    FLD float ptr [EDX + 0x158]         ; 00584a0e
    FMUL ST1                            ; 00584a14
    FLD float ptr [EDX + 0x15c]         ; 00584a16
    FMULP ST2                           ; 00584a1c
    FLD float ptr [EDX + 0x160]         ; 00584a1e
    FCHS                                ; 00584a24
    FMULP ST4                           ; 00584a26
    MOV EDI,ESI                         ; 00584a28
    XOR ECX,ECX                         ; 00584a2a
    MOV ESI,ESP                         ; 00584a2c
    MOV dword ptr [ESP + 0x4],ECX       ; 00584a2e
    MOV dword ptr [ESP + 0x8],ECX       ; 00584a32
    FXCH ST2                            ; 00584a36
    FSTP float ptr [ESP + 0xc]          ; 00584a38
    MOV ECX,0x6                         ; 00584a3c
    FXCH                                ; 00584a41
    FSTP float ptr [ESP + 0x10]         ; 00584a43
    FSTP float ptr [ESP + 0x14]         ; 00584a47
    FSTP float ptr [ESP]                ; 00584a4b
    MOVSD.REP ES:EDI,ESI                ; 00584a4e
    ADD ESP,0x1c                        ; 00584a50
    POP EDI                             ; 00584a53
    RET                                 ; 00584a54

