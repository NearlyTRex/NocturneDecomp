; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056ad3f(void)
;
;
; Referenced Globals:
;   TerminatedCString s_C_floating_point_support_00598b74
;
; Called Functions:
;   crt_startup.c_HandleRuntimeError_FUN_0056ddc0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0056ad3f
        ;   Label: crt_unknown.c_FUN_0056ad3f
    PUSH 0x598b74                       ; 0056ad41 | = "C++ floating-point support not loaded..."
    CALL crt_startup.c_HandleRuntimeError_FUN_0056ddc0 ; 0056ad46
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_0056ddc0(char * error_message, int error_level)
    ADD ESP,0x8                         ; 0056ad4b
    RET                                 ; 0056ad4e

