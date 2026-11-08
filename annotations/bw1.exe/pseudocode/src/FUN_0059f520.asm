; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059f520(void)
;
;
; Called Functions:
;   FUN_005a1e10
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x2c8ae70                      ; 0059f520
        ;   Label: FUN_0059f520
    CALL FUN_005a1e10                   ; 0059f525
        ;   XREF to: 005a1e10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a1e10()
    ADD ESP,0x4                         ; 0059f52a
    PUSH 0x625bdc                       ; 0059f52d
    CALL FUN_005c1093                   ; 0059f532
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 0059f537
    RET                                 ; 0059f53a

