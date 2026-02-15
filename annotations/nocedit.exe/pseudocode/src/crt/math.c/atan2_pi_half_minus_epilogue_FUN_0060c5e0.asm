; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __watcallRegister crt_math_c_atan2_pi_half_minus_epilogue_FUN_0060c5e0(void)
;
;
; Referenced Globals:
;   float10 g_HalfCalculatedPi = 1.570796326794896619
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0068750e] ; 0060c5e0 | g_HalfCalculatedPi
        ;   Label: crt_math.c_atan2_pi_half_minus_epilogue_FUN_0060c5e0
    FSUBRP                              ; 0060c5e6
    FLDCW word ptr [ESP + 0x18]         ; 0060c5e8
    ADD ESP,0x24                        ; 0060c5ec
    POP EDX                             ; 0060c5ef
    POP ECX                             ; 0060c5f0
    POP EAX                             ; 0060c5f1
    RET                                 ; 0060c5f2

