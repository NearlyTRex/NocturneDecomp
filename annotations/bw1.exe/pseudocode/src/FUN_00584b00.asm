; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00584b00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
;
; Called Functions:
;   FUN_00408ac0
;   FUN_0048ff40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584b00
        ;   Label: FUN_00584b00
    PUSH ESI                            ; 00584b01
    PUSH EDI                            ; 00584b02
    PUSH EBP                            ; 00584b03
    MOV EBP,ESP                         ; 00584b04
    SUB ESP,0x48                        ; 00584b06
    AND ESP,0xfffffff8                  ; 00584b09
    MOV EDX,0x3f8147ae                  ; 00584b0c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00584b11
    XOR ECX,ECX                         ; 00584b14
    MOV dword ptr [ESP + 0x3c],EDX      ; 00584b16
    MOV dword ptr [ESP + 0x40],ECX      ; 00584b1a
    ADD EBX,0x170                       ; 00584b1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00584b24
        ;   Label: LAB_00584b24
    MOV EAX,dword ptr [EAX + 0x16c]     ; 00584b27
    MOV ESI,dword ptr [ESP + 0x40]      ; 00584b2d
    ADD EAX,EAX                         ; 00584b31
    CMP EAX,ESI                         ; 00584b33
    JG 0x00584b42                       ; 00584b35
        ;   XREF to: 00584b42 (CONDITIONAL_JUMP)  ; LAB_00584b42
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00584b37
    MOV ESP,EBP                         ; 00584b3b
    POP EBP                             ; 00584b3d
    POP EDI                             ; 00584b3e
    POP ESI                             ; 00584b3f
    POP EBX                             ; 00584b40
    RET                                 ; 00584b41
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00584b42
        ;   Label: LAB_00584b42
    PUSH EDI                            ; 00584b45
    MOV EAX,dword ptr [EBP + 0x18]      ; 00584b46
    PUSH EAX                            ; 00584b49
    PUSH EBX                            ; 00584b4a
    CALL FUN_0048ff40                   ; 00584b4b
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; undefined FUN_0048ff40()
    MOV dword ptr [ESP + 0x50],EAX      ; 00584b50
    FLD float ptr [ESP + 0x50]          ; 00584b54
    ADD ESP,0xc                         ; 00584b58
    FLDZ                                ; 00584b5b
    FXCH                                ; 00584b5d
    FST float ptr [ESP + 0x8]           ; 00584b5f
    FSTP double ptr [ESP]               ; 00584b63
    FCOMP double ptr [ESP]              ; 00584b66
    FNSTSW AX                           ; 00584b69
    SAHF                                ; 00584b6b
    JA 0x00584c06                       ; 00584b6c
        ;   XREF to: 00584c06 (CONDITIONAL_JUMP)  ; LAB_00584c06
    FLD float ptr [ESP + 0x8]           ; 00584b72
    FCOMP float ptr [ESP + 0x3c]        ; 00584b76
    FNSTSW AX                           ; 00584b7a
    SAHF                                ; 00584b7c
    JNC 0x00584c06                      ; 00584b7d
        ;   XREF to: 00584c06 (CONDITIONAL_JUMP)  ; LAB_00584c06
    FLD1                                ; 00584b83
    FCOMP double ptr [ESP]              ; 00584b85
    FNSTSW AX                           ; 00584b88
    SAHF                                ; 00584b8a
    JC 0x00584c06                       ; 00584b8b
        ;   XREF to: 00584c06 (CONDITIONAL_JUMP)  ; LAB_00584c06
    MOV EAX,dword ptr [ESP + 0x8]       ; 00584b8d
    LEA EDI,[ESP + 0x30]                ; 00584b91
    MOV dword ptr [ESP + 0x3c],EAX      ; 00584b95
    LEA EAX,[EBX + 0x24]                ; 00584b99
    LEA ESI,[ESP + 0x18]                ; 00584b9c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00584ba0
    FLD float ptr [EAX]                 ; 00584ba3
    FLD float ptr [EAX + 0x4]           ; 00584ba5
    FLD float ptr [EAX + 0x8]           ; 00584ba8
    FXCH ST2                            ; 00584bab
    FCHS                                ; 00584bad
    FXCH                                ; 00584baf
    FCHS                                ; 00584bb1
    FXCH ST2                            ; 00584bb3
    FCHS                                ; 00584bb5
    LEA EAX,[ESP + 0x30]                ; 00584bb7
    FXCH                                ; 00584bbb
    FSTP float ptr [ESP + 0x18]         ; 00584bbd
    FXCH                                ; 00584bc1
    FSTP float ptr [ESP + 0x1c]         ; 00584bc3
    FSTP float ptr [ESP + 0x20]         ; 00584bc7
    PUSH EAX                            ; 00584bcb
    MOVSD ES:EDI,ESI                    ; 00584bcc
    MOVSD ES:EDI,ESI                    ; 00584bcd
    MOVSD ES:EDI,ESI                    ; 00584bce
    PUSH EDX                            ; 00584bcf
    LEA ESI,[ESP + 0x14]                ; 00584bd0
    LEA EDI,[ESP + 0x2c]                ; 00584bd4
    CALL FUN_00408ac0                   ; 00584bd8
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[ESP + 0x14]                ; 00584bdd
    ADD ESP,0x8                         ; 00584be1
    LEA EAX,[ESP + 0x24]                ; 00584be4
    MOV ECX,dword ptr [EBP + 0x20]      ; 00584be8
    MOVSD ES:EDI,ESI                    ; 00584beb
    MOVSD ES:EDI,ESI                    ; 00584bec
    MOVSD ES:EDI,ESI                    ; 00584bed
    CMP EAX,ECX                         ; 00584bee
    JZ 0x00584c06                       ; 00584bf0
        ;   XREF to: 00584c06 (CONDITIONAL_JUMP)  ; LAB_00584c06
    MOV EAX,dword ptr [ESP + 0x24]      ; 00584bf2
    MOV dword ptr [ECX],EAX             ; 00584bf6
    MOV EAX,dword ptr [ESP + 0x28]      ; 00584bf8
    MOV dword ptr [ECX + 0x4],EAX       ; 00584bfc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00584bff
    MOV dword ptr [ECX + 0x8],EAX       ; 00584c03
    MOV ESI,dword ptr [ESP + 0x40]      ; 00584c06
        ;   Label: LAB_00584c06
    INC ESI                             ; 00584c0a
    ADD EBX,0x38                        ; 00584c0b
    MOV dword ptr [ESP + 0x40],ESI      ; 00584c0e
    JMP 0x00584b24                      ; 00584c12
        ;   XREF to: 00584b24 (UNCONDITIONAL_JUMP)  ; LAB_00584b24

