; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_0060ced8(int param_1)
;
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;   undefined4 g_GlobalSignalHandlers[1]
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ced8
        ;   Label: crt_unknown.c_FUN_0060ced8
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060ced9
    CMP EBX,0x7                         ; 0060cedd
    JZ 0x0060cee7                       ; 0060cee0
        ;   XREF to: 0060cee7 (CONDITIONAL_JUMP)  ; LAB_0060cee7
    CMP EBX,0x4                         ; 0060cee2
    JNZ 0x0060cef0                      ; 0060cee5
        ;   XREF to: 0060cef0 (CONDITIONAL_JUMP)  ; LAB_0060cef0
    MOV EAX,dword ptr [EBX*0x8 + 0x685508] ; 0060cee7 | g_GlobalSignalHandlers[1]
        ;   Label: LAB_0060cee7
    POP EBX                             ; 0060ceee
    RET                                 ; 0060ceef
    CALL dword ptr [0x00684ee4]         ; 0060cef0 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: LAB_0060cef0
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x5c] ; 0060cef6
    POP EBX                             ; 0060cefa
    RET                                 ; 0060cefb

