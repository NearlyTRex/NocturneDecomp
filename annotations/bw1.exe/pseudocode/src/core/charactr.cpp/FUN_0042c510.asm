; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042c510(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_004152c0 at 004152c7
;   FUN_004a0510 at 004a0515
;   FUN_004eaa10 at 004eaa25
;   FUN_00521370 at 005213be
;   FUN_00531720 at 00531729
;
; Referenced Globals:
;   TerminatedCString s_stake_b_kfm_005d56bf
;   TerminatedCString s_core_charactr_cpp_005d56cb
;   TerminatedCString s_s_is_carrying_s_but_s_th_005d56e0
;   TerminatedCString s_bip01_head_005d571b
;   TerminatedCString s_shadow_dfm_005d5726
;   undefined4 DAT_005fd614
;   undefined4 DAT_007c61c4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00408830
;   FUN_00408850
;   FUN_0042f4d0
;   FUN_00432e80
;   FUN_004343c0
;   FUN_00441cc0
;   FUN_00441f60
;   FUN_00441fa0
;   FUN_004688e0
;   FUN_00468950
;   FUN_005030e0
;   FUN_005634f0
;   FUN_00569b20
;   FUN_00569f30
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c510
        ;   Label: FUN_0042c510
    PUSH ESI                            ; 0042c511
    PUSH EDI                            ; 0042c512
    PUSH EBP                            ; 0042c513
    MOV EBP,ESP                         ; 0042c514
    SUB ESP,0x4                         ; 0042c516
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042c519
    PUSH EDX                            ; 0042c51c
    CALL FUN_00408850                   ; 0042c51d
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 0042c522
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042c525
    PUSH 0x5d56bf                       ; 0042c528 | = "stake_b.kfm"
    FLD float ptr [0x005fd614]          ; 0042c52d | DAT_005fd614
    PUSH 0x7c61c4                       ; 0042c533 | DAT_007c61c4
    FSTP float ptr [EAX + 0x2504]       ; 0042c538
    MOV dword ptr [EAX + 0x3004],0x0    ; 0042c53e
    CALL FUN_00468950                   ; 0042c548
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 0042c54d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042c550
    PUSH 0x7c61c4                       ; 0042c553 | DAT_007c61c4
    LEA EDI,[ESI + 0xf0]                ; 0042c558
    CALL FUN_004688e0                   ; 0042c55e
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 0042c563
    MOV EBX,dword ptr [ESI + 0x25b0]    ; 0042c566
        ;   Label: LAB_0042c566
    TEST EBX,EBX                        ; 0042c56c
    JNZ 0x0042c70f                      ; 0042c56e
        ;   XREF to: 0042c70f (CONDITIONAL_JUMP)  ; LAB_0042c70f
    ADD ESI,0x78                        ; 0042c574
        ;   Label: LAB_0042c574
    CMP ESI,EDI                         ; 0042c577
    JNZ 0x0042c566                      ; 0042c579
        ;   XREF to: 0042c566 (CONDITIONAL_JUMP)  ; LAB_0042c566
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042c57b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042c57e
    MOV DL,byte ptr [EAX + 0x24a8]      ; 0042c581
    ADD EBX,0x158                       ; 0042c587
    TEST DL,DL                          ; 0042c58d
    JZ 0x0042c5c8                       ; 0042c58f
        ;   XREF to: 0042c5c8 (CONDITIONAL_JUMP)  ; LAB_0042c5c8
    FLD float ptr [EAX + 0x27b8]        ; 0042c591
    PUSH EBX                            ; 0042c597
    FSTP float ptr [EAX + 0x1ac]        ; 0042c598
    CALL FUN_00569b20                   ; 0042c59e
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 0042c5a3
    PUSH 0x0                            ; 0042c5a6
    PUSH 0x5d571b                       ; 0042c5a8 | = "bip01 head"
    PUSH EBX                            ; 0042c5ad
    CALL FUN_00569f30                   ; 0042c5ae
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 0042c5b3
    PUSH EAX                            ; 0042c5b6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042c5b7
    CALL FUN_005634f0                   ; 0042c5ba
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0042c5bf
    MOV dword ptr [EBX + 0x2774],EAX    ; 0042c5c2
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042c5c8
        ;   Label: LAB_0042c5c8
    PUSH ESI                            ; 0042c5cb
    CALL FUN_00432e80                   ; 0042c5cc
        ;   XREF to: 00432e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00432e80()
    MOV EDI,dword ptr [ESI + 0x27a4]    ; 0042c5d1
    ADD ESP,0x4                         ; 0042c5d7
    TEST EDI,EDI                        ; 0042c5da
    JZ 0x0042c690                       ; 0042c5dc
        ;   XREF to: 0042c690 (CONDITIONAL_JUMP)  ; LAB_0042c690
    LEA EAX,[ESI + 0x158]               ; 0042c5e2
    PUSH EAX                            ; 0042c5e8
    CALL FUN_00569f30                   ; 0042c5e9
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 0042c5ee
    MOV ESI,EAX                         ; 0042c5f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042c5f3
    PUSH 0x5d5726                       ; 0042c5f6 | = "shadow.dfm"
    ADD EAX,0x24a8                      ; 0042c5fb
    PUSH EAX                            ; 0042c600
    XOR EDI,EDI                         ; 0042c601
    MOV dword ptr [EAX + 0xc7c],0x4     ; 0042c603
    CALL FUN_005c04e0                   ; 0042c60d
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0042c612
    TEST EAX,EAX                        ; 0042c615
    JNZ 0x0042c61e                      ; 0042c617
        ;   XREF to: 0042c61e (CONDITIONAL_JUMP)  ; LAB_0042c61e
    MOV EDI,0x10                        ; 0042c619
    MOV EAX,dword ptr [ESI + 0x1de78]   ; 0042c61e
        ;   Label: LAB_0042c61e
    MOV EBX,EDI                         ; 0042c624
    CMP EDI,EAX                         ; 0042c626
    JGE 0x0042c650                      ; 0042c628
        ;   XREF to: 0042c650 (CONDITIONAL_JUMP)  ; LAB_0042c650
    PUSH EBX                            ; 0042c62a
        ;   Label: LAB_0042c62a
    PUSH ESI                            ; 0042c62b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042c62c
    PUSH EDX                            ; 0042c62f
    INC EBX                             ; 0042c630
    CALL FUN_0042f4d0                   ; 0042c631
        ;   XREF to: 0042f4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f4d0()
    MOV ECX,dword ptr [ESI + 0x1de78]   ; 0042c636
    ADD ESP,0xc                         ; 0042c63c
    CMP EBX,ECX                         ; 0042c63f
    JL 0x0042c62a                       ; 0042c641
        ;   XREF to: 0042c62a (CONDITIONAL_JUMP)  ; LAB_0042c62a
    LEA EAX,[EAX]                       ; 0042c643
    LEA EDX,[EDX]                       ; 0042c649
    NOP                                 ; 0042c64f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042c650
        ;   Label: LAB_0042c650
    MOV EBX,dword ptr [EAX + 0x3120]    ; 0042c653
    XOR ESI,ESI                         ; 0042c659
    TEST EBX,EBX                        ; 0042c65b
    JLE 0x0042c690                      ; 0042c65d
        ;   XREF to: 0042c690 (CONDITIONAL_JUMP)  ; LAB_0042c690
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042c65f
    MOV EBX,EAX                         ; 0042c662
    ADD EAX,0x18                        ; 0042c664
        ;   Label: LAB_0042c664
    MOV dword ptr [EBX + 0x3784],0x4    ; 0042c667
    MOV dword ptr [EAX + 0x3128],0x40000000 ; 0042c671
    INC ESI                             ; 0042c67b
    MOV EDX,dword ptr [EDI + 0x3120]    ; 0042c67c
    ADD EBX,0x2a4                       ; 0042c682
    CMP ESI,EDX                         ; 0042c688
    JL 0x0042c664                       ; 0042c68a
        ;   XREF to: 0042c664 (CONDITIONAL_JUMP)  ; LAB_0042c664
    LEA EAX,[EAX]                       ; 0042c68c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042c690
        ;   Label: LAB_0042c690
    ADD EBX,0x2ca0                      ; 0042c693
    PUSH EBX                            ; 0042c699
    CALL FUN_00441cc0                   ; 0042c69a
        ;   XREF to: 00441cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441cc0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042c69f
    ADD ESP,0x4                         ; 0042c6a2
    ADD EAX,0x158                       ; 0042c6a5
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042c6aa
    PUSH EAX                            ; 0042c6ad
    ADD ESI,0x30                        ; 0042c6ae
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042c6b1
    PUSH ESI                            ; 0042c6b4
    ADD EDI,0x20                        ; 0042c6b5
    PUSH EDI                            ; 0042c6b8
    PUSH EBX                            ; 0042c6b9
    MOV dword ptr [EBP + -0x4],EAX      ; 0042c6ba
    CALL FUN_00441f60                   ; 0042c6bd
        ;   XREF to: 00441f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00441f60()
    ADD ESP,0x10                        ; 0042c6c2
    MOV EAX,dword ptr [EBP + -0x4]      ; 0042c6c5
    PUSH EAX                            ; 0042c6c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042c6c9
    PUSH dword ptr [EAX + 0x2504]       ; 0042c6cc
    PUSH 0x3d4ccccd                     ; 0042c6d2
    PUSH ESI                            ; 0042c6d7
    PUSH EDI                            ; 0042c6d8
    PUSH EBX                            ; 0042c6d9
    CALL FUN_00441fa0                   ; 0042c6da
        ;   XREF to: 00441fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441fa0()
    ADD ESP,0x18                        ; 0042c6df
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042c6e2
    PUSH EDX                            ; 0042c6e5
    CALL FUN_004343c0                   ; 0042c6e6
        ;   XREF to: 004343c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004343c0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042c6eb
    MOV DH,byte ptr [EAX + 0x2544]      ; 0042c6ee
    ADD ESP,0x4                         ; 0042c6f4
    TEST DH,DH                          ; 0042c6f7
    JZ 0x0042c759                       ; 0042c6f9
        ;   XREF to: 0042c759 (CONDITIONAL_JUMP)  ; LAB_0042c759
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042c6fb
    MOV dword ptr [EAX + 0xb9e4],0x0    ; 0042c6fe
    MOV ESP,EBP                         ; 0042c708
    POP EBP                             ; 0042c70a
    POP EDI                             ; 0042c70b
    POP ESI                             ; 0042c70c
    POP EBX                             ; 0042c70d
    RET                                 ; 0042c70e
    PUSH EBX                            ; 0042c70f
        ;   Label: LAB_0042c70f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c710
    CALL dword ptr [EAX + 0x94]         ; 0042c716
    MOV ECX,dword ptr [EBP + 0x14]      ; 0042c71c
    ADD ESP,0x4                         ; 0042c71f
    CMP EAX,ECX                         ; 0042c722
    JZ 0x0042c574                       ; 0042c724
        ;   XREF to: 0042c574 (CONDITIONAL_JUMP)  ; LAB_0042c574
    PUSH EAX                            ; 0042c72a
    PUSH EBX                            ; 0042c72b
    PUSH EBX                            ; 0042c72c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042c72d
    PUSH EBX                            ; 0042c730
    MOV EDX,0x5d56cb                    ; 0042c731 | = "..\\core\\charactr.cpp"
    MOV ECX,0x13c                       ; 0042c736
    PUSH 0x5d56e0                       ; 0042c73b | = "%s is carrying %s, but %s thinks it i..."
    MOV dword ptr [0x01d1d400],EDX      ; 0042c740 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0042c746 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0042c74c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x14                        ; 0042c751
    JMP 0x0042c574                      ; 0042c754
        ;   XREF to: 0042c574 (UNCONDITIONAL_JUMP)  ; LAB_0042c574
    PUSH EAX                            ; 0042c759
        ;   Label: LAB_0042c759
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042c75a
    CALL FUN_00408830                   ; 0042c75d
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0042c762
    LEA ESI,[EAX + 0x1]                 ; 0042c765
    ADD EDI,0x2544                      ; 0042c768
    PUSH EDI                            ; 0042c76e
    MOV AL,byte ptr [ESI]               ; 0042c76f
        ;   Label: LAB_0042c76f
    MOV byte ptr [EDI],AL               ; 0042c771
    CMP AL,0x0                          ; 0042c773
    JZ 0x0042c787                       ; 0042c775
        ;   XREF to: 0042c787 (CONDITIONAL_JUMP)  ; LAB_0042c787
    MOV AL,byte ptr [ESI + 0x1]         ; 0042c777
    ADD ESI,0x2                         ; 0042c77a
    MOV byte ptr [EDI + 0x1],AL         ; 0042c77d
    ADD EDI,0x2                         ; 0042c780
    CMP AL,0x0                          ; 0042c783
    JNZ 0x0042c76f                      ; 0042c785
        ;   XREF to: 0042c76f (CONDITIONAL_JUMP)  ; LAB_0042c76f
    POP EDI                             ; 0042c787
        ;   Label: LAB_0042c787
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042c788
    MOV dword ptr [EAX + 0xb9e4],0x0    ; 0042c78b
    MOV ESP,EBP                         ; 0042c795
    POP EBP                             ; 0042c797
    POP EDI                             ; 0042c798
    POP ESI                             ; 0042c799
    POP EBX                             ; 0042c79a
    RET                                 ; 0042c79b

