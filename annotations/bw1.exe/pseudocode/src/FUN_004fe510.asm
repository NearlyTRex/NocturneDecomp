; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fe510(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6c8e
;   undefined4 DAT_005e6c92
;   undefined4 DAT_005e6c96
;   TerminatedCString s_l_s_die_wav_005e6cab
;   TerminatedCString s_l_s_shot_wav_005e6cb8
;   undefined4 DAT_005e6ccb
;   undefined4 DAT_005e6cd3
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_00408b40
;   FUN_004a0f00
;   FUN_004e6060
;   FUN_00524770
;   FUN_005247c0
;   FUN_005735a0
;   FUN_00573a80
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe510
        ;   Label: FUN_004fe510
    PUSH ESI                            ; 004fe511
    PUSH EDI                            ; 004fe512
    PUSH EBP                            ; 004fe513
    MOV EBP,ESP                         ; 004fe514
    SUB ESP,0xf8                        ; 004fe516
    AND ESP,0xfffffff8                  ; 004fe51c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fe51f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004fe522
    FLD float ptr [EAX + 0x4]           ; 004fe525
    FSUBR float ptr [EBX + 0x2538]      ; 004fe528
    FST float ptr [EBX + 0x2538]        ; 004fe52e
    FLDZ                                ; 004fe534
    FCOMPP                              ; 004fe536
    FNSTSW AX                           ; 004fe538
    SAHF                                ; 004fe53a
    JC 0x004fe667                       ; 004fe53b
        ;   XREF to: 004fe667 (CONDITIONAL_JUMP)  ; LAB_004fe667
    LEA ESI,[EBX + 0x158]               ; 004fe541
    PUSH ESI                            ; 004fe547
    MOV dword ptr [EBX + 0x2538],0x0    ; 004fe548
    CALL FUN_00524770                   ; 004fe552
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fe557
    ADD ESP,0x4                         ; 004fe55a
    CMP EAX,0x5                         ; 004fe55d
    JZ 0x004fe574                       ; 004fe560
        ;   XREF to: 004fe574 (CONDITIONAL_JUMP)  ; LAB_004fe574
    CMP EAX,0x4                         ; 004fe562
    JZ 0x004fe574                       ; 004fe565
        ;   XREF to: 004fe574 (CONDITIONAL_JUMP)  ; LAB_004fe574
    PUSH 0x1                            ; 004fe567
    PUSH 0x4                            ; 004fe569
    PUSH ESI                            ; 004fe56b
    CALL FUN_005247c0                   ; 004fe56c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004fe571
    MOV ESI,dword ptr [EBX + 0xc26c]    ; 004fe574
        ;   Label: LAB_004fe574
    PUSH ESI                            ; 004fe57a
    CALL FUN_00573a80                   ; 004fe57b
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 004fe580
    MOV EDI,dword ptr [EBX + 0xc270]    ; 004fe583
    PUSH EDI                            ; 004fe589
    CALL FUN_00573a80                   ; 004fe58a
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 004fe58f
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 004fe592
    MOV dword ptr [ESP + 0x10],EAX      ; 004fe598
    FLD float ptr [ESP + 0x10]          ; 004fe59c
    FST double ptr [ESP + 0x8]          ; 004fe5a0
    FCOMP double ptr [0x005e6ccb]       ; 004fe5a4 | DAT_005e6ccb
    FNSTSW AX                           ; 004fe5aa
    SAHF                                ; 004fe5ac
    JNC 0x004fe644                      ; 004fe5ad
        ;   XREF to: 004fe644 (CONDITIONAL_JUMP)  ; LAB_004fe644
    MOV EAX,0x5e6c8e                    ; 004fe5b3 | DAT_005e6c8e
    PUSH EAX                            ; 004fe5b8 | DAT_005e6c8e | DAT_005e6c92 | DAT_005e6c96
        ;   Label: LAB_004fe5b8
    PUSH 0x5e6cab                       ; 004fe5b9 | = "l%s-die?.wav"
    LEA EAX,[ESP + 0x84]                ; 004fe5be
    PUSH EAX                            ; 004fe5c5
    CALL FUN_005bfb40                   ; 004fe5c6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 004fe5cb
    LEA ESI,[ESP + 0x7c]                ; 004fe5ce
    PUSH ESI                            ; 004fe5d2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe5d3
    PUSH EBX                            ; 004fe5d9
    CALL dword ptr [EAX + 0x2c]         ; 004fe5da
    ADD ESP,0x8                         ; 004fe5dd
    MOV dword ptr [EBX + 0xc26c],EAX    ; 004fe5e0
    MOV EAX,dword ptr [EBP + 0x18]      ; 004fe5e6
        ;   Label: LAB_004fe5e6
    ADD EAX,0x1c                        ; 004fe5e9
    PUSH EAX                            ; 004fe5ec
    PUSH EBX                            ; 004fe5ed
    LEA ESI,[ESP + 0xe8]                ; 004fe5ee
    LEA EDI,[ESP + 0xf4]                ; 004fe5f5
    CALL FUN_00408b40                   ; 004fe5fc
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0xe8]                ; 004fe601
    ADD ESP,0x8                         ; 004fe608
    MOVSD ES:EDI,ESI                    ; 004fe60b
    MOVSD ES:EDI,ESI                    ; 004fe60c
    MOVSD ES:EDI,ESI                    ; 004fe60d
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 004fe60e
    PUSH EAX                            ; 004fe614
    PUSH 0xa                            ; 004fe615
    PUSH 0x0                            ; 004fe617
    LEA EAX,[ESP + 0xf8]                ; 004fe619
    PUSH EAX                            ; 004fe620
    MOV EDX,dword ptr [0x0061dca4]      ; 004fe621 | DAT_0061dca4
    PUSH EDX                            ; 004fe627
    CALL FUN_004e6060                   ; 004fe628
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6060()
    ADD ESP,0x14                        ; 004fe62d
    MOV ECX,dword ptr [EBP + 0x18]      ; 004fe630
    PUSH ECX                            ; 004fe633
    PUSH EBX                            ; 004fe634
    CALL FUN_004a0f00                   ; 004fe635
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 004fe63a
    MOV ESP,EBP                         ; 004fe63d
    POP EBP                             ; 004fe63f
    POP EDI                             ; 004fe640
    POP ESI                             ; 004fe641
    POP EBX                             ; 004fe642
    RET                                 ; 004fe643
    FLD double ptr [ESP + 0x8]          ; 004fe644
        ;   Label: LAB_004fe644
    FCOMP double ptr [0x005e6cd3]       ; 004fe648 | DAT_005e6cd3
    FNSTSW AX                           ; 004fe64e
    SAHF                                ; 004fe650
    JNC 0x004fe65d                      ; 004fe651
        ;   XREF to: 004fe65d (CONDITIONAL_JUMP)  ; LAB_004fe65d
    MOV EAX,0x5e6c92                    ; 004fe653 | DAT_005e6c92
    JMP 0x004fe5b8                      ; 004fe658
        ;   XREF to: 004fe5b8 (UNCONDITIONAL_JUMP)  ; LAB_004fe5b8
    MOV EAX,0x5e6c96                    ; 004fe65d | DAT_005e6c96
        ;   Label: LAB_004fe65d
    JMP 0x004fe5b8                      ; 004fe662
        ;   XREF to: 004fe5b8 (UNCONDITIONAL_JUMP)  ; LAB_004fe5b8
    MOV EDX,dword ptr [EBX + 0xc270]    ; 004fe667
        ;   Label: LAB_004fe667
    PUSH EDX                            ; 004fe66d
    CALL FUN_00573a80                   ; 004fe66e
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 004fe673
    MOV ECX,dword ptr [EBX + 0xc26c]    ; 004fe676
    PUSH ECX                            ; 004fe67c
    CALL FUN_005735a0                   ; 004fe67d
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 004fe682
    TEST EAX,EAX                        ; 004fe685
    JNZ 0x004fe6d5                      ; 004fe687
        ;   XREF to: 004fe6d5 (CONDITIONAL_JUMP)  ; LAB_004fe6d5
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 004fe689
    MOV dword ptr [ESP + 0x14],EAX      ; 004fe68f
    FLD float ptr [ESP + 0x14]          ; 004fe693
    FST double ptr [ESP]                ; 004fe697
    FCOMP double ptr [0x005e6ccb]       ; 004fe69a | DAT_005e6ccb
    FNSTSW AX                           ; 004fe6a0
    SAHF                                ; 004fe6a2
    JNC 0x004fe6ed                      ; 004fe6a3
        ;   XREF to: 004fe6ed (CONDITIONAL_JUMP)  ; LAB_004fe6ed
    MOV EAX,0x5e6c8e                    ; 004fe6a5 | DAT_005e6c8e
    PUSH EAX                            ; 004fe6aa | DAT_005e6c8e | DAT_005e6c92 | DAT_005e6c96
        ;   Label: LAB_004fe6aa
    PUSH 0x5e6cb8                       ; 004fe6ab | = "l%s-shot?.wav"
    LEA EAX,[ESP + 0x20]                ; 004fe6b0
    PUSH EAX                            ; 004fe6b4
    CALL FUN_005bfb40                   ; 004fe6b5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 004fe6ba
    LEA ESI,[ESP + 0x18]                ; 004fe6bd
    PUSH ESI                            ; 004fe6c1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe6c2
    PUSH EBX                            ; 004fe6c8
    CALL dword ptr [EAX + 0x2c]         ; 004fe6c9
    ADD ESP,0x8                         ; 004fe6cc
    MOV dword ptr [EBX + 0xc26c],EAX    ; 004fe6cf
    PUSH 0x1                            ; 004fe6d5
        ;   Label: LAB_004fe6d5
    PUSH 0x3                            ; 004fe6d7
    LEA EAX,[EBX + 0x158]               ; 004fe6d9
    PUSH EAX                            ; 004fe6df
    CALL FUN_005247c0                   ; 004fe6e0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004fe6e5
    JMP 0x004fe5e6                      ; 004fe6e8
        ;   XREF to: 004fe5e6 (UNCONDITIONAL_JUMP)  ; LAB_004fe5e6
    FLD double ptr [ESP]                ; 004fe6ed
        ;   Label: LAB_004fe6ed
    FCOMP double ptr [0x005e6cd3]       ; 004fe6f0 | DAT_005e6cd3
    FNSTSW AX                           ; 004fe6f6
    SAHF                                ; 004fe6f8
    JNC 0x004fe702                      ; 004fe6f9
        ;   XREF to: 004fe702 (CONDITIONAL_JUMP)  ; LAB_004fe702
    MOV EAX,0x5e6c92                    ; 004fe6fb | DAT_005e6c92
    JMP 0x004fe6aa                      ; 004fe700
        ;   XREF to: 004fe6aa (UNCONDITIONAL_JUMP)  ; LAB_004fe6aa
    MOV EAX,0x5e6c96                    ; 004fe702 | DAT_005e6c96
        ;   Label: LAB_004fe702
    JMP 0x004fe6aa                      ; 004fe707
        ;   XREF to: 004fe6aa (UNCONDITIONAL_JUMP)  ; LAB_004fe6aa

