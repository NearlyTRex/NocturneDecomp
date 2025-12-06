; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister bool crt_signal.c_registerConsoleHandler_FUN_0060cfb8(void)
;
;
; XREF[1]:
;   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 at 0060d0e3
;
; Referenced Globals:
;   SetConsoleCtrlHandler* PTR_SetConsoleCtrlHandler_0061160c = 0021210e
;   bool g_ConsoleHandlerRegistered = False
;
; *****************************************************************************

section .text

    CMP byte ptr [0x0068556c],0x0       ; 0060cfb8 | bool g_ConsoleHandlerRegistered
        ;   Label: crt_signal.c_registerConsoleHandler_FUN_0060cfb8
    JNZ 0x0060cfda                      ; 0060cfbf | LAB_0060cfda
        ;   XREF to: 0060cfda (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0060cfc1
    PUSH 0x60cf20                       ; 0060cfc3 | HandlerRoutine_0060cf20
    CALL dword ptr CS:[0x61160c]        ; 0060cfc8 | SetConsoleCtrlHandler * PTR_SetConsoleCtrlHandler_0061160c
    TEST EAX,EAX                        ; 0060cfcf
    JZ 0x0060cfda                       ; 0060cfd1 | LAB_0060cfda
        ;   XREF to: 0060cfda (CONDITIONAL_JUMP)
    MOV byte ptr [0x0068556c],0x1       ; 0060cfd3 | bool g_ConsoleHandlerRegistered
    XOR EAX,EAX                         ; 0060cfda
        ;   Label: LAB_0060cfda
    MOV AL,[0x0068556c]                 ; 0060cfdc | bool g_ConsoleHandlerRegistered
    RET                                 ; 0060cfe1

