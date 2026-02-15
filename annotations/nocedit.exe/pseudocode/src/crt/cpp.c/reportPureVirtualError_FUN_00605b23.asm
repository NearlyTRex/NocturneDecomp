; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_cpp_c_reportPureVirtualError_FUN_00605b23(char *error_message,int exit_code)
;
; Parameters:
; char *           Stack[0x4]:4   error_message
; int              Stack[0x8]:4   exit_code
;
; XREF[2]:
;   crt_cpp.c_handlePureVirtualCall_FUN_006015f1 at 00601610
;   crt_cpp.c_pureVirtualStub_FUN_005fee9f at 005feea6
;
; Called Functions:
;   crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
;   crt_startup.c_ExitApplication_FUN_0060b534
;   crt_startup.c_WriteErrorAndExit_FUN_00606620
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00605b23
        ;   Label: crt_cpp.c_reportPureVirtualError_FUN_00605b23
    MOV AX,DS                           ; 00605b24
    AND EAX,0xffff                      ; 00605b26
    PUSH EAX                            ; 00605b2b
    MOV EDX,dword ptr [ESP + 0xc]       ; 00605b2c
    PUSH EDX                            ; 00605b30
    CALL crt_debug.c_TriggerDebuggerBreak_FUN_0060b500 ; 00605b31
        ;   XREF to: 0060b500 (UNCONDITIONAL_CALL)  ; int crt_debug.c_TriggerDebuggerBreak_FUN_0060b500(char * error_message, ushort flags)
    ADD ESP,0x8                         ; 00605b36
    TEST EAX,EAX                        ; 00605b39
    JZ 0x00605b4c                       ; 00605b3b
        ;   XREF to: 00605b4c (CONDITIONAL_JUMP)  ; LAB_00605b4c
    MOV ESI,dword ptr [ESP + 0xc]       ; 00605b3d
    PUSH ESI                            ; 00605b41
    CALL crt_startup.c_ExitApplication_FUN_0060b534 ; 00605b42
        ;   XREF to: 0060b534 (UNCONDITIONAL_CALL)  ; void crt_startup.c_ExitApplication_FUN_0060b534(int exit_code)
    ADD ESP,0x4                         ; 00605b47
    POP ESI                             ; 00605b4a
    RET                                 ; 00605b4b
    PUSH EBX                            ; 00605b4c
        ;   Label: LAB_00605b4c
    MOV ECX,dword ptr [ESP + 0x10]      ; 00605b4d
    PUSH ECX                            ; 00605b51
    MOV EBX,dword ptr [ESP + 0x10]      ; 00605b52
    PUSH EBX                            ; 00605b56
    CALL crt_startup.c_WriteErrorAndExit_FUN_00606620 ; 00605b57
        ;   XREF to: 00606620 (UNCONDITIONAL_CALL)  ; void crt_startup.c_WriteErrorAndExit_FUN_00606620(char * error_message, int exit_code)
    ADD ESP,0x8                         ; 00605b5c
    POP EBX                             ; 00605b5f
    POP ESI                             ; 00605b60
    RET                                 ; 00605b61

