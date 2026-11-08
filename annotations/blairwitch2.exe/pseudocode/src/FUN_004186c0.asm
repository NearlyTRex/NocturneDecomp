; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004186c0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004186a0 = 004190a3
;   TerminatedCString s_s_confused_while_walking_005cc15c
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005cc186
;   TerminatedCString s_boneguy_swing_wav_005cc1a7
;   TerminatedCString s_boneGuy_walkloop_wav_005cc1ba
;   undefined4 DAT_005cc1d2
;   undefined4 DAT_005cc1da
;   undefined4 DAT_005cc1e2
;   undefined4 DAT_005cc1ea
;   undefined4 DAT_005f3828
;   undefined4 DAT_005f382c
;   undefined4 DAT_005f3838
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_006141f0
;   undefined4 DAT_00618170
;   ... and 6 more
;
; Called Functions:
;   FUN_00408d70
;   FUN_0040cf60
;   FUN_00419520
;   FUN_0041a0c0
;   FUN_0041a2e0
;   FUN_004222d0
;   FUN_00423000
;   FUN_00423a10
;   FUN_00423a60
;   FUN_00424430
;   FUN_00424470
;   FUN_004244b0
;   FUN_004287f0
;   FUN_00428b10
;   FUN_00429e90
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004186c0
        ;   Label: FUN_004186c0
    PUSH ESI                            ; 004186c1
    PUSH EDI                            ; 004186c2
    PUSH EBP                            ; 004186c3
    MOV EBP,ESP                         ; 004186c4
    SUB ESP,0x260                       ; 004186c6
    SUB EBP,0x7a                        ; 004186cc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004186cf
    LEA EAX,[EBX + 0x10b0c]             ; 004186d5
    PUSH EAX                            ; 004186db
    MOV EDX,dword ptr [0x006141f0]      ; 004186dc | DAT_006141f0
    PUSH EDX                            ; 004186e2
    CALL FUN_0048e340                   ; 004186e3
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 004186e8
    TEST EAX,EAX                        ; 004186eb
    JZ 0x00418733                       ; 004186ed
        ;   XREF to: 00418733 (CONDITIONAL_JUMP)  ; LAB_00418733
    MOV dword ptr [EBX + 0x25a8],0x0    ; 004186ef
    MOV dword ptr [EBX + 0x10a64],0x1   ; 004186f9
    MOV ECX,dword ptr [EBX + 0x11118]   ; 00418703
    MOV dword ptr [EBX + 0x1111c],0x0   ; 00418709
    TEST ECX,ECX                        ; 00418713
    JNZ 0x00418720                      ; 00418715
        ;   XREF to: 00418720 (CONDITIONAL_JUMP)  ; LAB_00418720
    PUSH EBX                            ; 00418717
    CALL FUN_0041a0c0                   ; 00418718
        ;   XREF to: 0041a0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a0c0()
    ADD ESP,0x4                         ; 0041871d
    PUSH 0x0                            ; 00418720
        ;   Label: LAB_00418720
    PUSH 0x5                            ; 00418722
    LEA EAX,[EBX + 0x2b4]               ; 00418724
    PUSH EAX                            ; 0041872a
    CALL FUN_00503980                   ; 0041872b
        ;   XREF to: 00503980 (UNCONDITIONAL_CALL)  ; undefined FUN_00503980()
    ADD ESP,0xc                         ; 00418730
    PUSH dword ptr [EBP + 0x92]         ; 00418733
        ;   Label: LAB_00418733
    PUSH EBX                            ; 00418739
    CALL FUN_004244b0                   ; 0041873a
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 0041873f
    TEST EAX,EAX                        ; 00418742
    JZ 0x0041898f                       ; 00418744
        ;   XREF to: 0041898f (CONDITIONAL_JUMP)  ; LAB_0041898f
    CMP dword ptr [EBX + 0x11118],0x1   ; 0041874a
    JNZ 0x0041878c                      ; 00418751
        ;   XREF to: 0041878c (CONDITIONAL_JUMP)  ; LAB_0041878c
    FLD float ptr [EBX + 0x25a8]        ; 00418753
    FLDZ                                ; 00418759
    FCOMPP                              ; 0041875b
    FNSTSW AX                           ; 0041875d
    SAHF                                ; 0041875f
    JNC 0x0041878c                      ; 00418760
        ;   XREF to: 0041878c (CONDITIONAL_JUMP)  ; LAB_0041878c
    FLD float ptr [EBX + 0x1111c]       ; 00418762
    FADD float ptr [EBP + 0x92]         ; 00418768
    FST float ptr [EBX + 0x1111c]       ; 0041876e
    FCOMP float ptr [EBX + 0x10b70]     ; 00418774
    FNSTSW AX                           ; 0041877a
    SAHF                                ; 0041877c
    JBE 0x00418987                      ; 0041877d
        ;   XREF to: 00418987 (CONDITIONAL_JUMP)  ; LAB_00418987
    PUSH EBX                            ; 00418783
    CALL FUN_0041a2e0                   ; 00418784
        ;   XREF to: 0041a2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a2e0()
    ADD ESP,0x4                         ; 00418789
    CMP dword ptr [EBX + 0x11118],0x2   ; 0041878c
        ;   Label: LAB_0041878c
    JNZ 0x00418a45                      ; 00418793
        ;   XREF to: 00418a45 (CONDITIONAL_JUMP)  ; LAB_00418a45
    FLD float ptr [EBP + 0x92]          ; 00418799
    FDIV float ptr [0x005f3838]         ; 0041879f | DAT_005f3838
    FADD float ptr [EBX + 0x1111c]      ; 004187a5
    FST float ptr [EBX + 0x1111c]       ; 004187ab
    FLD1                                ; 004187b1
    FCOMPP                              ; 004187b3
    FNSTSW AX                           ; 004187b5
    SAHF                                ; 004187b7
    JBE 0x004189bc                      ; 004187b8
        ;   XREF to: 004189bc (CONDITIONAL_JUMP)  ; LAB_004189bc
    XOR EDX,EDX                         ; 004187be
    MOV ECX,dword ptr [EBX + 0x10b74]   ; 004187c0
    MOV dword ptr [EBP + 0x66],EDX      ; 004187c6
    TEST ECX,ECX                        ; 004187c9
    JLE 0x00418987                      ; 004187cb
        ;   XREF to: 00418987 (CONDITIONAL_JUMP)  ; LAB_00418987
    LEA EAX,[EBX + 0x10b78]             ; 004187d1
    MOV dword ptr [EBP + 0x56],EAX      ; 004187d7
    LEA EAX,[EBX + 0x1111c]             ; 004187da
    MOV dword ptr [EBP + 0x5a],EAX      ; 004187e0
    LEA EAX,[EBX + 0x10b90]             ; 004187e3
    MOV dword ptr [EBP + 0x62],EAX      ; 004187e9
    LEA EAX,[EBX + 0x10ba0]             ; 004187ec
    MOV dword ptr [EBP + 0x5e],EAX      ; 004187f2
    LEA EAX,[EBX + 0x10bb0]             ; 004187f5
    MOV dword ptr [EBP + 0x6a],EAX      ; 004187fb
    IMUL EAX,dword ptr [EBP + 0x66],0x48 ; 004187fe
        ;   Label: LAB_004187fe
    ADD EAX,dword ptr [EBP + 0x56]      ; 00418802
    LEA EDI,[EBP + -0x16]               ; 00418805
    FLD float ptr [EAX]                 ; 00418808
    MOV EDX,dword ptr [EAX + 0x44]      ; 0041880a
    FLD float ptr [EAX + 0x4]           ; 0041880d
    MOV dword ptr [EBP + 0x46],EDX      ; 00418810
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00418813
    FLD float ptr [EAX + 0x8]           ; 00418816
    LEA ESI,[EBP + 0xffffff06]          ; 00418819
    FXCH ST2                            ; 0041881f
    FSUB float ptr [EDX]                ; 00418821
    FXCH                                ; 00418823
    FSUB float ptr [EDX + 0x4]          ; 00418825
    FXCH ST2                            ; 00418828
    FSUB float ptr [EDX + 0x8]          ; 0041882a
    FXCH                                ; 0041882d
    FSTP float ptr [EBP + 0xffffff06]   ; 0041882f
    FXCH                                ; 00418835
    FSTP float ptr [EBP + 0xffffff0a]   ; 00418837
    FSTP float ptr [EBP + 0xffffff0e]   ; 0041883d
    MOVSD ES:EDI,ESI                    ; 00418843
    MOVSD ES:EDI,ESI                    ; 00418844
    MOVSD ES:EDI,ESI                    ; 00418845
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00418846
    FLD float ptr [EBP + -0x16]         ; 00418849
    FMUL float ptr [EAX]                ; 0041884c
    FLD float ptr [EBP + -0x12]         ; 0041884e
    FMUL float ptr [EAX]                ; 00418851
    FLD float ptr [EBP + -0xe]          ; 00418853
    FMUL float ptr [EAX]                ; 00418856
    LEA EDI,[EBP + 0x26]                ; 00418858
    LEA ESI,[EBP + 0x1a]                ; 0041885b
    FXCH ST2                            ; 0041885e
    FSTP float ptr [EBP + 0x1a]         ; 00418860
    FSTP float ptr [EBP + 0x1e]         ; 00418863
    FSTP float ptr [EBP + 0x22]         ; 00418866
    MOVSD ES:EDI,ESI                    ; 00418869
    MOVSD ES:EDI,ESI                    ; 0041886a
    MOVSD ES:EDI,ESI                    ; 0041886b
    FLD float ptr [EDX]                 ; 0041886c
    FLD float ptr [EDX + 0x4]           ; 0041886e
    FLD float ptr [EDX + 0x8]           ; 00418871
    LEA EDI,[EBP + -0x46]               ; 00418874
    LEA ESI,[EBP + 0x32]                ; 00418877
    FXCH ST2                            ; 0041887a
    FADD float ptr [EBP + 0x26]         ; 0041887c
    FXCH                                ; 0041887f
    FADD float ptr [EBP + 0x2a]         ; 00418881
    FXCH ST2                            ; 00418884
    FADD float ptr [EBP + 0x2e]         ; 00418886
    FXCH                                ; 00418889
    FSTP float ptr [EBP + 0x32]         ; 0041888b
    FXCH                                ; 0041888e
    FSTP float ptr [EBP + 0x36]         ; 00418890
    FSTP float ptr [EBP + 0x3a]         ; 00418893
    MOVSD ES:EDI,ESI                    ; 00418896
    MOVSD ES:EDI,ESI                    ; 00418897
    MOVSD ES:EDI,ESI                    ; 00418898
    MOV EDI,dword ptr [EBP + 0x5e]      ; 00418899
    PUSH dword ptr [EBX + 0x1111c]      ; 0041889c
    PUSH EDI                            ; 004188a2
    MOV EAX,dword ptr [EBP + 0x62]      ; 004188a3
    PUSH EAX                            ; 004188a6
    LEA ESI,[EBP + 0xfffffed2]          ; 004188a7
    LEA EDI,[EBP + 0xfffffec2]          ; 004188ad
    CALL FUN_00593df0                   ; 004188b3
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00593df0()
    LEA ESI,[EBP + 0xfffffed2]          ; 004188b8
    LEA EAX,[EBP + 0xfffffec2]          ; 004188be
    ADD ESP,0xc                         ; 004188c4
    MOVSD ES:EDI,ESI                    ; 004188c7
    MOVSD ES:EDI,ESI                    ; 004188c8
    MOVSD ES:EDI,ESI                    ; 004188c9
    MOVSD ES:EDI,ESI                    ; 004188ca
    PUSH EAX                            ; 004188cb
    LEA ESI,[EBP + -0x2e]               ; 004188cc
    LEA EDI,[EBP + -0x22]               ; 004188cf
    CALL FUN_005940b0                   ; 004188d2
        ;   XREF to: 005940b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005940b0()
    LEA ESI,[EBP + -0x2e]               ; 004188d7
    MOVSD ES:EDI,ESI                    ; 004188da
    MOVSD ES:EDI,ESI                    ; 004188db
    MOVSD ES:EDI,ESI                    ; 004188dc
    FLD float ptr [EBX + 0x1111c]       ; 004188dd
    FMUL double ptr [0x005cc1ea]        ; 004188e3 | DAT_005cc1ea
    MOV EAX,dword ptr [EBP + -0x46]     ; 004188e9
    FLD float ptr [EBP + -0x22]         ; 004188ec
    FXCH                                ; 004188ef
    FADD ST0,ST1                        ; 004188f1
    MOV ESI,dword ptr [EBP + 0x46]      ; 004188f3
    FSTP ST1                            ; 004188f6
    FSTP float ptr [EBP + -0x22]        ; 004188f8
    MOV dword ptr [ESI + 0x20],EAX      ; 004188fb
    MOV EAX,dword ptr [EBP + -0x42]     ; 004188fe
    MOV dword ptr [ESI + 0x24],EAX      ; 00418901
    MOV EAX,dword ptr [EBP + -0x3e]     ; 00418904
    LEA EDX,[ESI + 0x30]                ; 00418907
    MOV dword ptr [ESI + 0x28],EAX      ; 0041890a
    LEA EAX,[EBP + -0x22]               ; 0041890d
    ADD ESP,0x4                         ; 00418910
    CMP EDX,EAX                         ; 00418913
    JNZ 0x004189a6                      ; 00418915
        ;   XREF to: 004189a6 (CONDITIONAL_JUMP)  ; LAB_004189a6
    LEA EAX,[EBP + -0x46]               ; 0041891b
        ;   Label: LAB_0041891b
    LEA EDX,[ESI + 0x10e0]              ; 0041891e
    CMP EDX,EAX                         ; 00418924
    JZ 0x00418939                       ; 00418926
        ;   XREF to: 00418939 (CONDITIONAL_JUMP)  ; LAB_00418939
    MOV EAX,dword ptr [EBP + -0x46]     ; 00418928
    MOV dword ptr [EDX],EAX             ; 0041892b
    MOV EAX,dword ptr [EBP + -0x42]     ; 0041892d
    MOV dword ptr [EDX + 0x4],EAX       ; 00418930
    MOV EAX,dword ptr [EBP + -0x3e]     ; 00418933
    MOV dword ptr [EDX + 0x8],EAX       ; 00418936
    LEA EAX,[EBP + -0x22]               ; 00418939
        ;   Label: LAB_00418939
    LEA EDX,[ESI + 0x10ec]              ; 0041893c
    CMP EDX,EAX                         ; 00418942
    JZ 0x00418957                       ; 00418944
        ;   XREF to: 00418957 (CONDITIONAL_JUMP)  ; LAB_00418957
    MOV EAX,dword ptr [EBP + -0x22]     ; 00418946
    MOV dword ptr [EDX],EAX             ; 00418949
    MOV EAX,dword ptr [EBP + -0x1e]     ; 0041894b
    MOV dword ptr [EDX + 0x4],EAX       ; 0041894e
    MOV EAX,dword ptr [EBP + -0x1a]     ; 00418951
    MOV dword ptr [EDX + 0x8],EAX       ; 00418954
    MOV EDX,dword ptr [EBP + 0x62]      ; 00418957
        ;   Label: LAB_00418957
    MOV ECX,dword ptr [EBP + 0x5e]      ; 0041895a
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0041895d
    MOV EDI,dword ptr [EBP + 0x66]      ; 00418960
    ADD EDX,0x48                        ; 00418963
    ADD ECX,0x48                        ; 00418966
    ADD ESI,0x48                        ; 00418969
    INC EDI                             ; 0041896c
    MOV dword ptr [EBP + 0x62],EDX      ; 0041896d
    MOV dword ptr [EBP + 0x5e],ECX      ; 00418970
    MOV dword ptr [EBP + 0x6a],ESI      ; 00418973
    MOV EDX,dword ptr [EBX + 0x10b74]   ; 00418976
    MOV dword ptr [EBP + 0x66],EDI      ; 0041897c
    CMP EDI,EDX                         ; 0041897f
    JL 0x004187fe                       ; 00418981
        ;   XREF to: 004187fe (CONDITIONAL_JUMP)  ; LAB_004187fe
    LEA ESP,[EBP + 0x7a]                ; 00418987
        ;   Label: LAB_00418987
    POP EBP                             ; 0041898a
    POP EDI                             ; 0041898b
    POP ESI                             ; 0041898c
    POP EBX                             ; 0041898d
    RET                                 ; 0041898e
    MOV ESI,dword ptr [EBX + 0x10b08]   ; 0041898f
        ;   Label: LAB_0041898f
    PUSH ESI                            ; 00418995
    CALL FUN_00551050                   ; 00418996
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0041899b
    LEA ESP,[EBP + 0x7a]                ; 0041899e
    POP EBP                             ; 004189a1
    POP EDI                             ; 004189a2
    POP ESI                             ; 004189a3
    POP EBX                             ; 004189a4
    RET                                 ; 004189a5
    MOV EAX,dword ptr [EBP + -0x22]     ; 004189a6
        ;   Label: LAB_004189a6
    MOV dword ptr [EDX],EAX             ; 004189a9
    MOV EAX,dword ptr [EBP + -0x1e]     ; 004189ab
    MOV dword ptr [EDX + 0x4],EAX       ; 004189ae
    MOV EAX,dword ptr [EBP + -0x1a]     ; 004189b1
    MOV dword ptr [EDX + 0x8],EAX       ; 004189b4
    JMP 0x0041891b                      ; 004189b7
        ;   XREF to: 0041891b (UNCONDITIONAL_JUMP)  ; LAB_0041891b
    LEA EAX,[EBX + 0x2b4]               ; 004189bc
        ;   Label: LAB_004189bc
    PUSH EAX                            ; 004189c2
    XOR EDI,EDI                         ; 004189c3
    CALL FUN_00547440                   ; 004189c5
        ;   XREF to: 00547440 (UNCONDITIONAL_CALL)  ; undefined FUN_00547440()
    MOV EAX,dword ptr [EBX + 0x10b74]   ; 004189ca
    ADD ESP,0x4                         ; 004189d0
    TEST EAX,EAX                        ; 004189d3
    JLE 0x00418a10                      ; 004189d5
        ;   XREF to: 00418a10 (CONDITIONAL_JUMP)  ; LAB_00418a10
    MOV ESI,EBX                         ; 004189d7
    PUSH 0x1                            ; 004189d9
        ;   Label: LAB_004189d9
    MOV EAX,dword ptr [ESI + 0x10bbc]   ; 004189db
    PUSH EAX                            ; 004189e1
    MOV EDX,dword ptr [0x00618170]      ; 004189e2 | DAT_00618170
    PUSH EDX                            ; 004189e8 | DAT_01d182f0
    ADD ESI,0x48                        ; 004189e9
    CALL FUN_004fc7b0                   ; 004189ec
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc7b0()
    MOV dword ptr [ESI + 0x10b74],0x0   ; 004189f1
    INC EDI                             ; 004189fb
    MOV ECX,dword ptr [EBX + 0x10b74]   ; 004189fc
    ADD ESP,0xc                         ; 00418a02
    CMP EDI,ECX                         ; 00418a05
    JL 0x004189d9                       ; 00418a07
        ;   XREF to: 004189d9 (CONDITIONAL_JUMP)  ; LAB_004189d9
    LEA EAX,[EAX]                       ; 00418a09
    NOP                                 ; 00418a0f
    FLD float ptr [EBX + 0x10b70]       ; 00418a10
        ;   Label: LAB_00418a10
    MOV dword ptr [EBX + 0x11118],0x0   ; 00418a16
    FLD ST0                             ; 00418a20
    FMUL double ptr [0x005cc1d2]        ; 00418a22 | DAT_005cc1d2
    MOV dword ptr [EBX + 0x25a8],0x42c80000 ; 00418a28
    FSTP ST1                            ; 00418a32
    FST float ptr [EBX + 0x10b70]       ; 00418a34
    FCOMP double ptr [0x005cc1da]       ; 00418a3a | DAT_005cc1da
    FNSTSW AX                           ; 00418a40
    SAHF                                ; 00418a42
    JBE 0x00418a9c                      ; 00418a43
        ;   XREF to: 00418a9c (CONDITIONAL_JUMP)  ; LAB_00418a9c
    LEA EAX,[EBX + 0x2508]              ; 00418a45
        ;   Label: LAB_00418a45
    MOV dword ptr [EAX + 0x8],0x0       ; 00418a4b
    FLD float ptr [EBP + 0x92]          ; 00418a52
    MOV EDX,dword ptr [EAX + 0x8]       ; 00418a58
    MOV dword ptr [EAX + 0x4],EDX       ; 00418a5b
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418a5e
    MOV dword ptr [EAX],EDX             ; 00418a61
    FMUL float ptr [EBX + 0x10a60]      ; 00418a63
    LEA ESI,[EBX + 0x2b4]               ; 00418a69
    FSTP float ptr [EBP + 0x4a]         ; 00418a6f
    FLD float ptr [EBP + 0x4a]          ; 00418a72
        ;   Label: LAB_00418a72
    FLDZ                                ; 00418a75
    FCOMPP                              ; 00418a77
    FNSTSW AX                           ; 00418a79
    SAHF                                ; 00418a7b
    JNC 0x00418ad1                      ; 00418a7c
        ;   XREF to: 00418ad1 (CONDITIONAL_JUMP)  ; LAB_00418ad1
    LEA EAX,[EBP + 0x4a]                ; 00418a7e
    PUSH EAX                            ; 00418a81
    PUSH ESI                            ; 00418a82
    CALL FUN_005030c0                   ; 00418a83
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 00418a88
    CMP EAX,0x64                        ; 00418a8b
    JZ 0x00418aa8                       ; 00418a8e
        ;   XREF to: 00418aa8 (CONDITIONAL_JUMP)  ; LAB_00418aa8
    PUSH EAX                            ; 00418a90
    PUSH EBX                            ; 00418a91
    CALL FUN_0042aa00                   ; 00418a92
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 00418a97
    JMP 0x00418a72                      ; 00418a9a
        ;   XREF to: 00418a72 (UNCONDITIONAL_JUMP)  ; LAB_00418a72
    MOV dword ptr [EBX + 0x10b70],0x40200000 ; 00418a9c
        ;   Label: LAB_00418a9c
    JMP 0x00418a45                      ; 00418aa6
        ;   XREF to: 00418a45 (UNCONDITIONAL_JUMP)  ; LAB_00418a45
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 00418aa8
        ;   Label: LAB_00418aa8
    TEST EAX,EAX                        ; 00418aae
    JZ 0x00418a72                       ; 00418ab0
        ;   XREF to: 00418a72 (CONDITIONAL_JUMP)  ; LAB_00418a72
    PUSH 0x0                            ; 00418ab2
    PUSH 0x3e4ccccd                     ; 00418ab4
    PUSH EAX                            ; 00418ab9
    PUSH 0x1                            ; 00418aba
    PUSH EBX                            ; 00418abc
    MOV dword ptr [EBX + 0x10b04],0x0   ; 00418abd
    CALL FUN_00428b10                   ; 00418ac7
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00428b10()
    ADD ESP,0x14                        ; 00418acc
    JMP 0x00418a72                      ; 00418acf
        ;   XREF to: 00418a72 (UNCONDITIONAL_JUMP)  ; LAB_00418a72
    FLD float ptr [EBP + 0x92]          ; 00418ad1
        ;   Label: LAB_00418ad1
    FMUL float ptr [EBX + 0x10a60]      ; 00418ad7
    SUB ESP,0x4                         ; 00418add
    MOV EAX,dword ptr [EBX + 0x2510]    ; 00418ae0
    MOV dword ptr [EBX + 0x2594],EAX    ; 00418ae6
    FSTP float ptr [ESP]                ; 00418aec
    PUSH EBX                            ; 00418aef
    CALL FUN_0042b2a0                   ; 00418af0
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b2a0()
    ADD ESP,0x8                         ; 00418af5
    PUSH ESI                            ; 00418af8
    CALL FUN_005035c0                   ; 00418af9
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    ADD ESP,0x4                         ; 00418afe
    PUSH dword ptr [EBP + 0x92]         ; 00418b01
    MOV EDI,dword ptr [EAX + 0x24]      ; 00418b07
    PUSH EBX                            ; 00418b0a
    MOV dword ptr [EBP + 0x6e],EDI      ; 00418b0b
    CALL FUN_004287f0                   ; 00418b0e
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004287f0()
    ADD ESP,0x8                         ; 00418b13
    TEST EAX,EAX                        ; 00418b16
    JZ 0x0041928c                       ; 00418b18
        ;   XREF to: 0041928c (CONDITIONAL_JUMP)  ; LAB_0041928c
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00418b1e
    CMP EAX,0x2                         ; 00418b24
    JNC 0x00418db8                      ; 00418b27
        ;   XREF to: 00418db8 (CONDITIONAL_JUMP)  ; LAB_00418db8
    CMP EAX,0x1                         ; 00418b2d
    JNZ 0x00418dc3                      ; 00418b30
        ;   XREF to: 00418dc3 (CONDITIONAL_JUMP)  ; LAB_00418dc3
    PUSH 0x1                            ; 00418b36
        ;   Label: LAB_00418b36
    PUSH 0x1                            ; 00418b38
    LEA EAX,[EBX + 0x2b4]               ; 00418b3a
        ;   Label: LAB_00418b3a
    PUSH EAX                            ; 00418b40
    CALL FUN_00503620                   ; 00418b41
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00418b46
        ;   Label: LAB_00418b46
    LEA EAX,[EBX + 0x2508]              ; 00418b49
    MOV dword ptr [EAX + 0x8],0x0       ; 00418b4f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00418b56
    MOV dword ptr [EAX + 0x4],EDX       ; 00418b59
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418b5c
    MOV dword ptr [EAX],EDX             ; 00418b5f
    FLD float ptr [EBX + 0x10a74]       ; 00418b61
        ;   Label: caseD_3
    FLDZ                                ; 00418b67
    FCOMPP                              ; 00418b69
    FNSTSW AX                           ; 00418b6b
    SAHF                                ; 00418b6d
    JNC 0x00418b82                      ; 00418b6e
        ;   XREF to: 00418b82 (CONDITIONAL_JUMP)  ; LAB_00418b82
    FLD float ptr [EBX + 0x10a74]       ; 00418b70
    FSUB float ptr [EBP + 0x92]         ; 00418b76
    FSTP float ptr [EBX + 0x10a74]      ; 00418b7c
    PUSH EBX                            ; 00418b82
        ;   Label: LAB_00418b82
    CALL FUN_00424430                   ; 00418b83
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; undefined FUN_00424430()
    ADD ESP,0x4                         ; 00418b88
    TEST EAX,EAX                        ; 00418b8b
    JZ 0x00418ccb                       ; 00418b8d
        ;   XREF to: 00418ccb (CONDITIONAL_JUMP)  ; LAB_00418ccb
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 00418b93
    TEST EDI,EDI                        ; 00418b99
    JZ 0x00418bc7                       ; 00418b9b
        ;   XREF to: 00418bc7 (CONDITIONAL_JUMP)  ; LAB_00418bc7
    PUSH EDI                            ; 00418b9d
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 00418b9e
    CALL dword ptr [EDX + 0xfc]         ; 00418ba4
    ADD ESP,0x4                         ; 00418baa
    CMP EAX,EBX                         ; 00418bad
    JNZ 0x00418bc7                      ; 00418baf
        ;   XREF to: 00418bc7 (CONDITIONAL_JUMP)  ; LAB_00418bc7
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00418bb1
    PUSH EAX                            ; 00418bb7
    MOV EDX,dword ptr [0x0061b5a8]      ; 00418bb8 | DAT_0061b5a8
    PUSH EDX                            ; 00418bbe | DAT_01e661b8
    CALL FUN_00537e30                   ; 00418bbf
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e30()
    ADD ESP,0x8                         ; 00418bc4
    PUSH dword ptr [EBP + 0x92]         ; 00418bc7
        ;   Label: LAB_00418bc7
    PUSH EBX                            ; 00418bcd
    LEA ESI,[EBX + 0x2588]              ; 00418bce
    CALL FUN_00423a10                   ; 00418bd4
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a10()
    FLD float ptr [ESI]                 ; 00418bd9
    FMUL float ptr [EBP + 0x92]         ; 00418bdb
    FLD float ptr [ESI + 0x4]           ; 00418be1
    FMUL float ptr [EBP + 0x92]         ; 00418be4
    FLD float ptr [ESI + 0x8]           ; 00418bea
    FMUL float ptr [EBP + 0x92]         ; 00418bed
    LEA EDI,[EBP + 0xfffffeee]          ; 00418bf3
    LEA ESI,[EBP + 0xfffffefa]          ; 00418bf9
    FXCH ST2                            ; 00418bff
    FSTP float ptr [EBP + 0xfffffefa]   ; 00418c01
    FSTP float ptr [EBP + 0xfffffefe]   ; 00418c07
    FSTP float ptr [EBP + 0xffffff02]   ; 00418c0d
    MOVSD ES:EDI,ESI                    ; 00418c13
    MOVSD ES:EDI,ESI                    ; 00418c14
    MOVSD ES:EDI,ESI                    ; 00418c15
    LEA EDX,[EBX + 0x257c]              ; 00418c16
    FLD float ptr [EBP + 0xfffffeee]    ; 00418c1c
    FLD float ptr [EBP + 0xfffffef2]    ; 00418c22
    FLD float ptr [EBP + 0xfffffef6]    ; 00418c28
    LEA EDI,[EBP + -0x3a]               ; 00418c2e
    LEA ESI,[EBP + -0x76]               ; 00418c31
    FXCH ST2                            ; 00418c34
    FADD float ptr [EDX]                ; 00418c36
    FXCH                                ; 00418c38
    FADD float ptr [EDX + 0x4]          ; 00418c3a
    FXCH ST2                            ; 00418c3d
    FADD float ptr [EDX + 0x8]          ; 00418c3f
    FXCH                                ; 00418c42
    FSTP float ptr [EBP + -0x76]        ; 00418c44
    FXCH                                ; 00418c47
    FSTP float ptr [EBP + -0x72]        ; 00418c49
    FSTP float ptr [EBP + -0x6e]        ; 00418c4c
    MOVSD ES:EDI,ESI                    ; 00418c4f
    MOVSD ES:EDI,ESI                    ; 00418c50
    MOVSD ES:EDI,ESI                    ; 00418c51
    LEA EAX,[EBX + 0x2508]              ; 00418c52
    FLD float ptr [EBP + -0x3a]         ; 00418c58
    FLD float ptr [EBP + -0x36]         ; 00418c5b
    FLD float ptr [EBP + -0x32]         ; 00418c5e
    LEA EDI,[EBP + 0xffffff66]          ; 00418c61
    LEA ESI,[EBP + 0xffffff5a]          ; 00418c67
    FXCH ST2                            ; 00418c6d
    FADD float ptr [EAX]                ; 00418c6f
    FXCH                                ; 00418c71
    FADD float ptr [EAX + 0x4]          ; 00418c73
    FXCH ST2                            ; 00418c76
    FADD float ptr [EAX + 0x8]          ; 00418c78
    FXCH                                ; 00418c7b
    FSTP float ptr [EBP + 0xffffff5a]   ; 00418c7d
    FXCH                                ; 00418c83
    FSTP float ptr [EBP + 0xffffff5e]   ; 00418c85
    FSTP float ptr [EBP + 0xffffff62]   ; 00418c8b
    MOVSD ES:EDI,ESI                    ; 00418c91
    MOVSD ES:EDI,ESI                    ; 00418c92
    MOVSD ES:EDI,ESI                    ; 00418c93
    MOV dword ptr [EDX + 0x8],0x0       ; 00418c94
    MOV ECX,dword ptr [EDX + 0x8]       ; 00418c9b
    MOV dword ptr [EDX + 0x4],ECX       ; 00418c9e
    MOV ECX,dword ptr [EDX + 0x4]       ; 00418ca1
    MOV dword ptr [EDX],ECX             ; 00418ca4
    MOV dword ptr [EAX + 0x8],0x0       ; 00418ca6
    ADD ESP,0x8                         ; 00418cad
    MOV EDX,dword ptr [EAX + 0x8]       ; 00418cb0
    MOV dword ptr [EAX + 0x4],EDX       ; 00418cb3
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418cb6
    MOV dword ptr [EAX],EDX             ; 00418cb9
    LEA EAX,[EBP + 0xffffff66]          ; 00418cbb
    PUSH EAX                            ; 00418cc1
    PUSH EBX                            ; 00418cc2
    CALL FUN_00423a60                   ; 00418cc3
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a60()
    ADD ESP,0x8                         ; 00418cc8
    PUSH EBX                            ; 00418ccb
        ;   Label: LAB_00418ccb
    CALL FUN_00424470                   ; 00418ccc
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 00418cd1
    LEA EAX,[EBX + 0x2b4]               ; 00418cd4
    PUSH EAX                            ; 00418cda
    CALL FUN_00544f00                   ; 00418cdb
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 00418ce0
    PUSH dword ptr [EBP + 0x92]         ; 00418ce3
    PUSH EBX                            ; 00418ce9
    CALL FUN_00429e90                   ; 00418cea
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00418cef
    ADD ESP,0x8                         ; 00418cf2
    CMP ECX,0x1                         ; 00418cf5
    JNZ 0x0041898f                      ; 00418cf8
        ;   XREF to: 0041898f (CONDITIONAL_JUMP)  ; LAB_0041898f
    PUSH 0x42c80000                     ; 00418cfe
    SUB ESP,0x8                         ; 00418d03
    FLD float ptr [EBX + 0x28]          ; 00418d06
    FSTP double ptr [ESP]               ; 00418d09
    SUB ESP,0x8                         ; 00418d0c
    FLD float ptr [EBX + 0x24]          ; 00418d0f
    FSTP double ptr [ESP]               ; 00418d12
    SUB ESP,0x8                         ; 00418d15
    FLD float ptr [EBX + 0x20]          ; 00418d18
    FSTP double ptr [ESP]               ; 00418d1b
    CALL FUN_005515e0                   ; 00418d1e
        ;   XREF to: 005515e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005515e0()
    ADD ESP,0x1c                        ; 00418d23
    TEST EAX,EAX                        ; 00418d26
    JZ 0x0041898f                       ; 00418d28
        ;   XREF to: 0041898f (CONDITIONAL_JUMP)  ; LAB_0041898f
    MOV EDI,dword ptr [EBX + 0x10b08]   ; 00418d2e
    PUSH EDI                            ; 00418d34
    CALL FUN_00550b70                   ; 00418d35
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 00418d3a
    TEST EAX,EAX                        ; 00418d3d
    JNZ 0x00418987                      ; 00418d3f
        ;   XREF to: 00418987 (CONDITIONAL_JUMP)  ; LAB_00418987
    CALL FUN_00550450                   ; 00418d45
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
    PUSH 0x2                            ; 00418d4a
    PUSH 0x3f800000                     ; 00418d4c
    PUSH 0x0                            ; 00418d51
    CALL FUN_0040cf60                   ; 00418d53
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 00418d58
    MOV dword ptr [EBP + 0x76],EAX      ; 00418d5b
    SUB ESP,0x8                         ; 00418d5e
    FLD float ptr [EBP + 0x76]          ; 00418d61
    FSTP double ptr [ESP]               ; 00418d64
    CALL FUN_005503e0                   ; 00418d67
        ;   XREF to: 005503e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005503e0()
    ADD ESP,0xc                         ; 00418d6c
    PUSH 0x5cc1ba                       ; 00418d6f | = "boneGuy-walkloop.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00418d74
    PUSH EBX                            ; 00418d7a
    CALL dword ptr [EAX + 0x38]         ; 00418d7b
    ADD ESP,0x8                         ; 00418d7e
    MOV dword ptr [EBX + 0x10b08],EAX   ; 00418d81
    CALL FUN_005504d0                   ; 00418d87
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005504d0()
    LEA ESP,[EBP + 0x7a]                ; 00418d8c
    POP EBP                             ; 00418d8f
    POP EDI                             ; 00418d90
    POP ESI                             ; 00418d91
    POP EBX                             ; 00418d92
    RET                                 ; 00418d93
    PUSH 0x1                            ; 00418d94
        ;   Label: LAB_00418d94
    PUSH 0x0                            ; 00418d96
    PUSH ESI                            ; 00418d98
    CALL FUN_00503620                   ; 00418d99
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00418d9e
    PUSH EBX                            ; 00418da1
    PUSH 0x5cc15c                       ; 00418da2 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 00418da7 | PTR_DAT_00609ed0
    PUSH ESI                            ; 00418dad | DAT_007c158c
    CALL FUN_00436710                   ; 00418dae
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    JMP 0x00418b46                      ; 00418db3
        ;   XREF to: 00418b46 (UNCONDITIONAL_JUMP)  ; LAB_00418b46
    JBE 0x00418b36                      ; 00418db8
        ;   XREF to: 00418b36 (CONDITIONAL_JUMP)  ; LAB_00418b36
        ;   Label: LAB_00418db8
    CMP EAX,0x3                         ; 00418dbe
    JZ 0x00418d94                       ; 00418dc1
        ;   XREF to: 00418d94 (CONDITIONAL_JUMP)  ; LAB_00418d94
    PUSH 0x1                            ; 00418dc3
        ;   Label: LAB_00418dc3
    PUSH 0x0                            ; 00418dc5
    JMP 0x00418b3a                      ; 00418dc7
        ;   XREF to: 00418b3a (UNCONDITIONAL_JUMP)  ; LAB_00418b3a
    LEA EAX,[EBP + 0xfffffe1a]          ; 00418dcc
        ;   Label: caseD_2
    PUSH EAX                            ; 00418dd2
    CALL FUN_004222d0                   ; 00418dd3
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00418dd8
    PUSH 0x41700000                     ; 00418ddb
    PUSH 0x40e00000                     ; 00418de0
    LEA ESI,[EBP + 0xffffff42]          ; 00418de5
    CALL FUN_0040cf60                   ; 00418deb
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00418df0
    ADD ESP,0x8                         ; 00418df3
    LEA EAX,[EBP + 0xfffffe1a]          ; 00418df6
    MOV EDX,dword ptr [0x007bc944]      ; 00418dfc | DAT_007bc944
    PUSH EAX                            ; 00418e02
    LEA EAX,[EDX*0x4 + 0x0]             ; 00418e03
    MOV dword ptr [EBP + 0xfffffe4e],EBX ; 00418e0a
    SUB EAX,EDX                         ; 00418e10
    MOV dword ptr [EBP + 0xfffffe52],EBX ; 00418e12
    SHL EAX,0x4                         ; 00418e18
    LEA EDX,[EBX + 0x1134]              ; 00418e1b
    PUSH 0x3ecccccd                     ; 00418e21
    ADD EAX,EDX                         ; 00418e26
    LEA EDI,[EBP + -0x52]               ; 00418e28
    PUSH EAX                            ; 00418e2b
    FLD float ptr [EBP + 0x76]          ; 00418e2c
    PUSH 0x265370c                      ; 00418e2f | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffe1e]   ; 00418e34
    CALL FUN_00591530                   ; 00418e3a
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 00418e3f
    LEA EAX,[EBP + -0x52]               ; 00418e42
    LEA ESI,[EBP + 0xffffff42]          ; 00418e45
    PUSH EAX                            ; 00418e4b
    MOVSD ES:EDI,ESI                    ; 00418e4c
    MOVSD ES:EDI,ESI                    ; 00418e4d
    MOVSD ES:EDI,ESI                    ; 00418e4e
    PUSH EBX                            ; 00418e4f
    LEA ESI,[EBP + 0xffffff72]          ; 00418e50
    CALL FUN_00408d70                   ; 00418e56
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00418e5b
    LEA EAX,[EBP + -0x6a]               ; 00418e5e
    PUSH EAX                            ; 00418e61
    LEA EDI,[EBP + -0x6a]               ; 00418e62
    LEA ESI,[EBP + 0xffffff72]          ; 00418e65
    PUSH EBX                            ; 00418e6b
    MOVSD ES:EDI,ESI                    ; 00418e6c
    MOVSD ES:EDI,ESI                    ; 00418e6d
    MOVSD ES:EDI,ESI                    ; 00418e6e
    CALL FUN_00488110                   ; 00418e6f
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; undefined FUN_00488110()
    ADD ESP,0x10                        ; 00418e74
    JMP 0x00418b61                      ; 00418e77
        ;   XREF to: 00418b61 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [EBX + 0x2698]    ; 00418e7c
        ;   Label: caseD_6
    TEST ESI,ESI                        ; 00418e82
    JZ 0x00418b61                       ; 00418e84
        ;   XREF to: 00418b61 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH ESI                            ; 00418e8a
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 00418e8b
    LEA ESI,[EBP + 0xfffffeaa]          ; 00418e91
    LEA EDI,[EBP + 0xfffffe92]          ; 00418e97
    CALL dword ptr [EDX + 0x24]         ; 00418e9d
    MOV ECX,0x6                         ; 00418ea0
    LEA ESI,[EBP + 0xfffffeaa]          ; 00418ea5
    MOVSD.REP ES:EDI,ESI                ; 00418eab
    FLD float ptr [EBP + 0xfffffe92]    ; 00418ead
    FLD float ptr [EBP + 0xfffffe96]    ; 00418eb3
    FLD float ptr [EBP + 0xfffffe9a]    ; 00418eb9
    LEA EDI,[EBP + 0xffffff2a]          ; 00418ebf
    LEA ESI,[EBP + 0xffffff12]          ; 00418ec5
    FXCH ST2                            ; 00418ecb
    FADD float ptr [EBP + 0xfffffe9e]   ; 00418ecd
    FXCH                                ; 00418ed3
    FADD float ptr [EBP + 0xfffffea2]   ; 00418ed5
    FXCH ST2                            ; 00418edb
    FADD float ptr [EBP + 0xfffffea6]   ; 00418edd
    FXCH                                ; 00418ee3
    FSTP float ptr [EBP + 0xffffff12]   ; 00418ee5
    FXCH                                ; 00418eeb
    FSTP float ptr [EBP + 0xffffff16]   ; 00418eed
    FSTP float ptr [EBP + 0xffffff1a]   ; 00418ef3
    MOVSD ES:EDI,ESI                    ; 00418ef9
    MOVSD ES:EDI,ESI                    ; 00418efa
    MOVSD ES:EDI,ESI                    ; 00418efb
    FLD float ptr [0x005cc1e2]          ; 00418efc | DAT_005cc1e2
    FLD float ptr [EBP + 0xffffff2a]    ; 00418f02
    FMUL ST1                            ; 00418f08
    FLD float ptr [EBP + 0xffffff2e]    ; 00418f0a
    FMUL ST2                            ; 00418f10
    FLD float ptr [EBP + 0xffffff32]    ; 00418f12
    FMULP ST3                           ; 00418f18
    LEA EAX,[EBP + 0xe]                 ; 00418f1a
    LEA EDX,[EBP + 0x2]                 ; 00418f1d
    ADD ESP,0x4                         ; 00418f20
    LEA EDI,[EBP + 0xe]                 ; 00418f23
    LEA ESI,[EBP + -0xa]                ; 00418f26
    FXCH                                ; 00418f29
    FSTP float ptr [EBP + -0xa]         ; 00418f2b
    FSTP float ptr [EBP + -0x6]         ; 00418f2e
    FSTP float ptr [EBP + -0x2]         ; 00418f31
    MOVSD ES:EDI,ESI                    ; 00418f34
    MOVSD ES:EDI,ESI                    ; 00418f35
    MOVSD ES:EDI,ESI                    ; 00418f36
    CMP EDX,EAX                         ; 00418f37
    JNZ 0x00419063                      ; 00418f39
        ;   XREF to: 00419063 (CONDITIONAL_JUMP)  ; LAB_00419063
    LEA EAX,[EBP + -0x5e]               ; 00418f3f
        ;   Label: LAB_00418f3f
    LEA EDX,[EBP + 0x2]                 ; 00418f42
    CMP EAX,EDX                         ; 00418f45
    JZ 0x00418f5b                       ; 00418f47
        ;   XREF to: 00418f5b (CONDITIONAL_JUMP)  ; LAB_00418f5b
    MOV EAX,dword ptr [EBP + 0x2]       ; 00418f49
    MOV dword ptr [EBP + -0x5e],EAX     ; 00418f4c
    MOV EAX,dword ptr [EBP + 0x6]       ; 00418f4f
    MOV dword ptr [EBP + -0x5a],EAX     ; 00418f52
    MOV EAX,dword ptr [EBP + 0xa]       ; 00418f55
    MOV dword ptr [EBP + -0x56],EAX     ; 00418f58
    MOV EAX,dword ptr [EBP + 0xfffffe9a] ; 00418f5b
        ;   Label: LAB_00418f5b
    MOV dword ptr [EBP + -0x56],EAX     ; 00418f61
    MOV EAX,dword ptr [EBP + 0xfffffea6] ; 00418f64
    MOV dword ptr [EBP + 0xa],EAX       ; 00418f6a
    LEA EAX,[EBP + -0x5e]               ; 00418f6d
    PUSH EAX                            ; 00418f70
    MOV EDI,dword ptr [EBX + 0x2698]    ; 00418f71
    PUSH EDI                            ; 00418f77
    LEA ESI,[EBP + 0xffffff1e]          ; 00418f78
    CALL FUN_00408d70                   ; 00418f7e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA EDI,[EBP + 0xffffff4e]          ; 00418f83
    LEA ESI,[EBP + 0xffffff1e]          ; 00418f89
    LEA EAX,[EBP + 0xffffff4e]          ; 00418f8f
    LEA EDX,[EBP + -0x5e]               ; 00418f95
    ADD ESP,0x8                         ; 00418f98
    MOVSD ES:EDI,ESI                    ; 00418f9b
    MOVSD ES:EDI,ESI                    ; 00418f9c
    MOVSD ES:EDI,ESI                    ; 00418f9d
    CMP EDX,EAX                         ; 00418f9e
    JZ 0x00418fbd                       ; 00418fa0
        ;   XREF to: 00418fbd (CONDITIONAL_JUMP)  ; LAB_00418fbd
    MOV EAX,dword ptr [EBP + 0xffffff4e] ; 00418fa2
    MOV dword ptr [EBP + -0x5e],EAX     ; 00418fa8
    MOV EAX,dword ptr [EBP + 0xffffff52] ; 00418fab
    MOV dword ptr [EBP + -0x5a],EAX     ; 00418fb1
    MOV EAX,dword ptr [EBP + 0xffffff56] ; 00418fb4
    MOV dword ptr [EBP + -0x56],EAX     ; 00418fba
    LEA EAX,[EBP + 0x2]                 ; 00418fbd
        ;   Label: LAB_00418fbd
    PUSH EAX                            ; 00418fc0
    MOV EAX,dword ptr [EBX + 0x2698]    ; 00418fc1
    PUSH EAX                            ; 00418fc7
    LEA ESI,[EBP + 0xfffffee2]          ; 00418fc8
    LEA EDI,[EBP + 0xffffff7e]          ; 00418fce
    CALL FUN_00408d70                   ; 00418fd4
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[EBP + 0xfffffee2]          ; 00418fd9
    LEA EAX,[EBP + 0xffffff7e]          ; 00418fdf
    LEA EDX,[EBP + 0x2]                 ; 00418fe5
    ADD ESP,0x8                         ; 00418fe8
    MOVSD ES:EDI,ESI                    ; 00418feb
    MOVSD ES:EDI,ESI                    ; 00418fec
    MOVSD ES:EDI,ESI                    ; 00418fed
    CMP EDX,EAX                         ; 00418fee
    JZ 0x00419007                       ; 00418ff0
        ;   XREF to: 00419007 (CONDITIONAL_JUMP)  ; LAB_00419007
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 00418ff2
    MOV dword ptr [EBP + 0x2],EAX       ; 00418ff8
    MOV EAX,dword ptr [EBP + -0x7e]     ; 00418ffb
    MOV dword ptr [EBP + 0x6],EAX       ; 00418ffe
    MOV EAX,dword ptr [EBP + -0x7a]     ; 00419001
    MOV dword ptr [EBP + 0xa],EAX       ; 00419004
    LEA EAX,[EBP + 0xfffffe56]          ; 00419007
        ;   Label: LAB_00419007
    PUSH EAX                            ; 0041900d
    CALL FUN_004222d0                   ; 0041900e
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00419013
    PUSH 0x41c80000                     ; 00419016
    PUSH 0x41700000                     ; 0041901b
    CALL FUN_0040cf60                   ; 00419020
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00419025
    MOV EAX,dword ptr [EBP + 0x76]      ; 00419028
    MOV dword ptr [EBP + 0xfffffe5a],EAX ; 0041902b
    MOV EAX,dword ptr [EBX + 0x2698]    ; 00419031
    ADD ESP,0x8                         ; 00419037
    MOV dword ptr [EBP + 0xfffffe8a],EAX ; 0041903a
    LEA EAX,[EBP + 0xfffffe56]          ; 00419040
    PUSH EAX                            ; 00419046
    LEA EAX,[EBP + 0x2]                 ; 00419047
    PUSH EAX                            ; 0041904a
    LEA EAX,[EBP + -0x5e]               ; 0041904b
    PUSH EAX                            ; 0041904e
    PUSH EBX                            ; 0041904f
    MOV dword ptr [EBP + 0xfffffe8e],EBX ; 00419050
    CALL FUN_004881b0                   ; 00419056
        ;   XREF to: 004881b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004881b0()
    ADD ESP,0x10                        ; 0041905b
    JMP 0x00418b61                      ; 0041905e
        ;   XREF to: 00418b61 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,dword ptr [EBP + 0xe]       ; 00419063
        ;   Label: LAB_00419063
    MOV dword ptr [EBP + 0x2],EAX       ; 00419066
    MOV EAX,dword ptr [EBP + 0x12]      ; 00419069
    MOV dword ptr [EBP + 0x6],EAX       ; 0041906c
    MOV EAX,dword ptr [EBP + 0x16]      ; 0041906f
    MOV dword ptr [EBP + 0xa],EAX       ; 00419072
    JMP 0x00418f3f                      ; 00419075
        ;   XREF to: 00418f3f (UNCONDITIONAL_JUMP)  ; LAB_00418f3f
    CMP dword ptr [EBX + 0x10a64],0x0   ; 0041907a
        ;   Label: caseD_5
    JNZ 0x00418b61                      ; 00419081
        ;   XREF to: 00418b61 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 00419087
    JNZ 0x00418b61                      ; 0041908e
        ;   XREF to: 00418b61 (CONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EBX + 0x10a64],0x1   ; 00419094
    JMP 0x00418b61                      ; 0041909e
        ;   XREF to: 00418b61 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004190a3
        ;   Label: caseD_0
    PUSH EBX                            ; 004190a9
    CALL FUN_00488970                   ; 004190aa
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; undefined FUN_00488970()
    ADD ESP,0x8                         ; 004190af
    TEST EAX,EAX                        ; 004190b2
    JZ 0x004190c8                       ; 004190b4
        ;   XREF to: 004190c8 (CONDITIONAL_JUMP)  ; LAB_004190c8
    PUSH 0x1                            ; 004190b6
    PUSH 0x1                            ; 004190b8
    PUSH ESI                            ; 004190ba
    CALL FUN_00503620                   ; 004190bb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004190c0
    JMP 0x00418b61                      ; 004190c3
        ;   XREF to: 00418b61 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004190c8
        ;   Label: LAB_004190c8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004190ce
    PUSH EBX                            ; 004190d4
    CALL dword ptr [EAX + 0x150]        ; 004190d5
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004190db
    ADD ESP,0x8                         ; 004190e1
    TEST ECX,ECX                        ; 004190e4
    JZ 0x00418b61                       ; 004190e6
        ;   XREF to: 00418b61 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004190ec
    PUSH 0x1                            ; 004190ee
    PUSH ESI                            ; 004190f0
    CALL FUN_00503620                   ; 004190f1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004190f6
    JMP 0x00418b61                      ; 004190f9
        ;   XREF to: 00418b61 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004190fe
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00419104
    PUSH EBX                            ; 0041910a
    CALL dword ptr [EAX + 0x150]        ; 0041910b
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 00419111
    ADD ESP,0x8                         ; 00419117
    TEST EDI,EDI                        ; 0041911a
    JNZ 0x00419146                      ; 0041911c
        ;   XREF to: 00419146 (CONDITIONAL_JUMP)  ; LAB_00419146
    PUSH dword ptr [EBP + 0x92]         ; 0041911e
    PUSH EBX                            ; 00419124
    CALL FUN_00488970                   ; 00419125
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; undefined FUN_00488970()
    ADD ESP,0x8                         ; 0041912a
    TEST EAX,EAX                        ; 0041912d
    JNZ 0x00418b61                      ; 0041912f
        ;   XREF to: 00418b61 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00419135
    PUSH EDI                            ; 00419137
    PUSH ESI                            ; 00419138
    CALL FUN_00503620                   ; 00419139
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0041913e
    JMP 0x00418b61                      ; 00419141
        ;   XREF to: 00418b61 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 00419146
        ;   Label: LAB_00419146
    PUSH EBX                            ; 0041914c
    CALL FUN_00419520                   ; 0041914d
        ;   XREF to: 00419520 (UNCONDITIONAL_CALL)  ; undefined FUN_00419520()
    ADD ESP,0x8                         ; 00419152
    TEST EAX,EAX                        ; 00419155
    JNZ 0x00418b61                      ; 00419157
        ;   XREF to: 00418b61 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x005f3828]                ; 0041915d | DAT_005f3828
    MOV dword ptr [EBP + 0x52],EAX      ; 00419162
    CMP dword ptr [EBX + 0x2698],0x0    ; 00419165
    JZ 0x00419176                       ; 0041916c
        ;   XREF to: 00419176 (CONDITIONAL_JUMP)  ; LAB_00419176
    MOV EAX,[0x005f382c]                ; 0041916e | DAT_005f382c
    MOV dword ptr [EBP + 0x52],EAX      ; 00419173
    PUSH 0x3e32b8c2                     ; 00419176
        ;   Label: LAB_00419176
    PUSH 0x3f000000                     ; 0041917b
    XOR EDX,EDX                         ; 00419180
    MOV EAX,dword ptr [EBP + 0x52]      ; 00419182
    MOV dword ptr [EBP + 0xffffff36],EDX ; 00419185
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 0041918b
    LEA EAX,[EBP + 0xffffff36]          ; 00419191
    MOV dword ptr [EBP + 0xffffff3a],EDX ; 00419197
    PUSH EAX                            ; 0041919d
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0041919e
    PUSH EAX                            ; 004191a4
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004191a5
    CALL dword ptr [EDX + 0xcc]         ; 004191ab
    ADD ESP,0x4                         ; 004191b1
    PUSH EAX                            ; 004191b4
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004191b5
    ADD EAX,0x20                        ; 004191bb
    PUSH EAX                            ; 004191be
    PUSH EBX                            ; 004191bf
    CALL FUN_00423000                   ; 004191c0
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; undefined FUN_00423000()
    ADD ESP,0x18                        ; 004191c5
    LEA ESI,[EBX + 0x2b4]               ; 004191c8
    TEST EAX,EAX                        ; 004191ce
    JL 0x0041925f                       ; 004191d0
        ;   XREF to: 0041925f (CONDITIONAL_JUMP)  ; LAB_0041925f
    LEA EDX,[EBX + 0x20]                ; 004191d6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004191d9
    FLD float ptr [EDX]                 ; 004191df
    FSUB float ptr [EAX + 0x20]         ; 004191e1
    FMUL ST0                            ; 004191e4
    FLD float ptr [EDX + 0x8]           ; 004191e6
    FSUB float ptr [EAX + 0x28]         ; 004191e9
    FMUL ST0                            ; 004191ec
    FADDP                               ; 004191ee
    FSQRT                               ; 004191f0
    FLD float ptr [EBP + 0x52]          ; 004191f2
    FADD double ptr [0x005cc1d2]        ; 004191f5 | DAT_005cc1d2
    FCOMPP                              ; 004191fb
    FNSTSW AX                           ; 004191fd
    SAHF                                ; 004191ff
    JC 0x00418b61                       ; 00419200
        ;   XREF to: 00418b61 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0x10a74]       ; 00419206
    FLDZ                                ; 0041920c
    FCOMPP                              ; 0041920e
    FNSTSW AX                           ; 00419210
    SAHF                                ; 00419212
    JC 0x00418b61                       ; 00419213
        ;   XREF to: 00418b61 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0x2698],0x0    ; 00419219
    JNZ 0x00419286                      ; 00419220
        ;   XREF to: 00419286 (CONDITIONAL_JUMP)  ; LAB_00419286
    PUSH 0x1                            ; 00419222
    PUSH 0x2                            ; 00419224
    PUSH ESI                            ; 00419226
        ;   Label: LAB_00419226
    CALL FUN_00503620                   ; 00419227
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0041922c
    MOV EAX,dword ptr [EBX + 0x10b08]   ; 0041922f
    PUSH EAX                            ; 00419235
    CALL FUN_00551050                   ; 00419236
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0041923b
    PUSH 0x5cc1a7                       ; 0041923e | = "boneguy-swing?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00419243
    PUSH EBX                            ; 00419249
    CALL dword ptr [EAX + 0x34]         ; 0041924a
    ADD ESP,0x8                         ; 0041924d
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 00419250
    JMP 0x00418b61                      ; 0041925a
        ;   XREF to: 00418b61 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 0041925f
        ;   Label: LAB_0041925f
    PUSH 0x5cc186                       ; 00419260 | = "%s gave up chase - I'm confused\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 00419265 | PTR_DAT_00609ed0
    PUSH EDX                            ; 0041926b | DAT_007c158c
    CALL FUN_00436710                   ; 0041926c
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 00419271
    PUSH 0x1                            ; 00419274
    PUSH 0x0                            ; 00419276
    PUSH ESI                            ; 00419278
    CALL FUN_00503620                   ; 00419279
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0041927e
    JMP 0x00418b61                      ; 00419281
        ;   XREF to: 00418b61 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00419286
        ;   Label: LAB_00419286
    PUSH 0x6                            ; 00419288
    JMP 0x00419226                      ; 0041928a
        ;   XREF to: 00419226 (UNCONDITIONAL_JUMP)  ; LAB_00419226
    CMP EDI,0x6                         ; 0041928c
        ;   Label: LAB_0041928c
    JA 0x00418b61                       ; 0041928f
        ;   XREF to: 00418b61 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x4186a0]  ; 00419295 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

