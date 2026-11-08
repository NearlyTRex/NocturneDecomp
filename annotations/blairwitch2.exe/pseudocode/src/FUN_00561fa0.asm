; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00561fa0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005eb148
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00561fa0
        ;   Label: FUN_00561fa0
    SUB ESP,0x1c                        ; 00561fa1
    MOV EDX,dword ptr [ESP + 0x24]      ; 00561fa4
    MOV EAX,ESI                         ; 00561fa8
    FLD double ptr [0x005eb148]         ; 00561faa | DAT_005eb148
    FLD float ptr [EDX + 0x2bc]         ; 00561fb0
    FMUL ST1                            ; 00561fb6
    FILD dword ptr [EDX + 0x2c8]        ; 00561fb8
    FLD float ptr [EDX + 0x2b4]         ; 00561fbe
    FMUL ST1                            ; 00561fc4
    FLD float ptr [EDX + 0x2b8]         ; 00561fc6
    FMULP ST2                           ; 00561fcc
    FLD float ptr [EDX + 0x2bc]         ; 00561fce
    FCHS                                ; 00561fd4
    FMULP ST4                           ; 00561fd6
    MOV EDI,ESI                         ; 00561fd8
    XOR ECX,ECX                         ; 00561fda
    MOV ESI,ESP                         ; 00561fdc
    MOV dword ptr [ESP + 0x4],ECX       ; 00561fde
    MOV dword ptr [ESP + 0x8],ECX       ; 00561fe2
    FXCH ST2                            ; 00561fe6
    FSTP float ptr [ESP + 0xc]          ; 00561fe8
    MOV ECX,0x6                         ; 00561fec
    FXCH                                ; 00561ff1
    FSTP float ptr [ESP + 0x10]         ; 00561ff3
    FSTP float ptr [ESP + 0x14]         ; 00561ff7
    FSTP float ptr [ESP]                ; 00561ffb
    MOVSD.REP ES:EDI,ESI                ; 00561ffe
    ADD ESP,0x1c                        ; 00562000
    POP EDI                             ; 00562003
    RET                                 ; 00562004

