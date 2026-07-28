; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00566c6c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00566c96 at 00566c9a
;
; Referenced Globals:
;   undefined4 DAT_005c1d98
;
; Called Functions:
;   crt_math.c_atan2_FUN_0056dc98
;
; *****************************************************************************

section .text

    FLD1                                ; 00566c6c
        ;   Label: crt_unknown.c_FUN_00566c6c
    TEST byte ptr [0x005c1d98],0x1      ; 00566c6e | DAT_005c1d98
    JNZ 0x00566c7b                      ; 00566c75
        ;   XREF to: 00566c7b (CONDITIONAL_JUMP)  ; LAB_00566c7b
    FPATAN                              ; 00566c77
    JMP 0x00566c80                      ; 00566c79
        ;   XREF to: 00566c80 (UNCONDITIONAL_JUMP)  ; LAB_00566c80
    CALL crt_math.c_atan2_FUN_0056dc98  ; 00566c7b
        ;   XREF to: 0056dc98 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_0056dc98(float10 y, float10 x)
        ;   Label: LAB_00566c7b
    RET                                 ; 00566c80
        ;   Label: LAB_00566c80

