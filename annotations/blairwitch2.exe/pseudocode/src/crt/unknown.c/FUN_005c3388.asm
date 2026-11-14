; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c3388(void)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   crt_unknown.c_FUN_005bd0d0 at 005bd100
;   crt_unknown.c_FUN_005c2154 at 005c216d
;
; Referenced Globals:
;   undefined4 g_InitHandlers[196].status
;   undefined4 g_InitHandlers[196].priority
;   undefined4 g_InitHandlers[197].status
;   undefined4 g_InitHandlers[197].priority
;   undefined4 g_InitHandlers[197].func
;   undefined1 DAT_0061fe4c
;   undefined1 DAT_0061fe4d
;   undefined4 DAT_0061fe4e
;
; Called Functions:
;   crt_unknown.c_FUN_005c3320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3388
        ;   Label: crt_unknown.c_FUN_005c3388
    PUSH ESI                            ; 005c3389
    PUSH ES                             ; 005c338a
    SUB ESP,0x8                         ; 005c338b
    MOV ESI,0x61fe4c                    ; 005c338e | DAT_0061fe4c
    MOV byte ptr [ESP + 0x4],AL         ; 005c3393
    MOV byte ptr [ESP],DL               ; 005c3397
    MOV EAX,0x61fe22                    ; 005c339a | g_InitHandlers[196].status
        ;   Label: LAB_005c339a
    MOV DL,byte ptr [ESP + 0x4]         ; 005c339f
    MOV EBX,ESI                         ; 005c33a3
    CMP ESI,EAX                         ; 005c33a5
    JBE 0x005c33c3                      ; 005c33a7
        ;   XREF to: 005c33c3 (CONDITIONAL_JUMP)  ; LAB_005c33c3
    CMP byte ptr [EAX],0x2              ; 005c33a9 | g_InitHandlers[196].status | g_InitHandlers[197].status
        ;   Label: LAB_005c33a9
    JZ 0x005c33b9                       ; 005c33ac
        ;   XREF to: 005c33b9 (CONDITIONAL_JUMP)  ; LAB_005c33b9
    MOV CL,byte ptr [EAX + 0x1]         ; 005c33ae | g_InitHandlers[196].priority | g_InitHandlers[197].priority
    CMP DL,CL                           ; 005c33b1
    JA 0x005c33b9                       ; 005c33b3
        ;   XREF to: 005c33b9 (CONDITIONAL_JUMP)  ; LAB_005c33b9
    MOV EBX,EAX                         ; 005c33b5
    MOV DL,CL                           ; 005c33b7
    ADD EAX,0x6                         ; 005c33b9
        ;   Label: LAB_005c33b9
    CMP EAX,0x61fe4c                    ; 005c33bc | DAT_0061fe4c
    JC 0x005c33a9                       ; 005c33c1
        ;   XREF to: 005c33a9 (CONDITIONAL_JUMP)  ; LAB_005c33a9
    CMP EBX,0x61fe4c                    ; 005c33c3 | DAT_0061fe4c
        ;   Label: LAB_005c33c3
    JZ 0x005c33e4                       ; 005c33c9
        ;   XREF to: 005c33e4 (CONDITIONAL_JUMP)  ; LAB_005c33e4
    MOV AL,byte ptr [EBX + 0x1]         ; 005c33cb | g_InitHandlers[197].priority | DAT_0061fe4d
    CMP AL,byte ptr [ESP]               ; 005c33ce
    JA 0x005c33df                       ; 005c33d1
        ;   XREF to: 005c33df (CONDITIONAL_JUMP)  ; LAB_005c33df
    LEA EAX,[EBX + 0x2]                 ; 005c33d3 | g_InitHandlers[197].func
    PUSH EAX                            ; 005c33d6 | g_InitHandlers[197].func | DAT_0061fe4e
    CALL crt_unknown.c_FUN_005c3320     ; 005c33d7
        ;   XREF to: 005c3320 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3320()
    ADD ESP,0x4                         ; 005c33dc
    MOV byte ptr [EBX],0x2              ; 005c33df | g_InitHandlers[197].status | DAT_0061fe4c
        ;   Label: LAB_005c33df
    JMP 0x005c339a                      ; 005c33e2
        ;   XREF to: 005c339a (UNCONDITIONAL_JUMP)  ; LAB_005c339a
    ADD ESP,0x8                         ; 005c33e4
        ;   Label: LAB_005c33e4
    POP ES                              ; 005c33e7
    POP ESI                             ; 005c33e8
    POP EBX                             ; 005c33e9
    RET                                 ; 005c33ea

