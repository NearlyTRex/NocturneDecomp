; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_0042a4f0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d54d9
;   undefined4 DAT_005d54dd
;   undefined4 DAT_005d54e5
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;   crt_string.c__strnicmp_FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a4f0
        ;   Label: core_carved.cpp_FUN_0042a4f0
    PUSH EDI                            ; 0042a4f1
    PUSH EBP                            ; 0042a4f2
    MOV EBP,ESP                         ; 0042a4f3
    SUB ESP,0x1fc                       ; 0042a4f5
    SUB EBP,0x7e                        ; 0042a4fb
    MOV EBX,ESI                         ; 0042a4fe
    MOV EAX,dword ptr [EBP + 0x92]      ; 0042a500
    SHL EAX,0x3                         ; 0042a506
    MOV ESI,EAX                         ; 0042a509
    SHL EAX,0x4                         ; 0042a50b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0042a50e
    SUB EAX,ESI                         ; 0042a514
    ADD EAX,EDX                         ; 0042a516
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 0042a518
    MOV EAX,dword ptr [EAX + 0x25a8]    ; 0042a51e
    MOV dword ptr [EBP + 0x7a],EAX      ; 0042a524
    MOV EAX,dword ptr [EDX + 0xc27c]    ; 0042a527
    CMP EAX,0x1                         ; 0042a52d
    JC 0x0042a7ff                       ; 0042a530
        ;   XREF to: 0042a7ff (CONDITIONAL_JUMP)  ; LAB_0042a7ff
    JA 0x0042a7f6                       ; 0042a536
        ;   XREF to: 0042a7f6 (CONDITIONAL_JUMP)  ; LAB_0042a7f6
    PUSH 0x3                            ; 0042a53c
        ;   Label: LAB_0042a53c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0042a53e
    PUSH 0x5d54d9                       ; 0042a544 | DAT_005d54d9
    ADD EAX,0x24a8                      ; 0042a549
    PUSH EAX                            ; 0042a54e
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0042a54f
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0042a554
    TEST EAX,EAX                        ; 0042a557
    JNZ 0x0042a7dc                      ; 0042a559
        ;   XREF to: 0042a7dc (CONDITIONAL_JUMP)  ; LAB_0042a7dc
    MOV ECX,0xbf7c6a90                  ; 0042a55f
    MOV EDI,0x3f7343c8                  ; 0042a564
    MOV EDX,0xbf93b0b4                  ; 0042a569
    MOV dword ptr [EBP + -0x1a],ECX     ; 0042a56e
    MOV dword ptr [EBP + -0x1e],EDI     ; 0042a571
    MOV dword ptr [EBP + -0x22],EDX     ; 0042a574
    LEA EAX,[EBP + -0x22]               ; 0042a577
        ;   Label: LAB_0042a577
    PUSH EAX                            ; 0042a57a
    PUSH 0x2c8af28                      ; 0042a57b | DAT_02c8af28
    LEA EAX,[EBP + 0xfffffee2]          ; 0042a580
    PUSH EAX                            ; 0042a586
    CALL core_xform.cpp_FUN_005b5760    ; 0042a587
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042a58c
    MOV EAX,dword ptr [ESI + 0x154]     ; 0042a58f
    PUSH ESI                            ; 0042a595
    LEA ESI,[EBP + 0xffffff42]          ; 0042a596
    LEA EDI,[EBP + 0xffffff2a]          ; 0042a59c
    CALL dword ptr [EAX + 0x1c]         ; 0042a5a2
    MOV ECX,0x6                         ; 0042a5a5
    ADD ESP,0x4                         ; 0042a5aa
    LEA EAX,[EBP + 0x3e]                ; 0042a5ad
    LEA ESI,[EBP + 0xffffff42]          ; 0042a5b0
    PUSH EAX                            ; 0042a5b6
    MOVSD.REP ES:EDI,ESI                ; 0042a5b7
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0042a5b9
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [EBP + 0xffffff2a]    ; 0042a5be
    FLD float ptr [EBP + 0xffffff2e]    ; 0042a5c4
    FLD float ptr [EBP + 0xffffff32]    ; 0042a5ca
    LEA EDI,[EBP + 0xffffff72]          ; 0042a5d0
    LEA ESI,[EBP + 0x3e]                ; 0042a5d6
    LEA EAX,[EBP + -0xa]                ; 0042a5d9
    ADD ESP,0x4                         ; 0042a5dc
    FXCH ST2                            ; 0042a5df
    FADD float ptr [EBP + 0xffffff36]   ; 0042a5e1
    FXCH                                ; 0042a5e7
    FADD float ptr [EBP + 0xffffff3a]   ; 0042a5e9
    FXCH ST2                            ; 0042a5ef
    FADD float ptr [EBP + 0xffffff3e]   ; 0042a5f1
    PUSH EAX                            ; 0042a5f7
    FXCH                                ; 0042a5f8
    FSTP float ptr [EBP + 0x3e]         ; 0042a5fa
    FXCH                                ; 0042a5fd
    FSTP float ptr [EBP + 0x42]         ; 0042a5ff
    FSTP float ptr [EBP + 0x46]         ; 0042a602
    MOVSD ES:EDI,ESI                    ; 0042a605
    MOVSD ES:EDI,ESI                    ; 0042a606
    MOVSD ES:EDI,ESI                    ; 0042a607
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0042a608
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [0x005d54dd]          ; 0042a60d | DAT_005d54dd
    FLD float ptr [EBP + 0xffffff72]    ; 0042a613
    FMUL ST1                            ; 0042a619
    FLD float ptr [EBP + 0xffffff76]    ; 0042a61b
    FMUL ST2                            ; 0042a621
    FLD float ptr [EBP + 0xffffff7a]    ; 0042a623
    FMULP ST3                           ; 0042a629
    FLD float ptr [EBP + 0xffffff32]    ; 0042a62b
    LEA EDI,[EBP + -0x6a]               ; 0042a631
    LEA ESI,[EBP + -0xa]                ; 0042a634
    LEA EDX,[EBP + 0x56]                ; 0042a637
    LEA EAX,[EBP + -0x52]               ; 0042a63a
    ADD ESP,0x4                         ; 0042a63d
    FXCH ST2                            ; 0042a640
    FSTP float ptr [EBP + -0xa]         ; 0042a642
    FSTP float ptr [EBP + -0x6]         ; 0042a645
    FXCH                                ; 0042a648
    FSTP float ptr [EBP + -0x2]         ; 0042a64a
    MOVSD ES:EDI,ESI                    ; 0042a64d
    MOVSD ES:EDI,ESI                    ; 0042a64e
    MOVSD ES:EDI,ESI                    ; 0042a64f
    FADD double ptr [0x005d54e5]        ; 0042a650 | DAT_005d54e5
    LEA EDI,[EBP + 0x56]                ; 0042a656
    LEA ESI,[EBP + -0x6a]               ; 0042a659
    FSTP float ptr [EBP + -0x62]        ; 0042a65c
    MOVSD ES:EDI,ESI                    ; 0042a65f
    MOVSD ES:EDI,ESI                    ; 0042a660
    MOVSD ES:EDI,ESI                    ; 0042a661
    CMP EAX,EDX                         ; 0042a662
    JZ 0x0042a678                       ; 0042a664
        ;   XREF to: 0042a678 (CONDITIONAL_JUMP)  ; LAB_0042a678
    MOV EAX,dword ptr [EBP + 0x56]      ; 0042a666
    MOV dword ptr [EBP + -0x52],EAX     ; 0042a669
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0042a66c
    MOV dword ptr [EBP + -0x4e],EAX     ; 0042a66f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0042a672
    MOV dword ptr [EBP + -0x4a],EAX     ; 0042a675
    MOV ESI,dword ptr [EBP + 0x7a]      ; 0042a678
        ;   Label: LAB_0042a678
    LEA EAX,[ESI*0x4 + 0x0]             ; 0042a67b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0042a682
    SUB EAX,ESI                         ; 0042a688
    ADD EDX,0xfd8                       ; 0042a68a
    SHL EAX,0x4                         ; 0042a690
    ADD EAX,EDX                         ; 0042a693
    MOV EDX,ESI                         ; 0042a695
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0042a697
    CMP EDX,dword ptr [ESI + 0xc290]    ; 0042a69d
    JNZ 0x0042a8d7                      ; 0042a6a3
        ;   XREF to: 0042a8d7 (CONDITIONAL_JUMP)  ; LAB_0042a8d7
    MOV EDX,0xbecccccd                  ; 0042a6a9
    LEA ESI,[EBP + 0x62]                ; 0042a6ae
    LEA EDI,[EBP + 0x1a]                ; 0042a6b1
    PUSH EAX                            ; 0042a6b4
    XOR ECX,ECX                         ; 0042a6b5
    LEA EAX,[EBP + -0x5e]               ; 0042a6b7
    MOV dword ptr [EBP + -0x5e],EDX     ; 0042a6ba
    PUSH EAX                            ; 0042a6bd
    MOV dword ptr [EBP + -0x5a],ECX     ; 0042a6be
    MOV dword ptr [EBP + -0x56],ECX     ; 0042a6c1
    CALL core_xform.cpp_FUN_005b5080    ; 0042a6c4
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + 0x62]                ; 0042a6c9
    MOVSD ES:EDI,ESI                    ; 0042a6cc
    MOVSD ES:EDI,ESI                    ; 0042a6cd
    MOVSD ES:EDI,ESI                    ; 0042a6ce
    LEA EAX,[EBP + 0x1a]                ; 0042a6cf
    LEA ESI,[EBP + 0xffffff7e]          ; 0042a6d2
    ADD ESP,0x8                         ; 0042a6d8
    CMP ESI,EAX                         ; 0042a6db
    JZ 0x0042a6f4                       ; 0042a6dd
        ;   XREF to: 0042a6f4 (CONDITIONAL_JUMP)  ; LAB_0042a6f4
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0042a6df
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 0042a6e2
    MOV EAX,dword ptr [EBP + 0x1e]      ; 0042a6e8
    MOV dword ptr [EBP + -0x7e],EAX     ; 0042a6eb
    MOV EAX,dword ptr [EBP + 0x22]      ; 0042a6ee
    MOV dword ptr [EBP + -0x7a],EAX     ; 0042a6f1
        ;   Label: LAB_0042a6f1
    MOV ESI,dword ptr [EBP + 0x7a]      ; 0042a6f4
        ;   Label: LAB_0042a6f4
    LEA EAX,[ESI*0x4 + 0x0]             ; 0042a6f7
    SUB EAX,ESI                         ; 0042a6fe
    MOV ESI,EAX                         ; 0042a700
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0042a702
    SHL ESI,0x4                         ; 0042a708
    ADD EAX,0xfd8                       ; 0042a70b
    ADD EAX,ESI                         ; 0042a710
    PUSH EAX                            ; 0042a712
    LEA EAX,[EBP + 0xfffffee2]          ; 0042a713
    PUSH EAX                            ; 0042a719
    LEA ESI,[EBP + 0xfffffe82]          ; 0042a71a
    LEA EDI,[EBP + 0xfffffeb2]          ; 0042a720
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0042a726
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0042a72b
    ADD ESP,0x8                         ; 0042a730
    LEA EAX,[EBP + 0xfffffeb2]          ; 0042a733
    LEA ESI,[EBP + 0xfffffe82]          ; 0042a739
    PUSH EAX                            ; 0042a73f
    LEA EAX,[EBP + -0x52]               ; 0042a740
    MOVSD.REP ES:EDI,ESI                ; 0042a743
    PUSH EAX                            ; 0042a745
    LEA ESI,[EBP + 0x6e]                ; 0042a746
    LEA EDI,[EBP + 0x32]                ; 0042a749
    CALL core_xform.cpp_FUN_005b5080    ; 0042a74c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    FLD float ptr [EBP + 0xffffff7e]    ; 0042a751
    FLD float ptr [EBP + -0x7e]         ; 0042a757
    FLD float ptr [EBP + -0x7a]         ; 0042a75a
    FLD float ptr [EBP + 0xfffffebe]    ; 0042a75d
    FLD float ptr [EBP + 0xfffffece]    ; 0042a763
    LEA ESI,[EBP + 0x6e]                ; 0042a769
    FLD float ptr [EBP + 0xfffffede]    ; 0042a76c
    MOVSD ES:EDI,ESI                    ; 0042a772
    MOVSD ES:EDI,ESI                    ; 0042a773
    MOVSD ES:EDI,ESI                    ; 0042a774
    MOV ECX,0xc                         ; 0042a775
    LEA EDI,[EBP + 0x26]                ; 0042a77a
    LEA ESI,[EBP + -0x76]               ; 0042a77d
    FXCH ST5                            ; 0042a780
    FSUB float ptr [EBP + 0x32]         ; 0042a782
    FXCH ST4                            ; 0042a785
    FSUB float ptr [EBP + 0x36]         ; 0042a787
    FXCH ST3                            ; 0042a78a
    FSUB float ptr [EBP + 0x3a]         ; 0042a78c
    FXCH ST4                            ; 0042a78f
    FSTP float ptr [EBP + -0x76]        ; 0042a791
    FXCH ST2                            ; 0042a794
    FSTP float ptr [EBP + -0x72]        ; 0042a796
    FXCH ST2                            ; 0042a799
    FSTP float ptr [EBP + -0x6e]        ; 0042a79b
    MOVSD ES:EDI,ESI                    ; 0042a79e
    MOVSD ES:EDI,ESI                    ; 0042a79f
    MOVSD ES:EDI,ESI                    ; 0042a7a0
    ADD ESP,0x8                         ; 0042a7a1
    LEA ESI,[EBP + 0xfffffeb2]          ; 0042a7a4
    MOV EDI,EBX                         ; 0042a7aa
    FXCH                                ; 0042a7ac
    FADD float ptr [EBP + 0x26]         ; 0042a7ae
    FXCH                                ; 0042a7b1
    FADD float ptr [EBP + 0x2a]         ; 0042a7b3
    FXCH ST2                            ; 0042a7b6
    FADD float ptr [EBP + 0x2e]         ; 0042a7b8
    FXCH                                ; 0042a7bb
    FSTP float ptr [EBP + 0xfffffebe]   ; 0042a7bd
    FXCH                                ; 0042a7c3
    FSTP float ptr [EBP + 0xfffffece]   ; 0042a7c5
    FSTP float ptr [EBP + 0xfffffede]   ; 0042a7cb
    MOVSD.REP ES:EDI,ESI                ; 0042a7d1
    MOV EAX,EBX                         ; 0042a7d3
    LEA ESP,[EBP + 0x7e]                ; 0042a7d5
    POP EBP                             ; 0042a7d8
    POP EDI                             ; 0042a7d9
    POP EBX                             ; 0042a7da
    RET                                 ; 0042a7db
    MOV EAX,0x3f676c8b                  ; 0042a7dc
        ;   Label: LAB_0042a7dc
    XOR EDI,EDI                         ; 0042a7e1
    MOV ECX,0x3e1eb852                  ; 0042a7e3
    MOV dword ptr [EBP + -0x1a],EDI     ; 0042a7e8
    MOV dword ptr [EBP + -0x1e],EAX     ; 0042a7eb
    MOV dword ptr [EBP + -0x22],ECX     ; 0042a7ee
    JMP 0x0042a577                      ; 0042a7f1
        ;   XREF to: 0042a577 (UNCONDITIONAL_JUMP)  ; LAB_0042a577
    CMP EAX,0x3                         ; 0042a7f6
        ;   Label: LAB_0042a7f6
    JZ 0x0042a53c                       ; 0042a7f9
        ;   XREF to: 0042a53c (CONDITIONAL_JUMP)  ; LAB_0042a53c
    PUSH ESI                            ; 0042a7ff
        ;   Label: LAB_0042a7ff
    MOV EAX,dword ptr [ESI + 0x154]     ; 0042a800
    LEA ESI,[EBP + 0xffffff5a]          ; 0042a806
    LEA EDI,[EBP + 0xffffff12]          ; 0042a80c
    CALL dword ptr [EAX + 0x1c]         ; 0042a812
    MOV ECX,0x6                         ; 0042a815
    LEA ESI,[EBP + 0xffffff5a]          ; 0042a81a
    MOVSD.REP ES:EDI,ESI                ; 0042a820
    LEA EAX,[EBP + 0xffffff12]          ; 0042a822
    FLD float ptr [EBP + 0xffffff12]    ; 0042a828
    FLD float ptr [EBP + 0xffffff16]    ; 0042a82e
    FLD float ptr [EBP + 0xffffff1a]    ; 0042a834
    LEA EDI,[EBP + 0xe]                 ; 0042a83a
    LEA ESI,[EBP + -0x2e]               ; 0042a83d
    FXCH ST2                            ; 0042a840
    FADD float ptr [EAX + 0xc]          ; 0042a842
    FXCH                                ; 0042a845
    FADD float ptr [EAX + 0x10]         ; 0042a847
    FXCH ST2                            ; 0042a84a
    FADD float ptr [EAX + 0x14]         ; 0042a84c
    FXCH                                ; 0042a84f
    FSTP float ptr [EBP + -0x2e]        ; 0042a851
    FXCH                                ; 0042a854
    FSTP float ptr [EBP + -0x2a]        ; 0042a856
    FSTP float ptr [EBP + -0x26]        ; 0042a859
    MOVSD ES:EDI,ESI                    ; 0042a85c
    MOVSD ES:EDI,ESI                    ; 0042a85d
    MOVSD ES:EDI,ESI                    ; 0042a85e
    FLD float ptr [0x005d54dd]          ; 0042a85f | DAT_005d54dd
    FLD float ptr [EBP + 0xe]           ; 0042a865
    FMUL ST1                            ; 0042a868
    FLD float ptr [EBP + 0x12]          ; 0042a86a
    FMUL ST2                            ; 0042a86d
    FLD float ptr [EBP + 0x16]          ; 0042a86f
    FMULP ST3                           ; 0042a872
    LEA EDI,[EBP + 0x4a]                ; 0042a874
    LEA ESI,[EBP + 0x2]                 ; 0042a877
    FXCH                                ; 0042a87a
    FSTP float ptr [EBP + 0x2]          ; 0042a87c
    FSTP float ptr [EBP + 0x6]          ; 0042a87f
    FSTP float ptr [EBP + 0xa]          ; 0042a882
    MOVSD ES:EDI,ESI                    ; 0042a885
    MOVSD ES:EDI,ESI                    ; 0042a886
    MOVSD ES:EDI,ESI                    ; 0042a887
    LEA EAX,[EBP + -0x52]               ; 0042a888
    LEA ESI,[EBP + 0x4a]                ; 0042a88b
    ADD ESP,0x4                         ; 0042a88e
    CMP EAX,ESI                         ; 0042a891
    JZ 0x0042a8a7                       ; 0042a893
        ;   XREF to: 0042a8a7 (CONDITIONAL_JUMP)  ; LAB_0042a8a7
    MOV EAX,dword ptr [EBP + 0x4a]      ; 0042a895
    MOV dword ptr [EBP + -0x52],EAX     ; 0042a898
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0042a89b
    MOV dword ptr [EBP + -0x4e],EAX     ; 0042a89e
    MOV EAX,dword ptr [EBP + 0x52]      ; 0042a8a1
    MOV dword ptr [EBP + -0x4a],EAX     ; 0042a8a4
    MOV EAX,dword ptr [EBP + 0x92]      ; 0042a8a7
        ;   Label: LAB_0042a8a7
    SHL EAX,0x3                         ; 0042a8ad
    MOV ESI,EAX                         ; 0042a8b0
    SHL EAX,0x4                         ; 0042a8b2
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0042a8b5
    SUB EAX,ESI                         ; 0042a8bb
    ADD EAX,EDX                         ; 0042a8bd
    MOV ECX,0xc                         ; 0042a8bf
    LEA EDI,[EBP + 0xfffffee2]          ; 0042a8c4
    LEA ESI,[EAX + 0x25b4]              ; 0042a8ca
    MOVSD.REP ES:EDI,ESI                ; 0042a8d0
    JMP 0x0042a678                      ; 0042a8d2
        ;   XREF to: 0042a678 (UNCONDITIONAL_JUMP)  ; LAB_0042a678
    MOV ESI,0x3ecccccd                  ; 0042a8d7
        ;   Label: LAB_0042a8d7
    PUSH EAX                            ; 0042a8dc
    XOR EDI,EDI                         ; 0042a8dd
    LEA EAX,[EBP + -0x3a]               ; 0042a8df
    MOV dword ptr [EBP + -0x3a],ESI     ; 0042a8e2
    MOV dword ptr [EBP + -0x36],EDI     ; 0042a8e5
    MOV dword ptr [EBP + -0x32],EDI     ; 0042a8e8
    PUSH EAX                            ; 0042a8eb
    LEA ESI,[EBP + -0x46]               ; 0042a8ec
    LEA EDI,[EBP + -0x16]               ; 0042a8ef
    CALL core_xform.cpp_FUN_005b5080    ; 0042a8f2
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + -0x46]               ; 0042a8f7
    MOVSD ES:EDI,ESI                    ; 0042a8fa
    MOVSD ES:EDI,ESI                    ; 0042a8fb
    MOVSD ES:EDI,ESI                    ; 0042a8fc
    LEA EAX,[EBP + -0x16]               ; 0042a8fd
    LEA ESI,[EBP + 0xffffff7e]          ; 0042a900
    ADD ESP,0x8                         ; 0042a906
    CMP ESI,EAX                         ; 0042a909
    JZ 0x0042a6f4                       ; 0042a90b
        ;   XREF to: 0042a6f4 (CONDITIONAL_JUMP)  ; LAB_0042a6f4
    MOV EAX,dword ptr [EBP + -0x16]     ; 0042a911
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 0042a914
    MOV EAX,dword ptr [EBP + -0x12]     ; 0042a91a
    MOV dword ptr [EBP + -0x7e],EAX     ; 0042a91d
    MOV EAX,dword ptr [EBP + -0xe]      ; 0042a920
    JMP 0x0042a6f1                      ; 0042a923
        ;   XREF to: 0042a6f1 (UNCONDITIONAL_JUMP)  ; LAB_0042a6f1

