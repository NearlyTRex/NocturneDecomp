; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c_HandleRuntimeError_FUN_0056ddc0(char *error_message,int error_level)
;
; Parameters:
; char *           Stack[0x4]:4   error_message
; int              Stack[0x8]:4   error_level
;
; XREF[8]:
;   FUN_0056ad3f at 0056ad46
;   FUN_0056ddf0 at 0056de40
;   FUN_0056e254 at 0056e299
;   FUN_0056f0f0 at 0056f0f7
;   FUN_00571170 at 0057119b
;   FUN_005711a8 at 005711f4
;   crt_unknown.c_reportAbnormalTermination_FUN_00566f98 at 00566fa2
;   crt_unknown.c_stack_overflow_handler_FUN_005670e0 at 005670e8
;
; Called Functions:
;   crt_debug.c_TriggerDebuggerBreak_FUN_0056fca0
;   crt_startup.c_WriteErrorAndExit_FUN_0056dd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ddc0
        ;   Label: crt_startup.c_HandleRuntimeError_FUN_0056ddc0
    MOV AX,DS                           ; 0056ddc1
    AND EAX,0xffff                      ; 0056ddc3
    PUSH EAX                            ; 0056ddc8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056ddc9
    PUSH EDX                            ; 0056ddcd
    CALL crt_debug.c_TriggerDebuggerBreak_FUN_0056fca0 ; 0056ddce
        ;   XREF to: 0056fca0 (UNCONDITIONAL_CALL)  ; int crt_debug.c_TriggerDebuggerBreak_FUN_0056fca0(char * error_message, ushort flags)
    ADD ESP,0x8                         ; 0056ddd3
    TEST EAX,EAX                        ; 0056ddd6
    JNZ 0x0056ddec                      ; 0056ddd8
        ;   XREF to: 0056ddec (CONDITIONAL_JUMP)  ; LAB_0056ddec
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056ddda
    PUSH EBX                            ; 0056ddde
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056dddf
    PUSH ECX                            ; 0056dde3
    CALL crt_startup.c_WriteErrorAndExit_FUN_0056dd80 ; 0056dde4
        ;   XREF to: 0056dd80 (UNCONDITIONAL_CALL)  ; void crt_startup.c_WriteErrorAndExit_FUN_0056dd80(char * error_message, int exit_code)
    ADD ESP,0x8                         ; 0056dde9
    POP EBX                             ; 0056ddec
        ;   Label: LAB_0056ddec
    RET                                 ; 0056dded

