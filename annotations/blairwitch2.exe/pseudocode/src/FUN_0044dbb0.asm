; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044dbb0(void)
;
;
; Called Functions:
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x5f50e0                       ; 0044dbb0
        ;   Label: FUN_0044dbb0
    PUSH 0x100                          ; 0044dbb5
    PUSH 0x1b13a20                      ; 0044dbba
    CALL FUN_005b7f5f                   ; 0044dbbf
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0044dbc4
    PUSH 0x60b1c3                       ; 0044dbc7
    CALL FUN_005b8d8c                   ; 0044dbcc
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0044dbd1
    RET                                 ; 0044dbd4

