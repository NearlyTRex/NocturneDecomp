; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_exit_c_ProcessExitHandlers_FUN_0060ac88(uchar min_priority,uchar max_priority)
;
;
; XREF[2]:
;   crt_exit.c_ExitProcess_FUN_00602700 at 00602730
;   crt_startup.c_ExitApplication_FUN_0060b534 at 0060b54d
;
; Referenced Globals:
;   BYTE g_ExitHandlerTableStart = \x00
;   BYTE g_ExitHandlerPriorityEnd = \x01
;   RUNTIME_HANDLER_FUNC* g_FirstExitHandler = 005fde93
;   RuntimeHandlerEntry[6] g_ExitHandlers
;   undefined4 g_ExitHandlers[0].priority
;   undefined4 g_ExitHandlers[0].func
;   RuntimeHandlerEntry g_ExitHandlerTableEnd
;   undefined4 g_ExitHandlerTableEnd.priority
;   undefined4 g_ExitHandlerTableEnd.func
;
; Called Functions:
;   crt_util.c_invokeRuntimeHandler_FUN_0060ac20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ac88
        ;   Label: crt_exit.c_ProcessExitHandlers_FUN_0060ac88
    PUSH ESI                            ; 0060ac89
    PUSH ES                             ; 0060ac8a
    SUB ESP,0x8                         ; 0060ac8b
    MOV ESI,0x685b42                    ; 0060ac8e | g_ExitHandlerTableEnd
    MOV byte ptr [ESP + 0x4],AL         ; 0060ac93
    MOV byte ptr [ESP],DL               ; 0060ac97
    MOV EAX,0x685b18                    ; 0060ac9a | g_ExitHandlerTableStart
        ;   Label: LAB_0060ac9a
    MOV DL,byte ptr [ESP + 0x4]         ; 0060ac9f
    MOV EBX,ESI                         ; 0060aca3
    CMP ESI,EAX                         ; 0060aca5
    JBE 0x0060acc3                      ; 0060aca7
        ;   XREF to: 0060acc3 (CONDITIONAL_JUMP)  ; LAB_0060acc3
    CMP byte ptr [EAX],0x2              ; 0060aca9 | g_ExitHandlerTableStart | g_ExitHandlers
        ;   Label: LAB_0060aca9
    JZ 0x0060acb9                       ; 0060acac
        ;   XREF to: 0060acb9 (CONDITIONAL_JUMP)  ; LAB_0060acb9
    MOV CL,byte ptr [EAX + 0x1]         ; 0060acae | g_ExitHandlerPriorityEnd | g_ExitHandlers[0].priority
    CMP DL,CL                           ; 0060acb1
    JA 0x0060acb9                       ; 0060acb3
        ;   XREF to: 0060acb9 (CONDITIONAL_JUMP)  ; LAB_0060acb9
    MOV EBX,EAX                         ; 0060acb5 | g_ExitHandlerTableStart
    MOV DL,CL                           ; 0060acb7
    ADD EAX,0x6                         ; 0060acb9 | g_ExitHandlers
        ;   Label: LAB_0060acb9
    CMP EAX,0x685b42                    ; 0060acbc | g_ExitHandlerTableEnd
    JC 0x0060aca9                       ; 0060acc1
        ;   XREF to: 0060aca9 (CONDITIONAL_JUMP)  ; LAB_0060aca9
    CMP EBX,0x685b42                    ; 0060acc3 | g_ExitHandlerTableEnd
        ;   Label: LAB_0060acc3
    JZ 0x0060ace4                       ; 0060acc9
        ;   XREF to: 0060ace4 (CONDITIONAL_JUMP)  ; LAB_0060ace4
    MOV AL,byte ptr [EBX + 0x1]         ; 0060accb | g_ExitHandlerPriorityEnd | g_ExitHandlers[0].priority | g_ExitHandlerTableEnd.priority
    CMP AL,byte ptr [ESP]               ; 0060acce
    JA 0x0060acdf                       ; 0060acd1
        ;   XREF to: 0060acdf (CONDITIONAL_JUMP)  ; LAB_0060acdf
    LEA EAX,[EBX + 0x2]                 ; 0060acd3 | g_FirstExitHandler
    PUSH EAX                            ; 0060acd6 | g_FirstExitHandler | g_ExitHandlers[0].func | g_ExitHandlerTableEnd.func
    CALL crt_util.c_invokeRuntimeHandler_FUN_0060ac20 ; 0060acd7
        ;   XREF to: 0060ac20 (UNCONDITIONAL_CALL)  ; void crt_util.c_invokeRuntimeHandler_FUN_0060ac20(RUNTIME_HANDLER_FUNC * * ppHandler)
    ADD ESP,0x4                         ; 0060acdc
    MOV byte ptr [EBX],0x2              ; 0060acdf | g_ExitHandlerTableStart | g_ExitHandlers | g_ExitHandlerTableEnd
        ;   Label: LAB_0060acdf
    JMP 0x0060ac9a                      ; 0060ace2
        ;   XREF to: 0060ac9a (UNCONDITIONAL_JUMP)  ; LAB_0060ac9a
    ADD ESP,0x8                         ; 0060ace4
        ;   Label: LAB_0060ace4
    POP ES                              ; 0060ace7
    POP ESI                             ; 0060ace8
    POP EBX                             ; 0060ace9
    RET                                 ; 0060acea

