; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051bfd0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e61644
;
; Called Functions:
;   FUN_0051b080
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1e614b0                      ; 0051bfd0
        ;   Label: FUN_0051bfd0
    CALL FUN_0051b080                   ; 0051bfd5
        ;   XREF to: 0051b080 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b080()
    ADD ESP,0x4                         ; 0051bfda
    MOV EDX,0x5fadd4                    ; 0051bfdd
    PUSH 0x61b3fc                       ; 0051bfe2
    MOV dword ptr [0x01e61644],EDX      ; 0051bfe7 | DAT_01e61644
    CALL FUN_005b8d8c                   ; 0051bfed
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0051bff2
    RET                                 ; 0051bff5

