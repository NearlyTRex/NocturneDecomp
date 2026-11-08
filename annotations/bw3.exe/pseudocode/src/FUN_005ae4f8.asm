; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ae4f8(void)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   FUN_005a8210 at 005a8240
;   FUN_005ad2c4 at 005ad2dd
;
; Referenced Globals:
;   undefined1 DAT_0060848c
;   undefined1 DAT_0060848d
;   undefined1 DAT_00608492
;   undefined1 DAT_00608493
;   void* PTR_FUN_00608494 = 005a9e24
;   undefined1 DAT_006084b6
;   undefined1 DAT_006084b7
;   undefined4 DAT_006084b8
;
; Called Functions:
;   FUN_005ae490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae4f8
        ;   Label: FUN_005ae4f8
    PUSH ESI                            ; 005ae4f9
    PUSH ES                             ; 005ae4fa
    SUB ESP,0x8                         ; 005ae4fb
    MOV ESI,0x6084b6                    ; 005ae4fe | DAT_006084b6
    MOV byte ptr [ESP + 0x4],AL         ; 005ae503
    MOV byte ptr [ESP],DL               ; 005ae507
    MOV EAX,0x60848c                    ; 005ae50a | DAT_0060848c
        ;   Label: LAB_005ae50a
    MOV DL,byte ptr [ESP + 0x4]         ; 005ae50f
    MOV EBX,ESI                         ; 005ae513
    CMP ESI,EAX                         ; 005ae515
    JBE 0x005ae533                      ; 005ae517
        ;   XREF to: 005ae533 (CONDITIONAL_JUMP)  ; LAB_005ae533
    CMP byte ptr [EAX],0x2              ; 005ae519 | DAT_0060848c | DAT_00608492
        ;   Label: LAB_005ae519
    JZ 0x005ae529                       ; 005ae51c
        ;   XREF to: 005ae529 (CONDITIONAL_JUMP)  ; LAB_005ae529
    MOV CL,byte ptr [EAX + 0x1]         ; 005ae51e | DAT_0060848d | DAT_00608493
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
    MOV AL,byte ptr [EBX + 0x1]         ; 005ae53b | DAT_00608493 | DAT_006084b7
    CMP AL,byte ptr [ESP]               ; 005ae53e
    JA 0x005ae54f                       ; 005ae541
        ;   XREF to: 005ae54f (CONDITIONAL_JUMP)  ; LAB_005ae54f
    LEA EAX,[EBX + 0x2]                 ; 005ae543 | PTR_FUN_00608494
    PUSH EAX                            ; 005ae546 | PTR_FUN_00608494 | DAT_006084b8
    CALL FUN_005ae490                   ; 005ae547
        ;   XREF to: 005ae490 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae490()
    ADD ESP,0x4                         ; 005ae54c
    MOV byte ptr [EBX],0x2              ; 005ae54f | DAT_00608492 | DAT_006084b6
        ;   Label: LAB_005ae54f
    JMP 0x005ae50a                      ; 005ae552
        ;   XREF to: 005ae50a (UNCONDITIONAL_JUMP)  ; LAB_005ae50a
    ADD ESP,0x8                         ; 005ae554
        ;   Label: LAB_005ae554
    POP ES                              ; 005ae557
    POP ESI                             ; 005ae558
    POP EBX                             ; 005ae559
    RET                                 ; 005ae55a

