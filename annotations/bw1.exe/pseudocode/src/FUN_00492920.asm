; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00492920(void)
;
;
; Called Functions:
;   FUN_00493ba0
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1c3eb54                      ; 00492920
        ;   Label: FUN_00492920
    CALL FUN_00493ba0                   ; 00492925
        ;   XREF to: 00493ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00493ba0()
    ADD ESP,0x4                         ; 0049292a
    PUSH 0x61abb0                       ; 0049292d
    CALL FUN_005c1093                   ; 00492932
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00492937
    RET                                 ; 0049293a

