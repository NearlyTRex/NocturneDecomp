; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b0140(void)
;
;
; XREF[2]:
;   FUN_004b0190 at 004b019f
;   FUN_004b01c0 at 004b01d0
;
; Referenced Globals:
;   undefined4 DAT_01c7ccec
;   undefined4 DAT_01c7ccf0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01c7ccec]      ; 004b0140 | DAT_01c7ccec
        ;   Label: FUN_004b0140
    MOV EAX,ECX                         ; 004b0146
    SHL EAX,0x4                         ; 004b0148
    ADD EAX,ECX                         ; 004b014b
    SHL EAX,0x2                         ; 004b014d
    INC ECX                             ; 004b0150
    ADD EAX,0x1c7ccf4                   ; 004b0151
    CMP ECX,0x7d0                       ; 004b0156
    JL 0x004b0160                       ; 004b015c
        ;   XREF to: 004b0160 (CONDITIONAL_JUMP)  ; LAB_004b0160
    XOR ECX,ECX                         ; 004b015e
    MOV EDX,dword ptr [0x01c7ccf0]      ; 004b0160 | DAT_01c7ccf0
        ;   Label: LAB_004b0160
    CMP EDX,0x7d0                       ; 004b0166
    JL 0x004b0175                       ; 004b016c
        ;   XREF to: 004b0175 (CONDITIONAL_JUMP)  ; LAB_004b0175
    MOV dword ptr [0x01c7ccec],ECX      ; 004b016e | DAT_01c7ccec
    RET                                 ; 004b0174
    PUSH EBX                            ; 004b0175
        ;   Label: LAB_004b0175
    LEA EBX,[EDX + 0x1]                 ; 004b0176
    MOV dword ptr [0x01c7ccf0],EBX      ; 004b0179 | DAT_01c7ccf0
    POP EBX                             ; 004b017f
    MOV dword ptr [0x01c7ccec],ECX      ; 004b0180 | DAT_01c7ccec
    RET                                 ; 004b0186

