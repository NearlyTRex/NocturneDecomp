; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown bool crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4(void)
;
;
; XREF[3]:
;   crt_signal.c_processSignal_FUN_0060d128 at 0060d18e
;   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 at 0060d0ea
;   crt_unknown.c_FUN_0060d1ec at 0060d1f5
;
; Referenced Globals:
;   SetConsoleCtrlHandler* g_SetConsoleCtrlHandlerFunc = 0021210e
;   byte g_ConsoleHandlerRegistered = 0x0
;
; Called Functions:
;   SetConsoleCtrlHandler
;
; *****************************************************************************

section .text

    CMP byte ptr [0x0068556c],0x0       ; 0060cfe4 | g_ConsoleHandlerRegistered
        ;   Label: crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
    JZ 0x0060d007                       ; 0060cfeb
        ;   XREF to: 0060d007 (CONDITIONAL_JUMP)  ; LAB_0060d007
    PUSH 0x0                            ; 0060cfed
    PUSH 0x60cf20                       ; 0060cfef | HandlerRoutine_0060cf20
    CALL dword ptr CS:[0x61160c]        ; 0060cff4 | g_SetConsoleCtrlHandlerFunc
    TEST EAX,EAX                        ; 0060cffb
    JZ 0x0060d007                       ; 0060cffd
        ;   XREF to: 0060d007 (CONDITIONAL_JUMP)  ; LAB_0060d007
    XOR DL,DL                           ; 0060cfff
    MOV byte ptr [0x0068556c],DL        ; 0060d001 | g_ConsoleHandlerRegistered
    XOR EAX,EAX                         ; 0060d007
        ;   Label: LAB_0060d007
    MOV AL,[0x0068556c]                 ; 0060d009 | g_ConsoleHandlerRegistered
    TEST EAX,EAX                        ; 0060d00e
    SETZ AL                             ; 0060d010
    AND EAX,0xff                        ; 0060d013
    RET                                 ; 0060d018

