; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00573470(void)
;
;
; Called Functions:
;   FUN_00573490
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x264c0fc                      ; 00573470
        ;   Label: FUN_00573470
    CALL FUN_00573490                   ; 00573475
        ;   XREF to: 00573490 (UNCONDITIONAL_CALL)  ; undefined FUN_00573490()
    ADD ESP,0x4                         ; 0057347a
    PUSH 0x61e3b8                       ; 0057347d
    CALL FUN_005b8d8c                   ; 00573482
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 00573487
    RET                                 ; 0057348a

