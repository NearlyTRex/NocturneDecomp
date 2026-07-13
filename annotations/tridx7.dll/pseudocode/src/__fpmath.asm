; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __fpmath(int param_1)
;
; Parameters:
; int              Stack[0x4]:4   param_1
;
; XREF[1]:
;   __cinit at 10007579
;
; Referenced Globals:
;   undefined4 DAT_10016c4c
;
; Called Functions:
;   __setdefaultprecision
;   FUN_100055b0
;   FUN_10006da0
;
; *****************************************************************************

section .text

    CALL FUN_100055b0                   ; 10005580
        ;   XREF to: 100055b0 (UNCONDITIONAL_CALL)  ; undefined FUN_100055b0()
        ;   Label: __fpmath
    CALL FUN_10006da0                   ; 10005585
        ;   XREF to: 10006da0 (UNCONDITIONAL_CALL)  ; undefined FUN_10006da0()
    MOV [0x10016c4c],EAX                ; 1000558a | DAT_10016c4c
    CALL __setdefaultprecision          ; 1000558f
        ;   XREF to: 10006d30 (UNCONDITIONAL_CALL)  ; undefined __setdefaultprecision()
    FNCLEX                              ; 10005594
    RET                                 ; 10005596

