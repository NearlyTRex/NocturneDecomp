; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_asgaya_cpp_FUN_005ae4a0(void)
;
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005ad1e0 at 005ad1ec
;   crt_unknown.c_FUN_005a81b8 at 005a81f8
;
; Referenced Globals:
;   RuntimeHandlerEntry[172] g_InitHandlers
;   undefined4 g_InitHandlers[0].priority
;   undefined4 g_InitHandlers[1].status
;   undefined4 g_InitHandlers[1].priority
;   undefined4 g_InitHandlers[1].func
;   undefined4 g_InitHandlers[165].status
;   undefined4 g_InitHandlers[165].func
;
; Called Functions:
;   unkafter_asgaya.cpp_FUN_005ae490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae4a0
        ;   Label: unkafter_asgaya.cpp_FUN_005ae4a0
    PUSH ESI                            ; 005ae4a1
    PUSH ES                             ; 005ae4a2
    SUB ESP,0x4                         ; 005ae4a3
    MOV ESI,0x60848c                    ; 005ae4a6 | g_InitHandlers[165].status
    MOV byte ptr [ESP],AL               ; 005ae4ab
    MOV EAX,0x6080ae                    ; 005ae4ae | g_InitHandlers
        ;   Label: LAB_005ae4ae
    MOV DL,byte ptr [ESP]               ; 005ae4b3
    MOV EBX,ESI                         ; 005ae4b6
    CMP ESI,EAX                         ; 005ae4b8
    JBE 0x005ae4d6                      ; 005ae4ba
        ;   XREF to: 005ae4d6 (CONDITIONAL_JUMP)  ; LAB_005ae4d6
    CMP byte ptr [EAX],0x2              ; 005ae4bc | g_InitHandlers | g_InitHandlers[1].status
        ;   Label: LAB_005ae4bc
    JZ 0x005ae4cc                       ; 005ae4bf
        ;   XREF to: 005ae4cc (CONDITIONAL_JUMP)  ; LAB_005ae4cc
    MOV CL,byte ptr [EAX + 0x1]         ; 005ae4c1 | g_InitHandlers[0].priority | g_InitHandlers[1].priority
    CMP DL,CL                           ; 005ae4c4
    JC 0x005ae4cc                       ; 005ae4c6
        ;   XREF to: 005ae4cc (CONDITIONAL_JUMP)  ; LAB_005ae4cc
    MOV EBX,EAX                         ; 005ae4c8
    MOV DL,CL                           ; 005ae4ca
    ADD EAX,0x6                         ; 005ae4cc
        ;   Label: LAB_005ae4cc
    CMP EAX,0x60848c                    ; 005ae4cf | g_InitHandlers[165].status
    JC 0x005ae4bc                       ; 005ae4d4
        ;   XREF to: 005ae4bc (CONDITIONAL_JUMP)  ; LAB_005ae4bc
    CMP EBX,0x60848c                    ; 005ae4d6 | g_InitHandlers[165].status
        ;   Label: LAB_005ae4d6
    JZ 0x005ae4ef                       ; 005ae4dc
        ;   XREF to: 005ae4ef (CONDITIONAL_JUMP)  ; LAB_005ae4ef
    LEA EAX,[EBX + 0x2]                 ; 005ae4de | g_InitHandlers[1].func
    PUSH EAX                            ; 005ae4e1 | g_InitHandlers[1].func | g_InitHandlers[165].func
    CALL unkafter_asgaya.cpp_FUN_005ae490 ; 005ae4e2
        ;   XREF to: 005ae490 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ae490()
    ADD ESP,0x4                         ; 005ae4e7
    MOV byte ptr [EBX],0x2              ; 005ae4ea | g_InitHandlers[1].status
    JMP 0x005ae4ae                      ; 005ae4ed
        ;   XREF to: 005ae4ae (UNCONDITIONAL_JUMP)  ; LAB_005ae4ae
    ADD ESP,0x4                         ; 005ae4ef
        ;   Label: LAB_005ae4ef
    POP ES                              ; 005ae4f2
    POP ESI                             ; 005ae4f3
    POP EBX                             ; 005ae4f4
    RET                                 ; 005ae4f5

