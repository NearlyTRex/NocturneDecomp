; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00507450(int *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00505a30 at 00505faf
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;   undefined4 DAT_01da6484
;
; Called Functions:
;   FUN_004e4330
;   FUN_00505870
;   FUN_005806a0
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507450
        ;   Label: FUN_00507450
    PUSH ESI                            ; 00507451
    PUSH EDI                            ; 00507452
    PUSH EBP                            ; 00507453
    SUB ESP,0xb8                        ; 00507454
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050745a
    MOV EDX,dword ptr [EAX]             ; 00507461
    CMP EDX,0x1                         ; 00507463
    JNZ 0x0050746d                      ; 00507466
        ;   XREF to: 0050746d (CONDITIONAL_JUMP)  ; LAB_0050746d
    CMP EDX,dword ptr [EAX + 0x4]       ; 00507468
    JZ 0x00507490                       ; 0050746b
        ;   XREF to: 00507490 (CONDITIONAL_JUMP)  ; LAB_00507490
    MOV EBX,0x5cae70                    ; 0050746d
        ;   Label: LAB_0050746d
    MOV ESI,0x8a8                       ; 00507472
    PUSH 0x5cae84                       ; 00507477
    MOV dword ptr [0x01d71de0],EBX      ; 0050747c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00507482 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00507488
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0050748d
    MOV EDI,dword ptr [ESP + 0xd0]      ; 00507490
        ;   Label: LAB_00507490
    TEST EDI,EDI                        ; 00507497
    JL 0x005074a7                       ; 00507499
        ;   XREF to: 005074a7 (CONDITIONAL_JUMP)  ; LAB_005074a7
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0050749b
    CMP EDI,dword ptr [EDX + 0x1c]      ; 005074a2
    JL 0x005074c9                       ; 005074a5
        ;   XREF to: 005074c9 (CONDITIONAL_JUMP)  ; LAB_005074c9
    MOV EAX,0x5caed2                    ; 005074a7
        ;   Label: LAB_005074a7
    MOV EDX,0x8ae                       ; 005074ac
    PUSH 0x5caee6                       ; 005074b1
    MOV [0x01d71de0],EAX                ; 005074b6 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 005074bb | DAT_01d71de4
    CALL FUN_004e4330                   ; 005074c1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005074c6
    PUSH 0x5e2d40                       ; 005074c9
        ;   Label: LAB_005074c9
    MOV AH,0xb                          ; 005074ce
    PUSH 0x2                            ; 005074d0
    MOV byte ptr [ESP + 0xc],AH         ; 005074d2
    LEA EAX,[ESP + 0x69]                ; 005074d6
    MOV ECX,0xb1                        ; 005074da
    PUSH EAX                            ; 005074df
    MOV dword ptr [ESP + 0xc],ECX       ; 005074e0
    CALL FUN_005a30d7                   ; 005074e4
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 005074e9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005074ec
    MOV EAX,dword ptr [EAX + 0x17c]     ; 005074f3
    MOV dword ptr [ESP + 0x9],EAX       ; 005074f9
    MOV EAX,[0x01da6484]                ; 005074fd | DAT_01da6484
    MOV dword ptr [ESP + 0x5],EAX       ; 00507502
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00507506
    LEA EDI,[ESP + 0xd]                 ; 0050750d
    MOV ESI,dword ptr [ESP + 0xcc]      ; 00507511
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00507518
    ADD ESI,0x128                       ; 0050751b
    MOV dword ptr [ESP + 0x5d],EAX      ; 00507521
    PUSH EDI                            ; 00507525
    MOV AL,byte ptr [ESI]               ; 00507526
        ;   Label: LAB_00507526
    MOV byte ptr [EDI],AL               ; 00507528
    CMP AL,0x0                          ; 0050752a
    JZ 0x0050753e                       ; 0050752c
        ;   XREF to: 0050753e (CONDITIONAL_JUMP)  ; LAB_0050753e
    MOV AL,byte ptr [ESI + 0x1]         ; 0050752e
    ADD ESI,0x2                         ; 00507531
    MOV byte ptr [EDI + 0x1],AL         ; 00507534
    ADD EDI,0x2                         ; 00507537
    CMP AL,0x0                          ; 0050753a
    JNZ 0x00507526                      ; 0050753c
        ;   XREF to: 00507526 (CONDITIONAL_JUMP)  ; LAB_00507526
    POP EDI                             ; 0050753e
        ;   Label: LAB_0050753e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050753f
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00507546
    XOR EBX,EBX                         ; 00507549
    TEST ESI,ESI                        ; 0050754b
    JLE 0x005075e0                      ; 0050754d
        ;   XREF to: 005075e0 (CONDITIONAL_JUMP)  ; LAB_005075e0
    LEA EBP,[EAX + 0x20]                ; 00507553
    MOV EDX,EAX                         ; 00507556
    LEA EAX,[ESP + 0x61]                ; 00507558
    MOV dword ptr [ESP + 0xb4],EAX      ; 0050755c
    IMUL ECX,EBX,0x28                   ; 00507563
        ;   Label: LAB_00507563
    MOV EDI,dword ptr [ESP + 0xb4]      ; 00507566
    MOV ESI,EBP                         ; 0050756d
    PUSH EDI                            ; 0050756f
    MOV AL,byte ptr [ESI]               ; 00507570
        ;   Label: LAB_00507570
    MOV byte ptr [EDI],AL               ; 00507572
    CMP AL,0x0                          ; 00507574
    JZ 0x00507588                       ; 00507576
        ;   XREF to: 00507588 (CONDITIONAL_JUMP)  ; LAB_00507588
    MOV AL,byte ptr [ESI + 0x1]         ; 00507578
    ADD ESI,0x2                         ; 0050757b
    MOV byte ptr [EDI + 0x1],AL         ; 0050757e
    ADD EDI,0x2                         ; 00507581
    CMP AL,0x0                          ; 00507584
    JNZ 0x00507570                      ; 00507586
        ;   XREF to: 00507570 (CONDITIONAL_JUMP)  ; LAB_00507570
    POP EDI                             ; 00507588
        ;   Label: LAB_00507588
    LEA ESI,[EDX + 0x3c]                ; 00507589
    LEA EDI,[ESP + ECX*0x1 + 0x75]      ; 0050758c
    MOVSD ES:EDI,ESI                    ; 00507590
    MOVSD ES:EDI,ESI                    ; 00507591
    MOV EAX,dword ptr [EDX + 0x64]      ; 00507592
    MOV dword ptr [ESP + ECX*0x1 + 0x85],EAX ; 00507595
    MOV EAX,dword ptr [EDX + 0x34]      ; 0050759c
    ADD EDX,0x80                        ; 0050759f
    MOV dword ptr [ESP + ECX*0x1 + 0x7d],EAX ; 005075a5
    ADD EBP,0x80                        ; 005075a9
    MOV EAX,dword ptr [EDX + -0x48]     ; 005075af
    MOV EDI,dword ptr [ESP + 0xb4]      ; 005075b2
    MOV dword ptr [ESP + ECX*0x1 + 0x81],EAX ; 005075b9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005075c0
    INC EBX                             ; 005075c7
    ADD EDI,0x28                        ; 005075c8
    MOV ECX,dword ptr [EAX + 0x1c]      ; 005075cb
    MOV dword ptr [ESP + 0xb4],EDI      ; 005075ce
    CMP EBX,ECX                         ; 005075d5
    JL 0x00507563                       ; 005075d7
        ;   XREF to: 00507563 (CONDITIONAL_JUMP)  ; LAB_00507563
    LEA EAX,[EAX]                       ; 005075d9
    NOP                                 ; 005075df
    MOV EAX,ESP                         ; 005075e0
        ;   Label: LAB_005075e0
    PUSH EAX                            ; 005075e2
    MOV EBX,dword ptr [ESP + 0xd4]      ; 005075e3
    PUSH EBX                            ; 005075ea
    MOV ESI,dword ptr [ESP + 0xd4]      ; 005075eb
    PUSH ESI                            ; 005075f2
    CALL FUN_00505870                   ; 005075f3
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; undefined FUN_00505870()
    ADD ESP,0xc                         ; 005075f8
    CALL FUN_005806a0                   ; 005075fb
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
    MOV EDX,EAX                         ; 00507600
    MOV ECX,0x12                        ; 00507602
    SAR EDX,0x1f                        ; 00507607
    IDIV ECX                            ; 0050760a
    MOV EDI,dword ptr [0x01da6474]      ; 0050760c | DAT_01da6474
    MOV EDX,EAX                         ; 00507612
    SUB EDX,EDI                         ; 00507614
    MOV [0x01da6474],EAX                ; 00507616 | DAT_01da6474
    TEST EDX,EDX                        ; 0050761b
    JL 0x0050765b                       ; 0050761d
        ;   XREF to: 0050765b (CONDITIONAL_JUMP)  ; LAB_0050765b
    CMP EDX,0x20000                     ; 0050761f
    JLE 0x0050762c                      ; 00507625
        ;   XREF to: 0050762c (CONDITIONAL_JUMP)  ; LAB_0050762c
    MOV EDX,0x20000                     ; 00507627
    MOV EBP,dword ptr [0x01da6478]      ; 0050762c | DAT_01da6478
        ;   Label: LAB_0050762c
    ADD EBP,EDX                         ; 00507632
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00507634
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050763b
    SHL EDX,0x7                         ; 00507642
    ADD EDX,EAX                         ; 00507645
    MOV dword ptr [0x01da6478],EBP      ; 00507647 | DAT_01da6478
    MOV dword ptr [EDX + 0x58],EBP      ; 0050764d
    ADD ESP,0xb8                        ; 00507650
    POP EBP                             ; 00507656
    POP EDI                             ; 00507657
    POP ESI                             ; 00507658
    POP EBX                             ; 00507659
    RET                                 ; 0050765a
    XOR EDX,EDX                         ; 0050765b
        ;   Label: LAB_0050765b
    JMP 0x0050762c                      ; 0050765d
        ;   XREF to: 0050762c (UNCONDITIONAL_JUMP)  ; LAB_0050762c

