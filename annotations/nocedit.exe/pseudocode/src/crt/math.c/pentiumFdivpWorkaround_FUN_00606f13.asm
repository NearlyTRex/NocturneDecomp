; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpustack_safe float10 crt_math.c_pentiumFdivpWorkaround_FUN_00606f13(float10 dividend, float10 divisor)
;
; Local Variables:
; undefined1[10]   Stack[-0x2c]:10  local_2c
; undefined1[10]   Stack[-0x20]:10  local_20
;
; XREF[1]:
;   crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98 at 00606fcb
;
; Called Functions:
;   crt_math.c_fdiv_FUN_00606960
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 00606f13
        ;   Label: crt_math.c_pentiumFdivpWorkaround_FUN_00606f13
    FSTP extended double ptr [ESP]      ; 00606f16
    FSTP extended double ptr [ESP + 0xc] ; 00606f19
    CALL crt_math.c_fdiv_FUN_00606960   ; 00606f1d
        ;   XREF to: 00606960 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)
    ADD ESP,0x2c                        ; 00606f22
    RET                                 ; 00606f25

