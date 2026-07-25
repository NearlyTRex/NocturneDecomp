; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00521c50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02dc1ed8
;   undefined4 DAT_02dc216c
;   undefined4 DAT_02dc2170
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1ed8]      ; 00521c50 | DAT_02dc1ed8
        ;   Label: FUN_00521c50
    XOR EAX,EAX                         ; 00521c56
    INC EDX                             ; 00521c58
        ;   Label: LAB_00521c58
    CMP EDX,0x40                        ; 00521c59
    JL 0x00521c60                       ; 00521c5c
        ;   XREF to: 00521c60 (CONDITIONAL_JUMP)  ; LAB_00521c60
    XOR EDX,EDX                         ; 00521c5e
    IMUL ECX,EDX,0x168                  ; 00521c60
        ;   Label: LAB_00521c60
    CMP dword ptr [ECX + 0x2dc2004],0x0 ; 00521c66 | DAT_02dc216c
    JZ 0x00521c7e                       ; 00521c6d
        ;   XREF to: 00521c7e (CONDITIONAL_JUMP)  ; LAB_00521c7e
    INC EAX                             ; 00521c6f
        ;   Label: LAB_00521c6f
    CMP EAX,0x40                        ; 00521c70
    JL 0x00521c58                       ; 00521c73
        ;   XREF to: 00521c58 (CONDITIONAL_JUMP)  ; LAB_00521c58
    XOR EAX,EAX                         ; 00521c75
    MOV dword ptr [0x02dc1ed8],EDX      ; 00521c77 | DAT_02dc1ed8
    RET                                 ; 00521c7d
    CMP dword ptr [ECX + 0x2dc2008],0x0 ; 00521c7e | DAT_02dc2170
        ;   Label: LAB_00521c7e
    JNZ 0x00521c6f                      ; 00521c85
        ;   XREF to: 00521c6f (CONDITIONAL_JUMP)  ; LAB_00521c6f
    MOV EAX,0x2dc1edc                   ; 00521c87
    ADD EAX,ECX                         ; 00521c8c
    MOV dword ptr [0x02dc1ed8],EDX      ; 00521c8e | DAT_02dc1ed8
    RET                                 ; 00521c94

