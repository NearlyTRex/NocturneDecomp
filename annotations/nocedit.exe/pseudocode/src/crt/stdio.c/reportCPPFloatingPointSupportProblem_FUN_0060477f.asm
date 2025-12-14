; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f()
;
;
; Referenced Globals:
;   TerminatedCString s_C_floating_point_support_00658ffc
;
; Called Functions:
;   crt_startup.c_HandleRuntimeError_FUN_00606660
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0060477f
        ;   Label: crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f
    PUSH 0x658ffc                       ; 00604781 | = "C++ floating-point support not loaded..."
    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 00604786
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
    ADD ESP,0x8                         ; 0060478b
    RET                                 ; 0060478e

