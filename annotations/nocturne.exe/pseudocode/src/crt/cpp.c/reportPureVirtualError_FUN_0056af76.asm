; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_cpp_c_reportPureVirtualError_FUN_0056af76(char *error_message,int exit_code)
;
; Parameters:
; char *           Stack[0x4]:4   error_message
; int              Stack[0x8]:4   exit_code
;
; XREF[2]:
;   crt_cpp.c_pureVirtualConstructor_FUN_00564905 at 0056490c
;   crt_cpp.c_pureVirtual_FUN_00566ed7 at 00566ef6
;
; Called Functions:
;   crt_debug.c_TriggerDebuggerBreak_FUN_0056fca0
;   crt_startup.c_ExitApplication_FUN_0056fcd4
;   crt_startup.c_WriteErrorAndExit_FUN_0056dd80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056af76
        ;   Label: crt_cpp.c_reportPureVirtualError_FUN_0056af76
    MOV AX,DS                           ; 0056af77
    AND EAX,0xffff                      ; 0056af79
    PUSH EAX                            ; 0056af7e
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056af7f
    PUSH EDX                            ; 0056af83
    CALL crt_debug.c_TriggerDebuggerBreak_FUN_0056fca0 ; 0056af84
        ;   XREF to: 0056fca0 (UNCONDITIONAL_CALL)  ; int crt_debug.c_TriggerDebuggerBreak_FUN_0056fca0(char * error_message, ushort flags)
    ADD ESP,0x8                         ; 0056af89
    TEST EAX,EAX                        ; 0056af8c
    JZ 0x0056af9f                       ; 0056af8e
        ;   XREF to: 0056af9f (CONDITIONAL_JUMP)  ; LAB_0056af9f
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056af90
    PUSH ESI                            ; 0056af94
    CALL crt_startup.c_ExitApplication_FUN_0056fcd4 ; 0056af95
        ;   XREF to: 0056fcd4 (UNCONDITIONAL_CALL)  ; void crt_startup.c_ExitApplication_FUN_0056fcd4(int exit_code)
    ADD ESP,0x4                         ; 0056af9a
    POP ESI                             ; 0056af9d
    RET                                 ; 0056af9e
    PUSH EBX                            ; 0056af9f
        ;   Label: LAB_0056af9f
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056afa0
    PUSH ECX                            ; 0056afa4
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056afa5
    PUSH EBX                            ; 0056afa9
    CALL crt_startup.c_WriteErrorAndExit_FUN_0056dd80 ; 0056afaa
        ;   XREF to: 0056dd80 (UNCONDITIONAL_CALL)  ; void crt_startup.c_WriteErrorAndExit_FUN_0056dd80(char * error_message, int exit_code)
    ADD ESP,0x8                         ; 0056afaf
    POP EBX                             ; 0056afb2
    POP ESI                             ; 0056afb3
    RET                                 ; 0056afb4

