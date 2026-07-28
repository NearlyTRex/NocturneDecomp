; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_util_c_invokeRuntimeHandler_FUN_0056ef50(RUNTIME_HANDLER_FUNC **ppHandler)
;
; Parameters:
; RUNTIME_HANDLER_FUNC * * Stack[0x4]:4   ppHandler
;
; XREF[2]:
;   crt_exit.c_ProcessExitHandlers_FUN_0056efb8 at 0056f007
;   crt_init.c_ProcessInitTermHandlers_FUN_0056ef60 at 0056efa2
;
; *****************************************************************************

section .text

    PUSH ES                             ; 0056ef50
        ;   Label: crt_util.c_invokeRuntimeHandler_FUN_0056ef50
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056ef51
    CMP dword ptr [EAX],0x0             ; 0056ef55
    JZ 0x0056ef5e                       ; 0056ef58
        ;   XREF to: 0056ef5e (CONDITIONAL_JUMP)  ; LAB_0056ef5e
    PUSH DS                             ; 0056ef5a
    POP ES                              ; 0056ef5b
    CALL dword ptr [EAX]                ; 0056ef5c
    POP ES                              ; 0056ef5e
        ;   Label: LAB_0056ef5e
    RET                                 ; 0056ef5f

