; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fde80(void)
;
;
; Called Functions:
;   FUN_00474c90
;   FUN_004fe490
;   FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x1e56c30                      ; 004fde80
        ;   Label: FUN_004fde80
    CALL FUN_00474c90                   ; 004fde85
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 004fde8a
    PUSH 0x5be200                       ; 004fde8d
    CALL FUN_00564bb0                   ; 004fde92
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004fde97
    PUSH 0x1e56da0                      ; 004fde9a
    CALL FUN_004fe490                   ; 004fde9f
        ;   XREF to: 004fe490 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe490()
    ADD ESP,0x4                         ; 004fdea4
    PUSH 0x5be210                       ; 004fdea7
    CALL FUN_00564bb0                   ; 004fdeac
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004fdeb1
    RET                                 ; 004fdeb4

