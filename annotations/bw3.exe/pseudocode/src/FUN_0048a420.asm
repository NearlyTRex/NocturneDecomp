; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048a420(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005bdd4e
;   undefined4 DAT_005bdd52
;   undefined4 DAT_005bdd56
;   undefined4 DAT_005bdd5a
;   undefined4 DAT_005bdd5e
;   undefined4 DAT_005bdd62
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_00603b28
;   undefined4 DAT_006045f8
;   undefined4 DAT_01c6e35c
;   undefined4 DAT_01d5ba70
;   undefined4 DAT_02d24d7c
;
; Called Functions:
;   FUN_00408b80
;   FUN_0040c840
;   FUN_0040ce40
;   FUN_0042abb0
;   FUN_0045aae0
;   FUN_004a3af0
;   FUN_004a3c50
;   FUN_005372f0
;   FUN_00556be0
;   FUN_005609d0
;   FUN_0057b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a420
        ;   Label: FUN_0048a420
    PUSH ESI                            ; 0048a421
    PUSH EDI                            ; 0048a422
    PUSH EBP                            ; 0048a423
    SUB ESP,0x25c                       ; 0048a424
    MOV EBX,dword ptr [ESP + 0x270]     ; 0048a42a
    PUSH EBX                            ; 0048a431
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048a432
    LEA ESI,[ESP + 0x190]               ; 0048a438
    LEA EDI,[ESP + 0x1c0]               ; 0048a43f
    CALL dword ptr [EAX + 0xe0]         ; 0048a446
    ADD ESP,0x4                         ; 0048a44c
    LEA EAX,[ESP + 0x1bc]               ; 0048a44f
    LEA ESI,[ESP + 0x18c]               ; 0048a456
    PUSH EAX                            ; 0048a45d
    MOVSD ES:EDI,ESI                    ; 0048a45e
    MOVSD ES:EDI,ESI                    ; 0048a45f
    MOVSD ES:EDI,ESI                    ; 0048a460
    PUSH EBX                            ; 0048a461
    LEA ESI,[ESP + 0x170]               ; 0048a462
    LEA EDI,[ESP + 0x98]                ; 0048a469
    CALL FUN_00408b80                   ; 0048a470
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 0048a475
    LEA ESI,[ESP + 0x168]               ; 0048a478
    PUSH dword ptr [ESP + 0x274]        ; 0048a47f
    PUSH EBX                            ; 0048a486
    MOVSD ES:EDI,ESI                    ; 0048a487
    MOVSD ES:EDI,ESI                    ; 0048a488
    MOVSD ES:EDI,ESI                    ; 0048a489
    CALL FUN_0057b160                   ; 0048a48a
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b160()
    ADD ESP,0x8                         ; 0048a48f
    FLD float ptr [EBX + 0x5a8]         ; 0048a492
    FSUB float ptr [ESP + 0x274]        ; 0048a498
    FLDZ                                ; 0048a49f
    FXCH                                ; 0048a4a1
    FSTP float ptr [EBX + 0x5a8]        ; 0048a4a3
    FCOMP float ptr [EBX + 0x5a8]       ; 0048a4a9
    FNSTSW AX                           ; 0048a4af
    SAHF                                ; 0048a4b1
    JNC 0x0048a4eb                      ; 0048a4b2
        ;   XREF to: 0048a4eb (CONDITIONAL_JUMP)  ; LAB_0048a4eb
    CMP dword ptr [EBX + 0x598],0x0     ; 0048a4b4
        ;   Label: LAB_0048a4b4
    JNZ 0x0048a4f7                      ; 0048a4bb
        ;   XREF to: 0048a4f7 (CONDITIONAL_JUMP)  ; LAB_0048a4f7
    CMP dword ptr [EBX + 0x594],0x0     ; 0048a4bd
    JNZ 0x0048aff6                      ; 0048a4c4
        ;   XREF to: 0048aff6 (CONDITIONAL_JUMP)  ; LAB_0048aff6
    MOV EAX,dword ptr [EBX + 0x598]     ; 0048a4ca
        ;   Label: LAB_0048a4ca
    MOV dword ptr [EBX + 0x598],0x0     ; 0048a4d0
    MOV dword ptr [EBX + 0x594],EAX     ; 0048a4da
    ADD ESP,0x25c                       ; 0048a4e0
    POP EBP                             ; 0048a4e6
    POP EDI                             ; 0048a4e7
    POP ESI                             ; 0048a4e8
    POP EBX                             ; 0048a4e9
    RET                                 ; 0048a4ea
    MOV dword ptr [EBX + 0x5a8],0x0     ; 0048a4eb
        ;   Label: LAB_0048a4eb
    JMP 0x0048a4b4                      ; 0048a4f5
        ;   XREF to: 0048a4b4 (UNCONDITIONAL_JUMP)  ; LAB_0048a4b4
    MOV EBP,dword ptr [0x02d24d7c]      ; 0048a4f7 | DAT_02d24d7c
        ;   Label: LAB_0048a4f7
    PUSH EBP                            ; 0048a4fd
    MOV EAX,dword ptr [EBX + 0x304]     ; 0048a4fe
    PUSH EAX                            ; 0048a504
    CALL FUN_0040c840                   ; 0048a505
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0048a50a
    MOV dword ptr [ESP + 0x254],EAX     ; 0048a50d
    PUSH EBX                            ; 0048a514
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048a515
    LEA ESI,[ESP + 0x19c]               ; 0048a51b
    LEA EDI,[ESP + 0x13c]               ; 0048a522
    CALL dword ptr [EAX + 0xe0]         ; 0048a529
    ADD ESP,0x4                         ; 0048a52f
    LEA EAX,[ESP + 0x138]               ; 0048a532
    LEA ESI,[ESP + 0x198]               ; 0048a539
    PUSH EAX                            ; 0048a540
    MOVSD ES:EDI,ESI                    ; 0048a541
    MOVSD ES:EDI,ESI                    ; 0048a542
    MOVSD ES:EDI,ESI                    ; 0048a543
    PUSH EBX                            ; 0048a544
    LEA ESI,[ESP + 0x224]               ; 0048a545
    LEA EDI,[ESP + 0x164]               ; 0048a54c
    CALL FUN_00408b80                   ; 0048a553
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x224]               ; 0048a558
    LEA EAX,[ESP + 0x164]               ; 0048a55f
    ADD ESP,0x8                         ; 0048a566
    LEA EDX,[ESP + 0xc0]                ; 0048a569
    MOVSD ES:EDI,ESI                    ; 0048a570
    MOVSD ES:EDI,ESI                    ; 0048a571
    MOVSD ES:EDI,ESI                    ; 0048a572
    CMP EDX,EAX                         ; 0048a573
    JZ 0x0048a5a1                       ; 0048a575
        ;   XREF to: 0048a5a1 (CONDITIONAL_JUMP)  ; LAB_0048a5a1
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0048a577
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048a57e
    MOV EAX,dword ptr [ESP + 0x160]     ; 0048a585
    MOV dword ptr [ESP + 0xc4],EAX      ; 0048a58c
    MOV EAX,dword ptr [ESP + 0x164]     ; 0048a593
    MOV dword ptr [ESP + 0xc8],EAX      ; 0048a59a
    MOV EDX,dword ptr [ESP + 0x254]     ; 0048a5a1
        ;   Label: LAB_0048a5a1
    TEST EDX,EDX                        ; 0048a5a8
    JZ 0x0048aead                       ; 0048a5aa
        ;   XREF to: 0048aead (CONDITIONAL_JUMP)  ; LAB_0048aead
    PUSH 0x4                            ; 0048a5b0
    PUSH 0x0                            ; 0048a5b2
    PUSH 0x1                            ; 0048a5b4
    PUSH 0x2cfd900                      ; 0048a5b6
    LEA EAX,[ESP + 0xd0]                ; 0048a5bb
    PUSH EAX                            ; 0048a5c2
    MOV EDI,dword ptr [0x005fc5a0]      ; 0048a5c3 | DAT_005fc5a0
    PUSH EDI                            ; 0048a5c9
    MOV EBP,0x3                         ; 0048a5ca
    CALL FUN_004a3af0                   ; 0048a5cf
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3af0()
        ;   Label: LAB_0048a5cf
    ADD ESP,0x18                        ; 0048a5d4
    FLD float ptr [EBX + 0x5a4]         ; 0048a5d7
    FSUB float ptr [ESP + 0x274]        ; 0048a5dd
    FLDZ                                ; 0048a5e4
    FXCH                                ; 0048a5e6
    FSTP float ptr [EBX + 0x5a4]        ; 0048a5e8
    FCOMP float ptr [EBX + 0x5a4]       ; 0048a5ee
    FNSTSW AX                           ; 0048a5f4
    SAHF                                ; 0048a5f6
    JC 0x0048ace0                       ; 0048a5f7
        ;   XREF to: 0048ace0 (CONDITIONAL_JUMP)  ; LAB_0048ace0
    LEA EDX,[ESP + 0xe4]                ; 0048a5fd
    LEA EAX,[ESP + 0x90]                ; 0048a604
    CMP EDX,EAX                         ; 0048a60b
    JZ 0x0048a639                       ; 0048a60d
        ;   XREF to: 0048a639 (CONDITIONAL_JUMP)  ; LAB_0048a639
    MOV EAX,dword ptr [ESP + 0x90]      ; 0048a60f
    MOV dword ptr [ESP + 0xe4],EAX      ; 0048a616
    MOV EAX,dword ptr [ESP + 0x94]      ; 0048a61d
    MOV dword ptr [ESP + 0xe8],EAX      ; 0048a624
    MOV EAX,dword ptr [ESP + 0x98]      ; 0048a62b
    MOV dword ptr [ESP + 0xec],EAX      ; 0048a632
    MOV EAX,dword ptr [EBX + 0x59c]     ; 0048a639
        ;   Label: LAB_0048a639
    TEST EAX,EAX                        ; 0048a63f
    JZ 0x0048aef2                       ; 0048a641
        ;   XREF to: 0048aef2 (CONDITIONAL_JUMP)  ; LAB_0048aef2
    FLDZ                                ; 0048a647
    MOV ESI,EAX                         ; 0048a649
    FCOMP float ptr [EAX + 0x2538]      ; 0048a64b
    FNSTSW AX                           ; 0048a651
    SAHF                                ; 0048a653
    JNC 0x0048aef2                      ; 0048a654
        ;   XREF to: 0048aef2 (CONDITIONAL_JUMP)  ; LAB_0048aef2
    PUSH ESI                            ; 0048a65a
    MOV EAX,dword ptr [ESI + 0x154]     ; 0048a65b
    LEA ESI,[ESP + 0x40]                ; 0048a661
    LEA EDI,[ESP + 0x58]                ; 0048a665
    CALL dword ptr [EAX + 0x1c]         ; 0048a669
    MOV ECX,0x6                         ; 0048a66c
    LEA ESI,[ESP + 0x40]                ; 0048a671
    ADD ESP,0x4                         ; 0048a675
    MOVSD.REP ES:EDI,ESI                ; 0048a678
    LEA EAX,[ESP + 0x54]                ; 0048a67a
    FLD float ptr [ESP + 0x54]          ; 0048a67e
    FLD float ptr [ESP + 0x58]          ; 0048a682
    FLD float ptr [ESP + 0x5c]          ; 0048a686
    LEA EDI,[ESP + 0x78]                ; 0048a68a
    LEA ESI,[ESP + 0xa8]                ; 0048a68e
    FXCH ST2                            ; 0048a695
    FADD float ptr [EAX + 0xc]          ; 0048a697
    FXCH                                ; 0048a69a
    FADD float ptr [EAX + 0x10]         ; 0048a69c
    FXCH ST2                            ; 0048a69f
    FADD float ptr [EAX + 0x14]         ; 0048a6a1
    FXCH                                ; 0048a6a4
    FSTP float ptr [ESP + 0xa8]         ; 0048a6a6
    FXCH                                ; 0048a6ad
    FSTP float ptr [ESP + 0xac]         ; 0048a6af
    FSTP float ptr [ESP + 0xb0]         ; 0048a6b6
    MOVSD ES:EDI,ESI                    ; 0048a6bd
    MOVSD ES:EDI,ESI                    ; 0048a6be
    MOVSD ES:EDI,ESI                    ; 0048a6bf
    FLD float ptr [0x005bdd52]          ; 0048a6c0 | DAT_005bdd52
    FLD float ptr [ESP + 0x78]          ; 0048a6c6
    FMUL ST1                            ; 0048a6ca
    FLD float ptr [ESP + 0x7c]          ; 0048a6cc
    FMUL ST2                            ; 0048a6d0
    FLD float ptr [ESP + 0x80]          ; 0048a6d2
    FMULP ST3                           ; 0048a6d9
    LEA EDX,[ESP + 0x1b0]               ; 0048a6db
    LEA EAX,[ESP + 0x1e0]               ; 0048a6e2
    LEA EDI,[ESP + 0x1e0]               ; 0048a6e9
    LEA ESI,[ESP + 0xb4]                ; 0048a6f0
    FXCH                                ; 0048a6f7
    FSTP float ptr [ESP + 0xb4]         ; 0048a6f9
    FSTP float ptr [ESP + 0xb8]         ; 0048a700
    FSTP float ptr [ESP + 0xbc]         ; 0048a707
    MOVSD ES:EDI,ESI                    ; 0048a70e
    MOVSD ES:EDI,ESI                    ; 0048a70f
    MOVSD ES:EDI,ESI                    ; 0048a710
    CMP EDX,EAX                         ; 0048a711
    JZ 0x0048a73f                       ; 0048a713
        ;   XREF to: 0048a73f (CONDITIONAL_JUMP)  ; LAB_0048a73f
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0048a715
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0048a71c
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 0048a723
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0048a72a
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0048a731
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0048a738
    MOV EAX,dword ptr [EBX + 0x59c]     ; 0048a73f
        ;   Label: LAB_0048a73f
    LEA EDI,[ESP + 0x1d4]               ; 0048a745
    LEA ESI,[ESP + 0x1c8]               ; 0048a74c
    FLD float ptr [EAX + 0x20]          ; 0048a753
    FLD float ptr [EAX + 0x24]          ; 0048a756
    FLD float ptr [EAX + 0x28]          ; 0048a759
    FXCH ST2                            ; 0048a75c
    FADD float ptr [ESP + 0x1b0]        ; 0048a75e
    FXCH                                ; 0048a765
    FADD float ptr [ESP + 0x1b4]        ; 0048a767
    FXCH ST2                            ; 0048a76e
    FADD float ptr [ESP + 0x1b8]        ; 0048a770
    FXCH                                ; 0048a777
    FSTP float ptr [ESP + 0x1c8]        ; 0048a779
    FXCH                                ; 0048a780
    FSTP float ptr [ESP + 0x1cc]        ; 0048a782
    FSTP float ptr [ESP + 0x1d0]        ; 0048a789
    MOVSD ES:EDI,ESI                    ; 0048a790
    MOVSD ES:EDI,ESI                    ; 0048a791
    MOVSD ES:EDI,ESI                    ; 0048a792
    LEA EAX,[ESP + 0x1d4]               ; 0048a793
    LEA ESI,[ESP + 0xfc]                ; 0048a79a
    CMP ESI,EAX                         ; 0048a7a1
    JZ 0x0048a7cf                       ; 0048a7a3
        ;   XREF to: 0048a7cf (CONDITIONAL_JUMP)  ; LAB_0048a7cf
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0048a7a5
    MOV dword ptr [ESP + 0xfc],EAX      ; 0048a7ac
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0048a7b3
    MOV dword ptr [ESP + 0x100],EAX     ; 0048a7ba
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0048a7c1
    MOV dword ptr [ESP + 0x104],EAX     ; 0048a7c8
    FLD float ptr [ESP + 0x1b4]         ; 0048a7cf
        ;   Label: LAB_0048a7cf
    FMUL float ptr [0x005bdd52]         ; 0048a7d6 | DAT_005bdd52
    FADD float ptr [ESP + 0x100]        ; 0048a7dc
    FSTP float ptr [ESP + 0x100]        ; 0048a7e3
    FLD float ptr [ESP + 0xfc]          ; 0048a7ea
        ;   Label: LAB_0048a7ea
    FLD float ptr [ESP + 0x100]         ; 0048a7f1
    FLD float ptr [ESP + 0x104]         ; 0048a7f8
    LEA EDI,[ESP + 0xf0]                ; 0048a7ff
    LEA ESI,[ESP + 0x1a4]               ; 0048a806
    FXCH ST2                            ; 0048a80d
    FSUB float ptr [ESP + 0xe4]         ; 0048a80f
    FXCH                                ; 0048a816
    FSUB float ptr [ESP + 0xe8]         ; 0048a818
    FXCH ST2                            ; 0048a81f
    FSUB float ptr [ESP + 0xec]         ; 0048a821
    FXCH ST2                            ; 0048a828
    FSTP float ptr [ESP + 0x1a8]        ; 0048a82a
    FXCH                                ; 0048a831
    FSTP float ptr [ESP + 0x1ac]        ; 0048a833
    FSTP float ptr [ESP + 0x1a4]        ; 0048a83a
    MOVSD ES:EDI,ESI                    ; 0048a841
    MOVSD ES:EDI,ESI                    ; 0048a842
    MOVSD ES:EDI,ESI                    ; 0048a843
    LEA EAX,[ESP + 0xf0]                ; 0048a844
    LEA ESI,[ESP + 0x9c]                ; 0048a84b
    CMP ESI,EAX                         ; 0048a852
    JZ 0x0048a880                       ; 0048a854
        ;   XREF to: 0048a880 (CONDITIONAL_JUMP)  ; LAB_0048a880
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0048a856
    MOV dword ptr [ESP + 0x9c],EAX      ; 0048a85d
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0048a864
    MOV dword ptr [ESP + 0xa0],EAX      ; 0048a86b
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0048a872
    MOV dword ptr [ESP + 0xa4],EAX      ; 0048a879
    FLD float ptr [0x005bdd56]          ; 0048a880 | DAT_005bdd56
        ;   Label: LAB_0048a880
    FLD float ptr [ESP + 0x9c]          ; 0048a886
    FMUL ST1                            ; 0048a88d
    FLD float ptr [ESP + 0xa0]          ; 0048a88f
    FMUL ST2                            ; 0048a896
    FLD float ptr [ESP + 0xa4]          ; 0048a898
    FMULP ST3                           ; 0048a89f
    FLD float ptr [ESP + 0xe4]          ; 0048a8a1
    FLD float ptr [ESP + 0xe8]          ; 0048a8a8
    FLD float ptr [ESP + 0xec]          ; 0048a8af
    LEA EDI,[ESP + 0x180]               ; 0048a8b6
    LEA ESI,[ESP + 0x144]               ; 0048a8bd
    LEA EDX,[ESP + 0x180]               ; 0048a8c4
    LEA EAX,[ESP + 0x150]               ; 0048a8cb
    FXCH ST4                            ; 0048a8d2
    FSTP float ptr [ESP + 0x9c]         ; 0048a8d4
    FXCH ST2                            ; 0048a8db
    FSTP float ptr [ESP + 0xa0]         ; 0048a8dd
    FXCH ST3                            ; 0048a8e4
    FSTP float ptr [ESP + 0xa4]         ; 0048a8e6
    FXCH ST2                            ; 0048a8ed
    FADD float ptr [ESP + 0x9c]         ; 0048a8ef
    FXCH ST2                            ; 0048a8f6
    FADD float ptr [ESP + 0xa0]         ; 0048a8f8
    FXCH                                ; 0048a8ff
    FADD float ptr [ESP + 0xa4]         ; 0048a901
    FXCH ST2                            ; 0048a908
    FSTP float ptr [ESP + 0x144]        ; 0048a90a
    FSTP float ptr [ESP + 0x148]        ; 0048a911
    FSTP float ptr [ESP + 0x14c]        ; 0048a918
    MOVSD ES:EDI,ESI                    ; 0048a91f
    MOVSD ES:EDI,ESI                    ; 0048a920
    MOVSD ES:EDI,ESI                    ; 0048a921
    CMP EAX,EDX                         ; 0048a922
    JZ 0x0048a950                       ; 0048a924
        ;   XREF to: 0048a950 (CONDITIONAL_JUMP)  ; LAB_0048a950
    MOV EAX,dword ptr [ESP + 0x180]     ; 0048a926
    MOV dword ptr [ESP + 0x150],EAX     ; 0048a92d
    MOV EAX,dword ptr [ESP + 0x184]     ; 0048a934
    MOV dword ptr [ESP + 0x154],EAX     ; 0048a93b
    MOV EAX,dword ptr [ESP + 0x188]     ; 0048a942
    MOV dword ptr [ESP + 0x158],EAX     ; 0048a949
    PUSH 0x3f800000                     ; 0048a950
        ;   Label: LAB_0048a950
    PUSH 0xbf800000                     ; 0048a955
    CALL FUN_0040ce40                   ; 0048a95a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x24c],EAX     ; 0048a95f
    ADD ESP,0x8                         ; 0048a966
    PUSH 0x3f800000                     ; 0048a969
    PUSH 0xbf800000                     ; 0048a96e
    CALL FUN_0040ce40                   ; 0048a973
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x248],EAX     ; 0048a978
    ADD ESP,0x8                         ; 0048a97f
    PUSH 0x3f800000                     ; 0048a982
    PUSH 0xbf800000                     ; 0048a987
    LEA EDI,[ESP + 0x1f4]               ; 0048a98c
    CALL FUN_0040ce40                   ; 0048a993
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x260],EAX     ; 0048a998
    LEA ESI,[ESP + 0x200]               ; 0048a99f
    FLD float ptr [ESP + 0x260]         ; 0048a9a6
    ADD ESP,0x8                         ; 0048a9ad
    MOV EDX,dword ptr [0x005fc5a0]      ; 0048a9b0 | DAT_005fc5a0
    FLD float ptr [ESP + 0x150]         ; 0048a9b6
    FLD float ptr [ESP + 0x154]         ; 0048a9bd
    PUSH 0xffff                         ; 0048a9c4
    FLD float ptr [ESP + 0x15c]         ; 0048a9c9
    MOV EAX,dword ptr [ESP + 0x244]     ; 0048a9d0
    PUSH 0x3e800000                     ; 0048a9d7
    MOV dword ptr [ESP + 0x240],EAX     ; 0048a9dc
    FXCH ST2                            ; 0048a9e3
    FADDP ST3,ST0                       ; 0048a9e5
    PUSH EBP                            ; 0048a9e7
    FXCH ST2                            ; 0048a9e8
    FSTP float ptr [ESP + 0x15c]        ; 0048a9ea
    PUSH 0x3fa00000                     ; 0048a9f1
    MOV EAX,dword ptr [ESP + 0x254]     ; 0048a9f6
    PUSH 0x3e800000                     ; 0048a9fd
    MOV dword ptr [ESP + 0x250],EAX     ; 0048aa02
    PUSH 0x0                            ; 0048aa09
    LEA EAX,[ESP + 0x168]               ; 0048aa0b
    FXCH                                ; 0048aa12
    FADD float ptr [ESP + 0x250]        ; 0048aa14
    PUSH EAX                            ; 0048aa1b
    LEA EAX,[ESP + 0x100]               ; 0048aa1c
    FSTP float ptr [ESP + 0x170]        ; 0048aa23
    PUSH EAX                            ; 0048aa2a
    FADD float ptr [ESP + 0x25c]        ; 0048aa2b
    PUSH EDX                            ; 0048aa32
    FSTP float ptr [ESP + 0x17c]        ; 0048aa33
    CALL FUN_004a3c50                   ; 0048aa3a
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3c50()
    LEA EAX,[ESP + 0x210]               ; 0048aa3f
    ADD ESP,0x24                        ; 0048aa46
    LEA EDX,[ESP + 0x9c]                ; 0048aa49
    FLD float ptr [ESP + 0xfc]          ; 0048aa50
    FLD float ptr [ESP + 0x100]         ; 0048aa57
    FLD float ptr [ESP + 0x104]         ; 0048aa5e
    FXCH ST2                            ; 0048aa65
    FSUB float ptr [ESP + 0xe4]         ; 0048aa67
    FXCH                                ; 0048aa6e
    FSUB float ptr [ESP + 0xe8]         ; 0048aa70
    FXCH ST2                            ; 0048aa77
    FSUB float ptr [ESP + 0xec]         ; 0048aa79
    FXCH                                ; 0048aa80
    FSTP float ptr [ESP + 0x1f8]        ; 0048aa82
    FXCH                                ; 0048aa89
    FSTP float ptr [ESP + 0x1fc]        ; 0048aa8b
    FSTP float ptr [ESP + 0x200]        ; 0048aa92
    MOVSD ES:EDI,ESI                    ; 0048aa99
    MOVSD ES:EDI,ESI                    ; 0048aa9a
    MOVSD ES:EDI,ESI                    ; 0048aa9b
    CMP EDX,EAX                         ; 0048aa9c
    JZ 0x0048aaca                       ; 0048aa9e
        ;   XREF to: 0048aaca (CONDITIONAL_JUMP)  ; LAB_0048aaca
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0048aaa0
    MOV dword ptr [ESP + 0x9c],EAX      ; 0048aaa7
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0048aaae
    MOV dword ptr [ESP + 0xa0],EAX      ; 0048aab5
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 0048aabc
    MOV dword ptr [ESP + 0xa4],EAX      ; 0048aac3
    FLD float ptr [0x005bdd5a]          ; 0048aaca | DAT_005bdd5a
        ;   Label: LAB_0048aaca
    FLD float ptr [ESP + 0x9c]          ; 0048aad0
    FMUL ST1                            ; 0048aad7
    FLD float ptr [ESP + 0xa0]          ; 0048aad9
    FMUL ST2                            ; 0048aae0
    FLD float ptr [ESP + 0xa4]          ; 0048aae2
    FMULP ST3                           ; 0048aae9
    FLD float ptr [ESP + 0xe4]          ; 0048aaeb
    FLD float ptr [ESP + 0xe8]          ; 0048aaf2
    FLD float ptr [ESP + 0xec]          ; 0048aaf9
    LEA EDI,[ESP + 0x120]               ; 0048ab00
    LEA ESI,[ESP + 0x6c]                ; 0048ab07
    LEA EDX,[ESP + 0x120]               ; 0048ab0b
    LEA EAX,[ESP + 0x174]               ; 0048ab12
    FXCH ST4                            ; 0048ab19
    FSTP float ptr [ESP + 0x9c]         ; 0048ab1b
    FXCH ST2                            ; 0048ab22
    FSTP float ptr [ESP + 0xa0]         ; 0048ab24
    FXCH ST3                            ; 0048ab2b
    FSTP float ptr [ESP + 0xa4]         ; 0048ab2d
    FXCH ST2                            ; 0048ab34
    FADD float ptr [ESP + 0x9c]         ; 0048ab36
    FXCH ST2                            ; 0048ab3d
    FADD float ptr [ESP + 0xa0]         ; 0048ab3f
    FXCH                                ; 0048ab46
    FADD float ptr [ESP + 0xa4]         ; 0048ab48
    FXCH ST2                            ; 0048ab4f
    FSTP float ptr [ESP + 0x6c]         ; 0048ab51
    FSTP float ptr [ESP + 0x70]         ; 0048ab55
    FSTP float ptr [ESP + 0x74]         ; 0048ab59
    MOVSD ES:EDI,ESI                    ; 0048ab5d
    MOVSD ES:EDI,ESI                    ; 0048ab5e
    MOVSD ES:EDI,ESI                    ; 0048ab5f
    CMP EAX,EDX                         ; 0048ab60
    JZ 0x0048ab8e                       ; 0048ab62
        ;   XREF to: 0048ab8e (CONDITIONAL_JUMP)  ; LAB_0048ab8e
    MOV EAX,dword ptr [ESP + 0x120]     ; 0048ab64
    MOV dword ptr [ESP + 0x174],EAX     ; 0048ab6b
    MOV EAX,dword ptr [ESP + 0x124]     ; 0048ab72
    MOV dword ptr [ESP + 0x178],EAX     ; 0048ab79
    MOV EAX,dword ptr [ESP + 0x128]     ; 0048ab80
    MOV dword ptr [ESP + 0x17c],EAX     ; 0048ab87
    PUSH 0x3f800000                     ; 0048ab8e
        ;   Label: LAB_0048ab8e
    PUSH 0xbf800000                     ; 0048ab93
    CALL FUN_0040ce40                   ; 0048ab98
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x248],EAX     ; 0048ab9d
    ADD ESP,0x8                         ; 0048aba4
    PUSH 0x3f800000                     ; 0048aba7
    PUSH 0xbf800000                     ; 0048abac
    CALL FUN_0040ce40                   ; 0048abb1
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x24c],EAX     ; 0048abb6
    ADD ESP,0x8                         ; 0048abbd
    PUSH 0x3f800000                     ; 0048abc0
    PUSH 0xbf800000                     ; 0048abc5
    CALL FUN_0040ce40                   ; 0048abca
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x260],EAX     ; 0048abcf
    FLD float ptr [ESP + 0x260]         ; 0048abd6
    ADD ESP,0x8                         ; 0048abdd
    MOV ECX,dword ptr [0x005fc5a0]      ; 0048abe0 | DAT_005fc5a0
    FLD float ptr [ESP + 0x174]         ; 0048abe6
    FLD float ptr [ESP + 0x178]         ; 0048abed
    PUSH 0xffff                         ; 0048abf4
    FLD float ptr [ESP + 0x180]         ; 0048abf9
    MOV EAX,dword ptr [ESP + 0x248]     ; 0048ac00
    PUSH 0x3e800000                     ; 0048ac07
    MOV dword ptr [ESP + 0x254],EAX     ; 0048ac0c
    FXCH ST2                            ; 0048ac13
    FADDP ST3,ST0                       ; 0048ac15
    PUSH EBP                            ; 0048ac17
    FXCH ST2                            ; 0048ac18
    FSTP float ptr [ESP + 0x180]        ; 0048ac1a
    PUSH 0x3fa00000                     ; 0048ac21
    MOV EAX,dword ptr [ESP + 0x250]     ; 0048ac26
    PUSH 0x3fa00000                     ; 0048ac2d
    MOV dword ptr [ESP + 0x264],EAX     ; 0048ac32
    PUSH 0x0                            ; 0048ac39
    LEA EAX,[ESP + 0x18c]               ; 0048ac3b
    FXCH                                ; 0048ac42
    FADD float ptr [ESP + 0x264]        ; 0048ac44
    PUSH EAX                            ; 0048ac4b
    LEA EAX,[ESP + 0x16c]               ; 0048ac4c
    FSTP float ptr [ESP + 0x194]        ; 0048ac53
    PUSH EAX                            ; 0048ac5a
    FADD float ptr [ESP + 0x270]        ; 0048ac5b
    PUSH ECX                            ; 0048ac62
    FSTP float ptr [ESP + 0x1a0]        ; 0048ac63
    CALL FUN_004a3c50                   ; 0048ac6a
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3c50()
    ADD ESP,0x24                        ; 0048ac6f
    PUSH 0xffff                         ; 0048ac72
    PUSH 0x3e800000                     ; 0048ac77
    PUSH EBP                            ; 0048ac7c
    PUSH 0x3e800000                     ; 0048ac7d
    PUSH 0x3fa00000                     ; 0048ac82
    PUSH 0x0                            ; 0048ac87
    LEA EAX,[ESP + 0x114]               ; 0048ac89
    PUSH EAX                            ; 0048ac90
    LEA EAX,[ESP + 0x190]               ; 0048ac91
    PUSH EAX                            ; 0048ac98
    MOV ESI,dword ptr [0x005fc5a0]      ; 0048ac99 | DAT_005fc5a0
    PUSH ESI                            ; 0048ac9f
    CALL FUN_004a3c50                   ; 0048aca0
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3c50()
    ADD ESP,0x24                        ; 0048aca5
    LEA EAX,[ESP + 0x150]               ; 0048aca8
    PUSH EAX                            ; 0048acaf
    LEA EAX,[EBX + 0x5ac]               ; 0048acb0
    PUSH EAX                            ; 0048acb6
    MOV dword ptr [EBX + 0x5a4],0x3d4ccccd ; 0048acb7
    CALL FUN_0045aae0                   ; 0048acc1
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045aae0()
    ADD ESP,0x8                         ; 0048acc6
    LEA EAX,[ESP + 0x174]               ; 0048acc9
    PUSH EAX                            ; 0048acd0
    LEA EAX,[EBX + 0x5ec]               ; 0048acd1
    PUSH EAX                            ; 0048acd7
    CALL FUN_0045aae0                   ; 0048acd8
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045aae0()
    ADD ESP,0x8                         ; 0048acdd
    LEA EAX,[EBX + 0x5ac]               ; 0048ace0
        ;   Label: LAB_0048ace0
    PUSH EAX                            ; 0048ace6
    MOV EDI,dword ptr [0x00603b28]      ; 0048ace7 | DAT_00603b28
    PUSH EDI                            ; 0048aced
    CALL FUN_005372f0                   ; 0048acee
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005372f0()
    ADD ESP,0x8                         ; 0048acf3
    LEA EAX,[EBX + 0x5ec]               ; 0048acf6
    PUSH EAX                            ; 0048acfc
    MOV EBP,dword ptr [0x00603b28]      ; 0048acfd | DAT_00603b28
    PUSH EBP                            ; 0048ad03
    CALL FUN_005372f0                   ; 0048ad04
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005372f0()
    MOV EAX,dword ptr [EBX + 0x59c]     ; 0048ad09
    ADD ESP,0x8                         ; 0048ad0f
    TEST EAX,EAX                        ; 0048ad12
    JZ 0x0048a4ca                       ; 0048ad14
        ;   XREF to: 0048a4ca (CONDITIONAL_JUMP)  ; LAB_0048a4ca
    FLDZ                                ; 0048ad1a
    FCOMP float ptr [EAX + 0x2538]      ; 0048ad1c
    FNSTSW AX                           ; 0048ad22
    SAHF                                ; 0048ad24
    JNC 0x0048a4ca                      ; 0048ad25
        ;   XREF to: 0048a4ca (CONDITIONAL_JUMP)  ; LAB_0048a4ca
    MOV EAX,ESP                         ; 0048ad2b
    PUSH EAX                            ; 0048ad2d
    CALL FUN_0042abb0                   ; 0048ad2e
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0048ad33
    FLD float ptr [ESP + 0x274]         ; 0048ad36
    FMUL float ptr [0x005bdd5e]         ; 0048ad3d | DAT_005bdd5e
    MOV EDX,0xa                         ; 0048ad43
    MOV ECX,0x6f                        ; 0048ad48
    MOV dword ptr [ESP + 0x28],EDX      ; 0048ad4d
    MOV dword ptr [ESP + 0x30],ECX      ; 0048ad51
    MOV dword ptr [ESP + 0x34],EBX      ; 0048ad55
    PUSH EBX                            ; 0048ad59
    FSTP float ptr [ESP + 0x8]          ; 0048ad5a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048ad5e
    CALL dword ptr [EAX + 0x94]         ; 0048ad64
    ADD ESP,0x4                         ; 0048ad6a
    MOV ESI,ESP                         ; 0048ad6d
    MOV dword ptr [ESP + 0x38],EAX      ; 0048ad6f
    PUSH ESI                            ; 0048ad73
    MOV EAX,dword ptr [EBX + 0x59c]     ; 0048ad74
    PUSH EAX                            ; 0048ad7a
    MOV EBP,dword ptr [EAX + 0x154]     ; 0048ad7b
    CALL dword ptr [EBP + 0x108]        ; 0048ad81
    ADD ESP,0x8                         ; 0048ad87
    MOV ESI,dword ptr [0x01d5ba70]      ; 0048ad8a | DAT_01d5ba70
    PUSH ESI                            ; 0048ad90
    MOV EDI,dword ptr [EBX + 0x304]     ; 0048ad91
    PUSH EDI                            ; 0048ad97
    CALL FUN_0040c840                   ; 0048ad98
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0048ad9d
    MOV EBP,EAX                         ; 0048ada0
    TEST EAX,EAX                        ; 0048ada2
    JNZ 0x0048afc9                      ; 0048ada4
        ;   XREF to: 0048afc9 (CONDITIONAL_JUMP)  ; LAB_0048afc9
    MOV EAX,dword ptr [EBX + 0x59c]     ; 0048adaa
        ;   Label: LAB_0048adaa
    MOV dword ptr [EAX + 0x3254],0x3dcccccd ; 0048adb0
    CMP dword ptr [ESP + 0x254],0x0     ; 0048adba
    JZ 0x0048afe1                       ; 0048adc2
        ;   XREF to: 0048afe1 (CONDITIONAL_JUMP)  ; LAB_0048afe1
    MOV EAX,dword ptr [EBX + 0x59c]     ; 0048adc8
    MOV dword ptr [EAX + 0x3258],0x1    ; 0048adce
    MOV EAX,dword ptr [EBX + 0x59c]     ; 0048add8
        ;   Label: LAB_0048add8
    FLDZ                                ; 0048adde
    FCOMP float ptr [EAX + 0x2538]      ; 0048ade0
    FNSTSW AX                           ; 0048ade6
    SAHF                                ; 0048ade8
    JC 0x0048a4ca                       ; 0048ade9
        ;   XREF to: 0048a4ca (CONDITIONAL_JUMP)  ; LAB_0048a4ca
    TEST EBP,EBP                        ; 0048adef
    JZ 0x0048ae0c                       ; 0048adf1
        ;   XREF to: 0048ae0c (CONDITIONAL_JUMP)  ; LAB_0048ae0c
    FLDZ                                ; 0048adf3
    FCOMP float ptr [EBP + 0x2538]      ; 0048adf5
    FNSTSW AX                           ; 0048adfb
    SAHF                                ; 0048adfd
    JNC 0x0048ae0c                      ; 0048adfe
        ;   XREF to: 0048ae0c (CONDITIONAL_JUMP)  ; LAB_0048ae0c
    MOV EAX,dword ptr [EBX + 0x5a0]     ; 0048ae00
    MOV dword ptr [EBP + 0x2538],EAX    ; 0048ae06
    LEA EDI,[ESP + 0x108]               ; 0048ae0c
        ;   Label: LAB_0048ae0c
    LEA ESI,[ESP + 0x204]               ; 0048ae13
    PUSH 0x6                            ; 0048ae1a
    MOV EBP,dword ptr [EBX + 0x59c]     ; 0048ae1c
    XOR EDX,EDX                         ; 0048ae22
    MOV ECX,0x40400000                  ; 0048ae24
    PUSH EDX                            ; 0048ae29
    FLD float ptr [EBP + 0x24]          ; 0048ae2a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048ae2d
    PUSH 0x1                            ; 0048ae30
    MOV dword ptr [ESP + 0x210],EAX     ; 0048ae32
    MOV EAX,dword ptr [EBP + 0x28]      ; 0048ae39
    FADD float ptr [0x005bdd62]         ; 0048ae3c | DAT_005bdd62
    MOV dword ptr [ESP + 0x218],EAX     ; 0048ae42
    LEA EAX,[ESP + 0x21c]               ; 0048ae49
    FSTP float ptr [ESP + 0x214]        ; 0048ae50
    PUSH EAX                            ; 0048ae57
    LEA EAX,[ESP + 0x118]               ; 0048ae58
    MOVSD ES:EDI,ESI                    ; 0048ae5f
    MOVSD ES:EDI,ESI                    ; 0048ae60
    MOVSD ES:EDI,ESI                    ; 0048ae61
    PUSH EAX                            ; 0048ae62
    MOV EDI,dword ptr [0x005fc5a0]      ; 0048ae63 | DAT_005fc5a0
    MOV dword ptr [ESP + 0x224],EDX     ; 0048ae69
    PUSH EDI                            ; 0048ae70
    MOV dword ptr [ESP + 0x22c],ECX     ; 0048ae71
    MOV dword ptr [ESP + 0x230],EDX     ; 0048ae78
    CALL FUN_004a3af0                   ; 0048ae7f
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3af0()
    ADD ESP,0x18                        ; 0048ae84
    LEA EAX,[EBX + 0x20]                ; 0048ae87
    PUSH EAX                            ; 0048ae8a
    PUSH 0x5bdd36                       ; 0048ae8b
    PUSH EBX                            ; 0048ae90
    MOV EBP,dword ptr [0x006045f8]      ; 0048ae91 | DAT_006045f8
    PUSH EBP                            ; 0048ae97
    XOR ESI,ESI                         ; 0048ae98
    CALL FUN_005609d0                   ; 0048ae9a
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609d0()
    ADD ESP,0x10                        ; 0048ae9f
    MOV dword ptr [EBX + 0x59c],ESI     ; 0048aea2
    JMP 0x0048a4ca                      ; 0048aea8
        ;   XREF to: 0048a4ca (UNCONDITIONAL_JUMP)  ; LAB_0048a4ca
    PUSH 0x2                            ; 0048aead
        ;   Label: LAB_0048aead
    PUSH EDX                            ; 0048aeaf
    PUSH 0x1                            ; 0048aeb0
    PUSH 0x2cfd900                      ; 0048aeb2
    LEA EAX,[ESP + 0xd0]                ; 0048aeb7
    PUSH EAX                            ; 0048aebe
    MOV ECX,dword ptr [0x005fc5a0]      ; 0048aebf | DAT_005fc5a0
    PUSH ECX                            ; 0048aec5
    CALL FUN_004a3af0                   ; 0048aec6
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3af0()
    ADD ESP,0x18                        ; 0048aecb
    PUSH 0x7                            ; 0048aece
    PUSH 0x0                            ; 0048aed0
    PUSH 0x1                            ; 0048aed2
    PUSH 0x2cfd900                      ; 0048aed4
    LEA EAX,[ESP + 0xd0]                ; 0048aed9
    PUSH EAX                            ; 0048aee0
    MOV ESI,dword ptr [0x005fc5a0]      ; 0048aee1 | DAT_005fc5a0
    PUSH ESI                            ; 0048aee7
    MOV EBP,0x4                         ; 0048aee8
    JMP 0x0048a5cf                      ; 0048aeed
        ;   XREF to: 0048a5cf (UNCONDITIONAL_JUMP)  ; LAB_0048a5cf
    PUSH EBX                            ; 0048aef2
        ;   Label: LAB_0048aef2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048aef3
    LEA ESI,[ESP + 0x118]               ; 0048aef9
    LEA EDI,[ESP + 0x130]               ; 0048af00
    CALL dword ptr [EAX + 0xe0]         ; 0048af07
    LEA ESI,[ESP + 0x118]               ; 0048af0d
    ADD ESP,0x4                         ; 0048af14
    MOVSD ES:EDI,ESI                    ; 0048af17
    MOVSD ES:EDI,ESI                    ; 0048af18
    MOVSD ES:EDI,ESI                    ; 0048af19
    FLD float ptr [ESP + 0x130]         ; 0048af1a
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0048af21
    LEA EDI,[ESP + 0xcc]                ; 0048af28
    LEA ESI,[ESP + 0x228]               ; 0048af2f
    MOV dword ptr [ESP + 0x228],EAX     ; 0048af36
    MOV EAX,dword ptr [ESP + 0x134]     ; 0048af3d
    FADD float ptr [0x005bdd4e]         ; 0048af44 | DAT_005bdd4e
    MOV dword ptr [ESP + 0x230],EAX     ; 0048af4a
    LEA EAX,[ESP + 0xcc]                ; 0048af51
    FSTP float ptr [ESP + 0x22c]        ; 0048af58
    PUSH EAX                            ; 0048af5f
    MOVSD ES:EDI,ESI                    ; 0048af60
    MOVSD ES:EDI,ESI                    ; 0048af61
    MOVSD ES:EDI,ESI                    ; 0048af62
    PUSH EBX                            ; 0048af63
    LEA ESI,[ESP + 0x8c]                ; 0048af64
    LEA EDI,[ESP + 0xe0]                ; 0048af6b
    CALL FUN_00408b80                   ; 0048af72
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x8c]                ; 0048af77
    LEA EAX,[ESP + 0xe0]                ; 0048af7e
    ADD ESP,0x8                         ; 0048af85
    LEA EDX,[ESP + 0xfc]                ; 0048af88
    MOVSD ES:EDI,ESI                    ; 0048af8f
    MOVSD ES:EDI,ESI                    ; 0048af90
    MOVSD ES:EDI,ESI                    ; 0048af91
    CMP EDX,EAX                         ; 0048af92
    JZ 0x0048a7ea                       ; 0048af94
        ;   XREF to: 0048a7ea (CONDITIONAL_JUMP)  ; LAB_0048a7ea
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0048af9a
    MOV dword ptr [ESP + 0xfc],EAX      ; 0048afa1
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0048afa8
    MOV dword ptr [ESP + 0x100],EAX     ; 0048afaf
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048afb6
    MOV dword ptr [ESP + 0x104],EAX     ; 0048afbd
    JMP 0x0048a7ea                      ; 0048afc4
        ;   XREF to: 0048a7ea (UNCONDITIONAL_JUMP)  ; LAB_0048a7ea
    MOV EDX,ESP                         ; 0048afc9
        ;   Label: LAB_0048afc9
    PUSH EDX                            ; 0048afcb
    MOV ESI,dword ptr [EAX + 0x154]     ; 0048afcc
    PUSH EAX                            ; 0048afd2
    CALL dword ptr [ESI + 0x108]        ; 0048afd3
    ADD ESP,0x8                         ; 0048afd9
    JMP 0x0048adaa                      ; 0048afdc
        ;   XREF to: 0048adaa (UNCONDITIONAL_JUMP)  ; LAB_0048adaa
    MOV EAX,dword ptr [EBX + 0x59c]     ; 0048afe1
        ;   Label: LAB_0048afe1
    MOV dword ptr [EAX + 0x3258],0x2    ; 0048afe7
    JMP 0x0048add8                      ; 0048aff1
        ;   XREF to: 0048add8 (UNCONDITIONAL_JUMP)  ; LAB_0048add8
    MOV ESI,dword ptr [0x01c6e35c]      ; 0048aff6 | DAT_01c6e35c
        ;   Label: LAB_0048aff6
    PUSH ESI                            ; 0048affc
    XOR EDI,EDI                         ; 0048affd
    CALL FUN_00556be0                   ; 0048afff
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 0048b004
    MOV dword ptr [0x01c6e35c],EDI      ; 0048b007 | DAT_01c6e35c
    JMP 0x0048a4ca                      ; 0048b00d
        ;   XREF to: 0048a4ca (UNCONDITIONAL_JUMP)  ; LAB_0048a4ca

