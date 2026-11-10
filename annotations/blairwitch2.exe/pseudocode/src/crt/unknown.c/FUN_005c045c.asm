; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005c045c(uint param_1,LPCVOID param_2,DWORD param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0380 at 005c040e
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;   undefined4 DAT_0061f414
;   undefined4 DAT_0061f440
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005badf6
;   crt_unknown.c_FUN_005c036c
;   crt_unknown.c_FUN_005c0380
;   crt_unknown.c_FUN_005c0820
;   crt_unknown.c_FUN_005c4070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c045c
        ;   Label: crt_unknown.c_FUN_005c045c
    PUSH ESI                            ; 005c045d
    PUSH EDI                            ; 005c045e
    PUSH EBP                            ; 005c045f
    MOV EBP,ESP                         ; 005c0460
    SUB ESP,0x14                        ; 005c0462
    MOV EDI,dword ptr [EBP + 0x14]      ; 005c0465
    TEST EDI,EDI                        ; 005c0468
    JL 0x005c0474                       ; 005c046a
        ;   XREF to: 005c0474 (CONDITIONAL_JUMP)  ; LAB_005c0474
    CMP EDI,dword ptr [0x0061f480]      ; 005c046c | DAT_0061f480
    JBE 0x005c0485                      ; 005c0472
        ;   XREF to: 005c0485 (CONDITIONAL_JUMP)  ; LAB_005c0485
    PUSH 0x4                            ; 005c0474
        ;   Label: LAB_005c0474
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c0476
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005c047b
    JMP 0x005c05c6                      ; 005c0480
        ;   XREF to: 005c05c6 (UNCONDITIONAL_JUMP)  ; LAB_005c05c6
    MOV EDX,dword ptr [0x0061f4d8]      ; 005c0485 | DAT_0061f4d8
        ;   Label: LAB_005c0485
    MOV EAX,dword ptr [EDX + EDI*0x4]   ; 005c048b
    PUSH EDI                            ; 005c048e
    MOV dword ptr [EBP + -0x8],EAX      ; 005c048f
    CALL crt_unknown.c_FUN_005c0820     ; 005c0492
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0820()
    MOV EBX,EAX                         ; 005c0497
    ADD ESP,0x4                         ; 005c0499
    MOV dword ptr [EBP + -0x4],EAX      ; 005c049c
    TEST EAX,EAX                        ; 005c049f
    JNZ 0x005c04b9                      ; 005c04a1
        ;   XREF to: 005c04b9 (CONDITIONAL_JUMP)  ; LAB_005c04b9
    PUSH 0x4                            ; 005c04a3
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c04a5
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005c04aa
    ADD ESP,0x4                         ; 005c04af
    MOV ESP,EBP                         ; 005c04b2
    POP EBP                             ; 005c04b4
    POP EDI                             ; 005c04b5
    POP ESI                             ; 005c04b6
    POP EBX                             ; 005c04b7
    RET                                 ; 005c04b8
    TEST AL,0x2                         ; 005c04b9
        ;   Label: LAB_005c04b9
    JNZ 0x005c04d3                      ; 005c04bb
        ;   XREF to: 005c04d3 (CONDITIONAL_JUMP)  ; LAB_005c04d3
    PUSH 0x6                            ; 005c04bd
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c04bf
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005c04c4
    ADD ESP,0x4                         ; 005c04c9
    MOV ESP,EBP                         ; 005c04cc
    POP EBP                             ; 005c04ce
    POP EDI                             ; 005c04cf
    POP ESI                             ; 005c04d0
    POP EBX                             ; 005c04d1
    RET                                 ; 005c04d2
    PUSH EDI                            ; 005c04d3
        ;   Label: LAB_005c04d3
    CALL dword ptr [0x0061f2a8]         ; 005c04d4 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    ADD ESP,0x4                         ; 005c04da
    TEST BL,0x80                        ; 005c04dd
    JZ 0x005c050c                       ; 005c04e0
        ;   XREF to: 005c050c (CONDITIONAL_JUMP)  ; LAB_005c050c
    PUSH 0x2                            ; 005c04e2
    PUSH 0x0                            ; 005c04e4
    PUSH 0x0                            ; 005c04e6
    MOV EBX,dword ptr [EBP + -0x8]      ; 005c04e8
    PUSH EBX                            ; 005c04eb
    CALL dword ptr CS:[0x5c862c]        ; 005c04ec
    CMP EAX,-0x1                        ; 005c04f3
    JNZ 0x005c050c                      ; 005c04f6
        ;   XREF to: 005c050c (CONDITIONAL_JUMP)  ; LAB_005c050c
    PUSH EDI                            ; 005c04f8
    CALL dword ptr [0x0061f2ac]         ; 005c04f9 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005c04ff
    CALL crt_unknown.c_FUN_005c036c     ; 005c0502
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    JMP 0x005c05c9                      ; 005c0507
        ;   XREF to: 005c05c9 (UNCONDITIONAL_JUMP)  ; LAB_005c05c9
    TEST byte ptr [EBP + -0x3],0x80     ; 005c050c
        ;   Label: LAB_005c050c
    JZ 0x005c0535                       ; 005c0510
        ;   XREF to: 005c0535 (CONDITIONAL_JUMP)  ; LAB_005c0535
    PUSH EDI                            ; 005c0512
    CALL crt_unknown.c_FUN_005c0380     ; 005c0513
        ;   XREF to: 005c0380 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0380()
    ADD ESP,0x4                         ; 005c0518
    TEST EAX,EAX                        ; 005c051b
    JZ 0x005c0535                       ; 005c051d
        ;   XREF to: 005c0535 (CONDITIONAL_JUMP)  ; LAB_005c0535
    PUSH EDI                            ; 005c051f
    CALL dword ptr [0x0061f2ac]         ; 005c0520 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005c0526
    ADD ESP,0x4                         ; 005c052b
    MOV ESP,EBP                         ; 005c052e
    POP EBP                             ; 005c0530
    POP EDI                             ; 005c0531
    POP ESI                             ; 005c0532
    POP EBX                             ; 005c0533
    RET                                 ; 005c0534
    TEST byte ptr [EBP + -0x4],0x40     ; 005c0535
        ;   Label: LAB_005c0535
    JZ 0x005c05d0                       ; 005c0539
        ;   XREF to: 005c05d0 (CONDITIONAL_JUMP)  ; LAB_005c05d0
    CMP dword ptr [0x0061f440],0x0      ; 005c053f | DAT_0061f440
    JZ 0x005c056d                       ; 005c0546
        ;   XREF to: 005c056d (CONDITIONAL_JUMP)  ; LAB_005c056d
    PUSH EDI                            ; 005c0548
    CALL dword ptr [0x0061f414]         ; 005c0549 | DAT_0061f414
    ADD ESP,0x4                         ; 005c054f
    TEST EAX,EAX                        ; 005c0552
    JZ 0x005c056d                       ; 005c0554
        ;   XREF to: 005c056d (CONDITIONAL_JUMP)  ; LAB_005c056d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005c0556
    PUSH EDX                            ; 005c0559
    MOV EBX,dword ptr [EBP + 0x18]      ; 005c055a
    PUSH EBX                            ; 005c055d
    PUSH EAX                            ; 005c055e
    CALL dword ptr [0x0061f440]         ; 005c055f | DAT_0061f440
    ADD ESP,0xc                         ; 005c0565
    MOV dword ptr [EBP + -0xc],EAX      ; 005c0568
    JMP 0x005c05a0                      ; 005c056b
        ;   XREF to: 005c05a0 (UNCONDITIONAL_JUMP)  ; LAB_005c05a0
    PUSH 0x0                            ; 005c056d
        ;   Label: LAB_005c056d
    LEA EAX,[EBP + -0xc]                ; 005c056f
    PUSH EAX                            ; 005c0572
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005c0573
    PUSH EBX                            ; 005c0576
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c0577
    PUSH ECX                            ; 005c057a
    MOV ESI,dword ptr [EBP + -0x8]      ; 005c057b
    PUSH ESI                            ; 005c057e
    CALL dword ptr CS:[0x5c8678]        ; 005c057f
    TEST EAX,EAX                        ; 005c0586
    JNZ 0x005c05a0                      ; 005c0588
        ;   XREF to: 005c05a0 (CONDITIONAL_JUMP)  ; LAB_005c05a0
    PUSH EDI                            ; 005c058a
    CALL dword ptr [0x0061f2ac]         ; 005c058b | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005c0591
    CALL crt_unknown.c_FUN_005c036c     ; 005c0594
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    MOV ESP,EBP                         ; 005c0599
    POP EBP                             ; 005c059b
    POP EDI                             ; 005c059c
    POP ESI                             ; 005c059d
    POP EBX                             ; 005c059e
    RET                                 ; 005c059f
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c05a0
        ;   Label: LAB_005c05a0
    CMP EAX,dword ptr [EBP + 0x1c]      ; 005c05a3
    JZ 0x005c05bc                       ; 005c05a6
        ;   XREF to: 005c05bc (CONDITIONAL_JUMP)  ; LAB_005c05bc
    PUSH 0xc                            ; 005c05ac
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c05ae
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c05b3
    ADD ESP,0x4                         ; 005c05b6
    MOV dword ptr [EBP + 0x1c],EAX      ; 005c05b9
    PUSH EDI                            ; 005c05bc
        ;   Label: LAB_005c05bc
    CALL dword ptr [0x0061f2ac]         ; 005c05bd | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c05c3
    ADD ESP,0x4                         ; 005c05c6
        ;   Label: LAB_005c05c6
    MOV ESP,EBP                         ; 005c05c9
        ;   Label: LAB_005c05c9
    POP EBP                             ; 005c05cb
    POP EDI                             ; 005c05cc
    POP ESI                             ; 005c05cd
    POP EBX                             ; 005c05ce
    RET                                 ; 005c05cf
    CALL crt_unknown.c_FUN_005c4070     ; 005c05d0
        ;   XREF to: 005c4070 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4070()
        ;   Label: LAB_005c05d0
    MOV dword ptr [EBP + -0x10],EAX     ; 005c05d5
    CMP EAX,0xb0                        ; 005c05d8
    JNC 0x005c05e4                      ; 005c05dd
        ;   XREF to: 005c05e4 (CONDITIONAL_JUMP)  ; LAB_005c05e4
    CALL crt_unknown.c_FUN_005badf6     ; 005c05df
        ;   XREF to: 005badf6 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005badf6()
    MOV ECX,dword ptr [EBP + -0x10]     ; 005c05e4
        ;   Label: LAB_005c05e4
    MOV EBX,0x200                       ; 005c05e7
    CMP ECX,0x230                       ; 005c05ec
    JNC 0x005c05f9                      ; 005c05f2
        ;   XREF to: 005c05f9 (CONDITIONAL_JUMP)  ; LAB_005c05f9
    MOV EBX,0x80                        ; 005c05f4
    LEA EAX,[EBX + 0x3]                 ; 005c05f9
        ;   Label: LAB_005c05f9
    AND AL,0xfc                         ; 005c05fc
    SUB ESP,EAX                         ; 005c05fe
    XOR EAX,EAX                         ; 005c0600
    MOV dword ptr [EBP + -0x10],EAX     ; 005c0602
    MOV dword ptr [EBP + -0x14],EAX     ; 005c0605
    MOV dword ptr [EBP + -0xc],EAX      ; 005c0608
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c060b
    MOV ESI,ESP                         ; 005c060e
    TEST EAX,EAX                        ; 005c0610
    JBE 0x005c077d                      ; 005c0612
        ;   XREF to: 005c077d (CONDITIONAL_JUMP)  ; LAB_005c077d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c0618
        ;   Label: LAB_005c0618
    ADD EAX,dword ptr [EBP + -0x10]     ; 005c061b
    CMP byte ptr [EAX],0xa              ; 005c061e
    JNZ 0x005c06c5                      ; 005c0621
        ;   XREF to: 005c06c5 (CONDITIONAL_JUMP)  ; LAB_005c06c5
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c0627
    MOV byte ptr [ESI + EAX*0x1],0xd    ; 005c062a
    MOV ECX,dword ptr [EBP + -0x14]     ; 005c062e
    INC ECX                             ; 005c0631
    MOV dword ptr [EBP + -0x14],ECX     ; 005c0632
    CMP EBX,ECX                         ; 005c0635
    JNZ 0x005c06c5                      ; 005c0637
        ;   XREF to: 005c06c5 (CONDITIONAL_JUMP)  ; LAB_005c06c5
    CMP dword ptr [0x0061f440],0x0      ; 005c063d | DAT_0061f440
    JZ 0x005c0665                       ; 005c0644
        ;   XREF to: 005c0665 (CONDITIONAL_JUMP)  ; LAB_005c0665
    PUSH EDI                            ; 005c0646
    CALL dword ptr [0x0061f414]         ; 005c0647 | DAT_0061f414
    ADD ESP,0x4                         ; 005c064d
    TEST EAX,EAX                        ; 005c0650
    JZ 0x005c0665                       ; 005c0652
        ;   XREF to: 005c0665 (CONDITIONAL_JUMP)  ; LAB_005c0665
    PUSH EBX                            ; 005c0654
    PUSH ESI                            ; 005c0655
    PUSH EAX                            ; 005c0656
    CALL dword ptr [0x0061f440]         ; 005c0657 | DAT_0061f440
    ADD ESP,0xc                         ; 005c065d
    MOV dword ptr [EBP + -0x14],EAX     ; 005c0660
    JMP 0x005c0692                      ; 005c0663
        ;   XREF to: 005c0692 (UNCONDITIONAL_JUMP)  ; LAB_005c0692
    PUSH 0x0                            ; 005c0665
        ;   Label: LAB_005c0665
    LEA EAX,[EBP + -0x14]               ; 005c0667
    PUSH EAX                            ; 005c066a
    PUSH EBX                            ; 005c066b
    PUSH ESI                            ; 005c066c
    MOV ECX,dword ptr [EBP + -0x8]      ; 005c066d
    PUSH ECX                            ; 005c0670
    CALL dword ptr CS:[0x5c8678]        ; 005c0671
    TEST EAX,EAX                        ; 005c0678
    JNZ 0x005c0692                      ; 005c067a
        ;   XREF to: 005c0692 (CONDITIONAL_JUMP)  ; LAB_005c0692
    PUSH EDI                            ; 005c067c
    CALL dword ptr [0x0061f2ac]         ; 005c067d | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005c0683
    CALL crt_unknown.c_FUN_005c036c     ; 005c0686
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    MOV ESP,EBP                         ; 005c068b
    POP EBP                             ; 005c068d
    POP EDI                             ; 005c068e
    POP ESI                             ; 005c068f
    POP EBX                             ; 005c0690
    RET                                 ; 005c0691
    CMP EBX,dword ptr [EBP + -0x14]     ; 005c0692
        ;   Label: LAB_005c0692
    JZ 0x005c06ba                       ; 005c0695
        ;   XREF to: 005c06ba (CONDITIONAL_JUMP)  ; LAB_005c06ba
    PUSH 0xc                            ; 005c0697
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c0699
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005c069e
    PUSH EDI                            ; 005c06a1
    CALL dword ptr [0x0061f2ac]         ; 005c06a2 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c06a8
    MOV EBX,dword ptr [EBP + -0x14]     ; 005c06ab
    ADD ESP,0x4                         ; 005c06ae
    ADD EAX,EBX                         ; 005c06b1
    MOV ESP,EBP                         ; 005c06b3
    POP EBP                             ; 005c06b5
    POP EDI                             ; 005c06b6
    POP ESI                             ; 005c06b7
    POP EBX                             ; 005c06b8
    RET                                 ; 005c06b9
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c06ba
        ;   Label: LAB_005c06ba
    XOR EDX,EDX                         ; 005c06bd
    MOV dword ptr [EBP + -0xc],EAX      ; 005c06bf
    MOV dword ptr [EBP + -0x14],EDX     ; 005c06c2
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c06c5
        ;   Label: LAB_005c06c5
    ADD EAX,dword ptr [EBP + -0x10]     ; 005c06c8
    MOV EDX,dword ptr [EBP + -0x14]     ; 005c06cb
    MOV AL,byte ptr [EAX]               ; 005c06ce
    MOV byte ptr [EDX + ESI*0x1],AL     ; 005c06d0
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c06d3
    MOV EDX,dword ptr [EBP + -0x14]     ; 005c06d6
    INC EAX                             ; 005c06d9
    INC EDX                             ; 005c06da
    MOV dword ptr [EBP + -0x10],EAX     ; 005c06db
    MOV dword ptr [EBP + -0x14],EDX     ; 005c06de
    CMP EBX,EDX                         ; 005c06e1
    JNZ 0x005c0771                      ; 005c06e3
        ;   XREF to: 005c0771 (CONDITIONAL_JUMP)  ; LAB_005c0771
    CMP dword ptr [0x0061f440],0x0      ; 005c06e9 | DAT_0061f440
    JZ 0x005c0711                       ; 005c06f0
        ;   XREF to: 005c0711 (CONDITIONAL_JUMP)  ; LAB_005c0711
    PUSH EDI                            ; 005c06f2
    CALL dword ptr [0x0061f414]         ; 005c06f3 | DAT_0061f414
    ADD ESP,0x4                         ; 005c06f9
    TEST EAX,EAX                        ; 005c06fc
    JZ 0x005c0711                       ; 005c06fe
        ;   XREF to: 005c0711 (CONDITIONAL_JUMP)  ; LAB_005c0711
    PUSH EBX                            ; 005c0700
    PUSH ESI                            ; 005c0701
    PUSH EAX                            ; 005c0702
    CALL dword ptr [0x0061f440]         ; 005c0703 | DAT_0061f440
    ADD ESP,0xc                         ; 005c0709
    MOV dword ptr [EBP + -0x14],EAX     ; 005c070c
    JMP 0x005c073e                      ; 005c070f
        ;   XREF to: 005c073e (UNCONDITIONAL_JUMP)  ; LAB_005c073e
    PUSH 0x0                            ; 005c0711
        ;   Label: LAB_005c0711
    LEA EAX,[EBP + -0x14]               ; 005c0713
    PUSH EAX                            ; 005c0716
    PUSH EBX                            ; 005c0717
    PUSH ESI                            ; 005c0718
    MOV EDX,dword ptr [EBP + -0x8]      ; 005c0719
    PUSH EDX                            ; 005c071c
    CALL dword ptr CS:[0x5c8678]        ; 005c071d
    TEST EAX,EAX                        ; 005c0724
    JNZ 0x005c073e                      ; 005c0726
        ;   XREF to: 005c073e (CONDITIONAL_JUMP)  ; LAB_005c073e
    PUSH EDI                            ; 005c0728
    CALL dword ptr [0x0061f2ac]         ; 005c0729 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005c072f
    CALL crt_unknown.c_FUN_005c036c     ; 005c0732
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    MOV ESP,EBP                         ; 005c0737
    POP EBP                             ; 005c0739
    POP EDI                             ; 005c073a
    POP ESI                             ; 005c073b
    POP EBX                             ; 005c073c
    RET                                 ; 005c073d
    CMP EBX,dword ptr [EBP + -0x14]     ; 005c073e
        ;   Label: LAB_005c073e
    JZ 0x005c0766                       ; 005c0741
        ;   XREF to: 005c0766 (CONDITIONAL_JUMP)  ; LAB_005c0766
    PUSH 0xc                            ; 005c0743
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c0745
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005c074a
    PUSH EDI                            ; 005c074d
    CALL dword ptr [0x0061f2ac]         ; 005c074e | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c0754
    MOV EDX,dword ptr [EBP + -0x14]     ; 005c0757
    ADD ESP,0x4                         ; 005c075a
    ADD EAX,EDX                         ; 005c075d
    MOV ESP,EBP                         ; 005c075f
    POP EBP                             ; 005c0761
    POP EDI                             ; 005c0762
    POP ESI                             ; 005c0763
    POP EBX                             ; 005c0764
    RET                                 ; 005c0765
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c0766
        ;   Label: LAB_005c0766
    MOV dword ptr [EBP + -0xc],EAX      ; 005c0769
    XOR EAX,EAX                         ; 005c076c
    MOV dword ptr [EBP + -0x14],EAX     ; 005c076e
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c0771
        ;   Label: LAB_005c0771
    CMP EAX,dword ptr [EBP + 0x1c]      ; 005c0774
    JC 0x005c0618                       ; 005c0777
        ;   XREF to: 005c0618 (CONDITIONAL_JUMP)  ; LAB_005c0618
    CMP dword ptr [EBP + -0x14],0x0     ; 005c077d
        ;   Label: LAB_005c077d
    JZ 0x005c05bc                       ; 005c0781
        ;   XREF to: 005c05bc (CONDITIONAL_JUMP)  ; LAB_005c05bc
    CMP dword ptr [0x0061f440],0x0      ; 005c0787 | DAT_0061f440
    JZ 0x005c07b2                       ; 005c078e
        ;   XREF to: 005c07b2 (CONDITIONAL_JUMP)  ; LAB_005c07b2
    PUSH EDI                            ; 005c0790
    CALL dword ptr [0x0061f414]         ; 005c0791 | DAT_0061f414
    ADD ESP,0x4                         ; 005c0797
    TEST EAX,EAX                        ; 005c079a
    JZ 0x005c07b2                       ; 005c079c
        ;   XREF to: 005c07b2 (CONDITIONAL_JUMP)  ; LAB_005c07b2
    MOV EBX,dword ptr [EBP + -0x14]     ; 005c079e
    PUSH EBX                            ; 005c07a1
    PUSH ESI                            ; 005c07a2
    PUSH EAX                            ; 005c07a3
    CALL dword ptr [0x0061f440]         ; 005c07a4 | DAT_0061f440
    ADD ESP,0xc                         ; 005c07aa
    MOV dword ptr [EBP + -0x10],EAX     ; 005c07ad
    JMP 0x005c07e2                      ; 005c07b0
        ;   XREF to: 005c07e2 (UNCONDITIONAL_JUMP)  ; LAB_005c07e2
    PUSH 0x0                            ; 005c07b2
        ;   Label: LAB_005c07b2
    LEA EAX,[EBP + -0x10]               ; 005c07b4
    PUSH EAX                            ; 005c07b7
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c07b8
    PUSH EAX                            ; 005c07bb
    PUSH ESI                            ; 005c07bc
    MOV EDX,dword ptr [EBP + -0x8]      ; 005c07bd
    PUSH EDX                            ; 005c07c0
    CALL dword ptr CS:[0x5c8678]        ; 005c07c1
    TEST EAX,EAX                        ; 005c07c8
    JNZ 0x005c07e2                      ; 005c07ca
        ;   XREF to: 005c07e2 (CONDITIONAL_JUMP)  ; LAB_005c07e2
    PUSH EDI                            ; 005c07cc
    CALL dword ptr [0x0061f2ac]         ; 005c07cd | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005c07d3
    CALL crt_unknown.c_FUN_005c036c     ; 005c07d6
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    MOV ESP,EBP                         ; 005c07db
    POP EBP                             ; 005c07dd
    POP EDI                             ; 005c07de
    POP ESI                             ; 005c07df
    POP EBX                             ; 005c07e0
    RET                                 ; 005c07e1
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c07e2
        ;   Label: LAB_005c07e2
    CMP EAX,dword ptr [EBP + -0x14]     ; 005c07e5
    JZ 0x005c05bc                       ; 005c07e8
        ;   XREF to: 005c05bc (CONDITIONAL_JUMP)  ; LAB_005c05bc
    PUSH 0xc                            ; 005c07ee
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c07f0
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005c07f5
    PUSH EDI                            ; 005c07f8
    CALL dword ptr [0x0061f2ac]         ; 005c07f9 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c07ff
    MOV ESI,dword ptr [EBP + -0x10]     ; 005c0802
    ADD ESP,0x4                         ; 005c0805
    ADD EAX,ESI                         ; 005c0808
    MOV ESP,EBP                         ; 005c080a
    POP EBP                             ; 005c080c
    POP EDI                             ; 005c080d
    POP ESI                             ; 005c080e
    POP EBX                             ; 005c080f
    RET                                 ; 005c0810

