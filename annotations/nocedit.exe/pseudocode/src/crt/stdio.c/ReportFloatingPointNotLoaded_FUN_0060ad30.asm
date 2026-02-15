; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30(void)
;
;
; XREF[2]:
;   crt_stdio.c_FloatingPointStub_FUN_00603160 at 00603170
;   crt_stdio.c_scanf_float_FUN_00605178 at 006053e2
;
; Referenced Globals:
;   TerminatedCString s_Floating_point_support_n_00659590
;
; Called Functions:
;   crt_startup.c_HandleRuntimeError_FUN_00606660
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0060ad30
        ;   Label: crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30
    PUSH 0x659590                       ; 0060ad32 | = "Floating-point support not loaded\r\n"
    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 0060ad37
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
    ADD ESP,0x8                         ; 0060ad3c
    RET                                 ; 0060ad3f

