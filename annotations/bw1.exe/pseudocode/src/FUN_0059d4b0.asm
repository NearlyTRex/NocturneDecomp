; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059d4b0(undefined4 param_1,int *param_2,undefined4 param_3,code *param_4)
;
;
; XREF[1]:
;   FUN_0059d850 at 0059d9b3
;
; Called Functions:
;   FUN_0059d330
;   FUN_0059d360
;   FUN_0059d430
;   FUN_005bfb40
;   FUN_005c1210
;   FUN_005c2cac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d4b0
        ;   Label: FUN_0059d4b0
    PUSH ESI                            ; 0059d4b1
    PUSH EDI                            ; 0059d4b2
    PUSH EBP                            ; 0059d4b3
    SUB ESP,0x1118                      ; 0059d4b4
    MOV EBP,dword ptr [ESP + 0x1138]    ; 0059d4ba
    MOV EDX,dword ptr [ESP + 0x112c]    ; 0059d4c1
    PUSH EDX                            ; 0059d4c8
    LEA EAX,[ESP + 0x4]                 ; 0059d4c9
    PUSH EAX                            ; 0059d4cd
    CALL FUN_0059d330                   ; 0059d4ce
        ;   XREF to: 0059d330 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d330()
    ADD ESP,0x8                         ; 0059d4d3
    MOV ECX,dword ptr [ESP + 0x1134]    ; 0059d4d6
    PUSH ECX                            ; 0059d4dd
    PUSH EBP                            ; 0059d4de
    PUSH 0x800                          ; 0059d4df
    LEA EAX,[ESP + 0x81c]               ; 0059d4e4
    PUSH EAX                            ; 0059d4eb
    LEA EAX,[ESP + 0x10]                ; 0059d4ec
    PUSH EAX                            ; 0059d4f0
    CALL FUN_0059d430                   ; 0059d4f1
        ;   XREF to: 0059d430 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d430()
    ADD ESP,0x14                        ; 0059d4f6
    TEST EAX,EAX                        ; 0059d4f9
    JNZ 0x0059d508                      ; 0059d4fb
        ;   XREF to: 0059d508 (CONDITIONAL_JUMP)  ; LAB_0059d508
    ADD ESP,0x1118                      ; 0059d4fd
        ;   Label: LAB_0059d4fd
    POP EBP                             ; 0059d503
    POP EDI                             ; 0059d504
    POP ESI                             ; 0059d505
    POP EBX                             ; 0059d506
    RET                                 ; 0059d507
    MOV EBX,0xffffffff                  ; 0059d508
        ;   Label: LAB_0059d508
    MOV ESI,0x5f8469                    ; 0059d50d
    LEA EDI,[ESP + 0x1010]              ; 0059d512
    MOV dword ptr [ESP + 0x1110],EBX    ; 0059d519
    PUSH EDI                            ; 0059d520
    MOV AL,byte ptr [ESI]               ; 0059d521
        ;   Label: LAB_0059d521
    MOV byte ptr [EDI],AL               ; 0059d523
    CMP AL,0x0                          ; 0059d525
    JZ 0x0059d539                       ; 0059d527
        ;   XREF to: 0059d539 (CONDITIONAL_JUMP)  ; LAB_0059d539
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d529
    ADD ESI,0x2                         ; 0059d52c
    MOV byte ptr [EDI + 0x1],AL         ; 0059d52f
    ADD EDI,0x2                         ; 0059d532
    CMP AL,0x0                          ; 0059d535
    JNZ 0x0059d521                      ; 0059d537
        ;   XREF to: 0059d521 (CONDITIONAL_JUMP)  ; LAB_0059d521
    POP EDI                             ; 0059d539
        ;   Label: LAB_0059d539
    LEA EAX,[ESP + 0x1010]              ; 0059d53a
    PUSH EAX                            ; 0059d541
    LEA EAX,[ESP + 0x1114]              ; 0059d542
    PUSH EAX                            ; 0059d549
    PUSH 0x5f8477                       ; 0059d54a
    LEA EAX,[ESP + 0x81c]               ; 0059d54f
    PUSH EAX                            ; 0059d556
    CALL FUN_005c2cac                   ; 0059d557
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; undefined FUN_005c2cac()
    ADD ESP,0x10                        ; 0059d55c
    MOV ESI,dword ptr [ESP + 0x1110]    ; 0059d55f
    CMP ESI,EBX                         ; 0059d566
    JZ 0x0059d647                       ; 0059d568
        ;   XREF to: 0059d647 (CONDITIONAL_JUMP)  ; LAB_0059d647
    CMP ESI,0x190                       ; 0059d56e
    JGE 0x0059d660                      ; 0059d574
        ;   XREF to: 0059d660 (CONDITIONAL_JUMP)  ; LAB_0059d660
    CMP ESI,0x12c                       ; 0059d57a
    JGE 0x0059d69a                      ; 0059d580
        ;   XREF to: 0059d69a (CONDITIONAL_JUMP)  ; LAB_0059d69a
    MOV ESI,0x5f84cf                    ; 0059d586
    LEA EDI,[ESP + 0x1010]              ; 0059d58b
    MOV dword ptr [ESP + 0x1114],EBX    ; 0059d592
    PUSH EDI                            ; 0059d599
    MOV AL,byte ptr [ESI]               ; 0059d59a
        ;   Label: LAB_0059d59a
    MOV byte ptr [EDI],AL               ; 0059d59c
    CMP AL,0x0                          ; 0059d59e
    JZ 0x0059d5b2                       ; 0059d5a0
        ;   XREF to: 0059d5b2 (CONDITIONAL_JUMP)  ; LAB_0059d5b2
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d5a2
    ADD ESI,0x2                         ; 0059d5a5
    MOV byte ptr [EDI + 0x1],AL         ; 0059d5a8
    ADD EDI,0x2                         ; 0059d5ab
    CMP AL,0x0                          ; 0059d5ae
    JNZ 0x0059d59a                      ; 0059d5b0
        ;   XREF to: 0059d59a (CONDITIONAL_JUMP)  ; LAB_0059d59a
    POP EDI                             ; 0059d5b2
        ;   Label: LAB_0059d5b2
    XOR EBX,EBX                         ; 0059d5b3
    LEA EAX,[ESP + 0x1010]              ; 0059d5b5
        ;   Label: LAB_0059d5b5
    PUSH EAX                            ; 0059d5bc
    PUSH EBP                            ; 0059d5bd
    PUSH 0x800                          ; 0059d5be
    LEA EAX,[ESP + 0x81c]               ; 0059d5c3
    PUSH EAX                            ; 0059d5ca
    LEA EAX,[ESP + 0x10]                ; 0059d5cb
    PUSH EAX                            ; 0059d5cf
    CALL FUN_0059d430                   ; 0059d5d0
        ;   XREF to: 0059d430 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d430()
    ADD ESP,0x14                        ; 0059d5d5
    TEST EAX,EAX                        ; 0059d5d8
    JZ 0x0059d4fd                       ; 0059d5da
        ;   XREF to: 0059d4fd (CONDITIONAL_JUMP)  ; LAB_0059d4fd
    CMP BL,byte ptr [ESP + 0x810]       ; 0059d5e0
    JNZ 0x0059d6d4                      ; 0059d5e7
        ;   XREF to: 0059d6d4 (CONDITIONAL_JUMP)  ; LAB_0059d6d4
    CMP dword ptr [ESP + 0x1114],0x0    ; 0059d5ed
    JL 0x0059d715                       ; 0059d5f5
        ;   XREF to: 0059d715 (CONDITIONAL_JUMP)  ; LAB_0059d715
    XOR EBX,EBX                         ; 0059d5fb
        ;   Label: LAB_0059d5fb
    XOR EDI,EDI                         ; 0059d5fd
    MOV EAX,dword ptr [ESP + 0x1114]    ; 0059d5ff
        ;   Label: LAB_0059d5ff
    CMP EDI,EAX                         ; 0059d606
    JG 0x0059d60e                       ; 0059d608
        ;   XREF to: 0059d60e (CONDITIONAL_JUMP)  ; LAB_0059d60e
    CMP EBX,EAX                         ; 0059d60a
    JGE 0x0059d637                      ; 0059d60c
        ;   XREF to: 0059d637 (CONDITIONAL_JUMP)  ; LAB_0059d637
    LEA EAX,[ESP + 0x1010]              ; 0059d60e
        ;   Label: LAB_0059d60e
    PUSH EAX                            ; 0059d615
    PUSH EBP                            ; 0059d616
    LEA EAX,[ESP + 0x8]                 ; 0059d617
    PUSH EAX                            ; 0059d61b
    CALL FUN_0059d360                   ; 0059d61c
        ;   XREF to: 0059d360 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d360()
    ADD ESP,0xc                         ; 0059d621
    MOV EDX,EAX                         ; 0059d624
    TEST EAX,EAX                        ; 0059d626
    JGE 0x0059d721                      ; 0059d628
        ;   XREF to: 0059d721 (CONDITIONAL_JUMP)  ; LAB_0059d721
    CMP EAX,-0x2                        ; 0059d62e
    JNZ 0x0059d6c7                      ; 0059d631
        ;   XREF to: 0059d6c7 (CONDITIONAL_JUMP)  ; LAB_0059d6c7
    MOV EAX,0x1                         ; 0059d637
        ;   Label: LAB_0059d637
    ADD ESP,0x1118                      ; 0059d63c
    POP EBP                             ; 0059d642
    POP EDI                             ; 0059d643
    POP ESI                             ; 0059d644
    POP EBX                             ; 0059d645
    RET                                 ; 0059d646
    PUSH 0x5f8489                       ; 0059d647
        ;   Label: LAB_0059d647
    PUSH 0x1                            ; 0059d64c
    CALL EBP                            ; 0059d64e
    ADD ESP,0x8                         ; 0059d650
    XOR EAX,EAX                         ; 0059d653
    ADD ESP,0x1118                      ; 0059d655
    POP EBP                             ; 0059d65b
    POP EDI                             ; 0059d65c
    POP ESI                             ; 0059d65d
    POP EBX                             ; 0059d65e
    RET                                 ; 0059d65f
    LEA EAX,[ESP + 0x1010]              ; 0059d660
        ;   Label: LAB_0059d660
    PUSH EAX                            ; 0059d667
    PUSH ESI                            ; 0059d668
    PUSH 0x5f84b0                       ; 0059d669
    LEA EAX,[ESP + 0x81c]               ; 0059d66e
    PUSH EAX                            ; 0059d675
    CALL FUN_005bfb40                   ; 0059d676
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0059d67b
    LEA EAX,[ESP + 0x810]               ; 0059d67e
    PUSH EAX                            ; 0059d685
    PUSH 0x1                            ; 0059d686
    CALL EBP                            ; 0059d688
    ADD ESP,0x8                         ; 0059d68a
    XOR EAX,EAX                         ; 0059d68d
    ADD ESP,0x1118                      ; 0059d68f
    POP EBP                             ; 0059d695
    POP EDI                             ; 0059d696
    POP ESI                             ; 0059d697
    POP EBX                             ; 0059d698
    RET                                 ; 0059d699
    LEA EAX,[ESP + 0x1010]              ; 0059d69a
        ;   Label: LAB_0059d69a
    PUSH EAX                            ; 0059d6a1
    PUSH ESI                            ; 0059d6a2
    PUSH 0x5f84b7                       ; 0059d6a3
    LEA EAX,[ESP + 0x81c]               ; 0059d6a8
    PUSH EAX                            ; 0059d6af
    CALL FUN_005bfb40                   ; 0059d6b0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0059d6b5
    LEA EAX,[ESP + 0x810]               ; 0059d6b8
    PUSH EAX                            ; 0059d6bf
    PUSH 0x1                            ; 0059d6c0
    CALL EBP                            ; 0059d6c2
    ADD ESP,0x8                         ; 0059d6c4
    XOR EAX,EAX                         ; 0059d6c7
        ;   Label: LAB_0059d6c7
    ADD ESP,0x1118                      ; 0059d6c9
    POP EBP                             ; 0059d6cf
    POP EDI                             ; 0059d6d0
    POP ESI                             ; 0059d6d1
    POP EBX                             ; 0059d6d2
    RET                                 ; 0059d6d3
    PUSH 0xf                            ; 0059d6d4
        ;   Label: LAB_0059d6d4
    PUSH 0x5f84e2                       ; 0059d6d6
    LEA EAX,[ESP + 0x818]               ; 0059d6db
    PUSH EAX                            ; 0059d6e2
    CALL FUN_005c1210                   ; 0059d6e3
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1210()
    ADD ESP,0xc                         ; 0059d6e8
    TEST EAX,EAX                        ; 0059d6eb
    JNZ 0x0059d5b5                      ; 0059d6ed
        ;   XREF to: 0059d5b5 (CONDITIONAL_JUMP)  ; LAB_0059d5b5
    LEA EAX,[ESP + 0x1114]              ; 0059d6f3
    PUSH EAX                            ; 0059d6fa
    PUSH 0x5f84f2                       ; 0059d6fb
    LEA EAX,[ESP + 0x827]               ; 0059d700
    PUSH EAX                            ; 0059d707
    CALL FUN_005c2cac                   ; 0059d708
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; undefined FUN_005c2cac()
    ADD ESP,0xc                         ; 0059d70d
    JMP 0x0059d5b5                      ; 0059d710
        ;   XREF to: 0059d5b5 (UNCONDITIONAL_JUMP)  ; LAB_0059d5b5
    MOV dword ptr [ESP],0x1             ; 0059d715
        ;   Label: LAB_0059d715
    JMP 0x0059d5fb                      ; 0059d71c
        ;   XREF to: 0059d5fb (UNCONDITIONAL_JUMP)  ; LAB_0059d5fb
    MOV EAX,dword ptr [ESP + 0x1130]    ; 0059d721
        ;   Label: LAB_0059d721
    MOV EAX,dword ptr [EAX]             ; 0059d728
    AND EDX,0xff                        ; 0059d72a
    PUSH EDX                            ; 0059d730
    MOV ECX,dword ptr [ESP + 0x1134]    ; 0059d731
    PUSH ECX                            ; 0059d738
    CALL dword ptr [EAX + 0x4]          ; 0059d739
    ADD ESP,0x8                         ; 0059d73c
    CMP EAX,-0x1                        ; 0059d73f
    JZ 0x0059d637                       ; 0059d742
        ;   XREF to: 0059d637 (CONDITIONAL_JUMP)  ; LAB_0059d637
    TEST EAX,EAX                        ; 0059d748
    JL 0x0059d6c7                       ; 0059d74a
        ;   XREF to: 0059d6c7 (CONDITIONAL_JUMP)  ; LAB_0059d6c7
    INC EBX                             ; 0059d750
    JMP 0x0059d5ff                      ; 0059d751
        ;   XREF to: 0059d5ff (UNCONDITIONAL_JUMP)  ; LAB_0059d5ff

