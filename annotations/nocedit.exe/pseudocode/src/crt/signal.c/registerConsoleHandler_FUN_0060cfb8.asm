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
;   SetConsoleCtrlHandler* g_SetConsoleCtrlHandlerFunc = 0021210e
;   bool g_ConsoleHandlerRegistered = False
;
; *****************************************************************************

section .text

    CMP byte ptr [0x0068556c],0x0       ; 0060cfb8 | g_ConsoleHandlerRegistered
        ;   Label: crt_signal.c_registerConsoleHandler_FUN_0060cfb8
    JNZ 0x0060cfda                      ; 0060cfbf
        ;   XREF to: 0060cfda (CONDITIONAL_JUMP)  ; LAB_0060cfda
    PUSH 0x1                            ; 0060cfc1
    PUSH 0x60cf20                       ; 0060cfc3 | HandlerRoutine_0060cf20
    CALL dword ptr CS:[0x61160c]        ; 0060cfc8 | g_SetConsoleCtrlHandlerFunc
    TEST EAX,EAX                        ; 0060cfcf
    JZ 0x0060cfda                       ; 0060cfd1
        ;   XREF to: 0060cfda (CONDITIONAL_JUMP)  ; LAB_0060cfda
    MOV byte ptr [0x0068556c],0x1       ; 0060cfd3 | g_ConsoleHandlerRegistered
    XOR EAX,EAX                         ; 0060cfda
        ;   Label: LAB_0060cfda
    MOV AL,[0x0068556c]                 ; 0060cfdc | g_ConsoleHandlerRegistered
    RET                                 ; 0060cfe1

