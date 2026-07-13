; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulong * FUN_10008a30(void)
;
;
; XREF[11]:
;   FUN_10008b80 at 10008c10
;   FUN_10008c30 at 10008cae
;   FUN_10008cd0 at 10008d09
;   FUN_10008fb0 at 10009112
;   FUN_100093f0 at 10009464
;   FUN_1000b720 at 1000b7be
;   __chsize_lk at 1000b5fc
;   __close at 10005bab
;   __dosmaperr at 100089a1
;   __write at 10008f95
;   ... and 1 more
;
; Called Functions:
;   __getptd
;
; *****************************************************************************

section .text

    CALL __getptd                       ; 10008a30
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata __getptd()
        ;   Label: FUN_10008a30
    ADD EAX,0xc                         ; 10008a35
    RET                                 ; 10008a38

