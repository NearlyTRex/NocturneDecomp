; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack SIGNAL_HANDLER_TYPE __watcallStack crt_signal_c_getSignalHandler_FUN_0060ceb4(int signal_number)
;
; Parameters:
; int              Stack[0x4]:4   signal_number
;
; XREF[5]:
;   crt_signal.c_consoleCtrlHandler_FUN_0060cf20 at 0060cf4e
;   crt_signal.c_processSignal_FUN_0060d128 at 0060d12f
;   crt_signal.c_raiseFPE_FUN_0060d028 at 0060d02b
;   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 at 0060d0c6
;   crt_unknown.c_FUN_0060cf80 at 0060cf83
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;   SIGNAL_HANDLER_TYPE[26] g_GlobalSignalHandlers
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ceb4
        ;   Label: crt_signal.c_getSignalHandler_FUN_0060ceb4
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060ceb5
    CMP EBX,0x7                         ; 0060ceb9
    JZ 0x0060cec3                       ; 0060cebc
        ;   XREF to: 0060cec3 (CONDITIONAL_JUMP)  ; LAB_0060cec3
    CMP EBX,0x4                         ; 0060cebe
    JNZ 0x0060cecc                      ; 0060cec1
        ;   XREF to: 0060cecc (CONDITIONAL_JUMP)  ; LAB_0060cecc
    MOV EAX,dword ptr [EBX*0x8 + 0x685504] ; 0060cec3 | g_GlobalSignalHandlers
        ;   Label: LAB_0060cec3
    POP EBX                             ; 0060ceca
    RET                                 ; 0060cecb
    CALL dword ptr [0x00684ee4]         ; 0060cecc | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: LAB_0060cecc
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x58] ; 0060ced2
    POP EBX                             ; 0060ced6
    RET                                 ; 0060ced7

