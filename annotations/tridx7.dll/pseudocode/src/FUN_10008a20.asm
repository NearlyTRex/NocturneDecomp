; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_10008a20(void)
;
;
; XREF[15]:
;   FUN_10008b80 at 10008c05
;   FUN_10008c30 at 10008ca3
;   FUN_10008cd0 at 10008cfe
;   FUN_10008fb0 at 10009107
;   FUN_100093f0 at 10009459
;   FUN_1000b720 at 1000b7b3
;   FUN_10010970 at 10010a09
;   __chsize_lk at 1000b606
;   __close at 10005ba0
;   __dosmaperr at 100089cc
;   ... and 5 more
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

