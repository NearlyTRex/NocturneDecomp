; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059ae20(int param_1)
;
;
; Called Functions:
;   FUN_00408b00
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ae20
        ;   Label: FUN_0059ae20
    PUSH EDI                            ; 0059ae21
    PUSH EBP                            ; 0059ae22
    SUB ESP,0x3c                        ; 0059ae23
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0059ae26
    MOV EBX,ESI                         ; 0059ae2a
    LEA EAX,[EBP + 0x158]               ; 0059ae2c
    PUSH EAX                            ; 0059ae32
    LEA EDI,[ESP + 0x4]                 ; 0059ae33
    CALL FUN_00468900                   ; 0059ae37
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 0059ae3c
    MOV ESI,dword ptr [EAX + 0x350]     ; 0059ae41
    ADD ESP,0x4                         ; 0059ae47
    MOVSD.REP ES:EDI,ESI                ; 0059ae4a
    MOV EAX,dword ptr [EBP + 0x310]     ; 0059ae4c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059ae52
    LEA EAX,[ESP + 0x18]                ; 0059ae56
    XOR EDX,EDX                         ; 0059ae5a
    PUSH EAX                            ; 0059ae5c
    LEA ESI,[ESP + 0x34]                ; 0059ae5d
    LEA EDI,[ESP + 0x28]                ; 0059ae61
    PUSH EBP                            ; 0059ae65
    MOV dword ptr [ESP + 0x20],EDX      ; 0059ae66
    MOV dword ptr [ESP + 0x28],EDX      ; 0059ae6a
    CALL FUN_00408b00                   ; 0059ae6e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x38]                ; 0059ae73
    ADD ESP,0x8                         ; 0059ae77
    MOV ECX,0x6                         ; 0059ae7a
    FLD float ptr [ESP]                 ; 0059ae7f
    FLD float ptr [ESP + 0x4]           ; 0059ae82
    FLD float ptr [ESP + 0x8]           ; 0059ae86
    FLD float ptr [ESP + 0xc]           ; 0059ae8a
    FLD float ptr [ESP + 0x10]          ; 0059ae8e
    MOVSD ES:EDI,ESI                    ; 0059ae92
    MOVSD ES:EDI,ESI                    ; 0059ae93
    MOVSD ES:EDI,ESI                    ; 0059ae94
    FLD float ptr [ESP + 0x14]          ; 0059ae95
    MOV ESI,ESP                         ; 0059ae99
    MOV EDI,EBX                         ; 0059ae9b
    FXCH ST5                            ; 0059ae9d
    FADD float ptr [ESP + 0x24]         ; 0059ae9f
    FXCH ST4                            ; 0059aea3
    FADD float ptr [ESP + 0x28]         ; 0059aea5
    FXCH ST3                            ; 0059aea9
    FADD float ptr [ESP + 0x2c]         ; 0059aeab
    FXCH ST2                            ; 0059aeaf
    FADD float ptr [ESP + 0x24]         ; 0059aeb1
    FXCH                                ; 0059aeb5
    FADD float ptr [ESP + 0x28]         ; 0059aeb7
    FXCH ST5                            ; 0059aebb
    FADD float ptr [ESP + 0x2c]         ; 0059aebd
    FXCH ST4                            ; 0059aec1
    FSTP float ptr [ESP]                ; 0059aec3
    FXCH ST2                            ; 0059aec6
    FSTP float ptr [ESP + 0x4]          ; 0059aec8
    FSTP float ptr [ESP + 0x8]          ; 0059aecc
    FSTP float ptr [ESP + 0xc]          ; 0059aed0
    FXCH                                ; 0059aed4
    FSTP float ptr [ESP + 0x10]         ; 0059aed6
    FSTP float ptr [ESP + 0x14]         ; 0059aeda
    MOVSD.REP ES:EDI,ESI                ; 0059aede
    MOV EAX,EBX                         ; 0059aee0
    ADD ESP,0x3c                        ; 0059aee2
    POP EBP                             ; 0059aee5
    POP EDI                             ; 0059aee6
    POP EBX                             ; 0059aee7
    RET                                 ; 0059aee8

