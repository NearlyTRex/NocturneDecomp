; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ae4f8(void)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   crt_unknown.c_FUN_005a8210 at 005a8240
;   crt_unknown.c_FUN_005ad2c4 at 005ad2dd
;
; Referenced Globals:
;   undefined4 g_InitHandlers[165].status
;   undefined4 g_InitHandlers[165].priority
;   undefined4 g_InitHandlers[166].status
;   undefined4 g_InitHandlers[166].priority
;   undefined4 g_InitHandlers[166].func
;   undefined1 DAT_006084b6
;   undefined1 DAT_006084b7
;   undefined4 DAT_006084b8
;
; Called Functions:
;   crt_unknown.c_FUN_005ae490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae4f8
        ;   Label: crt_unknown.c_FUN_005ae4f8
    PUSH ESI                            ; 005ae4f9
    PUSH ES                             ; 005ae4fa
    SUB ESP,0x8                         ; 005ae4fb
    MOV ESI,0x6084b6                    ; 005ae4fe | DAT_006084b6
    MOV byte ptr [ESP + 0x4],AL         ; 005ae503
    MOV byte ptr [ESP],DL               ; 005ae507
    MOV EAX,0x60848c                    ; 005ae50a | g_InitHandlers[165].status
        ;   Label: LAB_005ae50a
    MOV DL,byte ptr [ESP + 0x4]         ; 005ae50f
    MOV EBX,ESI                         ; 005ae513
    CMP ESI,EAX                         ; 005ae515
    JBE 0x005ae533                      ; 005ae517
        ;   XREF to: 005ae533 (CONDITIONAL_JUMP)  ; LAB_005ae533
    CMP byte ptr [EAX],0x2              ; 005ae519 | g_InitHandlers[165].status | g_InitHandlers[166].status
        ;   Label: LAB_005ae519
    JZ 0x005ae529                       ; 005ae51c
        ;   XREF to: 005ae529 (CONDITIONAL_JUMP)  ; LAB_005ae529
    MOV CL,byte ptr [EAX + 0x1]         ; 005ae51e | g_InitHandlers[165].priority | g_InitHandlers[166].priority
    CMP DL,CL                           ; 005ae521
    JA 0x005ae529                       ; 005ae523
        ;   XREF to: 005ae529 (CONDITIONAL_JUMP)  ; LAB_005ae529
    MOV EBX,EAX                         ; 005ae525
    MOV DL,CL                           ; 005ae527
    ADD EAX,0x6                         ; 005ae529
        ;   Label: LAB_005ae529
    CMP EAX,0x6084b6                    ; 005ae52c | DAT_006084b6
    JC 0x005ae519                       ; 005ae531
        ;   XREF to: 005ae519 (CONDITIONAL_JUMP)  ; LAB_005ae519
    CMP EBX,0x6084b6                    ; 005ae533 | DAT_006084b6
        ;   Label: LAB_005ae533
    JZ 0x005ae554                       ; 005ae539
        ;   XREF to: 005ae554 (CONDITIONAL_JUMP)  ; LAB_005ae554
    MOV AL,byte ptr [EBX + 0x1]         ; 005ae53b | g_InitHandlers[166].priority | DAT_006084b7
    CMP AL,byte ptr [ESP]               ; 005ae53e
    JA 0x005ae54f                       ; 005ae541
        ;   XREF to: 005ae54f (CONDITIONAL_JUMP)  ; LAB_005ae54f
    LEA EAX,[EBX + 0x2]                 ; 005ae543 | g_InitHandlers[166].func
    PUSH EAX                            ; 005ae546 | g_InitHandlers[166].func | DAT_006084b8
    CALL crt_unknown.c_FUN_005ae490     ; 005ae547
        ;   XREF to: 005ae490 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ae490()
    ADD ESP,0x4                         ; 005ae54c
    MOV byte ptr [EBX],0x2              ; 005ae54f | g_InitHandlers[166].status | DAT_006084b6
        ;   Label: LAB_005ae54f
    JMP 0x005ae50a                      ; 005ae552
        ;   XREF to: 005ae50a (UNCONDITIONAL_JUMP)  ; LAB_005ae50a
    ADD ESP,0x8                         ; 005ae554
        ;   Label: LAB_005ae554
    POP ES                              ; 005ae557
    POP ESI                             ; 005ae558
    POP EBX                             ; 005ae559
    RET                                 ; 005ae55a

