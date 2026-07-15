; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulong * __cdecl crt_errno_c___doserrno_FUN_10008a30(void)
;
;
; XREF[15]:
;   crt_errno.c__dosmaperr_FUN_100089a0 at 100089a1
;   crt_io.c__chsize_lk_FUN_1000b560 at 1000b5fc
;   crt_io.c__close_FUN_10005b50 at 10005bab
;   crt_io.c__commit_FUN_10008e80 at 10008ee8
;   crt_io.c__free_osfhnd_FUN_10008c30 at 10008cae
;   crt_io.c__get_osfhandle_FUN_10008cd0 at 10008d09
;   crt_io.c__open_osfhandle_FUN_10008d20 at 10008d87
;   crt_io.c__read_FUN_1000b6a0 at 1000b705
;   crt_io.c__read_lk_FUN_1000b720 at 1000b7be
;   crt_io.c__set_osfhnd_FUN_10008b80 at 10008c10
;   ... and 5 more
;
; Called Functions:
;   crt_thread.c__getptd_FUN_100077b0
;
; *****************************************************************************

section .text

    CALL crt_thread.c__getptd_FUN_100077b0 ; 10008a30
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata crt_thread.c__getptd_FUN_100077b0()
        ;   Label: crt_errno.c___doserrno_FUN_10008a30
    ADD EAX,0xc                         ; 10008a35
    RET                                 ; 10008a38

