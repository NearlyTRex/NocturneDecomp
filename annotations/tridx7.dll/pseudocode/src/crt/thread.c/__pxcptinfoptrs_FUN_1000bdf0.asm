; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void ** __cdecl crt_thread_c___pxcptinfoptrs_FUN_1000bdf0(void)
;
;
; XREF[1]:
;   crt_fpu.c__fpreset_FUN_100098f0 at 100098f1
;
; Called Functions:
;   crt_thread.c__getptd_FUN_100077b0
;
; *****************************************************************************

section .text

    CALL crt_thread.c__getptd_FUN_100077b0 ; 1000bdf0
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata crt_thread.c__getptd_FUN_100077b0()
        ;   Label: crt_thread.c___pxcptinfoptrs_FUN_1000bdf0
    ADD EAX,0x54                        ; 1000bdf5
    RET                                 ; 1000bdf8

