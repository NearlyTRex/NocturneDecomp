; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c50cc(void)
;
;
; XREF[12]:
;   crt_errno.c_setErrno_FUN_005c6450 at 005c6450
;   crt_stdio.c_fwrite_FUN_005c1a70 at 005c1b4f
;   crt_time.c__localtime_FUN_005c2738 at 005c2738
;   crt_unknown.c_FUN_005c0840 at 005c0840
;   crt_unknown.c_FUN_005c5348 at 005c5367
;   crt_unknown.c_FUN_005c6488 at 005c6488
;   crt_unknown.c_FUN_005cb5a8 at 005cb5ad
;   crt_unknown.c_FUN_005cb5f4 at 005cb5f4
;   crt_unknown.c_FUN_005cc370 at 005cc371
;   crt_unknown.c_FUN_005cd0f0 at 005cd123
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_02c9f06c
;
; *****************************************************************************

section .text

    MOV EAX,[0x02c9f06c]                ; 005c50cc | DAT_02c9f06c
        ;   Label: crt_unknown.c_FUN_005c50cc
    LEA EAX,[EAX]                       ; 005c50d1

