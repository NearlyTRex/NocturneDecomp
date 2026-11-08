; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ef70(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 0053ef70
        ;   Label: FUN_0053ef70
    PUSH 0x1                            ; 0053ef75
    PUSH 0x61bb98                       ; 0053ef77
    PUSH 0x53efa0                       ; 0053ef7c
    PUSH 0x5e67bd                       ; 0053ef81
    PUSH 0x20b19a0                      ; 0053ef86
    CALL FUN_0040c450                   ; 0053ef8b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0053ef90
    RET                                 ; 0053ef93

