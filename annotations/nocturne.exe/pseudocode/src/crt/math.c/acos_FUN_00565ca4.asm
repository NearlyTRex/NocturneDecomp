; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __fpustack_safe crt_math_c_acos_FUN_00565ca4(double x)
;
;
; XREF[12]:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 at 0044def8
;   core_dirmat.cpp_FUN_0044db00 at 0044dbb1
;   core_fire.cpp_CFireEffect_FUN_0048b6f0 at 0048c0a8
;   core_fire.cpp_safeAcos_FUN_00482630 at 0048266f
;   core_stranger.cpp_CStranger_FUN_005384d0 at 005389f8
;   core_stranger.cpp_CStranger_aimLeftPistol_FUN_0053e320 at 0053e73f
;   core_stranger.cpp_adjustAimAngleForOffset_FUN_0053d700 at 0053d74d
;   core_stranger.cpp_calculateAimAnglesWithOffset_FUN_0053d790 at 0053d848
;   core_xform.cpp_FUN_0055b0b0 at 0055b161
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0 at 0055bb2b
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_005c17ec
;
; Called Functions:
;   crt_math.c_atan2_FUN_00566c81
;   crt_math.c_sqrt_FUN_0056c5a8
;
; *****************************************************************************

section .text

    PUSH AX                             ; 00565ca4
        ;   Label: crt_math.c_acos_FUN_00565ca4
    FLD ST0                             ; 00565ca6
    FMUL ST0                            ; 00565ca8
    FLD1                                ; 00565caa
    FSUBRP                              ; 00565cac
    FTST                                ; 00565cae
    FNSTSW AX                           ; 00565cb0
    SAHF                                ; 00565cb2
    JNZ 0x00565cc4                      ; 00565cb3
        ;   XREF to: 00565cc4 (CONDITIONAL_JUMP)  ; LAB_00565cc4
    FCOMPP                              ; 00565cb5
    FNSTSW AX                           ; 00565cb7
    SAHF                                ; 00565cb9
    JA 0x00565cc0                       ; 00565cba
        ;   XREF to: 00565cc0 (CONDITIONAL_JUMP)  ; LAB_00565cc0
    FLDZ                                ; 00565cbc
    JMP 0x00565cc2                      ; 00565cbe
        ;   XREF to: 00565cc2 (UNCONDITIONAL_JUMP)  ; LAB_00565cc2
    FLDPI                               ; 00565cc0
        ;   Label: LAB_00565cc0
    JMP 0x00565cde                      ; 00565cc2
        ;   XREF to: 00565cde (UNCONDITIONAL_JUMP)  ; LAB_00565cde
        ;   Label: LAB_00565cc2
    MOV AL,0x1                          ; 00565cc4
        ;   Label: LAB_00565cc4
    CALL crt_math.c_sqrt_FUN_0056c5a8   ; 00565cc6
        ;   XREF to: 0056c5a8 (UNCONDITIONAL_CALL)  ; double crt_math.c_sqrt_FUN_0056c5a8(double value)
    CMP AL,0x0                          ; 00565ccb
    JNZ 0x00565cde                      ; 00565ccd
        ;   XREF to: 00565cde (CONDITIONAL_JUMP)  ; LAB_00565cde
    FXCH                                ; 00565ccf
    CALL crt_math.c_atan2_FUN_00566c81  ; 00565cd1
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_00566c81(float10 y, float10 x)
    FLD extended double ptr [0x005c17ec] ; 00565cd6 | DAT_005c17ec
    FSUBRP                              ; 00565cdc
    POP AX                              ; 00565cde
        ;   Label: LAB_00565cde
    RET                                 ; 00565ce0

