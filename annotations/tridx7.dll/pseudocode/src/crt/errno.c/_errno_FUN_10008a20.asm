; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl crt_errno_c__errno_FUN_10008a20(void)
;
;
; XREF[22]:
;   crt_errno.c__dosmaperr_FUN_100089a0 at 100089cc
;   crt_io.c__chsize_FUN_1000b4f0 at 1000b545
;   crt_io.c__chsize_lk_FUN_1000b560 at 1000b606
;   crt_io.c__close_FUN_10005b50 at 10005ba0
;   crt_io.c__commit_FUN_10008e80 at 10008ef4
;   crt_io.c__free_osfhnd_FUN_10008c30 at 10008ca3
;   crt_io.c__get_osfhandle_FUN_10008cd0 at 10008cfe
;   crt_io.c__lseek_lk_FUN_1000a670 at 1000a684
;   crt_io.c__open_osfhandle_FUN_10008d20 at 10008d7c
;   crt_io.c__read_FUN_1000b6a0 at 1000b6fa
;   ... and 12 more
;
; Called Functions:
;   crt_thread.c__getptd_FUN_100077b0
;
; *****************************************************************************

section .text

    CALL crt_thread.c__getptd_FUN_100077b0 ; 10008a20
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata crt_thread.c__getptd_FUN_100077b0()
        ;   Label: crt_errno.c__errno_FUN_10008a20
    ADD EAX,0x8                         ; 10008a25
    RET                                 ; 10008a28

