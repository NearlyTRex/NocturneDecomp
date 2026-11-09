; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trash_cpp_FUN_0056d360(CDemonActor *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d65b7
;   undefined4 DAT_005d65bb
;   undefined4 DAT_005d65bf
;   undefined4 DAT_005d65c3
;   undefined4 DAT_005d65c7
;   undefined4 DAT_005d65cf
;   undefined4 DAT_005d65d7
;   undefined4 s_s_333_CTrigger_005d65de+1
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040ce40
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370
;   core_setcolid.cpp_FUN_0053bc80
;   core_setcolid.cpp_FUN_0053de10
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_FUN_00583b10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d360
        ;   Label: core_trash.cpp_FUN_0056d360
    PUSH ESI                            ; 0056d361
    PUSH EDI                            ; 0056d362
    PUSH EBP                            ; 0056d363
    MOV EBP,ESP                         ; 0056d364
    SUB ESP,0x260                       ; 0056d366
    AND ESP,0xfffffff8                  ; 0056d36c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056d36f
    LEA ESI,[EBX + 0x20]                ; 0056d372
    PUSH 0x42c80000                     ; 0056d375
    PUSH ESI                            ; 0056d37a
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370 ; 0056d37b
        ;   XREF to: 004d2370 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370()
    ADD ESP,0x8                         ; 0056d380
    TEST EAX,EAX                        ; 0056d383
    JZ 0x0056dce7                       ; 0056d385
        ;   XREF to: 0056dce7 (CONDITIONAL_JUMP)  ; LAB_0056dce7
    PUSH 0x3d4ccccd                     ; 0056d38b
    PUSH 0xbd4ccccd                     ; 0056d390
    CALL core_actor.cpp_FUN_0040ce40    ; 0056d395
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x264],EAX     ; 0056d39a
    FLD float ptr [ESP + 0x264]         ; 0056d3a1
    ADD ESP,0x8                         ; 0056d3a8
    LEA ESI,[EBX + 0x300]               ; 0056d3ab
    PUSH 0x3d4ccccd                     ; 0056d3b1
    FADD float ptr [ESI]                ; 0056d3b6
    PUSH 0xbd4ccccd                     ; 0056d3b8
    FSTP float ptr [ESI]                ; 0056d3bd
    CALL core_actor.cpp_FUN_0040ce40    ; 0056d3bf
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x264],EAX     ; 0056d3c4
    FLD float ptr [ESP + 0x264]         ; 0056d3cb
    ADD ESP,0x8                         ; 0056d3d2
    LEA ESI,[EBX + 0x304]               ; 0056d3d5
    PUSH 0x3d4ccccd                     ; 0056d3db
    FADD float ptr [ESI]                ; 0056d3e0
    PUSH 0xbd4ccccd                     ; 0056d3e2
    FSTP float ptr [ESI]                ; 0056d3e7
    CALL core_actor.cpp_FUN_0040ce40    ; 0056d3e9
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV EDX,0x40800000                  ; 0056d3ee
    LEA ESI,[EBX + 0x308]               ; 0056d3f3
    MOV dword ptr [ESP + 0x264],EAX     ; 0056d3f9
    XOR ECX,ECX                         ; 0056d400
    FLD float ptr [ESP + 0x264]         ; 0056d402
    LEA EAX,[ESP + 0x108]               ; 0056d409
    FADD float ptr [ESI]                ; 0056d410
    ADD ESP,0x8                         ; 0056d412
    FSTP float ptr [ESI]                ; 0056d415
    MOV dword ptr [ESP + 0x100],EDX     ; 0056d417
    MOV EDX,dword ptr [0x00603b28]      ; 0056d41e | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x104],ECX     ; 0056d424
    ADD EDX,0x15ac70                    ; 0056d42b
    MOV dword ptr [ESP + 0x108],ECX     ; 0056d431
    CMP EDX,EAX                         ; 0056d438
    JZ 0x0056d456                       ; 0056d43a
        ;   XREF to: 0056d456 (CONDITIONAL_JUMP)  ; LAB_0056d456
    MOV dword ptr [EDX],0x40800000      ; 0056d43c
    MOV EAX,dword ptr [ESP + 0x104]     ; 0056d442
    MOV dword ptr [EDX + 0x4],EAX       ; 0056d449
    MOV EAX,dword ptr [ESP + 0x108]     ; 0056d44c
    MOV dword ptr [EDX + 0x8],EAX       ; 0056d453
    FLD float ptr [EBX + 0x314]         ; 0056d456
        ;   Label: LAB_0056d456
    FSUB float ptr [EBP + 0x18]         ; 0056d45c
    FST float ptr [EBX + 0x314]         ; 0056d45f
    FLDZ                                ; 0056d465
    FCOMPP                              ; 0056d467
    FNSTSW AX                           ; 0056d469
    SAHF                                ; 0056d46b
    JC 0x0056d540                       ; 0056d46c
        ;   XREF to: 0056d540 (CONDITIONAL_JUMP)  ; LAB_0056d540
    MOV EAX,[0x00603b28]                ; 0056d472 | g_CDemonSetPtr
    LEA EDX,[EBX + 0x318]               ; 0056d477
    ADD EAX,0x15ac70                    ; 0056d47d
    CMP EDX,EAX                         ; 0056d482
    JZ 0x0056d496                       ; 0056d484
        ;   XREF to: 0056d496 (CONDITIONAL_JUMP)  ; LAB_0056d496
    MOV ECX,dword ptr [EAX]             ; 0056d486
    MOV dword ptr [EDX],ECX             ; 0056d488
    MOV ECX,dword ptr [EAX + 0x4]       ; 0056d48a
    MOV dword ptr [EDX + 0x4],ECX       ; 0056d48d
    MOV ECX,dword ptr [EAX + 0x8]       ; 0056d490
    MOV dword ptr [EDX + 0x8],ECX       ; 0056d493
    PUSH 0x41200000                     ; 0056d496
        ;   Label: LAB_0056d496
    PUSH 0xc1200000                     ; 0056d49b
    CALL core_actor.cpp_FUN_0040ce40    ; 0056d4a0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x264],EAX     ; 0056d4a5
    FLD float ptr [ESP + 0x264]         ; 0056d4ac
    ADD ESP,0x8                         ; 0056d4b3
    PUSH 0x41c80000                     ; 0056d4b6
    FADD float ptr [EBX + 0x318]        ; 0056d4bb
    PUSH 0x41700000                     ; 0056d4c1
    FSTP float ptr [EBX + 0x318]        ; 0056d4c6
    CALL core_actor.cpp_FUN_0040ce40    ; 0056d4cc
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x264],EAX     ; 0056d4d1
    FLD float ptr [ESP + 0x264]         ; 0056d4d8
    ADD ESP,0x8                         ; 0056d4df
    PUSH 0x41200000                     ; 0056d4e2
    FADD float ptr [EBX + 0x31c]        ; 0056d4e7
    PUSH 0xc1200000                     ; 0056d4ed
    FSTP float ptr [EBX + 0x31c]        ; 0056d4f2
    CALL core_actor.cpp_FUN_0040ce40    ; 0056d4f8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x264],EAX     ; 0056d4fd
    FLD float ptr [ESP + 0x264]         ; 0056d504
    ADD ESP,0x8                         ; 0056d50b
    PUSH 0x41a00000                     ; 0056d50e
    FADD float ptr [EBX + 0x320]        ; 0056d513
    PUSH 0x40c00000                     ; 0056d519
    FSTP float ptr [EBX + 0x320]        ; 0056d51e
    CALL core_actor.cpp_FUN_0040ce40    ; 0056d524
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x264],EAX     ; 0056d529
    MOV EAX,dword ptr [ESP + 0x264]     ; 0056d530
    MOV dword ptr [EBX + 0x314],EAX     ; 0056d537
    ADD ESP,0x8                         ; 0056d53d
    LEA EDI,[ESP + 0x130]               ; 0056d540
        ;   Label: LAB_0056d540
    MOV EAX,[0x00603b28]                ; 0056d547 | g_CDemonSetPtr
    LEA ESI,[ESP + 0x19c]               ; 0056d54c
    LEA EDX,[EBX + 0x318]               ; 0056d553
    FLD float ptr [EAX + 0x15ac70]      ; 0056d559
    FLD float ptr [EAX + 0x15ac74]      ; 0056d55f
    FLD float ptr [EAX + 0x15ac78]      ; 0056d565
    FXCH ST2                            ; 0056d56b
    FSUB float ptr [EDX]                ; 0056d56d
    FXCH                                ; 0056d56f
    FSUB float ptr [EDX + 0x4]          ; 0056d571
    FXCH ST2                            ; 0056d574
    FSUB float ptr [EDX + 0x8]          ; 0056d576
    FXCH                                ; 0056d579
    FSTP float ptr [ESP + 0x19c]        ; 0056d57b
    FXCH                                ; 0056d582
    FSTP float ptr [ESP + 0x1a0]        ; 0056d584
    FSTP float ptr [ESP + 0x1a4]        ; 0056d58b
    MOVSD ES:EDI,ESI                    ; 0056d592
    MOVSD ES:EDI,ESI                    ; 0056d593
    MOVSD ES:EDI,ESI                    ; 0056d594
    FLD float ptr [0x005d65b7]          ; 0056d595 | DAT_005d65b7
    FLD float ptr [ESP + 0x130]         ; 0056d59b
    FMUL ST1                            ; 0056d5a2
    FLD float ptr [ESP + 0x134]         ; 0056d5a4
    FMUL ST2                            ; 0056d5ab
    FLD float ptr [ESP + 0x138]         ; 0056d5ad
    FMULP ST3                           ; 0056d5b4
    LEA EDI,[ESP + 0x118]               ; 0056d5b6
    LEA ESI,[ESP + 0x1fc]               ; 0056d5bd
    FXCH                                ; 0056d5c4
    FSTP float ptr [ESP + 0x1fc]        ; 0056d5c6
    FSTP float ptr [ESP + 0x200]        ; 0056d5cd
    FSTP float ptr [ESP + 0x204]        ; 0056d5d4
    MOVSD ES:EDI,ESI                    ; 0056d5db
    MOVSD ES:EDI,ESI                    ; 0056d5dc
    MOVSD ES:EDI,ESI                    ; 0056d5dd
    LEA EAX,[EBX + 0x300]               ; 0056d5de
    FLD float ptr [EDX]                 ; 0056d5e4
    FLD float ptr [EDX + 0x4]           ; 0056d5e6
    FLD float ptr [EDX + 0x8]           ; 0056d5e9
    LEA EDI,[ESP + 0x214]               ; 0056d5ec
    LEA ESI,[ESP + 0x178]               ; 0056d5f3
    FXCH ST2                            ; 0056d5fa
    FADD float ptr [ESP + 0x118]        ; 0056d5fc
    FXCH                                ; 0056d603
    FADD float ptr [ESP + 0x11c]        ; 0056d605
    FXCH ST2                            ; 0056d60c
    FADD float ptr [ESP + 0x120]        ; 0056d60e
    FXCH                                ; 0056d615
    FSTP float ptr [EDX]                ; 0056d617
    FXCH                                ; 0056d619
    FSTP float ptr [EDX + 0x4]          ; 0056d61b
    FSTP float ptr [EDX + 0x8]          ; 0056d61e
    FLD float ptr [EDX]                 ; 0056d621
    FLD float ptr [EDX + 0x4]           ; 0056d623
    FLD float ptr [EDX + 0x8]           ; 0056d626
    FXCH ST2                            ; 0056d629
    FSUB float ptr [EAX]                ; 0056d62b
    FXCH                                ; 0056d62d
    FSUB float ptr [EAX + 0x4]          ; 0056d62f
    FXCH ST2                            ; 0056d632
    FSUB float ptr [EAX + 0x8]          ; 0056d634
    FXCH                                ; 0056d637
    FSTP float ptr [ESP + 0x178]        ; 0056d639
    FXCH                                ; 0056d640
    FSTP float ptr [ESP + 0x17c]        ; 0056d642
    FSTP float ptr [ESP + 0x180]        ; 0056d649
    MOVSD ES:EDI,ESI                    ; 0056d650
    MOVSD ES:EDI,ESI                    ; 0056d651
    MOVSD ES:EDI,ESI                    ; 0056d652
    FLD float ptr [0x005d65bb]          ; 0056d653 | DAT_005d65bb
    FLD float ptr [ESP + 0x214]         ; 0056d659
    FMUL ST1                            ; 0056d660
    FLD float ptr [ESP + 0x218]         ; 0056d662
    FMUL ST2                            ; 0056d669
    FLD float ptr [ESP + 0x21c]         ; 0056d66b
    FMULP ST3                           ; 0056d672
    LEA EDI,[ESP + 0x1b4]               ; 0056d674
    LEA ESI,[ESP + 0x1e4]               ; 0056d67b
    FXCH                                ; 0056d682
    FSTP float ptr [ESP + 0x1e4]        ; 0056d684
    FSTP float ptr [ESP + 0x1e8]        ; 0056d68b
    FSTP float ptr [ESP + 0x1ec]        ; 0056d692
    MOVSD ES:EDI,ESI                    ; 0056d699
    MOVSD ES:EDI,ESI                    ; 0056d69a
    MOVSD ES:EDI,ESI                    ; 0056d69b
    FLD float ptr [EAX]                 ; 0056d69c
    FLD float ptr [EAX + 0x4]           ; 0056d69e
    FLD float ptr [EAX + 0x8]           ; 0056d6a1
    LEA EDI,[ESP + 0x124]               ; 0056d6a4
    FXCH ST2                            ; 0056d6ab
    FADD float ptr [ESP + 0x1b4]        ; 0056d6ad
    FXCH                                ; 0056d6b4
    FADD float ptr [ESP + 0x1b8]        ; 0056d6b6
    FXCH ST2                            ; 0056d6bd
    FADD float ptr [ESP + 0x1bc]        ; 0056d6bf
    FXCH                                ; 0056d6c6
    FSTP float ptr [EAX]                ; 0056d6c8
    FXCH                                ; 0056d6ca
    FSTP float ptr [EAX + 0x4]          ; 0056d6cc
    FSTP float ptr [EAX + 0x8]          ; 0056d6cf
    LEA ESI,[EBX + 0x20]                ; 0056d6d2
    MOVSD ES:EDI,ESI                    ; 0056d6d5
    MOVSD ES:EDI,ESI                    ; 0056d6d6
    MOVSD ES:EDI,ESI                    ; 0056d6d7
    FLD float ptr [EBX + 0x324]         ; 0056d6d8
    FLD float ptr [EAX]                 ; 0056d6de
    FLD float ptr [EAX + 0x4]           ; 0056d6e0
    FXCH ST2                            ; 0056d6e3
    FCHS                                ; 0056d6e5
    FSTP float ptr [ESP + 0x258]        ; 0056d6e7
    MOV EDX,dword ptr [ESP + 0x258]     ; 0056d6ee
    FLD float ptr [EAX + 0x8]           ; 0056d6f5
    MOV dword ptr [ESP + 0x194],EDX     ; 0056d6f8
    LEA EDX,[EBX + 0x2e8]               ; 0056d6ff
    XOR EDI,EDI                         ; 0056d705
    MOV dword ptr [ESP + 0x250],EDX     ; 0056d707
    MOV dword ptr [ESP + 0x190],EDI     ; 0056d70e
    MOV ESI,dword ptr [ESP + 0x250]     ; 0056d715
    MOV dword ptr [ESP + 0x198],EDI     ; 0056d71c
    LEA EDI,[ESP + 0x220]               ; 0056d723
    FXCH                                ; 0056d72a
    FSUB float ptr [ESI]                ; 0056d72c
    FXCH ST2                            ; 0056d72e
    FSUB float ptr [ESI + 0x4]          ; 0056d730
    FXCH                                ; 0056d733
    FSUB float ptr [ESI + 0x8]          ; 0056d735
    FXCH ST2                            ; 0056d738
    FSTP float ptr [ESP + 0x184]        ; 0056d73a
    FSTP float ptr [ESP + 0x188]        ; 0056d741
    LEA ESI,[ESP + 0x184]               ; 0056d748
    FSTP float ptr [ESP + 0x18c]        ; 0056d74f
    MOVSD ES:EDI,ESI                    ; 0056d756
    MOVSD ES:EDI,ESI                    ; 0056d757
    MOVSD ES:EDI,ESI                    ; 0056d758
    LEA EDX,[EBX + 0x30c]               ; 0056d759
    FLD float ptr [ESP + 0x220]         ; 0056d75f
    FMUL float ptr [EDX]                ; 0056d766
    FLD float ptr [ESP + 0x224]         ; 0056d768
    FMUL float ptr [EDX]                ; 0056d76f
    FLD float ptr [ESP + 0x228]         ; 0056d771
    FMUL float ptr [EDX]                ; 0056d778
    PUSH EAX                            ; 0056d77a
    FLD float ptr [ESP + 0x25c]         ; 0056d77b
    LEA EDI,[ESP + 0x170]               ; 0056d782
    LEA ESI,[ESP + 0x1f4]               ; 0056d789
    FXCH ST3                            ; 0056d790
    FSTP float ptr [ESP + 0x1f4]        ; 0056d792
    FXCH                                ; 0056d799
    FSTP float ptr [ESP + 0x1f8]        ; 0056d79b
    FSTP float ptr [ESP + 0x1fc]        ; 0056d7a2
    MOVSD ES:EDI,ESI                    ; 0056d7a9
    MOVSD ES:EDI,ESI                    ; 0056d7aa
    MOVSD ES:EDI,ESI                    ; 0056d7ab
    PUSH EBX                            ; 0056d7ac
    MOV EDX,dword ptr [ESP + 0x174]     ; 0056d7ad
    LEA ESI,[ESP + 0x240]               ; 0056d7b4
    LEA EDI,[ESP + 0x114]               ; 0056d7bb
    FADD float ptr [ESP + 0x178]        ; 0056d7c2
    MOV dword ptr [ESP + 0x198],EDX     ; 0056d7c9
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0056d7d0
    FSTP float ptr [ESP + 0x19c]        ; 0056d7d7
    MOV dword ptr [ESP + 0x1a0],EDX     ; 0056d7de
    CALL core_actor.cpp_FUN_00408b40    ; 0056d7e5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x240]               ; 0056d7ea
    ADD ESP,0x8                         ; 0056d7f1
    MOVSD ES:EDI,ESI                    ; 0056d7f4
    MOVSD ES:EDI,ESI                    ; 0056d7f5
    MOVSD ES:EDI,ESI                    ; 0056d7f6
    FLD float ptr [0x005d65bf]          ; 0056d7f7 | DAT_005d65bf
    FLD float ptr [ESP + 0x10c]         ; 0056d7fd
    FMUL ST1                            ; 0056d804
    FLD float ptr [ESP + 0x110]         ; 0056d806
    FMUL ST2                            ; 0056d80d
    FLD float ptr [ESP + 0x114]         ; 0056d80f
    FMULP ST3                           ; 0056d816
    LEA EDX,[EBX + 0x2f4]               ; 0056d818
    LEA EDI,[ESP + 0x22c]               ; 0056d81e
    LEA ESI,[ESP + 0x1d8]               ; 0056d825
    FXCH                                ; 0056d82c
    FSTP float ptr [ESP + 0x1d8]        ; 0056d82e
    FSTP float ptr [ESP + 0x1dc]        ; 0056d835
    FSTP float ptr [ESP + 0x1e0]        ; 0056d83c
    MOVSD ES:EDI,ESI                    ; 0056d843
    MOVSD ES:EDI,ESI                    ; 0056d844
    MOVSD ES:EDI,ESI                    ; 0056d845
    FLD float ptr [EBP + 0x18]          ; 0056d846
    FLD float ptr [ESP + 0x16c]         ; 0056d849
    FMUL ST1                            ; 0056d850
    FLD float ptr [ESP + 0x194]         ; 0056d852
    FMUL ST2                            ; 0056d859
    FLD float ptr [ESP + 0x174]         ; 0056d85b
    FMULP ST3                           ; 0056d862
    FLD float ptr [0x005d65c3]          ; 0056d864 | DAT_005d65c3
    FLD float ptr [EDX]                 ; 0056d86a
    FMUL ST1                            ; 0056d86c
    FLD float ptr [EDX + 0x4]           ; 0056d86e
    FMUL ST2                            ; 0056d871
    FLD float ptr [EDX + 0x8]           ; 0056d873
    FMULP ST3                           ; 0056d876
    LEA EDI,[ESP + 0x148]               ; 0056d878
    LEA ESI,[ESP + 0x160]               ; 0056d87f
    MOV EAX,dword ptr [ESP + 0x250]     ; 0056d886
    FXCH ST4                            ; 0056d88d
    FSTP float ptr [ESP + 0x160]        ; 0056d88f
    FXCH ST2                            ; 0056d896
    FSTP float ptr [ESP + 0x164]        ; 0056d898
    FXCH ST3                            ; 0056d89f
    FSTP float ptr [ESP + 0x168]        ; 0056d8a1
    FSTP float ptr [EDX]                ; 0056d8a8
    FSTP float ptr [EDX + 0x4]          ; 0056d8aa
    FSTP float ptr [EDX + 0x8]          ; 0056d8ad
    FLD float ptr [EDX]                 ; 0056d8b0
    FLD float ptr [EDX + 0x4]           ; 0056d8b2
    FLD float ptr [EDX + 0x8]           ; 0056d8b5
    FXCH ST2                            ; 0056d8b8
    FADD float ptr [ESP + 0x22c]        ; 0056d8ba
    FXCH                                ; 0056d8c1
    FADD float ptr [ESP + 0x230]        ; 0056d8c3
    FXCH ST2                            ; 0056d8ca
    FADD float ptr [ESP + 0x234]        ; 0056d8cc
    FXCH                                ; 0056d8d3
    FSTP float ptr [EDX]                ; 0056d8d5
    FXCH                                ; 0056d8d7
    FSTP float ptr [EDX + 0x4]          ; 0056d8d9
    FSTP float ptr [EDX + 0x8]          ; 0056d8dc
    MOVSD ES:EDI,ESI                    ; 0056d8df
    MOVSD ES:EDI,ESI                    ; 0056d8e0
    MOVSD ES:EDI,ESI                    ; 0056d8e1
    FLD float ptr [EAX]                 ; 0056d8e2
    FLD float ptr [EAX + 0x4]           ; 0056d8e4
    FLD float ptr [EAX + 0x8]           ; 0056d8e7
    FXCH ST2                            ; 0056d8ea
    FADD float ptr [ESP + 0x148]        ; 0056d8ec
    FXCH                                ; 0056d8f3
    FADD float ptr [ESP + 0x14c]        ; 0056d8f5
    FXCH ST2                            ; 0056d8fc
    FADD float ptr [ESP + 0x150]        ; 0056d8fe
    FXCH                                ; 0056d905
    FSTP float ptr [EAX]                ; 0056d907
    FXCH                                ; 0056d909
    FSTP float ptr [EAX + 0x4]          ; 0056d90b
    FSTP float ptr [EAX + 0x8]          ; 0056d90e
    FLD float ptr [EDX + 0x4]           ; 0056d911
    FMUL ST0                            ; 0056d914
    FLD float ptr [EDX]                 ; 0056d916
    FMUL ST0                            ; 0056d918
    FADDP                               ; 0056d91a
    FLD float ptr [EDX + 0x8]           ; 0056d91c
    FMUL ST0                            ; 0056d91f
    FADDP                               ; 0056d921
    FSQRT                               ; 0056d923
    FMUL float ptr [0x005d65c7]         ; 0056d925 | DAT_005d65c7
    FST float ptr [ESP + 0x8]           ; 0056d92b
    FLD1                                ; 0056d92f
    FCOMPP                              ; 0056d931
    FNSTSW AX                           ; 0056d933
    SAHF                                ; 0056d935
    JNC 0x0056d95a                      ; 0056d936
        ;   XREF to: 0056d95a (CONDITIONAL_JUMP)  ; LAB_0056d95a
    FLD1                                ; 0056d938
    FLD float ptr [EDX]                 ; 0056d93a
    FXCH                                ; 0056d93c
    FDIV float ptr [ESP + 0x8]          ; 0056d93e
    FXCH                                ; 0056d942
    FMUL ST1                            ; 0056d944
    FLD float ptr [EDX + 0x4]           ; 0056d946
    FMUL ST2                            ; 0056d949
    FLD float ptr [EDX + 0x8]           ; 0056d94b
    FMULP ST3                           ; 0056d94e
    FXCH                                ; 0056d950
    FSTP float ptr [EDX]                ; 0056d952
    FSTP float ptr [EDX + 0x4]          ; 0056d954
    FSTP float ptr [EDX + 0x8]          ; 0056d957
    LEA EAX,[EBX + 0x2e8]               ; 0056d95a
        ;   Label: LAB_0056d95a
    FLD float ptr [EBP + 0x18]          ; 0056d960
    FLD float ptr [EAX]                 ; 0056d963
    FMUL ST1                            ; 0056d965
    FLD float ptr [EAX + 0x4]           ; 0056d967
    FMUL ST2                            ; 0056d96a
    FLD float ptr [EAX + 0x8]           ; 0056d96c
    FMUL ST3                            ; 0056d96f
    LEA EDI,[ESP + 0x13c]               ; 0056d971
    LEA ESI,[ESP + 0xd0]                ; 0056d978
    LEA EAX,[EBX + 0x2f4]               ; 0056d97f
    FXCH ST2                            ; 0056d985
    FSTP float ptr [ESP + 0xd0]         ; 0056d987
    FSTP float ptr [ESP + 0xd4]         ; 0056d98e
    FSTP float ptr [ESP + 0xd8]         ; 0056d995
    MOVSD ES:EDI,ESI                    ; 0056d99c
    MOVSD ES:EDI,ESI                    ; 0056d99d
    MOVSD ES:EDI,ESI                    ; 0056d99e
    FLD float ptr [EAX]                 ; 0056d99f
    FMUL ST1                            ; 0056d9a1
    FLD float ptr [EAX + 0x4]           ; 0056d9a3
    FMUL ST2                            ; 0056d9a6
    FLD float ptr [EAX + 0x8]           ; 0056d9a8
    FMULP ST3                           ; 0056d9ab
    LEA EDI,[ESP + 0xe8]                ; 0056d9ad
    LEA ESI,[ESP + 0x1cc]               ; 0056d9b4
    FXCH                                ; 0056d9bb
    FSTP float ptr [ESP + 0x1cc]        ; 0056d9bd
    FSTP float ptr [ESP + 0x1d0]        ; 0056d9c4
    FSTP float ptr [ESP + 0x1d4]        ; 0056d9cb
    MOVSD ES:EDI,ESI                    ; 0056d9d2
    MOVSD ES:EDI,ESI                    ; 0056d9d3
    MOVSD ES:EDI,ESI                    ; 0056d9d4
    PUSH dword ptr [EBX + 0x2e4]        ; 0056d9d5
    PUSH dword ptr [EBX + 0x2e0]        ; 0056d9db
    PUSH dword ptr [EBX + 0x310]        ; 0056d9e1
    PUSH dword ptr [ESP + 0x150]        ; 0056d9e7
    PUSH dword ptr [ESP + 0x14c]        ; 0056d9ee
    PUSH dword ptr [EBX + 0x28]         ; 0056d9f5
    MOV ECX,dword ptr [0x00603b28]      ; 0056d9f8 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 0056d9fe
    PUSH ECX                            ; 0056da01
    CALL core_setcolid.cpp_FUN_0053de10 ; 0056da02
        ;   XREF to: 0053de10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053de10()
    MOV dword ptr [ESP + 0x27c],EAX     ; 0056da07
    XOR EDI,EDI                         ; 0056da0e
    FLD float ptr [ESP + 0x27c]         ; 0056da10
    ADD ESP,0x20                        ; 0056da17
    FLDZ                                ; 0056da1a
    FXCH                                ; 0056da1c
    FST float ptr [ESP + 0xc]           ; 0056da1e
    FSTP double ptr [ESP]               ; 0056da22
    FCOMP double ptr [ESP]              ; 0056da25
    FNSTSW AX                           ; 0056da28
    SAHF                                ; 0056da2a
    JA 0x0056da72                       ; 0056da2b
        ;   XREF to: 0056da72 (CONDITIONAL_JUMP)  ; LAB_0056da72
    FLD1                                ; 0056da2d
    FCOMP double ptr [ESP]              ; 0056da2f
    FNSTSW AX                           ; 0056da32
    SAHF                                ; 0056da34
    JBE 0x0056da72                      ; 0056da35
        ;   XREF to: 0056da72 (CONDITIONAL_JUMP)  ; LAB_0056da72
    FLD float ptr [ESP + 0xc]           ; 0056da37
    FLD float ptr [ESP + 0x13c]         ; 0056da3b
    FMUL ST1                            ; 0056da42
    FLD float ptr [ESP + 0x140]         ; 0056da44
    FMUL ST2                            ; 0056da4b
    FLD float ptr [ESP + 0x144]         ; 0056da4d
    FMULP ST3                           ; 0056da54
    MOV EDI,0x1                         ; 0056da56
    FSTP float ptr [ESP + 0x140]        ; 0056da5b
    FXCH                                ; 0056da62
    FSTP float ptr [ESP + 0x144]        ; 0056da64
    FSTP float ptr [ESP + 0x13c]        ; 0056da6b
    LEA ESI,[EBX + 0x20]                ; 0056da72
        ;   Label: LAB_0056da72
    FLD float ptr [ESI]                 ; 0056da75
    FLD float ptr [ESI + 0x4]           ; 0056da77
    FLD float ptr [ESI + 0x8]           ; 0056da7a
    FXCH ST2                            ; 0056da7d
    FADD float ptr [ESP + 0x13c]        ; 0056da7f
    FXCH                                ; 0056da86
    FADD float ptr [ESP + 0x140]        ; 0056da88
    FXCH ST2                            ; 0056da8f
    FADD float ptr [ESP + 0x144]        ; 0056da91
    FXCH                                ; 0056da98
    FSTP float ptr [ESI]                ; 0056da9a
    FXCH                                ; 0056da9c
    FSTP float ptr [ESI + 0x4]          ; 0056da9e
    FSTP float ptr [ESI + 0x8]          ; 0056daa1
    FLD float ptr [EBX + 0x310]         ; 0056daa4
    FMUL double ptr [0x005d65cf]        ; 0056daaa | DAT_005d65cf
    SUB ESP,0x4                         ; 0056dab0
    FSTP float ptr [ESP]                ; 0056dab3
    PUSH ESI                            ; 0056dab6
    MOV EAX,[0x00603b28]                ; 0056dab7 | g_CDemonSetPtr
    PUSH EAX                            ; 0056dabc
    CALL core_setcolid.cpp_FUN_0053bc80 ; 0056dabd
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x268],EAX     ; 0056dac2
    FLD float ptr [ESP + 0x268]         ; 0056dac9
    ADD ESP,0xc                         ; 0056dad0
    FLD float ptr [EBX + 0x24]          ; 0056dad3
    FXCH                                ; 0056dad6
    FSTP float ptr [ESP + 0x244]        ; 0056dad8
    FCOMP float ptr [ESP + 0x244]       ; 0056dadf
    FNSTSW AX                           ; 0056dae6
    SAHF                                ; 0056dae8
    JNC 0x0056dd16                      ; 0056dae9
        ;   XREF to: 0056dd16 (CONDITIONAL_JUMP)  ; LAB_0056dd16
    FLD float ptr [EBX + 0x310]         ; 0056daef
    FMUL double ptr [0x005d65d7]        ; 0056daf5 | DAT_005d65d7
    MOV EAX,dword ptr [ESP + 0x244]     ; 0056dafb
    FADD float ptr [ESP + 0x128]        ; 0056db02
    MOV dword ptr [EBX + 0x24],EAX      ; 0056db09
    FLD float ptr [EBX + 0x24]          ; 0056db0c
    FCOMPP                              ; 0056db0f
    FNSTSW AX                           ; 0056db11
    SAHF                                ; 0056db13
    JBE 0x0056db33                      ; 0056db14
        ;   XREF to: 0056db33 (CONDITIONAL_JUMP)  ; LAB_0056db33
    MOV EAX,dword ptr [ESP + 0x124]     ; 0056db16
    MOV dword ptr [ESI],EAX             ; 0056db1d
    MOV EAX,dword ptr [ESP + 0x128]     ; 0056db1f
    MOV dword ptr [ESI + 0x4],EAX       ; 0056db26
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0056db29
    MOV dword ptr [ESI + 0x8],EAX       ; 0056db30
    LEA EAX,[EBX + 0x2f4]               ; 0056db33
        ;   Label: LAB_0056db33
    FLD float ptr [0x005d65df]          ; 0056db39 | s_s_333_CTrigger_005d65de+1
    FLD float ptr [EAX]                 ; 0056db3f
    FMUL ST1                            ; 0056db41
    FLD float ptr [EAX + 0x4]           ; 0056db43
    FMUL ST2                            ; 0056db46
    FLD float ptr [EAX + 0x8]           ; 0056db48
    FMULP ST3                           ; 0056db4b
    FXCH                                ; 0056db4d
    FSTP float ptr [EAX]                ; 0056db4f
    FSTP float ptr [EAX + 0x4]          ; 0056db51
    FSTP float ptr [EAX + 0x8]          ; 0056db54
    LEA EAX,[EBX + 0x20]                ; 0056db57
        ;   Label: LAB_0056db57
    LEA EDI,[ESP + 0xdc]                ; 0056db5a
    LEA ESI,[ESP + 0x1c0]               ; 0056db61
    FLD float ptr [EAX]                 ; 0056db68
    FLD float ptr [EAX + 0x4]           ; 0056db6a
    FLD float ptr [EAX + 0x8]           ; 0056db6d
    FXCH ST2                            ; 0056db70
    FSUB float ptr [ESP + 0x124]        ; 0056db72
    FXCH                                ; 0056db79
    FSUB float ptr [ESP + 0x128]        ; 0056db7b
    FXCH ST2                            ; 0056db82
    FSUB float ptr [ESP + 0x12c]        ; 0056db84
    FXCH                                ; 0056db8b
    FSTP float ptr [ESP + 0x1c0]        ; 0056db8d
    FXCH                                ; 0056db94
    FSTP float ptr [ESP + 0x1c4]        ; 0056db96
    FSTP float ptr [ESP + 0x1c8]        ; 0056db9d
    MOVSD ES:EDI,ESI                    ; 0056dba4
    MOVSD ES:EDI,ESI                    ; 0056dba5
    MOVSD ES:EDI,ESI                    ; 0056dba6
    FLD1                                ; 0056dba7
    FLD float ptr [ESP + 0xdc]          ; 0056dba9
    FXCH                                ; 0056dbb0
    FDIV float ptr [EBP + 0x18]         ; 0056dbb2
    FXCH                                ; 0056dbb5
    FMUL ST1                            ; 0056dbb7
    FLD float ptr [ESP + 0xe0]          ; 0056dbb9
    FMUL ST2                            ; 0056dbc0
    FLD float ptr [ESP + 0xe4]          ; 0056dbc2
    FMULP ST3                           ; 0056dbc9
    LEA EDX,[EBX + 0x2e8]               ; 0056dbcb
    LEA EAX,[ESP + 0x1a8]               ; 0056dbd1
    LEA EDI,[ESP + 0x1a8]               ; 0056dbd8
    LEA ESI,[ESP + 0xf4]                ; 0056dbdf
    FXCH                                ; 0056dbe6
    FSTP float ptr [ESP + 0xf4]         ; 0056dbe8
    FSTP float ptr [ESP + 0xf8]         ; 0056dbef
    FSTP float ptr [ESP + 0xfc]         ; 0056dbf6
    MOVSD ES:EDI,ESI                    ; 0056dbfd
    MOVSD ES:EDI,ESI                    ; 0056dbfe
    MOVSD ES:EDI,ESI                    ; 0056dbff
    CMP EDX,EAX                         ; 0056dc00
    JZ 0x0056dc21                       ; 0056dc02
        ;   XREF to: 0056dc21 (CONDITIONAL_JUMP)  ; LAB_0056dc21
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0056dc04
    MOV dword ptr [EDX],EAX             ; 0056dc0b
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0056dc0d
    MOV dword ptr [EDX + 0x4],EAX       ; 0056dc14
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0056dc17
    MOV dword ptr [EDX + 0x8],EAX       ; 0056dc1e
    LEA EAX,[EBX + 0x30]                ; 0056dc21
        ;   Label: LAB_0056dc21
    PUSH EAX                            ; 0056dc24
    PUSH 0x2cfd900                      ; 0056dc25
    MOV dword ptr [ESP + 0x250],EAX     ; 0056dc2a
    LEA EAX,[ESP + 0x18]                ; 0056dc31
    PUSH EAX                            ; 0056dc35
    CALL core_xform.cpp_FUN_00583940    ; 0056dc36
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 0056dc3b
    LEA EAX,[ESP + 0xe8]                ; 0056dc3e
    PUSH EAX                            ; 0056dc45
    PUSH 0x2cfd900                      ; 0056dc46
    LEA EAX,[ESP + 0x78]                ; 0056dc4b
    PUSH EAX                            ; 0056dc4f
    CALL core_xform.cpp_FUN_00583940    ; 0056dc50
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 0056dc55
    LEA EAX,[ESP + 0x10]                ; 0056dc58
    PUSH EAX                            ; 0056dc5c
    LEA EAX,[ESP + 0x74]                ; 0056dc5d
    PUSH EAX                            ; 0056dc61
    LEA ESI,[ESP + 0xa8]                ; 0056dc62
    LEA EDI,[ESP + 0x48]                ; 0056dc69
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0056dc6d
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 0056dc72
    LEA ESI,[ESP + 0xa8]                ; 0056dc77
    ADD ESP,0x8                         ; 0056dc7e
    LEA EAX,[ESP + 0x40]                ; 0056dc81
    MOVSD.REP ES:EDI,ESI                ; 0056dc85
    PUSH EAX                            ; 0056dc87
    LEA ESI,[ESP + 0x20c]               ; 0056dc88
    LEA EDI,[ESP + 0x158]               ; 0056dc8f
    CALL core_xform.cpp_FUN_00583b10    ; 0056dc96
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583b10()
    LEA ESI,[ESP + 0x20c]               ; 0056dc9b
    ADD ESP,0x4                         ; 0056dca2
    LEA EAX,[ESP + 0x154]               ; 0056dca5
    MOV ECX,dword ptr [ESP + 0x248]     ; 0056dcac
    MOVSD ES:EDI,ESI                    ; 0056dcb3
    MOVSD ES:EDI,ESI                    ; 0056dcb4
    MOVSD ES:EDI,ESI                    ; 0056dcb5
    CMP EAX,ECX                         ; 0056dcb6
    JZ 0x0056dcd7                       ; 0056dcb8
        ;   XREF to: 0056dcd7 (CONDITIONAL_JUMP)  ; LAB_0056dcd7
    MOV EAX,dword ptr [ESP + 0x154]     ; 0056dcba
    MOV dword ptr [ECX],EAX             ; 0056dcc1
    MOV EAX,dword ptr [ESP + 0x158]     ; 0056dcc3
    MOV dword ptr [ECX + 0x4],EAX       ; 0056dcca
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0056dccd
    MOV dword ptr [ECX + 0x8],EAX       ; 0056dcd4
    PUSH EBX                            ; 0056dcd7
        ;   Label: LAB_0056dcd7
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0056dcd8
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056dcdd
    MOV ESP,EBP                         ; 0056dce0
        ;   Label: LAB_0056dce0
    POP EBP                             ; 0056dce2
    POP EDI                             ; 0056dce3
    POP ESI                             ; 0056dce4
    POP EBX                             ; 0056dce5
    RET                                 ; 0056dce6
    ADD EBX,0x2d4                       ; 0056dce7
        ;   Label: LAB_0056dce7
    PUSH 0x42c80000                     ; 0056dced
    PUSH EBX                            ; 0056dcf2
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370 ; 0056dcf3
        ;   XREF to: 004d2370 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370()
    ADD ESP,0x8                         ; 0056dcf8
    TEST EAX,EAX                        ; 0056dcfb
    JNZ 0x0056dce0                      ; 0056dcfd
        ;   XREF to: 0056dce0 (CONDITIONAL_JUMP)  ; LAB_0056dce0
    MOV EAX,dword ptr [EBX]             ; 0056dcff
    MOV dword ptr [ESI],EAX             ; 0056dd01
    MOV EAX,dword ptr [EBX + 0x4]       ; 0056dd03
    MOV dword ptr [ESI + 0x4],EAX       ; 0056dd06
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056dd09
    MOV dword ptr [ESI + 0x8],EAX       ; 0056dd0c
    MOV ESP,EBP                         ; 0056dd0f
    POP EBP                             ; 0056dd11
    POP EDI                             ; 0056dd12
    POP ESI                             ; 0056dd13
    POP EBX                             ; 0056dd14
    RET                                 ; 0056dd15
    TEST EDI,EDI                        ; 0056dd16
        ;   Label: LAB_0056dd16
    JNZ 0x0056db33                      ; 0056dd18
        ;   XREF to: 0056db33 (CONDITIONAL_JUMP)  ; LAB_0056db33
    JMP 0x0056db57                      ; 0056dd1e
        ;   XREF to: 0056db57 (UNCONDITIONAL_JUMP)  ; LAB_0056db57

