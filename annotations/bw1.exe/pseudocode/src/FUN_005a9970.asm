; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9970(void)
;
;
; Called Functions:
;   FUN_005a99e0
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x2c8afb0                      ; 005a9970
        ;   Label: FUN_005a9970
    CALL FUN_005a99e0                   ; 005a9975
        ;   XREF to: 005a99e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a99e0()
    ADD ESP,0x4                         ; 005a997a
    PUSH 0x625c80                       ; 005a997d
    CALL FUN_005c1093                   ; 005a9982
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 005a9987
    RET                                 ; 005a998a

