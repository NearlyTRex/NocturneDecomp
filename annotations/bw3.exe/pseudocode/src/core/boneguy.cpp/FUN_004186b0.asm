; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_004186b0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b6f7a
;   undefined4 DAT_005b6f82
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_xform.cpp_FUN_00583260
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004186b0
        ;   Label: core_boneguy.cpp_FUN_004186b0
    PUSH EDI                            ; 004186b1
    PUSH EBP                            ; 004186b2
    MOV EBP,ESP                         ; 004186b3
    SUB ESP,0x178                       ; 004186b5
    SUB EBP,0x7a                        ; 004186bb
    MOV EBX,ESI                         ; 004186be
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004186c0
    SHL EAX,0x3                         ; 004186c6
    MOV EDX,EAX                         ; 004186c9
    SHL EAX,0x4                         ; 004186cb
    SUB EAX,EDX                         ; 004186ce
    ADD EAX,dword ptr [EBP + 0x8a]      ; 004186d0
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 004186d6
    MOV EAX,dword ptr [EAX + 0x25a8]    ; 004186dc
    MOV dword ptr [EBP + 0x76],EAX      ; 004186e2
    MOV dword ptr [EBP + 0x1a],0xc0224dd3 ; 004186e5
    LEA EAX,[EBP + 0x16]                ; 004186ec
    PUSH EAX                            ; 004186ef
    MOV ECX,0xbf456042                  ; 004186f0
    PUSH 0x2cfd900                      ; 004186f5 | DAT_02cfd900
    LEA EAX,[EBP + 0xffffff62]          ; 004186fa
    MOV EDI,0x40224dd3                  ; 00418700
    PUSH EAX                            ; 00418705
    MOV dword ptr [EBP + 0x16],ECX      ; 00418706
    MOV dword ptr [EBP + 0x1e],EDI      ; 00418709
    CALL core_xform.cpp_FUN_00583940    ; 0041870c
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 00418711
    MOV EAX,dword ptr [ESI + 0x154]     ; 00418714
    PUSH ESI                            ; 0041871a
    LEA ESI,[EBP + -0x56]               ; 0041871b
    LEA EDI,[EBP + -0x6e]               ; 0041871e
    CALL dword ptr [EAX + 0x1c]         ; 00418721
    MOV ECX,0x6                         ; 00418724
    ADD ESP,0x4                         ; 00418729
    LEA EAX,[EBP + 0x22]                ; 0041872c
    LEA ESI,[EBP + -0x56]               ; 0041872f
    PUSH EAX                            ; 00418732
    MOVSD.REP ES:EDI,ESI                ; 00418733
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00418735
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [EBP + -0x6e]         ; 0041873a
    FLD float ptr [EBP + -0x6a]         ; 0041873d
    FLD float ptr [EBP + -0x66]         ; 00418740
    LEA EDI,[EBP + 0x46]                ; 00418743
    LEA ESI,[EBP + 0x22]                ; 00418746
    LEA EAX,[EBP + 0x6a]                ; 00418749
    ADD ESP,0x4                         ; 0041874c
    FXCH ST2                            ; 0041874f
    FADD float ptr [EBP + -0x62]        ; 00418751
    FXCH                                ; 00418754
    FADD float ptr [EBP + -0x5e]        ; 00418756
    FXCH ST2                            ; 00418759
    FADD float ptr [EBP + -0x5a]        ; 0041875b
    PUSH EAX                            ; 0041875e
    FXCH                                ; 0041875f
    FSTP float ptr [EBP + 0x22]         ; 00418761
    FXCH                                ; 00418764
    FSTP float ptr [EBP + 0x26]         ; 00418766
    FSTP float ptr [EBP + 0x2a]         ; 00418769
    MOVSD ES:EDI,ESI                    ; 0041876c
    MOVSD ES:EDI,ESI                    ; 0041876d
    MOVSD ES:EDI,ESI                    ; 0041876e
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0041876f
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [0x005b6f7a]          ; 00418774 | DAT_005b6f7a
    FLD float ptr [EBP + 0x46]          ; 0041877a
    FMUL ST1                            ; 0041877d
    FLD float ptr [EBP + 0x4a]          ; 0041877f
    FMUL ST2                            ; 00418782
    FLD float ptr [EBP + 0x4e]          ; 00418784
    FMULP ST3                           ; 00418787
    FLD float ptr [EBP + -0x66]         ; 00418789
    LEA EDI,[EBP + -0xe]                ; 0041878c
    LEA ESI,[EBP + 0x6a]                ; 0041878f
    LEA EAX,[EBP + -0x1a]               ; 00418792
    LEA EDX,[EBP + -0x2]                ; 00418795
    ADD ESP,0x4                         ; 00418798
    FXCH ST2                            ; 0041879b
    FSTP float ptr [EBP + 0x6a]         ; 0041879d
    FSTP float ptr [EBP + 0x6e]         ; 004187a0
    FXCH                                ; 004187a3
    FSTP float ptr [EBP + 0x72]         ; 004187a5
    MOVSD ES:EDI,ESI                    ; 004187a8
    MOVSD ES:EDI,ESI                    ; 004187a9
    MOVSD ES:EDI,ESI                    ; 004187aa
    FADD double ptr [0x005b6f82]        ; 004187ab | DAT_005b6f82
    LEA EDI,[EBP + -0x1a]               ; 004187b1
    LEA ESI,[EBP + -0xe]                ; 004187b4
    FSTP float ptr [EBP + -0x6]         ; 004187b7
    MOVSD ES:EDI,ESI                    ; 004187ba
    MOVSD ES:EDI,ESI                    ; 004187bb
    MOVSD ES:EDI,ESI                    ; 004187bc
    CMP EDX,EAX                         ; 004187bd
    JZ 0x004187d3                       ; 004187bf
        ;   XREF to: 004187d3 (CONDITIONAL_JUMP)  ; LAB_004187d3
    MOV EAX,dword ptr [EBP + -0x1a]     ; 004187c1
    MOV dword ptr [EBP + -0x2],EAX      ; 004187c4
    MOV EAX,dword ptr [EBP + -0x16]     ; 004187c7
    MOV dword ptr [EBP + 0x2],EAX       ; 004187ca
    MOV EAX,dword ptr [EBP + -0x12]     ; 004187cd
    MOV dword ptr [EBP + 0x6],EAX       ; 004187d0
    MOV EDX,dword ptr [EBP + 0x76]      ; 004187d3
        ;   Label: LAB_004187d3
    MOV ECX,0x3e560419                  ; 004187d6
    MOV ESI,0xbda7ef9e                  ; 004187db
    LEA EAX,[EDX*0x4 + 0x0]             ; 004187e0
    LEA EDI,[EBP + 0x2e]                ; 004187e7
    SUB EAX,EDX                         ; 004187ea
    MOV EDX,dword ptr [EBP + 0x8a]      ; 004187ec
    SHL EAX,0x4                         ; 004187f2
    ADD EDX,0xfd8                       ; 004187f5
    MOV dword ptr [EBP + 0x62],ECX      ; 004187fb
    ADD EAX,EDX                         ; 004187fe
    MOV dword ptr [EBP + 0x66],ESI      ; 00418800
    PUSH EAX                            ; 00418803
    LEA EAX,[EBP + 0x5e]                ; 00418804
    MOV EDX,0x3d03126f                  ; 00418807
    PUSH EAX                            ; 0041880c
    LEA ESI,[EBP + 0xa]                 ; 0041880d
    MOV dword ptr [EBP + 0x5e],EDX      ; 00418810
    CALL core_xform.cpp_FUN_00583260    ; 00418813
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + 0xa]                 ; 00418818
    LEA EAX,[EBP + 0x2e]                ; 0041881b
    LEA EDX,[EBP + -0x32]               ; 0041881e
    ADD ESP,0x8                         ; 00418821
    MOVSD ES:EDI,ESI                    ; 00418824
    MOVSD ES:EDI,ESI                    ; 00418825
    MOVSD ES:EDI,ESI                    ; 00418826
    CMP EDX,EAX                         ; 00418827
    JZ 0x0041883d                       ; 00418829
        ;   XREF to: 0041883d (CONDITIONAL_JUMP)  ; LAB_0041883d
    MOV EAX,dword ptr [EBP + 0x2e]      ; 0041882b
    MOV dword ptr [EBP + -0x32],EAX     ; 0041882e
    MOV EAX,dword ptr [EBP + 0x32]      ; 00418831
    MOV dword ptr [EBP + -0x2e],EAX     ; 00418834
    MOV EAX,dword ptr [EBP + 0x36]      ; 00418837
    MOV dword ptr [EBP + -0x2a],EAX     ; 0041883a
    MOV EDX,dword ptr [EBP + 0x76]      ; 0041883d
        ;   Label: LAB_0041883d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00418840
    SUB EAX,EDX                         ; 00418847
    MOV EDX,EAX                         ; 00418849
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0041884b
    SHL EDX,0x4                         ; 00418851
    ADD EAX,0xfd8                       ; 00418854
    ADD EAX,EDX                         ; 00418859
    PUSH EAX                            ; 0041885b
    LEA EAX,[EBP + 0xffffff62]          ; 0041885c
    PUSH EAX                            ; 00418862
    LEA ESI,[EBP + 0xffffff02]          ; 00418863
    LEA EDI,[EBP + 0xffffff32]          ; 00418869
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0041886f
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00418874
    ADD ESP,0x8                         ; 00418879
    LEA EAX,[EBP + 0xffffff32]          ; 0041887c
    LEA ESI,[EBP + 0xffffff02]          ; 00418882
    PUSH EAX                            ; 00418888
    LEA EAX,[EBP + -0x2]                ; 00418889
    MOVSD.REP ES:EDI,ESI                ; 0041888c
    PUSH EAX                            ; 0041888e
    LEA ESI,[EBP + -0x3e]               ; 0041888f
    LEA EDI,[EBP + 0x3a]                ; 00418892
    CALL core_xform.cpp_FUN_00583260    ; 00418895
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    FLD float ptr [EBP + -0x32]         ; 0041889a
    FLD float ptr [EBP + -0x2e]         ; 0041889d
    FLD float ptr [EBP + -0x2a]         ; 004188a0
    FLD float ptr [EBP + 0xffffff3e]    ; 004188a3
    FLD float ptr [EBP + 0xffffff4e]    ; 004188a9
    LEA ESI,[EBP + -0x3e]               ; 004188af
    FLD float ptr [EBP + 0xffffff5e]    ; 004188b2
    MOVSD ES:EDI,ESI                    ; 004188b8
    MOVSD ES:EDI,ESI                    ; 004188b9
    MOVSD ES:EDI,ESI                    ; 004188ba
    MOV ECX,0xc                         ; 004188bb
    LEA EDI,[EBP + 0x52]                ; 004188c0
    LEA ESI,[EBP + -0x26]               ; 004188c3
    FXCH ST5                            ; 004188c6
    FSUB float ptr [EBP + 0x3a]         ; 004188c8
    FXCH ST4                            ; 004188cb
    FSUB float ptr [EBP + 0x3e]         ; 004188cd
    FXCH ST3                            ; 004188d0
    FSUB float ptr [EBP + 0x42]         ; 004188d2
    FXCH ST4                            ; 004188d5
    FSTP float ptr [EBP + -0x26]        ; 004188d7
    FXCH ST2                            ; 004188da
    FSTP float ptr [EBP + -0x22]        ; 004188dc
    FXCH ST2                            ; 004188df
    FSTP float ptr [EBP + -0x1e]        ; 004188e1
    MOVSD ES:EDI,ESI                    ; 004188e4
    MOVSD ES:EDI,ESI                    ; 004188e5
    MOVSD ES:EDI,ESI                    ; 004188e6
    ADD ESP,0x8                         ; 004188e7
    LEA ESI,[EBP + 0xffffff32]          ; 004188ea
    MOV EDI,EBX                         ; 004188f0
    FXCH                                ; 004188f2
    FADD float ptr [EBP + 0x52]         ; 004188f4
    FXCH                                ; 004188f7
    FADD float ptr [EBP + 0x56]         ; 004188f9
    FXCH ST2                            ; 004188fc
    FADD float ptr [EBP + 0x5a]         ; 004188fe
    FXCH                                ; 00418901
    FSTP float ptr [EBP + 0xffffff3e]   ; 00418903
    FXCH                                ; 00418909
    FSTP float ptr [EBP + 0xffffff4e]   ; 0041890b
    FSTP float ptr [EBP + 0xffffff5e]   ; 00418911
    MOVSD.REP ES:EDI,ESI                ; 00418917
    MOV EAX,EBX                         ; 00418919
    LEA ESP,[EBP + 0x7a]                ; 0041891b
    POP EBP                             ; 0041891e
    POP EDI                             ; 0041891f
    POP EBX                             ; 00418920
    RET                                 ; 00418921

