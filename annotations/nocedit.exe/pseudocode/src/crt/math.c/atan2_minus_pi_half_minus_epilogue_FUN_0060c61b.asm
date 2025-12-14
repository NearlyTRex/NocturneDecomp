; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister float10 crt_math.c_atan2_minus_pi_half_minus_epilogue_FUN_0060c61b(void)
;
;
; Referenced Globals:
;   float10 g_HalfCalculatedPi = 1.570796326794896619
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0068750e] ; 0060c61b | g_HalfCalculatedPi
        ;   Label: crt_math.c_atan2_minus_pi_half_minus_epilogue_FUN_0060c61b
    FADDP                               ; 0060c621
    FCHS                                ; 0060c623
    FLDCW word ptr [ESP + 0x18]         ; 0060c625
    ADD ESP,0x24                        ; 0060c629
    POP EDX                             ; 0060c62c
    POP ECX                             ; 0060c62d
    POP EAX                             ; 0060c62e
    RET                                 ; 0060c62f

