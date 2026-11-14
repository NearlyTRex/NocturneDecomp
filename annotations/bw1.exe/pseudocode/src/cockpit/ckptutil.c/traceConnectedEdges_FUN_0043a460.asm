; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * cockpit_ckptutil_c_traceConnectedEdges_FUN_0043a460(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_realloc_FUN_005c10d0
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a460
        ;   Label: cockpit_ckptutil.c_traceConnectedEdges_FUN_0043a460
    PUSH ESI                            ; 0043a461
    PUSH EDI                            ; 0043a462
    PUSH EBP                            ; 0043a463
    SUB ESP,0x1e4                       ; 0043a464
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 0043a46a
    XOR EBX,EBX                         ; 0043a471
    TEST EDX,EDX                        ; 0043a473
    JZ 0x0043a78e                       ; 0043a475
        ;   XREF to: 0043a78e (CONDITIONAL_JUMP)  ; LAB_0043a78e
    MOV EAX,dword ptr [ESP + 0x208]     ; 0043a47b
    DEC EAX                             ; 0043a482
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0043a483
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0043a48a
    DEC EAX                             ; 0043a491
    XOR EBP,EBP                         ; 0043a492
    MOV dword ptr [ESP + 0x108],EAX     ; 0043a494
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0043a49b
    MOV ECX,dword ptr [ESP + 0x108]     ; 0043a4a2
    MOV dword ptr [ESP + 0x10c],EAX     ; 0043a4a9
    TEST ECX,ECX                        ; 0043a4b0
    JLE 0x0043a7c1                      ; 0043a4b2
        ;   XREF to: 0043a7c1 (CONDITIONAL_JUMP)  ; LAB_0043a7c1
    LEA EAX,[EBP + 0x1]                 ; 0043a4b8
        ;   Label: LAB_0043a4b8
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0043a4bb
    MOV dword ptr [ESP + 0x18c],EAX     ; 0043a4c2
    IMUL EAX,EBP,0x84                   ; 0043a4c9
    MOV dword ptr [ESP + 0x128],EAX     ; 0043a4cf
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0043a4d6
    MOV dword ptr [ESP + 0x184],EAX     ; 0043a4dd
    MOV dword ptr [ESP + 0x174],EAX     ; 0043a4e4
    MOV EDI,EAX                         ; 0043a4eb
    IMUL EAX,EAX,0x84                   ; 0043a4ed
    XOR ESI,ESI                         ; 0043a4f3
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0043a4f5
    MOV dword ptr [ESP + 0x114],ESI     ; 0043a4fc
    ADD EDX,EAX                         ; 0043a503
    MOV EAX,EDI                         ; 0043a505
    MOV dword ptr [ESP + 0x1d4],ESI     ; 0043a507
    MOV dword ptr [ESP + 0x118],EAX     ; 0043a50e
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0043a515
    MOV dword ptr [ESP + 0x1c0],EDX     ; 0043a51c
    MOV dword ptr [ESP + 0x110],EAX     ; 0043a523
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0043a52a
        ;   Label: LAB_0043a52a
    ADD EAX,dword ptr [ESP + 0x128]     ; 0043a531
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 0043a538
    CMP EDX,dword ptr [EAX]             ; 0043a53f
    JGE 0x0043a79d                      ; 0043a541
        ;   XREF to: 0043a79d (CONDITIONAL_JUMP)  ; LAB_0043a79d
    ADD EAX,dword ptr [ESP + 0x114]     ; 0043a547
    MOV ESI,dword ptr [EAX + 0x4]       ; 0043a54e
    MOV EDI,dword ptr [EAX + 0x44]      ; 0043a551
    ADD EDI,ESI                         ; 0043a554
    DEC EDI                             ; 0043a556
    CMP EBX,0x200                       ; 0043a557
    JL 0x0043a593                       ; 0043a55d
        ;   XREF to: 0043a593 (CONDITIONAL_JUMP)  ; LAB_0043a593
    PUSH EBP                            ; 0043a55f
    PUSH EBX                            ; 0043a560
    PUSH 0x5d64d4                       ; 0043a561
    LEA EAX,[ESP + 0xc]                 ; 0043a566
    PUSH EAX                            ; 0043a56a
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043a56b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x5d6503                    ; 0043a570
    ADD ESP,0x10                        ; 0043a575
    MOV [0x01d1d400],EAX                ; 0043a578 | DAT_01d1d400
    MOV EAX,ESP                         ; 0043a57d
    MOV EDX,0x87d                       ; 0043a57f
    PUSH EAX                            ; 0043a584
    MOV dword ptr [0x01d1d404],EDX      ; 0043a585 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043a58b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043a590
    TEST ESI,ESI                        ; 0043a593
        ;   Label: LAB_0043a593
    JLE 0x0043ab0b                      ; 0043a595
        ;   XREF to: 0043ab0b (CONDITIONAL_JUMP)  ; LAB_0043ab0b
    LEA EAX,[ESI + 0x1]                 ; 0043a59b
    MOV dword ptr [ESP + 0x120],EAX     ; 0043a59e
    LEA EAX,[ESI + -0x1]                ; 0043a5a5
    XOR ECX,ECX                         ; 0043a5a8
    MOV dword ptr [ESP + 0x11c],EAX     ; 0043a5aa
    MOV EAX,dword ptr [ESP + 0x110]     ; 0043a5b1
    MOV dword ptr [ESP + 0x130],ECX     ; 0043a5b8
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0043a5bf
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0043a5c6
    MOV dword ptr [ESP + 0x148],ECX     ; 0043a5cd
        ;   Label: LAB_0043a5cd
    MOV dword ptr [ESP + 0x14c],EAX     ; 0043a5d4
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 0043a5db
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 0043a5e6
    MOV EDX,dword ptr [ESP + 0x148]     ; 0043a5ed
    CMP EDX,dword ptr [EAX]             ; 0043a5f4
    JGE 0x0043ab0b                      ; 0043a5f6
        ;   XREF to: 0043ab0b (CONDITIONAL_JUMP)  ; LAB_0043ab0b
    ADD EAX,dword ptr [ESP + 0x130]     ; 0043a5fc
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043a603
    MOV EAX,dword ptr [EAX + 0x44]      ; 0043a606
    ADD EAX,EDX                         ; 0043a609
    DEC EAX                             ; 0043a60b
    XOR ECX,ECX                         ; 0043a60c
    MOV dword ptr [ESP + 0x180],EAX     ; 0043a60e
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0043a615
    MOV dword ptr [ESP + 0x1bc],ECX     ; 0043a61c
    TEST EAX,EAX                        ; 0043a623
    JLE 0x0043a663                      ; 0043a625
        ;   XREF to: 0043a663 (CONDITIONAL_JUMP)  ; LAB_0043a663
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0043a627
    MOV EAX,dword ptr [EAX]             ; 0043a62e
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0043a630
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0043a637
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0043a63e
    MOV EAX,dword ptr [EAX + 0x40]      ; 0043a645
    ADD ECX,EAX                         ; 0043a648
    LEA EAX,[ECX + -0x1]                ; 0043a64a
    MOV dword ptr [ESP + 0x19c],EAX     ; 0043a64d
    CMP EDX,EAX                         ; 0043a654
    JGE 0x0043a663                      ; 0043a656
        ;   XREF to: 0043a663 (CONDITIONAL_JUMP)  ; LAB_0043a663
    MOV dword ptr [ESP + 0x1bc],0x1     ; 0043a658
    CMP EDX,dword ptr [ESP + 0x11c]     ; 0043a663
        ;   Label: LAB_0043a663
    JGE 0x0043a8d0                      ; 0043a66a
        ;   XREF to: 0043a8d0 (CONDITIONAL_JUMP)  ; LAB_0043a8d0
    CMP ESI,dword ptr [ESP + 0x180]     ; 0043a670
    JG 0x0043a8d0                       ; 0043a677
        ;   XREF to: 0043a8d0 (CONDITIONAL_JUMP)  ; LAB_0043a8d0
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043a67d
    LEA ECX,[EBX + 0x1]                 ; 0043a684
    MOV dword ptr [ESP + 0x1d8],ECX     ; 0043a687
    MOV ECX,dword ptr [ESP + 0x1bc]     ; 0043a68e
    ADD EAX,0x7c6550                    ; 0043a695
    TEST ECX,ECX                        ; 0043a69a
    JZ 0x0043a826                       ; 0043a69c
        ;   XREF to: 0043a826 (CONDITIONAL_JUMP)  ; LAB_0043a826
    MOV ECX,ESI                         ; 0043a6a2
    SUB ECX,dword ptr [ESP + 0x19c]     ; 0043a6a4
    DEC ECX                             ; 0043a6ab
    CMP ECX,dword ptr [ESP + 0x210]     ; 0043a6ac
    JG 0x0043a8d0                       ; 0043a6b3
        ;   XREF to: 0043a8d0 (CONDITIONAL_JUMP)  ; LAB_0043a8d0
    XOR EBX,EBX                         ; 0043a6b9
    MOV EDX,dword ptr [ESP + 0x19c]     ; 0043a6bb
    MOV dword ptr [ESP + 0x15c],EBX     ; 0043a6c2
    MOV BX,word ptr [EAX]               ; 0043a6c9
    MOV ECX,EBP                         ; 0043a6cc
    AND EBX,0xffff0000                  ; 0043a6ce
    MOV dword ptr [ESP + 0x154],ESI     ; 0043a6d4
    MOV word ptr [EAX],BX               ; 0043a6db
    OR EBX,EDX                          ; 0043a6de
    MOV DX,word ptr [EAX + 0x2]         ; 0043a6e0
    MOV dword ptr [ESP + 0x158],EBP     ; 0043a6e4
    AND EDX,0xffff0000                  ; 0043a6eb
    MOV word ptr [EAX],BX               ; 0043a6f1
    MOV EBX,EDX                         ; 0043a6f4
    MOV word ptr [EAX + 0x2],DX         ; 0043a6f6
    OR EBX,ECX                          ; 0043a6fa
    MOV CX,word ptr [EAX + 0x4]         ; 0043a6fc
    MOV word ptr [EAX + 0x2],BX         ; 0043a700
    AND ECX,0xffff0000                  ; 0043a704
    MOV EDX,dword ptr [ESP + 0x154]     ; 0043a70a
    MOV word ptr [EAX + 0x4],CX         ; 0043a711
    MOV EBX,ECX                         ; 0043a715
    MOV CX,word ptr [EAX + 0x6]         ; 0043a717
    OR EBX,EDX                          ; 0043a71b
    MOV EDX,dword ptr [ESP + 0x158]     ; 0043a71d
    AND ECX,0xffff8000                  ; 0043a724
    MOV word ptr [EAX + 0x4],BX         ; 0043a72a
    AND DH,0x7f                         ; 0043a72e
    MOV EBX,ECX                         ; 0043a731
    MOV word ptr [EAX + 0x6],CX         ; 0043a733
    OR EBX,EDX                          ; 0043a737
    MOV word ptr [EAX + 0x6],BX         ; 0043a739
    MOV EDX,dword ptr [ESP + 0x15c]     ; 0043a73d
    MOV BL,byte ptr [EAX + 0x7]         ; 0043a744
    XOR DH,DH                           ; 0043a747
    AND BL,0x7f                         ; 0043a749
    AND DL,0x1                          ; 0043a74c
    MOV byte ptr [EAX + 0x7],BL         ; 0043a74f
    SHL EDX,0xf                         ; 0043a752
    MOV CX,word ptr [EAX + 0x6]         ; 0043a755
    OR ECX,EDX                          ; 0043a759
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 0043a75b
    MOV word ptr [EAX + 0x6],CX         ; 0043a762
        ;   Label: LAB_0043a762
    MOV EDX,dword ptr [ESP + 0x130]     ; 0043a766
        ;   Label: LAB_0043a766
    MOV ECX,dword ptr [ESP + 0x148]     ; 0043a76d
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0043a774
    ADD EDX,0x4                         ; 0043a77b
    INC ECX                             ; 0043a77e
    ADD EAX,0x4                         ; 0043a77f
    MOV dword ptr [ESP + 0x130],EDX     ; 0043a782
    JMP 0x0043a5cd                      ; 0043a789
        ;   XREF to: 0043a5cd (UNCONDITIONAL_JUMP)  ; LAB_0043a5cd
    XOR ESI,ESI                         ; 0043a78e
        ;   Label: LAB_0043a78e
    MOV EAX,ESI                         ; 0043a790
    ADD ESP,0x1e4                       ; 0043a792
    POP EBP                             ; 0043a798
    POP EDI                             ; 0043a799
    POP ESI                             ; 0043a79a
    POP EBX                             ; 0043a79b
    RET                                 ; 0043a79c
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0043a79d
        ;   Label: LAB_0043a79d
    MOV EDI,dword ptr [ESP + 0x108]     ; 0043a7a4
    ADD ESI,0x84                        ; 0043a7ab
    INC EBP                             ; 0043a7b1
    MOV dword ptr [ESP + 0x10c],ESI     ; 0043a7b2
    CMP EBP,EDI                         ; 0043a7b9
    JL 0x0043a4b8                       ; 0043a7bb
        ;   XREF to: 0043a4b8 (CONDITIONAL_JUMP)  ; LAB_0043a4b8
    TEST EBX,EBX                        ; 0043a7c1
        ;   Label: LAB_0043a7c1
    JNZ 0x0043ae5d                      ; 0043a7c3
        ;   XREF to: 0043ae5d (CONDITIONAL_JUMP)  ; LAB_0043ae5d
    CMP dword ptr [ESP + 0x200],0x0     ; 0043a7c9
    JNZ 0x0043a7dc                      ; 0043a7d1
        ;   XREF to: 0043a7dc (CONDITIONAL_JUMP)  ; LAB_0043a7dc
    MOV EAX,dword ptr [ESP + 0x204]     ; 0043a7d3
    MOV dword ptr [EAX],EBX             ; 0043a7da
    MOV ESI,dword ptr [ESP + 0x200]     ; 0043a7dc
        ;   Label: LAB_0043a7dc
    MOV EAX,ESI                         ; 0043a7e3
    ADD ESP,0x1e4                       ; 0043a7e5
    POP EBP                             ; 0043a7eb
    POP EDI                             ; 0043a7ec
    POP ESI                             ; 0043a7ed
    POP EBX                             ; 0043a7ee
    RET                                 ; 0043a7ef
    MOV EDI,dword ptr [ESP + 0x114]     ; 0043a7f0
        ;   Label: LAB_0043a7f0
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0043a7f7
    MOV ESI,dword ptr [ESP + 0x110]     ; 0043a7fe
    ADD EDI,0x4                         ; 0043a805
    INC EAX                             ; 0043a808
    ADD ESI,0x4                         ; 0043a809
    MOV dword ptr [ESP + 0x114],EDI     ; 0043a80c
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0043a813
    MOV dword ptr [ESP + 0x110],ESI     ; 0043a81a
    JMP 0x0043a52a                      ; 0043a821
        ;   XREF to: 0043a52a (UNCONDITIONAL_JUMP)  ; LAB_0043a52a
    MOV dword ptr [ESP + 0x134],EDX     ; 0043a826
        ;   Label: LAB_0043a826
    MOV EDX,dword ptr [ESP + 0x118]     ; 0043a82d
    MOV EBX,EBP                         ; 0043a834
    MOV dword ptr [ESP + 0x13c],EDX     ; 0043a836
    MOV DX,word ptr [EAX]               ; 0043a83d
    MOV dword ptr [ESP + 0x144],ECX     ; 0043a840
    AND EDX,0xffff0000                  ; 0043a847
    MOV CX,word ptr [EAX + 0x2]         ; 0043a84d
    MOV word ptr [EAX],DX               ; 0043a851
    OR EDX,ESI                          ; 0043a854
    AND ECX,0xffff0000                  ; 0043a856
    MOV word ptr [EAX],DX               ; 0043a85c
    MOV EDX,ECX                         ; 0043a85f
    MOV word ptr [EAX + 0x2],CX         ; 0043a861
    OR EDX,EBX                          ; 0043a865
    MOV BX,word ptr [EAX + 0x4]         ; 0043a867
    MOV word ptr [EAX + 0x2],DX         ; 0043a86b
    AND EBX,0xffff0000                  ; 0043a86f
    MOV EDX,dword ptr [ESP + 0x134]     ; 0043a875
    MOV word ptr [EAX + 0x4],BX         ; 0043a87c
    MOV ECX,EBX                         ; 0043a880
    MOV BX,word ptr [EAX + 0x6]         ; 0043a882
    OR ECX,EDX                          ; 0043a886
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0043a888
    AND EBX,0xffff8000                  ; 0043a88f
    MOV word ptr [EAX + 0x4],CX         ; 0043a895
    AND DH,0x7f                         ; 0043a899
    MOV ECX,EBX                         ; 0043a89c
    MOV word ptr [EAX + 0x6],BX         ; 0043a89e
    OR ECX,EDX                          ; 0043a8a2
    MOV word ptr [EAX + 0x6],CX         ; 0043a8a4
    MOV EDX,dword ptr [ESP + 0x144]     ; 0043a8a8
    MOV BL,byte ptr [EAX + 0x7]         ; 0043a8af
    XOR DH,DH                           ; 0043a8b2
    AND BL,0x7f                         ; 0043a8b4
    AND DL,0x1                          ; 0043a8b7
    MOV byte ptr [EAX + 0x7],BL         ; 0043a8ba
    SHL EDX,0xf                         ; 0043a8bd
    OR word ptr [EAX + 0x6],DX          ; 0043a8c0
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 0043a8c4
    JMP 0x0043a766                      ; 0043a8cb
        ;   XREF to: 0043a766 (UNCONDITIONAL_JUMP)  ; LAB_0043a766
    XOR ECX,ECX                         ; 0043a8d0
        ;   Label: LAB_0043a8d0
    MOV EAX,dword ptr [ESP + 0x148]     ; 0043a8d2
    MOV dword ptr [ESP + 0x138],ECX     ; 0043a8d9
    TEST EAX,EAX                        ; 0043a8e0
    JLE 0x0043a920                      ; 0043a8e2
        ;   XREF to: 0043a920 (CONDITIONAL_JUMP)  ; LAB_0043a920
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0043a8e4
    MOV EAX,dword ptr [EAX]             ; 0043a8eb
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0043a8ed
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0043a8f4
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0043a8fb
    MOV EAX,dword ptr [EAX + 0x40]      ; 0043a902
    ADD ECX,EAX                         ; 0043a905
    LEA EAX,[ECX + -0x1]                ; 0043a907
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0043a90a
    CMP ESI,EAX                         ; 0043a911
    JGE 0x0043a920                      ; 0043a913
        ;   XREF to: 0043a920 (CONDITIONAL_JUMP)  ; LAB_0043a920
    MOV dword ptr [ESP + 0x138],0x1     ; 0043a915
    CMP EDX,dword ptr [ESP + 0x120]     ; 0043a920
        ;   Label: LAB_0043a920
    JLE 0x0043a766                      ; 0043a927
        ;   XREF to: 0043a766 (CONDITIONAL_JUMP)  ; LAB_0043a766
    CMP EDX,EDI                         ; 0043a92d
    JG 0x0043a766                       ; 0043a92f
        ;   XREF to: 0043a766 (CONDITIONAL_JUMP)  ; LAB_0043a766
    CMP dword ptr [ESP + 0x138],0x0     ; 0043a935
    JZ 0x0043aa3b                       ; 0043a93d
        ;   XREF to: 0043aa3b (CONDITIONAL_JUMP)  ; LAB_0043aa3b
    CMP dword ptr [ESP + 0x138],0x0     ; 0043a943
        ;   Label: LAB_0043a943
    JZ 0x0043a766                       ; 0043a94b
        ;   XREF to: 0043a766 (CONDITIONAL_JUMP)  ; LAB_0043a766
    MOV ECX,dword ptr [ESP + 0x1dc]     ; 0043a951
    MOV EAX,EDX                         ; 0043a958
    SUB EAX,ECX                         ; 0043a95a
    MOV ECX,dword ptr [ESP + 0x214]     ; 0043a95c
    DEC EAX                             ; 0043a963
    CMP EAX,ECX                         ; 0043a964
    JG 0x0043a766                       ; 0043a966
        ;   XREF to: 0043a766 (CONDITIONAL_JUMP)  ; LAB_0043a766
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0043a96c
    MOV dword ptr [ESP + 0x170],EAX     ; 0043a973
    MOV EAX,dword ptr [ESP + 0x184]     ; 0043a97a
    MOV dword ptr [ESP + 0x178],EDX     ; 0043a981
    MOV dword ptr [ESP + 0x150],EAX     ; 0043a988
    MOV EDX,EAX                         ; 0043a98f
    MOV dword ptr [ESP + 0x17c],0x1     ; 0043a991
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043a99c
    MOV ECX,dword ptr [ESP + 0x170]     ; 0043a9a3
    ADD EAX,0x7c6550                    ; 0043a9aa
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0043a9af
    AND word ptr [EAX],0x0              ; 0043a9b6
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043a9ba
    OR word ptr [EAX],CX                ; 0043a9c1
    MOV ECX,dword ptr [ESP + 0x150]     ; 0043a9c4
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0043a9cb
    AND word ptr [EAX + 0x2],0x0        ; 0043a9d2
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043a9d7
    OR word ptr [EAX + 0x2],CX          ; 0043a9de
    MOV ECX,dword ptr [ESP + 0x178]     ; 0043a9e2
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0043a9e9
    AND word ptr [EAX + 0x4],0x0        ; 0043a9f0
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043a9f5
    OR word ptr [EAX + 0x4],CX          ; 0043a9fc
    MOV CX,word ptr [EAX + 0x6]         ; 0043aa00
    AND ECX,0xffff8000                  ; 0043aa04
    AND DH,0x7f                         ; 0043aa0a
    MOV word ptr [EAX + 0x6],CX         ; 0043aa0d
    OR ECX,EDX                          ; 0043aa11
    MOV word ptr [EAX + 0x6],CX         ; 0043aa13
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0043aa17
    MOV CH,byte ptr [EAX + 0x7]         ; 0043aa1e
    XOR DH,DH                           ; 0043aa21
    AND CH,0x7f                         ; 0043aa23
    AND DL,0x1                          ; 0043aa26
    MOV byte ptr [EAX + 0x7],CH         ; 0043aa29
    SHL EDX,0xf                         ; 0043aa2c
    MOV CX,word ptr [EAX + 0x6]         ; 0043aa2f
    OR ECX,EDX                          ; 0043aa33
    INC EBX                             ; 0043aa35
    JMP 0x0043a762                      ; 0043aa36
        ;   XREF to: 0043a762 (UNCONDITIONAL_JUMP)  ; LAB_0043a762
    MOV EAX,EDX                         ; 0043aa3b
        ;   Label: LAB_0043aa3b
    SUB EAX,ESI                         ; 0043aa3d
    MOV ECX,dword ptr [ESP + 0x218]     ; 0043aa3f
    INC EAX                             ; 0043aa46
    CMP EAX,ECX                         ; 0043aa47
    JG 0x0043a943                       ; 0043aa49
        ;   XREF to: 0043a943 (CONDITIONAL_JUMP)  ; LAB_0043a943
    MOV EAX,dword ptr [ESP + 0x174]     ; 0043aa4f
    MOV dword ptr [ESP + 0x168],EAX     ; 0043aa56
    MOV dword ptr [ESP + 0x16c],0x1     ; 0043aa5d
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043aa68
    ADD EAX,0x7c6550                    ; 0043aa6f
    MOV dword ptr [ESP + 0x164],EDX     ; 0043aa74
    MOV DX,word ptr [EAX]               ; 0043aa7b
    MOV dword ptr [ESP + 0x160],EBP     ; 0043aa7e
    AND EDX,0xffff0000                  ; 0043aa85
    MOV CX,word ptr [EAX + 0x2]         ; 0043aa8b
    MOV word ptr [EAX],DX               ; 0043aa8f
    OR EDX,ESI                          ; 0043aa92
    AND ECX,0xffff0000                  ; 0043aa94
    MOV word ptr [EAX],DX               ; 0043aa9a
    MOV EDX,dword ptr [ESP + 0x160]     ; 0043aa9d
    MOV word ptr [EAX + 0x2],CX         ; 0043aaa4
    OR ECX,EDX                          ; 0043aaa8
    MOV word ptr [EAX + 0x2],CX         ; 0043aaaa
    MOV CX,word ptr [EAX + 0x4]         ; 0043aaae
    AND ECX,0xffff0000                  ; 0043aab2
    MOV EDX,dword ptr [ESP + 0x164]     ; 0043aab8
    MOV word ptr [EAX + 0x4],CX         ; 0043aabf
    OR ECX,EDX                          ; 0043aac3
    MOV word ptr [EAX + 0x4],CX         ; 0043aac5
    MOV CX,word ptr [EAX + 0x6]         ; 0043aac9
    MOV EDX,dword ptr [ESP + 0x168]     ; 0043aacd
    AND ECX,0xffff8000                  ; 0043aad4
    AND DH,0x7f                         ; 0043aada
    MOV word ptr [EAX + 0x6],CX         ; 0043aadd
    OR ECX,EDX                          ; 0043aae1
    MOV word ptr [EAX + 0x6],CX         ; 0043aae3
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043aae7
    MOV CL,byte ptr [EAX + 0x7]         ; 0043aaee
    XOR DH,DH                           ; 0043aaf1
    AND CL,0x7f                         ; 0043aaf3
    AND DL,0x1                          ; 0043aaf6
    MOV byte ptr [EAX + 0x7],CL         ; 0043aaf9
    SHL EDX,0xf                         ; 0043aafc
    MOV CX,word ptr [EAX + 0x6]         ; 0043aaff
    OR ECX,EDX                          ; 0043ab03
    INC EBX                             ; 0043ab05
    JMP 0x0043a762                      ; 0043ab06
        ;   XREF to: 0043a762 (UNCONDITIONAL_JUMP)  ; LAB_0043a762
    CMP EBX,0x200                       ; 0043ab0b
        ;   Label: LAB_0043ab0b
    JL 0x0043ab47                       ; 0043ab11
        ;   XREF to: 0043ab47 (CONDITIONAL_JUMP)  ; LAB_0043ab47
    PUSH EBP                            ; 0043ab13
    PUSH EBX                            ; 0043ab14
    PUSH 0x5d6519                       ; 0043ab15
    LEA EAX,[ESP + 0xc]                 ; 0043ab1a
    PUSH EAX                            ; 0043ab1e
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043ab1f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x5d6548                    ; 0043ab24
    ADD ESP,0x10                        ; 0043ab29
    MOV [0x01d1d400],EAX                ; 0043ab2c | DAT_01d1d400
    MOV EAX,ESP                         ; 0043ab31
    MOV EDX,0x8b7                       ; 0043ab33
    PUSH EAX                            ; 0043ab38
    MOV dword ptr [0x01d1d404],EDX      ; 0043ab39 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043ab3f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043ab44
    CMP EDI,dword ptr [ESP + 0x1ac]     ; 0043ab47
        ;   Label: LAB_0043ab47
    JGE 0x0043a7f0                      ; 0043ab4e
        ;   XREF to: 0043a7f0 (CONDITIONAL_JUMP)  ; LAB_0043a7f0
    XOR EAX,EAX                         ; 0043ab54
    MOV dword ptr [ESP + 0x140],EAX     ; 0043ab56
    LEA EAX,[EDI + -0x1]                ; 0043ab5d
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0043ab60
    LEA EAX,[EDI + 0x1]                 ; 0043ab67
    XOR EDX,EDX                         ; 0043ab6a
    MOV dword ptr [ESP + 0x124],EAX     ; 0043ab6c
    MOV EAX,dword ptr [ESP + 0x114]     ; 0043ab73
    MOV dword ptr [ESP + 0x1a4],EDX     ; 0043ab7a
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0043ab81
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 0043ab88
        ;   Label: LAB_0043ab88
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 0043ab93
    MOV EDX,dword ptr [ESP + 0x140]     ; 0043ab9a
    CMP EDX,dword ptr [EAX]             ; 0043aba1
    JGE 0x0043a7f0                      ; 0043aba3
        ;   XREF to: 0043a7f0 (CONDITIONAL_JUMP)  ; LAB_0043a7f0
    ADD EAX,dword ptr [ESP + 0x1a4]     ; 0043aba9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043abb0
    MOV ECX,dword ptr [EAX + 0x44]      ; 0043abb3
    MOV dword ptr [ESP + 0x1b4],EDX     ; 0043abb6
    LEA EAX,[EDX + ECX*0x1]             ; 0043abbd
    XOR EDX,EDX                         ; 0043abc0
    MOV ECX,dword ptr [ESP + 0x128]     ; 0043abc2
    MOV dword ptr [ESP + 0x194],EDX     ; 0043abc9
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0043abd0
    ADD EDX,ECX                         ; 0043abd7
    MOV ECX,dword ptr [EDX]             ; 0043abd9
    DEC ECX                             ; 0043abdb
    MOV dword ptr [ESP + 0x1b0],ECX     ; 0043abdc
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 0043abe3
    DEC EAX                             ; 0043abea
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 0043abeb
    JGE 0x0043ac0b                      ; 0043abf2
        ;   XREF to: 0043ac0b (CONDITIONAL_JUMP)  ; LAB_0043ac0b
    ADD EDX,dword ptr [ESP + 0x1cc]     ; 0043abf4
    CMP EAX,dword ptr [EDX + 0x8]       ; 0043abfb
    JLE 0x0043ac0b                      ; 0043abfe
        ;   XREF to: 0043ac0b (CONDITIONAL_JUMP)  ; LAB_0043ac0b
    MOV dword ptr [ESP + 0x194],0x1     ; 0043ac00
    CMP EAX,dword ptr [ESP + 0x124]     ; 0043ac0b
        ;   Label: LAB_0043ac0b
    JLE 0x0043ac2c                      ; 0043ac12
        ;   XREF to: 0043ac2c (CONDITIONAL_JUMP)  ; LAB_0043ac2c
    CMP EDI,dword ptr [ESP + 0x1b4]     ; 0043ac14
    JL 0x0043ac2c                       ; 0043ac1b
        ;   XREF to: 0043ac2c (CONDITIONAL_JUMP)  ; LAB_0043ac2c
    MOV ECX,dword ptr [ESP + 0x194]     ; 0043ac1d
    TEST ECX,ECX                        ; 0043ac24
    JZ 0x0043acac                       ; 0043ac26
        ;   XREF to: 0043acac (CONDITIONAL_JUMP)  ; LAB_0043acac
    XOR EDX,EDX                         ; 0043ac2c
        ;   Label: LAB_0043ac2c
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 0043ac2e
    MOV dword ptr [ESP + 0x12c],EDX     ; 0043ac35
    IMUL EDX,ECX,0x84                   ; 0043ac3c
    ADD EDX,dword ptr [ESP + 0x1fc]     ; 0043ac42
    MOV ECX,dword ptr [EDX]             ; 0043ac49
    DEC ECX                             ; 0043ac4b
    MOV dword ptr [ESP + 0x1b0],ECX     ; 0043ac4c
    MOV ECX,dword ptr [ESP + 0x140]     ; 0043ac53
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 0043ac5a
    JGE 0x0043ac7a                      ; 0043ac61
        ;   XREF to: 0043ac7a (CONDITIONAL_JUMP)  ; LAB_0043ac7a
    ADD EDX,dword ptr [ESP + 0x1a4]     ; 0043ac63
    CMP EDI,dword ptr [EDX + 0x8]       ; 0043ac6a
    JLE 0x0043ac7a                      ; 0043ac6d
        ;   XREF to: 0043ac7a (CONDITIONAL_JUMP)  ; LAB_0043ac7a
    MOV dword ptr [ESP + 0x12c],0x1     ; 0043ac6f
    CMP EAX,dword ptr [ESP + 0x1c4]     ; 0043ac7a
        ;   Label: LAB_0043ac7a
    JL 0x0043ad68                       ; 0043ac81
        ;   XREF to: 0043ad68 (CONDITIONAL_JUMP)  ; LAB_0043ad68
    MOV ECX,dword ptr [ESP + 0x140]     ; 0043ac87
        ;   Label: LAB_0043ac87
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 0043ac8e
    INC ECX                             ; 0043ac95
    ADD EDX,0x4                         ; 0043ac96
    MOV dword ptr [ESP + 0x140],ECX     ; 0043ac99
    MOV dword ptr [ESP + 0x1a4],EDX     ; 0043aca0
    JMP 0x0043ab88                      ; 0043aca7
        ;   XREF to: 0043ab88 (UNCONDITIONAL_JUMP)  ; LAB_0043ab88
    MOV dword ptr [ESP + 0x190],EAX     ; 0043acac
        ;   Label: LAB_0043acac
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0043acb3
    MOV dword ptr [ESP + 0x198],EAX     ; 0043acba
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043acc1
    ADD EAX,0x7c6550                    ; 0043acc8
    MOV dword ptr [ESP + 0x1a0],ECX     ; 0043accd
    MOV CX,word ptr [EAX]               ; 0043acd4
    AND ECX,0xffff0000                  ; 0043acd7
    MOV word ptr [EAX],CX               ; 0043acdd
    OR ECX,EDI                          ; 0043ace0
    MOV word ptr [EAX],CX               ; 0043ace2
    MOV CX,word ptr [EAX + 0x2]         ; 0043ace5
    MOV dword ptr [ESP + 0x188],EBP     ; 0043ace9
    AND ECX,0xffff0000                  ; 0043acf0
    MOV EDX,dword ptr [ESP + 0x188]     ; 0043acf6
    MOV word ptr [EAX + 0x2],CX         ; 0043acfd
    OR ECX,EDX                          ; 0043ad01
    MOV word ptr [EAX + 0x2],CX         ; 0043ad03
    MOV CX,word ptr [EAX + 0x4]         ; 0043ad07
    AND ECX,0xffff0000                  ; 0043ad0b
    MOV EDX,dword ptr [ESP + 0x190]     ; 0043ad11
    MOV word ptr [EAX + 0x4],CX         ; 0043ad18
    OR ECX,EDX                          ; 0043ad1c
    MOV word ptr [EAX + 0x4],CX         ; 0043ad1e
    MOV CX,word ptr [EAX + 0x6]         ; 0043ad22
    MOV EDX,dword ptr [ESP + 0x198]     ; 0043ad26
    AND ECX,0xffff8000                  ; 0043ad2d
    AND DH,0x7f                         ; 0043ad33
    MOV word ptr [EAX + 0x6],CX         ; 0043ad36
    OR ECX,EDX                          ; 0043ad3a
    MOV word ptr [EAX + 0x6],CX         ; 0043ad3c
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 0043ad40
    MOV CL,byte ptr [EAX + 0x7]         ; 0043ad47
    XOR DH,DH                           ; 0043ad4a
    AND CL,0x7f                         ; 0043ad4c
    AND DL,0x1                          ; 0043ad4f
    MOV byte ptr [EAX + 0x7],CL         ; 0043ad52
    SHL EDX,0xf                         ; 0043ad55
    MOV CX,word ptr [EAX + 0x6]         ; 0043ad58
    OR ECX,EDX                          ; 0043ad5c
    INC EBX                             ; 0043ad5e
    MOV word ptr [EAX + 0x6],CX         ; 0043ad5f
    JMP 0x0043ac87                      ; 0043ad63
        ;   XREF to: 0043ac87 (UNCONDITIONAL_JUMP)  ; LAB_0043ac87
    CMP EAX,ESI                         ; 0043ad68
        ;   Label: LAB_0043ad68
    JL 0x0043ac87                       ; 0043ad6a
        ;   XREF to: 0043ac87 (CONDITIONAL_JUMP)  ; LAB_0043ac87
    CMP dword ptr [ESP + 0x12c],0x0     ; 0043ad70
    JNZ 0x0043ac87                      ; 0043ad78
        ;   XREF to: 0043ac87 (CONDITIONAL_JUMP)  ; LAB_0043ac87
    MOV EDX,EDI                         ; 0043ad7e
    SUB EDX,EAX                         ; 0043ad80
    MOV ECX,dword ptr [ESP + 0x218]     ; 0043ad82
    INC EDX                             ; 0043ad89
    CMP EDX,ECX                         ; 0043ad8a
    JG 0x0043ac87                       ; 0043ad8c
        ;   XREF to: 0043ac87 (CONDITIONAL_JUMP)  ; LAB_0043ac87
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0043ad92
    MOV EAX,0x1                         ; 0043ad99
    MOV dword ptr [ESP + 0x100],EDI     ; 0043ad9e
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0043ada5
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043adac
    MOV ECX,dword ptr [ESP + 0x100]     ; 0043adb3
    ADD EAX,0x7c6550                    ; 0043adba
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0043adbf
    AND word ptr [EAX],0x0              ; 0043adc6
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043adca
    MOV dword ptr [ESP + 0x104],EBP     ; 0043add1
    OR word ptr [EAX],CX                ; 0043add8
    MOV ECX,dword ptr [ESP + 0x104]     ; 0043addb
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0043ade2
    AND word ptr [EAX + 0x2],0x0        ; 0043ade9
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043adee
    OR word ptr [EAX + 0x2],CX          ; 0043adf5
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 0043adf9
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0043ae00
    AND word ptr [EAX + 0x4],0x0        ; 0043ae07
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043ae0c
    OR word ptr [EAX + 0x4],CX          ; 0043ae13
    MOV CX,word ptr [EAX + 0x6]         ; 0043ae17
    MOV EDX,dword ptr [ESP + 0x1c8]     ; 0043ae1b
    AND ECX,0xffff8000                  ; 0043ae22
    AND DH,0x7f                         ; 0043ae28
    MOV word ptr [EAX + 0x6],CX         ; 0043ae2b
    OR ECX,EDX                          ; 0043ae2f
    MOV word ptr [EAX + 0x6],CX         ; 0043ae31
    MOV EDX,dword ptr [ESP + 0x1b8]     ; 0043ae35
    MOV CH,byte ptr [EAX + 0x7]         ; 0043ae3c
    XOR DH,DH                           ; 0043ae3f
    AND CH,0x7f                         ; 0043ae41
    AND DL,0x1                          ; 0043ae44
    MOV byte ptr [EAX + 0x7],CH         ; 0043ae47
    SHL EDX,0xf                         ; 0043ae4a
    MOV CX,word ptr [EAX + 0x6]         ; 0043ae4d
    OR ECX,EDX                          ; 0043ae51
    INC EBX                             ; 0043ae53
    MOV word ptr [EAX + 0x6],CX         ; 0043ae54
    JMP 0x0043ac87                      ; 0043ae58
        ;   XREF to: 0043ac87 (UNCONDITIONAL_JUMP)  ; LAB_0043ac87
    MOV EBP,dword ptr [ESP + 0x200]     ; 0043ae5d
        ;   Label: LAB_0043ae5d
    TEST EBP,EBP                        ; 0043ae64
    JNZ 0x0043ae71                      ; 0043ae66
        ;   XREF to: 0043ae71 (CONDITIONAL_JUMP)  ; LAB_0043ae71
    MOV EAX,dword ptr [ESP + 0x204]     ; 0043ae68
    MOV dword ptr [EAX],EBP             ; 0043ae6f
    MOV EDI,dword ptr [ESP + 0x204]     ; 0043ae71
        ;   Label: LAB_0043ae71
    MOV EDI,dword ptr [EDI]             ; 0043ae78
    LEA ESI,[EBX*0x8 + 0x0]             ; 0043ae7a
    SHL EDI,0x3                         ; 0043ae81
    ADD EDI,ESI                         ; 0043ae84
    PUSH EDI                            ; 0043ae86
    MOV EAX,dword ptr [ESP + 0x204]     ; 0043ae87
    PUSH EAX                            ; 0043ae8e
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 0043ae8f
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0043ae94
    MOV dword ptr [ESP + 0x200],EAX     ; 0043ae97
    TEST EAX,EAX                        ; 0043ae9e
    JNZ 0x0043aed6                      ; 0043aea0
        ;   XREF to: 0043aed6 (CONDITIONAL_JUMP)  ; LAB_0043aed6
    PUSH EDI                            ; 0043aea2
    PUSH 0x5d655e                       ; 0043aea3
    LEA EAX,[ESP + 0x8]                 ; 0043aea8
    PUSH EAX                            ; 0043aeac
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043aead
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EDX,0x5d6589                    ; 0043aeb2
    ADD ESP,0xc                         ; 0043aeb7
    MOV EAX,ESP                         ; 0043aeba
    MOV ECX,0x8f6                       ; 0043aebc
    PUSH EAX                            ; 0043aec1
    MOV dword ptr [0x01d1d400],EDX      ; 0043aec2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043aec8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043aece
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043aed3
    MOV EDI,dword ptr [ESP + 0x204]     ; 0043aed6
        ;   Label: LAB_0043aed6
    MOV EBP,dword ptr [ESP + 0x200]     ; 0043aedd
    MOV EDI,dword ptr [EDI]             ; 0043aee4
    MOV ECX,ESI                         ; 0043aee6
    SHL EDI,0x3                         ; 0043aee8
    MOV ESI,0x7c6550                    ; 0043aeeb
    ADD EDI,EBP                         ; 0043aef0
    PUSH EDI                            ; 0043aef2
    MOV EAX,ECX                         ; 0043aef3
    SHR ECX,0x2                         ; 0043aef5
    MOVSD.REP ES:EDI,ESI                ; 0043aef8
    MOV CL,AL                           ; 0043aefa
    AND CL,0x3                          ; 0043aefc
    MOVSB.REP ES:EDI,ESI                ; 0043aeff
    POP EDI                             ; 0043af01
    MOV EAX,dword ptr [ESP + 0x204]     ; 0043af02
    MOV EDX,dword ptr [EAX]             ; 0043af09
    ADD EDX,EBX                         ; 0043af0b
    MOV ESI,EBP                         ; 0043af0d
    MOV dword ptr [EAX],EDX             ; 0043af0f
    MOV EAX,ESI                         ; 0043af11
    ADD ESP,0x1e4                       ; 0043af13
    POP EBP                             ; 0043af19
    POP EDI                             ; 0043af1a
    POP ESI                             ; 0043af1b
    POP EBX                             ; 0043af1c
    RET                                 ; 0043af1d

