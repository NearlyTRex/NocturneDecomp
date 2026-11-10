; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_setup_FUN_004464c0(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005b9a49
;   undefined4 DAT_005b9a51
;   undefined4 DAT_005b9a59
;   undefined4 DAT_005b9a61
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_curtain.cpp_FUN_00446b50
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004464c0
        ;   Label: core_curtain.cpp_CCurtain_setup_FUN_004464c0
    PUSH ESI                            ; 004464c1
    PUSH EDI                            ; 004464c2
    PUSH EBP                            ; 004464c3
    MOV EBP,ESP                         ; 004464c4
    SUB ESP,0x8c                        ; 004464c6
    AND ESP,0xfffffff8                  ; 004464cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004464cf
    PUSH EBX                            ; 004464d2
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 004464d3
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004464d8
    LEA EAX,[EBX + 0x164]               ; 004464db
    PUSH EAX                            ; 004464e1
    MOV EDX,dword ptr [0x005f2afc]      ; 004464e2 | DAT_005f2afc
    PUSH EDX                            ; 004464e8
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004464e9
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004464ee
    FLD1                                ; 004464f1
        ;   Label: LAB_004464f1
    FLD float ptr [EBX + 0x158]         ; 004464f3
    FXCH                                ; 004464f9
    FDIV float ptr [EBX + 0x1fc]        ; 004464fb
    FXCH                                ; 00446501
    FMUL ST1                            ; 00446503
    FLD float ptr [EBX + 0x15c]         ; 00446505
    FMULP ST2                           ; 0044650b
    CALL crt_math.c_round_FUN_005a3120  ; 0044650d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x84]        ; 00446512
    MOV EAX,dword ptr [ESP + 0x84]      ; 00446519
    CALL crt_math.c_round_FUN_005a3120  ; 00446520
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    INC EAX                             ; 00446525
    FISTP dword ptr [ESP + 0x88]        ; 00446526
    MOV dword ptr [ESP + 0x64],EAX      ; 0044652d
    MOV EAX,dword ptr [ESP + 0x88]      ; 00446531
    INC EAX                             ; 00446538
    MOV dword ptr [ESP + 0x30],EAX      ; 00446539
    MOV EAX,dword ptr [ESP + 0x84]      ; 0044653d
    MOV dword ptr [EBX + 0x1c72c],EAX   ; 00446544
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044654a
    MOV ECX,dword ptr [ESP + 0x30]      ; 00446551
    MOV dword ptr [EBX + 0x1c730],EAX   ; 00446555
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044655b
    IMUL EAX,ECX                        ; 0044655f
    MOV dword ptr [EBX + 0x204],EAX     ; 00446562
    CMP EAX,0x3e8                       ; 00446568
    JG 0x00446aeb                       ; 0044656d
        ;   XREF to: 00446aeb (CONDITIONAL_JUMP)  ; LAB_00446aeb
    LEA EDX,[ECX + -0x1]                ; 00446573
    MOV dword ptr [ESP + 0x88],EDX      ; 00446576
    FILD dword ptr [ESP + 0x88]         ; 0044657d
    FDIVR float ptr [EBX + 0x15c]       ; 00446584
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044658a
    DEC EAX                             ; 0044658e
    MOV dword ptr [ESP + 0x88],EAX      ; 0044658f
    FILD dword ptr [ESP + 0x88]         ; 00446596
    FDIVR float ptr [EBX + 0x158]       ; 0044659d
    XOR EDI,EDI                         ; 004465a3
    XOR ESI,ESI                         ; 004465a5
    MOV ECX,dword ptr [EBX + 0x15c]     ; 004465a7
    MOV dword ptr [ESP + 0x78],EDI      ; 004465ad
    MOV dword ptr [ESP + 0x60],ECX      ; 004465b1
    MOV ECX,dword ptr [ESP + 0x30]      ; 004465b5
    FXCH                                ; 004465b9
    FSTP float ptr [ESP + 0x24]         ; 004465bb
    FSTP float ptr [ESP + 0x3c]         ; 004465bf
    TEST ECX,ECX                        ; 004465c3
    JLE 0x004467ba                      ; 004465c5
        ;   XREF to: 004467ba (CONDITIONAL_JUMP)  ; LAB_004467ba
    MOV dword ptr [ESP + 0x44],EAX      ; 004465cb
    MOV dword ptr [ESP + 0x40],EDX      ; 004465cf
    MOV dword ptr [ESP + 0x54],EAX      ; 004465d3
    MOV dword ptr [ESP + 0x48],EAX      ; 004465d7
    MOV dword ptr [ESP + 0x4c],EDX      ; 004465db
    MOV dword ptr [ESP + 0x38],EAX      ; 004465df
    LEA EAX,[EBX + 0x208]               ; 004465e3
    MOV dword ptr [ESP + 0x50],EDX      ; 004465e9
    MOV dword ptr [ESP + 0x28],EAX      ; 004465ed
    FLD float ptr [EBX + 0x158]         ; 004465f1
        ;   Label: LAB_004465f1
    FCHS                                ; 004465f7
    FMUL double ptr [0x005b9a51]        ; 004465f9 | DAT_005b9a51
    MOV ECX,dword ptr [ESP + 0x64]      ; 004465ff
    XOR EDX,EDX                         ; 00446603
    FSTP float ptr [ESP + 0x70]         ; 00446605
    TEST ECX,ECX                        ; 00446609
    JLE 0x004467a1                      ; 0044660b
        ;   XREF to: 004467a1 (CONDITIONAL_JUMP)  ; LAB_004467a1
    MOV ECX,dword ptr [ESP + 0x78]      ; 00446611
    IMUL EAX,ECX,0x74                   ; 00446615
    MOV EDI,dword ptr [ESP + 0x28]      ; 00446618
    ADD EAX,EDI                         ; 0044661c
    MOV dword ptr [ESP + 0x80],EAX      ; 0044661e
    MOV EAX,dword ptr [ESP + 0x64]      ; 00446625
    NEG EAX                             ; 00446629
    ADD EAX,ECX                         ; 0044662b
    MOV dword ptr [ESP + 0x74],EAX      ; 0044662d
    MOV EAX,dword ptr [ESP + 0x80]      ; 00446631
        ;   Label: LAB_00446631
    MOV ECX,dword ptr [ESP + 0x70]      ; 00446638
    MOV dword ptr [EAX + 0x14],0x0      ; 0044663c
    MOV dword ptr [EAX + 0xc],ECX       ; 00446643
    MOV ECX,dword ptr [ESP + 0x60]      ; 00446646
    MOV dword ptr [EAX + 0x10],ECX      ; 0044664a
    TEST ESI,ESI                        ; 0044664d
    JNZ 0x00446b06                      ; 0044664f
        ;   XREF to: 00446b06 (CONDITIONAL_JUMP)  ; LAB_00446b06
    CMP dword ptr [EBX + 0x180],0x0     ; 00446655
    JZ 0x00446b06                       ; 0044665c
        ;   XREF to: 00446b06 (CONDITIONAL_JUMP)  ; LAB_00446b06
    MOV dword ptr [EAX + 0x68],0x1      ; 00446662
        ;   Label: LAB_00446662
    MOV dword ptr [EAX + 0x70],0x0      ; 00446669
        ;   Label: LAB_00446669
    TEST EDX,EDX                        ; 00446670
    JNZ 0x0044667f                      ; 00446672
        ;   XREF to: 0044667f (CONDITIONAL_JUMP)  ; LAB_0044667f
    TEST ESI,ESI                        ; 00446674
    JNZ 0x0044667f                      ; 00446676
        ;   XREF to: 0044667f (CONDITIONAL_JUMP)  ; LAB_0044667f
    MOV dword ptr [EAX + 0x70],0x1      ; 00446678
    TEST EDX,EDX                        ; 0044667f
        ;   Label: LAB_0044667f
    JNZ 0x00446690                      ; 00446681
        ;   XREF to: 00446690 (CONDITIONAL_JUMP)  ; LAB_00446690
    CMP ESI,dword ptr [ESP + 0x4c]      ; 00446683
    JNZ 0x00446690                      ; 00446687
        ;   XREF to: 00446690 (CONDITIONAL_JUMP)  ; LAB_00446690
    MOV dword ptr [EAX + 0x70],0x1      ; 00446689
    CMP EDX,dword ptr [ESP + 0x48]      ; 00446690
        ;   Label: LAB_00446690
    JNZ 0x004466a1                      ; 00446694
        ;   XREF to: 004466a1 (CONDITIONAL_JUMP)  ; LAB_004466a1
    TEST ESI,ESI                        ; 00446696
    JNZ 0x004466a1                      ; 00446698
        ;   XREF to: 004466a1 (CONDITIONAL_JUMP)  ; LAB_004466a1
    MOV dword ptr [EAX + 0x70],0x1      ; 0044669a
    CMP EDX,dword ptr [ESP + 0x54]      ; 004466a1
        ;   Label: LAB_004466a1
    JNZ 0x004466b4                      ; 004466a5
        ;   XREF to: 004466b4 (CONDITIONAL_JUMP)  ; LAB_004466b4
    CMP ESI,dword ptr [ESP + 0x40]      ; 004466a7
    JNZ 0x004466b4                      ; 004466ab
        ;   XREF to: 004466b4 (CONDITIONAL_JUMP)  ; LAB_004466b4
    MOV dword ptr [EAX + 0x70],0x1      ; 004466ad
    MOV dword ptr [EAX + 0x44],0x0      ; 004466b4
        ;   Label: LAB_004466b4
    TEST ESI,ESI                        ; 004466bb
    JLE 0x004466cd                      ; 004466bd
        ;   XREF to: 004466cd (CONDITIONAL_JUMP)  ; LAB_004466cd
    MOV ECX,dword ptr [EAX + 0x44]      ; 004466bf
    MOV EDI,dword ptr [ESP + 0x74]      ; 004466c2
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 004466c6
    INC dword ptr [EAX + 0x44]          ; 004466ca
    TEST EDX,EDX                        ; 004466cd
        ;   Label: LAB_004466cd
    JLE 0x004466e0                      ; 004466cf
        ;   XREF to: 004466e0 (CONDITIONAL_JUMP)  ; LAB_004466e0
    MOV EDI,dword ptr [ESP + 0x78]      ; 004466d1
    MOV ECX,dword ptr [EAX + 0x44]      ; 004466d5
    DEC EDI                             ; 004466d8
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 004466d9
    INC dword ptr [EAX + 0x44]          ; 004466dd
    CMP EDX,dword ptr [ESP + 0x44]      ; 004466e0
        ;   Label: LAB_004466e0
    JGE 0x004466f5                      ; 004466e4
        ;   XREF to: 004466f5 (CONDITIONAL_JUMP)  ; LAB_004466f5
    MOV EDI,dword ptr [ESP + 0x78]      ; 004466e6
    MOV ECX,dword ptr [EAX + 0x44]      ; 004466ea
    INC EDI                             ; 004466ed
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 004466ee
    INC dword ptr [EAX + 0x44]          ; 004466f2
    FLD float ptr [EBX + 0x158]         ; 004466f5
        ;   Label: LAB_004466f5
    FLD ST0                             ; 004466fb
    FMUL double ptr [0x005b9a51]        ; 004466fd | DAT_005b9a51
    FADD float ptr [EAX + 0xc]          ; 00446703
    FDIVRP                              ; 00446706
    FLD double ptr [0x005b9a59]         ; 00446708 | DAT_005b9a59
    FXCH                                ; 0044670e
    FMUL ST1                            ; 00446710
    FLD double ptr [0x005b9a61]         ; 00446712 | DAT_005b9a61
    FXCH                                ; 00446718
    FMUL ST1                            ; 0044671a
    CALL crt_math.c_round_FUN_005a3120  ; 0044671c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x84]        ; 00446721
    MOV ECX,dword ptr [ESP + 0x84]      ; 00446728
    ADD ECX,0x20000                     ; 0044672f
    MOV dword ptr [EAX + 0x18],ECX      ; 00446735
    FLD float ptr [EAX + 0x10]          ; 00446738
    FDIV float ptr [EBX + 0x15c]        ; 0044673b
    FLD1                                ; 00446741
    FSUBRP                              ; 00446743
    FMULP ST2                           ; 00446745
    FMULP                               ; 00446747
    FLD float ptr [ESP + 0x70]          ; 00446749
    MOV EDI,dword ptr [ESP + 0x80]      ; 0044674d
    INC EDX                             ; 00446754
    FADD float ptr [ESP + 0x3c]         ; 00446755
    ADD EDI,0x74                        ; 00446759
    FSTP float ptr [ESP + 0x70]         ; 0044675c
    CALL crt_math.c_round_FUN_005a3120  ; 00446760
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x84]        ; 00446765
    MOV ECX,dword ptr [ESP + 0x84]      ; 0044676c
    MOV dword ptr [ESP + 0x80],EDI      ; 00446773
    ADD ECX,0x20000                     ; 0044677a
    MOV EDI,dword ptr [ESP + 0x64]      ; 00446780
    MOV dword ptr [EAX + 0x1c],ECX      ; 00446784
    MOV EAX,dword ptr [ESP + 0x74]      ; 00446787
    MOV ECX,dword ptr [ESP + 0x78]      ; 0044678b
    INC EAX                             ; 0044678f
    INC ECX                             ; 00446790
    MOV dword ptr [ESP + 0x74],EAX      ; 00446791
    MOV dword ptr [ESP + 0x78],ECX      ; 00446795
    CMP EDX,EDI                         ; 00446799
    JL 0x00446631                       ; 0044679b
        ;   XREF to: 00446631 (CONDITIONAL_JUMP)  ; LAB_00446631
    FLD float ptr [ESP + 0x60]          ; 004467a1
        ;   Label: LAB_004467a1
    MOV EDI,dword ptr [ESP + 0x30]      ; 004467a5
    FSUB float ptr [ESP + 0x24]         ; 004467a9
    INC ESI                             ; 004467ad
    FSTP float ptr [ESP + 0x60]         ; 004467ae
    CMP ESI,EDI                         ; 004467b2
    JL 0x004465f1                       ; 004467b4
        ;   XREF to: 004465f1 (CONDITIONAL_JUMP)  ; LAB_004465f1
    XOR EAX,EAX                         ; 004467ba
        ;   Label: LAB_004467ba
    MOV EDX,dword ptr [EBX + 0x204]     ; 004467bc
    MOV dword ptr [ESP + 0x2c],EAX      ; 004467c2
    TEST EDX,EDX                        ; 004467c6
    JLE 0x00446886                      ; 004467c8
        ;   XREF to: 00446886 (CONDITIONAL_JUMP)  ; LAB_00446886
    LEA EAX,[EBX + 0x208]               ; 004467ce
    MOV dword ptr [ESP + 0x34],EAX      ; 004467d4
    MOV dword ptr [ESP + 0x58],EAX      ; 004467d8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004467dc
        ;   Label: LAB_004467dc
    XOR ECX,ECX                         ; 004467e0
    MOV EDI,dword ptr [EAX + 0x44]      ; 004467e2
    MOV dword ptr [ESP + 0x5c],EAX      ; 004467e5
    TEST EDI,EDI                        ; 004467e9
    JLE 0x00446864                      ; 004467eb
        ;   XREF to: 00446864 (CONDITIONAL_JUMP)  ; LAB_00446864
    FLD float ptr [ESP]                 ; 004467ed
    ADD EAX,0xc                         ; 004467f0
    MOV EDX,dword ptr [ESP + 0x34]      ; 004467f3
    MOV dword ptr [ESP + 0x6c],EAX      ; 004467f7
    IMUL EAX,dword ptr [EDX + 0x48],0x74 ; 004467fb
        ;   Label: LAB_004467fb
    ADD EAX,dword ptr [ESP + 0x58]      ; 004467ff
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00446803
    LEA EDI,[ESP + 0x10]                ; 00446807
    FLD float ptr [ESI + 0x4]           ; 0044680b
    FLD float ptr [ESI + 0x8]           ; 0044680e
    FLD float ptr [ESI]                 ; 00446811
    LEA ESI,[ESP + 0x4]                 ; 00446813
    FSUB float ptr [EAX + 0xc]          ; 00446817
    FXCH ST2                            ; 0044681a
    FSUB float ptr [EAX + 0x10]         ; 0044681c
    FXCH                                ; 0044681f
    FSUB float ptr [EAX + 0x14]         ; 00446821
    FXCH ST2                            ; 00446824
    FSTP float ptr [ESP + 0x4]          ; 00446826
    FSTP float ptr [ESP + 0x8]          ; 0044682a
    FSTP float ptr [ESP + 0xc]          ; 0044682e
    MOVSD ES:EDI,ESI                    ; 00446832
    MOVSD ES:EDI,ESI                    ; 00446833
    MOVSD ES:EDI,ESI                    ; 00446834
    FLD float ptr [ESP + 0x14]          ; 00446835
    FMUL ST0                            ; 00446839
    FLD float ptr [ESP + 0x10]          ; 0044683b
    FMUL ST0                            ; 0044683f
    FADDP                               ; 00446841
    FLD float ptr [ESP + 0x18]          ; 00446843
    FMUL ST0                            ; 00446847
    FADDP                               ; 00446849
    FST ST1                             ; 0044684b
    FSQRT                               ; 0044684d
    INC ECX                             ; 0044684f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00446850
    FSTP float ptr [EDX + 0x58]         ; 00446854
    MOV EDI,dword ptr [EAX + 0x44]      ; 00446857
    ADD EDX,0x4                         ; 0044685a
    CMP ECX,EDI                         ; 0044685d
    JL 0x004467fb                       ; 0044685f
        ;   XREF to: 004467fb (CONDITIONAL_JUMP)  ; LAB_004467fb
    FSTP float ptr [ESP]                ; 00446861
    MOV ESI,dword ptr [ESP + 0x34]      ; 00446864
        ;   Label: LAB_00446864
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00446868
    MOV EDX,dword ptr [EBX + 0x204]     ; 0044686c
    ADD ESI,0x74                        ; 00446872
    INC EDI                             ; 00446875
    MOV dword ptr [ESP + 0x34],ESI      ; 00446876
    MOV dword ptr [ESP + 0x2c],EDI      ; 0044687a
    CMP EDI,EDX                         ; 0044687e
    JL 0x004467dc                       ; 00446880
        ;   XREF to: 004467dc (CONDITIONAL_JUMP)  ; LAB_004467dc
    MOV ESI,dword ptr [EBX + 0x204]     ; 00446886
        ;   Label: LAB_00446886
    XOR ECX,ECX                         ; 0044688c
    TEST ESI,ESI                        ; 0044688e
    JLE 0x004468d8                      ; 00446890
        ;   XREF to: 004468d8 (CONDITIONAL_JUMP)  ; LAB_004468d8
    LEA ESI,[EBX + 0x208]               ; 00446892
    LEA EAX,[EBX + 0x214]               ; 00446898
    IMUL EDX,ECX,0x74                   ; 0044689e
        ;   Label: LAB_0044689e
    ADD EDX,ESI                         ; 004468a1
    CMP EDX,EAX                         ; 004468a3
    JZ 0x004468b7                       ; 004468a5
        ;   XREF to: 004468b7 (CONDITIONAL_JUMP)  ; LAB_004468b7
    MOV EDI,dword ptr [EAX]             ; 004468a7
    MOV dword ptr [EDX],EDI             ; 004468a9
    MOV EDI,dword ptr [EAX + 0x4]       ; 004468ab
    MOV dword ptr [EDX + 0x4],EDI       ; 004468ae
    MOV EDI,dword ptr [EAX + 0x8]       ; 004468b1
    MOV dword ptr [EDX + 0x8],EDI       ; 004468b4
    MOV dword ptr [EDX + 0x34],0x0      ; 004468b7
        ;   Label: LAB_004468b7
    INC ECX                             ; 004468be
    MOV EDI,dword ptr [EDX + 0x34]      ; 004468bf
    MOV dword ptr [EDX + 0x30],EDI      ; 004468c2
    MOV EDI,dword ptr [EDX + 0x30]      ; 004468c5
    MOV dword ptr [EDX + 0x2c],EDI      ; 004468c8
    MOV EDX,dword ptr [EBX + 0x204]     ; 004468cb
    ADD EAX,0x74                        ; 004468d1
    CMP ECX,EDX                         ; 004468d4
    JL 0x0044689e                       ; 004468d6
        ;   XREF to: 0044689e (CONDITIONAL_JUMP)  ; LAB_0044689e
    LEA EAX,[EBX + 0x1f614]             ; 004468d8
        ;   Label: LAB_004468d8
    MOV ESI,dword ptr [EBX + 0x1c730]   ; 004468de
    XOR ECX,ECX                         ; 004468e4
    LEA EDX,[EBX + 0x42894]             ; 004468e6
    MOV dword ptr [ESP + 0x68],ECX      ; 004468ec
    TEST ESI,ESI                        ; 004468f0
    JLE 0x00446ac1                      ; 004468f2
        ;   XREF to: 00446ac1 (CONDITIONAL_JUMP)  ; LAB_00446ac1
    XOR EDI,EDI                         ; 004468f8
        ;   Label: LAB_004468f8
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 004468fa
    MOV dword ptr [ESP + 0x7c],EDI      ; 00446900
    TEST ECX,ECX                        ; 00446904
    JLE 0x00446aaa                      ; 00446906
        ;   XREF to: 00446aaa (CONDITIONAL_JUMP)  ; LAB_00446aaa
    MOV dword ptr [EAX + 0x14],0x0      ; 0044690c
        ;   Label: LAB_0044690c
    MOV dword ptr [EAX + 0x4],0x3       ; 00446913
    MOV ECX,dword ptr [EAX + 0x14]      ; 0044691a
    MOV dword ptr [EAX + 0x10],ECX      ; 0044691d
    MOV dword ptr [EAX + 0xc],ECX       ; 00446920
    MOV dword ptr [EAX + 0x8],ECX       ; 00446923
    MOV dword ptr [EDX + 0x4],0x3       ; 00446926
    MOV dword ptr [EDX + 0x14],0x0      ; 0044692d
    MOV ECX,dword ptr [EDX + 0x14]      ; 00446934
    MOV dword ptr [EDX + 0x10],ECX      ; 00446937
    MOV dword ptr [EDX + 0xc],ECX       ; 0044693a
    MOV dword ptr [EDX + 0x8],ECX       ; 0044693d
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 00446940
    MOV ESI,dword ptr [ESP + 0x68]      ; 00446946
    INC ECX                             ; 0044694a
    IMUL ECX,ESI                        ; 0044694b
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0044694e
    ADD ESI,ECX                         ; 00446952
    MOV dword ptr [EAX + 0x18],ESI      ; 00446954
    IMUL ECX,ESI,0x74                   ; 00446957
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 0044695a
    MOV dword ptr [EAX + 0x1c],EDI      ; 00446961
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00446964
    INC ESI                             ; 0044696b
    MOV dword ptr [EAX + 0x20],ECX      ; 0044696c
    MOV dword ptr [EAX + 0x24],ESI      ; 0044696f
    IMUL ECX,ESI,0x74                   ; 00446972
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00446975
    MOV dword ptr [EAX + 0x28],EDI      ; 0044697c
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 0044697f
    MOV dword ptr [EAX + 0x2c],ECX      ; 00446986
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 00446989
    INC ECX                             ; 0044698f
    ADD ESI,ECX                         ; 00446990
    MOV dword ptr [EAX + 0x30],ESI      ; 00446992
    IMUL ECX,ESI,0x74                   ; 00446995
    MOV ESI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00446998
    MOV dword ptr [EAX + 0x34],ESI      ; 0044699f
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 004469a2
    MOV dword ptr [EAX + 0x38],ECX      ; 004469a9
    LEA EDI,[EDX + 0x18]                ; 004469ac
    LEA ESI,[EAX + 0x30]                ; 004469af
    MOVSD ES:EDI,ESI                    ; 004469b2
    MOVSD ES:EDI,ESI                    ; 004469b3
    MOVSD ES:EDI,ESI                    ; 004469b4
    LEA EDI,[EDX + 0x24]                ; 004469b5
    LEA ESI,[EAX + 0x24]                ; 004469b8
    MOVSD ES:EDI,ESI                    ; 004469bb
    MOVSD ES:EDI,ESI                    ; 004469bc
    MOVSD ES:EDI,ESI                    ; 004469bd
    LEA EDI,[EDX + 0x30]                ; 004469be
    LEA ESI,[EAX + 0x18]                ; 004469c1
    MOVSD ES:EDI,ESI                    ; 004469c4
    MOVSD ES:EDI,ESI                    ; 004469c5
    MOVSD ES:EDI,ESI                    ; 004469c6
    MOV dword ptr [EAX + 0x4c],0x3      ; 004469c7
    MOV dword ptr [EAX + 0x5c],0x0      ; 004469ce
    MOV ECX,dword ptr [EAX + 0x5c]      ; 004469d5
    MOV dword ptr [EAX + 0x58],ECX      ; 004469d8
    MOV dword ptr [EAX + 0x54],ECX      ; 004469db
    MOV dword ptr [EAX + 0x50],ECX      ; 004469de
    MOV dword ptr [EDX + 0x4c],0x3      ; 004469e1
    MOV dword ptr [EDX + 0x5c],0x0      ; 004469e8
    MOV ECX,dword ptr [EDX + 0x5c]      ; 004469ef
    MOV dword ptr [EDX + 0x58],ECX      ; 004469f2
    MOV dword ptr [EDX + 0x54],ECX      ; 004469f5
    MOV dword ptr [EDX + 0x50],ECX      ; 004469f8
    MOV ESI,dword ptr [EBX + 0x1c72c]   ; 004469fb
    MOV EDI,dword ptr [ESP + 0x68]      ; 00446a01
    INC ESI                             ; 00446a05
    IMUL ESI,EDI                        ; 00446a06
    MOV ECX,dword ptr [ESP + 0x7c]      ; 00446a09
    ADD ESI,ECX                         ; 00446a0d
    MOV dword ptr [EAX + 0x60],ESI      ; 00446a0f
    IMUL ECX,ESI,0x74                   ; 00446a12
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00446a15
    MOV dword ptr [EAX + 0x64],EDI      ; 00446a1c
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00446a1f
    MOV dword ptr [EAX + 0x68],ECX      ; 00446a26
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 00446a29
    ADD ECX,0x2                         ; 00446a2f
    ADD ESI,ECX                         ; 00446a32
    MOV dword ptr [EAX + 0x6c],ESI      ; 00446a34
    IMUL ECX,ESI,0x74                   ; 00446a37
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00446a3a
    MOV dword ptr [EAX + 0x70],EDI      ; 00446a41
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00446a44
    DEC ESI                             ; 00446a4b
    MOV dword ptr [EAX + 0x74],ECX      ; 00446a4c
    MOV dword ptr [EAX + 0x78],ESI      ; 00446a4f
    IMUL ECX,ESI,0x74                   ; 00446a52
    MOV ESI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00446a55
    MOV dword ptr [EAX + 0x7c],ESI      ; 00446a5c
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00446a5f
    MOV dword ptr [EAX + 0x80],ECX      ; 00446a66
    LEA EDI,[EDX + 0x60]                ; 00446a6c
    LEA ESI,[EAX + 0x78]                ; 00446a6f
    MOVSD ES:EDI,ESI                    ; 00446a72
    MOVSD ES:EDI,ESI                    ; 00446a73
    MOVSD ES:EDI,ESI                    ; 00446a74
    LEA EDI,[EDX + 0x6c]                ; 00446a75
    LEA ESI,[EAX + 0x6c]                ; 00446a78
    MOVSD ES:EDI,ESI                    ; 00446a7b
    MOVSD ES:EDI,ESI                    ; 00446a7c
    MOVSD ES:EDI,ESI                    ; 00446a7d
    LEA EDI,[EDX + 0x78]                ; 00446a7e
    LEA ESI,[EAX + 0x60]                ; 00446a81
    ADD EAX,0x48                        ; 00446a84
    ADD EDX,0x48                        ; 00446a87
    MOVSD ES:EDI,ESI                    ; 00446a8a
    MOVSD ES:EDI,ESI                    ; 00446a8b
    MOVSD ES:EDI,ESI                    ; 00446a8c
    ADD EAX,0x48                        ; 00446a8d
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00446a90
    ADD EDX,0x48                        ; 00446a94
    INC ESI                             ; 00446a97
    MOV EDI,dword ptr [EBX + 0x1c72c]   ; 00446a98
    MOV dword ptr [ESP + 0x7c],ESI      ; 00446a9e
    CMP ESI,EDI                         ; 00446aa2
    JL 0x0044690c                       ; 00446aa4
        ;   XREF to: 0044690c (CONDITIONAL_JUMP)  ; LAB_0044690c
    MOV ECX,dword ptr [ESP + 0x68]      ; 00446aaa
        ;   Label: LAB_00446aaa
    INC ECX                             ; 00446aae
    MOV ESI,dword ptr [EBX + 0x1c730]   ; 00446aaf
    MOV dword ptr [ESP + 0x68],ECX      ; 00446ab5
    CMP ECX,ESI                         ; 00446ab9
    JL 0x004468f8                       ; 00446abb
        ;   XREF to: 004468f8 (CONDITIONAL_JUMP)  ; LAB_004468f8
    PUSH EBX                            ; 00446ac1
        ;   Label: LAB_00446ac1
    CALL core_curtain.cpp_FUN_00446b50  ; 00446ac2
        ;   XREF to: 00446b50 (UNCONDITIONAL_CALL)  ; undefined core_curtain.cpp_FUN_00446b50()
    MOV EDX,dword ptr [EBX + 0x17c]     ; 00446ac7
    ADD ESP,0x4                         ; 00446acd
    CMP EDX,0xfde8                      ; 00446ad0
    SETLE AL                            ; 00446ad6
    AND EAX,0xff                        ; 00446ad9
    MOV dword ptr [EBX + 0xfc],EAX      ; 00446ade
    MOV ESP,EBP                         ; 00446ae4
    POP EBP                             ; 00446ae6
    POP EDI                             ; 00446ae7
    POP ESI                             ; 00446ae8
    POP EBX                             ; 00446ae9
    RET                                 ; 00446aea
    FLD float ptr [EBX + 0x1fc]         ; 00446aeb
        ;   Label: LAB_00446aeb
    FLD ST0                             ; 00446af1
    FMUL double ptr [0x005b9a49]        ; 00446af3 | DAT_005b9a49
    FSTP ST1                            ; 00446af9
    FSTP float ptr [EBX + 0x1fc]        ; 00446afb
    JMP 0x004464f1                      ; 00446b01
        ;   XREF to: 004464f1 (UNCONDITIONAL_JUMP)  ; LAB_004464f1
    CMP ESI,dword ptr [ESP + 0x50]      ; 00446b06
        ;   Label: LAB_00446b06
    JNZ 0x00446b19                      ; 00446b0a
        ;   XREF to: 00446b19 (CONDITIONAL_JUMP)  ; LAB_00446b19
    CMP dword ptr [EBX + 0x18c],0x0     ; 00446b0c
    JNZ 0x00446662                      ; 00446b13
        ;   XREF to: 00446662 (CONDITIONAL_JUMP)  ; LAB_00446662
    TEST EDX,EDX                        ; 00446b19
        ;   Label: LAB_00446b19
    JNZ 0x00446b2a                      ; 00446b1b
        ;   XREF to: 00446b2a (CONDITIONAL_JUMP)  ; LAB_00446b2a
    CMP dword ptr [EBX + 0x184],0x0     ; 00446b1d
    JNZ 0x00446662                      ; 00446b24
        ;   XREF to: 00446662 (CONDITIONAL_JUMP)  ; LAB_00446662
    CMP EDX,dword ptr [ESP + 0x38]      ; 00446b2a
        ;   Label: LAB_00446b2a
    JNZ 0x00446b3d                      ; 00446b2e
        ;   XREF to: 00446b3d (CONDITIONAL_JUMP)  ; LAB_00446b3d
    CMP dword ptr [EBX + 0x188],0x0     ; 00446b30
    JNZ 0x00446662                      ; 00446b37
        ;   XREF to: 00446662 (CONDITIONAL_JUMP)  ; LAB_00446662
    MOV dword ptr [EAX + 0x68],0x0      ; 00446b3d
        ;   Label: LAB_00446b3d
    JMP 0x00446669                      ; 00446b44
        ;   XREF to: 00446669 (UNCONDITIONAL_JUMP)  ; LAB_00446669

