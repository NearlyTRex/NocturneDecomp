; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_matrixPush_FUN_0046d070(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20 at 0044ef4d
;
; Called Functions:
;   engine_matrix.c_matrixPush_FUN_004e5df0
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_matrixPush_FUN_004e5df0 ; 0046d070
        ;   XREF to: 004e5df0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_004e5df0()
        ;   Label: engine_drender.cpp_matrixPush_FUN_0046d070
    RET                                 ; 0046d075

