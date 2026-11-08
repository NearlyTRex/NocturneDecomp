; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5bc0(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   FUN_00449a50 at 0044a0b1
;
; Referenced Globals:
;   undefined1* switchdataD_004b5b88 = 004b5be0
;   TerminatedCString s_a_wood_wav_005df604
;   undefined4 DAT_006236b8
;   undefined4 DAT_01c726a8
;   undefined4 DAT_01c726ac
;
; Called Functions:
;   FUN_0045f3e0
;   FUN_0045f690
;   FUN_004acaf0
;   FUN_004acb60
;   FUN_0057d940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5bc0
        ;   Label: FUN_004b5bc0
    PUSH ESI                            ; 004b5bc1
    PUSH EDI                            ; 004b5bc2
    PUSH EBP                            ; 004b5bc3
    SUB ESP,0x64                        ; 004b5bc4
    MOV EBP,dword ptr [ESP + 0x7c]      ; 004b5bc7
    MOV EAX,dword ptr [ESP + 0x88]      ; 004b5bcb
    XOR EBX,EBX                         ; 004b5bd2
    CMP EAX,0xa                         ; 004b5bd4
    JA 0x004b5be5                       ; 004b5bd7
        ;   XREF to: 004b5be5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4b5b88]  ; 004b5bd9 | caseD_8 | caseD_a | caseD_6
        ;   Label: switchD
    MOV EBX,0x1                         ; 004b5be0
        ;   Label: caseD_0
    MOV EDX,dword ptr [ESP + 0x80]      ; 004b5be5
        ;   Label: default
    PUSH EDX                            ; 004b5bec
    LEA EAX,[ESP + 0x4]                 ; 004b5bed
    PUSH EAX                            ; 004b5bf1
    MOV EDI,0x3f333333                  ; 004b5bf2
    LEA ESI,[ESP + 0x30]                ; 004b5bf7
    CALL FUN_0045f3e0                   ; 004b5bfb
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 004b5c00
    XOR ECX,ECX                         ; 004b5c03
    LEA EAX,[ESP + 0x4c]                ; 004b5c05
    MOV dword ptr [ESP + 0x4c],ECX      ; 004b5c09
    PUSH EAX                            ; 004b5c0d
    LEA EAX,[ESP + 0x4]                 ; 004b5c0e
    MOV dword ptr [ESP + 0x54],ECX      ; 004b5c12
    PUSH EAX                            ; 004b5c16
    MOV dword ptr [ESP + 0x5c],EDI      ; 004b5c17
    LEA EDI,[ESP + 0x48]                ; 004b5c1b
    CALL FUN_0045f690                   ; 004b5c1f
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x30]                ; 004b5c24
    ADD ESP,0x8                         ; 004b5c28
    MOVSD ES:EDI,ESI                    ; 004b5c2b
    MOVSD ES:EDI,ESI                    ; 004b5c2c
    MOVSD ES:EDI,ESI                    ; 004b5c2d
    FLD float ptr [EBP]                 ; 004b5c2e
    FLD float ptr [EBP + 0x4]           ; 004b5c31
    FLD float ptr [EBP + 0x8]           ; 004b5c34
    LEA EDI,[ESP + 0x58]                ; 004b5c37
    LEA ESI,[ESP + 0x34]                ; 004b5c3b
    FXCH ST2                            ; 004b5c3f
    FSUB float ptr [ESP + 0x40]         ; 004b5c41
    FXCH                                ; 004b5c45
    FSUB float ptr [ESP + 0x44]         ; 004b5c47
    FXCH ST2                            ; 004b5c4b
    FSUB float ptr [ESP + 0x48]         ; 004b5c4d
    FXCH                                ; 004b5c51
    FSTP float ptr [ESP + 0x34]         ; 004b5c53
    FXCH                                ; 004b5c57
    FSTP float ptr [ESP + 0x38]         ; 004b5c59
    FSTP float ptr [ESP + 0x3c]         ; 004b5c5d
    MOVSD ES:EDI,ESI                    ; 004b5c61
    MOVSD ES:EDI,ESI                    ; 004b5c62
    MOVSD ES:EDI,ESI                    ; 004b5c63
    TEST EBX,EBX                        ; 004b5c64
    JZ 0x004b5cda                       ; 004b5c66
        ;   XREF to: 004b5cda (CONDITIONAL_JUMP)  ; LAB_004b5cda
    MOV ECX,dword ptr [ESP + 0x84]      ; 004b5c68
    PUSH ECX                            ; 004b5c6f
    MOV EBX,dword ptr [ESP + 0x84]      ; 004b5c70
    PUSH EBX                            ; 004b5c77
    LEA EAX,[ESP + 0x60]                ; 004b5c78
    MOV EDX,dword ptr [0x01c726ac]      ; 004b5c7c | DAT_01c726ac
    PUSH EAX                            ; 004b5c82
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5c83
    ADD EAX,EDX                         ; 004b5c8a
    SHL EAX,0x2                         ; 004b5c8c
    SUB EAX,EDX                         ; 004b5c8f
    SHL EAX,0x5                         ; 004b5c91
    ADD EAX,0x1c726b0                   ; 004b5c94
    PUSH EAX                            ; 004b5c99
    CALL FUN_004acb60                   ; 004b5c9a
        ;   XREF to: 004acb60 (UNCONDITIONAL_CALL)  ; undefined FUN_004acb60()
    ADD ESP,0x10                        ; 004b5c9f
    MOV ESI,dword ptr [0x01c726ac]      ; 004b5ca2 | DAT_01c726ac
        ;   Label: LAB_004b5ca2
    INC ESI                             ; 004b5ca8
    MOV dword ptr [0x01c726ac],ESI      ; 004b5ca9 | DAT_01c726ac
    CMP ESI,0x100                       ; 004b5caf
    JL 0x004b5cbf                       ; 004b5cb5
        ;   XREF to: 004b5cbf (CONDITIONAL_JUMP)  ; LAB_004b5cbf
    XOR EBP,EBP                         ; 004b5cb7
    MOV dword ptr [0x01c726ac],EBP      ; 004b5cb9 | DAT_01c726ac
    MOV EAX,[0x01c726a8]                ; 004b5cbf | DAT_01c726a8
        ;   Label: LAB_004b5cbf
    CMP EAX,0x100                       ; 004b5cc4
    JL 0x004b5d36                       ; 004b5cc9
        ;   XREF to: 004b5d36 (CONDITIONAL_JUMP)  ; LAB_004b5d36
    ADD ESP,0x64                        ; 004b5ccb
        ;   Label: caseD_6
    POP EBP                             ; 004b5cce
    POP EDI                             ; 004b5ccf
    POP ESI                             ; 004b5cd0
    POP EBX                             ; 004b5cd1
    RET                                 ; 004b5cd2
    XOR EBX,EBX                         ; 004b5cd3
        ;   Label: caseD_3
    JMP 0x004b5be5                      ; 004b5cd5
        ;   XREF to: 004b5be5 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x58]                ; 004b5cda
        ;   Label: LAB_004b5cda
    PUSH 0x3e6b851f                     ; 004b5cde
    PUSH EAX                            ; 004b5ce3
    PUSH 0x5df604                       ; 004b5ce4 | = "a-wood?.wav"
    MOV EBP,dword ptr [ESP + 0x84]      ; 004b5ce9
    PUSH EBP                            ; 004b5cf0
    MOV EAX,[0x006236b8]                ; 004b5cf1 | DAT_006236b8
    PUSH EAX                            ; 004b5cf6
    CALL FUN_0057d940                   ; 004b5cf7
        ;   XREF to: 0057d940 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d940()
    ADD ESP,0x14                        ; 004b5cfc
    MOV EDX,dword ptr [ESP + 0x80]      ; 004b5cff
    PUSH EDX                            ; 004b5d06
    LEA EAX,[ESP + 0x5c]                ; 004b5d07
    MOV EDX,dword ptr [0x01c726ac]      ; 004b5d0b | DAT_01c726ac
    PUSH EAX                            ; 004b5d11
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5d12
    ADD EAX,EDX                         ; 004b5d19
    SHL EAX,0x2                         ; 004b5d1b
    SUB EAX,EDX                         ; 004b5d1e
    SHL EAX,0x5                         ; 004b5d20
    ADD EAX,0x1c726b0                   ; 004b5d23
    PUSH EAX                            ; 004b5d28
    CALL FUN_004acaf0                   ; 004b5d29
        ;   XREF to: 004acaf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004acaf0()
    ADD ESP,0xc                         ; 004b5d2e
    JMP 0x004b5ca2                      ; 004b5d31
        ;   XREF to: 004b5ca2 (UNCONDITIONAL_JUMP)  ; LAB_004b5ca2
    LEA EDX,[EAX + 0x1]                 ; 004b5d36
        ;   Label: LAB_004b5d36
    MOV dword ptr [0x01c726a8],EDX      ; 004b5d39 | DAT_01c726a8
    ADD ESP,0x64                        ; 004b5d3f
    POP EBP                             ; 004b5d42
    POP EDI                             ; 004b5d43
    POP ESI                             ; 004b5d44
    POP EBX                             ; 004b5d45
    RET                                 ; 004b5d46

