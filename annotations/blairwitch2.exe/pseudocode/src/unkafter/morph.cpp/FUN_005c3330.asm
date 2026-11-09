; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c3330(void)
;
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005c2020 at 005c202c
;   crt_unknown.c_FUN_005bd078 at 005bd0b8
;
; Referenced Globals:
;   RuntimeHandlerEntry[203] g_InitHandlers
;   undefined4 g_InitHandlers[0].priority
;   undefined4 g_InitHandlers[1].status
;   undefined4 g_InitHandlers[1].priority
;   undefined4 g_InitHandlers[1].func
;   undefined4 g_InitHandlers[196].status
;   undefined4 g_InitHandlers[196].func
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c3320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3330
        ;   Label: unkafter_morph.cpp_FUN_005c3330
    PUSH ESI                            ; 005c3331
    PUSH ES                             ; 005c3332
    SUB ESP,0x4                         ; 005c3333
    MOV ESI,0x61fe22                    ; 005c3336 | g_InitHandlers[196].status
    MOV byte ptr [ESP],AL               ; 005c333b
    MOV EAX,0x61f98a                    ; 005c333e | g_InitHandlers
        ;   Label: LAB_005c333e
    MOV DL,byte ptr [ESP]               ; 005c3343
    MOV EBX,ESI                         ; 005c3346
    CMP ESI,EAX                         ; 005c3348
    JBE 0x005c3366                      ; 005c334a
        ;   XREF to: 005c3366 (CONDITIONAL_JUMP)  ; LAB_005c3366
    CMP byte ptr [EAX],0x2              ; 005c334c | g_InitHandlers | g_InitHandlers[1].status
        ;   Label: LAB_005c334c
    JZ 0x005c335c                       ; 005c334f
        ;   XREF to: 005c335c (CONDITIONAL_JUMP)  ; LAB_005c335c
    MOV CL,byte ptr [EAX + 0x1]         ; 005c3351 | g_InitHandlers[0].priority | g_InitHandlers[1].priority
    CMP DL,CL                           ; 005c3354
    JC 0x005c335c                       ; 005c3356
        ;   XREF to: 005c335c (CONDITIONAL_JUMP)  ; LAB_005c335c
    MOV EBX,EAX                         ; 005c3358
    MOV DL,CL                           ; 005c335a
    ADD EAX,0x6                         ; 005c335c
        ;   Label: LAB_005c335c
    CMP EAX,0x61fe22                    ; 005c335f | g_InitHandlers[196].status
    JC 0x005c334c                       ; 005c3364
        ;   XREF to: 005c334c (CONDITIONAL_JUMP)  ; LAB_005c334c
    CMP EBX,0x61fe22                    ; 005c3366 | g_InitHandlers[196].status
        ;   Label: LAB_005c3366
    JZ 0x005c337f                       ; 005c336c
        ;   XREF to: 005c337f (CONDITIONAL_JUMP)  ; LAB_005c337f
    LEA EAX,[EBX + 0x2]                 ; 005c336e | g_InitHandlers[1].func
    PUSH EAX                            ; 005c3371 | g_InitHandlers[1].func | g_InitHandlers[196].func
    CALL unkafter_morph.cpp_FUN_005c3320 ; 005c3372
        ;   XREF to: 005c3320 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3320()
    ADD ESP,0x4                         ; 005c3377
    MOV byte ptr [EBX],0x2              ; 005c337a | g_InitHandlers[1].status
    JMP 0x005c333e                      ; 005c337d
        ;   XREF to: 005c333e (UNCONDITIONAL_JUMP)  ; LAB_005c333e
    ADD ESP,0x4                         ; 005c337f
        ;   Label: LAB_005c337f
    POP ES                              ; 005c3382
    POP ESI                             ; 005c3383
    POP EBX                             ; 005c3384
    RET                                 ; 005c3385

