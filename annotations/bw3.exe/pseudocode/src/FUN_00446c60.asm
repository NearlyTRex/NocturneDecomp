; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00446c60(int param_1)
;
;
; XREF[1]:
;   FUN_00447830 at 00447cc4
;
; Called Functions:
;   FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446c60
        ;   Label: FUN_00446c60
    PUSH ESI                            ; 00446c61
    PUSH EDI                            ; 00446c62
    PUSH EBP                            ; 00446c63
    SUB ESP,0x40                        ; 00446c64
    MOV EAX,dword ptr [ESP + 0x54]      ; 00446c67
    XOR EDX,EDX                         ; 00446c6b
    MOV ECX,dword ptr [EAX + 0x204]     ; 00446c6d
    MOV dword ptr [ESP + 0x3c],EDX      ; 00446c73
    TEST ECX,ECX                        ; 00446c77
    JLE 0x00446d31                      ; 00446c79
        ;   XREF to: 00446d31 (CONDITIONAL_JUMP)  ; LAB_00446d31
    ADD EAX,0x208                       ; 00446c7f
    MOV dword ptr [ESP + 0x30],EAX      ; 00446c84
    MOV EAX,dword ptr [ESP + 0x54]      ; 00446c88
    ADD EAX,0x20                        ; 00446c8c
    MOV dword ptr [ESP + 0x34],EAX      ; 00446c8f
    MOV EAX,dword ptr [ESP + 0x54]      ; 00446c93
    MOV EBX,dword ptr [ESP + 0x54]      ; 00446c97
    ADD EAX,0x3c                        ; 00446c9b
    ADD EBX,0x228                       ; 00446c9e
    MOV dword ptr [ESP + 0x38],EAX      ; 00446ca4
    IMUL EBP,dword ptr [ESP + 0x3c],0x74 ; 00446ca8
        ;   Label: LAB_00446ca8
    FLD float ptr [EBX]                 ; 00446cad
    FLD float ptr [EBX + 0x4]           ; 00446caf
    FLD float ptr [EBX + 0x8]           ; 00446cb2
    MOV EDX,dword ptr [ESP + 0x30]      ; 00446cb5
    LEA EDI,[ESP + 0x18]                ; 00446cb9
    LEA ESI,[ESP + 0x24]                ; 00446cbd
    MOV EAX,dword ptr [ESP + 0x34]      ; 00446cc1
    MOV ECX,dword ptr [ESP + 0x38]      ; 00446cc5
    ADD EBP,EDX                         ; 00446cc9
    FXCH ST2                            ; 00446ccb
    FSUB float ptr [EAX]                ; 00446ccd
    FXCH                                ; 00446ccf
    FSUB float ptr [EAX + 0x4]          ; 00446cd1
    FXCH ST2                            ; 00446cd4
    FSUB float ptr [EAX + 0x8]          ; 00446cd6
    FXCH                                ; 00446cd9
    FSTP float ptr [ESP + 0x24]         ; 00446cdb
    FXCH                                ; 00446cdf
    FSTP float ptr [ESP + 0x28]         ; 00446ce1
    LEA EAX,[ESP + 0x18]                ; 00446ce5
    FSTP float ptr [ESP + 0x2c]         ; 00446ce9
    PUSH EAX                            ; 00446ced
    MOVSD ES:EDI,ESI                    ; 00446cee
    MOVSD ES:EDI,ESI                    ; 00446cef
    MOVSD ES:EDI,ESI                    ; 00446cf0
    PUSH ECX                            ; 00446cf1
    LEA ESI,[ESP + 0x8]                 ; 00446cf2
    LEA EDI,[ESP + 0x14]                ; 00446cf6
    CALL FUN_0045b870                   ; 00446cfa
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x8]                 ; 00446cff
    ADD ESP,0x8                         ; 00446d03
    LEA EAX,[ESP + 0xc]                 ; 00446d06
    MOVSD ES:EDI,ESI                    ; 00446d0a
    MOVSD ES:EDI,ESI                    ; 00446d0b
    MOVSD ES:EDI,ESI                    ; 00446d0c
    CMP EBP,EAX                         ; 00446d0d
    JNZ 0x00446d39                      ; 00446d0f
        ;   XREF to: 00446d39 (CONDITIONAL_JUMP)  ; LAB_00446d39
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00446d11
        ;   Label: LAB_00446d11
    INC ESI                             ; 00446d15
    MOV dword ptr [ESP + 0x3c],ESI      ; 00446d16
    MOV EAX,ESI                         ; 00446d1a
    MOV ESI,dword ptr [ESP + 0x54]      ; 00446d1c
    MOV EDI,dword ptr [ESI + 0x204]     ; 00446d20
    ADD EBX,0x74                        ; 00446d26
    CMP EAX,EDI                         ; 00446d29
    JL 0x00446ca8                       ; 00446d2b
        ;   XREF to: 00446ca8 (CONDITIONAL_JUMP)  ; LAB_00446ca8
    ADD ESP,0x40                        ; 00446d31
        ;   Label: LAB_00446d31
    POP EBP                             ; 00446d34
    POP EDI                             ; 00446d35
    POP ESI                             ; 00446d36
    POP EBX                             ; 00446d37
    RET                                 ; 00446d38
    MOV EAX,dword ptr [ESP + 0xc]       ; 00446d39
        ;   Label: LAB_00446d39
    MOV dword ptr [EBP],EAX             ; 00446d3d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00446d40
    MOV dword ptr [EBP + 0x4],EAX       ; 00446d44
    MOV EAX,dword ptr [ESP + 0x14]      ; 00446d47
    MOV dword ptr [EBP + 0x8],EAX       ; 00446d4b
    JMP 0x00446d11                      ; 00446d4e
        ;   XREF to: 00446d11 (UNCONDITIONAL_JUMP)  ; LAB_00446d11

