; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 APIDLLsync(void)
;
;
; Called Functions:
;   FUN_100047b0
;
; *****************************************************************************

section .text

    CALL FUN_100047b0                   ; 10004a60
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; undefined FUN_100047b0()
        ;   Label: APIDLLsync
    MOV EAX,0x1                         ; 10004a65
    RET                                 ; 10004a6a

