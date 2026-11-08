; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e500(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x1b8]:8  local_1b8
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined8       Stack[-0x1a0]:8  local_1a0
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined        Stack[-0x180]:1  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
;   FUN_004a1ad0 at 004a1dbc
;
; Referenced Globals:
;   undefined4 DAT_005c0880
;   undefined4 DAT_005c0888
;   undefined4 DAT_005c0890
;   undefined4 DAT_005c0898
;   undefined4 DAT_005c08a0
;   undefined4 DAT_005c08a8
;   undefined4 DAT_005c08b0
;   undefined4 DAT_005c08b8
;   undefined4 DAT_005c08c0
;   undefined4 DAT_005c08c8
;   undefined4 DAT_005c08d0
;   undefined4 DAT_005c08d4
;   undefined4 DAT_005c08d8
;   undefined4 DAT_005c08dc
;   undefined4 DAT_005c08e0
;   ... and 18 more
;
; Called Functions:
;   FUN_0040ce40
;   FUN_0046c510
;   FUN_0046ce90
;   FUN_0046cf30
;   FUN_0046d1c0
;   FUN_0046d250
;   FUN_0046d4b0
;   FUN_0046e5e0
;   FUN_005632a3
;   FUN_005a3120
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e500
        ;   Label: FUN_0049e500
    PUSH ESI                            ; 0049e501
    PUSH EDI                            ; 0049e502
    PUSH EBP                            ; 0049e503
    MOV EBP,ESP                         ; 0049e504
    SUB ESP,0x1a4                       ; 0049e506
    AND ESP,0xfffffff8                  ; 0049e50c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e50f
    FLD float ptr [EAX + 0xc]           ; 0049e512
    FLDZ                                ; 0049e515
    FCOMPP                              ; 0049e517
    FNSTSW AX                           ; 0049e519
    SAHF                                ; 0049e51b
    JNC 0x0049ee7b                      ; 0049e51c
        ;   XREF to: 0049ee7b (CONDITIONAL_JUMP)  ; LAB_0049ee7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e522
    MOV EDX,dword ptr [EAX + 0x24]      ; 0049e525
    CMP EDX,0x2                         ; 0049e528
    JZ 0x0049ee82                       ; 0049e52b
        ;   XREF to: 0049ee82 (CONDITIONAL_JUMP)  ; LAB_0049ee82
    CMP EDX,0x7                         ; 0049e531
    JNZ 0x0049eeb6                      ; 0049e534
        ;   XREF to: 0049eeb6 (CONDITIONAL_JUMP)  ; LAB_0049eeb6
    FLD float ptr [EAX + 0x1c]          ; 0049e53a
    CALL FUN_005a3120                   ; 0049e53d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1a0]       ; 0049e542
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 0049e549
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049e550
    SUB EAX,EDX                         ; 0049e557
    SHL EAX,0x3                         ; 0049e559
    ADD EAX,0x5fd804                    ; 0049e55c | DAT_005fd804
    PUSH EAX                            ; 0049e561
    MOV EDX,dword ptr [0x005f2afc]      ; 0049e562 | DAT_005f2afc
    PUSH EDX                            ; 0049e568 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0049e569
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
        ;   Label: LAB_0049e569
    ADD ESP,0x8                         ; 0049e56e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e571
    MOV dword ptr [EAX + 0xc],0x0       ; 0049e574
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e57b
        ;   Label: LAB_0049e57b
    MOV EBX,dword ptr [EAX + 0x24]      ; 0049e57e
    CMP EBX,0x2                         ; 0049e581
    JNZ 0x0049efe9                      ; 0049e584
        ;   XREF to: 0049efe9 (CONDITIONAL_JUMP)  ; LAB_0049efe9
    MOV EDI,dword ptr [0x005f2afc]      ; 0049e58a | DAT_005f2afc
        ;   Label: LAB_0049e58a
    PUSH EDI                            ; 0049e590 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x100]               ; 0049e591
    CALL FUN_0046d1c0                   ; 0049e598
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d1c0()
    LEA EDI,[ESP + 0xe8]                ; 0049e59d
    LEA ESI,[ESP + 0x100]               ; 0049e5a4
    ADD ESP,0x4                         ; 0049e5ab
    LEA EDX,[ESP + 0x114]               ; 0049e5ae
    MOVSD ES:EDI,ESI                    ; 0049e5b5
    MOVSD ES:EDI,ESI                    ; 0049e5b6
    MOVSD ES:EDI,ESI                    ; 0049e5b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e5b8
    FLD float ptr [ESP + 0xe4]          ; 0049e5bb
    FLD float ptr [ESP + 0xe8]          ; 0049e5c2
    FLD float ptr [ESP + 0xec]          ; 0049e5c9
    LEA EDI,[ESP + 0x60]                ; 0049e5d0
    LEA ESI,[ESP + 0xa8]                ; 0049e5d4
    FXCH ST2                            ; 0049e5db
    FSUB float ptr [EAX]                ; 0049e5dd
    FXCH                                ; 0049e5df
    FSUB float ptr [EAX + 0x4]          ; 0049e5e1
    FXCH ST2                            ; 0049e5e4
    FSUB float ptr [EAX + 0x8]          ; 0049e5e6
    FXCH                                ; 0049e5e9
    FSTP float ptr [ESP + 0xa8]         ; 0049e5eb
    FXCH                                ; 0049e5f2
    FSTP float ptr [ESP + 0xac]         ; 0049e5f4
    FSTP float ptr [ESP + 0xb0]         ; 0049e5fb
    LEA EAX,[ESP + 0x60]                ; 0049e602
    MOVSD ES:EDI,ESI                    ; 0049e606
    MOVSD ES:EDI,ESI                    ; 0049e607
    MOVSD ES:EDI,ESI                    ; 0049e608
    CMP EDX,EAX                         ; 0049e609
    JZ 0x0049e62e                       ; 0049e60b
        ;   XREF to: 0049e62e (CONDITIONAL_JUMP)  ; LAB_0049e62e
    MOV EAX,dword ptr [ESP + 0x60]      ; 0049e60d
    MOV dword ptr [ESP + 0x114],EAX     ; 0049e611
    MOV EAX,dword ptr [ESP + 0x64]      ; 0049e618
    MOV dword ptr [ESP + 0x118],EAX     ; 0049e61c
    MOV EAX,dword ptr [ESP + 0x68]      ; 0049e623
    MOV dword ptr [ESP + 0x11c],EAX     ; 0049e627
    FLD float ptr [ESP + 0x118]         ; 0049e62e
        ;   Label: LAB_0049e62e
    FMUL ST0                            ; 0049e635
    FLD float ptr [ESP + 0x114]         ; 0049e637
    FMUL ST0                            ; 0049e63e
    FADDP                               ; 0049e640
    FLD float ptr [ESP + 0x11c]         ; 0049e642
    FMUL ST0                            ; 0049e649
    FADDP                               ; 0049e64b
    FSQRT                               ; 0049e64d
    FLDZ                                ; 0049e64f
    FXCH                                ; 0049e651
    FSTP float ptr [ESP + 0x184]        ; 0049e653
    FCOMP float ptr [ESP + 0x184]       ; 0049e65a
    FNSTSW AX                           ; 0049e661
    SAHF                                ; 0049e663
    JNC 0x0049f01a                      ; 0049e664
        ;   XREF to: 0049f01a (CONDITIONAL_JUMP)  ; LAB_0049f01a
    FLD1                                ; 0049e66a
    FLD float ptr [ESP + 0x114]         ; 0049e66c
    FXCH                                ; 0049e673
    FDIV float ptr [ESP + 0x184]        ; 0049e675
    FXCH                                ; 0049e67c
    FMUL ST1                            ; 0049e67e
    FLD float ptr [ESP + 0x118]         ; 0049e680
    FMUL ST2                            ; 0049e687
    FLD float ptr [ESP + 0x11c]         ; 0049e689
    FMULP ST3                           ; 0049e690
    FXCH                                ; 0049e692
    FSTP float ptr [ESP + 0x114]        ; 0049e694
    FSTP float ptr [ESP + 0x118]        ; 0049e69b
    FSTP float ptr [ESP + 0x11c]        ; 0049e6a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e6a9
        ;   Label: LAB_0049e6a9
    CMP dword ptr [EAX + 0x24],0x7      ; 0049e6ac
    JNZ 0x0049e6ea                      ; 0049e6b0
        ;   XREF to: 0049e6ea (CONDITIONAL_JUMP)  ; LAB_0049e6ea
    FLD float ptr [0x005c0880]          ; 0049e6b2 | DAT_005c0880
    FLD float ptr [ESP + 0x114]         ; 0049e6b8
    FMUL ST1                            ; 0049e6bf
    FLD float ptr [ESP + 0x118]         ; 0049e6c1
    FMUL ST2                            ; 0049e6c8
    FLD float ptr [ESP + 0x11c]         ; 0049e6ca
    FMULP ST3                           ; 0049e6d1
    FSTP float ptr [ESP + 0x118]        ; 0049e6d3
    FXCH                                ; 0049e6da
    FSTP float ptr [ESP + 0x11c]        ; 0049e6dc
    FSTP float ptr [ESP + 0x114]        ; 0049e6e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e6ea
        ;   Label: LAB_0049e6ea
    FLD float ptr [ESP + 0x114]         ; 0049e6ed
    FADD float ptr [EAX]                ; 0049e6f4
    FLD float ptr [ESP + 0x118]         ; 0049e6f6
    FXCH                                ; 0049e6fd
    FSTP float ptr [ESP + 0x114]        ; 0049e6ff
    FADD float ptr [EAX + 0x4]          ; 0049e706
    FLD float ptr [ESP + 0x11c]         ; 0049e709
    FXCH                                ; 0049e710
    FSTP float ptr [ESP + 0x118]        ; 0049e712
    FADD float ptr [EAX + 0x8]          ; 0049e719
    LEA EAX,[ESP + 0x114]               ; 0049e71c
    PUSH EAX                            ; 0049e723
    MOV ESI,dword ptr [0x005f2afc]      ; 0049e724 | DAT_005f2afc
    PUSH ESI                            ; 0049e72a | DAT_01bdd7e4
    FSTP float ptr [ESP + 0x124]        ; 0049e72b
    CALL FUN_0046ce90                   ; 0049e732
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
        ;   Label: LAB_0049e732
    ADD ESP,0x8                         ; 0049e737
    MOV EDI,dword ptr [0x005f2afc]      ; 0049e73a | DAT_005f2afc
    PUSH EDI                            ; 0049e740 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x130]               ; 0049e741
    CALL FUN_0046d250                   ; 0049e748
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d250()
    ADD ESP,0x4                         ; 0049e74d
    PUSH 0x0                            ; 0049e750
    LEA EAX,[ESP + 0x7c]                ; 0049e752
    LEA EDI,[ESP + 0x7c]                ; 0049e756
    PUSH EAX                            ; 0049e75a
    MOV EAX,[0x005f2afc]                ; 0049e75b | DAT_005f2afc
    LEA ESI,[ESP + 0x134]               ; 0049e760
    PUSH EAX                            ; 0049e767 | DAT_01bdd7e4
    MOVSD ES:EDI,ESI                    ; 0049e768
    MOVSD ES:EDI,ESI                    ; 0049e769
    MOVSD ES:EDI,ESI                    ; 0049e76a
    CALL FUN_0046cf30                   ; 0049e76b
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 0049e770
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e773
    MOV EDX,dword ptr [EAX + 0x24]      ; 0049e776
    CMP EDX,0x6                         ; 0049e779
    JNZ 0x0049f036                      ; 0049e77c
        ;   XREF to: 0049f036 (CONDITIONAL_JUMP)  ; LAB_0049f036
    FLD float ptr [0x005df904]          ; 0049e782 | DAT_005df904
    FLD ST0                             ; 0049e788
        ;   Label: LAB_0049e788
    FSUB float ptr [EAX + 0xc]          ; 0049e78a
    FDIVRP                              ; 0049e78d
    FSTP float ptr [ESP + 0x30]         ; 0049e78f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e793
        ;   Label: LAB_0049e793
    MOV ESI,dword ptr [EAX + 0x24]      ; 0049e796
    CMP ESI,0x2                         ; 0049e799
    JNZ 0x0049f052                      ; 0049e79c
        ;   XREF to: 0049f052 (CONDITIONAL_JUMP)  ; LAB_0049f052
    MOV EDX,0x408ccccd                  ; 0049e7a2
        ;   Label: LAB_0049e7a2
    MOV dword ptr [ESP + 0x24],EDX      ; 0049e7a7
    MOV dword ptr [ESP + 0x198],EDX     ; 0049e7ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e7b2
        ;   Label: LAB_0049e7b2
    CMP dword ptr [EAX + 0x24],0x0      ; 0049e7b5
    JNZ 0x0049e8dd                      ; 0049e7b9
        ;   XREF to: 0049e8dd (CONDITIONAL_JUMP)  ; LAB_0049e8dd
    FLD float ptr [ESP + 0x30]          ; 0049e7bf
    FST double ptr [ESP]                ; 0049e7c3
    FCOMP double ptr [0x005c0890]       ; 0049e7c6 | DAT_005c0890
    FNSTSW AX                           ; 0049e7cc
    SAHF                                ; 0049e7ce
    JNC 0x0049e8dd                      ; 0049e7cf
        ;   XREF to: 0049e8dd (CONDITIONAL_JUMP)  ; LAB_0049e8dd
    MOV ESI,dword ptr [0x005f2afc]      ; 0049e7d5 | DAT_005f2afc
    PUSH ESI                            ; 0049e7db | DAT_01bdd7e4
    LEA ESI,[ESP + 0x154]               ; 0049e7dc
    LEA EDI,[ESP + 0xdc]                ; 0049e7e3
    CALL FUN_0046d1c0                   ; 0049e7ea
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d1c0()
    LEA ESI,[ESP + 0x154]               ; 0049e7ef
    ADD ESP,0x4                         ; 0049e7f6
    MOVSD ES:EDI,ESI                    ; 0049e7f9
    MOVSD ES:EDI,ESI                    ; 0049e7fa
    MOVSD ES:EDI,ESI                    ; 0049e7fb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e7fc
    FLD float ptr [ESP + 0xd8]          ; 0049e7ff
    FLD float ptr [ESP + 0xdc]          ; 0049e806
    FLD float ptr [ESP + 0xe0]          ; 0049e80d
    LEA EDI,[ESP + 0x108]               ; 0049e814
    LEA ESI,[ESP + 0x90]                ; 0049e81b
    FXCH ST2                            ; 0049e822
    FSUB float ptr [EAX]                ; 0049e824
    FXCH                                ; 0049e826
    FSUB float ptr [EAX + 0x4]          ; 0049e828
    FXCH ST2                            ; 0049e82b
    FSUB float ptr [EAX + 0x8]          ; 0049e82d
    FXCH                                ; 0049e830
    FSTP float ptr [ESP + 0x90]         ; 0049e832
    FXCH                                ; 0049e839
    FSTP float ptr [ESP + 0x94]         ; 0049e83b
    FSTP float ptr [ESP + 0x98]         ; 0049e842
    MOVSD ES:EDI,ESI                    ; 0049e849
    MOVSD ES:EDI,ESI                    ; 0049e84a
    MOVSD ES:EDI,ESI                    ; 0049e84b
    FLD float ptr [ESP + 0x10c]         ; 0049e84c
    FMUL float ptr [EAX + 0x14]         ; 0049e853
    FLD float ptr [ESP + 0x108]         ; 0049e856
    FMUL float ptr [EAX + 0x10]         ; 0049e85d
    FADDP                               ; 0049e860
    FLD float ptr [ESP + 0x110]         ; 0049e862
    FMUL float ptr [EAX + 0x18]         ; 0049e869
    FADDP                               ; 0049e86c
    MOV EDX,EAX                         ; 0049e86e
    FABS                                ; 0049e870
    FLD float ptr [ESP + 0x10c]         ; 0049e872
    FMUL ST0                            ; 0049e879
    FLD float ptr [ESP + 0x108]         ; 0049e87b
    FMUL ST0                            ; 0049e882
    FADDP                               ; 0049e884
    FLD float ptr [ESP + 0x110]         ; 0049e886
    FMUL ST0                            ; 0049e88d
    FADDP                               ; 0049e88f
    FSQRT                               ; 0049e891
    FLD float ptr [EDX + 0x14]          ; 0049e893
    FMUL ST0                            ; 0049e896
    FLD float ptr [EDX + 0x10]          ; 0049e898
    FMUL ST0                            ; 0049e89b
    FADDP                               ; 0049e89d
    FLD float ptr [EDX + 0x18]          ; 0049e89f
    FMUL ST0                            ; 0049e8a2
    FADDP                               ; 0049e8a4
    FSQRT                               ; 0049e8a6
    FMULP                               ; 0049e8a8
    FXCH                                ; 0049e8aa
    FSTP float ptr [ESP + 0x2c]         ; 0049e8ac
    FDIVR float ptr [ESP + 0x2c]        ; 0049e8b0
    FLD double ptr [ESP]                ; 0049e8b4
    FMUL double ptr [0x005c08a8]        ; 0049e8b7 | DAT_005c08a8
    FLD1                                ; 0049e8bd
    FLD1                                ; 0049e8bf
    FSUBRP ST3,ST0                      ; 0049e8c1
    FSUBRP                              ; 0049e8c3
    FMULP                               ; 0049e8c5
    FST float ptr [ESP + 0x2c]          ; 0049e8c7
    FMUL double ptr [0x005c08a0]        ; 0049e8cb | DAT_005c08a0
    FLD1                                ; 0049e8d1
    FADDP                               ; 0049e8d3
    FMUL float ptr [ESP + 0x24]         ; 0049e8d5
    FSTP float ptr [ESP + 0x24]         ; 0049e8d9
    MOV EDI,0x43000000                  ; 0049e8dd
        ;   Label: LAB_0049e8dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e8e2
    MOV dword ptr [ESP + 0x28],EDI      ; 0049e8e5
    MOV EDX,dword ptr [EAX + 0x24]      ; 0049e8e9
    MOV dword ptr [ESP + 0x20],EDI      ; 0049e8ec
    CMP EDX,0x7                         ; 0049e8f0
    JNZ 0x0049f0f7                      ; 0049e8f3
        ;   XREF to: 0049f0f7 (CONDITIONAL_JUMP)  ; LAB_0049f0f7
    PUSH 0x3f800000                     ; 0049e8f9
        ;   Label: LAB_0049e8f9
    PUSH 0x0                            ; 0049e8fe
    CALL FUN_0040ce40                   ; 0049e900
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0049e905
    FLD float ptr [ESP + 0x1a8]         ; 0049e90c
    ADD ESP,0x8                         ; 0049e913
    PUSH 0x3f800000                     ; 0049e916
    PUSH 0x0                            ; 0049e91b
    FSTP float ptr [ESP + 0x164]        ; 0049e91d
    CALL FUN_0040ce40                   ; 0049e924
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0049e929
    FLD float ptr [ESP + 0x1a8]         ; 0049e930
    ADD ESP,0x8                         ; 0049e937
    FST float ptr [ESP + 0x160]         ; 0049e93a
    FMUL float ptr [ESP + 0x160]        ; 0049e941
    FLD float ptr [ESP + 0x15c]         ; 0049e948
    FMUL ST0                            ; 0049e94f
    FADDP                               ; 0049e951
    FLD float ptr [ESP + 0x164]         ; 0049e953
    FMUL ST0                            ; 0049e95a
    FADDP                               ; 0049e95c
    FSQRT                               ; 0049e95e
    FLDZ                                ; 0049e960
    FXCH                                ; 0049e962
    FSTP float ptr [ESP + 0x180]        ; 0049e964
    FCOMP float ptr [ESP + 0x180]       ; 0049e96b
    FNSTSW AX                           ; 0049e972
    SAHF                                ; 0049e974
    PUSH 0x40c90fdb                     ; 0049e975
    LEA EDI,[ESP + 0xb8]                ; 0049e97a
    MOV ESI,0x2cfd900                   ; 0049e981
    PUSH 0x0                            ; 0049e986
    MOVSD ES:EDI,ESI                    ; 0049e988 | DAT_02cfd900
    MOVSD ES:EDI,ESI                    ; 0049e989 | DAT_02cfd904
    MOVSD ES:EDI,ESI                    ; 0049e98a | DAT_02cfd908
    CALL FUN_0040ce40                   ; 0049e98b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0049e990
    FLD float ptr [ESP + 0x1a8]         ; 0049e997
    ADD ESP,0x8                         ; 0049e99e
    FST float ptr [ESP + 0x34]          ; 0049e9a1
    FLD ST0                             ; 0049e9a5
    FSIN                                ; 0049e9a7
    FXCH                                ; 0049e9a9
    FCOS                                ; 0049e9ab
    FXCH                                ; 0049e9ad
    FMUL double ptr [0x005c08c8]        ; 0049e9af | DAT_005c08c8
    FXCH                                ; 0049e9b5
    FMUL double ptr [0x005c08c8]        ; 0049e9b7 | DAT_005c08c8
    FLD float ptr [ESP + 0x20]          ; 0049e9bd
    FSTP double ptr [ESP + 0x10]        ; 0049e9c1
    FXCH                                ; 0049e9c5
    FMUL double ptr [ESP + 0x10]        ; 0049e9c7
    FLD float ptr [ESP + 0x28]          ; 0049e9cb
    FSTP double ptr [ESP + 0x18]        ; 0049e9cf
    FXCH                                ; 0049e9d3
    FMUL double ptr [ESP + 0x18]        ; 0049e9d5
    FXCH                                ; 0049e9d9
    FMUL double ptr [0x005c08b8]        ; 0049e9db | DAT_005c08b8
    FXCH                                ; 0049e9e1
    FMUL double ptr [0x005c08b8]        ; 0049e9e3 | DAT_005c08b8
    LEA EBX,[ESP + 0x138]               ; 0049e9e9
    MOV EDX,dword ptr [0x005f2afc]      ; 0049e9f0 | DAT_005f2afc
    LEA EAX,[ESP + 0xb4]                ; 0049e9f6
    FXCH                                ; 0049e9fd
    FSTP float ptr [ESP + 0xb4]         ; 0049e9ff
    FSTP float ptr [ESP + 0xb8]         ; 0049ea06
    FLD float ptr [EAX]                 ; 0049ea0d
    FMUL float ptr [0x005df8e4]         ; 0049ea0f | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049ea15
    FLD float ptr [EAX + 0x4]           ; 0049ea17
    FMUL float ptr [0x005df8e4]         ; 0049ea1a | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049ea20
    FLD float ptr [EAX + 0x8]           ; 0049ea23
    FMUL float ptr [0x005df8e4]         ; 0049ea26 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049ea2c
    LEA EAX,[ESP + 0x138]               ; 0049ea2f
    PUSH EAX                            ; 0049ea36
    MOV EAX,dword ptr [EDX]             ; 0049ea37 | DAT_01bdd7e4
    PUSH EAX                            ; 0049ea39
    CALL FUN_005632a3                   ; 0049ea3a
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049ea3f
    FLD float ptr [ESP + 0x34]          ; 0049ea42
    FADD float ptr [0x005c08d0]         ; 0049ea46 | DAT_005c08d0
    FST float ptr [ESP + 0x34]          ; 0049ea4c
    FLD ST0                             ; 0049ea50
    FSIN                                ; 0049ea52
    FXCH                                ; 0049ea54
    FCOS                                ; 0049ea56
    FXCH                                ; 0049ea58
    FMUL double ptr [0x005c08c8]        ; 0049ea5a | DAT_005c08c8
    FXCH                                ; 0049ea60
    FMUL double ptr [0x005c08c8]        ; 0049ea62 | DAT_005c08c8
    FXCH                                ; 0049ea68
    FMUL double ptr [ESP + 0x10]        ; 0049ea6a
    FXCH                                ; 0049ea6e
    FMUL double ptr [ESP + 0x18]        ; 0049ea70
    FXCH                                ; 0049ea74
    FMUL double ptr [0x005c08b8]        ; 0049ea76 | DAT_005c08b8
    FXCH                                ; 0049ea7c
    FMUL double ptr [0x005c08b8]        ; 0049ea7e | DAT_005c08b8
    MOV EDX,dword ptr [0x005f2afc]      ; 0049ea84 | DAT_005f2afc
    FXCH                                ; 0049ea8a
    FSTP float ptr [ESP + 0xb4]         ; 0049ea8c
    FSTP float ptr [ESP + 0xb8]         ; 0049ea93
    LEA EBX,[ESP + 0xc0]                ; 0049ea9a
    LEA EAX,[ESP + 0xb4]                ; 0049eaa1
    FLD float ptr [EAX]                 ; 0049eaa8
    FMUL float ptr [0x005df8e4]         ; 0049eaaa | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049eab0
    FLD float ptr [EAX + 0x4]           ; 0049eab2
    FMUL float ptr [0x005df8e4]         ; 0049eab5 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049eabb
    FLD float ptr [EAX + 0x8]           ; 0049eabe
    FMUL float ptr [0x005df8e4]         ; 0049eac1 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049eac7
    LEA EAX,[ESP + 0xc0]                ; 0049eaca
    PUSH EAX                            ; 0049ead1
    MOV EAX,dword ptr [EDX]             ; 0049ead2 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0049ead4
    PUSH EAX                            ; 0049ead7
    CALL FUN_005632a3                   ; 0049ead8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049eadd
    FLD float ptr [ESP + 0x34]          ; 0049eae0
    FADD float ptr [0x005c08d0]         ; 0049eae4 | DAT_005c08d0
    FST float ptr [ESP + 0x34]          ; 0049eaea
    FLD ST0                             ; 0049eaee
    FSIN                                ; 0049eaf0
    FXCH                                ; 0049eaf2
    FCOS                                ; 0049eaf4
    FXCH                                ; 0049eaf6
    FMUL double ptr [0x005c08c8]        ; 0049eaf8 | DAT_005c08c8
    FXCH                                ; 0049eafe
    FMUL double ptr [0x005c08c8]        ; 0049eb00 | DAT_005c08c8
    FXCH                                ; 0049eb06
    FMUL double ptr [ESP + 0x10]        ; 0049eb08
    FXCH                                ; 0049eb0c
    FMUL double ptr [ESP + 0x18]        ; 0049eb0e
    FXCH                                ; 0049eb12
    FMUL double ptr [0x005c08b8]        ; 0049eb14 | DAT_005c08b8
    FXCH                                ; 0049eb1a
    FMUL double ptr [0x005c08b8]        ; 0049eb1c | DAT_005c08b8
    LEA EBX,[ESP + 0x84]                ; 0049eb22
    MOV EDX,dword ptr [0x005f2afc]      ; 0049eb29 | DAT_005f2afc
    LEA EAX,[ESP + 0xb4]                ; 0049eb2f
    FXCH                                ; 0049eb36
    FSTP float ptr [ESP + 0xb4]         ; 0049eb38
    FSTP float ptr [ESP + 0xb8]         ; 0049eb3f
    FLD float ptr [EAX]                 ; 0049eb46
    FMUL float ptr [0x005df8e4]         ; 0049eb48 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049eb4e
    FLD float ptr [EAX + 0x4]           ; 0049eb50
    FMUL float ptr [0x005df8e4]         ; 0049eb53 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049eb59
    FLD float ptr [EAX + 0x8]           ; 0049eb5c
    FMUL float ptr [0x005df8e4]         ; 0049eb5f | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049eb65
    LEA EAX,[ESP + 0x84]                ; 0049eb68
    PUSH EAX                            ; 0049eb6f
    MOV EAX,dword ptr [EDX]             ; 0049eb70 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0049eb72
    PUSH EAX                            ; 0049eb75
    CALL FUN_005632a3                   ; 0049eb76
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049eb7b
    FLD float ptr [ESP + 0x34]          ; 0049eb7e
    FADD float ptr [0x005c08d0]         ; 0049eb82 | DAT_005c08d0
    FST float ptr [ESP + 0x34]          ; 0049eb88
    FLD ST0                             ; 0049eb8c
    FSIN                                ; 0049eb8e
    FXCH                                ; 0049eb90
    FCOS                                ; 0049eb92
    FXCH                                ; 0049eb94
    FMUL double ptr [0x005c08c8]        ; 0049eb96 | DAT_005c08c8
    FXCH                                ; 0049eb9c
    FMUL double ptr [0x005c08c8]        ; 0049eb9e | DAT_005c08c8
    FXCH                                ; 0049eba4
    FMUL double ptr [ESP + 0x10]        ; 0049eba6
    FXCH                                ; 0049ebaa
    FMUL double ptr [ESP + 0x18]        ; 0049ebac
    FXCH                                ; 0049ebb0
    FMUL double ptr [0x005c08b8]        ; 0049ebb2 | DAT_005c08b8
    FXCH                                ; 0049ebb8
    FMUL double ptr [0x005c08b8]        ; 0049ebba | DAT_005c08b8
    LEA EBX,[ESP + 0xcc]                ; 0049ebc0
    MOV EDX,dword ptr [0x005f2afc]      ; 0049ebc7 | DAT_005f2afc
    LEA EAX,[ESP + 0xb4]                ; 0049ebcd
    FXCH                                ; 0049ebd4
    FSTP float ptr [ESP + 0xb4]         ; 0049ebd6
    FSTP float ptr [ESP + 0xb8]         ; 0049ebdd
    FLD float ptr [EAX]                 ; 0049ebe4
    FMUL float ptr [0x005df8e4]         ; 0049ebe6 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049ebec
    FLD float ptr [EAX + 0x4]           ; 0049ebee
    FMUL float ptr [0x005df8e4]         ; 0049ebf1 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049ebf7
    FLD float ptr [EAX + 0x8]           ; 0049ebfa
    FMUL float ptr [0x005df8e4]         ; 0049ebfd | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049ec03
    LEA EAX,[ESP + 0xcc]                ; 0049ec06
    PUSH EAX                            ; 0049ec0d
        ;   Label: LAB_0049ec0d
    MOV EAX,dword ptr [EDX]             ; 0049ec0e | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0049ec10
    PUSH EAX                            ; 0049ec15
    CALL FUN_005632a3                   ; 0049ec16
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049ec1b
    MOV EAX,[0x005f2afc]                ; 0049ec1e | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0049ec23 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x18],0x20000  ; 0049ec25
    MOV EDX,dword ptr [EAX]             ; 0049ec2c | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x1c],0x20000  ; 0049ec2e
    MOV EDX,dword ptr [EAX]             ; 0049ec35 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x48],0xfe0000 ; 0049ec37
    MOV EDX,dword ptr [EAX]             ; 0049ec3e | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x4c],0x20000  ; 0049ec40
    MOV EDX,dword ptr [EAX]             ; 0049ec47 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x78],0xfe0000 ; 0049ec49
    MOV EDX,dword ptr [EAX]             ; 0049ec50 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x7c],0xfe0000 ; 0049ec52
    MOV EDX,dword ptr [EAX]             ; 0049ec59 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xa8],0x20000  ; 0049ec5b
    MOV EAX,dword ptr [EAX]             ; 0049ec65 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0xac],0xfe0000 ; 0049ec67
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049ec71
    MOV ESI,dword ptr [EAX + 0x24]      ; 0049ec74
    TEST ESI,ESI                        ; 0049ec77
    JNZ 0x0049f2a8                      ; 0049ec79
        ;   XREF to: 0049f2a8 (CONDITIONAL_JUMP)  ; LAB_0049f2a8
    FLD1                                ; 0049ec7f
    FSUB float ptr [ESP + 0x30]         ; 0049ec81
    FMUL float ptr [0x005c08d8]         ; 0049ec85 | DAT_005c08d8
        ;   Label: LAB_0049ec85
    CALL FUN_005a3120                   ; 0049ec8b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
        ;   Label: LAB_0049ec8b
    FISTP dword ptr [ESP + 0x19c]       ; 0049ec90
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049ec97
        ;   Label: LAB_0049ec97
    CMP dword ptr [EAX + 0x24],0x0      ; 0049ec9a
    JNZ 0x0049f352                      ; 0049ec9e
        ;   XREF to: 0049f352 (CONDITIONAL_JUMP)  ; LAB_0049f352
    FLD float ptr [ESP + 0x30]          ; 0049eca4
    FLD float ptr [0x005c08d4]          ; 0049eca8 | DAT_005c08d4
    FSUB ST0,ST1                        ; 0049ecae
    FMULP                               ; 0049ecb0
    FLD ST0                             ; 0049ecb2
    FMUL float ptr [0x005c08e0]         ; 0049ecb4 | DAT_005c08e0
    FLD1                                ; 0049ecba
    FLD ST2                             ; 0049ecbc
    FXCH                                ; 0049ecbe
    FSUB ST0,ST3                        ; 0049ecc0
    FXCH                                ; 0049ecc2
    FMUL float ptr [0x005c08e8]         ; 0049ecc4 | DAT_005c08e8
    FXCH                                ; 0049ecca
    FMUL float ptr [0x005c08dc]         ; 0049eccc | DAT_005c08dc
    FXCH ST2                            ; 0049ecd2
    FADD ST0,ST2                        ; 0049ecd4
    FXCH ST3                            ; 0049ecd6
    FMUL float ptr [0x005c08ec]         ; 0049ecd8 | DAT_005c08ec
    FXCH ST3                            ; 0049ecde
    FLD float ptr [0x005c08e4]          ; 0049ece0 | DAT_005c08e4
    FXCH                                ; 0049ece6
    FMUL ST1                            ; 0049ece8
    FXCH ST2                            ; 0049ecea
    FADD ST0,ST3                        ; 0049ecec
    FXCH ST4                            ; 0049ecee
    FADDP ST3,ST0                       ; 0049ecf0
    FXCH ST3                            ; 0049ecf2
    FMUL ST3                            ; 0049ecf4
    FXCH ST2                            ; 0049ecf6
    FMULP ST3                           ; 0049ecf8
    CALL FUN_005a3120                   ; 0049ecfa
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 0049ecff
    CALL FUN_005a3120                   ; 0049ed01
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 0049ed06
    CALL FUN_005a3120                   ; 0049ed08
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 0049ed0d
    FISTP dword ptr [ESP + 0x18c]       ; 0049ed0f
    FXCH                                ; 0049ed16
    FISTP dword ptr [ESP + 0x194]       ; 0049ed18
    FISTP dword ptr [ESP + 0x190]       ; 0049ed1f
    MOV EDX,dword ptr [0x005f2afc]      ; 0049ed26 | DAT_005f2afc
        ;   Label: LAB_0049ed26
    MOV EBX,dword ptr [EDX]             ; 0049ed2c | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0049ed2e
    MOV dword ptr [EBX + 0x20],EAX      ; 0049ed35
    MOV EBX,dword ptr [EDX]             ; 0049ed38 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x194]     ; 0049ed3a
    MOV dword ptr [EBX + 0x24],EAX      ; 0049ed41
    MOV EBX,dword ptr [EDX]             ; 0049ed44 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x190]     ; 0049ed46
    MOV dword ptr [EBX + 0x28],EAX      ; 0049ed4d
    MOV EBX,dword ptr [EDX]             ; 0049ed50 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0049ed52
    MOV dword ptr [EBX + 0x2c],EAX      ; 0049ed59
    MOV EBX,dword ptr [EDX]             ; 0049ed5c | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0049ed5e
    MOV dword ptr [EBX + 0x50],EAX      ; 0049ed65
    MOV EBX,dword ptr [EDX]             ; 0049ed68 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x194]     ; 0049ed6a
    MOV dword ptr [EBX + 0x54],EAX      ; 0049ed71
    MOV EBX,dword ptr [EDX]             ; 0049ed74 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x190]     ; 0049ed76
    MOV dword ptr [EBX + 0x58],EAX      ; 0049ed7d
    MOV EBX,dword ptr [EDX]             ; 0049ed80 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0049ed82
    MOV dword ptr [EBX + 0x5c],EAX      ; 0049ed89
    MOV EBX,dword ptr [EDX]             ; 0049ed8c | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0049ed8e
    MOV dword ptr [EBX + 0x80],EAX      ; 0049ed95
    MOV EBX,dword ptr [EDX]             ; 0049ed9b | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x194]     ; 0049ed9d
    MOV dword ptr [EBX + 0x84],EAX      ; 0049eda4
    MOV EBX,dword ptr [EDX]             ; 0049edaa | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x190]     ; 0049edac
    MOV dword ptr [EBX + 0x88],EAX      ; 0049edb3
    MOV EBX,dword ptr [EDX]             ; 0049edb9 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0049edbb
    MOV dword ptr [EBX + 0x8c],EAX      ; 0049edc2
    MOV EBX,dword ptr [EDX]             ; 0049edc8 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0049edca
    MOV dword ptr [EBX + 0xb0],EAX      ; 0049edd1
    MOV EBX,dword ptr [EDX]             ; 0049edd7 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x194]     ; 0049edd9
    MOV dword ptr [EBX + 0xb4],EAX      ; 0049ede0
    MOV EBX,dword ptr [EDX]             ; 0049ede6 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x190]     ; 0049ede8
    MOV dword ptr [EBX + 0xb8],EAX      ; 0049edef
    MOV ESI,0x3                         ; 0049edf5
    MOV EBX,dword ptr [EDX]             ; 0049edfa | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0049edfc
    XOR ECX,ECX                         ; 0049ee03
    MOV dword ptr [EBX + 0xbc],EAX      ; 0049ee05
    MOV EAX,0x4                         ; 0049ee0b
    MOV dword ptr [ESP + 0x4c],ECX      ; 0049ee10
    MOV dword ptr [ESP + 0x48],ECX      ; 0049ee14
    MOV dword ptr [ESP + 0x44],ECX      ; 0049ee18
    MOV dword ptr [ESP + 0x40],ECX      ; 0049ee1c
    MOV dword ptr [ESP + 0x50],ECX      ; 0049ee20
    MOV ECX,0x1                         ; 0049ee24
    MOV EBX,0x2                         ; 0049ee29
    PUSH ECX                            ; 0049ee2e
    MOV dword ptr [ESP + 0x60],ESI      ; 0049ee2f
    MOV dword ptr [ESP + 0x40],EAX      ; 0049ee33
    PUSH EDX                            ; 0049ee37 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x60],EBX      ; 0049ee38
    MOV dword ptr [ESP + 0x5c],ECX      ; 0049ee3c
    CALL FUN_0046d4b0                   ; 0049ee40
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 0049ee45
    LEA EAX,[ESP + 0x38]                ; 0049ee48
    PUSH EAX                            ; 0049ee4c
    MOV EDI,dword ptr [0x005f2afc]      ; 0049ee4d | DAT_005f2afc
    PUSH EDI                            ; 0049ee53 | DAT_01bdd7e4
    CALL FUN_0046c510                   ; 0049ee54
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c510()
    ADD ESP,0x8                         ; 0049ee59
    PUSH 0x0                            ; 0049ee5c
    MOV EAX,[0x005f2afc]                ; 0049ee5e | DAT_005f2afc
    PUSH EAX                            ; 0049ee63 | DAT_01bdd7e4
    CALL FUN_0046d4b0                   ; 0049ee64
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 0049ee69
    MOV EDX,dword ptr [0x005f2afc]      ; 0049ee6c | DAT_005f2afc
    PUSH EDX                            ; 0049ee72 | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0049ee73
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0049ee78
    MOV ESP,EBP                         ; 0049ee7b
        ;   Label: LAB_0049ee7b
    POP EBP                             ; 0049ee7d
    POP EDI                             ; 0049ee7e
    POP ESI                             ; 0049ee7f
    POP EBX                             ; 0049ee80
    RET                                 ; 0049ee81
    FLD float ptr [EAX + 0x1c]          ; 0049ee82
        ;   Label: LAB_0049ee82
    CALL FUN_005a3120                   ; 0049ee85
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1a0]       ; 0049ee8a
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 0049ee91
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049ee98
    SUB EAX,EDX                         ; 0049ee9f
    SHL EAX,0x3                         ; 0049eea1
    ADD EAX,0x5fd7ec                    ; 0049eea4 | DAT_005fd7ec
    PUSH EAX                            ; 0049eea9
    MOV ECX,dword ptr [0x005f2afc]      ; 0049eeaa | DAT_005f2afc
    PUSH ECX                            ; 0049eeb0 | DAT_01bdd7e4
    JMP 0x0049e569                      ; 0049eeb1
        ;   XREF to: 0049e569 (UNCONDITIONAL_JUMP)  ; LAB_0049e569
    CMP EDX,0x4                         ; 0049eeb6
        ;   Label: LAB_0049eeb6
    JZ 0x0049ef12                       ; 0049eeb9
        ;   XREF to: 0049ef12 (CONDITIONAL_JUMP)  ; LAB_0049ef12
    CMP EDX,0x3                         ; 0049eebb
    JZ 0x0049ef45                       ; 0049eebe
        ;   XREF to: 0049ef45 (CONDITIONAL_JUMP)  ; LAB_0049ef45
    CMP EDX,0x5                         ; 0049eec4
    JZ 0x0049ef79                       ; 0049eec7
        ;   XREF to: 0049ef79 (CONDITIONAL_JUMP)  ; LAB_0049ef79
    CMP EDX,0x6                         ; 0049eecd
    JNZ 0x0049efad                      ; 0049eed0
        ;   XREF to: 0049efad (CONDITIONAL_JUMP)  ; LAB_0049efad
    FLD float ptr [EAX + 0x1c]          ; 0049eed6
    CALL FUN_005a3120                   ; 0049eed9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1a0]       ; 0049eede
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 0049eee5
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049eeec
    SUB EAX,EDX                         ; 0049eef3
    SHL EAX,0x3                         ; 0049eef5
    ADD EAX,0x5fd8dc                    ; 0049eef8 | DAT_005fd8dc
    PUSH EAX                            ; 0049eefd
    MOV EBX,dword ptr [0x005f2afc]      ; 0049eefe | DAT_005f2afc
    PUSH EBX                            ; 0049ef04 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0049ef05
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 0049ef0a
    JMP 0x0049e57b                      ; 0049ef0d
        ;   XREF to: 0049e57b (UNCONDITIONAL_JUMP)  ; LAB_0049e57b
    FLD float ptr [EAX + 0x1c]          ; 0049ef12
        ;   Label: LAB_0049ef12
    CALL FUN_005a3120                   ; 0049ef15
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1a0]       ; 0049ef1a
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 0049ef21
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049ef28
    SUB EAX,EDX                         ; 0049ef2f
    SHL EAX,0x3                         ; 0049ef31
    ADD EAX,0x5fd81c                    ; 0049ef34 | DAT_005fd81c
    PUSH EAX                            ; 0049ef39
    MOV EAX,[0x005f2afc]                ; 0049ef3a | DAT_005f2afc
    PUSH EAX                            ; 0049ef3f | DAT_01bdd7e4
    JMP 0x0049e569                      ; 0049ef40
        ;   XREF to: 0049e569 (UNCONDITIONAL_JUMP)  ; LAB_0049e569
    FLD float ptr [EAX + 0x1c]          ; 0049ef45
        ;   Label: LAB_0049ef45
    CALL FUN_005a3120                   ; 0049ef48
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1a0]       ; 0049ef4d
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 0049ef54
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049ef5b
    SUB EAX,EDX                         ; 0049ef62
    SHL EAX,0x3                         ; 0049ef64
    ADD EAX,0x5fd834                    ; 0049ef67 | DAT_005fd834
    PUSH EAX                            ; 0049ef6c
    MOV EDI,dword ptr [0x005f2afc]      ; 0049ef6d | DAT_005f2afc
    PUSH EDI                            ; 0049ef73 | DAT_01bdd7e4
    JMP 0x0049e569                      ; 0049ef74
        ;   XREF to: 0049e569 (UNCONDITIONAL_JUMP)  ; LAB_0049e569
    FLD float ptr [EAX + 0x1c]          ; 0049ef79
        ;   Label: LAB_0049ef79
    CALL FUN_005a3120                   ; 0049ef7c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1a0]       ; 0049ef81
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 0049ef88
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049ef8f
    SUB EAX,EDX                         ; 0049ef96
    SHL EAX,0x3                         ; 0049ef98
    ADD EAX,0x5fd84c                    ; 0049ef9b | DAT_005fd84c
    PUSH EAX                            ; 0049efa0
    MOV ESI,dword ptr [0x005f2afc]      ; 0049efa1 | DAT_005f2afc
    PUSH ESI                            ; 0049efa7 | DAT_01bdd7e4
    JMP 0x0049e569                      ; 0049efa8
        ;   XREF to: 0049e569 (UNCONDITIONAL_JUMP)  ; LAB_0049e569
    FLD float ptr [EAX + 0x1c]          ; 0049efad
        ;   Label: LAB_0049efad
    CALL FUN_005a3120                   ; 0049efb0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1a0]       ; 0049efb5
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 0049efbc
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049efc3
    SUB EAX,EDX                         ; 0049efca
    SHL EAX,0x3                         ; 0049efcc
    ADD EAX,0x5fd60c                    ; 0049efcf | DAT_005fd60c
    PUSH EAX                            ; 0049efd4
    MOV ECX,dword ptr [0x005f2afc]      ; 0049efd5 | DAT_005f2afc
    PUSH ECX                            ; 0049efdb | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0049efdc
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 0049efe1
    JMP 0x0049e57b                      ; 0049efe4
        ;   XREF to: 0049e57b (UNCONDITIONAL_JUMP)  ; LAB_0049e57b
    CMP EBX,0x4                         ; 0049efe9
        ;   Label: LAB_0049efe9
    JZ 0x0049e58a                       ; 0049efec
        ;   XREF to: 0049e58a (CONDITIONAL_JUMP)  ; LAB_0049e58a
    CMP EBX,0x3                         ; 0049eff2
    JZ 0x0049e58a                       ; 0049eff5
        ;   XREF to: 0049e58a (CONDITIONAL_JUMP)  ; LAB_0049e58a
    CMP EBX,0x6                         ; 0049effb
    JZ 0x0049e58a                       ; 0049effe
        ;   XREF to: 0049e58a (CONDITIONAL_JUMP)  ; LAB_0049e58a
    CMP EBX,0x7                         ; 0049f004
    JZ 0x0049e58a                       ; 0049f007
        ;   XREF to: 0049e58a (CONDITIONAL_JUMP)  ; LAB_0049e58a
    PUSH EAX                            ; 0049f00d
    MOV ESI,dword ptr [0x005f2afc]      ; 0049f00e | DAT_005f2afc
    PUSH ESI                            ; 0049f014 | DAT_01bdd7e4
    JMP 0x0049e732                      ; 0049f015
        ;   XREF to: 0049e732 (UNCONDITIONAL_JUMP)  ; LAB_0049e732
    XOR EAX,EAX                         ; 0049f01a
        ;   Label: LAB_0049f01a
    MOV dword ptr [ESP + 0x118],EAX     ; 0049f01c
    MOV dword ptr [ESP + 0x114],EAX     ; 0049f023
    MOV dword ptr [ESP + 0x11c],EAX     ; 0049f02a
    JMP 0x0049e6a9                      ; 0049f031
        ;   XREF to: 0049e6a9 (UNCONDITIONAL_JUMP)  ; LAB_0049e6a9
    TEST EDX,EDX                        ; 0049f036
        ;   Label: LAB_0049f036
    JNZ 0x0049f045                      ; 0049f038
        ;   XREF to: 0049f045 (CONDITIONAL_JUMP)  ; LAB_0049f045
    FLD float ptr [0x005df900]          ; 0049f03a | DAT_005df900
    JMP 0x0049e788                      ; 0049f040
        ;   XREF to: 0049e788 (UNCONDITIONAL_JUMP)  ; LAB_0049e788
    MOV dword ptr [ESP + 0x30],0x3f000000 ; 0049f045
        ;   Label: LAB_0049f045
    JMP 0x0049e793                      ; 0049f04d
        ;   XREF to: 0049e793 (UNCONDITIONAL_JUMP)  ; LAB_0049e793
    CMP ESI,0x3                         ; 0049f052
        ;   Label: LAB_0049f052
    JZ 0x0049e7a2                       ; 0049f055
        ;   XREF to: 0049e7a2 (CONDITIONAL_JUMP)  ; LAB_0049e7a2
    CMP ESI,0x4                         ; 0049f05b
    JZ 0x0049e7a2                       ; 0049f05e
        ;   XREF to: 0049e7a2 (CONDITIONAL_JUMP)  ; LAB_0049e7a2
    CMP ESI,0x5                         ; 0049f064
    JNZ 0x0049f07e                      ; 0049f067
        ;   XREF to: 0049f07e (CONDITIONAL_JUMP)  ; LAB_0049f07e
    MOV EDI,0x3ff33333                  ; 0049f069
    MOV dword ptr [ESP + 0x24],EDI      ; 0049f06e
    MOV dword ptr [ESP + 0x198],EDI     ; 0049f072
    JMP 0x0049e7b2                      ; 0049f079
        ;   XREF to: 0049e7b2 (UNCONDITIONAL_JUMP)  ; LAB_0049e7b2
    CMP ESI,0x6                         ; 0049f07e
        ;   Label: LAB_0049f07e
    JNZ 0x0049f0d0                      ; 0049f081
        ;   XREF to: 0049f0d0 (CONDITIONAL_JUMP)  ; LAB_0049f0d0
    FLD float ptr [ESP + 0x30]          ; 0049f083
    FST double ptr [ESP + 0x8]          ; 0049f087
    FCOMP double ptr [0x005c0898]       ; 0049f08b | DAT_005c0898
    FNSTSW AX                           ; 0049f091
    SAHF                                ; 0049f093
    JNC 0x0049f0c3                      ; 0049f094
        ;   XREF to: 0049f0c3 (CONDITIONAL_JUMP)  ; LAB_0049f0c3
    FLD double ptr [ESP + 0x8]          ; 0049f096
    FMUL double ptr [0x005c0888]        ; 0049f09a | DAT_005c0888
    FMUL double ptr [0x005c08a0]        ; 0049f0a0 | DAT_005c08a0
    FADD double ptr [0x005c0890]        ; 0049f0a6 | DAT_005c0890
    FSTP float ptr [ESP + 0x198]        ; 0049f0ac
    MOV EAX,dword ptr [ESP + 0x198]     ; 0049f0b3
        ;   Label: LAB_0049f0b3
    MOV dword ptr [ESP + 0x24],EAX      ; 0049f0ba
    JMP 0x0049e7b2                      ; 0049f0be
        ;   XREF to: 0049e7b2 (UNCONDITIONAL_JUMP)  ; LAB_0049e7b2
    MOV dword ptr [ESP + 0x198],0x408ccccd ; 0049f0c3
        ;   Label: LAB_0049f0c3
    JMP 0x0049f0b3                      ; 0049f0ce
        ;   XREF to: 0049f0b3 (UNCONDITIONAL_JUMP)  ; LAB_0049f0b3
    FLD float ptr [ESP + 0x30]          ; 0049f0d0
        ;   Label: LAB_0049f0d0
    FMUL double ptr [0x005c0888]        ; 0049f0d4 | DAT_005c0888
    FADD double ptr [0x005c0890]        ; 0049f0da | DAT_005c0890
    FSTP float ptr [ESP + 0x198]        ; 0049f0e0
    MOV EAX,dword ptr [ESP + 0x198]     ; 0049f0e7
    MOV dword ptr [ESP + 0x24],EAX      ; 0049f0ee
    JMP 0x0049e7b2                      ; 0049f0f2
        ;   XREF to: 0049e7b2 (UNCONDITIONAL_JUMP)  ; LAB_0049e7b2
    CMP EDX,0x2                         ; 0049f0f7
        ;   Label: LAB_0049f0f7
    JZ 0x0049e8f9                       ; 0049f0fa
        ;   XREF to: 0049e8f9 (CONDITIONAL_JUMP)  ; LAB_0049e8f9
    FLD float ptr [0x005c08b0]          ; 0049f100 | DAT_005c08b0
    FLD float ptr [ESP + 0x198]         ; 0049f106
    FMUL ST1                            ; 0049f10d
    FLD float ptr [ESP + 0x24]          ; 0049f10f
    FCHS                                ; 0049f113
    FMULP ST2                           ; 0049f115
    FMUL double ptr [0x005c08b8]        ; 0049f117 | DAT_005c08b8
    FXCH                                ; 0049f11d
    FMUL double ptr [0x005c08b8]        ; 0049f11f | DAT_005c08b8
    XOR EBX,EBX                         ; 0049f125
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f127 | DAT_005f2afc
    MOV dword ptr [ESP + 0x128],EBX     ; 0049f12d
    FSTP float ptr [ESP + 0x1a0]        ; 0049f134
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0049f13b
    LEA EBX,[ESP + 0xf0]                ; 0049f142
    MOV dword ptr [ESP + 0x120],EAX     ; 0049f149
    LEA EAX,[ESP + 0x120]               ; 0049f150
    FSTP float ptr [ESP + 0x124]        ; 0049f157
    FLD float ptr [EAX]                 ; 0049f15e
    FMUL float ptr [0x005df8e4]         ; 0049f160 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f166
    FLD float ptr [EAX + 0x4]           ; 0049f168
    FMUL float ptr [0x005df8e4]         ; 0049f16b | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f171
    FLD float ptr [EAX + 0x8]           ; 0049f174
    FMUL float ptr [0x005df8e4]         ; 0049f177 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049f17d
    LEA EAX,[ESP + 0xf0]                ; 0049f180
    PUSH EAX                            ; 0049f187
    MOV EAX,dword ptr [EDX]             ; 0049f188 | DAT_01bdd7e4
    PUSH EAX                            ; 0049f18a
    CALL FUN_005632a3                   ; 0049f18b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049f190
    FLD float ptr [ESP + 0x24]          ; 0049f193
    FMUL double ptr [0x005c08c0]        ; 0049f197 | DAT_005c08c0
    FMUL double ptr [0x005c08b8]        ; 0049f19d | DAT_005c08b8
    LEA EBX,[ESP + 0x144]               ; 0049f1a3
    LEA EAX,[ESP + 0x120]               ; 0049f1aa
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f1b1 | DAT_005f2afc
    FSTP float ptr [ESP + 0x120]        ; 0049f1b7
    FLD float ptr [EAX]                 ; 0049f1be
    FMUL float ptr [0x005df8e4]         ; 0049f1c0 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f1c6
    FLD float ptr [EAX + 0x4]           ; 0049f1c8
    FMUL float ptr [0x005df8e4]         ; 0049f1cb | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f1d1
    FLD float ptr [EAX + 0x8]           ; 0049f1d4
    FMUL float ptr [0x005df8e4]         ; 0049f1d7 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049f1dd
    LEA EAX,[ESP + 0x144]               ; 0049f1e0
    PUSH EAX                            ; 0049f1e7
    MOV EAX,dword ptr [EDX]             ; 0049f1e8 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0049f1ea
    PUSH EAX                            ; 0049f1ed
    CALL FUN_005632a3                   ; 0049f1ee
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049f1f3
    FLD float ptr [ESP + 0x198]         ; 0049f1f6
    FCHS                                ; 0049f1fd
    FMUL double ptr [0x005c08c0]        ; 0049f1ff | DAT_005c08c0
    FMUL double ptr [0x005c08b8]        ; 0049f205 | DAT_005c08b8
    LEA EBX,[ESP + 0x9c]                ; 0049f20b
    LEA EAX,[ESP + 0x120]               ; 0049f212
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f219 | DAT_005f2afc
    FSTP float ptr [ESP + 0x124]        ; 0049f21f
    FLD float ptr [EAX]                 ; 0049f226
    FMUL float ptr [0x005df8e4]         ; 0049f228 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f22e
    FLD float ptr [EAX + 0x4]           ; 0049f230
    FMUL float ptr [0x005df8e4]         ; 0049f233 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f239
    FLD float ptr [EAX + 0x8]           ; 0049f23c
    FMUL float ptr [0x005df8e4]         ; 0049f23f | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049f245
    LEA EAX,[ESP + 0x9c]                ; 0049f248
    PUSH EAX                            ; 0049f24f
    MOV EAX,dword ptr [EDX]             ; 0049f250 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0049f252
    PUSH EAX                            ; 0049f255
    CALL FUN_005632a3                   ; 0049f256
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049f25b
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0049f25e
    LEA EBX,[ESP + 0x6c]                ; 0049f265
    MOV dword ptr [ESP + 0x120],EAX     ; 0049f269
    LEA EAX,[ESP + 0x120]               ; 0049f270
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f277 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049f27d
    FMUL float ptr [0x005df8e4]         ; 0049f27f | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f285
    FLD float ptr [EAX + 0x4]           ; 0049f287
    FMUL float ptr [0x005df8e4]         ; 0049f28a | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f290
    FLD float ptr [EAX + 0x8]           ; 0049f293
    FMUL float ptr [0x005df8e4]         ; 0049f296 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049f29c
    LEA EAX,[ESP + 0x6c]                ; 0049f29f
    JMP 0x0049ec0d                      ; 0049f2a3
        ;   XREF to: 0049ec0d (UNCONDITIONAL_JUMP)  ; LAB_0049ec0d
    CMP ESI,0x6                         ; 0049f2a8
        ;   Label: LAB_0049f2a8
    JNZ 0x0049f2e9                      ; 0049f2ab
        ;   XREF to: 0049f2e9 (CONDITIONAL_JUMP)  ; LAB_0049f2e9
    FLD float ptr [ESP + 0x30]          ; 0049f2ad
    FLD ST0                             ; 0049f2b1
    FMUL float ptr [0x005c08d4]         ; 0049f2b3 | DAT_005c08d4
    FSTP float ptr [ESP + 0x188]        ; 0049f2b9
    FCOMP double ptr [0x005c0898]       ; 0049f2c0 | DAT_005c0898
    FNSTSW AX                           ; 0049f2c6
    SAHF                                ; 0049f2c8
    JNC 0x0049f2d7                      ; 0049f2c9
        ;   XREF to: 0049f2d7 (CONDITIONAL_JUMP)  ; LAB_0049f2d7
    FLD float ptr [ESP + 0x188]         ; 0049f2cb
    JMP 0x0049ec85                      ; 0049f2d2
        ;   XREF to: 0049ec85 (UNCONDITIONAL_JUMP)  ; LAB_0049ec85
    FLD float ptr [0x005c08d4]          ; 0049f2d7 | DAT_005c08d4
        ;   Label: LAB_0049f2d7
    FSUB float ptr [ESP + 0x188]        ; 0049f2dd
    JMP 0x0049ec85                      ; 0049f2e4
        ;   XREF to: 0049ec85 (UNCONDITIONAL_JUMP)  ; LAB_0049ec85
    CMP ESI,0x4                         ; 0049f2e9
        ;   Label: LAB_0049f2e9
    JNZ 0x0049f2fe                      ; 0049f2ec
        ;   XREF to: 0049f2fe (CONDITIONAL_JUMP)  ; LAB_0049f2fe
    MOV dword ptr [ESP + 0x19c],0xffff  ; 0049f2ee
        ;   Label: LAB_0049f2ee
    JMP 0x0049ec97                      ; 0049f2f9
        ;   XREF to: 0049ec97 (UNCONDITIONAL_JUMP)  ; LAB_0049ec97
    CMP ESI,0x3                         ; 0049f2fe
        ;   Label: LAB_0049f2fe
    JZ 0x0049f2ee                       ; 0049f301
        ;   XREF to: 0049f2ee (CONDITIONAL_JUMP)  ; LAB_0049f2ee
    CMP ESI,0x7                         ; 0049f303
    JNZ 0x0049f318                      ; 0049f306
        ;   XREF to: 0049f318 (CONDITIONAL_JUMP)  ; LAB_0049f318
    MOV dword ptr [ESP + 0x19c],0xbb80  ; 0049f308
    JMP 0x0049ec97                      ; 0049f313
        ;   XREF to: 0049ec97 (UNCONDITIONAL_JUMP)  ; LAB_0049ec97
    CMP ESI,0x2                         ; 0049f318
        ;   Label: LAB_0049f318
    JZ 0x0049f32d                       ; 0049f31b
        ;   XREF to: 0049f32d (CONDITIONAL_JUMP)  ; LAB_0049f32d
    MOV dword ptr [ESP + 0x19c],0x8000  ; 0049f31d
    JMP 0x0049ec97                      ; 0049f328
        ;   XREF to: 0049ec97 (UNCONDITIONAL_JUMP)  ; LAB_0049ec97
    PUSH 0x469c4000                     ; 0049f32d
        ;   Label: LAB_0049f32d
    PUSH 0x463b8000                     ; 0049f332
    CALL FUN_0040ce40                   ; 0049f337
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0049f33c
    FLD float ptr [ESP + 0x1a8]         ; 0049f343
    ADD ESP,0x8                         ; 0049f34a
    JMP 0x0049ec8b                      ; 0049f34d
        ;   XREF to: 0049ec8b (UNCONDITIONAL_JUMP)  ; LAB_0049ec8b
    MOV EBX,0xff00                      ; 0049f352
        ;   Label: LAB_0049f352
    MOV dword ptr [ESP + 0x194],EBX     ; 0049f357
    MOV dword ptr [ESP + 0x190],EBX     ; 0049f35e
    MOV dword ptr [ESP + 0x18c],EBX     ; 0049f365
    JMP 0x0049ed26                      ; 0049f36c
        ;   XREF to: 0049ed26 (UNCONDITIONAL_JUMP)  ; LAB_0049ed26

