; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack SIGNAL_HANDLER_TYPE crt_signal.c_setSignalHandler_FUN_0060ce60(int signal_number, SIGNAL_HANDLER_TYPE new_handler_type)
;
; Parameters:
; int              Stack[0x4]:4   signal_number
; SIGNAL_HANDLER_TYPE Stack[0x8]:4   new_handler_type
;
; XREF[4]:
;   crt_signal.c_processSignal_FUN_0060d128 at 0060d177
;   crt_signal.c_raiseFPE_FUN_0060d028 at 0060d048
;   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 at 0060d0d2
;   crt_unknown.c_FUN_0060d1ec at 0060d20a
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

    PUSH EBX                            ; 0060ce60
        ;   Label: crt_signal.c_setSignalHandler_FUN_0060ce60
    PUSH ESI                            ; 0060ce61
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060ce62
    CMP EBX,0x7                         ; 0060ce66
    JZ 0x0060ce70                       ; 0060ce69
        ;   XREF to: 0060ce70 (CONDITIONAL_JUMP)  ; LAB_0060ce70
    CMP EBX,0x4                         ; 0060ce6b
    JNZ 0x0060ce8c                      ; 0060ce6e
        ;   XREF to: 0060ce8c (CONDITIONAL_JUMP)  ; LAB_0060ce8c
    LEA EAX,[EBX*0x8 + 0x0]             ; 0060ce70
        ;   Label: LAB_0060ce70
    MOV ESI,dword ptr [ESP + 0x10]      ; 0060ce77
    MOV EBX,dword ptr [EAX + 0x685504]  ; 0060ce7b | g_GlobalSignalHandlers
    MOV dword ptr [EAX + 0x685504],ESI  ; 0060ce81 | g_GlobalSignalHandlers
    MOV EAX,EBX                         ; 0060ce87
    POP ESI                             ; 0060ce89
    POP EBX                             ; 0060ce8a
    RET                                 ; 0060ce8b
    LEA ESI,[EBX*0x8 + 0x0]             ; 0060ce8c
        ;   Label: LAB_0060ce8c
    CALL dword ptr [0x00684ee4]         ; 0060ce93 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x58] ; 0060ce99
    CALL dword ptr [0x00684ee4]         ; 0060ce9d | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    ADD EAX,ESI                         ; 0060cea3
    MOV ESI,dword ptr [ESP + 0x10]      ; 0060cea5
    MOV dword ptr [EAX + 0x58],ESI      ; 0060cea9
    MOV EAX,EBX                         ; 0060ceac
    POP ESI                             ; 0060ceae
    POP EBX                             ; 0060ceaf
    RET                                 ; 0060ceb0

