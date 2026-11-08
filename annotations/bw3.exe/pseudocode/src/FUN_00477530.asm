; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00477530(int param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0053cca0 at 0053ccaf
;
; Referenced Globals:
;   undefined4 DAT_005bcbdd
;   undefined4 DAT_005bcbe1
;   undefined4 DAT_005fb0e8
;
; Called Functions:
;   FUN_00473b60
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477530
        ;   Label: FUN_00477530
    PUSH ESI                            ; 00477531
    PUSH EDI                            ; 00477532
    PUSH EBP                            ; 00477533
    MOV EBP,ESP                         ; 00477534
    SUB ESP,0x84                        ; 00477536
    AND ESP,0xfffffff8                  ; 0047753c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0047753f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00477542
    MOV ECX,dword ptr [EBP + 0x14]      ; 00477545
    FLD float ptr [EDX]                 ; 00477548
    FSUB float ptr [ECX + 0x10]         ; 0047754a
    FLD float ptr [0x005bcbdd]          ; 0047754d | DAT_005bcbdd
    FLD float ptr [ECX + 0x28]          ; 00477553
    FMUL ST1                            ; 00477556
    FLD1                                ; 00477558
    FDIVRP                              ; 0047755a
    FLD float ptr [EDX + 0x4]           ; 0047755c
    FSUB float ptr [ECX + 0x14]         ; 0047755f
    FLD float ptr [ECX + 0x2c]          ; 00477562
    FMUL ST3                            ; 00477565
    FLD1                                ; 00477567
    FDIVRP                              ; 00477569
    FXCH ST4                            ; 0047756b
    FMUL ST2                            ; 0047756d
    FLD float ptr [EDX + 0x8]           ; 0047756f
    FSUB float ptr [ECX + 0x18]         ; 00477572
    FXCH                                ; 00477575
    FSTP float ptr [ESP + 0x28]         ; 00477577
    FLD float ptr [ECX + 0x30]          ; 0047757b
    FMULP ST4                           ; 0047757e
    FLD1                                ; 00477580
    FDIVRP ST4,ST0                      ; 00477582
    FXCH                                ; 00477584
    FMUL ST4                            ; 00477586
    FLD float ptr [EAX]                 ; 00477588
    FSUB float ptr [ECX + 0x10]         ; 0047758a
    FXCH ST2                            ; 0047758d
    FMUL ST4                            ; 0047758f
    FXCH ST2                            ; 00477591
    FMULP ST3                           ; 00477593
    FSTP float ptr [ESP + 0x78]         ; 00477595
    FLD float ptr [EAX + 0x8]           ; 00477599
    FLD float ptr [EAX + 0x4]           ; 0047759c
    FSUB float ptr [ECX + 0x14]         ; 0047759f
    FXCH                                ; 004775a2
    FSUB float ptr [ECX + 0x18]         ; 004775a4
    FXCH                                ; 004775a7
    FMULP ST5                           ; 004775a9
    FMULP ST3                           ; 004775ab
    FLD float ptr [EAX]                 ; 004775ad
    FLD float ptr [EAX + 0x4]           ; 004775af
    FLD float ptr [EAX + 0x8]           ; 004775b2
    MOV EBX,0x1                         ; 004775b5
    LEA EDI,[ESP + 0x10]                ; 004775ba
    LEA ESI,[ESP + 0x4]                 ; 004775be
    FXCH ST2                            ; 004775c2
    FSUB float ptr [EDX]                ; 004775c4
    FXCH                                ; 004775c6
    FSUB float ptr [EDX + 0x4]          ; 004775c8
    FXCH ST2                            ; 004775cb
    FSUB float ptr [EDX + 0x8]          ; 004775cd
    FXCH                                ; 004775d0
    FSTP float ptr [ESP + 0x4]          ; 004775d2
    FXCH                                ; 004775d6
    FSTP float ptr [ESP + 0x8]          ; 004775d8
    FSTP float ptr [ESP + 0xc]          ; 004775dc
    MOVSD ES:EDI,ESI                    ; 004775e0
    MOVSD ES:EDI,ESI                    ; 004775e1
    MOVSD ES:EDI,ESI                    ; 004775e2
    FSTP float ptr [ESP + 0x2c]         ; 004775e3
    CALL FUN_005a3120                   ; 004775e7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 004775ec
    CALL FUN_005a3120                   ; 004775ee
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 004775f3
    CALL FUN_005a3120                   ; 004775f5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FLD float ptr [ESP + 0x28]          ; 004775fa
    FLD float ptr [ESP + 0x78]          ; 004775fe
    FLD float ptr [ESP + 0x2c]          ; 00477602
    FXCH ST5                            ; 00477606
    FISTP dword ptr [ESP + 0x34]        ; 00477608
    FXCH ST3                            ; 0047760c
    FISTP dword ptr [ESP + 0x38]        ; 0047760e
    FXCH                                ; 00477612
    FISTP dword ptr [ESP + 0x30]        ; 00477614
    CALL FUN_005a3120                   ; 00477618
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 0047761d
    CALL FUN_005a3120                   ; 0047761f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 00477624
    CALL FUN_005a3120                   ; 00477626
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV EDX,dword ptr [ESP + 0x34]      ; 0047762b
    FXCH                                ; 0047762f
    FISTP dword ptr [ESP + 0x60]        ; 00477631
    FXCH                                ; 00477635
    FISTP dword ptr [ESP + 0x64]        ; 00477637
    MOV EAX,dword ptr [ESP + 0x60]      ; 0047763b
    FISTP dword ptr [ESP + 0x6c]        ; 0047763f
    CMP EAX,EDX                         ; 00477643
    JNZ 0x00477655                      ; 00477645
        ;   XREF to: 00477655 (CONDITIONAL_JUMP)  ; LAB_00477655
    MOV EAX,dword ptr [ESP + 0x64]      ; 00477647
    CMP EAX,dword ptr [ESP + 0x38]      ; 0047764b
    JZ 0x00477916                       ; 0047764f
        ;   XREF to: 00477916 (CONDITIONAL_JUMP)  ; LAB_00477916
    FLD float ptr [ESP + 0x14]          ; 00477655
        ;   Label: LAB_00477655
    FMUL ST0                            ; 00477659
    FLD float ptr [ESP + 0x10]          ; 0047765b
    FMUL ST0                            ; 0047765f
    FADDP                               ; 00477661
    FLD float ptr [ESP + 0x18]          ; 00477663
    FMUL ST0                            ; 00477667
    FADDP                               ; 00477669
    FSQRT                               ; 0047766b
    FST float ptr [ESP]                 ; 0047766d
    FLDZ                                ; 00477670
    FCOMPP                              ; 00477672
    FNSTSW AX                           ; 00477674
    SAHF                                ; 00477676
    JNC 0x00477929                      ; 00477677
        ;   XREF to: 00477929 (CONDITIONAL_JUMP)  ; LAB_00477929
    FLD float ptr [ESP + 0x14]          ; 0047767d
    FABS                                ; 00477681
    FLD float ptr [ESP + 0x18]          ; 00477683
    FABS                                ; 00477687
    FLD float ptr [ESP + 0x10]          ; 00477689
    FLD ST0                             ; 0047768d
    FABS                                ; 0047768f
    FLD float ptr [0x005bcbe1]          ; 00477691 | DAT_005bcbe1
    FDIV float ptr [ESP]                ; 00477697
    FXCH                                ; 0047769a
    FMUL ST1                            ; 0047769c
    FXCH ST4                            ; 0047769e
    FMUL ST1                            ; 004776a0
    FXCH ST3                            ; 004776a2
    FMULP                               ; 004776a4
    FXCH ST3                            ; 004776a6
    CALL FUN_005a3120                   ; 004776a8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x58]        ; 004776ad
    FLDZ                                ; 004776b1
    FXCH ST2                            ; 004776b3
    CALL FUN_005a3120                   ; 004776b5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 004776ba
    CALL FUN_005a3120                   ; 004776bc
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 004776c1
    FISTP dword ptr [ESP + 0x5c]        ; 004776c3
    FXCH ST2                            ; 004776c7
    FISTP dword ptr [ESP + 0x54]        ; 004776c9
    FCOMPP                              ; 004776cd
    FNSTSW AX                           ; 004776cf
    SAHF                                ; 004776d1
    JA 0x00477934                       ; 004776d2
        ;   XREF to: 00477934 (CONDITIONAL_JUMP)  ; LAB_00477934
    MOV EAX,dword ptr [ESP + 0x34]      ; 004776d8
    MOV ESI,dword ptr [ESP + 0x60]      ; 004776dc
    SUB EAX,ESI                         ; 004776e0
    MOV ECX,0x1                         ; 004776e2
    ADD EBX,EAX                         ; 004776e7
    LEA EAX,[ESI + ECX*0x1]             ; 004776e9
    MOV dword ptr [ESP + 0x80],EAX      ; 004776ec
    FILD dword ptr [ESP + 0x80]         ; 004776f3
    FSUB float ptr [ESP + 0x28]         ; 004776fa
    MOV dword ptr [ESP + 0x4c],ECX      ; 004776fe
    FSTP float ptr [ESP + 0x3c]         ; 00477702
        ;   Label: LAB_00477702
    FLD float ptr [ESP + 0x14]          ; 00477706
    FLDZ                                ; 0047770a
    FCOMPP                              ; 0047770c
    FNSTSW AX                           ; 0047770e
    SAHF                                ; 00477710
    JA 0x00477962                       ; 00477711
        ;   XREF to: 00477962 (CONDITIONAL_JUMP)  ; LAB_00477962
    MOV EAX,dword ptr [ESP + 0x38]      ; 00477717
    MOV ESI,dword ptr [ESP + 0x64]      ; 0047771b
    SUB EAX,ESI                         ; 0047771f
    MOV ECX,0x1                         ; 00477721
    ADD EBX,EAX                         ; 00477726
    LEA EAX,[ESI + ECX*0x1]             ; 00477728
    MOV dword ptr [ESP + 0x80],EAX      ; 0047772b
    FILD dword ptr [ESP + 0x80]         ; 00477732
    FSUB float ptr [ESP + 0x78]         ; 00477739
    MOV dword ptr [ESP + 0x44],ECX      ; 0047773d
    FSTP float ptr [ESP + 0x40]         ; 00477741
        ;   Label: LAB_00477741
    FLD float ptr [ESP + 0x18]          ; 00477745
    FLDZ                                ; 00477749
    FCOMPP                              ; 0047774b
    FNSTSW AX                           ; 0047774d
    SAHF                                ; 0047774f
    JA 0x00477990                       ; 00477750
        ;   XREF to: 00477990 (CONDITIONAL_JUMP)  ; LAB_00477990
    MOV EAX,dword ptr [ESP + 0x30]      ; 00477756
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0047775a
    SUB EAX,ESI                         ; 0047775e
    MOV ECX,0x1                         ; 00477760
    ADD EBX,EAX                         ; 00477765
    LEA EAX,[ESI + ECX*0x1]             ; 00477767
    MOV dword ptr [ESP + 0x80],EAX      ; 0047776a
    FILD dword ptr [ESP + 0x80]         ; 00477771
    FSUB float ptr [ESP + 0x2c]         ; 00477778
    MOV dword ptr [ESP + 0x48],ECX      ; 0047777c
    FSTP float ptr [ESP + 0x7c]         ; 00477780
        ;   Label: LAB_00477780
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00477784
    MOV dword ptr [ESP + 0x80],EAX      ; 00477788
    FILD dword ptr [ESP + 0x80]         ; 0047778f
    FLD ST0                             ; 00477796
    FMUL float ptr [ESP + 0x3c]         ; 00477798
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047779c
    FXCH                                ; 004777a0
    FLD float ptr [ESP + 0x7c]          ; 004777a2
    FXCH                                ; 004777a6
    FMUL ST1                            ; 004777a8
    MOV dword ptr [ESP + 0x80],EAX      ; 004777aa
    MOV EAX,dword ptr [ESP + 0x54]      ; 004777b1
    FILD dword ptr [ESP + 0x80]         ; 004777b5
    MOV dword ptr [ESP + 0x80],EAX      ; 004777bc
    FLD ST0                             ; 004777c3
    FMUL float ptr [ESP + 0x40]         ; 004777c5
    FILD dword ptr [ESP + 0x80]         ; 004777c9
    FLD ST0                             ; 004777d0
    FMUL float ptr [ESP + 0x3c]         ; 004777d2
    FXCH                                ; 004777d6
    FMUL float ptr [ESP + 0x40]         ; 004777d8
    FXCH ST2                            ; 004777dc
    FSUBP ST6,ST0                       ; 004777de
    FXCH ST2                            ; 004777e0
    FMULP ST4                           ; 004777e2
    FXCH ST4                            ; 004777e4
    CALL FUN_005a3120                   ; 004777e6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST4                            ; 004777eb
    FSUBP ST2,ST0                       ; 004777ed
    FXCH ST3                            ; 004777ef
    FISTP dword ptr [ESP + 0x68]        ; 004777f1
    CALL FUN_005a3120                   ; 004777f5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 004777fa
    FSUBP ST2,ST0                       ; 004777fc
    FISTP dword ptr [ESP + 0x70]        ; 004777fe
    CALL FUN_005a3120                   ; 00477802
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x74]        ; 00477807
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0047780b
        ;   Label: LAB_0047780b
    MOV EDX,EAX                         ; 0047780f
    SAR EDX,0x1f                        ; 00477811
    SHL EDX,0x3                         ; 00477814
    SBB EAX,EDX                         ; 00477817
    SAR EAX,0x3                         ; 00477819
    PUSH EAX                            ; 0047781c
    MOV EAX,dword ptr [ESP + 0x68]      ; 0047781d
    MOV EDX,EAX                         ; 00477821
    SAR EDX,0x1f                        ; 00477823
    SHL EDX,0x3                         ; 00477826
    SBB EAX,EDX                         ; 00477829
    SAR EAX,0x3                         ; 0047782b
    PUSH EAX                            ; 0047782e
    MOV EAX,dword ptr [ESP + 0x68]      ; 0047782f
    MOV EDX,EAX                         ; 00477833
    SAR EDX,0x1f                        ; 00477835
    SHL EDX,0x3                         ; 00477838
    SBB EAX,EDX                         ; 0047783b
    SAR EAX,0x3                         ; 0047783d
    PUSH EAX                            ; 00477840
    MOV EDI,dword ptr [EBP + 0x14]      ; 00477841
    PUSH EDI                            ; 00477844
    CALL FUN_00473b60                   ; 00477845
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b60()
    MOV ECX,EAX                         ; 0047784a
    ADD ESP,0x10                        ; 0047784c
    TEST EAX,EAX                        ; 0047784f
    JZ 0x004778ae                       ; 00477851
        ;   XREF to: 004778ae (CONDITIONAL_JUMP)  ; LAB_004778ae
    MOV EAX,dword ptr [ESP + 0x60]      ; 00477853
    MOV EDX,EAX                         ; 00477857
    MOV ESI,0x8                         ; 00477859
    SAR EDX,0x1f                        ; 0047785e
    IDIV ESI                            ; 00477861
    MOV EAX,dword ptr [ESP + 0x64]      ; 00477863
    MOV EDI,EDX                         ; 00477867
    MOV EDX,EAX                         ; 00477869
    SAR EDX,0x1f                        ; 0047786b
    IDIV ESI                            ; 0047786e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00477870
    MOV ESI,EDX                         ; 00477874
    MOV EDX,EAX                         ; 00477876
    MOV dword ptr [ESP + 0x80],0x8      ; 00477878
    SAR EDX,0x1f                        ; 00477883
    IDIV dword ptr [ESP + 0x80]         ; 00477886
    MOV EAX,dword ptr [ECX]             ; 0047788d
    TEST EAX,EAX                        ; 0047788f
    JZ 0x004778ae                       ; 00477891
        ;   XREF to: 004778ae (CONDITIONAL_JUMP)  ; LAB_004778ae
    SHL EDX,0x3                         ; 00477893
    ADD EDX,ESI                         ; 00477896
    ADD EAX,EDX                         ; 00477898
    XOR EDX,EDX                         ; 0047789a
    MOV DL,byte ptr [EAX]               ; 0047789c
    XOR EAX,EAX                         ; 0047789e
    MOV AL,byte ptr [EDI + 0x5fb0e8]    ; 004778a0 | DAT_005fb0e8
    TEST EDX,EAX                        ; 004778a6
    JNZ 0x004779be                      ; 004778a8
        ;   XREF to: 004779be (CONDITIONAL_JUMP)  ; LAB_004779be
    DEC EBX                             ; 004778ae
        ;   Label: LAB_004778ae
    TEST EBX,EBX                        ; 004778af
    JLE 0x00477929                      ; 004778b1
        ;   XREF to: 00477929 (CONDITIONAL_JUMP)  ; LAB_00477929
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004778b3
    MOV ECX,dword ptr [ESP + 0x48]      ; 004778b7
    MOV EAX,dword ptr [ESP + 0x70]      ; 004778bb
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004778bf
    MOV EDI,dword ptr [ESP + 0x58]      ; 004778c3
    ADD ESI,ECX                         ; 004778c7
    ADD EAX,EDX                         ; 004778c9
    MOV ECX,dword ptr [ESP + 0x74]      ; 004778cb
    MOV EDX,dword ptr [ESP + 0x68]      ; 004778cf
    SUB ECX,EDI                         ; 004778d3
    TEST EDX,EDX                        ; 004778d5
    JL 0x004779cc                       ; 004778d7
        ;   XREF to: 004779cc (CONDITIONAL_JUMP)  ; LAB_004779cc
    MOV EDI,dword ptr [ESP + 0x70]      ; 004778dd
    TEST EDI,EDI                        ; 004778e1
    JL 0x004779d4                       ; 004778e3
        ;   XREF to: 004779d4 (CONDITIONAL_JUMP)  ; LAB_004779d4
    MOV EAX,dword ptr [ESP + 0x44]      ; 004778e9
    MOV EDX,dword ptr [ESP + 0x64]      ; 004778ed
    MOV ECX,dword ptr [ESP + 0x68]      ; 004778f1
    ADD EDX,EAX                         ; 004778f5
    MOV EAX,dword ptr [ESP + 0x58]      ; 004778f7
    MOV ESI,EDI                         ; 004778fb
    SUB ECX,EAX                         ; 004778fd
    MOV EAX,dword ptr [ESP + 0x54]      ; 004778ff
    MOV dword ptr [ESP + 0x64],EDX      ; 00477903
    SUB ESI,EAX                         ; 00477907
    MOV dword ptr [ESP + 0x68],ECX      ; 00477909
    MOV dword ptr [ESP + 0x70],ESI      ; 0047790d
    JMP 0x0047780b                      ; 00477911
        ;   XREF to: 0047780b (UNCONDITIONAL_JUMP)  ; LAB_0047780b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00477916
        ;   Label: LAB_00477916
    CMP EAX,dword ptr [ESP + 0x30]      ; 0047791a
    JNZ 0x00477655                      ; 0047791e
        ;   XREF to: 00477655 (CONDITIONAL_JUMP)  ; LAB_00477655
    JMP 0x0047780b                      ; 00477924
        ;   XREF to: 0047780b (UNCONDITIONAL_JUMP)  ; LAB_0047780b
    XOR EDX,EDX                         ; 00477929
        ;   Label: LAB_00477929
    MOV EAX,EDX                         ; 0047792b
    MOV ESP,EBP                         ; 0047792d
    POP EBP                             ; 0047792f
    POP EDI                             ; 00477930
    POP ESI                             ; 00477931
    POP EBX                             ; 00477932
    RET                                 ; 00477933
    MOV EAX,dword ptr [ESP + 0x60]      ; 00477934
        ;   Label: LAB_00477934
    SUB EAX,dword ptr [ESP + 0x34]      ; 00477938
    ADD EBX,EAX                         ; 0047793c
    MOV EAX,dword ptr [ESP + 0x60]      ; 0047793e
    MOV dword ptr [ESP + 0x80],EAX      ; 00477942
    MOV EDI,0xffffffff                  ; 00477949
    FILD dword ptr [ESP + 0x80]         ; 0047794e
    FSUBR float ptr [ESP + 0x28]        ; 00477955
    MOV dword ptr [ESP + 0x4c],EDI      ; 00477959
    JMP 0x00477702                      ; 0047795d
        ;   XREF to: 00477702 (UNCONDITIONAL_JUMP)  ; LAB_00477702
    MOV EAX,dword ptr [ESP + 0x64]      ; 00477962
        ;   Label: LAB_00477962
    SUB EAX,dword ptr [ESP + 0x38]      ; 00477966
    ADD EBX,EAX                         ; 0047796a
    MOV EAX,dword ptr [ESP + 0x64]      ; 0047796c
    MOV dword ptr [ESP + 0x80],EAX      ; 00477970
    MOV EDI,0xffffffff                  ; 00477977
    FILD dword ptr [ESP + 0x80]         ; 0047797c
    FSUBR float ptr [ESP + 0x78]        ; 00477983
    MOV dword ptr [ESP + 0x44],EDI      ; 00477987
    JMP 0x00477741                      ; 0047798b
        ;   XREF to: 00477741 (UNCONDITIONAL_JUMP)  ; LAB_00477741
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00477990
        ;   Label: LAB_00477990
    SUB EAX,dword ptr [ESP + 0x30]      ; 00477994
    ADD EBX,EAX                         ; 00477998
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0047799a
    MOV dword ptr [ESP + 0x80],EAX      ; 0047799e
    MOV EDI,0xffffffff                  ; 004779a5
    FILD dword ptr [ESP + 0x80]         ; 004779aa
    FSUBR float ptr [ESP + 0x2c]        ; 004779b1
    MOV dword ptr [ESP + 0x48],EDI      ; 004779b5
    JMP 0x00477780                      ; 004779b9
        ;   XREF to: 00477780 (UNCONDITIONAL_JUMP)  ; LAB_00477780
    MOV EDX,0x1                         ; 004779be
        ;   Label: LAB_004779be
    MOV EAX,EDX                         ; 004779c3
    MOV ESP,EBP                         ; 004779c5
    POP EBP                             ; 004779c7
    POP EDI                             ; 004779c8
    POP ESI                             ; 004779c9
    POP EBX                             ; 004779ca
    RET                                 ; 004779cb
    MOV EDI,dword ptr [ESP + 0x74]      ; 004779cc
        ;   Label: LAB_004779cc
    TEST EDI,EDI                        ; 004779d0
    JL 0x004779e5                       ; 004779d2
        ;   XREF to: 004779e5 (CONDITIONAL_JUMP)  ; LAB_004779e5
    MOV dword ptr [ESP + 0x74],ECX      ; 004779d4
        ;   Label: LAB_004779d4
    MOV dword ptr [ESP + 0x70],EAX      ; 004779d8
    MOV dword ptr [ESP + 0x6c],ESI      ; 004779dc
    JMP 0x0047780b                      ; 004779e0
        ;   XREF to: 0047780b (UNCONDITIONAL_JUMP)  ; LAB_0047780b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004779e5
        ;   Label: LAB_004779e5
    MOV EDX,dword ptr [ESP + 0x60]      ; 004779e9
    MOV ECX,dword ptr [ESP + 0x68]      ; 004779ed
    ADD EDX,EAX                         ; 004779f1
    ADD ECX,dword ptr [ESP + 0x5c]      ; 004779f3
    MOV EAX,dword ptr [ESP + 0x54]      ; 004779f7
    MOV dword ptr [ESP + 0x60],EDX      ; 004779fb
    LEA ESI,[EDI + EAX*0x1]             ; 004779ff
    MOV dword ptr [ESP + 0x68],ECX      ; 00477a02
    MOV dword ptr [ESP + 0x74],ESI      ; 00477a06
    JMP 0x0047780b                      ; 00477a0a
        ;   XREF to: 0047780b (UNCONDITIONAL_JUMP)  ; LAB_0047780b

