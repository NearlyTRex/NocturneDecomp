; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fpu_c__fpmath_FUN_10005580(int flag)
;
; Parameters:
; int              Stack[0x4]:4   flag
;
; XREF[1]:
;   crt_startup.c__cinit_FUN_10007570 at 10007579
;
; Referenced Globals:
;   undefined4 DAT_10016c4c
;
; Called Functions:
;   crt_fpu.c__install_fp_handlers_FUN_100055b0
;   crt_fpu.c__ms_p5_mp_test_fdiv_FUN_10006da0
;   crt_fpu.c__setdefaultprecision_FUN_10006d30
;
; *****************************************************************************

section .text

    CALL crt_fpu.c__install_fp_handlers_FUN_100055b0 ; 10005580
        ;   XREF to: 100055b0 (UNCONDITIONAL_CALL)  ; void crt_fpu.c__install_fp_handlers_FUN_100055b0()
        ;   Label: crt_fpu.c__fpmath_FUN_10005580
    CALL crt_fpu.c__ms_p5_mp_test_fdiv_FUN_10006da0 ; 10005585
        ;   XREF to: 10006da0 (UNCONDITIONAL_CALL)  ; int crt_fpu.c__ms_p5_mp_test_fdiv_FUN_10006da0()
    MOV [0x10016c4c],EAX                ; 1000558a | DAT_10016c4c
    CALL crt_fpu.c__setdefaultprecision_FUN_10006d30 ; 1000558f
        ;   XREF to: 10006d30 (UNCONDITIONAL_CALL)  ; void crt_fpu.c__setdefaultprecision_FUN_10006d30()
    FNCLEX                              ; 10005594
    RET                                 ; 10005596

