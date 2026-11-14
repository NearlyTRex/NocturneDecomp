; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_process_FUN_0059a370(CTrash *this_ptr,float delta_time)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005f8048
;   undefined4 DAT_005f804c
;   undefined4 DAT_005f8050
;   undefined4 DAT_005f8054
;   undefined4 DAT_005f8058
;   undefined4 DAT_005f8060
;   undefined4 DAT_005f8068
;   undefined4 s_s_333_CTrigger_005f806f+1
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0
;   core_setcolid.cpp_FUN_005562c0
;   core_setcolid.cpp_FUN_00558450
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a370
        ;   Label: core_trash.cpp_CTrash_process_FUN_0059a370
    PUSH ESI                            ; 0059a371
    PUSH EDI                            ; 0059a372
    PUSH EBP                            ; 0059a373
    MOV EBP,ESP                         ; 0059a374
    SUB ESP,0x260                       ; 0059a376
    AND ESP,0xfffffff8                  ; 0059a37c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059a37f
    LEA ESI,[EBX + 0x20]                ; 0059a382
    PUSH 0x42c80000                     ; 0059a385
    PUSH ESI                            ; 0059a38a
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0 ; 0059a38b
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0059a390
    TEST EAX,EAX                        ; 0059a393
    JZ 0x0059acf7                       ; 0059a395
        ;   XREF to: 0059acf7 (CONDITIONAL_JUMP)  ; LAB_0059acf7
    PUSH 0x3d4ccccd                     ; 0059a39b
    PUSH 0xbd4ccccd                     ; 0059a3a0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0059a3a5
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x264],EAX     ; 0059a3aa
    FLD float ptr [ESP + 0x264]         ; 0059a3b1
    ADD ESP,0x8                         ; 0059a3b8
    LEA ESI,[EBX + 0x300]               ; 0059a3bb
    PUSH 0x3d4ccccd                     ; 0059a3c1
    FADD float ptr [ESI]                ; 0059a3c6
    PUSH 0xbd4ccccd                     ; 0059a3c8
    FSTP float ptr [ESI]                ; 0059a3cd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0059a3cf
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x264],EAX     ; 0059a3d4
    FLD float ptr [ESP + 0x264]         ; 0059a3db
    ADD ESP,0x8                         ; 0059a3e2
    LEA ESI,[EBX + 0x304]               ; 0059a3e5
    PUSH 0x3d4ccccd                     ; 0059a3eb
    FADD float ptr [ESI]                ; 0059a3f0
    PUSH 0xbd4ccccd                     ; 0059a3f2
    FSTP float ptr [ESI]                ; 0059a3f7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0059a3f9
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV EDX,0x40800000                  ; 0059a3fe
    LEA ESI,[EBX + 0x308]               ; 0059a403
    MOV dword ptr [ESP + 0x264],EAX     ; 0059a409
    XOR ECX,ECX                         ; 0059a410
    FLD float ptr [ESP + 0x264]         ; 0059a412
    LEA EAX,[ESP + 0x108]               ; 0059a419
    FADD float ptr [ESI]                ; 0059a420
    ADD ESP,0x8                         ; 0059a422
    FSTP float ptr [ESI]                ; 0059a425
    MOV dword ptr [ESP + 0x100],EDX     ; 0059a427
    MOV EDX,dword ptr [0x00622c18]      ; 0059a42e | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x104],ECX     ; 0059a434
    ADD EDX,0x15ac70                    ; 0059a43b
    MOV dword ptr [ESP + 0x108],ECX     ; 0059a441
    CMP EDX,EAX                         ; 0059a448
    JZ 0x0059a466                       ; 0059a44a
        ;   XREF to: 0059a466 (CONDITIONAL_JUMP)  ; LAB_0059a466
    MOV dword ptr [EDX],0x40800000      ; 0059a44c
    MOV EAX,dword ptr [ESP + 0x104]     ; 0059a452
    MOV dword ptr [EDX + 0x4],EAX       ; 0059a459
    MOV EAX,dword ptr [ESP + 0x108]     ; 0059a45c
    MOV dword ptr [EDX + 0x8],EAX       ; 0059a463
    FLD float ptr [EBX + 0x314]         ; 0059a466
        ;   Label: LAB_0059a466
    FSUB float ptr [EBP + 0x18]         ; 0059a46c
    FST float ptr [EBX + 0x314]         ; 0059a46f
    FLDZ                                ; 0059a475
    FCOMPP                              ; 0059a477
    FNSTSW AX                           ; 0059a479
    SAHF                                ; 0059a47b
    JC 0x0059a550                       ; 0059a47c
        ;   XREF to: 0059a550 (CONDITIONAL_JUMP)  ; LAB_0059a550
    MOV EAX,[0x00622c18]                ; 0059a482 | g_CDemonSetPtr
    LEA EDX,[EBX + 0x318]               ; 0059a487
    ADD EAX,0x15ac70                    ; 0059a48d
    CMP EDX,EAX                         ; 0059a492
    JZ 0x0059a4a6                       ; 0059a494
        ;   XREF to: 0059a4a6 (CONDITIONAL_JUMP)  ; LAB_0059a4a6
    MOV ECX,dword ptr [EAX]             ; 0059a496
    MOV dword ptr [EDX],ECX             ; 0059a498
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059a49a
    MOV dword ptr [EDX + 0x4],ECX       ; 0059a49d
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059a4a0
    MOV dword ptr [EDX + 0x8],ECX       ; 0059a4a3
    PUSH 0x41200000                     ; 0059a4a6
        ;   Label: LAB_0059a4a6
    PUSH 0xc1200000                     ; 0059a4ab
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0059a4b0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x264],EAX     ; 0059a4b5
    FLD float ptr [ESP + 0x264]         ; 0059a4bc
    ADD ESP,0x8                         ; 0059a4c3
    PUSH 0x41c80000                     ; 0059a4c6
    FADD float ptr [EBX + 0x318]        ; 0059a4cb
    PUSH 0x41700000                     ; 0059a4d1
    FSTP float ptr [EBX + 0x318]        ; 0059a4d6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0059a4dc
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x264],EAX     ; 0059a4e1
    FLD float ptr [ESP + 0x264]         ; 0059a4e8
    ADD ESP,0x8                         ; 0059a4ef
    PUSH 0x41200000                     ; 0059a4f2
    FADD float ptr [EBX + 0x31c]        ; 0059a4f7
    PUSH 0xc1200000                     ; 0059a4fd
    FSTP float ptr [EBX + 0x31c]        ; 0059a502
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0059a508
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x264],EAX     ; 0059a50d
    FLD float ptr [ESP + 0x264]         ; 0059a514
    ADD ESP,0x8                         ; 0059a51b
    PUSH 0x41a00000                     ; 0059a51e
    FADD float ptr [EBX + 0x320]        ; 0059a523
    PUSH 0x40c00000                     ; 0059a529
    FSTP float ptr [EBX + 0x320]        ; 0059a52e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0059a534
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x264],EAX     ; 0059a539
    MOV EAX,dword ptr [ESP + 0x264]     ; 0059a540
    MOV dword ptr [EBX + 0x314],EAX     ; 0059a547
    ADD ESP,0x8                         ; 0059a54d
    LEA EDI,[ESP + 0x130]               ; 0059a550
        ;   Label: LAB_0059a550
    MOV EAX,[0x00622c18]                ; 0059a557 | g_CDemonSetPtr
    LEA ESI,[ESP + 0x19c]               ; 0059a55c
    LEA EDX,[EBX + 0x318]               ; 0059a563
    FLD float ptr [EAX + 0x15ac70]      ; 0059a569
    FLD float ptr [EAX + 0x15ac74]      ; 0059a56f
    FLD float ptr [EAX + 0x15ac78]      ; 0059a575
    FXCH ST2                            ; 0059a57b
    FSUB float ptr [EDX]                ; 0059a57d
    FXCH                                ; 0059a57f
    FSUB float ptr [EDX + 0x4]          ; 0059a581
    FXCH ST2                            ; 0059a584
    FSUB float ptr [EDX + 0x8]          ; 0059a586
    FXCH                                ; 0059a589
    FSTP float ptr [ESP + 0x19c]        ; 0059a58b
    FXCH                                ; 0059a592
    FSTP float ptr [ESP + 0x1a0]        ; 0059a594
    FSTP float ptr [ESP + 0x1a4]        ; 0059a59b
    MOVSD ES:EDI,ESI                    ; 0059a5a2
    MOVSD ES:EDI,ESI                    ; 0059a5a3
    MOVSD ES:EDI,ESI                    ; 0059a5a4
    FLD float ptr [0x005f8048]          ; 0059a5a5 | DAT_005f8048
    FLD float ptr [ESP + 0x130]         ; 0059a5ab
    FMUL ST1                            ; 0059a5b2
    FLD float ptr [ESP + 0x134]         ; 0059a5b4
    FMUL ST2                            ; 0059a5bb
    FLD float ptr [ESP + 0x138]         ; 0059a5bd
    FMULP ST3                           ; 0059a5c4
    LEA EDI,[ESP + 0x118]               ; 0059a5c6
    LEA ESI,[ESP + 0x1fc]               ; 0059a5cd
    FXCH                                ; 0059a5d4
    FSTP float ptr [ESP + 0x1fc]        ; 0059a5d6
    FSTP float ptr [ESP + 0x200]        ; 0059a5dd
    FSTP float ptr [ESP + 0x204]        ; 0059a5e4
    MOVSD ES:EDI,ESI                    ; 0059a5eb
    MOVSD ES:EDI,ESI                    ; 0059a5ec
    MOVSD ES:EDI,ESI                    ; 0059a5ed
    LEA EAX,[EBX + 0x300]               ; 0059a5ee
    FLD float ptr [EDX]                 ; 0059a5f4
    FLD float ptr [EDX + 0x4]           ; 0059a5f6
    FLD float ptr [EDX + 0x8]           ; 0059a5f9
    LEA EDI,[ESP + 0x214]               ; 0059a5fc
    LEA ESI,[ESP + 0x178]               ; 0059a603
    FXCH ST2                            ; 0059a60a
    FADD float ptr [ESP + 0x118]        ; 0059a60c
    FXCH                                ; 0059a613
    FADD float ptr [ESP + 0x11c]        ; 0059a615
    FXCH ST2                            ; 0059a61c
    FADD float ptr [ESP + 0x120]        ; 0059a61e
    FXCH                                ; 0059a625
    FSTP float ptr [EDX]                ; 0059a627
    FXCH                                ; 0059a629
    FSTP float ptr [EDX + 0x4]          ; 0059a62b
    FSTP float ptr [EDX + 0x8]          ; 0059a62e
    FLD float ptr [EDX]                 ; 0059a631
    FLD float ptr [EDX + 0x4]           ; 0059a633
    FLD float ptr [EDX + 0x8]           ; 0059a636
    FXCH ST2                            ; 0059a639
    FSUB float ptr [EAX]                ; 0059a63b
    FXCH                                ; 0059a63d
    FSUB float ptr [EAX + 0x4]          ; 0059a63f
    FXCH ST2                            ; 0059a642
    FSUB float ptr [EAX + 0x8]          ; 0059a644
    FXCH                                ; 0059a647
    FSTP float ptr [ESP + 0x178]        ; 0059a649
    FXCH                                ; 0059a650
    FSTP float ptr [ESP + 0x17c]        ; 0059a652
    FSTP float ptr [ESP + 0x180]        ; 0059a659
    MOVSD ES:EDI,ESI                    ; 0059a660
    MOVSD ES:EDI,ESI                    ; 0059a661
    MOVSD ES:EDI,ESI                    ; 0059a662
    FLD float ptr [0x005f804c]          ; 0059a663 | DAT_005f804c
    FLD float ptr [ESP + 0x214]         ; 0059a669
    FMUL ST1                            ; 0059a670
    FLD float ptr [ESP + 0x218]         ; 0059a672
    FMUL ST2                            ; 0059a679
    FLD float ptr [ESP + 0x21c]         ; 0059a67b
    FMULP ST3                           ; 0059a682
    LEA EDI,[ESP + 0x1b4]               ; 0059a684
    LEA ESI,[ESP + 0x1e4]               ; 0059a68b
    FXCH                                ; 0059a692
    FSTP float ptr [ESP + 0x1e4]        ; 0059a694
    FSTP float ptr [ESP + 0x1e8]        ; 0059a69b
    FSTP float ptr [ESP + 0x1ec]        ; 0059a6a2
    MOVSD ES:EDI,ESI                    ; 0059a6a9
    MOVSD ES:EDI,ESI                    ; 0059a6aa
    MOVSD ES:EDI,ESI                    ; 0059a6ab
    FLD float ptr [EAX]                 ; 0059a6ac
    FLD float ptr [EAX + 0x4]           ; 0059a6ae
    FLD float ptr [EAX + 0x8]           ; 0059a6b1
    LEA EDI,[ESP + 0x124]               ; 0059a6b4
    FXCH ST2                            ; 0059a6bb
    FADD float ptr [ESP + 0x1b4]        ; 0059a6bd
    FXCH                                ; 0059a6c4
    FADD float ptr [ESP + 0x1b8]        ; 0059a6c6
    FXCH ST2                            ; 0059a6cd
    FADD float ptr [ESP + 0x1bc]        ; 0059a6cf
    FXCH                                ; 0059a6d6
    FSTP float ptr [EAX]                ; 0059a6d8
    FXCH                                ; 0059a6da
    FSTP float ptr [EAX + 0x4]          ; 0059a6dc
    FSTP float ptr [EAX + 0x8]          ; 0059a6df
    LEA ESI,[EBX + 0x20]                ; 0059a6e2
    MOVSD ES:EDI,ESI                    ; 0059a6e5
    MOVSD ES:EDI,ESI                    ; 0059a6e6
    MOVSD ES:EDI,ESI                    ; 0059a6e7
    FLD float ptr [EBX + 0x324]         ; 0059a6e8
    FLD float ptr [EAX]                 ; 0059a6ee
    FLD float ptr [EAX + 0x4]           ; 0059a6f0
    FXCH ST2                            ; 0059a6f3
    FCHS                                ; 0059a6f5
    FSTP float ptr [ESP + 0x258]        ; 0059a6f7
    MOV EDX,dword ptr [ESP + 0x258]     ; 0059a6fe
    FLD float ptr [EAX + 0x8]           ; 0059a705
    MOV dword ptr [ESP + 0x194],EDX     ; 0059a708
    LEA EDX,[EBX + 0x2e8]               ; 0059a70f
    XOR EDI,EDI                         ; 0059a715
    MOV dword ptr [ESP + 0x250],EDX     ; 0059a717
    MOV dword ptr [ESP + 0x190],EDI     ; 0059a71e
    MOV ESI,dword ptr [ESP + 0x250]     ; 0059a725
    MOV dword ptr [ESP + 0x198],EDI     ; 0059a72c
    LEA EDI,[ESP + 0x220]               ; 0059a733
    FXCH                                ; 0059a73a
    FSUB float ptr [ESI]                ; 0059a73c
    FXCH ST2                            ; 0059a73e
    FSUB float ptr [ESI + 0x4]          ; 0059a740
    FXCH                                ; 0059a743
    FSUB float ptr [ESI + 0x8]          ; 0059a745
    FXCH ST2                            ; 0059a748
    FSTP float ptr [ESP + 0x184]        ; 0059a74a
    FSTP float ptr [ESP + 0x188]        ; 0059a751
    LEA ESI,[ESP + 0x184]               ; 0059a758
    FSTP float ptr [ESP + 0x18c]        ; 0059a75f
    MOVSD ES:EDI,ESI                    ; 0059a766
    MOVSD ES:EDI,ESI                    ; 0059a767
    MOVSD ES:EDI,ESI                    ; 0059a768
    LEA EDX,[EBX + 0x30c]               ; 0059a769
    FLD float ptr [ESP + 0x220]         ; 0059a76f
    FMUL float ptr [EDX]                ; 0059a776
    FLD float ptr [ESP + 0x224]         ; 0059a778
    FMUL float ptr [EDX]                ; 0059a77f
    FLD float ptr [ESP + 0x228]         ; 0059a781
    FMUL float ptr [EDX]                ; 0059a788
    PUSH EAX                            ; 0059a78a
    FLD float ptr [ESP + 0x25c]         ; 0059a78b
    LEA EDI,[ESP + 0x170]               ; 0059a792
    LEA ESI,[ESP + 0x1f4]               ; 0059a799
    FXCH ST3                            ; 0059a7a0
    FSTP float ptr [ESP + 0x1f4]        ; 0059a7a2
    FXCH                                ; 0059a7a9
    FSTP float ptr [ESP + 0x1f8]        ; 0059a7ab
    FSTP float ptr [ESP + 0x1fc]        ; 0059a7b2
    MOVSD ES:EDI,ESI                    ; 0059a7b9
    MOVSD ES:EDI,ESI                    ; 0059a7ba
    MOVSD ES:EDI,ESI                    ; 0059a7bb
    PUSH EBX                            ; 0059a7bc
    MOV EDX,dword ptr [ESP + 0x174]     ; 0059a7bd
    LEA ESI,[ESP + 0x240]               ; 0059a7c4
    LEA EDI,[ESP + 0x114]               ; 0059a7cb
    FADD float ptr [ESP + 0x178]        ; 0059a7d2
    MOV dword ptr [ESP + 0x198],EDX     ; 0059a7d9
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0059a7e0
    FSTP float ptr [ESP + 0x19c]        ; 0059a7e7
    MOV dword ptr [ESP + 0x1a0],EDX     ; 0059a7ee
    CALL core_actor.cpp_FUN_00408b00    ; 0059a7f5
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x240]               ; 0059a7fa
    ADD ESP,0x8                         ; 0059a801
    MOVSD ES:EDI,ESI                    ; 0059a804
    MOVSD ES:EDI,ESI                    ; 0059a805
    MOVSD ES:EDI,ESI                    ; 0059a806
    FLD float ptr [0x005f8050]          ; 0059a807 | DAT_005f8050
    FLD float ptr [ESP + 0x10c]         ; 0059a80d
    FMUL ST1                            ; 0059a814
    FLD float ptr [ESP + 0x110]         ; 0059a816
    FMUL ST2                            ; 0059a81d
    FLD float ptr [ESP + 0x114]         ; 0059a81f
    FMULP ST3                           ; 0059a826
    LEA EDX,[EBX + 0x2f4]               ; 0059a828
    LEA EDI,[ESP + 0x22c]               ; 0059a82e
    LEA ESI,[ESP + 0x1d8]               ; 0059a835
    FXCH                                ; 0059a83c
    FSTP float ptr [ESP + 0x1d8]        ; 0059a83e
    FSTP float ptr [ESP + 0x1dc]        ; 0059a845
    FSTP float ptr [ESP + 0x1e0]        ; 0059a84c
    MOVSD ES:EDI,ESI                    ; 0059a853
    MOVSD ES:EDI,ESI                    ; 0059a854
    MOVSD ES:EDI,ESI                    ; 0059a855
    FLD float ptr [EBP + 0x18]          ; 0059a856
    FLD float ptr [ESP + 0x16c]         ; 0059a859
    FMUL ST1                            ; 0059a860
    FLD float ptr [ESP + 0x194]         ; 0059a862
    FMUL ST2                            ; 0059a869
    FLD float ptr [ESP + 0x174]         ; 0059a86b
    FMULP ST3                           ; 0059a872
    FLD float ptr [0x005f8054]          ; 0059a874 | DAT_005f8054
    FLD float ptr [EDX]                 ; 0059a87a
    FMUL ST1                            ; 0059a87c
    FLD float ptr [EDX + 0x4]           ; 0059a87e
    FMUL ST2                            ; 0059a881
    FLD float ptr [EDX + 0x8]           ; 0059a883
    FMULP ST3                           ; 0059a886
    LEA EDI,[ESP + 0x148]               ; 0059a888
    LEA ESI,[ESP + 0x160]               ; 0059a88f
    MOV EAX,dword ptr [ESP + 0x250]     ; 0059a896
    FXCH ST4                            ; 0059a89d
    FSTP float ptr [ESP + 0x160]        ; 0059a89f
    FXCH ST2                            ; 0059a8a6
    FSTP float ptr [ESP + 0x164]        ; 0059a8a8
    FXCH ST3                            ; 0059a8af
    FSTP float ptr [ESP + 0x168]        ; 0059a8b1
    FSTP float ptr [EDX]                ; 0059a8b8
    FSTP float ptr [EDX + 0x4]          ; 0059a8ba
    FSTP float ptr [EDX + 0x8]          ; 0059a8bd
    FLD float ptr [EDX]                 ; 0059a8c0
    FLD float ptr [EDX + 0x4]           ; 0059a8c2
    FLD float ptr [EDX + 0x8]           ; 0059a8c5
    FXCH ST2                            ; 0059a8c8
    FADD float ptr [ESP + 0x22c]        ; 0059a8ca
    FXCH                                ; 0059a8d1
    FADD float ptr [ESP + 0x230]        ; 0059a8d3
    FXCH ST2                            ; 0059a8da
    FADD float ptr [ESP + 0x234]        ; 0059a8dc
    FXCH                                ; 0059a8e3
    FSTP float ptr [EDX]                ; 0059a8e5
    FXCH                                ; 0059a8e7
    FSTP float ptr [EDX + 0x4]          ; 0059a8e9
    FSTP float ptr [EDX + 0x8]          ; 0059a8ec
    MOVSD ES:EDI,ESI                    ; 0059a8ef
    MOVSD ES:EDI,ESI                    ; 0059a8f0
    MOVSD ES:EDI,ESI                    ; 0059a8f1
    FLD float ptr [EAX]                 ; 0059a8f2
    FLD float ptr [EAX + 0x4]           ; 0059a8f4
    FLD float ptr [EAX + 0x8]           ; 0059a8f7
    FXCH ST2                            ; 0059a8fa
    FADD float ptr [ESP + 0x148]        ; 0059a8fc
    FXCH                                ; 0059a903
    FADD float ptr [ESP + 0x14c]        ; 0059a905
    FXCH ST2                            ; 0059a90c
    FADD float ptr [ESP + 0x150]        ; 0059a90e
    FXCH                                ; 0059a915
    FSTP float ptr [EAX]                ; 0059a917
    FXCH                                ; 0059a919
    FSTP float ptr [EAX + 0x4]          ; 0059a91b
    FSTP float ptr [EAX + 0x8]          ; 0059a91e
    FLD float ptr [EDX + 0x4]           ; 0059a921
    FMUL ST0                            ; 0059a924
    FLD float ptr [EDX]                 ; 0059a926
    FMUL ST0                            ; 0059a928
    FADDP                               ; 0059a92a
    FLD float ptr [EDX + 0x8]           ; 0059a92c
    FMUL ST0                            ; 0059a92f
    FADDP                               ; 0059a931
    FSQRT                               ; 0059a933
    FMUL float ptr [0x005f8058]         ; 0059a935 | DAT_005f8058
    FST float ptr [ESP + 0x8]           ; 0059a93b
    FLD1                                ; 0059a93f
    FCOMPP                              ; 0059a941
    FNSTSW AX                           ; 0059a943
    SAHF                                ; 0059a945
    JNC 0x0059a96a                      ; 0059a946
        ;   XREF to: 0059a96a (CONDITIONAL_JUMP)  ; LAB_0059a96a
    FLD1                                ; 0059a948
    FLD float ptr [EDX]                 ; 0059a94a
    FXCH                                ; 0059a94c
    FDIV float ptr [ESP + 0x8]          ; 0059a94e
    FXCH                                ; 0059a952
    FMUL ST1                            ; 0059a954
    FLD float ptr [EDX + 0x4]           ; 0059a956
    FMUL ST2                            ; 0059a959
    FLD float ptr [EDX + 0x8]           ; 0059a95b
    FMULP ST3                           ; 0059a95e
    FXCH                                ; 0059a960
    FSTP float ptr [EDX]                ; 0059a962
    FSTP float ptr [EDX + 0x4]          ; 0059a964
    FSTP float ptr [EDX + 0x8]          ; 0059a967
    LEA EAX,[EBX + 0x2e8]               ; 0059a96a
        ;   Label: LAB_0059a96a
    FLD float ptr [EBP + 0x18]          ; 0059a970
    FLD float ptr [EAX]                 ; 0059a973
    FMUL ST1                            ; 0059a975
    FLD float ptr [EAX + 0x4]           ; 0059a977
    FMUL ST2                            ; 0059a97a
    FLD float ptr [EAX + 0x8]           ; 0059a97c
    FMUL ST3                            ; 0059a97f
    LEA EDI,[ESP + 0x13c]               ; 0059a981
    LEA ESI,[ESP + 0xd0]                ; 0059a988
    LEA EAX,[EBX + 0x2f4]               ; 0059a98f
    FXCH ST2                            ; 0059a995
    FSTP float ptr [ESP + 0xd0]         ; 0059a997
    FSTP float ptr [ESP + 0xd4]         ; 0059a99e
    FSTP float ptr [ESP + 0xd8]         ; 0059a9a5
    MOVSD ES:EDI,ESI                    ; 0059a9ac
    MOVSD ES:EDI,ESI                    ; 0059a9ad
    MOVSD ES:EDI,ESI                    ; 0059a9ae
    FLD float ptr [EAX]                 ; 0059a9af
    FMUL ST1                            ; 0059a9b1
    FLD float ptr [EAX + 0x4]           ; 0059a9b3
    FMUL ST2                            ; 0059a9b6
    FLD float ptr [EAX + 0x8]           ; 0059a9b8
    FMULP ST3                           ; 0059a9bb
    LEA EDI,[ESP + 0xe8]                ; 0059a9bd
    LEA ESI,[ESP + 0x1cc]               ; 0059a9c4
    FXCH                                ; 0059a9cb
    FSTP float ptr [ESP + 0x1cc]        ; 0059a9cd
    FSTP float ptr [ESP + 0x1d0]        ; 0059a9d4
    FSTP float ptr [ESP + 0x1d4]        ; 0059a9db
    MOVSD ES:EDI,ESI                    ; 0059a9e2
    MOVSD ES:EDI,ESI                    ; 0059a9e3
    MOVSD ES:EDI,ESI                    ; 0059a9e4
    PUSH dword ptr [EBX + 0x2e4]        ; 0059a9e5
    PUSH dword ptr [EBX + 0x2e0]        ; 0059a9eb
    PUSH dword ptr [EBX + 0x310]        ; 0059a9f1
    PUSH dword ptr [ESP + 0x150]        ; 0059a9f7
    PUSH dword ptr [ESP + 0x14c]        ; 0059a9fe
    PUSH dword ptr [EBX + 0x28]         ; 0059aa05
    MOV ECX,dword ptr [0x00622c18]      ; 0059aa08 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 0059aa0e
    PUSH ECX                            ; 0059aa11
    CALL core_setcolid.cpp_FUN_00558450 ; 0059aa12
        ;   XREF to: 00558450 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00558450()
    MOV dword ptr [ESP + 0x27c],EAX     ; 0059aa17
    XOR EDI,EDI                         ; 0059aa1e
    FLD float ptr [ESP + 0x27c]         ; 0059aa20
    ADD ESP,0x20                        ; 0059aa27
    FLDZ                                ; 0059aa2a
    FXCH                                ; 0059aa2c
    FST float ptr [ESP + 0xc]           ; 0059aa2e
    FSTP double ptr [ESP]               ; 0059aa32
    FCOMP double ptr [ESP]              ; 0059aa35
    FNSTSW AX                           ; 0059aa38
    SAHF                                ; 0059aa3a
    JA 0x0059aa82                       ; 0059aa3b
        ;   XREF to: 0059aa82 (CONDITIONAL_JUMP)  ; LAB_0059aa82
    FLD1                                ; 0059aa3d
    FCOMP double ptr [ESP]              ; 0059aa3f
    FNSTSW AX                           ; 0059aa42
    SAHF                                ; 0059aa44
    JBE 0x0059aa82                      ; 0059aa45
        ;   XREF to: 0059aa82 (CONDITIONAL_JUMP)  ; LAB_0059aa82
    FLD float ptr [ESP + 0xc]           ; 0059aa47
    FLD float ptr [ESP + 0x13c]         ; 0059aa4b
    FMUL ST1                            ; 0059aa52
    FLD float ptr [ESP + 0x140]         ; 0059aa54
    FMUL ST2                            ; 0059aa5b
    FLD float ptr [ESP + 0x144]         ; 0059aa5d
    FMULP ST3                           ; 0059aa64
    MOV EDI,0x1                         ; 0059aa66
    FSTP float ptr [ESP + 0x140]        ; 0059aa6b
    FXCH                                ; 0059aa72
    FSTP float ptr [ESP + 0x144]        ; 0059aa74
    FSTP float ptr [ESP + 0x13c]        ; 0059aa7b
    LEA ESI,[EBX + 0x20]                ; 0059aa82
        ;   Label: LAB_0059aa82
    FLD float ptr [ESI]                 ; 0059aa85
    FLD float ptr [ESI + 0x4]           ; 0059aa87
    FLD float ptr [ESI + 0x8]           ; 0059aa8a
    FXCH ST2                            ; 0059aa8d
    FADD float ptr [ESP + 0x13c]        ; 0059aa8f
    FXCH                                ; 0059aa96
    FADD float ptr [ESP + 0x140]        ; 0059aa98
    FXCH ST2                            ; 0059aa9f
    FADD float ptr [ESP + 0x144]        ; 0059aaa1
    FXCH                                ; 0059aaa8
    FSTP float ptr [ESI]                ; 0059aaaa
    FXCH                                ; 0059aaac
    FSTP float ptr [ESI + 0x4]          ; 0059aaae
    FSTP float ptr [ESI + 0x8]          ; 0059aab1
    FLD float ptr [EBX + 0x310]         ; 0059aab4
    FMUL double ptr [0x005f8060]        ; 0059aaba | DAT_005f8060
    SUB ESP,0x4                         ; 0059aac0
    FSTP float ptr [ESP]                ; 0059aac3
    PUSH ESI                            ; 0059aac6
    MOV EAX,[0x00622c18]                ; 0059aac7 | g_CDemonSetPtr
    PUSH EAX                            ; 0059aacc
    CALL core_setcolid.cpp_FUN_005562c0 ; 0059aacd
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    MOV dword ptr [ESP + 0x268],EAX     ; 0059aad2
    FLD float ptr [ESP + 0x268]         ; 0059aad9
    ADD ESP,0xc                         ; 0059aae0
    FLD float ptr [EBX + 0x24]          ; 0059aae3
    FXCH                                ; 0059aae6
    FSTP float ptr [ESP + 0x244]        ; 0059aae8
    FCOMP float ptr [ESP + 0x244]       ; 0059aaef
    FNSTSW AX                           ; 0059aaf6
    SAHF                                ; 0059aaf8
    JNC 0x0059ad26                      ; 0059aaf9
        ;   XREF to: 0059ad26 (CONDITIONAL_JUMP)  ; LAB_0059ad26
    FLD float ptr [EBX + 0x310]         ; 0059aaff
    FMUL double ptr [0x005f8068]        ; 0059ab05 | DAT_005f8068
    MOV EAX,dword ptr [ESP + 0x244]     ; 0059ab0b
    FADD float ptr [ESP + 0x128]        ; 0059ab12
    MOV dword ptr [EBX + 0x24],EAX      ; 0059ab19
    FLD float ptr [EBX + 0x24]          ; 0059ab1c
    FCOMPP                              ; 0059ab1f
    FNSTSW AX                           ; 0059ab21
    SAHF                                ; 0059ab23
    JBE 0x0059ab43                      ; 0059ab24
        ;   XREF to: 0059ab43 (CONDITIONAL_JUMP)  ; LAB_0059ab43
    MOV EAX,dword ptr [ESP + 0x124]     ; 0059ab26
    MOV dword ptr [ESI],EAX             ; 0059ab2d
    MOV EAX,dword ptr [ESP + 0x128]     ; 0059ab2f
    MOV dword ptr [ESI + 0x4],EAX       ; 0059ab36
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0059ab39
    MOV dword ptr [ESI + 0x8],EAX       ; 0059ab40
    LEA EAX,[EBX + 0x2f4]               ; 0059ab43
        ;   Label: LAB_0059ab43
    FLD float ptr [0x005f8070]          ; 0059ab49 | s_s_333_CTrigger_005f806f+1
    FLD float ptr [EAX]                 ; 0059ab4f
    FMUL ST1                            ; 0059ab51
    FLD float ptr [EAX + 0x4]           ; 0059ab53
    FMUL ST2                            ; 0059ab56
    FLD float ptr [EAX + 0x8]           ; 0059ab58
    FMULP ST3                           ; 0059ab5b
    FXCH                                ; 0059ab5d
    FSTP float ptr [EAX]                ; 0059ab5f
    FSTP float ptr [EAX + 0x4]          ; 0059ab61
    FSTP float ptr [EAX + 0x8]          ; 0059ab64
    LEA EAX,[EBX + 0x20]                ; 0059ab67
        ;   Label: LAB_0059ab67
    LEA EDI,[ESP + 0xdc]                ; 0059ab6a
    LEA ESI,[ESP + 0x1c0]               ; 0059ab71
    FLD float ptr [EAX]                 ; 0059ab78
    FLD float ptr [EAX + 0x4]           ; 0059ab7a
    FLD float ptr [EAX + 0x8]           ; 0059ab7d
    FXCH ST2                            ; 0059ab80
    FSUB float ptr [ESP + 0x124]        ; 0059ab82
    FXCH                                ; 0059ab89
    FSUB float ptr [ESP + 0x128]        ; 0059ab8b
    FXCH ST2                            ; 0059ab92
    FSUB float ptr [ESP + 0x12c]        ; 0059ab94
    FXCH                                ; 0059ab9b
    FSTP float ptr [ESP + 0x1c0]        ; 0059ab9d
    FXCH                                ; 0059aba4
    FSTP float ptr [ESP + 0x1c4]        ; 0059aba6
    FSTP float ptr [ESP + 0x1c8]        ; 0059abad
    MOVSD ES:EDI,ESI                    ; 0059abb4
    MOVSD ES:EDI,ESI                    ; 0059abb5
    MOVSD ES:EDI,ESI                    ; 0059abb6
    FLD1                                ; 0059abb7
    FLD float ptr [ESP + 0xdc]          ; 0059abb9
    FXCH                                ; 0059abc0
    FDIV float ptr [EBP + 0x18]         ; 0059abc2
    FXCH                                ; 0059abc5
    FMUL ST1                            ; 0059abc7
    FLD float ptr [ESP + 0xe0]          ; 0059abc9
    FMUL ST2                            ; 0059abd0
    FLD float ptr [ESP + 0xe4]          ; 0059abd2
    FMULP ST3                           ; 0059abd9
    LEA EDX,[EBX + 0x2e8]               ; 0059abdb
    LEA EAX,[ESP + 0x1a8]               ; 0059abe1
    LEA EDI,[ESP + 0x1a8]               ; 0059abe8
    LEA ESI,[ESP + 0xf4]                ; 0059abef
    FXCH                                ; 0059abf6
    FSTP float ptr [ESP + 0xf4]         ; 0059abf8
    FSTP float ptr [ESP + 0xf8]         ; 0059abff
    FSTP float ptr [ESP + 0xfc]         ; 0059ac06
    MOVSD ES:EDI,ESI                    ; 0059ac0d
    MOVSD ES:EDI,ESI                    ; 0059ac0e
    MOVSD ES:EDI,ESI                    ; 0059ac0f
    CMP EDX,EAX                         ; 0059ac10
    JZ 0x0059ac31                       ; 0059ac12
        ;   XREF to: 0059ac31 (CONDITIONAL_JUMP)  ; LAB_0059ac31
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0059ac14
    MOV dword ptr [EDX],EAX             ; 0059ac1b
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0059ac1d
    MOV dword ptr [EDX + 0x4],EAX       ; 0059ac24
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0059ac27
    MOV dword ptr [EDX + 0x8],EAX       ; 0059ac2e
    LEA EAX,[EBX + 0x30]                ; 0059ac31
        ;   Label: LAB_0059ac31
    PUSH EAX                            ; 0059ac34
    PUSH 0x2c8af28                      ; 0059ac35
    MOV dword ptr [ESP + 0x250],EAX     ; 0059ac3a
    LEA EAX,[ESP + 0x18]                ; 0059ac41
    PUSH EAX                            ; 0059ac45
    CALL core_xform.cpp_FUN_005b5760    ; 0059ac46
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0059ac4b
    LEA EAX,[ESP + 0xe8]                ; 0059ac4e
    PUSH EAX                            ; 0059ac55
    PUSH 0x2c8af28                      ; 0059ac56
    LEA EAX,[ESP + 0x78]                ; 0059ac5b
    PUSH EAX                            ; 0059ac5f
    CALL core_xform.cpp_FUN_005b5760    ; 0059ac60
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0059ac65
    LEA EAX,[ESP + 0x10]                ; 0059ac68
    PUSH EAX                            ; 0059ac6c
    LEA EAX,[ESP + 0x74]                ; 0059ac6d
    PUSH EAX                            ; 0059ac71
    LEA ESI,[ESP + 0xa8]                ; 0059ac72
    LEA EDI,[ESP + 0x48]                ; 0059ac79
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0059ac7d
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005b5200(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0059ac82
    LEA ESI,[ESP + 0xa8]                ; 0059ac87
    ADD ESP,0x8                         ; 0059ac8e
    LEA EAX,[ESP + 0x40]                ; 0059ac91
    MOVSD.REP ES:EDI,ESI                ; 0059ac95
    PUSH EAX                            ; 0059ac97
    LEA ESI,[ESP + 0x20c]               ; 0059ac98
    LEA EDI,[ESP + 0x158]               ; 0059ac9f
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 0059aca6
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[ESP + 0x20c]               ; 0059acab
    ADD ESP,0x4                         ; 0059acb2
    LEA EAX,[ESP + 0x154]               ; 0059acb5
    MOV ECX,dword ptr [ESP + 0x248]     ; 0059acbc
    MOVSD ES:EDI,ESI                    ; 0059acc3
    MOVSD ES:EDI,ESI                    ; 0059acc4
    MOVSD ES:EDI,ESI                    ; 0059acc5
    CMP EAX,ECX                         ; 0059acc6
    JZ 0x0059ace7                       ; 0059acc8
        ;   XREF to: 0059ace7 (CONDITIONAL_JUMP)  ; LAB_0059ace7
    MOV EAX,dword ptr [ESP + 0x154]     ; 0059acca
    MOV dword ptr [ECX],EAX             ; 0059acd1
    MOV EAX,dword ptr [ESP + 0x158]     ; 0059acd3
    MOV dword ptr [ECX + 0x4],EAX       ; 0059acda
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0059acdd
    MOV dword ptr [ECX + 0x8],EAX       ; 0059ace4
    PUSH EBX                            ; 0059ace7
        ;   Label: LAB_0059ace7
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 0059ace8
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059aced
    MOV ESP,EBP                         ; 0059acf0
        ;   Label: LAB_0059acf0
    POP EBP                             ; 0059acf2
    POP EDI                             ; 0059acf3
    POP ESI                             ; 0059acf4
    POP EBX                             ; 0059acf5
    RET                                 ; 0059acf6
    ADD EBX,0x2d4                       ; 0059acf7
        ;   Label: LAB_0059acf7
    PUSH 0x42c80000                     ; 0059acfd
    PUSH EBX                            ; 0059ad02
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0 ; 0059ad03
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ea6f0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 0059ad08
    TEST EAX,EAX                        ; 0059ad0b
    JNZ 0x0059acf0                      ; 0059ad0d
        ;   XREF to: 0059acf0 (CONDITIONAL_JUMP)  ; LAB_0059acf0
    MOV EAX,dword ptr [EBX]             ; 0059ad0f
    MOV dword ptr [ESI],EAX             ; 0059ad11
    MOV EAX,dword ptr [EBX + 0x4]       ; 0059ad13
    MOV dword ptr [ESI + 0x4],EAX       ; 0059ad16
    MOV EAX,dword ptr [EBX + 0x8]       ; 0059ad19
    MOV dword ptr [ESI + 0x8],EAX       ; 0059ad1c
    MOV ESP,EBP                         ; 0059ad1f
    POP EBP                             ; 0059ad21
    POP EDI                             ; 0059ad22
    POP ESI                             ; 0059ad23
    POP EBX                             ; 0059ad24
    RET                                 ; 0059ad25
    TEST EDI,EDI                        ; 0059ad26
        ;   Label: LAB_0059ad26
    JNZ 0x0059ab43                      ; 0059ad28
        ;   XREF to: 0059ab43 (CONDITIONAL_JUMP)  ; LAB_0059ab43
    JMP 0x0059ab67                      ; 0059ad2e
        ;   XREF to: 0059ab67 (UNCONDITIONAL_JUMP)  ; LAB_0059ab67

