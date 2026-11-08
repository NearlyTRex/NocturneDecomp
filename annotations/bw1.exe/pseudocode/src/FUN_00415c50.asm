; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415c50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007c394c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415c50
        ;   Label: FUN_00415c50
    MOV EDX,dword ptr [0x007c394c]      ; 00415c51 | DAT_007c394c
    XOR EBX,EBX                         ; 00415c57
    TEST EDX,EDX                        ; 00415c59
    JLE 0x00415c7e                      ; 00415c5b
        ;   XREF to: 00415c7e (CONDITIONAL_JUMP)  ; LAB_00415c7e
    PUSH ESI                            ; 00415c5d
    XOR ESI,ESI                         ; 00415c5e
    MOV EAX,dword ptr [ESI + 0x7c3950]  ; 00415c60
        ;   Label: LAB_00415c60
    PUSH EAX                            ; 00415c66
    MOV EDX,dword ptr [EAX]             ; 00415c67
    ADD ESI,0x4                         ; 00415c69
    INC EBX                             ; 00415c6c
    CALL dword ptr [EDX + 0xc]          ; 00415c6d
    MOV ECX,dword ptr [0x007c394c]      ; 00415c70 | DAT_007c394c
    ADD ESP,0x4                         ; 00415c76
    CMP EBX,ECX                         ; 00415c79
    JL 0x00415c60                       ; 00415c7b
        ;   XREF to: 00415c60 (CONDITIONAL_JUMP)  ; LAB_00415c60
    POP ESI                             ; 00415c7d
    POP EBX                             ; 00415c7e
        ;   Label: LAB_00415c7e
    RET                                 ; 00415c7f

