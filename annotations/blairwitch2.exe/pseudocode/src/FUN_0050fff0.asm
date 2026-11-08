; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050fff0(void)
;
;
; Called Functions:
;   FUN_00510010
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1d6519c                      ; 0050fff0
        ;   Label: FUN_0050fff0
    CALL FUN_00510010                   ; 0050fff5
        ;   XREF to: 00510010 (UNCONDITIONAL_CALL)  ; undefined FUN_00510010()
    ADD ESP,0x4                         ; 0050fffa
    PUSH 0x61b290                       ; 0050fffd
    CALL FUN_005b8d8c                   ; 00510002
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 00510007
    RET                                 ; 0051000a

