; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_init.c_ProcessInitTermHandlers_FUN_0060ac30(int max_priority)
;
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8 at 006026e8
;   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 at 00609e7c
;
; Referenced Globals:
;   BYTE g_InitHandlerStatusStart = \x00
;   BYTE g_InitHandlerPriorityStart = @
;   RUNTIME_HANDLER_FUNC* g_FirstInitHandler = 00408320
;   RuntimeHandlerEntry[166] g_InitHandlers
;   undefined4 g_InitHandlers[0].priority
;   undefined4 g_InitHandlers[0].func
;   BYTE g_ExitHandlerTableStart = \x00
;   RUNTIME_HANDLER_FUNC* g_FirstExitHandler = 005fde93
;
; Called Functions:
;   crt_util.c_invokeRuntimeHandler_FUN_0060ac20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ac30
        ;   Label: crt_init.c_ProcessInitTermHandlers_FUN_0060ac30
    PUSH ESI                            ; 0060ac31
    PUSH ES                             ; 0060ac32
    SUB ESP,0x4                         ; 0060ac33
    MOV ESI,0x685b18                    ; 0060ac36 | g_ExitHandlerTableStart
    MOV byte ptr [ESP],AL               ; 0060ac3b
    MOV EAX,0x68572e                    ; 0060ac3e | g_InitHandlerStatusStart
        ;   Label: LAB_0060ac3e
    MOV DL,byte ptr [ESP]               ; 0060ac43
    MOV EBX,ESI                         ; 0060ac46
    CMP ESI,EAX                         ; 0060ac48
    JBE 0x0060ac66                      ; 0060ac4a
        ;   XREF to: 0060ac66 (CONDITIONAL_JUMP)  ; LAB_0060ac66
    CMP byte ptr [EAX],0x2              ; 0060ac4c | g_InitHandlerStatusStart | g_InitHandlers
        ;   Label: LAB_0060ac4c
    JZ 0x0060ac5c                       ; 0060ac4f
        ;   XREF to: 0060ac5c (CONDITIONAL_JUMP)  ; LAB_0060ac5c
    MOV CL,byte ptr [EAX + 0x1]         ; 0060ac51 | g_InitHandlerPriorityStart | g_InitHandlers[0].priority
    CMP DL,CL                           ; 0060ac54
    JC 0x0060ac5c                       ; 0060ac56
        ;   XREF to: 0060ac5c (CONDITIONAL_JUMP)  ; LAB_0060ac5c
    MOV EBX,EAX                         ; 0060ac58 | g_InitHandlerStatusStart
    MOV DL,CL                           ; 0060ac5a
    ADD EAX,0x6                         ; 0060ac5c | g_InitHandlers
        ;   Label: LAB_0060ac5c
    CMP EAX,0x685b18                    ; 0060ac5f | g_ExitHandlerTableStart
    JC 0x0060ac4c                       ; 0060ac64
        ;   XREF to: 0060ac4c (CONDITIONAL_JUMP)  ; LAB_0060ac4c
    CMP EBX,0x685b18                    ; 0060ac66 | g_ExitHandlerTableStart
        ;   Label: LAB_0060ac66
    JZ 0x0060ac7f                       ; 0060ac6c
        ;   XREF to: 0060ac7f (CONDITIONAL_JUMP)  ; LAB_0060ac7f
    LEA EAX,[EBX + 0x2]                 ; 0060ac6e | g_FirstInitHandler
    PUSH EAX                            ; 0060ac71 | g_FirstInitHandler | g_InitHandlers[0].func | g_FirstExitHandler
    CALL crt_util.c_invokeRuntimeHandler_FUN_0060ac20 ; 0060ac72
        ;   XREF to: 0060ac20 (UNCONDITIONAL_CALL)  ; void crt_util.c_invokeRuntimeHandler_FUN_0060ac20(RUNTIME_HANDLER_FUNC * * ppHandler)
    ADD ESP,0x4                         ; 0060ac77
    MOV byte ptr [EBX],0x2              ; 0060ac7a | g_InitHandlerStatusStart | g_InitHandlers
    JMP 0x0060ac3e                      ; 0060ac7d
        ;   XREF to: 0060ac3e (UNCONDITIONAL_JUMP)  ; LAB_0060ac3e
    ADD ESP,0x4                         ; 0060ac7f
        ;   Label: LAB_0060ac7f
    POP ES                              ; 0060ac82
    POP ESI                             ; 0060ac83
    POP EBX                             ; 0060ac84
    RET                                 ; 0060ac85

