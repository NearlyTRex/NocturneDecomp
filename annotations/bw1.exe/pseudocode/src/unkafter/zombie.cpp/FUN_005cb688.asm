; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cb688(void)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   crt_unknown.c_FUN_005c53a0 at 005c53d0
;   unkafter_zombie.cpp_FUN_005ca454 at 005ca46d
;
; Referenced Globals:
;   undefined4 g_InitHandlers[180].status
;   undefined4 g_InitHandlers[180].priority
;   undefined4 g_InitHandlers[181].status
;   undefined4 g_InitHandlers[181].priority
;   undefined4 g_InitHandlers[181].func
;   undefined1 DAT_0062716c
;   undefined1 DAT_0062716d
;   undefined4 DAT_0062716e
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005cb620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb688
        ;   Label: unkafter_zombie.cpp_FUN_005cb688
    PUSH ESI                            ; 005cb689
    PUSH ES                             ; 005cb68a
    SUB ESP,0x8                         ; 005cb68b
    MOV ESI,0x62716c                    ; 005cb68e | DAT_0062716c
    MOV byte ptr [ESP + 0x4],AL         ; 005cb693
    MOV byte ptr [ESP],DL               ; 005cb697
    MOV EAX,0x627142                    ; 005cb69a | g_InitHandlers[180].status
        ;   Label: LAB_005cb69a
    MOV DL,byte ptr [ESP + 0x4]         ; 005cb69f
    MOV EBX,ESI                         ; 005cb6a3
    CMP ESI,EAX                         ; 005cb6a5
    JBE 0x005cb6c3                      ; 005cb6a7
        ;   XREF to: 005cb6c3 (CONDITIONAL_JUMP)  ; LAB_005cb6c3
    CMP byte ptr [EAX],0x2              ; 005cb6a9 | g_InitHandlers[180].status | g_InitHandlers[181].status
        ;   Label: LAB_005cb6a9
    JZ 0x005cb6b9                       ; 005cb6ac
        ;   XREF to: 005cb6b9 (CONDITIONAL_JUMP)  ; LAB_005cb6b9
    MOV CL,byte ptr [EAX + 0x1]         ; 005cb6ae | g_InitHandlers[180].priority | g_InitHandlers[181].priority
    CMP DL,CL                           ; 005cb6b1
    JA 0x005cb6b9                       ; 005cb6b3
        ;   XREF to: 005cb6b9 (CONDITIONAL_JUMP)  ; LAB_005cb6b9
    MOV EBX,EAX                         ; 005cb6b5
    MOV DL,CL                           ; 005cb6b7
    ADD EAX,0x6                         ; 005cb6b9
        ;   Label: LAB_005cb6b9
    CMP EAX,0x62716c                    ; 005cb6bc | DAT_0062716c
    JC 0x005cb6a9                       ; 005cb6c1
        ;   XREF to: 005cb6a9 (CONDITIONAL_JUMP)  ; LAB_005cb6a9
    CMP EBX,0x62716c                    ; 005cb6c3 | DAT_0062716c
        ;   Label: LAB_005cb6c3
    JZ 0x005cb6e4                       ; 005cb6c9
        ;   XREF to: 005cb6e4 (CONDITIONAL_JUMP)  ; LAB_005cb6e4
    MOV AL,byte ptr [EBX + 0x1]         ; 005cb6cb | g_InitHandlers[181].priority | DAT_0062716d
    CMP AL,byte ptr [ESP]               ; 005cb6ce
    JA 0x005cb6df                       ; 005cb6d1
        ;   XREF to: 005cb6df (CONDITIONAL_JUMP)  ; LAB_005cb6df
    LEA EAX,[EBX + 0x2]                 ; 005cb6d3 | g_InitHandlers[181].func
    PUSH EAX                            ; 005cb6d6 | g_InitHandlers[181].func | DAT_0062716e
    CALL unkafter_zombie.cpp_FUN_005cb620 ; 005cb6d7
        ;   XREF to: 005cb620 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cb620()
    ADD ESP,0x4                         ; 005cb6dc
    MOV byte ptr [EBX],0x2              ; 005cb6df | g_InitHandlers[181].status | DAT_0062716c
        ;   Label: LAB_005cb6df
    JMP 0x005cb69a                      ; 005cb6e2
        ;   XREF to: 005cb69a (UNCONDITIONAL_JUMP)  ; LAB_005cb69a
    ADD ESP,0x8                         ; 005cb6e4
        ;   Label: LAB_005cb6e4
    POP ES                              ; 005cb6e7
    POP ESI                             ; 005cb6e8
    POP EBX                             ; 005cb6e9
    RET                                 ; 005cb6ea

