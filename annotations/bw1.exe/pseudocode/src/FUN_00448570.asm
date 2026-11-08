; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448570(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00448554 = 00448931
;   TerminatedCString s_s_confused_while_walking_005d7273
;   TerminatedCString s_cow_wav_005d729d
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d72a6
;   undefined4 DAT_005fe0a8
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_0061dca4
;   undefined4 DAT_00622c18
;   undefined4 DAT_006236b8
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01e82168
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cc00
;   FUN_0042c010
;   FUN_0042ccf0
;   FUN_0042d700
;   FUN_0042d750
;   FUN_0042e120
;   FUN_0042e160
;   FUN_0042e1a0
;   FUN_00432240
;   FUN_00433e80
;   FUN_00434a80
;   FUN_00435320
;   FUN_00445430
;   FUN_004a0770
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448570
        ;   Label: FUN_00448570
    PUSH ESI                            ; 00448571
    PUSH EDI                            ; 00448572
    PUSH EBP                            ; 00448573
    MOV EBP,ESP                         ; 00448574
    SUB ESP,0xfc                        ; 00448576
    SUB EBP,0x7a                        ; 0044857c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0044857f
    PUSH dword ptr [EBP + 0x92]         ; 00448585
    PUSH EBX                            ; 0044858b
    CALL FUN_0042e1a0                   ; 0044858c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e1a0()
    ADD ESP,0x8                         ; 00448591
    TEST EAX,EAX                        ; 00448594
    JZ 0x004487cd                       ; 00448596
        ;   XREF to: 004487cd (CONDITIONAL_JUMP)  ; LAB_004487cd
    LEA EAX,[EBX + 0x249c]              ; 0044859c
    MOV dword ptr [EAX + 0x8],0x0       ; 004485a2
    FLD float ptr [EBP + 0x92]          ; 004485a9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004485af
    MOV dword ptr [EAX + 0x4],EDX       ; 004485b2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004485b5
    MOV dword ptr [EAX],EDX             ; 004485b8
    FMUL float ptr [EBX + 0xc1d0]       ; 004485ba
    LEA ESI,[EBX + 0x158]               ; 004485c0
    FSTP float ptr [EBP + 0x6e]         ; 004485c6
    FLD float ptr [EBP + 0x6e]          ; 004485c9
        ;   Label: LAB_004485c9
    FLDZ                                ; 004485cc
    FCOMPP                              ; 004485ce
    FNSTSW AX                           ; 004485d0
    SAHF                                ; 004485d2
    JC 0x004487d5                       ; 004485d3
        ;   XREF to: 004487d5 (CONDITIONAL_JUMP)  ; LAB_004487d5
    FLD float ptr [EBP + 0x92]          ; 004485d9
    FMUL float ptr [EBX + 0xc1d0]       ; 004485df
    SUB ESP,0x4                         ; 004485e5
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004485e8
    MOV dword ptr [EBX + 0x2524],EAX    ; 004485ee
    FSTP float ptr [ESP]                ; 004485f4
    PUSH EBX                            ; 004485f7
    CALL FUN_00435320                   ; 004485f8
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined FUN_00435320()
    ADD ESP,0x8                         ; 004485fd
    PUSH ESI                            ; 00448600
    CALL FUN_00524770                   ; 00448601
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 00448606
    PUSH dword ptr [EBP + 0x92]         ; 00448609
    PUSH EBX                            ; 0044860f
    MOV EDI,dword ptr [EAX + 0x24]      ; 00448610
    CALL FUN_00432240                   ; 00448613
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; undefined FUN_00432240()
    ADD ESP,0x8                         ; 00448618
    TEST EAX,EAX                        ; 0044861b
    JZ 0x00448ad1                       ; 0044861d
        ;   XREF to: 00448ad1 (CONDITIONAL_JUMP)  ; LAB_00448ad1
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00448623
    CMP EAX,0x2                         ; 00448629
    JNC 0x00448815                      ; 0044862c
        ;   XREF to: 00448815 (CONDITIONAL_JUMP)  ; LAB_00448815
    CMP EAX,0x1                         ; 00448632
    JNZ 0x00448820                      ; 00448635
        ;   XREF to: 00448820 (CONDITIONAL_JUMP)  ; LAB_00448820
    PUSH 0x1                            ; 0044863b
        ;   Label: LAB_0044863b
    PUSH 0x1                            ; 0044863d
    LEA EAX,[EBX + 0x158]               ; 0044863f
        ;   Label: LAB_0044863f
    PUSH EAX                            ; 00448645
    CALL FUN_005247c0                   ; 00448646
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0044864b
        ;   Label: LAB_0044864b
    LEA EAX,[EBX + 0x249c]              ; 0044864e
    MOV dword ptr [EAX + 0x8],0x0       ; 00448654
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044865b
    MOV dword ptr [EAX + 0x4],EDX       ; 0044865e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00448661
    MOV dword ptr [EAX],EDX             ; 00448664
    FLD float ptr [EBX + 0xc1e4]        ; 00448666
        ;   Label: caseD_3
    FLDZ                                ; 0044866c
    FCOMPP                              ; 0044866e
    FNSTSW AX                           ; 00448670
    SAHF                                ; 00448672
    JNC 0x00448687                      ; 00448673
        ;   XREF to: 00448687 (CONDITIONAL_JUMP)  ; LAB_00448687
    FLD float ptr [EBX + 0xc1e4]        ; 00448675
    FSUB float ptr [EBP + 0x92]         ; 0044867b
    FSTP float ptr [EBX + 0xc1e4]       ; 00448681
    PUSH EBX                            ; 00448687
        ;   Label: LAB_00448687
    CALL FUN_0042e120                   ; 00448688
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e120()
    ADD ESP,0x4                         ; 0044868d
    TEST EAX,EAX                        ; 00448690
    JZ 0x004487a6                       ; 00448692
        ;   XREF to: 004487a6 (CONDITIONAL_JUMP)  ; LAB_004487a6
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 00448698
    TEST ECX,ECX                        ; 0044869e
    JZ 0x004486cc                       ; 004486a0
        ;   XREF to: 004486cc (CONDITIONAL_JUMP)  ; LAB_004486cc
    PUSH ECX                            ; 004486a2
    MOV EDX,dword ptr [ECX + 0x154]     ; 004486a3
    CALL dword ptr [EDX + 0xf4]         ; 004486a9
    ADD ESP,0x4                         ; 004486af
    CMP EAX,EBX                         ; 004486b2
    JNZ 0x004486cc                      ; 004486b4
        ;   XREF to: 004486cc (CONDITIONAL_JUMP)  ; LAB_004486cc
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004486b6
    PUSH ESI                            ; 004486bc
    MOV EDI,dword ptr [0x00622c18]      ; 004486bd | DAT_00622c18
    PUSH EDI                            ; 004486c3 | DAT_01e82168
    CALL FUN_00559250                   ; 004486c4
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; undefined FUN_00559250()
    ADD ESP,0x8                         ; 004486c9
    PUSH dword ptr [EBP + 0x92]         ; 004486cc
        ;   Label: LAB_004486cc
    PUSH EBX                            ; 004486d2
    LEA ESI,[EBX + 0x2518]              ; 004486d3
    CALL FUN_0042d700                   ; 004486d9
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d700()
    FLD float ptr [ESI]                 ; 004486de
    FMUL float ptr [EBP + 0x92]         ; 004486e0
    FLD float ptr [ESI + 0x4]           ; 004486e6
    FMUL float ptr [EBP + 0x92]         ; 004486e9
    FLD float ptr [ESI + 0x8]           ; 004486ef
    FMUL float ptr [EBP + 0x92]         ; 004486f2
    LEA EDI,[EBP + -0xa]                ; 004486f8
    LEA ESI,[EBP + -0x3a]               ; 004486fb
    FXCH ST2                            ; 004486fe
    FSTP float ptr [EBP + -0x3a]        ; 00448700
    FSTP float ptr [EBP + -0x36]        ; 00448703
    FSTP float ptr [EBP + -0x32]        ; 00448706
    MOVSD ES:EDI,ESI                    ; 00448709
    MOVSD ES:EDI,ESI                    ; 0044870a
    MOVSD ES:EDI,ESI                    ; 0044870b
    LEA EDX,[EBX + 0x250c]              ; 0044870c
    FLD float ptr [EBP + -0xa]          ; 00448712
    FLD float ptr [EBP + -0x6]          ; 00448715
    FLD float ptr [EBP + -0x2]          ; 00448718
    LEA EDI,[EBP + 0x1a]                ; 0044871b
    LEA ESI,[EBP + -0x16]               ; 0044871e
    FXCH ST2                            ; 00448721
    FADD float ptr [EDX]                ; 00448723
    FXCH                                ; 00448725
    FADD float ptr [EDX + 0x4]          ; 00448727
    FXCH ST2                            ; 0044872a
    FADD float ptr [EDX + 0x8]          ; 0044872c
    FXCH                                ; 0044872f
    FSTP float ptr [EBP + -0x16]        ; 00448731
    FXCH                                ; 00448734
    FSTP float ptr [EBP + -0x12]        ; 00448736
    FSTP float ptr [EBP + -0xe]         ; 00448739
    MOVSD ES:EDI,ESI                    ; 0044873c
    MOVSD ES:EDI,ESI                    ; 0044873d
    MOVSD ES:EDI,ESI                    ; 0044873e
    LEA EAX,[EBX + 0x249c]              ; 0044873f
    FLD float ptr [EBP + 0x1a]          ; 00448745
    FLD float ptr [EBP + 0x1e]          ; 00448748
    FLD float ptr [EBP + 0x22]          ; 0044874b
    LEA EDI,[EBP + 0x62]                ; 0044874e
    LEA ESI,[EBP + -0x2e]               ; 00448751
    FXCH ST2                            ; 00448754
    FADD float ptr [EAX]                ; 00448756
    FXCH                                ; 00448758
    FADD float ptr [EAX + 0x4]          ; 0044875a
    FXCH ST2                            ; 0044875d
    FADD float ptr [EAX + 0x8]          ; 0044875f
    FXCH                                ; 00448762
    FSTP float ptr [EBP + -0x2e]        ; 00448764
    FXCH                                ; 00448767
    FSTP float ptr [EBP + -0x2a]        ; 00448769
    FSTP float ptr [EBP + -0x26]        ; 0044876c
    MOVSD ES:EDI,ESI                    ; 0044876f
    MOVSD ES:EDI,ESI                    ; 00448770
    MOVSD ES:EDI,ESI                    ; 00448771
    MOV dword ptr [EDX + 0x8],0x0       ; 00448772
    MOV ECX,dword ptr [EDX + 0x8]       ; 00448779
    MOV dword ptr [EDX + 0x4],ECX       ; 0044877c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0044877f
    MOV dword ptr [EDX],ECX             ; 00448782
    MOV dword ptr [EAX + 0x8],0x0       ; 00448784
    ADD ESP,0x8                         ; 0044878b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044878e
    MOV dword ptr [EAX + 0x4],EDX       ; 00448791
    MOV EDX,dword ptr [EAX + 0x4]       ; 00448794
    MOV dword ptr [EAX],EDX             ; 00448797
    LEA EAX,[EBP + 0x62]                ; 00448799
    PUSH EAX                            ; 0044879c
    PUSH EBX                            ; 0044879d
    CALL FUN_0042d750                   ; 0044879e
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d750()
    ADD ESP,0x8                         ; 004487a3
    PUSH EBX                            ; 004487a6
        ;   Label: LAB_004487a6
    CALL FUN_0042e160                   ; 004487a7
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e160()
    ADD ESP,0x4                         ; 004487ac
    LEA EAX,[EBX + 0x158]               ; 004487af
    PUSH EAX                            ; 004487b5
    CALL FUN_005675a0                   ; 004487b6
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005675a0()
    ADD ESP,0x4                         ; 004487bb
    PUSH dword ptr [EBP + 0x92]         ; 004487be
    PUSH EBX                            ; 004487c4
    CALL FUN_00433e80                   ; 004487c5
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    ADD ESP,0x8                         ; 004487ca
    LEA ESP,[EBP + 0x7a]                ; 004487cd
        ;   Label: LAB_004487cd
    POP EBP                             ; 004487d0
    POP EDI                             ; 004487d1
    POP ESI                             ; 004487d2
    POP EBX                             ; 004487d3
    RET                                 ; 004487d4
    LEA EAX,[EBP + 0x6e]                ; 004487d5
        ;   Label: LAB_004487d5
    PUSH EAX                            ; 004487d8
    PUSH ESI                            ; 004487d9
    CALL FUN_00524270                   ; 004487da
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; undefined FUN_00524270()
    ADD ESP,0x8                         ; 004487df
    PUSH EAX                            ; 004487e2
    PUSH EBX                            ; 004487e3
    CALL FUN_00434a80                   ; 004487e4
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434a80()
    ADD ESP,0x8                         ; 004487e9
    JMP 0x004485c9                      ; 004487ec
        ;   XREF to: 004485c9 (UNCONDITIONAL_JUMP)  ; LAB_004485c9
    PUSH 0x1                            ; 004487f1
        ;   Label: LAB_004487f1
    PUSH 0x0                            ; 004487f3
    PUSH ESI                            ; 004487f5
    CALL FUN_005247c0                   ; 004487f6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004487fb
    PUSH EBX                            ; 004487fe
    PUSH 0x5d7273                       ; 004487ff | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x00611100]      ; 00448804 | PTR_DAT_00611100
    PUSH EDX                            ; 0044880a | DAT_007db5f0
    CALL FUN_00445430                   ; 0044880b
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    JMP 0x0044864b                      ; 00448810
        ;   XREF to: 0044864b (UNCONDITIONAL_JUMP)  ; LAB_0044864b
    JBE 0x0044863b                      ; 00448815
        ;   XREF to: 0044863b (CONDITIONAL_JUMP)  ; LAB_0044863b
        ;   Label: LAB_00448815
    CMP EAX,0x3                         ; 0044881b
    JZ 0x004487f1                       ; 0044881e
        ;   XREF to: 004487f1 (CONDITIONAL_JUMP)  ; LAB_004487f1
    PUSH 0x1                            ; 00448820
        ;   Label: LAB_00448820
    PUSH 0x0                            ; 00448822
    JMP 0x0044863f                      ; 00448824
        ;   XREF to: 0044863f (UNCONDITIONAL_JUMP)  ; LAB_0044863f
    LEA EAX,[EBP + 0xffffff7e]          ; 00448829
        ;   Label: caseD_2
    PUSH EAX                            ; 0044882f
    CALL FUN_0042c010                   ; 00448830
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 00448835
    PUSH 0x41700000                     ; 00448838
    PUSH 0x40e00000                     ; 0044883d
    CALL FUN_0040cc00                   ; 00448842
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 00448847
    MOV dword ptr [EBP + -0x4e],EBX     ; 0044884a
    MOV dword ptr [EBP + -0x4a],EBX     ; 0044884d
    ADD ESP,0x8                         ; 00448850
    FLD float ptr [EBP + 0x76]          ; 00448853
    LEA EAX,[EBP + 0xffffff7e]          ; 00448856
    FSTP float ptr [EBP + -0x7e]        ; 0044885c
    MOV EDX,dword ptr [EBX + 0xc26c]    ; 0044885f
    PUSH EAX                            ; 00448865
    LEA EAX,[EDX*0x4 + 0x0]             ; 00448866
    SUB EAX,EDX                         ; 0044886d
    SHL EAX,0x4                         ; 0044886f
    LEA EDX,[EBX + 0xfd8]               ; 00448872
    ADD EAX,EDX                         ; 00448878
    PUSH 0x3f333333                     ; 0044887a
    PUSH EAX                            ; 0044887f
    PUSH 0x2c8af28                      ; 00448880 | DAT_02c8af28
    LEA ESI,[EBP + -0x46]               ; 00448885
    LEA EDI,[EBP + 0x3e]                ; 00448888
    CALL FUN_005b5080                   ; 0044888b
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 00448890
    LEA EAX,[EBP + 0x3e]                ; 00448893
    LEA ESI,[EBP + -0x46]               ; 00448896
    PUSH EAX                            ; 00448899
    MOVSD ES:EDI,ESI                    ; 0044889a
    MOVSD ES:EDI,ESI                    ; 0044889b
    MOVSD ES:EDI,ESI                    ; 0044889c
    PUSH EBX                            ; 0044889d
    LEA ESI,[EBP + 0x26]                ; 0044889e
    CALL FUN_00408b40                   ; 004488a1
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 004488a6
    LEA EAX,[EBP + -0x22]               ; 004488a9
    PUSH EAX                            ; 004488ac
    LEA EDI,[EBP + -0x22]               ; 004488ad
    LEA ESI,[EBP + 0x26]                ; 004488b0
    PUSH EBX                            ; 004488b3
    MOVSD ES:EDI,ESI                    ; 004488b4
    MOVSD ES:EDI,ESI                    ; 004488b5
    MOVSD ES:EDI,ESI                    ; 004488b6
    CALL FUN_004a0770                   ; 004488b7
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0770()
    ADD ESP,0x10                        ; 004488bc
    JMP 0x00448666                      ; 004488bf
        ;   XREF to: 00448666 (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 004488c4
        ;   Label: caseD_5
    JNZ 0x00448666                      ; 004488cb
        ;   XREF to: 00448666 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 004488d1
    JNZ 0x00448666                      ; 004488d8
        ;   XREF to: 00448666 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH EAX                            ; 004488de
    PUSH ESI                            ; 004488df
    LEA ESI,[EBP + 0x4a]                ; 004488e0
    LEA EDI,[EBP + 0xe]                 ; 004488e3
    CALL FUN_00569040                   ; 004488e6
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 004488eb
    LEA EAX,[EBP + 0xe]                 ; 004488ee
    LEA ESI,[EBP + 0x4a]                ; 004488f1
    PUSH EAX                            ; 004488f4
    MOVSD ES:EDI,ESI                    ; 004488f5
    MOVSD ES:EDI,ESI                    ; 004488f6
    MOVSD ES:EDI,ESI                    ; 004488f7
    PUSH EBX                            ; 004488f8
    LEA ESI,[EBP + 0x56]                ; 004488f9
    LEA EDI,[EBP + 0x32]                ; 004488fc
    CALL FUN_00408b40                   ; 004488ff
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 00448904
    LEA ESI,[EBP + 0x56]                ; 00448907
    LEA EAX,[EBP + 0x32]                ; 0044890a
    PUSH 0x0                            ; 0044890d
    MOVSD ES:EDI,ESI                    ; 0044890f
    MOVSD ES:EDI,ESI                    ; 00448910
    MOVSD ES:EDI,ESI                    ; 00448911
    PUSH EAX                            ; 00448912
    MOV ESI,dword ptr [0x0061dca4]      ; 00448913 | DAT_0061dca4
    PUSH ESI                            ; 00448919
    CALL FUN_004e62e0                   ; 0044891a
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e62e0()
    ADD ESP,0xc                         ; 0044891f
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 00448922
    JMP 0x00448666                      ; 0044892c
        ;   XREF to: 00448666 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00448931
        ;   Label: caseD_0
    PUSH EBX                            ; 00448937
    CALL FUN_004a0fe0                   ; 00448938
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0fe0()
    ADD ESP,0x8                         ; 0044893d
    TEST EAX,EAX                        ; 00448940
    JZ 0x00448956                       ; 00448942
        ;   XREF to: 00448956 (CONDITIONAL_JUMP)  ; LAB_00448956
    PUSH 0x1                            ; 00448944
    PUSH 0x1                            ; 00448946
    PUSH ESI                            ; 00448948
    CALL FUN_005247c0                   ; 00448949
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0044894e
    JMP 0x00448666                      ; 00448951
        ;   XREF to: 00448666 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00448956
        ;   Label: LAB_00448956
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044895c
    PUSH EBX                            ; 00448962
    CALL dword ptr [EAX + 0x144]        ; 00448963
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00448969
    ADD ESP,0x8                         ; 0044896f
    TEST ESI,ESI                        ; 00448972
    JZ 0x00448666                       ; 00448974
        ;   XREF to: 00448666 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [EBX + 0xc270]    ; 0044897a
    PUSH EDI                            ; 00448980
    MOV EAX,[0x006236b8]                ; 00448981 | DAT_006236b8
    PUSH EAX                            ; 00448986
    CALL FUN_0057d9c0                   ; 00448987
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d9c0()
    ADD ESP,0x8                         ; 0044898c
    TEST EAX,EAX                        ; 0044898f
    JNZ 0x004489ab                      ; 00448991
        ;   XREF to: 004489ab (CONDITIONAL_JUMP)  ; LAB_004489ab
    PUSH 0x5d729d                       ; 00448993 | = "cow?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00448998
    PUSH EBX                            ; 0044899e
    CALL dword ptr [EAX + 0x2c]         ; 0044899f
    ADD ESP,0x8                         ; 004489a2
    MOV dword ptr [EBX + 0xc270],EAX    ; 004489a5
    PUSH 0x1                            ; 004489ab
        ;   Label: LAB_004489ab
    PUSH 0x1                            ; 004489ad
    LEA EAX,[EBX + 0x158]               ; 004489af
    PUSH EAX                            ; 004489b5
    CALL FUN_005247c0                   ; 004489b6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004489bb
    JMP 0x00448666                      ; 004489be
        ;   XREF to: 00448666 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004489c3
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004489c9
    PUSH EBX                            ; 004489cf
    CALL dword ptr [EAX + 0x144]        ; 004489d0
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 004489d6
    ADD ESP,0x8                         ; 004489dc
    TEST EDI,EDI                        ; 004489df
    JNZ 0x00448a0b                      ; 004489e1
        ;   XREF to: 00448a0b (CONDITIONAL_JUMP)  ; LAB_00448a0b
    PUSH dword ptr [EBP + 0x92]         ; 004489e3
    PUSH EBX                            ; 004489e9
    CALL FUN_004a0fe0                   ; 004489ea
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0fe0()
    ADD ESP,0x8                         ; 004489ef
    TEST EAX,EAX                        ; 004489f2
    JNZ 0x00448666                      ; 004489f4
        ;   XREF to: 00448666 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004489fa
    PUSH EDI                            ; 004489fc
    PUSH ESI                            ; 004489fd
    CALL FUN_005247c0                   ; 004489fe
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00448a03
    JMP 0x00448666                      ; 00448a06
        ;   XREF to: 00448666 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x005fe0a8]                ; 00448a0b | DAT_005fe0a8
        ;   Label: LAB_00448a0b
    MOV dword ptr [EBP + 0x72],EAX      ; 00448a10
    LEA EAX,[EBX + 0x249c]              ; 00448a13
    MOV dword ptr [EAX + 0x8],0x0       ; 00448a19
    MOV EDX,dword ptr [EAX + 0x8]       ; 00448a20
    MOV dword ptr [EAX + 0x4],EDX       ; 00448a23
    MOV EDX,dword ptr [EAX + 0x4]       ; 00448a26
    MOV dword ptr [EAX],EDX             ; 00448a29
    XOR EAX,EAX                         ; 00448a2b
    MOV dword ptr [EBP + 0x2],EAX       ; 00448a2d
    MOV dword ptr [EBP + 0x6],EAX       ; 00448a30
    MOV EAX,dword ptr [EBP + 0x72]      ; 00448a33
    PUSH 0x3e32b8c2                     ; 00448a36
    MOV dword ptr [EBP + 0xa],EAX       ; 00448a3b
    LEA EAX,[EBP + 0x2]                 ; 00448a3e
    PUSH 0x3f000000                     ; 00448a41
    PUSH EAX                            ; 00448a46
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00448a47
    PUSH EAX                            ; 00448a4d
    MOV EDX,dword ptr [EAX + 0x154]     ; 00448a4e
    CALL dword ptr [EDX + 0xc4]         ; 00448a54
    ADD ESP,0x4                         ; 00448a5a
    PUSH EAX                            ; 00448a5d
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00448a5e
    ADD EAX,0x20                        ; 00448a64
    PUSH EAX                            ; 00448a67
    PUSH EBX                            ; 00448a68
    CALL FUN_0042ccf0                   ; 00448a69
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 00448a6e
    TEST EAX,EAX                        ; 00448a71
    JL 0x00448aaa                       ; 00448a73
        ;   XREF to: 00448aaa (CONDITIONAL_JUMP)  ; LAB_00448aaa
    JLE 0x00448666                      ; 00448a75
        ;   XREF to: 00448666 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xc1e4]        ; 00448a7b
    FLDZ                                ; 00448a81
    FCOMPP                              ; 00448a83
    FNSTSW AX                           ; 00448a85
    SAHF                                ; 00448a87
    JC 0x00448666                       ; 00448a88
        ;   XREF to: 00448666 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00448a8e
    PUSH 0x2                            ; 00448a90
    PUSH ESI                            ; 00448a92
    CALL FUN_005247c0                   ; 00448a93
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00448a98
    MOV dword ptr [EBX + 0xc1e4],0x40200000 ; 00448a9b
    JMP 0x00448666                      ; 00448aa5
        ;   XREF to: 00448666 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 00448aaa
        ;   Label: LAB_00448aaa
    PUSH 0x5d72a6                       ; 00448aab | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00611100]      ; 00448ab0 | PTR_DAT_00611100
    PUSH ECX                            ; 00448ab6 | DAT_007db5f0
    CALL FUN_00445430                   ; 00448ab7
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 00448abc
    PUSH 0x1                            ; 00448abf
    PUSH 0x0                            ; 00448ac1
    PUSH ESI                            ; 00448ac3
    CALL FUN_005247c0                   ; 00448ac4
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00448ac9
    JMP 0x00448666                      ; 00448acc
        ;   XREF to: 00448666 (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP EDI,0x5                         ; 00448ad1
        ;   Label: LAB_00448ad1
    JA 0x00448666                       ; 00448ad4
        ;   XREF to: 00448666 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x448554]  ; 00448ada | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

