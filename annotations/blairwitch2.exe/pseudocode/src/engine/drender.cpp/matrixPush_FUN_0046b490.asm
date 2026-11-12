; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_matrixPush_FUN_0046b490(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720 at 0044174d
;
; Called Functions:
;   engine_matrix.c_matrixPush_FUN_004e9710
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_matrixPush_FUN_004e9710 ; 0046b490
        ;   XREF to: 004e9710 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_004e9710()
        ;   Label: engine_drender.cpp_matrixPush_FUN_0046b490
    RET                                 ; 0046b495

