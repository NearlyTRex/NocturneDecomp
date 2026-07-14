; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_10008a20(void)
;
;
; XREF[22]:
;   FUN_10008b80 at 10008c05
;   FUN_10008c30 at 10008ca3
;   FUN_10008cd0 at 10008cfe
;   FUN_10008d20 at 10008d7c
;   FUN_10008e80 at 10008ef4
;   FUN_10008fb0 at 10009107
;   FUN_100093f0 at 10009459
;   FUN_1000b4f0 at 1000b545
;   FUN_1000b6a0 at 1000b6fa
;   FUN_1000b720 at 1000b7b3
;   ... and 12 more
;
; Called Functions:
;   __getptd
;
; *****************************************************************************

section .text

    CALL __getptd                       ; 10008a20
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata __getptd()
        ;   Label: FUN_10008a20
    ADD EAX,0x8                         ; 10008a25
    RET                                 ; 10008a28

