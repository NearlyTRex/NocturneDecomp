; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_FUN_005af530(CCloth *this_ptr,SClothVertex *vertex)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; SClothVertex *   Stack[0x8]:4   vertex
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
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
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
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
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_cloth.cpp_FUN_005afe20 at 005b0c37
;
; Referenced Globals:
;   undefined4 DAT_005f10e3
;   undefined4 DAT_01caf5b4
;   undefined4 DAT_01caf5b8
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af530
        ;   Label: core_cloth.cpp_FUN_005af530
    PUSH ESI                            ; 005af531
    PUSH EDI                            ; 005af532
    PUSH EBP                            ; 005af533
    MOV EBP,ESP                         ; 005af534
    SUB ESP,0x1d0                       ; 005af536
    AND ESP,0xfffffff8                  ; 005af53c
    MOV EBX,dword ptr [EBP + 0x18]      ; 005af53f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af542
    FLD float ptr [EBX + 0x4]           ; 005af545
    FCOMP float ptr [EAX + 0x3ab04]     ; 005af548
    FNSTSW AX                           ; 005af54e
    SAHF                                ; 005af550
    JC 0x005afd91                       ; 005af551
        ;   XREF to: 005afd91 (CONDITIONAL_JUMP)  ; LAB_005afd91
    XOR EDX,EDX                         ; 005af557
        ;   Label: LAB_005af557
    MOV ECX,dword ptr [EBX + 0x30]      ; 005af559
    MOV dword ptr [ESP + 0x1a4],EDX     ; 005af55c
    TEST ECX,ECX                        ; 005af563
    JLE 0x005af96c                      ; 005af565
        ;   XREF to: 005af96c (CONDITIONAL_JUMP)  ; LAB_005af96c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af56b
    MOV ECX,dword ptr [EBP + 0x14]      ; 005af56e
    ADD EAX,0x37b24                     ; 005af571
    LEA EDX,[EBX + 0x24]                ; 005af576
    MOV dword ptr [ESP + 0x188],EAX     ; 005af579
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af580
    ADD ECX,0x3ab00                     ; 005af583
    ADD EAX,0x398                       ; 005af589
    MOV dword ptr [ESP + 0x1ac],EBX     ; 005af58e
    MOV dword ptr [ESP + 0x19c],EAX     ; 005af595
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 005af59c
        ;   Label: LAB_005af59c
    IMUL EAX,dword ptr [EAX + 0x34],0x11c ; 005af5a3
    FLD float ptr [EBX]                 ; 005af5aa
    FLD float ptr [EBX + 0x4]           ; 005af5ac
    MOV EDI,dword ptr [ESP + 0x19c]     ; 005af5af
    FLD float ptr [EBX + 0x8]           ; 005af5b6
    ADD EAX,EDI                         ; 005af5b9
    LEA ESI,[ESP + 0x138]               ; 005af5bb
    LEA EDI,[ESP + 0x60]                ; 005af5c2
    FXCH ST2                            ; 005af5c6
    FSUB float ptr [EAX]                ; 005af5c8
    FXCH                                ; 005af5ca
    FSUB float ptr [EAX + 0x4]          ; 005af5cc
    FXCH ST2                            ; 005af5cf
    FSUB float ptr [EAX + 0x8]          ; 005af5d1
    FXCH                                ; 005af5d4
    FSTP float ptr [ESP + 0x138]        ; 005af5d6
    FXCH                                ; 005af5dd
    FSTP float ptr [ESP + 0x13c]        ; 005af5df
    FSTP float ptr [ESP + 0x140]        ; 005af5e6
    MOVSD ES:EDI,ESI                    ; 005af5ed
    MOVSD ES:EDI,ESI                    ; 005af5ee
    MOVSD ES:EDI,ESI                    ; 005af5ef
    LEA EAX,[ESP + 0x48]                ; 005af5f0
    LEA ESI,[ESP + 0x60]                ; 005af5f4
    CMP EAX,ESI                         ; 005af5f8
    JZ 0x005af614                       ; 005af5fa
        ;   XREF to: 005af614 (CONDITIONAL_JUMP)  ; LAB_005af614
    MOV EAX,dword ptr [ESP + 0x60]      ; 005af5fc
    MOV dword ptr [ESP + 0x48],EAX      ; 005af600
    MOV EAX,dword ptr [ESP + 0x64]      ; 005af604
    MOV dword ptr [ESP + 0x4c],EAX      ; 005af608
    MOV EAX,dword ptr [ESP + 0x68]      ; 005af60c
    MOV dword ptr [ESP + 0x50],EAX      ; 005af610
    FLD float ptr [ESP + 0x4c]          ; 005af614
        ;   Label: LAB_005af614
    FMUL ST0                            ; 005af618
    FLD float ptr [ESP + 0x48]          ; 005af61a
    FMUL ST0                            ; 005af61e
    FADDP                               ; 005af620
    FLD float ptr [ESP + 0x50]          ; 005af622
    FMUL ST0                            ; 005af626
    FADDP                               ; 005af628
    FSTP float ptr [ESP + 0x198]        ; 005af62a
    MOV EAX,dword ptr [ESP + 0x198]     ; 005af631
    MOV ESI,dword ptr [0x01caf5b4]      ; 005af638 | DAT_01caf5b4
    SAR EAX,0x1                         ; 005af63e
    ADD EAX,ESI                         ; 005af640
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005af642
    MOV dword ptr [ESP + 0x194],EAX     ; 005af649
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 005af650
    MOV EAX,dword ptr [EAX + 0x78]      ; 005af657
    MOV dword ptr [ESP + 0x1b4],EAX     ; 005af65a
    FLD float ptr [ESP + 0x1b0]         ; 005af661
    FCOMP float ptr [ESP + 0x1b4]       ; 005af668
    FNSTSW AX                           ; 005af66f
    SAHF                                ; 005af671
    JBE 0x005af7ac                      ; 005af672
        ;   XREF to: 005af7ac (CONDITIONAL_JUMP)  ; LAB_005af7ac
    FLD float ptr [ESP + 0x1b0]         ; 005af678
    FLD ST0                             ; 005af67f
    FSUB float ptr [ESP + 0x1b4]        ; 005af681
    FLD float ptr [ESP + 0x48]          ; 005af688
    FXCH                                ; 005af68c
    FSTP float ptr [ESP + 0x1c4]        ; 005af68e
    FMUL float ptr [ESP + 0x1c4]        ; 005af695
    FLD float ptr [ESP + 0x4c]          ; 005af69c
    FMUL float ptr [ESP + 0x1c4]        ; 005af6a0
    FLD float ptr [ESP + 0x50]          ; 005af6a7
    FMUL float ptr [ESP + 0x1c4]        ; 005af6ab
    LEA EDI,[ESP + 0xe4]                ; 005af6b2
    LEA ESI,[ESP + 0xa8]                ; 005af6b9
    FXCH ST2                            ; 005af6c0
    FSTP float ptr [ESP + 0xa8]         ; 005af6c2
    FSTP float ptr [ESP + 0xac]         ; 005af6c9
    FSTP float ptr [ESP + 0xb0]         ; 005af6d0
    MOVSD ES:EDI,ESI                    ; 005af6d7
    MOVSD ES:EDI,ESI                    ; 005af6d8
    MOVSD ES:EDI,ESI                    ; 005af6d9
    FLD1                                ; 005af6da
    FLD float ptr [ESP + 0xe4]          ; 005af6dc
    FXCH                                ; 005af6e3
    FDIVRP ST2,ST0                      ; 005af6e5
    FMUL ST1                            ; 005af6e7
    FLD float ptr [ESP + 0xe8]          ; 005af6e9
    FMUL ST2                            ; 005af6f0
    FLD float ptr [ESP + 0xec]          ; 005af6f2
    FMULP ST3                           ; 005af6f9
    LEA EDI,[ESP + 0x150]               ; 005af6fb
    LEA ESI,[ESP + 0xcc]                ; 005af702
    FXCH                                ; 005af709
    FSTP float ptr [ESP + 0xcc]         ; 005af70b
    FSTP float ptr [ESP + 0xd0]         ; 005af712
    FSTP float ptr [ESP + 0xd4]         ; 005af719
    MOVSD ES:EDI,ESI                    ; 005af720
    MOVSD ES:EDI,ESI                    ; 005af721
    MOVSD ES:EDI,ESI                    ; 005af722
    FLD float ptr [ESP + 0x150]         ; 005af723
    FLD float ptr [EBX]                 ; 005af72a
    FLD float ptr [EBX + 0x4]           ; 005af72c
    FLD float ptr [EBX + 0x8]           ; 005af72f
    FXCH ST2                            ; 005af732
    FSUB float ptr [ESP + 0x150]        ; 005af734
    FXCH                                ; 005af73b
    FSUB float ptr [ESP + 0x154]        ; 005af73d
    FXCH ST2                            ; 005af744
    FSUB float ptr [ESP + 0x158]        ; 005af746
    FXCH                                ; 005af74d
    FSTP float ptr [EBX]                ; 005af74f
    FXCH                                ; 005af751
    FSTP float ptr [EBX + 0x4]          ; 005af753
    FSTP float ptr [EBX + 0x8]          ; 005af756
    FMUL float ptr [ECX]                ; 005af759
    FLD float ptr [ESP + 0x154]         ; 005af75b
    FMUL float ptr [ECX]                ; 005af762
    FLD float ptr [ESP + 0x158]         ; 005af764
    FMUL float ptr [ECX]                ; 005af76b
    LEA EDI,[ESP + 0x18]                ; 005af76d
    LEA ESI,[ESP + 0xc]                 ; 005af771
    FXCH ST2                            ; 005af775
    FSTP float ptr [ESP + 0xc]          ; 005af777
    FSTP float ptr [ESP + 0x10]         ; 005af77b
    FSTP float ptr [ESP + 0x14]         ; 005af77f
    MOVSD ES:EDI,ESI                    ; 005af783
    MOVSD ES:EDI,ESI                    ; 005af784
    MOVSD ES:EDI,ESI                    ; 005af785
    FLD float ptr [EDX]                 ; 005af786
    FLD float ptr [EDX + 0x4]           ; 005af788
    FLD float ptr [EDX + 0x8]           ; 005af78b
    FXCH ST2                            ; 005af78e
    FSUB float ptr [ESP + 0x18]         ; 005af790
    FXCH                                ; 005af794
    FSUB float ptr [ESP + 0x1c]         ; 005af796
    FXCH ST2                            ; 005af79a
    FSUB float ptr [ESP + 0x20]         ; 005af79c
    FXCH                                ; 005af7a0
    FSTP float ptr [EDX]                ; 005af7a2
    FXCH                                ; 005af7a4
    FSTP float ptr [EDX + 0x4]          ; 005af7a6
    FSTP float ptr [EDX + 0x8]          ; 005af7a9
    FLD float ptr [ESP + 0x194]         ; 005af7ac
        ;   Label: LAB_005af7ac
    FCOMP float ptr [ESP + 0x1b4]       ; 005af7b3
    FNSTSW AX                           ; 005af7ba
    SAHF                                ; 005af7bc
    JNC 0x005af941                      ; 005af7bd
        ;   XREF to: 005af941 (CONDITIONAL_JUMP)  ; LAB_005af941
    FLD float ptr [ESP + 0x194]         ; 005af7c3
    FLD float ptr [ESP + 0x1b4]         ; 005af7ca
    FSUB ST0,ST1                        ; 005af7d1
    FLD float ptr [ESP + 0x48]          ; 005af7d3
    FXCH                                ; 005af7d7
    FSTP float ptr [ESP + 0x1cc]        ; 005af7d9
    FMUL float ptr [ESP + 0x1cc]        ; 005af7e0
    FLD float ptr [ESP + 0x4c]          ; 005af7e7
    FMUL float ptr [ESP + 0x1cc]        ; 005af7eb
    FLD float ptr [ESP + 0x50]          ; 005af7f2
    FMUL float ptr [ESP + 0x1cc]        ; 005af7f6
    LEA EDI,[ESP + 0x9c]                ; 005af7fd
    LEA ESI,[ESP + 0x24]                ; 005af804
    FXCH ST2                            ; 005af808
    FSTP float ptr [ESP + 0x24]         ; 005af80a
    FSTP float ptr [ESP + 0x28]         ; 005af80e
    FSTP float ptr [ESP + 0x2c]         ; 005af812
    MOVSD ES:EDI,ESI                    ; 005af816
    MOVSD ES:EDI,ESI                    ; 005af817
    MOVSD ES:EDI,ESI                    ; 005af818
    FLD1                                ; 005af819
    FLD float ptr [ESP + 0x9c]          ; 005af81b
    FXCH                                ; 005af822
    FDIVRP ST2,ST0                      ; 005af824
    FMUL ST1                            ; 005af826
    FLD float ptr [ESP + 0xa0]          ; 005af828
    FMUL ST2                            ; 005af82f
    FLD float ptr [ESP + 0xa4]          ; 005af831
    FMULP ST3                           ; 005af838
    LEA EDI,[ESP + 0x3c]                ; 005af83a
    LEA ESI,[ESP + 0xfc]                ; 005af83e
    FXCH                                ; 005af845
    FSTP float ptr [ESP + 0xfc]         ; 005af847
    FSTP float ptr [ESP + 0x100]        ; 005af84e
    FSTP float ptr [ESP + 0x104]        ; 005af855
    MOVSD ES:EDI,ESI                    ; 005af85c
    MOVSD ES:EDI,ESI                    ; 005af85d
    MOVSD ES:EDI,ESI                    ; 005af85e
    MOV EAX,dword ptr [ESP + 0x188]     ; 005af85f
    FLD float ptr [ESP + 0x3c]          ; 005af866
    FMUL float ptr [EAX]                ; 005af86a
    FLD float ptr [ESP + 0x40]          ; 005af86c
    FMUL float ptr [EAX]                ; 005af870
    FLD float ptr [ESP + 0x44]          ; 005af872
    FMUL float ptr [EAX]                ; 005af876
    LEA EDI,[ESP + 0x144]               ; 005af878
    LEA ESI,[ESP + 0x84]                ; 005af87f
    FXCH ST2                            ; 005af886
    FSTP float ptr [ESP + 0x84]         ; 005af888
    FSTP float ptr [ESP + 0x88]         ; 005af88f
    FSTP float ptr [ESP + 0x8c]         ; 005af896
    MOVSD ES:EDI,ESI                    ; 005af89d
    MOVSD ES:EDI,ESI                    ; 005af89e
    MOVSD ES:EDI,ESI                    ; 005af89f
    FLD float ptr [ESP + 0x144]         ; 005af8a0
    FLD float ptr [EBX]                 ; 005af8a7
    FLD float ptr [EBX + 0x4]           ; 005af8a9
    FLD float ptr [EBX + 0x8]           ; 005af8ac
    FXCH ST2                            ; 005af8af
    FADD float ptr [ESP + 0x144]        ; 005af8b1
    FXCH                                ; 005af8b8
    FADD float ptr [ESP + 0x148]        ; 005af8ba
    FXCH ST2                            ; 005af8c1
    FADD float ptr [ESP + 0x14c]        ; 005af8c3
    FXCH                                ; 005af8ca
    FSTP float ptr [EBX]                ; 005af8cc
    FXCH                                ; 005af8ce
    FSTP float ptr [EBX + 0x4]          ; 005af8d0
    FSTP float ptr [EBX + 0x8]          ; 005af8d3
    FMUL float ptr [ECX]                ; 005af8d6
    FLD float ptr [ESP + 0x148]         ; 005af8d8
    FMUL float ptr [ECX]                ; 005af8df
    FLD float ptr [ESP + 0x14c]         ; 005af8e1
    FMUL float ptr [ECX]                ; 005af8e8
    LEA EDI,[ESP + 0xd8]                ; 005af8ea
    LEA ESI,[ESP + 0x114]               ; 005af8f1
    FXCH ST2                            ; 005af8f8
    FSTP float ptr [ESP + 0x114]        ; 005af8fa
    FSTP float ptr [ESP + 0x118]        ; 005af901
    FSTP float ptr [ESP + 0x11c]        ; 005af908
    MOVSD ES:EDI,ESI                    ; 005af90f
    MOVSD ES:EDI,ESI                    ; 005af910
    MOVSD ES:EDI,ESI                    ; 005af911
    FLD float ptr [EDX]                 ; 005af912
    FLD float ptr [EDX + 0x4]           ; 005af914
    FLD float ptr [EDX + 0x8]           ; 005af917
    FXCH ST2                            ; 005af91a
    FADD float ptr [ESP + 0xd8]         ; 005af91c
    FXCH                                ; 005af923
    FADD float ptr [ESP + 0xdc]         ; 005af925
    FXCH ST2                            ; 005af92c
    FADD float ptr [ESP + 0xe0]         ; 005af92e
    FXCH                                ; 005af935
    FSTP float ptr [EDX]                ; 005af937
    FXCH                                ; 005af939
    FSTP float ptr [EDX + 0x4]          ; 005af93b
    FSTP float ptr [EDX + 0x8]          ; 005af93e
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 005af941
        ;   Label: LAB_005af941
    MOV EDI,dword ptr [ESP + 0x1a4]     ; 005af948
    ADD ESI,0x4                         ; 005af94f
    INC EDI                             ; 005af952
    MOV dword ptr [ESP + 0x1ac],ESI     ; 005af953
    MOV ESI,dword ptr [EBX + 0x30]      ; 005af95a
    MOV dword ptr [ESP + 0x1a4],EDI     ; 005af95d
    CMP EDI,ESI                         ; 005af964
    JL 0x005af59c                       ; 005af966
        ;   XREF to: 005af59c (CONDITIONAL_JUMP)  ; LAB_005af59c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af96c
        ;   Label: LAB_005af96c
    XOR EDI,EDI                         ; 005af96f
    MOV EDX,dword ptr [EAX + 0x37b4c]   ; 005af971
    MOV dword ptr [ESP + 0x1a8],EDI     ; 005af977
    TEST EDX,EDX                        ; 005af97e
    JLE 0x005afd8a                      ; 005af980
        ;   XREF to: 005afd8a (CONDITIONAL_JUMP)  ; LAB_005afd8a
    ADD EAX,0x3ab00                     ; 005af986
    MOV dword ptr [ESP + 0x18c],EAX     ; 005af98b
    LEA EAX,[EBX + 0x24]                ; 005af992
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005af995
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af99c
    ADD EAX,0x37b50                     ; 005af99f
    MOV dword ptr [ESP + 0x1a0],EAX     ; 005af9a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005af9ab
    ADD EAX,0x37bf0                     ; 005af9ae
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005af9b3
    IMUL EAX,dword ptr [ESP + 0x1a8],0xac ; 005af9ba
        ;   Label: LAB_005af9ba
    FLD float ptr [EBX]                 ; 005af9c5
    FLD float ptr [EBX + 0x4]           ; 005af9c7
    FLD float ptr [EBX + 0x8]           ; 005af9ca
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 005af9cd
    LEA EDI,[ESP + 0xf0]                ; 005af9d4
    LEA ESI,[ESP + 0xc0]                ; 005af9db
    ADD EDX,EAX                         ; 005af9e2
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005af9e4
    MOV dword ptr [ESP + 0x1c0],EDX     ; 005af9eb
    LEA EDX,[ESP + 0x12c]               ; 005af9f2
    FXCH ST2                            ; 005af9f9
    FSUB float ptr [EAX]                ; 005af9fb
    FXCH                                ; 005af9fd
    FSUB float ptr [EAX + 0x4]          ; 005af9ff
    FXCH ST2                            ; 005afa02
    FSUB float ptr [EAX + 0x8]          ; 005afa04
    FXCH                                ; 005afa07
    FSTP float ptr [ESP + 0xc0]         ; 005afa09
    FXCH                                ; 005afa10
    FSTP float ptr [ESP + 0xc4]         ; 005afa12
    FSTP float ptr [ESP + 0xc8]         ; 005afa19
    LEA EAX,[ESP + 0xf0]                ; 005afa20
    MOVSD ES:EDI,ESI                    ; 005afa27
    MOVSD ES:EDI,ESI                    ; 005afa28
    MOVSD ES:EDI,ESI                    ; 005afa29
    CMP EDX,EAX                         ; 005afa2a
    JNZ 0x005afdb3                      ; 005afa2c
        ;   XREF to: 005afdb3 (CONDITIONAL_JUMP)  ; LAB_005afdb3
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005afa32
        ;   Label: LAB_005afa32
    FLD float ptr [ESP + 0x130]         ; 005afa39
    FMUL float ptr [EAX + 0x8c]         ; 005afa40
    FLD float ptr [ESP + 0x12c]         ; 005afa46
    FMUL float ptr [EAX + 0x80]         ; 005afa4d
    FADDP                               ; 005afa53
    FLD float ptr [ESP + 0x134]         ; 005afa55
    FMUL float ptr [EAX + 0x98]         ; 005afa5c
    FADDP                               ; 005afa62
    FST float ptr [ESP + 0x8]           ; 005afa64
    FLDZ                                ; 005afa68
    FCOMPP                              ; 005afa6a
    FNSTSW AX                           ; 005afa6c
    SAHF                                ; 005afa6e
    JA 0x005afd56                       ; 005afa6f
        ;   XREF to: 005afd56 (CONDITIONAL_JUMP)  ; LAB_005afd56
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005afa75
    FLD float ptr [ESP + 0x8]           ; 005afa7c
    FCOMP float ptr [EAX + 0x44]        ; 005afa80
    FNSTSW AX                           ; 005afa83
    SAHF                                ; 005afa85
    JA 0x005afd56                       ; 005afa86
        ;   XREF to: 005afd56 (CONDITIONAL_JUMP)  ; LAB_005afd56
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005afa8c
    FLD float ptr [ESP + 0x130]         ; 005afa93
    FMUL float ptr [EAX + 0x84]         ; 005afa9a
    FLD float ptr [ESP + 0x130]         ; 005afaa0
    FMUL float ptr [EAX + 0x88]         ; 005afaa7
    FLD float ptr [ESP + 0x12c]         ; 005afaad
    FMUL float ptr [EAX + 0x78]         ; 005afab4
    FLD float ptr [ESP + 0x12c]         ; 005afab7
    FMUL float ptr [EAX + 0x7c]         ; 005afabe
    FXCH                                ; 005afac1
    FADDP ST3,ST0                       ; 005afac3
    FADDP                               ; 005afac5
    FLD float ptr [ESP + 0x134]         ; 005afac7
    FMUL float ptr [EAX + 0x90]         ; 005aface
    FLD float ptr [ESP + 0x134]         ; 005afad4
    FXCH                                ; 005afadb
    FADDP ST3,ST0                       ; 005afadd
    FMUL float ptr [EAX + 0x94]         ; 005afadf
    FXCH ST2                            ; 005afae5
    FST float ptr [ESP]                 ; 005afae7
    FMUL float ptr [EAX + 0x38]         ; 005afaea
    FXCH ST2                            ; 005afaed
    FADDP                               ; 005afaef
    FLD ST1                             ; 005afaf1
    FMULP ST2                           ; 005afaf3
    FST float ptr [ESP + 0x4]           ; 005afaf5
    FMUL float ptr [EAX + 0x3c]         ; 005afaf9
    FMUL ST0                            ; 005afafc
    FADDP                               ; 005afafe
    FSTP float ptr [ESP + 0x170]        ; 005afb00
    MOV EAX,dword ptr [ESP + 0x170]     ; 005afb07
    MOV EDI,dword ptr [0x01caf5b4]      ; 005afb0e | DAT_01caf5b4
    SAR EAX,0x1                         ; 005afb14
    ADD EAX,EDI                         ; 005afb16
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005afb18
    FLD float ptr [ESP + 0x1c8]         ; 005afb1f
    FLD1                                ; 005afb26
    FCOMPP                              ; 005afb28
    FNSTSW AX                           ; 005afb2a
    SAHF                                ; 005afb2c
    JBE 0x005afd56                      ; 005afb2d
        ;   XREF to: 005afd56 (CONDITIONAL_JUMP)  ; LAB_005afd56
    FLD float ptr [ESP + 0x4]           ; 005afb33
    MOV EAX,dword ptr [ESP]             ; 005afb37
    FMUL float ptr [ESP + 0x4]          ; 005afb3a
    MOV dword ptr [ESP + 0x30],EAX      ; 005afb3e
    FLD float ptr [ESP]                 ; 005afb42
    MOV EAX,dword ptr [ESP + 0x4]       ; 005afb45
    FMUL float ptr [ESP]                ; 005afb49
    MOV dword ptr [ESP + 0x34],EAX      ; 005afb4c
    XOR EAX,EAX                         ; 005afb50
    FADDP                               ; 005afb52
    MOV dword ptr [ESP + 0x38],EAX      ; 005afb54
    FSTP float ptr [ESP + 0x178]        ; 005afb58
    MOV EAX,dword ptr [ESP + 0x178]     ; 005afb5f
    MOV EDX,dword ptr [0x01caf5b8]      ; 005afb66 | DAT_01caf5b8
    SAR EAX,0x1                         ; 005afb6c
    SUB EDX,EAX                         ; 005afb6e
    MOV dword ptr [ESP + 0x17c],EDX     ; 005afb70
    FLD float ptr [ESP]                 ; 005afb77
    FMUL float ptr [ESP + 0x17c]        ; 005afb7a
    FLD float ptr [ESP + 0x4]           ; 005afb81
    FMUL float ptr [ESP + 0x17c]        ; 005afb85
    FLDZ                                ; 005afb8c
    FMUL float ptr [ESP + 0x17c]        ; 005afb8e
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005afb95
    FXCH ST2                            ; 005afb9c
    FSTP float ptr [ESP + 0x30]         ; 005afb9e
    FSTP float ptr [ESP + 0x34]         ; 005afba2
    FSTP float ptr [ESP + 0x38]         ; 005afba6
    FLD double ptr [0x005f10e3]         ; 005afbaa | DAT_005f10e3
    FLD float ptr [EAX + 0x14]          ; 005afbb0
    FMUL ST1                            ; 005afbb3
    FMUL float ptr [ESP + 0x30]         ; 005afbb5
    FSTP float ptr [ESP + 0x30]         ; 005afbb9
    FMUL float ptr [EAX + 0x18]         ; 005afbbd
    MOV EAX,dword ptr [ESP + 0x8]       ; 005afbc0
    FLD float ptr [ESP + 0x34]          ; 005afbc4
    FXCH                                ; 005afbc8
    FMUL ST1                            ; 005afbca
    MOV dword ptr [ESP + 0x38],EAX      ; 005afbcc
    LEA EAX,[ESP + 0x30]                ; 005afbd0
    LEA ESI,[ESP + 0x120]               ; 005afbd4
    PUSH EAX                            ; 005afbdb
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 005afbdc
    LEA EDI,[ESP + 0x160]               ; 005afbe3
    ADD EAX,0x78                        ; 005afbea
    FSTP ST1                            ; 005afbed
    PUSH EAX                            ; 005afbef
    FSTP float ptr [ESP + 0x3c]         ; 005afbf0
    CALL core_dirmat.cpp_FUN_00449530   ; 005afbf4
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 005afbf9
    LEA ESI,[ESP + 0x120]               ; 005afbfc
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005afc03
    MOVSD ES:EDI,ESI                    ; 005afc0a
    MOVSD ES:EDI,ESI                    ; 005afc0b
    MOVSD ES:EDI,ESI                    ; 005afc0c
    LEA EDX,[ESP + 0x54]                ; 005afc0d
    FLD float ptr [EAX + 0xa4]          ; 005afc11
    FLD float ptr [EAX + 0xa8]          ; 005afc17
    FLD float ptr [EAX + 0xa0]          ; 005afc1d
    LEA EDI,[ESP + 0x54]                ; 005afc23
    LEA ESI,[ESP + 0x6c]                ; 005afc27
    LEA EAX,[ESP + 0x30]                ; 005afc2b
    FADD float ptr [ESP + 0x15c]        ; 005afc2f
    FXCH ST2                            ; 005afc36
    FADD float ptr [ESP + 0x160]        ; 005afc38
    FXCH                                ; 005afc3f
    FADD float ptr [ESP + 0x164]        ; 005afc41
    FXCH ST2                            ; 005afc48
    FSTP float ptr [ESP + 0x6c]         ; 005afc4a
    FSTP float ptr [ESP + 0x70]         ; 005afc4e
    FSTP float ptr [ESP + 0x74]         ; 005afc52
    MOVSD ES:EDI,ESI                    ; 005afc56
    MOVSD ES:EDI,ESI                    ; 005afc57
    MOVSD ES:EDI,ESI                    ; 005afc58
    CMP EAX,EDX                         ; 005afc59
    JZ 0x005afc75                       ; 005afc5b
        ;   XREF to: 005afc75 (CONDITIONAL_JUMP)  ; LAB_005afc75
    MOV EAX,dword ptr [ESP + 0x54]      ; 005afc5d
    MOV dword ptr [ESP + 0x30],EAX      ; 005afc61
    MOV EAX,dword ptr [ESP + 0x58]      ; 005afc65
    MOV dword ptr [ESP + 0x34],EAX      ; 005afc69
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005afc6d
    MOV dword ptr [ESP + 0x38],EAX      ; 005afc71
    FLD float ptr [ESP + 0x30]          ; 005afc75
        ;   Label: LAB_005afc75
    FLD float ptr [ESP + 0x34]          ; 005afc79
    FLD float ptr [ESP + 0x38]          ; 005afc7d
    LEA EDI,[ESP + 0x108]               ; 005afc81
    LEA ESI,[ESP + 0xb4]                ; 005afc88
    LEA EAX,[ESP + 0x30]                ; 005afc8f
    FXCH ST2                            ; 005afc93
    FSUB float ptr [EBX]                ; 005afc95
    FXCH                                ; 005afc97
    FSUB float ptr [EBX + 0x4]          ; 005afc99
    FXCH ST2                            ; 005afc9c
    FSUB float ptr [EBX + 0x8]          ; 005afc9e
    FXCH ST2                            ; 005afca1
    FSTP float ptr [ESP + 0xb8]         ; 005afca3
    FXCH                                ; 005afcaa
    FSTP float ptr [ESP + 0xbc]         ; 005afcac
    FSTP float ptr [ESP + 0xb4]         ; 005afcb3
    MOVSD ES:EDI,ESI                    ; 005afcba
    MOVSD ES:EDI,ESI                    ; 005afcbb
    MOVSD ES:EDI,ESI                    ; 005afcbc
    CMP EBX,EAX                         ; 005afcbd
    JZ 0x005afcd5                       ; 005afcbf
        ;   XREF to: 005afcd5 (CONDITIONAL_JUMP)  ; LAB_005afcd5
    MOV EAX,dword ptr [ESP + 0x30]      ; 005afcc1
    MOV dword ptr [EBX],EAX             ; 005afcc5
    MOV EAX,dword ptr [ESP + 0x34]      ; 005afcc7
    MOV dword ptr [EBX + 0x4],EAX       ; 005afccb
    MOV EAX,dword ptr [ESP + 0x38]      ; 005afcce
    MOV dword ptr [EBX + 0x8],EAX       ; 005afcd2
    MOV EAX,dword ptr [ESP + 0x18c]     ; 005afcd5
        ;   Label: LAB_005afcd5
    FLD float ptr [ESP + 0x108]         ; 005afcdc
    FMUL float ptr [EAX]                ; 005afce3
    FLD float ptr [ESP + 0x10c]         ; 005afce5
    FMUL float ptr [EAX]                ; 005afcec
    FLD float ptr [ESP + 0x110]         ; 005afcee
    FMUL float ptr [EAX]                ; 005afcf5
    LEA EDI,[ESP + 0x78]                ; 005afcf7
    LEA ESI,[ESP + 0x90]                ; 005afcfb
    FXCH ST2                            ; 005afd02
    FSTP float ptr [ESP + 0x90]         ; 005afd04
    FSTP float ptr [ESP + 0x94]         ; 005afd0b
    FSTP float ptr [ESP + 0x98]         ; 005afd12
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 005afd19
    MOVSD ES:EDI,ESI                    ; 005afd20
    MOVSD ES:EDI,ESI                    ; 005afd21
    MOVSD ES:EDI,ESI                    ; 005afd22
    FLD float ptr [EAX]                 ; 005afd23
    FLD float ptr [EAX + 0x4]           ; 005afd25
    FLD float ptr [EAX + 0x8]           ; 005afd28
    FXCH ST2                            ; 005afd2b
    FADD float ptr [ESP + 0x78]         ; 005afd2d
    FXCH                                ; 005afd31
    FADD float ptr [ESP + 0x7c]         ; 005afd33
    FXCH ST2                            ; 005afd37
    FADD float ptr [ESP + 0x80]         ; 005afd39
    FXCH                                ; 005afd40
    FSTP float ptr [EAX]                ; 005afd42
    FXCH                                ; 005afd44
    FSTP float ptr [EAX + 0x4]          ; 005afd46
    FSTP float ptr [EAX + 0x8]          ; 005afd49
    MOV dword ptr [EBX + 0xb8],0x1      ; 005afd4c
    MOV EDI,dword ptr [ESP + 0x1b8]     ; 005afd56
        ;   Label: LAB_005afd56
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 005afd5d
    MOV EDX,dword ptr [EBP + 0x14]      ; 005afd64
    ADD EDI,0xac                        ; 005afd67
    INC EAX                             ; 005afd6d
    MOV ECX,dword ptr [EDX + 0x37b4c]   ; 005afd6e
    MOV dword ptr [ESP + 0x1b8],EDI     ; 005afd74
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005afd7b
    CMP EAX,ECX                         ; 005afd82
    JL 0x005af9ba                       ; 005afd84
        ;   XREF to: 005af9ba (CONDITIONAL_JUMP)  ; LAB_005af9ba
    MOV ESP,EBP                         ; 005afd8a
        ;   Label: LAB_005afd8a
    POP EBP                             ; 005afd8c
    POP EDI                             ; 005afd8d
    POP ESI                             ; 005afd8e
    POP EBX                             ; 005afd8f
    RET                                 ; 005afd90
    MOV EAX,dword ptr [EBP + 0x14]      ; 005afd91
        ;   Label: LAB_005afd91
    MOV dword ptr [EBX + 0x28],0x0      ; 005afd94
    MOV EDX,dword ptr [EAX + 0x3ab04]   ; 005afd9b
    MOV dword ptr [EBX + 0x4],EDX       ; 005afda1
    MOV dword ptr [EBX + 0xbc],0x1      ; 005afda4
    JMP 0x005af557                      ; 005afdae
        ;   XREF to: 005af557 (UNCONDITIONAL_JUMP)  ; LAB_005af557
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005afdb3
        ;   Label: LAB_005afdb3
    MOV dword ptr [ESP + 0x12c],EAX     ; 005afdba
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005afdc1
    MOV dword ptr [ESP + 0x130],EAX     ; 005afdc8
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005afdcf
    MOV dword ptr [ESP + 0x134],EAX     ; 005afdd6
    JMP 0x005afa32                      ; 005afddd
        ;   XREF to: 005afa32 (UNCONDITIONAL_JUMP)  ; LAB_005afa32

