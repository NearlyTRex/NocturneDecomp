; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408d60(int param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x94]:4  local_94
;
; XREF[1]:
;   FUN_004eaab0 at 004eaae5
;
; Called Functions:
;   FUN_004080c0
;   FUN_005593c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408d60
        ;   Label: FUN_00408d60
    PUSH ESI                            ; 00408d61
    PUSH EDI                            ; 00408d62
    PUSH EBP                            ; 00408d63
    MOV EBP,ESP                         ; 00408d64
    SUB ESP,0x8c                        ; 00408d66
    AND ESP,0xfffffff8                  ; 00408d6c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00408d6f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00408d72
    LEA EAX,[ESP + 0xc]                 ; 00408d75
    PUSH EAX                            ; 00408d79
    CALL FUN_005593c0                   ; 00408d7a
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005593c0()
    ADD ESP,0x4                         ; 00408d7f
    XOR EDX,EDX                         ; 00408d82
    MOV dword ptr [ESP + 0xc],EDX       ; 00408d84
    LEA EDX,[ESP + 0xc]                 ; 00408d88
    MOV EAX,dword ptr [EBP + 0x14]      ; 00408d8c
    PUSH EDX                            ; 00408d8f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00408d90
    MOV EAX,dword ptr [EAX + 0x154]     ; 00408d93
    PUSH ECX                            ; 00408d99
    CALL dword ptr [EAX + 0x3c]         ; 00408d9a
    ADD ESP,0x8                         ; 00408d9d
    CMP EAX,0x2                         ; 00408da0
    JZ 0x00408dae                       ; 00408da3
        ;   XREF to: 00408dae (CONDITIONAL_JUMP)  ; LAB_00408dae
    XOR EAX,EAX                         ; 00408da5
        ;   Label: LAB_00408da5
    MOV ESP,EBP                         ; 00408da7
    POP EBP                             ; 00408da9
    POP EDI                             ; 00408daa
    POP ESI                             ; 00408dab
    POP EBX                             ; 00408dac
    RET                                 ; 00408dad
    FLD float ptr [ESI + 0x4]           ; 00408dae
        ;   Label: LAB_00408dae
    FLD float ptr [ESI + 0x8]           ; 00408db1
    FLD float ptr [ESI]                 ; 00408db4
    LEA EDI,[ESP + 0x58]                ; 00408db6
    LEA EAX,[ESP + 0x4c]                ; 00408dba
    LEA ESI,[ESP + 0x64]                ; 00408dbe
    PUSH EAX                            ; 00408dc2
    FSUB float ptr [EBX]                ; 00408dc3
    FXCH ST2                            ; 00408dc5
    FSUB float ptr [EBX + 0x4]          ; 00408dc7
    FXCH                                ; 00408dca
    FSUB float ptr [EBX + 0x8]          ; 00408dcc
    LEA EAX,[ESP + 0x5c]                ; 00408dcf
    FXCH ST2                            ; 00408dd3
    FSTP float ptr [ESP + 0x68]         ; 00408dd5
    PUSH EAX                            ; 00408dd9
    FSTP float ptr [ESP + 0x70]         ; 00408dda
    LEA EAX,[ESP + 0x14]                ; 00408dde
    PUSH EBX                            ; 00408de2
    FSTP float ptr [ESP + 0x78]         ; 00408de3
    PUSH EAX                            ; 00408de7
    MOVSD ES:EDI,ESI                    ; 00408de8
    MOVSD ES:EDI,ESI                    ; 00408de9
    MOVSD ES:EDI,ESI                    ; 00408dea
    CALL FUN_004080c0                   ; 00408deb
        ;   XREF to: 004080c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004080c0()
    MOV dword ptr [ESP + 0x98],EAX      ; 00408df0
    FLD float ptr [ESP + 0x98]          ; 00408df7
    ADD ESP,0x10                        ; 00408dfe
    FLDZ                                ; 00408e01
    FXCH                                ; 00408e03
    FST float ptr [ESP + 0x8]           ; 00408e05
    FSTP double ptr [ESP]               ; 00408e09
    FCOMP double ptr [ESP]              ; 00408e0c
    FNSTSW AX                           ; 00408e0f
    SAHF                                ; 00408e11
    JA 0x00408da5                       ; 00408e12
        ;   XREF to: 00408da5 (CONDITIONAL_JUMP)  ; LAB_00408da5
    FLD1                                ; 00408e14
    FCOMP double ptr [ESP]              ; 00408e16
    FNSTSW AX                           ; 00408e19
    SAHF                                ; 00408e1b
    JC 0x00408da5                       ; 00408e1c
        ;   XREF to: 00408da5 (CONDITIONAL_JUMP)  ; LAB_00408da5
    CMP dword ptr [EBP + 0x20],0x0      ; 00408e1e
    JZ 0x00408eb1                       ; 00408e22
        ;   XREF to: 00408eb1 (CONDITIONAL_JUMP)  ; LAB_00408eb1
    FLD float ptr [ESP + 0x8]           ; 00408e28
    FLD float ptr [ESP + 0x58]          ; 00408e2c
    FMUL ST1                            ; 00408e30
    FLD float ptr [ESP + 0x5c]          ; 00408e32
    FMUL ST2                            ; 00408e36
    FLD float ptr [ESP + 0x60]          ; 00408e38
    FMULP ST3                           ; 00408e3c
    LEA EDI,[ESP + 0x70]                ; 00408e3e
    LEA ESI,[ESP + 0x40]                ; 00408e42
    FXCH                                ; 00408e46
    FSTP float ptr [ESP + 0x40]         ; 00408e48
    FSTP float ptr [ESP + 0x44]         ; 00408e4c
    FSTP float ptr [ESP + 0x48]         ; 00408e50
    MOVSD ES:EDI,ESI                    ; 00408e54
    MOVSD ES:EDI,ESI                    ; 00408e55
    MOVSD ES:EDI,ESI                    ; 00408e56
    FLD float ptr [EBX]                 ; 00408e57
    FLD float ptr [EBX + 0x4]           ; 00408e59
    FLD float ptr [EBX + 0x8]           ; 00408e5c
    LEA EDI,[ESP + 0x7c]                ; 00408e5f
    LEA ESI,[ESP + 0x34]                ; 00408e63
    FXCH ST2                            ; 00408e67
    FADD float ptr [ESP + 0x70]         ; 00408e69
    FXCH                                ; 00408e6d
    FADD float ptr [ESP + 0x74]         ; 00408e6f
    FXCH ST2                            ; 00408e73
    FADD float ptr [ESP + 0x78]         ; 00408e75
    FXCH                                ; 00408e79
    FSTP float ptr [ESP + 0x34]         ; 00408e7b
    FXCH                                ; 00408e7f
    FSTP float ptr [ESP + 0x38]         ; 00408e81
    FSTP float ptr [ESP + 0x3c]         ; 00408e85
    MOVSD ES:EDI,ESI                    ; 00408e89
    MOVSD ES:EDI,ESI                    ; 00408e8a
    MOVSD ES:EDI,ESI                    ; 00408e8b
    LEA EAX,[ESP + 0x7c]                ; 00408e8c
    MOV EDI,dword ptr [EBP + 0x20]      ; 00408e90
    CMP EAX,EDI                         ; 00408e93
    JZ 0x00408eb1                       ; 00408e95
        ;   XREF to: 00408eb1 (CONDITIONAL_JUMP)  ; LAB_00408eb1
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00408e97
    MOV dword ptr [EDI],EAX             ; 00408e9b
    MOV EAX,dword ptr [ESP + 0x80]      ; 00408e9d
    MOV dword ptr [EDI + 0x4],EAX       ; 00408ea4
    MOV EAX,dword ptr [ESP + 0x84]      ; 00408ea7
    MOV dword ptr [EDI + 0x8],EAX       ; 00408eae
    MOV EAX,0x1                         ; 00408eb1
        ;   Label: LAB_00408eb1
    MOV ESP,EBP                         ; 00408eb6
    POP EBP                             ; 00408eb8
    POP EDI                             ; 00408eb9
    POP ESI                             ; 00408eba
    POP EBX                             ; 00408ebb
    RET                                 ; 00408ebc

