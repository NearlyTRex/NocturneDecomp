; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_startup_c_HandleRuntimeError_FUN_00606660(char *error_message,int error_level)
;
; Parameters:
; char *           Stack[0x4]:4   error_message
; int              Stack[0x8]:4   error_level
;
; XREF[8]:
;   crt_ioinit.c_staticInit_FUN_00608f20 at 00608f70
;   crt_stack.c_stack_overflow_handler_FUN_005ffa22 at 005ffa2a
;   crt_startup.c_reportAbnormalTermination_FUN_00601628 at 00601632
;   crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30 at 0060ad37
;   crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f at 00604786
;   crt_sync.c_allocate_critical_section_FUN_00609f24 at 00609f69
;   crt_tls.c_create_thread_local_data_FUN_0060cac0 at 0060caeb
;   crt_tls.c_getThreadLocalData_FUN_0060caf8 at 0060cb44
;
; Called Functions:
;   crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
;   crt_startup.c_WriteErrorAndExit_FUN_00606620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606660
        ;   Label: crt_startup.c_HandleRuntimeError_FUN_00606660
    MOV AX,DS                           ; 00606661
    AND EAX,0xffff                      ; 00606663
    PUSH EAX                            ; 00606668
    MOV EDX,dword ptr [ESP + 0xc]       ; 00606669
    PUSH EDX                            ; 0060666d
    CALL crt_debug.c_TriggerDebuggerBreak_FUN_0060b500 ; 0060666e
        ;   XREF to: 0060b500 (UNCONDITIONAL_CALL)  ; int crt_debug.c_TriggerDebuggerBreak_FUN_0060b500(char * error_message, ushort flags)
    ADD ESP,0x8                         ; 00606673
    TEST EAX,EAX                        ; 00606676
    JNZ 0x0060668c                      ; 00606678
        ;   XREF to: 0060668c (CONDITIONAL_JUMP)  ; LAB_0060668c
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060667a
    PUSH EBX                            ; 0060667e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0060667f
    PUSH ECX                            ; 00606683
    CALL crt_startup.c_WriteErrorAndExit_FUN_00606620 ; 00606684
        ;   XREF to: 00606620 (UNCONDITIONAL_CALL)  ; void crt_startup.c_WriteErrorAndExit_FUN_00606620(char * error_message, int exit_code)
    ADD ESP,0x8                         ; 00606689
    POP EBX                             ; 0060668c
        ;   Label: LAB_0060668c
    RET                                 ; 0060668d

