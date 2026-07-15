; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fpu_c__fpreset_FUN_100098f0(void)
;
;
; Called Functions:
;   crt_fpu.c__setdefaultprecision_FUN_10006d30
;   crt_thread.c___pxcptinfoptrs_FUN_1000bdf0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 100098f0
        ;   Label: crt_fpu.c__fpreset_FUN_100098f0
    CALL crt_thread.c___pxcptinfoptrs_FUN_1000bdf0 ; 100098f1
        ;   XREF to: 1000bdf0 (UNCONDITIONAL_CALL)  ; void * * crt_thread.c___pxcptinfoptrs_FUN_1000bdf0()
    MOV ESI,dword ptr [EAX]             ; 100098f6
    FNINIT                              ; 100098f8
    CALL crt_fpu.c__setdefaultprecision_FUN_10006d30 ; 100098fa
        ;   XREF to: 10006d30 (UNCONDITIONAL_CALL)  ; void crt_fpu.c__setdefaultprecision_FUN_10006d30()
    TEST ESI,ESI                        ; 100098ff
    JZ 0x1000991f                       ; 10009901
        ;   XREF to: 1000991f (CONDITIONAL_JUMP)  ; LAB_1000991f
    MOV EAX,dword ptr [ESI + 0x4]       ; 10009903
    TEST dword ptr [EAX],0x10008        ; 10009906
    JZ 0x1000991f                       ; 1000990c
        ;   XREF to: 1000991f (CONDITIONAL_JUMP)  ; LAB_1000991f
    MOV dword ptr [EAX + 0x20],0x0      ; 1000990e
    MOV dword ptr [EAX + 0x24],0xffff   ; 10009915
    ADD EAX,0x1c                        ; 1000991c
    POP ESI                             ; 1000991f
        ;   Label: LAB_1000991f
    RET                                 ; 10009920

