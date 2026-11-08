; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040c530(char *param_1)
;
;
; XREF[2]:
;   FUN_0040c5a0 at 0040c5a8
;   FUN_004fb590 at 004fb78e
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;   undefined4 DAT_007bc044
;   undefined4 DAT_007bc048
;   undefined4 DAT_007bc04c
;
; Called Functions:
;   FUN_005b8470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c530
        ;   Label: FUN_0040c530
    PUSH ESI                            ; 0040c531
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040c532
    XOR EBX,EBX                         ; 0040c536
    XOR EAX,EAX                         ; 0040c538
        ;   Label: LAB_0040c538
    MOV AL,byte ptr [ESI]               ; 0040c53a
    INC ESI                             ; 0040c53c
    TEST EAX,EAX                        ; 0040c53d
    JNZ 0x0040c567                      ; 0040c53f
        ;   XREF to: 0040c567 (CONDITIONAL_JUMP)  ; LAB_0040c567
    MOV EDX,dword ptr [0x007bc044]      ; 0040c541 | DAT_007bc044
    MOV ESI,EBX                         ; 0040c547
    TEST EDX,EDX                        ; 0040c549
    JLE 0x0040c562                      ; 0040c54b
        ;   XREF to: 0040c562 (CONDITIONAL_JUMP)  ; LAB_0040c562
    SHL EDX,0x2                         ; 0040c54d
    MOV EBX,dword ptr [EAX + 0x7bc048]  ; 0040c550 | DAT_007bc048 | DAT_007bc04c
        ;   Label: LAB_0040c550
    CMP ESI,dword ptr [EBX + 0x38]      ; 0040c556
    JZ 0x0040c598                       ; 0040c559
        ;   XREF to: 0040c598 (CONDITIONAL_JUMP)  ; LAB_0040c598
    ADD EAX,0x4                         ; 0040c55b
    CMP EAX,EDX                         ; 0040c55e
    JL 0x0040c550                       ; 0040c560
        ;   XREF to: 0040c550 (CONDITIONAL_JUMP)  ; LAB_0040c550
    XOR EAX,EAX                         ; 0040c562
        ;   Label: LAB_0040c562
    POP ESI                             ; 0040c564
    POP EBX                             ; 0040c565
    RET                                 ; 0040c566
    MOV DL,AL                           ; 0040c567
        ;   Label: LAB_0040c567
    INC DL                              ; 0040c569
    AND EDX,0xff                        ; 0040c56b
    TEST byte ptr [EDX + 0x61ed94],0xe0 ; 0040c571 | DAT_0061ed94
    JZ 0x0040c538                       ; 0040c578
        ;   XREF to: 0040c538 (CONDITIONAL_JUMP)  ; LAB_0040c538
    PUSH EAX                            ; 0040c57a
    CALL FUN_005b8470                   ; 0040c57b
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8470()
    MOV EDX,EBX                         ; 0040c580
    SHL EDX,0x7                         ; 0040c582
    SHR EBX,0x19                        ; 0040c585
    ADD EDX,EBX                         ; 0040c588
    MOV EBX,EAX                         ; 0040c58a
    SHL EBX,0x11                        ; 0040c58c
    ADD EBX,EDX                         ; 0040c58f
    ADD ESP,0x4                         ; 0040c591
    ADD EBX,EAX                         ; 0040c594
    JMP 0x0040c538                      ; 0040c596
        ;   XREF to: 0040c538 (UNCONDITIONAL_JUMP)  ; LAB_0040c538
    MOV EAX,EBX                         ; 0040c598
        ;   Label: LAB_0040c598
    POP ESI                             ; 0040c59a
    POP EBX                             ; 0040c59b
    RET                                 ; 0040c59c

