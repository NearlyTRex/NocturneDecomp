; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005be480(void)
;
;
; XREF[1]:
;   FUN_005b86b0 at 005b877d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005be480
        ;   Label: FUN_005be480
    PUSH EDI                            ; 005be481
    PUSH EBP                            ; 005be482
    MOV ECX,EBX                         ; 005be483
    TEST EAX,EAX                        ; 005be485
    JZ 0x005be5aa                       ; 005be487
        ;   XREF to: 005be5aa (CONDITIONAL_JUMP)  ; LAB_005be5aa
    LEA EBX,[EAX + -0x4]                ; 005be48d
    TEST byte ptr [EBX],0x1             ; 005be490
    JZ 0x005be5aa                       ; 005be493
        ;   XREF to: 005be5aa (CONDITIONAL_JUMP)  ; LAB_005be5aa
    MOV EDX,dword ptr [EBX]             ; 005be499
    AND DL,0xfe                         ; 005be49b
    LEA EAX,[EBX + EDX*0x1]             ; 005be49e
    MOV ESI,ECX                         ; 005be4a1
    TEST byte ptr [EAX],0x1             ; 005be4a3
    JNZ 0x005be4ca                      ; 005be4a6
        ;   XREF to: 005be4ca (CONDITIONAL_JUMP)  ; LAB_005be4ca
    MOV EDI,dword ptr [EAX]             ; 005be4a8
    ADD EDX,EDI                         ; 005be4aa
    MOV dword ptr [EBX],EDX             ; 005be4ac
    CMP EAX,dword ptr [ECX + 0xc]       ; 005be4ae
    JNZ 0x005be4b6                      ; 005be4b1
        ;   XREF to: 005be4b6 (CONDITIONAL_JUMP)  ; LAB_005be4b6
    MOV dword ptr [ECX + 0xc],EBX       ; 005be4b3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005be4b6
        ;   Label: LAB_005be4b6
    MOV EAX,dword ptr [EAX + 0x8]       ; 005be4b9
    MOV dword ptr [EDX + 0x8],EAX       ; 005be4bc
    MOV dword ptr [EAX + 0x4],EDX       ; 005be4bf
    DEC dword ptr [ESI + 0x1c]          ; 005be4c2
    JMP 0x005be55e                      ; 005be4c5
        ;   XREF to: 005be55e (UNCONDITIONAL_JUMP)  ; LAB_005be55e
    MOV dword ptr [EBX],EDX             ; 005be4ca
        ;   Label: LAB_005be4ca
    MOV EAX,dword ptr [ECX + 0xc]       ; 005be4cc
    CMP EBX,EAX                         ; 005be4cf
    JNC 0x005be4e9                      ; 005be4d1
        ;   XREF to: 005be4e9 (CONDITIONAL_JUMP)  ; LAB_005be4e9
    CMP EBX,dword ptr [EAX + 0x4]       ; 005be4d3
    JA 0x005be55e                       ; 005be4d6
        ;   XREF to: 005be55e (CONDITIONAL_JUMP)  ; LAB_005be55e
    MOV EAX,dword ptr [ECX + 0x28]      ; 005be4dc
    CMP EBX,EAX                         ; 005be4df
    JC 0x005be55e                       ; 005be4e1
        ;   XREF to: 005be55e (CONDITIONAL_JUMP)  ; LAB_005be55e
    JMP 0x005be502                      ; 005be4e7
        ;   XREF to: 005be502 (UNCONDITIONAL_JUMP)  ; LAB_005be502
    MOV EAX,dword ptr [EAX + 0x8]       ; 005be4e9
        ;   Label: LAB_005be4e9
    CMP EBX,EAX                         ; 005be4ec
    JC 0x005be55e                       ; 005be4ee
        ;   XREF to: 005be55e (CONDITIONAL_JUMP)  ; LAB_005be55e
    LEA EAX,[ECX + 0x20]                ; 005be4f4
    MOV EDX,dword ptr [EAX + 0x4]       ; 005be4f7
    CMP EBX,EDX                         ; 005be4fa
    JA 0x005be55e                       ; 005be4fc
        ;   XREF to: 005be55e (CONDITIONAL_JUMP)  ; LAB_005be55e
    MOV EDI,dword ptr [ESI + 0x1c]      ; 005be502
        ;   Label: LAB_005be502
    MOV EAX,dword ptr [ESI + 0x18]      ; 005be505
    XOR EDX,EDX                         ; 005be508
    LEA ECX,[EDI + 0x1]                 ; 005be50a
    DIV ECX                             ; 005be50d
    MOV ECX,EAX                         ; 005be50f
    CMP EAX,EDI                         ; 005be511
    JNC 0x005be53d                      ; 005be513
        ;   XREF to: 005be53d (CONDITIONAL_JUMP)  ; LAB_005be53d
    MOV EAX,dword ptr [ESI + 0x18]      ; 005be515
    SUB EAX,EDI                         ; 005be518
    ADD ECX,ECX                         ; 005be51a
    CMP EAX,EDI                         ; 005be51c
    JA 0x005be525                       ; 005be51e
        ;   XREF to: 005be525 (CONDITIONAL_JUMP)  ; LAB_005be525
    MOV ECX,0xffffffff                  ; 005be520
    MOV EAX,dword ptr [EBX]             ; 005be525
        ;   Label: LAB_005be525
    ADD EAX,EBX                         ; 005be527
    MOV EDX,dword ptr [EAX]             ; 005be529
        ;   Label: LAB_005be529
    TEST DL,0x1                         ; 005be52b
    JZ 0x005be55e                       ; 005be52e
        ;   XREF to: 005be55e (CONDITIONAL_JUMP)  ; LAB_005be55e
    CMP EDX,-0x1                        ; 005be530
    JZ 0x005be53d                       ; 005be533
        ;   XREF to: 005be53d (CONDITIONAL_JUMP)  ; LAB_005be53d
    AND DL,0xfe                         ; 005be535
    ADD EAX,EDX                         ; 005be538
    DEC ECX                             ; 005be53a
    JNZ 0x005be529                      ; 005be53b
        ;   XREF to: 005be529 (CONDITIONAL_JUMP)  ; LAB_005be529
    MOV EAX,dword ptr [ESI + 0xc]       ; 005be53d
        ;   Label: LAB_005be53d
    CMP EBX,EAX                         ; 005be540
    JNC 0x005be547                      ; 005be542
        ;   XREF to: 005be547 (CONDITIONAL_JUMP)  ; LAB_005be547
    MOV EAX,dword ptr [ESI + 0x28]      ; 005be544
    CMP EBX,EAX                         ; 005be547
        ;   Label: LAB_005be547
    JC 0x005be55e                       ; 005be549
        ;   XREF to: 005be55e (CONDITIONAL_JUMP)  ; LAB_005be55e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005be54b
    CMP EBX,EAX                         ; 005be54e
    JC 0x005be55e                       ; 005be550
        ;   XREF to: 005be55e (CONDITIONAL_JUMP)  ; LAB_005be55e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005be552
    CMP EBX,EAX                         ; 005be555
    JC 0x005be55e                       ; 005be557
        ;   XREF to: 005be55e (CONDITIONAL_JUMP)  ; LAB_005be55e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005be559
    JMP 0x005be547                      ; 005be55c
        ;   XREF to: 005be547 (UNCONDITIONAL_JUMP)  ; LAB_005be547
    MOV EDX,dword ptr [EAX + 0x4]       ; 005be55e
        ;   Label: LAB_005be55e
    MOV EDI,dword ptr [EDX]             ; 005be561
    ADD EDI,EDX                         ; 005be563
    MOV ECX,dword ptr [EBX]             ; 005be565
    CMP EDI,EBX                         ; 005be567
    JNZ 0x005be57d                      ; 005be569
        ;   XREF to: 005be57d (CONDITIONAL_JUMP)  ; LAB_005be57d
    MOV EBP,dword ptr [EDX]             ; 005be56b
    ADD ECX,EBP                         ; 005be56d
    MOV dword ptr [EDX],ECX             ; 005be56f
    CMP EBX,dword ptr [ESI + 0xc]       ; 005be571
    JNZ 0x005be579                      ; 005be574
        ;   XREF to: 005be579 (CONDITIONAL_JUMP)  ; LAB_005be579
    MOV dword ptr [ESI + 0xc],EDX       ; 005be576
    MOV EBX,EDX                         ; 005be579
        ;   Label: LAB_005be579
    JMP 0x005be58c                      ; 005be57b
        ;   XREF to: 005be58c (UNCONDITIONAL_JUMP)  ; LAB_005be58c
    INC dword ptr [ESI + 0x1c]          ; 005be57d
        ;   Label: LAB_005be57d
    MOV dword ptr [EBX + 0x8],EAX       ; 005be580
    MOV dword ptr [EBX + 0x4],EDX       ; 005be583
    MOV dword ptr [EDX + 0x8],EBX       ; 005be586
    MOV dword ptr [EAX + 0x4],EBX       ; 005be589
    MOV EDX,dword ptr [ESI + 0x18]      ; 005be58c
        ;   Label: LAB_005be58c
    DEC EDX                             ; 005be58f
    MOV EDI,dword ptr [ESI + 0xc]       ; 005be590
    MOV dword ptr [ESI + 0x18],EDX      ; 005be593
    CMP EBX,EDI                         ; 005be596
    JNC 0x005be5a2                      ; 005be598
        ;   XREF to: 005be5a2 (CONDITIONAL_JUMP)  ; LAB_005be5a2
    CMP ECX,dword ptr [ESI + 0x10]      ; 005be59a
    JBE 0x005be5a2                      ; 005be59d
        ;   XREF to: 005be5a2 (CONDITIONAL_JUMP)  ; LAB_005be5a2
    MOV dword ptr [ESI + 0x10],ECX      ; 005be59f
    CMP ECX,dword ptr [ESI + 0x14]      ; 005be5a2
        ;   Label: LAB_005be5a2
    JBE 0x005be5aa                      ; 005be5a5
        ;   XREF to: 005be5aa (CONDITIONAL_JUMP)  ; LAB_005be5aa
    MOV dword ptr [ESI + 0x14],ECX      ; 005be5a7
    POP EBP                             ; 005be5aa
        ;   Label: LAB_005be5aa
    POP EDI                             ; 005be5ab
    POP ESI                             ; 005be5ac
    RET                                 ; 005be5ad

