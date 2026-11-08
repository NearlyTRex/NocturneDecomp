; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00430440(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x324]:4  local_324
; undefined4       Stack[-0x320]:4  local_320
; undefined        Stack[-0x318]:1  local_318
; undefined        Stack[-0x2e8]:1  local_2e8
; undefined        Stack[-0x2b8]:1  local_2b8
; undefined        Stack[-0x288]:1  local_288
; undefined        Stack[-0x258]:1  local_258
; undefined        Stack[-0x228]:1  local_228
; undefined        Stack[-0x1f8]:1  local_1f8
; undefined        Stack[-0x1c8]:1  local_1c8
; undefined        Stack[-0x198]:1  local_198
; undefined        Stack[-0x168]:1  local_168
; undefined        Stack[-0x138]:1  local_138
; undefined        Stack[-0x108]:1  local_108
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004319e0 at 00431bca
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01fcf278
;   undefined4 DAT_01fcf27c
;   undefined4 DAT_01fcf280
;   undefined4 DAT_01fcf284
;   undefined4 DAT_01fcf288
;   undefined4 DAT_01fcf28c
;   undefined4 DAT_01fcf2a0
;   undefined4 DAT_01fcf2a4
;   undefined4 DAT_01fcf2a8
;   undefined4 DAT_01fcf2b0
;   undefined4 DAT_01fcf2b4
;
; Called Functions:
;   FUN_0040cc00
;   FUN_005a7520
;   FUN_005b5200
;   FUN_005b5620
;   FUN_005b5760
;   FUN_005b6380
;   FUN_005b6d90
;   FUN_005b6e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430440
        ;   Label: FUN_00430440
    PUSH ESI                            ; 00430441
    PUSH EDI                            ; 00430442
    PUSH EBP                            ; 00430443
    MOV EBP,ESP                         ; 00430444
    SUB ESP,0x308                       ; 00430446
    AND ESP,0xfffffff8                  ; 0043044c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043044f
    MOV EDX,dword ptr [EBX + 0x3004]    ; 00430452
    CMP EDX,0x5                         ; 00430458
    JGE 0x00430853                      ; 0043045b
        ;   XREF to: 00430853 (CONDITIONAL_JUMP)  ; LAB_00430853
    MOV ECX,dword ptr [0x00622c18]      ; 00430461 | DAT_00622c18
    CMP dword ptr [ECX + 0x14d148],0x0  ; 00430467 | DAT_01fcf2b0
    JL 0x00430853                       ; 0043046e
        ;   XREF to: 00430853 (CONDITIONAL_JUMP)  ; LAB_00430853
    LEA EAX,[EDX*0x8 + 0x0]             ; 00430474
    MOV EDI,dword ptr [EBX + 0x3004]    ; 0043047b
    MOV EDX,EAX                         ; 00430481
    SHL EAX,0x3                         ; 00430483
    INC EDI                             ; 00430486
    SUB EAX,EDX                         ; 00430487
    LEA EDX,[EBX + 0x3008]              ; 00430489
    MOV dword ptr [EBX + 0x3004],EDI    ; 0043048f
    ADD EDX,EAX                         ; 00430495
    MOV EAX,dword ptr [ECX + 0x14d148]  ; 00430497 | DAT_01fcf2b0
    MOV dword ptr [EDX],EAX             ; 0043049d
    MOV EAX,dword ptr [ECX + 0x14d14c]  ; 0043049f | DAT_01fcf2b4
    MOV dword ptr [ESP + 0x300],EDX     ; 004304a5
    MOV dword ptr [EDX + 0x4],EAX       ; 004304ac
    TEST EAX,EAX                        ; 004304af
    JL 0x0043085a                       ; 004304b1
        ;   XREF to: 0043085a (CONDITIONAL_JUMP)  ; LAB_0043085a
    MOV EDX,dword ptr [0x00622c18]      ; 004304b7 | DAT_00622c18
        ;   Label: LAB_004304b7
    LEA EAX,[EDX + 0x14d11c]            ; 004304bd
    LEA EDI,[ESP + 0x2a0]               ; 004304c3
    LEA ESI,[ESP + 0x2d0]               ; 004304ca
    FLD float ptr [EAX]                 ; 004304d1 | DAT_01fcf284
    FLD float ptr [EAX + 0x4]           ; 004304d3 | DAT_01fcf288
    FLD float ptr [EAX + 0x8]           ; 004304d6 | DAT_01fcf28c
    FXCH ST2                            ; 004304d9
    FSUB float ptr [EDX + 0x14d110]     ; 004304db | DAT_01fcf278
    FXCH                                ; 004304e1
    FSUB float ptr [EDX + 0x14d114]     ; 004304e3 | DAT_01fcf27c
    FXCH ST2                            ; 004304e9
    FSUB float ptr [EDX + 0x14d118]     ; 004304eb | DAT_01fcf280
    FXCH                                ; 004304f1
    FSTP float ptr [ESP + 0x2d0]        ; 004304f3
    FXCH                                ; 004304fa
    FSTP float ptr [ESP + 0x2d4]        ; 004304fc
    FSTP float ptr [ESP + 0x2d8]        ; 00430503
    MOVSD ES:EDI,ESI                    ; 0043050a
    MOVSD ES:EDI,ESI                    ; 0043050b
    MOVSD ES:EDI,ESI                    ; 0043050c
    LEA EDI,[ESP + 0x2dc]               ; 0043050d
    LEA ESI,[ESP + 0x2d0]               ; 00430514
    MOVSD ES:EDI,ESI                    ; 0043051b
    MOVSD ES:EDI,ESI                    ; 0043051c
    MOVSD ES:EDI,ESI                    ; 0043051d
    FLD float ptr [ESP + 0x2e0]         ; 0043051e
    FMUL ST0                            ; 00430525
    FLD float ptr [ESP + 0x2dc]         ; 00430527
    FMUL ST0                            ; 0043052e
    FADDP                               ; 00430530
    FLD float ptr [ESP + 0x2e4]         ; 00430532
    FMUL ST0                            ; 00430539
    FADDP                               ; 0043053b
    FSQRT                               ; 0043053d
    FLDZ                                ; 0043053f
    FXCH                                ; 00430541
    FSTP float ptr [ESP + 0x2f8]        ; 00430543
    FCOMP float ptr [ESP + 0x2f8]       ; 0043054a
    FNSTSW AX                           ; 00430551
    SAHF                                ; 00430553
    JNC 0x0043087c                      ; 00430554
        ;   XREF to: 0043087c (CONDITIONAL_JUMP)  ; LAB_0043087c
    FLD1                                ; 0043055a
    FLD float ptr [ESP + 0x2dc]         ; 0043055c
    FXCH                                ; 00430563
    FDIV float ptr [ESP + 0x2f8]        ; 00430565
    FXCH                                ; 0043056c
    FMUL ST1                            ; 0043056e
    FLD float ptr [ESP + 0x2e0]         ; 00430570
    FMUL ST2                            ; 00430577
    FLD float ptr [ESP + 0x2e4]         ; 00430579
    FMULP ST3                           ; 00430580
    FXCH                                ; 00430582
    FSTP float ptr [ESP + 0x2dc]        ; 00430584
    FSTP float ptr [ESP + 0x2e0]        ; 0043058b
    FSTP float ptr [ESP + 0x2e4]        ; 00430592
    PUSH 0x3f19999a                     ; 00430599
        ;   Label: LAB_00430599
    PUSH 0x3e99999a                     ; 0043059e
    CALL FUN_0040cc00                   ; 004305a3
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x30c],EAX     ; 004305a8
    FLD float ptr [ESP + 0x30c]         ; 004305af
    ADD ESP,0x8                         ; 004305b6
    FLD float ptr [ESP + 0x2dc]         ; 004305b9
    FXCH                                ; 004305c0
    FSTP float ptr [ESP + 0x2fc]        ; 004305c2
    FMUL float ptr [ESP + 0x2fc]        ; 004305c9
    FLD float ptr [ESP + 0x2e0]         ; 004305d0
    FMUL float ptr [ESP + 0x2fc]        ; 004305d7
    MOV EAX,[0x00622c18]                ; 004305de | DAT_00622c18
    FLD float ptr [ESP + 0x2e4]         ; 004305e3
    FMUL float ptr [ESP + 0x2fc]        ; 004305ea
    FLD float ptr [EAX + 0x14d138]      ; 004305f1 | DAT_01fcf2a0
    FLD float ptr [EAX + 0x14d13c]      ; 004305f7 | DAT_01fcf2a4
    FLD float ptr [EAX + 0x14d140]      ; 004305fd | DAT_01fcf2a8
    FXCH ST5                            ; 00430603
    FSTP float ptr [ESP + 0x2dc]        ; 00430605
    FXCH ST3                            ; 0043060c
    FSTP float ptr [ESP + 0x2e0]        ; 0043060e
    FXCH                                ; 00430615
    FSTP float ptr [ESP + 0x2e4]        ; 00430617
    FSUB float ptr [ESP + 0x2dc]        ; 0043061e
    FXCH                                ; 00430625
    FSUB float ptr [ESP + 0x2e0]        ; 00430627
    FXCH ST2                            ; 0043062e
    FSUB float ptr [ESP + 0x2e4]        ; 00430630
    FXCH                                ; 00430637
    FSTP float ptr [ESP + 0x2b8]        ; 00430639
    FXCH                                ; 00430640
    FSTP float ptr [ESP + 0x2bc]        ; 00430642
    FSTP float ptr [ESP + 0x2c0]        ; 00430649
    LEA EDI,[ESP + 0x2ac]               ; 00430650
    LEA ESI,[ESP + 0x2b8]               ; 00430657
    LEA EAX,[ESP + 0x2a0]               ; 0043065e
    MOVSD ES:EDI,ESI                    ; 00430665
    MOVSD ES:EDI,ESI                    ; 00430666
    MOVSD ES:EDI,ESI                    ; 00430667
    PUSH EAX                            ; 00430668
    LEA ESI,[ESP + 0x2ec]               ; 00430669
    CALL FUN_005a7520                   ; 00430670
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    ADD ESP,0x4                         ; 00430675
    LEA EAX,[ESP + 0x2c4]               ; 00430678
    PUSH EAX                            ; 0043067f
    LEA EAX,[ESP + 0x2b0]               ; 00430680
    LEA EDI,[ESP + 0x2c8]               ; 00430687
    PUSH EAX                            ; 0043068e
    LEA EAX,[ESP + 0x68]                ; 0043068f
    LEA ESI,[ESP + 0x2f0]               ; 00430693
    PUSH EAX                            ; 0043069a
    MOVSD ES:EDI,ESI                    ; 0043069b
    MOVSD ES:EDI,ESI                    ; 0043069c
    MOVSD ES:EDI,ESI                    ; 0043069d
    CALL FUN_005b5760                   ; 0043069e
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    ADD ESP,0xc                         ; 004306a3
    LEA EAX,[ESP + 0x60]                ; 004306a6
    PUSH EAX                            ; 004306aa
    PUSH 0x3d0efa35                     ; 004306ab
    PUSH 0xbd0efa35                     ; 004306b0
    CALL FUN_0040cc00                   ; 004306b5
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x310],EAX     ; 004306ba
    FLD float ptr [ESP + 0x310]         ; 004306c1
    ADD ESP,0x8                         ; 004306c8
    SUB ESP,0x4                         ; 004306cb
    LEA ESI,[ESP + 0x38]                ; 004306ce
    FSTP float ptr [ESP]                ; 004306d2
    CALL FUN_005b6e10                   ; 004306d5
        ;   XREF to: 005b6e10 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6e10()
    ADD ESP,0x4                         ; 004306da
    LEA EAX,[ESP + 0xf4]                ; 004306dd
    PUSH EAX                            ; 004306e4
    LEA EDI,[ESP + 0xf8]                ; 004306e5
    MOV ECX,0xc                         ; 004306ec
    PUSH 0x3d0efa35                     ; 004306f1
    LEA ESI,[ESP + 0x3c]                ; 004306f6
    PUSH 0xbd0efa35                     ; 004306fa
    MOVSD.REP ES:EDI,ESI                ; 004306ff
    CALL FUN_0040cc00                   ; 00430701
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x314],EAX     ; 00430706
    FLD float ptr [ESP + 0x314]         ; 0043070d
    ADD ESP,0x8                         ; 00430714
    LEA ESI,[ESP + 0x98]                ; 00430717
    SUB ESP,0x4                         ; 0043071e
    LEA EDI,[ESP + 0xcc]                ; 00430721
    FSTP float ptr [ESP]                ; 00430728
    CALL FUN_005b6d90                   ; 0043072b
        ;   XREF to: 005b6d90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6d90()
    MOV ECX,0xc                         ; 00430730
    LEA ESI,[ESP + 0x9c]                ; 00430735
    ADD ESP,0x4                         ; 0043073c
    LEA EAX,[ESP + 0xc8]                ; 0043073f
    MOVSD.REP ES:EDI,ESI                ; 00430746
    PUSH EAX                            ; 00430748
    LEA ESI,[ESP + 0x27c]               ; 00430749
    LEA EDI,[ESP + 0x12c]               ; 00430750
    CALL FUN_005b5200                   ; 00430757
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 0043075c
    LEA ESI,[ESP + 0x27c]               ; 00430761
    ADD ESP,0x8                         ; 00430768
    LEA EAX,[ESP + 0x124]               ; 0043076b
    MOVSD.REP ES:EDI,ESI                ; 00430772
    PUSH EAX                            ; 00430774
    LEA ESI,[ESP + 0x218]               ; 00430775
    CALL FUN_005b5200                   ; 0043077c
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    ADD ESP,0x8                         ; 00430781
    LEA EAX,[EBX + 0x30]                ; 00430784
    LEA EDI,[ESP + 0x60]                ; 00430787
    PUSH EAX                            ; 0043078b
    LEA EAX,[EBX + 0x20]                ; 0043078c
    MOV ECX,0xc                         ; 0043078f
    PUSH EAX                            ; 00430794
    LEA EAX,[ESP + 0x158]               ; 00430795
    LEA ESI,[ESP + 0x218]               ; 0043079c
    PUSH EAX                            ; 004307a3
    MOVSD.REP ES:EDI,ESI                ; 004307a4
    CALL FUN_005b5620                   ; 004307a6
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5620()
    ADD ESP,0xc                         ; 004307ab
    MOV EDX,dword ptr [ESP + 0x300]     ; 004307ae
    MOV EDX,dword ptr [EDX + 0x4]       ; 004307b5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004307b8
    SUB EAX,EDX                         ; 004307bf
    ADD EBX,0xfd8                       ; 004307c1
    SHL EAX,0x4                         ; 004307c7
    ADD EAX,EBX                         ; 004307ca
    PUSH EAX                            ; 004307cc
    LEA ESI,[ESP + 0x1e4]               ; 004307cd
    LEA EDI,[ESP + 0x1b4]               ; 004307d4
    CALL FUN_005b6380                   ; 004307db
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6380()
    ADD ESP,0x4                         ; 004307e0
    LEA EAX,[ESP + 0x1b0]               ; 004307e3
    MOV ECX,0xc                         ; 004307ea
    PUSH EAX                            ; 004307ef
    LEA EAX,[ESP + 0x154]               ; 004307f0
    LEA ESI,[ESP + 0x1e4]               ; 004307f7
    PUSH EAX                            ; 004307fe
    LEA EAX,[ESP + 0x68]                ; 004307ff
    MOVSD.REP ES:EDI,ESI                ; 00430803
    PUSH EAX                            ; 00430805
    LEA ESI,[ESP + 0x18c]               ; 00430806
    LEA EDI,[ESP + 0xc]                 ; 0043080d
    CALL FUN_005b5200                   ; 00430811
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 00430816
    LEA ESI,[ESP + 0x18c]               ; 0043081b
    ADD ESP,0x8                         ; 00430822
    LEA EAX,[ESP + 0x4]                 ; 00430825
    MOVSD.REP ES:EDI,ESI                ; 00430829
    PUSH EAX                            ; 0043082b
    LEA ESI,[ESP + 0x248]               ; 0043082c
    CALL FUN_005b5200                   ; 00430833
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    ADD ESP,0x8                         ; 00430838
    MOV EDI,dword ptr [ESP + 0x300]     ; 0043083b
    MOV ECX,0xc                         ; 00430842
    LEA ESI,[ESP + 0x240]               ; 00430847
    LEA EDI,[EDI + 0x8]                 ; 0043084e
    MOVSD.REP ES:EDI,ESI                ; 00430851
    MOV ESP,EBP                         ; 00430853
        ;   Label: LAB_00430853
    POP EBP                             ; 00430855
    POP EDI                             ; 00430856
    POP ESI                             ; 00430857
    POP EBX                             ; 00430858
    RET                                 ; 00430859
    MOV ECX,dword ptr [EDX]             ; 0043085a
        ;   Label: LAB_0043085a
    PUSH ECX                            ; 0043085c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0043085d
    PUSH EBX                            ; 00430863
    CALL dword ptr [EAX + 0x118]        ; 00430864
    ADD ESP,0x8                         ; 0043086a
    MOV EDX,dword ptr [ESP + 0x300]     ; 0043086d
    MOV dword ptr [EDX + 0x4],EAX       ; 00430874
    JMP 0x004304b7                      ; 00430877
        ;   XREF to: 004304b7 (UNCONDITIONAL_JUMP)  ; LAB_004304b7
    XOR ESI,ESI                         ; 0043087c
        ;   Label: LAB_0043087c
    MOV dword ptr [ESP + 0x2e0],ESI     ; 0043087e
    MOV dword ptr [ESP + 0x2dc],ESI     ; 00430885
    MOV dword ptr [ESP + 0x2e4],ESI     ; 0043088c
    JMP 0x00430599                      ; 00430893
        ;   XREF to: 00430599 (UNCONDITIONAL_JUMP)  ; LAB_00430599

