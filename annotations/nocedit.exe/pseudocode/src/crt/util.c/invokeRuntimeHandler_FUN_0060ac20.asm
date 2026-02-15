; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_util_c_invokeRuntimeHandler_FUN_0060ac20(RUNTIME_HANDLER_FUNC **ppHandler)
;
; Parameters:
; RUNTIME_HANDLER_FUNC * * Stack[0x4]:4   ppHandler
;
; XREF[2]:
;   crt_exit.c_ProcessExitHandlers_FUN_0060ac88 at 0060acd7
;   crt_init.c_ProcessInitTermHandlers_FUN_0060ac30 at 0060ac72
;
; *****************************************************************************

section .text

    PUSH ES                             ; 0060ac20
        ;   Label: crt_util.c_invokeRuntimeHandler_FUN_0060ac20
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060ac21
    CMP dword ptr [EAX],0x0             ; 0060ac25
    JZ 0x0060ac2e                       ; 0060ac28
        ;   XREF to: 0060ac2e (CONDITIONAL_JUMP)  ; LAB_0060ac2e
    PUSH DS                             ; 0060ac2a
    POP ES                              ; 0060ac2b
    CALL dword ptr [EAX]                ; 0060ac2c
    POP ES                              ; 0060ac2e
        ;   Label: LAB_0060ac2e
    RET                                 ; 0060ac2f

