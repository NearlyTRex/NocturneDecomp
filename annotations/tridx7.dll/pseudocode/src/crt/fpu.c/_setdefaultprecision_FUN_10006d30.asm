; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fpu_c__setdefaultprecision_FUN_10006d30(void)
;
;
; XREF[2]:
;   crt_fpu.c__fpmath_FUN_10005580 at 1000558f
;   crt_fpu.c__fpreset_FUN_100098f0 at 100098fa
;
; Called Functions:
;   crt_fpu.c__controlfp_FUN_100098d0
;
; *****************************************************************************

section .text

    PUSH 0x30000                        ; 10006d30
        ;   Label: crt_fpu.c__setdefaultprecision_FUN_10006d30
    PUSH 0x10000                        ; 10006d35
    CALL crt_fpu.c__controlfp_FUN_100098d0 ; 10006d3a
        ;   XREF to: 100098d0 (UNCONDITIONAL_CALL)  ; uint crt_fpu.c__controlfp_FUN_100098d0(uint new_value, uint mask)
    ADD ESP,0x8                         ; 10006d3f
    RET                                 ; 10006d42

