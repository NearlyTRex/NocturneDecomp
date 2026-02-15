; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __watcallRegister crt_math_c_atan2_pi_minus_epilogue_FUN_0060c5b8(void)
;
;
; Referenced Globals:
;   float10 g_CalculatedPi = 3.141592653589793239
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00687504] ; 0060c5b8 | g_CalculatedPi
        ;   Label: crt_math.c_atan2_pi_minus_epilogue_FUN_0060c5b8
    FSUBRP                              ; 0060c5be
    FLDCW word ptr [ESP + 0x18]         ; 0060c5c0
    ADD ESP,0x24                        ; 0060c5c4
    POP EDX                             ; 0060c5c7
    POP ECX                             ; 0060c5c8
    POP EAX                             ; 0060c5c9
    RET                                 ; 0060c5ca

