; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005af560(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060797d
;   undefined4 DAT_02d25920
;   undefined4 DAT_02d25924
;   undefined4 DAT_02d261e0
;
; Called Functions:
;   FUN_005a28f0
;   FUN_005a3770
;   FUN_005af550
;   FUN_005b0a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af560
        ;   Label: FUN_005af560
    PUSH ESI                            ; 005af561
    PUSH EDI                            ; 005af562
    PUSH EBP                            ; 005af563
    MOV EDI,dword ptr [0x02d25924]      ; 005af564 | DAT_02d25924
    TEST EDI,EDI                        ; 005af56a
    JNZ 0x005af63e                      ; 005af56c
        ;   XREF to: 005af63e (CONDITIONAL_JUMP)  ; LAB_005af63e
    MOV EBP,dword ptr [0x0060797d]      ; 005af572 | DAT_0060797d
    XOR ESI,ESI                         ; 005af578
    MOV DL,byte ptr [EBP]               ; 005af57a
    MOV EAX,EBP                         ; 005af57d
    TEST DL,DL                          ; 005af57f
    JZ 0x005af599                       ; 005af581
        ;   XREF to: 005af599 (CONDITIONAL_JUMP)  ; LAB_005af599
    MOV DH,byte ptr [EAX]               ; 005af583
        ;   Label: LAB_005af583
    LEA EBX,[EAX + 0x1]                 ; 005af585
    TEST DH,DH                          ; 005af588
    JZ 0x005af590                       ; 005af58a
        ;   XREF to: 005af590 (CONDITIONAL_JUMP)  ; LAB_005af590
    MOV EAX,EBX                         ; 005af58c
    JMP 0x005af583                      ; 005af58e
        ;   XREF to: 005af583 (UNCONDITIONAL_JUMP)  ; LAB_005af583
    INC ESI                             ; 005af590
        ;   Label: LAB_005af590
    MOV DH,byte ptr [EBX]               ; 005af591
    MOV EAX,EBX                         ; 005af593
    TEST DH,DH                          ; 005af595
    JNZ 0x005af583                      ; 005af597
        ;   XREF to: 005af583 (CONDITIONAL_JUMP)  ; LAB_005af583
    MOV dword ptr [0x02d25924],EDI      ; 005af599 | DAT_02d25924
        ;   Label: LAB_005af599
    SUB EAX,EBP                         ; 005af59f
    JNZ 0x005af5a8                      ; 005af5a1
        ;   XREF to: 005af5a8 (CONDITIONAL_JUMP)  ; LAB_005af5a8
    MOV EAX,0x1                         ; 005af5a3
    PUSH EAX                            ; 005af5a8
        ;   Label: LAB_005af5a8
    CALL FUN_005af550                   ; 005af5a9
        ;   XREF to: 005af550 (UNCONDITIONAL_CALL)  ; undefined FUN_005af550()
    MOV EBX,EAX                         ; 005af5ae
    ADD ESP,0x4                         ; 005af5b0
    TEST EAX,EAX                        ; 005af5b3
    JZ 0x005af639                       ; 005af5b5
        ;   XREF to: 005af639 (CONDITIONAL_JUMP)  ; LAB_005af639
    MOV [0x02d261e0],EAX                ; 005af5bb | DAT_02d261e0
    LEA EAX,[ESI*0x4 + 0x0]             ; 005af5c0
    ADD EAX,0x4                         ; 005af5c7
    ADD ESI,EAX                         ; 005af5ca
    PUSH ESI                            ; 005af5cc
    CALL FUN_005af550                   ; 005af5cd
        ;   XREF to: 005af550 (UNCONDITIONAL_CALL)  ; undefined FUN_005af550()
    ADD ESP,0x4                         ; 005af5d2
    TEST EAX,EAX                        ; 005af5d5
    JZ 0x005af630                       ; 005af5d7
        ;   XREF to: 005af630 (CONDITIONAL_JUMP)  ; LAB_005af630
    MOV EDI,EAX                         ; 005af5d9
    MOV DL,byte ptr [EBP]               ; 005af5db
    XOR ESI,ESI                         ; 005af5de
    XOR ECX,ECX                         ; 005af5e0
    MOV EAX,EBP                         ; 005af5e2
    TEST DL,DL                          ; 005af5e4
    JZ 0x005af602                       ; 005af5e6
        ;   XREF to: 005af602 (CONDITIONAL_JUMP)  ; LAB_005af602
    MOV EDX,EDI                         ; 005af5e8
        ;   Label: LAB_005af5e8
    MOV dword ptr [ECX + EDX*0x1],EBX   ; 005af5ea
    INC EBX                             ; 005af5ed
        ;   Label: LAB_005af5ed
    MOV DL,byte ptr [EAX]               ; 005af5ee
    INC EAX                             ; 005af5f0
    MOV byte ptr [EBX + -0x1],DL        ; 005af5f1
    TEST DL,DL                          ; 005af5f4
    JNZ 0x005af5ed                      ; 005af5f6
        ;   XREF to: 005af5ed (CONDITIONAL_JUMP)  ; LAB_005af5ed
    ADD ECX,0x4                         ; 005af5f8
    MOV DL,byte ptr [EAX]               ; 005af5fb
    INC ESI                             ; 005af5fd
    TEST DL,DL                          ; 005af5fe
    JNZ 0x005af5e8                      ; 005af600
        ;   XREF to: 005af5e8 (CONDITIONAL_JUMP)  ; LAB_005af5e8
    MOV EAX,EDI                         ; 005af602
        ;   Label: LAB_005af602
    PUSH ESI                            ; 005af604
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 005af605
    ADD ECX,0x4                         ; 005af60c
    PUSH 0x0                            ; 005af60f
    LEA EAX,[EDI + ECX*0x1]             ; 005af611
    PUSH EAX                            ; 005af614
    MOV [0x02d25920],EAX                ; 005af615 | DAT_02d25920
    MOV dword ptr [0x02d25924],EDI      ; 005af61a | DAT_02d25924
    CALL FUN_005a28f0                   ; 005af620
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV EDI,dword ptr [0x02d25924]      ; 005af625 | DAT_02d25924
    ADD ESP,0xc                         ; 005af62b
    JMP 0x005af639                      ; 005af62e
        ;   XREF to: 005af639 (UNCONDITIONAL_JUMP)  ; LAB_005af639
    PUSH EBX                            ; 005af630
        ;   Label: LAB_005af630
    CALL FUN_005a3770                   ; 005af631
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005af636
    CALL FUN_005b0a70                   ; 005af639
        ;   XREF to: 005b0a70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b0a70()
        ;   Label: LAB_005af639
    MOV EDI,dword ptr [0x02d25924]      ; 005af63e | DAT_02d25924
        ;   Label: LAB_005af63e
    POP EBP                             ; 005af644
    POP EDI                             ; 005af645
    POP ESI                             ; 005af646
    POP EBX                             ; 005af647
    RET                                 ; 005af648

