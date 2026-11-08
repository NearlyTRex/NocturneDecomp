; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00445c30(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b99ee
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445c30
        ;   Label: FUN_00445c30
    PUSH ESI                            ; 00445c31
    PUSH EDI                            ; 00445c32
    SUB ESP,0x38                        ; 00445c33
    MOV EBX,dword ptr [ESP + 0x48]      ; 00445c36
    PUSH EBX                            ; 00445c3a
    CALL FUN_00408890                   ; 00445c3b
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 00445c40
    LEA ESI,[EBX + 0x158]               ; 00445c43
    PUSH ESI                            ; 00445c49
    CALL FUN_00462580                   ; 00445c4a
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 00445c4f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00445c52
    PUSH EBX                            ; 00445c58
    LEA ESI,[ESP + 0x1c]                ; 00445c59
    LEA EDI,[ESP + 0x4]                 ; 00445c5d
    CALL dword ptr [EAX + 0x1c]         ; 00445c61
    MOV ECX,0x6                         ; 00445c64
    LEA ESI,[ESP + 0x1c]                ; 00445c69
    ADD ESP,0x4                         ; 00445c6d
    MOVSD.REP ES:EDI,ESI                ; 00445c70
    FLD float ptr [ESP + 0x14]          ; 00445c72
    FLD float ptr [ESP + 0xc]           ; 00445c76
    FSUB float ptr [ESP]                ; 00445c7a
    FXCH                                ; 00445c7d
    FSUB float ptr [ESP + 0x8]          ; 00445c7f
    FXCH                                ; 00445c83
    FLD double ptr [0x005b99ee]         ; 00445c85 | DAT_005b99ee
    FXCH                                ; 00445c8b
    FMUL ST1                            ; 00445c8d
    FXCH ST2                            ; 00445c8f
    FMULP                               ; 00445c91
    FXCH                                ; 00445c93
    FSTP float ptr [ESP + 0x34]         ; 00445c95
    FST float ptr [ESP + 0x30]          ; 00445c99
    FCOMP float ptr [ESP + 0x34]        ; 00445c9d
    FNSTSW AX                           ; 00445ca1
    SAHF                                ; 00445ca3
    JBE 0x00445d07                      ; 00445ca4
        ;   XREF to: 00445d07 (CONDITIONAL_JUMP)  ; LAB_00445d07
    MOV EAX,dword ptr [ESP + 0x34]      ; 00445ca6
    MOV dword ptr [EBX + 0x2d8],EAX     ; 00445caa
        ;   Label: LAB_00445caa
    MOV dword ptr [EBX + 0x2e0],0xc61c3f9a ; 00445cb0
    MOV dword ptr [EBX + 0x2e4],0xc61c3f9a ; 00445cba
    MOV dword ptr [EBX + 0x2e8],0xc61c3f9a ; 00445cc4
    MOV dword ptr [EBX + 0x2ec],0xc61c3f9a ; 00445cce
    MOV dword ptr [EBX + 0x2f4],0xc61c3f9a ; 00445cd8
    MOV dword ptr [EBX + 0x2f0],0xc61c3f9a ; 00445ce2
    MOV dword ptr [EBX + 0x2f8],0x461c3f9a ; 00445cec
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00445cf6
    ADD ESP,0x38                        ; 00445d00
    POP EDI                             ; 00445d03
    POP ESI                             ; 00445d04
    POP EBX                             ; 00445d05
    RET                                 ; 00445d06
    MOV EAX,dword ptr [ESP + 0x30]      ; 00445d07
        ;   Label: LAB_00445d07
    JMP 0x00445caa                      ; 00445d0b
        ;   XREF to: 00445caa (UNCONDITIONAL_JUMP)  ; LAB_00445caa

