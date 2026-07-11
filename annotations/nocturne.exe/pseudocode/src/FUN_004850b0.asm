; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004850b0(void)
;
;
; XREF[1]:
;   FUN_0048af70 at 0048afc6
;
; Referenced Globals:
;   undefined4 s_gunflash.kfm_0058113b+1
;
; Called Functions:
;   FUN_00454510
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH 0x58113c                       ; 004850b0 | s_gunflash.kfm_0058113b+1
        ;   Label: FUN_004850b0
    PUSH 0x1c09338                      ; 004850b5
    CALL FUN_00454580                   ; 004850ba
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 004850bf
    PUSH 0x1c09338                      ; 004850c2
    CALL FUN_00454510                   ; 004850c7
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 004850cc
    RET                                 ; 004850cf

