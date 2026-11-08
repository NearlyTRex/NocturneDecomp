; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00596090(void)
;
;
; Called Functions:
;   FUN_005960b0
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x2c838cc                      ; 00596090
        ;   Label: FUN_00596090
    CALL FUN_005960b0                   ; 00596095
        ;   XREF to: 005960b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005960b0()
    ADD ESP,0x4                         ; 0059609a
    PUSH 0x625a08                       ; 0059609d
    CALL FUN_005c1093                   ; 005960a2
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 005960a7
    RET                                 ; 005960aa

