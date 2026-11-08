; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00544c70(int *param_1)
;
;
; XREF[1]:
;   FUN_005490d0 at 00549133
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544c70
        ;   Label: FUN_00544c70
    PUSH ESI                            ; 00544c71
    PUSH EBP                            ; 00544c72
    MOV ESI,dword ptr [ESP + 0x10]      ; 00544c73
    MOV EDX,dword ptr [ESI]             ; 00544c77
    XOR EBX,EBX                         ; 00544c79
    XOR EAX,EAX                         ; 00544c7b
    TEST EDX,EDX                        ; 00544c7d
    JLE 0x00544cad                      ; 00544c7f
        ;   XREF to: 00544cad (CONDITIONAL_JUMP)  ; LAB_00544cad
    PUSH EDI                            ; 00544c81
    MOV EDX,ESI                         ; 00544c82
    MOV ECX,dword ptr [EDX + 0x54]      ; 00544c84
        ;   Label: LAB_00544c84
    MOV EDI,dword ptr [EDX + 0x68]      ; 00544c87
    ADD ECX,EDI                         ; 00544c8a
    IMUL ECX,ECX,0x16                   ; 00544c8c
    ADD EAX,ECX                         ; 00544c8f
    LEA ECX,[EDI*0x4 + 0x0]             ; 00544c91
    MOV EBP,dword ptr [EDX + 0x2c]      ; 00544c98
    ADD EAX,ECX                         ; 00544c9b
    IMUL ECX,EBP,0x34                   ; 00544c9d
    INC EBX                             ; 00544ca0
    ADD EAX,ECX                         ; 00544ca1
    MOV ECX,dword ptr [ESI]             ; 00544ca3
    ADD EDX,0x4                         ; 00544ca5
    CMP EBX,ECX                         ; 00544ca8
    JL 0x00544c84                       ; 00544caa
        ;   XREF to: 00544c84 (CONDITIONAL_JUMP)  ; LAB_00544c84
    POP EDI                             ; 00544cac
    POP EBP                             ; 00544cad
        ;   Label: LAB_00544cad
    POP ESI                             ; 00544cae
    POP EBX                             ; 00544caf
    RET                                 ; 00544cb0

