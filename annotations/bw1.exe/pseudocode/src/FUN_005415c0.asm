; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005415c0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
;   FUN_00540df0 at 005412fd
;
; Referenced Globals:
;   undefined4 DAT_005ede5f
;   undefined4 DAT_005ede67
;   undefined4 DAT_005ede6f
;   undefined4 DAT_005ede77
;   undefined4 DAT_005ede7f
;   undefined4 DAT_005ede87
;   undefined4 DAT_005ede8f
;   undefined4 DAT_005ede93
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   FUN_0040cd60
;   FUN_0042d540
;   FUN_004ec350
;   FUN_00524770
;   FUN_005349a0
;   FUN_005351f0
;   FUN_005a7520
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005415c0
        ;   Label: FUN_005415c0
    PUSH ESI                            ; 005415c1
    PUSH EDI                            ; 005415c2
    PUSH EBP                            ; 005415c3
    MOV EBP,ESP                         ; 005415c4
    SUB ESP,0xa8                        ; 005415c6
    AND ESP,0xfffffff8                  ; 005415cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005415cf
    MOV EDX,0x3e800000                  ; 005415d2
    MOV ECX,0x3f490fdb                  ; 005415d7
    MOV EAX,[0x01d06ab4]                ; 005415dc | DAT_01d06ab4
    MOV ESI,dword ptr [EBX + 0x1ffa8]   ; 005415e1
    MOV dword ptr [ESP + 0x94],EDX      ; 005415e7
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005415ee
    MOV dword ptr [ESP + 0x90],ECX      ; 005415f5
    MOV dword ptr [ESP + 0x9c],EAX      ; 005415fc
    TEST ESI,ESI                        ; 00541603
    JNZ 0x0054160e                      ; 00541605
        ;   XREF to: 0054160e (CONDITIONAL_JUMP)  ; LAB_0054160e
    MOV ESP,EBP                         ; 00541607
    POP EBP                             ; 00541609
    POP EDI                             ; 0054160a
    POP ESI                             ; 0054160b
    POP EBX                             ; 0054160c
    RET                                 ; 0054160d
    PUSH 0x30                           ; 0054160e
        ;   Label: LAB_0054160e
    PUSH 0x0                            ; 00541610
    LEA EAX,[EBX + 0xc1d8]              ; 00541612
    PUSH EAX                            ; 00541618
    LEA EDI,[ESP + 0x28]                ; 00541619
    LEA ESI,[ESP + 0x64]                ; 0054161d
    CALL FUN_005bfb70                   ; 00541621
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    LEA EDX,[EBX + 0x20]                ; 00541626
    MOV EAX,[0x01d06ab4]                ; 00541629 | DAT_01d06ab4
    ADD ESP,0xc                         ; 0054162e
    FLD float ptr [EDX]                 ; 00541631
    FLD float ptr [EDX + 0x4]           ; 00541633
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00541636
    FLD float ptr [EDX + 0x8]           ; 0054163d
    FXCH ST2                            ; 00541640
    FSUB float ptr [EAX + 0x20]         ; 00541642
    FXCH                                ; 00541645
    FSUB float ptr [EAX + 0x24]         ; 00541647
    FXCH ST2                            ; 0054164a
    FSUB float ptr [EAX + 0x28]         ; 0054164c
    FXCH                                ; 0054164f
    FSTP float ptr [ESP + 0x58]         ; 00541651
    FXCH                                ; 00541655
    FSTP float ptr [ESP + 0x5c]         ; 00541657
    FSTP float ptr [ESP + 0x60]         ; 0054165b
    MOVSD ES:EDI,ESI                    ; 0054165f
    MOVSD ES:EDI,ESI                    ; 00541660
    MOVSD ES:EDI,ESI                    ; 00541661
    XOR EDI,EDI                         ; 00541662
    MOV EAX,dword ptr [EBX + 0x1ffa8]   ; 00541664
    MOV dword ptr [ESP + 0x8c],EDI      ; 0054166a
    CMP EAX,0x2                         ; 00541671
    JNZ 0x00541a54                      ; 00541674
        ;   XREF to: 00541a54 (CONDITIONAL_JUMP)  ; LAB_00541a54
    LEA EAX,[EBX + 0x1fae8]             ; 0054167a
        ;   Label: LAB_0054167a
    MOV EAX,dword ptr [EAX + 0x338]     ; 00541680
    TEST EAX,EAX                        ; 00541686
    JZ 0x005416cd                       ; 00541688
        ;   XREF to: 005416cd (CONDITIONAL_JUMP)  ; LAB_005416cd
    CMP dword ptr [EAX + 0x568],0x0     ; 0054168a
    JLE 0x005416cd                      ; 00541691
        ;   XREF to: 005416cd (CONDITIONAL_JUMP)  ; LAB_005416cd
    LEA EAX,[ESP + 0x7c]                ; 00541693
    PUSH EAX                            ; 00541697
    MOV ESI,0x461c3f9a                  ; 00541698
    PUSH EBX                            ; 0054169d
    MOV dword ptr [ESP + 0x84],ESI      ; 0054169e
    CALL FUN_004ec350                   ; 005416a5
        ;   XREF to: 004ec350 (UNCONDITIONAL_CALL)  ; undefined FUN_004ec350()
    ADD ESP,0x8                         ; 005416aa
    TEST EAX,EAX                        ; 005416ad
    JZ 0x005416cd                       ; 005416af
        ;   XREF to: 005416cd (CONDITIONAL_JUMP)  ; LAB_005416cd
    CMP dword ptr [ESP + 0x7c],0x41f00000 ; 005416b1
    JGE 0x005416cd                      ; 005416b9
        ;   XREF to: 005416cd (CONDITIONAL_JUMP)  ; LAB_005416cd
    MOV dword ptr [ESP + 0x9c],EAX      ; 005416bb
    MOV dword ptr [ESP + 0x8c],0x1      ; 005416c2
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005416cd
        ;   Label: LAB_005416cd
    CMP EDX,dword ptr [EBX + 0x1ffac]   ; 005416d4
    JZ 0x005416e6                       ; 005416da
        ;   XREF to: 005416e6 (CONDITIONAL_JUMP)  ; LAB_005416e6
    MOV dword ptr [EBX + 0xc1f0],0x1    ; 005416dc
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005416e6
        ;   Label: LAB_005416e6
    LEA EDI,[ESP + 0x4]                 ; 005416ed
    LEA ESI,[ESP + 0x4c]                ; 005416f1
    LEA EAX,[EBX + 0x20]                ; 005416f5
    FLD float ptr [EDX + 0x24]          ; 005416f8
    FLD float ptr [EDX + 0x28]          ; 005416fb
    FLD float ptr [EDX + 0x20]          ; 005416fe
    LEA EDX,[ESP + 0x1c]                ; 00541701
    FSUB float ptr [EAX]                ; 00541705
    FXCH ST2                            ; 00541707
    FSUB float ptr [EAX + 0x4]          ; 00541709
    FXCH                                ; 0054170c
    FSUB float ptr [EAX + 0x8]          ; 0054170e
    FXCH ST2                            ; 00541711
    FSTP float ptr [ESP + 0x4c]         ; 00541713
    FSTP float ptr [ESP + 0x50]         ; 00541717
    FSTP float ptr [ESP + 0x54]         ; 0054171b
    LEA EAX,[ESP + 0x4]                 ; 0054171f
    MOVSD ES:EDI,ESI                    ; 00541723
    MOVSD ES:EDI,ESI                    ; 00541724
    MOVSD ES:EDI,ESI                    ; 00541725
    CMP EDX,EAX                         ; 00541726
    JZ 0x00541742                       ; 00541728
        ;   XREF to: 00541742 (CONDITIONAL_JUMP)  ; LAB_00541742
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054172a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054172e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00541732
    MOV dword ptr [ESP + 0x20],EAX      ; 00541736
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054173a
    MOV dword ptr [ESP + 0x24],EAX      ; 0054173e
    FLD float ptr [ESP + 0x20]          ; 00541742
        ;   Label: LAB_00541742
    FMUL ST0                            ; 00541746
    FLD float ptr [ESP + 0x1c]          ; 00541748
    FMUL ST0                            ; 0054174c
    FADDP                               ; 0054174e
    FLD float ptr [ESP + 0x24]          ; 00541750
    FMUL ST0                            ; 00541754
    FADDP                               ; 00541756
    FSQRT                               ; 00541758
    MOV ECX,dword ptr [EBX + 0x1ffa8]   ; 0054175a
    FSTP float ptr [ESP]                ; 00541760
    CMP ECX,0x3                         ; 00541763
    JNZ 0x0054176d                      ; 00541766
        ;   XREF to: 0054176d (CONDITIONAL_JUMP)  ; LAB_0054176d
    XOR ESI,ESI                         ; 00541768
    MOV dword ptr [ESP],ESI             ; 0054176a
    MOV EDI,dword ptr [EBX + 0x1ffc0]   ; 0054176d
        ;   Label: LAB_0054176d
    TEST EDI,EDI                        ; 00541773
    JZ 0x005418bc                       ; 00541775
        ;   XREF to: 005418bc (CONDITIONAL_JUMP)  ; LAB_005418bc
    MOV EDX,dword ptr [EDI + 0x2e0]     ; 0054177b
    XOR ESI,ESI                         ; 00541781
    CMP EDX,0x8                         ; 00541783
    JNZ 0x00541a62                      ; 00541786
        ;   XREF to: 00541a62 (CONDITIONAL_JUMP)  ; LAB_00541a62
    FLD float ptr [ESP]                 ; 0054178c
    FCOMP double ptr [0x005ede6f]       ; 0054178f | DAT_005ede6f
    FNSTSW AX                           ; 00541795
    SAHF                                ; 00541797
    JNC 0x005417cc                      ; 00541798
        ;   XREF to: 005417cc (CONDITIONAL_JUMP)  ; LAB_005417cc
    LEA EAX,[EBX + 0x158]               ; 0054179a
    PUSH EAX                            ; 005417a0
    CALL FUN_00524770                   ; 005417a1
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005417a6
    ADD ESP,0x4                         ; 005417a9
    CMP EAX,0x7                         ; 005417ac
    JNZ 0x005417c4                      ; 005417af
        ;   XREF to: 005417c4 (CONDITIONAL_JUMP)  ; LAB_005417c4
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 005417b1
    JZ 0x005417c4                       ; 005417b8
        ;   XREF to: 005417c4 (CONDITIONAL_JUMP)  ; LAB_005417c4
    MOV dword ptr [EBX + 0xc1e4],0x1    ; 005417ba
    TEST ESI,ESI                        ; 005417c4
        ;   Label: LAB_005417c4
    JZ 0x005418bc                       ; 005417c6
        ;   XREF to: 005418bc (CONDITIONAL_JUMP)  ; LAB_005418bc
    MOV ECX,dword ptr [ESP + 0x9c]      ; 005417cc
        ;   Label: LAB_005417cc
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005417d3
    PUSH ECX                            ; 005417da
    MOV EAX,dword ptr [EAX + 0x154]     ; 005417db
    CALL dword ptr [EAX + 0xc4]         ; 005417e1
    ADD ESP,0x4                         ; 005417e7
    MOV EDX,EAX                         ; 005417ea
    TEST EAX,EAX                        ; 005417ec
    JNZ 0x00541805                      ; 005417ee
        ;   XREF to: 00541805 (CONDITIONAL_JUMP)  ; LAB_00541805
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005417f0
    ADD EAX,0x20                        ; 005417f7
    PUSH EAX                            ; 005417fa
    CALL FUN_005351f0                   ; 005417fb
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005351f0()
    ADD ESP,0x4                         ; 00541800
    MOV EDX,EAX                         ; 00541803
    MOV ESI,dword ptr [EBX + 0x6c]      ; 00541805
        ;   Label: LAB_00541805
    PUSH ESI                            ; 00541808
    LEA EAX,[ESP + 0x68]                ; 00541809
    PUSH EAX                            ; 0054180d
    LEA EAX,[EBX + 0x20]                ; 0054180e
    PUSH EAX                            ; 00541811
    PUSH EDX                            ; 00541812
    CALL FUN_005349a0                   ; 00541813
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005349a0()
    ADD ESP,0x10                        ; 00541818
    TEST EAX,EAX                        ; 0054181b
    JZ 0x005418bc                       ; 0054181d
        ;   XREF to: 005418bc (CONDITIONAL_JUMP)  ; LAB_005418bc
    FLD float ptr [ESP + 0x68]          ; 00541823
    FSUB float ptr [EBX + 0x34]         ; 00541827
    SUB ESP,0x4                         ; 0054182a
    FSTP float ptr [ESP]                ; 0054182d
    CALL FUN_0040cd60                   ; 00541830
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00541835
    FLD float ptr [ESP + 0xa8]          ; 0054183c
    FMUL float ptr [0x005ede77]         ; 00541843 | DAT_005ede77
    ADD ESP,0x4                         ; 00541849
    FMUL double ptr [0x005ede7f]        ; 0054184c | DAT_005ede7f
    FLD float ptr [ESP + 0x94]          ; 00541852
    FCHS                                ; 00541859
    FSTP float ptr [ESP + 0x84]         ; 0054185b
    FST float ptr [EBX + 0xc200]        ; 00541862
    FCOMP float ptr [ESP + 0x84]        ; 00541868
    FNSTSW AX                           ; 0054186f
    SAHF                                ; 00541871
    JNC 0x00541881                      ; 00541872
        ;   XREF to: 00541881 (CONDITIONAL_JUMP)  ; LAB_00541881
    MOV EAX,dword ptr [ESP + 0x84]      ; 00541874
    MOV dword ptr [EBX + 0xc200],EAX    ; 0054187b
    FLD float ptr [EBX + 0xc200]        ; 00541881
        ;   Label: LAB_00541881
    FCOMP float ptr [ESP + 0x94]        ; 00541887
    FNSTSW AX                           ; 0054188e
    SAHF                                ; 00541890
    JBE 0x005418a0                      ; 00541891
        ;   XREF to: 005418a0 (CONDITIONAL_JUMP)  ; LAB_005418a0
    MOV EAX,dword ptr [ESP + 0x94]      ; 00541893
    MOV dword ptr [EBX + 0xc200],EAX    ; 0054189a
    FLD float ptr [ESP]                 ; 005418a0
        ;   Label: LAB_005418a0
    FCOMP double ptr [0x005ede87]       ; 005418a3 | DAT_005ede87
    FNSTSW AX                           ; 005418a9
    SAHF                                ; 005418ab
    JNC 0x00541ad8                      ; 005418ac
        ;   XREF to: 00541ad8 (CONDITIONAL_JUMP)  ; LAB_00541ad8
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 005418b2
        ;   Label: LAB_005418b2
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005418bc
        ;   Label: LAB_005418bc
    LEA EDI,[ESP + 0x28]                ; 005418c3
    LEA ESI,[ESP + 0x34]                ; 005418c7
    LEA EAX,[EBX + 0x20]                ; 005418cb
    FLD float ptr [EDX + 0x24]          ; 005418ce
    FLD float ptr [EDX + 0x28]          ; 005418d1
    FLD float ptr [EDX + 0x20]          ; 005418d4
    LEA EDX,[ESP + 0x1c]                ; 005418d7
    FSUB float ptr [EAX]                ; 005418db
    FXCH ST2                            ; 005418dd
    FSUB float ptr [EAX + 0x4]          ; 005418df
    FXCH                                ; 005418e2
    FSUB float ptr [EAX + 0x8]          ; 005418e4
    FXCH ST2                            ; 005418e7
    FSTP float ptr [ESP + 0x34]         ; 005418e9
    FSTP float ptr [ESP + 0x38]         ; 005418ed
    FSTP float ptr [ESP + 0x3c]         ; 005418f1
    LEA EAX,[ESP + 0x28]                ; 005418f5
    MOVSD ES:EDI,ESI                    ; 005418f9
    MOVSD ES:EDI,ESI                    ; 005418fa
    MOVSD ES:EDI,ESI                    ; 005418fb
    CMP EDX,EAX                         ; 005418fc
    JZ 0x00541918                       ; 005418fe
        ;   XREF to: 00541918 (CONDITIONAL_JUMP)  ; LAB_00541918
    MOV EAX,dword ptr [ESP + 0x28]      ; 00541900
    MOV dword ptr [ESP + 0x1c],EAX      ; 00541904
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00541908
    MOV dword ptr [ESP + 0x20],EAX      ; 0054190c
    MOV EAX,dword ptr [ESP + 0x30]      ; 00541910
    MOV dword ptr [ESP + 0x24],EAX      ; 00541914
    LEA EAX,[ESP + 0x1c]                ; 00541918
        ;   Label: LAB_00541918
    PUSH EAX                            ; 0054191c
    LEA ESI,[ESP + 0x74]                ; 0054191d
    LEA EDI,[ESP + 0x44]                ; 00541921
    CALL FUN_005a7520                   ; 00541925
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x74]                ; 0054192a
    LEA EAX,[ESP + 0x44]                ; 0054192e
    ADD ESP,0x4                         ; 00541932
    LEA EDX,[ESP + 0x1c]                ; 00541935
    MOVSD ES:EDI,ESI                    ; 00541939
    MOVSD ES:EDI,ESI                    ; 0054193a
    MOVSD ES:EDI,ESI                    ; 0054193b
    CMP EDX,EAX                         ; 0054193c
    JZ 0x00541958                       ; 0054193e
        ;   XREF to: 00541958 (CONDITIONAL_JUMP)  ; LAB_00541958
    MOV EAX,dword ptr [ESP + 0x40]      ; 00541940
    MOV dword ptr [ESP + 0x1c],EAX      ; 00541944
    MOV EAX,dword ptr [ESP + 0x44]      ; 00541948
    MOV dword ptr [ESP + 0x20],EAX      ; 0054194c
    MOV EAX,dword ptr [ESP + 0x48]      ; 00541950
    MOV dword ptr [ESP + 0x24],EAX      ; 00541954
    FLD float ptr [ESP + 0x20]          ; 00541958
        ;   Label: LAB_00541958
    FSUB float ptr [EBX + 0x34]         ; 0054195c
    SUB ESP,0x4                         ; 0054195f
    FSTP float ptr [ESP]                ; 00541962
    CALL FUN_0040cd60                   ; 00541965
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xa8],EAX      ; 0054196a
    FLD float ptr [ESP + 0xa8]          ; 00541971
    ADD ESP,0x4                         ; 00541978
    FST float ptr [ESP + 0x14]          ; 0054197b
    FCOMP float ptr [ESP + 0x90]        ; 0054197f
    FNSTSW AX                           ; 00541986
    SAHF                                ; 00541988
    JBE 0x00541996                      ; 00541989
        ;   XREF to: 00541996 (CONDITIONAL_JUMP)  ; LAB_00541996
    MOV EAX,dword ptr [ESP + 0x90]      ; 0054198b
    MOV dword ptr [ESP + 0x14],EAX      ; 00541992
    FLD float ptr [ESP + 0x14]          ; 00541996
        ;   Label: LAB_00541996
    FLD float ptr [ESP + 0x90]          ; 0054199a
    FCHS                                ; 005419a1
    FSTP float ptr [ESP + 0xa0]         ; 005419a3
    FCOMP float ptr [ESP + 0xa0]        ; 005419aa
    FNSTSW AX                           ; 005419b1
    SAHF                                ; 005419b3
    JNC 0x005419c1                      ; 005419b4
        ;   XREF to: 005419c1 (CONDITIONAL_JUMP)  ; LAB_005419c1
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005419b6
    MOV dword ptr [ESP + 0x14],EAX      ; 005419bd
    FLD float ptr [EBP + 0x18]          ; 005419c1
        ;   Label: LAB_005419c1
    FLD float ptr [ESP + 0x14]          ; 005419c4
    FSUB float ptr [EBX + 0x1ffb4]      ; 005419c8
    FXCH                                ; 005419ce
    FMUL float ptr [0x005ede8f]         ; 005419d0 | DAT_005ede8f
    FXCH                                ; 005419d6
    FSTP float ptr [ESP + 0x98]         ; 005419d8
    FSTP float ptr [ESP + 0x80]         ; 005419df
    FLD float ptr [ESP + 0x98]          ; 005419e6
    FCOMP float ptr [ESP + 0x80]        ; 005419ed
    FNSTSW AX                           ; 005419f4
    SAHF                                ; 005419f6
    JBE 0x00541a07                      ; 005419f7
        ;   XREF to: 00541a07 (CONDITIONAL_JUMP)  ; LAB_00541a07
    MOV EAX,dword ptr [ESP + 0x80]      ; 005419f9
    MOV dword ptr [ESP + 0x98],EAX      ; 00541a00
    FLD float ptr [EBP + 0x18]          ; 00541a07
        ;   Label: LAB_00541a07
    FMUL float ptr [0x005ede93]         ; 00541a0a | DAT_005ede93
    FLD float ptr [ESP + 0x98]          ; 00541a10
    FXCH                                ; 00541a17
    FSTP float ptr [ESP + 0x88]         ; 00541a19
    FCOMP float ptr [ESP + 0x88]        ; 00541a20
    FNSTSW AX                           ; 00541a27
    SAHF                                ; 00541a29
    JNC 0x00541a3a                      ; 00541a2a
        ;   XREF to: 00541a3a (CONDITIONAL_JUMP)  ; LAB_00541a3a
    MOV EAX,dword ptr [ESP + 0x88]      ; 00541a2c
    MOV dword ptr [ESP + 0x98],EAX      ; 00541a33
    FLD float ptr [EBX + 0x1ffb4]       ; 00541a3a
        ;   Label: LAB_00541a3a
    FADD float ptr [ESP + 0x98]         ; 00541a40
    FSTP float ptr [EBX + 0x1ffb4]      ; 00541a47
    MOV ESP,EBP                         ; 00541a4d
    POP EBP                             ; 00541a4f
    POP EDI                             ; 00541a50
    POP ESI                             ; 00541a51
    POP EBX                             ; 00541a52
    RET                                 ; 00541a53
    CMP EAX,0x3                         ; 00541a54
        ;   Label: LAB_00541a54
    JZ 0x0054167a                       ; 00541a57
        ;   XREF to: 0054167a (CONDITIONAL_JUMP)  ; LAB_0054167a
    JMP 0x005416cd                      ; 00541a5d
        ;   XREF to: 005416cd (UNCONDITIONAL_JUMP)  ; LAB_005416cd
    FLD float ptr [ESP]                 ; 00541a62
        ;   Label: LAB_00541a62
    FCOMP double ptr [0x005ede5f]       ; 00541a65 | DAT_005ede5f
    FNSTSW AX                           ; 00541a6b
    SAHF                                ; 00541a6d
    JNC 0x005417cc                      ; 00541a6e
        ;   XREF to: 005417cc (CONDITIONAL_JUMP)  ; LAB_005417cc
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00541a74
    JZ 0x00541abf                       ; 00541a7b
        ;   XREF to: 00541abf (CONDITIONAL_JUMP)  ; LAB_00541abf
    CMP dword ptr [ESP + 0x8c],0x0      ; 00541a7d
    JZ 0x00541abf                       ; 00541a85
        ;   XREF to: 00541abf (CONDITIONAL_JUMP)  ; LAB_00541abf
    FLD float ptr [EBX + 0x2c9c]        ; 00541a87
    FCOMP double ptr [0x005ede67]       ; 00541a8d | DAT_005ede67
    FNSTSW AX                           ; 00541a93
    SAHF                                ; 00541a95
    JBE 0x00541aab                      ; 00541a96
        ;   XREF to: 00541aab (CONDITIONAL_JUMP)  ; LAB_00541aab
    CMP dword ptr [EBX + 0x1ffd4],0x0   ; 00541a98
    JZ 0x00541aab                       ; 00541a9f
        ;   XREF to: 00541aab (CONDITIONAL_JUMP)  ; LAB_00541aab
    MOV dword ptr [EBX + 0xc1e4],0x1    ; 00541aa1
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00541aab
        ;   Label: LAB_00541aab
    ADD EAX,0x20                        ; 00541ab2
    PUSH EAX                            ; 00541ab5
    PUSH EBX                            ; 00541ab6
    CALL FUN_0042d540                   ; 00541ab7
        ;   XREF to: 0042d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d540()
    ADD ESP,0x8                         ; 00541abc
    MOV dword ptr [EBX + 0xc1e0],0x0    ; 00541abf
        ;   Label: LAB_00541abf
    MOV dword ptr [EBX + 0xc1d8],0x0    ; 00541ac9
    JMP 0x005417c4                      ; 00541ad3
        ;   XREF to: 005417c4 (UNCONDITIONAL_JUMP)  ; LAB_005417c4
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 00541ad8
        ;   Label: LAB_00541ad8
    JMP 0x005418b2                      ; 00541ae2
        ;   XREF to: 005418b2 (UNCONDITIONAL_JUMP)  ; LAB_005418b2

