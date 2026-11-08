; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f04f0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_005dd74f
;   TerminatedCString s_CMimic_setup_can_t_use_m_005dd761
;   TerminatedCString s_stranger_dfm_005dd792
;   TerminatedCString s_Bip01_head_005dd79f
;   TerminatedCString s_Bip01_L_Clavicle_005dd7aa
;   TerminatedCString s_Bip01_R_Clavicle_005dd7bb
;   TerminatedCString s_Bip01_L_UpperArm_005dd7cc
;   TerminatedCString s_Bip01_R_UpperArm_005dd7dd
;   TerminatedCString s_Bip01_L_ForeArm_005dd7ee
;   TerminatedCString s_Bip01_R_ForeArm_005dd7fe
;   TerminatedCString s_Bip01_L_Foot_005dd80e
;   TerminatedCString s_Bip01_R_Foot_005dd81b
;   TerminatedCString s_Bip01_L_Thigh_005dd828
;   TerminatedCString s_Bip01_R_Thigh_005dd836
;   TerminatedCString s_Bip01_L_Calf_005dd844
;   ... and 31 more
;
; Called Functions:
;   FUN_0040c5a0
;   FUN_0040c8f0
;   FUN_00487eb0
;   FUN_004e4500
;   FUN_00540e80
;   FUN_00544e60
;   FUN_00544ee0
;   FUN_00546ae0
;   FUN_00547480
;   FUN_00547890
;   FUN_005478b0
;   FUN_005adeb0
;   FUN_005ae680
;   FUN_005b6f80
;   FUN_005b71d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f04f0
        ;   Label: FUN_004f04f0
    PUSH ESI                            ; 004f04f1
    PUSH EDI                            ; 004f04f2
    PUSH EBP                            ; 004f04f3
    SUB ESP,0x18                        ; 004f04f4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004f04f7
    MOV EAX,[0x0061b120]                ; 004f04fb | DAT_0061b120
    CMP dword ptr [EAX],0x0             ; 004f0500 | DAT_01d34cb0
    JNZ 0x004f086a                      ; 004f0503
        ;   XREF to: 004f086a (CONDITIONAL_JUMP)  ; LAB_004f086a
    MOV EAX,[0x01cedef4]                ; 004f0509 | DAT_01cedef4
        ;   Label: LAB_004f0509
    SHL EAX,0x2                         ; 004f050e
    MOV EDI,dword ptr [EAX + 0x1cedee4] ; 004f0511
    LEA EDX,[EBX + 0x2b4]               ; 004f0517
    TEST EDI,EDI                        ; 004f051d
    JZ 0x004f0892                       ; 004f051f
        ;   XREF to: 004f0892 (CONDITIONAL_JUMP)  ; LAB_004f0892
    LEA EAX,[EDI + 0x2514]              ; 004f0525
    PUSH EAX                            ; 004f052b
    PUSH EDX                            ; 004f052c
        ;   Label: LAB_004f052c
    CALL FUN_005478b0                   ; 004f052d
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    ADD ESP,0x8                         ; 004f0532
    LEA EDI,[EBX + 0x2b4]               ; 004f0535
    PUSH EDI                            ; 004f053b
    CALL FUN_00547480                   ; 004f053c
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 004f0541
    PUSH EDI                            ; 004f0544
    CALL FUN_00547890                   ; 004f0545
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 004f054a
    PUSH 0x1                            ; 004f054d
    PUSH 0x5dd79f                       ; 004f054f | = "Bip01 head"
    PUSH EAX                            ; 004f0554
    MOV ESI,EAX                         ; 004f0555
    CALL FUN_00540e80                   ; 004f0557
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f055c
    PUSH 0x1                            ; 004f055f
    PUSH 0x5dd7aa                       ; 004f0561 | = "Bip01 L Clavicle"
    PUSH ESI                            ; 004f0566
    MOV [0x01d097c4],EAX                ; 004f0567 | DAT_01d097c4
    CALL FUN_00540e80                   ; 004f056c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f0571
    PUSH 0x1                            ; 004f0574
    PUSH 0x5dd7bb                       ; 004f0576 | = "Bip01 R Clavicle"
    PUSH ESI                            ; 004f057b
    MOV [0x01d097c8],EAX                ; 004f057c | DAT_01d097c8
    CALL FUN_00540e80                   ; 004f0581
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f0586
    PUSH 0x1                            ; 004f0589
    PUSH 0x5dd7cc                       ; 004f058b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004f0590
    MOV [0x01d097cc],EAX                ; 004f0591 | DAT_01d097cc
    CALL FUN_00540e80                   ; 004f0596
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f059b
    PUSH 0x1                            ; 004f059e
    PUSH 0x5dd7dd                       ; 004f05a0 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004f05a5
    MOV [0x01d097d0],EAX                ; 004f05a6 | DAT_01d097d0
    CALL FUN_00540e80                   ; 004f05ab
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f05b0
    PUSH 0x1                            ; 004f05b3
    PUSH 0x5dd7ee                       ; 004f05b5 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004f05ba
    MOV [0x01d097d4],EAX                ; 004f05bb | DAT_01d097d4
    CALL FUN_00540e80                   ; 004f05c0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f05c5
    PUSH 0x1                            ; 004f05c8
    PUSH 0x5dd7fe                       ; 004f05ca | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004f05cf
    MOV [0x01d097d8],EAX                ; 004f05d0 | DAT_01d097d8
    CALL FUN_00540e80                   ; 004f05d5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f05da
    PUSH 0x1                            ; 004f05dd
    PUSH 0x5dd80e                       ; 004f05df | = "Bip01 L Foot"
    PUSH ESI                            ; 004f05e4
    MOV [0x01d097dc],EAX                ; 004f05e5 | DAT_01d097dc
    CALL FUN_00540e80                   ; 004f05ea
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f05ef
    PUSH 0x1                            ; 004f05f2
    PUSH 0x5dd81b                       ; 004f05f4 | = "Bip01 R Foot"
    PUSH ESI                            ; 004f05f9
    MOV [0x01d097e0],EAX                ; 004f05fa | DAT_01d097e0
    CALL FUN_00540e80                   ; 004f05ff
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f0604
    MOV [0x01d097e4],EAX                ; 004f0607 | DAT_01d097e4
    PUSH 0x1                            ; 004f060c
    PUSH 0x5dd828                       ; 004f060e | = "Bip01 L Thigh"
    PUSH ESI                            ; 004f0613
    CALL FUN_00540e80                   ; 004f0614
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f0619
    PUSH 0x1                            ; 004f061c
    PUSH 0x5dd836                       ; 004f061e | = "Bip01 R Thigh"
    PUSH ESI                            ; 004f0623
    MOV [0x01d097e8],EAX                ; 004f0624 | DAT_01d097e8
    CALL FUN_00540e80                   ; 004f0629
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f062e
    PUSH 0x1                            ; 004f0631
    PUSH 0x5dd844                       ; 004f0633 | = "Bip01 L Calf"
    PUSH ESI                            ; 004f0638
    MOV [0x01d097ec],EAX                ; 004f0639 | DAT_01d097ec
    CALL FUN_00540e80                   ; 004f063e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f0643
    PUSH 0x1                            ; 004f0646
    PUSH 0x5dd851                       ; 004f0648 | = "Bip01 R Calf"
    PUSH ESI                            ; 004f064d
    MOV [0x01d097f0],EAX                ; 004f064e | DAT_01d097f0
    CALL FUN_00540e80                   ; 004f0653
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f0658
    PUSH 0x1                            ; 004f065b
    PUSH 0x5dd85e                       ; 004f065d | = "Bip01 L Hand"
    PUSH ESI                            ; 004f0662
    MOV [0x01d097f4],EAX                ; 004f0663 | DAT_01d097f4
    CALL FUN_00540e80                   ; 004f0668
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f066d
    PUSH 0x1                            ; 004f0670
    PUSH 0x5dd86b                       ; 004f0672 | = "Bip01 R Hand"
    PUSH ESI                            ; 004f0677
    MOV [0x01d09804],EAX                ; 004f0678 | DAT_01d09804
    CALL FUN_00540e80                   ; 004f067d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f0682
    PUSH 0x1                            ; 004f0685
    PUSH 0x5dd878                       ; 004f0687 | = "Bip01 Spine2"
    PUSH ESI                            ; 004f068c
    MOV [0x01d09808],EAX                ; 004f068d | DAT_01d09808
    CALL FUN_00540e80                   ; 004f0692
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f0697
    PUSH 0x1                            ; 004f069a
    PUSH 0x5dd885                       ; 004f069c | = "Bip01 Spine"
    PUSH ESI                            ; 004f06a1
    MOV [0x01d0980c],EAX                ; 004f06a2 | DAT_01d0980c
    CALL FUN_00540e80                   ; 004f06a7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004f06ac
    PUSH EBX                            ; 004f06af
    MOV [0x01d09810],EAX                ; 004f06b0 | DAT_01d09810
    CALL FUN_00487eb0                   ; 004f06b5
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 004f06ba
    PUSH 0x5dd891                       ; 004f06bd | = "strcoat.cth"
    LEA ESI,[EBX + 0x10bc0]             ; 004f06c2
    PUSH ESI                            ; 004f06c8
    CALL FUN_005adeb0                   ; 004f06c9
        ;   XREF to: 005adeb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005adeb0()
    ADD ESP,0x8                         ; 004f06ce
    PUSH EDI                            ; 004f06d1
    LEA EAX,[EBX + 0x30]                ; 004f06d2
    PUSH EAX                            ; 004f06d5
    LEA EAX,[EBX + 0x20]                ; 004f06d6
    PUSH EAX                            ; 004f06d9
    PUSH ESI                            ; 004f06da
    CALL FUN_005ae680                   ; 004f06db
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae680()
    ADD ESP,0x10                        ; 004f06e0
    MOV EBP,dword ptr [0x01c264e0]      ; 004f06e3 | DAT_01c264e0
    PUSH EBP                            ; 004f06e9
    LEA EAX,[EBX + 0x4b6f8]             ; 004f06ea
    PUSH EAX                            ; 004f06f0
    CALL FUN_0040c5a0                   ; 004f06f1
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    ADD ESP,0x4                         ; 004f06f6
    PUSH EAX                            ; 004f06f9
    CALL FUN_0040c8f0                   ; 004f06fa
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004f06ff
    MOV dword ptr [EBX + 0x4c350],EAX   ; 004f0702
    TEST EAX,EAX                        ; 004f0708
    JNZ 0x004f072f                      ; 004f070a
        ;   XREF to: 004f072f (CONDITIONAL_JUMP)  ; LAB_004f072f
    MOV EDX,0x5dd89d                    ; 004f070c | = "..\\core\\mimic.cpp"
    MOV ECX,0x101                       ; 004f0711
    PUSH 0x5dd8af                       ; 004f0716 | = "CMimic failed to create morph target ..."
    MOV dword ptr [0x01d046a0],EDX      ; 004f071b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004f0721 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004f0727
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004f072c
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f072f
        ;   Label: LAB_004f072f
    PUSH EAX                            ; 004f0735
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004f0736
    CALL dword ptr [EDX + 0x8]          ; 004f073c
    ADD ESP,0x4                         ; 004f073f
    LEA ESI,[EBX + 0x2b4]               ; 004f0742
    PUSH ESI                            ; 004f0748
    CALL FUN_00544e60                   ; 004f0749
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    ADD ESP,0x4                         ; 004f074e
    PUSH ESI                            ; 004f0751
    CALL FUN_00546ae0                   ; 004f0752
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 004f0757
    PUSH ESI                            ; 004f075a
    PUSH 0x0                            ; 004f075b
    LEA EAX,[EBX + 0x4b720]             ; 004f075d
    PUSH EAX                            ; 004f0763
    CALL FUN_005b6f80                   ; 004f0764
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6f80()
    ADD ESP,0xc                         ; 004f0769
    PUSH ESI                            ; 004f076c
    CALL FUN_00544ee0                   ; 004f076d
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00544ee0()
    ADD ESP,0x4                         ; 004f0772
    MOV ESI,dword ptr [EBX + 0x4b774]   ; 004f0775
    XOR EDX,EDX                         ; 004f077b
    TEST ESI,ESI                        ; 004f077d
    JLE 0x004f07b0                      ; 004f077f
        ;   XREF to: 004f07b0 (CONDITIONAL_JUMP)  ; LAB_004f07b0
    XOR EAX,EAX                         ; 004f0781
    MOV ECX,dword ptr [EBX + 0x4b778]   ; 004f0783
        ;   Label: LAB_004f0783
    INC EDX                             ; 004f0789
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 004f078a
    FCHS                                ; 004f078e
    FSTP float ptr [ECX + EAX*0x1 + 0x4] ; 004f0790
    MOV EDI,dword ptr [EBX + 0x4b774]   ; 004f0794
    ADD EAX,0x10                        ; 004f079a
    CMP EDX,EDI                         ; 004f079d
    JL 0x004f0783                       ; 004f079f
        ;   XREF to: 004f0783 (CONDITIONAL_JUMP)  ; LAB_004f0783
    LEA EAX,[EAX]                       ; 004f07a1
    LEA EDX,[EDX]                       ; 004f07a7
    LEA EAX,[EAX]                       ; 004f07ad
    MOV EBP,dword ptr [EBX + 0x4b77c]   ; 004f07b0
        ;   Label: LAB_004f07b0
    XOR EDX,EDX                         ; 004f07b6
    TEST EBP,EBP                        ; 004f07b8
    JLE 0x004f0800                      ; 004f07ba
        ;   XREF to: 004f0800 (CONDITIONAL_JUMP)  ; LAB_004f0800
    XOR ECX,ECX                         ; 004f07bc
    MOV EAX,dword ptr [EBX + 0x4b780]   ; 004f07be
        ;   Label: LAB_004f07be
    LEA EDI,[ESP + 0xc]                 ; 004f07c4
    LEA ESI,[ECX + EAX*0x1 + 0x30]      ; 004f07c8
    MOVSD ES:EDI,ESI                    ; 004f07cc
    MOVSD ES:EDI,ESI                    ; 004f07cd
    MOVSD ES:EDI,ESI                    ; 004f07ce
    MOV EDI,ESP                         ; 004f07cf
    LEA ESI,[ECX + EAX*0x1 + 0x18]      ; 004f07d1
    MOVSD ES:EDI,ESI                    ; 004f07d5
    MOVSD ES:EDI,ESI                    ; 004f07d6
    MOVSD ES:EDI,ESI                    ; 004f07d7
    LEA ESI,[ESP + 0xc]                 ; 004f07d8
    LEA EDI,[ECX + EAX*0x1 + 0x18]      ; 004f07dc
    MOVSD ES:EDI,ESI                    ; 004f07e0
    MOVSD ES:EDI,ESI                    ; 004f07e1
    MOVSD ES:EDI,ESI                    ; 004f07e2
    MOV ESI,ESP                         ; 004f07e3
    LEA EDI,[ECX + EAX*0x1 + 0x30]      ; 004f07e5
    MOVSD ES:EDI,ESI                    ; 004f07e9
    MOVSD ES:EDI,ESI                    ; 004f07ea
    MOVSD ES:EDI,ESI                    ; 004f07eb
    INC EDX                             ; 004f07ec
    MOV EAX,dword ptr [EBX + 0x4b77c]   ; 004f07ed
    ADD ECX,0x3c                        ; 004f07f3
    CMP EDX,EAX                         ; 004f07f6
    JL 0x004f07be                       ; 004f07f8
        ;   XREF to: 004f07be (CONDITIONAL_JUMP)  ; LAB_004f07be
    LEA EAX,[EAX]                       ; 004f07fa
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f0800
        ;   Label: LAB_004f0800
    ADD EAX,0x2b4                       ; 004f0806
    PUSH EAX                            ; 004f080b
    CALL FUN_00544e60                   ; 004f080c
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f0811
    ADD ESP,0x4                         ; 004f0817
    ADD EAX,0x2b4                       ; 004f081a
    PUSH EAX                            ; 004f081f
    CALL FUN_00546ae0                   ; 004f0820
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f0825
    ADD ESP,0x4                         ; 004f082b
    ADD EAX,0x2b4                       ; 004f082e
    PUSH EAX                            ; 004f0833
    PUSH 0x1                            ; 004f0834
    LEA ESI,[EBX + 0x4b720]             ; 004f0836
    PUSH ESI                            ; 004f083c
    CALL FUN_005b6f80                   ; 004f083d
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6f80()
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f0842
    ADD ESP,0xc                         ; 004f0848
    ADD EAX,0x2b4                       ; 004f084b
    PUSH EAX                            ; 004f0850
    CALL FUN_00544ee0                   ; 004f0851
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00544ee0()
    ADD ESP,0x4                         ; 004f0856
    PUSH ESI                            ; 004f0859
    CALL FUN_005b71d0                   ; 004f085a
        ;   XREF to: 005b71d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b71d0()
    ADD ESP,0x4                         ; 004f085f
    ADD ESP,0x18                        ; 004f0862
    POP EBP                             ; 004f0865
    POP EDI                             ; 004f0866
    POP ESI                             ; 004f0867
    POP EBX                             ; 004f0868
    RET                                 ; 004f0869
    MOV ECX,0x5dd74f                    ; 004f086a | = "..\\core\\mimic.cpp"
        ;   Label: LAB_004f086a
    MOV ESI,0xb6                        ; 004f086f
    PUSH 0x5dd761                       ; 004f0874 | = "CMimic::setup - can't use mimic in mu..."
    MOV dword ptr [0x01d046a0],ECX      ; 004f0879 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004f087f | DAT_01d046a4
    CALL FUN_004e4500                   ; 004f0885
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004f088a
    JMP 0x004f0509                      ; 004f088d
        ;   XREF to: 004f0509 (UNCONDITIONAL_JUMP)  ; LAB_004f0509
    PUSH 0x5dd792                       ; 004f0892 | = "stranger.dfm"
        ;   Label: LAB_004f0892
    JMP 0x004f052c                      ; 004f0897
        ;   XREF to: 004f052c (UNCONDITIONAL_JUMP)  ; LAB_004f052c

