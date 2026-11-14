; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_carved_cpp_CCarved_getCarryObjToBodyXForm_FUN_00427780(CCarved *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   undefined4 DAT_005b7cd3
;   undefined4 DAT_005b7cd7
;   undefined4 DAT_005b7cdf
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_xform.cpp_FUN_00583260
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;   crt_string.c__strnicmp_FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427780
        ;   Label: core_carved.cpp_CCarved_getCarryObjToBodyXForm_FUN_00427780
    PUSH EDI                            ; 00427781
    PUSH EBP                            ; 00427782
    MOV EBP,ESP                         ; 00427783
    SUB ESP,0x1fc                       ; 00427785
    SUB EBP,0x7e                        ; 0042778b
    MOV EBX,ESI                         ; 0042778e
    MOV EAX,dword ptr [EBP + 0x92]      ; 00427790
    SHL EAX,0x3                         ; 00427796
    MOV ESI,EAX                         ; 00427799
    SHL EAX,0x4                         ; 0042779b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0042779e
    SUB EAX,ESI                         ; 004277a4
    ADD EAX,EDX                         ; 004277a6
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 004277a8
    MOV EAX,dword ptr [EAX + 0x25a8]    ; 004277ae
    MOV dword ptr [EBP + 0x7a],EAX      ; 004277b4
    MOV EAX,dword ptr [EDX + 0xd068]    ; 004277b7
    CMP EAX,0x1                         ; 004277bd
    JC 0x00427a8f                       ; 004277c0
        ;   XREF to: 00427a8f (CONDITIONAL_JUMP)  ; LAB_00427a8f
    JA 0x00427a86                       ; 004277c6
        ;   XREF to: 00427a86 (CONDITIONAL_JUMP)  ; LAB_00427a86
    PUSH 0x3                            ; 004277cc
        ;   Label: LAB_004277cc
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004277ce
    PUSH 0x5b7cd3                       ; 004277d4 | DAT_005b7cd3
    ADD EAX,0x24a8                      ; 004277d9
    PUSH EAX                            ; 004277de
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 004277df
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004277e4
    TEST EAX,EAX                        ; 004277e7
    JNZ 0x00427a6c                      ; 004277e9
        ;   XREF to: 00427a6c (CONDITIONAL_JUMP)  ; LAB_00427a6c
    MOV ECX,0xbf7c6a90                  ; 004277ef
    MOV EDI,0x3f7343c8                  ; 004277f4
    MOV EDX,0xbf93b0b4                  ; 004277f9
    MOV dword ptr [EBP + -0x1a],ECX     ; 004277fe
    MOV dword ptr [EBP + -0x1e],EDI     ; 00427801
    MOV dword ptr [EBP + -0x22],EDX     ; 00427804
    LEA EAX,[EBP + -0x22]               ; 00427807
        ;   Label: LAB_00427807
    PUSH EAX                            ; 0042780a
    PUSH 0x2cfd900                      ; 0042780b | DAT_02cfd900
    LEA EAX,[EBP + 0xfffffee2]          ; 00427810
    PUSH EAX                            ; 00427816
    CALL core_xform.cpp_FUN_00583940    ; 00427817
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 0042781c
    MOV EAX,dword ptr [ESI + 0x154]     ; 0042781f
    PUSH ESI                            ; 00427825
    LEA ESI,[EBP + 0xffffff42]          ; 00427826
    LEA EDI,[EBP + 0xffffff2a]          ; 0042782c
    CALL dword ptr [EAX + 0x1c]         ; 00427832
    MOV ECX,0x6                         ; 00427835
    ADD ESP,0x4                         ; 0042783a
    LEA EAX,[EBP + 0x3e]                ; 0042783d
    LEA ESI,[EBP + 0xffffff42]          ; 00427840
    PUSH EAX                            ; 00427846
    MOVSD.REP ES:EDI,ESI                ; 00427847
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00427849
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [EBP + 0xffffff2a]    ; 0042784e
    FLD float ptr [EBP + 0xffffff2e]    ; 00427854
    FLD float ptr [EBP + 0xffffff32]    ; 0042785a
    LEA EDI,[EBP + 0xffffff72]          ; 00427860
    LEA ESI,[EBP + 0x3e]                ; 00427866
    LEA EAX,[EBP + -0xa]                ; 00427869
    ADD ESP,0x4                         ; 0042786c
    FXCH ST2                            ; 0042786f
    FADD float ptr [EBP + 0xffffff36]   ; 00427871
    FXCH                                ; 00427877
    FADD float ptr [EBP + 0xffffff3a]   ; 00427879
    FXCH ST2                            ; 0042787f
    FADD float ptr [EBP + 0xffffff3e]   ; 00427881
    PUSH EAX                            ; 00427887
    FXCH                                ; 00427888
    FSTP float ptr [EBP + 0x3e]         ; 0042788a
    FXCH                                ; 0042788d
    FSTP float ptr [EBP + 0x42]         ; 0042788f
    FSTP float ptr [EBP + 0x46]         ; 00427892
    MOVSD ES:EDI,ESI                    ; 00427895
    MOVSD ES:EDI,ESI                    ; 00427896
    MOVSD ES:EDI,ESI                    ; 00427897
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00427898
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [0x005b7cd7]          ; 0042789d | DAT_005b7cd7
    FLD float ptr [EBP + 0xffffff72]    ; 004278a3
    FMUL ST1                            ; 004278a9
    FLD float ptr [EBP + 0xffffff76]    ; 004278ab
    FMUL ST2                            ; 004278b1
    FLD float ptr [EBP + 0xffffff7a]    ; 004278b3
    FMULP ST3                           ; 004278b9
    FLD float ptr [EBP + 0xffffff32]    ; 004278bb
    LEA EDI,[EBP + -0x6a]               ; 004278c1
    LEA ESI,[EBP + -0xa]                ; 004278c4
    LEA EDX,[EBP + 0x56]                ; 004278c7
    LEA EAX,[EBP + -0x52]               ; 004278ca
    ADD ESP,0x4                         ; 004278cd
    FXCH ST2                            ; 004278d0
    FSTP float ptr [EBP + -0xa]         ; 004278d2
    FSTP float ptr [EBP + -0x6]         ; 004278d5
    FXCH                                ; 004278d8
    FSTP float ptr [EBP + -0x2]         ; 004278da
    MOVSD ES:EDI,ESI                    ; 004278dd
    MOVSD ES:EDI,ESI                    ; 004278de
    MOVSD ES:EDI,ESI                    ; 004278df
    FADD double ptr [0x005b7cdf]        ; 004278e0 | DAT_005b7cdf
    LEA EDI,[EBP + 0x56]                ; 004278e6
    LEA ESI,[EBP + -0x6a]               ; 004278e9
    FSTP float ptr [EBP + -0x62]        ; 004278ec
    MOVSD ES:EDI,ESI                    ; 004278ef
    MOVSD ES:EDI,ESI                    ; 004278f0
    MOVSD ES:EDI,ESI                    ; 004278f1
    CMP EAX,EDX                         ; 004278f2
    JZ 0x00427908                       ; 004278f4
        ;   XREF to: 00427908 (CONDITIONAL_JUMP)  ; LAB_00427908
    MOV EAX,dword ptr [EBP + 0x56]      ; 004278f6
    MOV dword ptr [EBP + -0x52],EAX     ; 004278f9
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004278fc
    MOV dword ptr [EBP + -0x4e],EAX     ; 004278ff
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00427902
    MOV dword ptr [EBP + -0x4a],EAX     ; 00427905
    MOV ESI,dword ptr [EBP + 0x7a]      ; 00427908
        ;   Label: LAB_00427908
    LEA EAX,[ESI*0x4 + 0x0]             ; 0042790b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00427912
    SUB EAX,ESI                         ; 00427918
    ADD EDX,0xfd8                       ; 0042791a
    SHL EAX,0x4                         ; 00427920
    ADD EAX,EDX                         ; 00427923
    MOV EDX,ESI                         ; 00427925
    MOV ESI,dword ptr [EBP + 0x8e]      ; 00427927
    CMP EDX,dword ptr [ESI + 0xd07c]    ; 0042792d
    JNZ 0x00427b67                      ; 00427933
        ;   XREF to: 00427b67 (CONDITIONAL_JUMP)  ; LAB_00427b67
    MOV EDX,0xbecccccd                  ; 00427939
    LEA ESI,[EBP + 0x62]                ; 0042793e
    LEA EDI,[EBP + 0x1a]                ; 00427941
    PUSH EAX                            ; 00427944
    XOR ECX,ECX                         ; 00427945
    LEA EAX,[EBP + -0x5e]               ; 00427947
    MOV dword ptr [EBP + -0x5e],EDX     ; 0042794a
    PUSH EAX                            ; 0042794d
    MOV dword ptr [EBP + -0x5a],ECX     ; 0042794e
    MOV dword ptr [EBP + -0x56],ECX     ; 00427951
    CALL core_xform.cpp_FUN_00583260    ; 00427954
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + 0x62]                ; 00427959
    MOVSD ES:EDI,ESI                    ; 0042795c
    MOVSD ES:EDI,ESI                    ; 0042795d
    MOVSD ES:EDI,ESI                    ; 0042795e
    LEA EAX,[EBP + 0x1a]                ; 0042795f
    LEA ESI,[EBP + 0xffffff7e]          ; 00427962
    ADD ESP,0x8                         ; 00427968
    CMP ESI,EAX                         ; 0042796b
    JZ 0x00427984                       ; 0042796d
        ;   XREF to: 00427984 (CONDITIONAL_JUMP)  ; LAB_00427984
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0042796f
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 00427972
    MOV EAX,dword ptr [EBP + 0x1e]      ; 00427978
    MOV dword ptr [EBP + -0x7e],EAX     ; 0042797b
    MOV EAX,dword ptr [EBP + 0x22]      ; 0042797e
    MOV dword ptr [EBP + -0x7a],EAX     ; 00427981
        ;   Label: LAB_00427981
    MOV ESI,dword ptr [EBP + 0x7a]      ; 00427984
        ;   Label: LAB_00427984
    LEA EAX,[ESI*0x4 + 0x0]             ; 00427987
    SUB EAX,ESI                         ; 0042798e
    MOV ESI,EAX                         ; 00427990
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00427992
    SHL ESI,0x4                         ; 00427998
    ADD EAX,0xfd8                       ; 0042799b
    ADD EAX,ESI                         ; 004279a0
    PUSH EAX                            ; 004279a2
    LEA EAX,[EBP + 0xfffffee2]          ; 004279a3
    PUSH EAX                            ; 004279a9
    LEA ESI,[EBP + 0xfffffe82]          ; 004279aa
    LEA EDI,[EBP + 0xfffffeb2]          ; 004279b0
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 004279b6
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004279bb
    ADD ESP,0x8                         ; 004279c0
    LEA EAX,[EBP + 0xfffffeb2]          ; 004279c3
    LEA ESI,[EBP + 0xfffffe82]          ; 004279c9
    PUSH EAX                            ; 004279cf
    LEA EAX,[EBP + -0x52]               ; 004279d0
    MOVSD.REP ES:EDI,ESI                ; 004279d3
    PUSH EAX                            ; 004279d5
    LEA ESI,[EBP + 0x6e]                ; 004279d6
    LEA EDI,[EBP + 0x32]                ; 004279d9
    CALL core_xform.cpp_FUN_00583260    ; 004279dc
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    FLD float ptr [EBP + 0xffffff7e]    ; 004279e1
    FLD float ptr [EBP + -0x7e]         ; 004279e7
    FLD float ptr [EBP + -0x7a]         ; 004279ea
    FLD float ptr [EBP + 0xfffffebe]    ; 004279ed
    FLD float ptr [EBP + 0xfffffece]    ; 004279f3
    LEA ESI,[EBP + 0x6e]                ; 004279f9
    FLD float ptr [EBP + 0xfffffede]    ; 004279fc
    MOVSD ES:EDI,ESI                    ; 00427a02
    MOVSD ES:EDI,ESI                    ; 00427a03
    MOVSD ES:EDI,ESI                    ; 00427a04
    MOV ECX,0xc                         ; 00427a05
    LEA EDI,[EBP + 0x26]                ; 00427a0a
    LEA ESI,[EBP + -0x76]               ; 00427a0d
    FXCH ST5                            ; 00427a10
    FSUB float ptr [EBP + 0x32]         ; 00427a12
    FXCH ST4                            ; 00427a15
    FSUB float ptr [EBP + 0x36]         ; 00427a17
    FXCH ST3                            ; 00427a1a
    FSUB float ptr [EBP + 0x3a]         ; 00427a1c
    FXCH ST4                            ; 00427a1f
    FSTP float ptr [EBP + -0x76]        ; 00427a21
    FXCH ST2                            ; 00427a24
    FSTP float ptr [EBP + -0x72]        ; 00427a26
    FXCH ST2                            ; 00427a29
    FSTP float ptr [EBP + -0x6e]        ; 00427a2b
    MOVSD ES:EDI,ESI                    ; 00427a2e
    MOVSD ES:EDI,ESI                    ; 00427a2f
    MOVSD ES:EDI,ESI                    ; 00427a30
    ADD ESP,0x8                         ; 00427a31
    LEA ESI,[EBP + 0xfffffeb2]          ; 00427a34
    MOV EDI,EBX                         ; 00427a3a
    FXCH                                ; 00427a3c
    FADD float ptr [EBP + 0x26]         ; 00427a3e
    FXCH                                ; 00427a41
    FADD float ptr [EBP + 0x2a]         ; 00427a43
    FXCH ST2                            ; 00427a46
    FADD float ptr [EBP + 0x2e]         ; 00427a48
    FXCH                                ; 00427a4b
    FSTP float ptr [EBP + 0xfffffebe]   ; 00427a4d
    FXCH                                ; 00427a53
    FSTP float ptr [EBP + 0xfffffece]   ; 00427a55
    FSTP float ptr [EBP + 0xfffffede]   ; 00427a5b
    MOVSD.REP ES:EDI,ESI                ; 00427a61
    MOV EAX,EBX                         ; 00427a63
    LEA ESP,[EBP + 0x7e]                ; 00427a65
    POP EBP                             ; 00427a68
    POP EDI                             ; 00427a69
    POP EBX                             ; 00427a6a
    RET                                 ; 00427a6b
    MOV EAX,0x3f676c8b                  ; 00427a6c
        ;   Label: LAB_00427a6c
    XOR EDI,EDI                         ; 00427a71
    MOV ECX,0x3e1eb852                  ; 00427a73
    MOV dword ptr [EBP + -0x1a],EDI     ; 00427a78
    MOV dword ptr [EBP + -0x1e],EAX     ; 00427a7b
    MOV dword ptr [EBP + -0x22],ECX     ; 00427a7e
    JMP 0x00427807                      ; 00427a81
        ;   XREF to: 00427807 (UNCONDITIONAL_JUMP)  ; LAB_00427807
    CMP EAX,0x3                         ; 00427a86
        ;   Label: LAB_00427a86
    JZ 0x004277cc                       ; 00427a89
        ;   XREF to: 004277cc (CONDITIONAL_JUMP)  ; LAB_004277cc
    PUSH ESI                            ; 00427a8f
        ;   Label: LAB_00427a8f
    MOV EAX,dword ptr [ESI + 0x154]     ; 00427a90
    LEA ESI,[EBP + 0xffffff5a]          ; 00427a96
    LEA EDI,[EBP + 0xffffff12]          ; 00427a9c
    CALL dword ptr [EAX + 0x1c]         ; 00427aa2
    MOV ECX,0x6                         ; 00427aa5
    LEA ESI,[EBP + 0xffffff5a]          ; 00427aaa
    MOVSD.REP ES:EDI,ESI                ; 00427ab0
    LEA EAX,[EBP + 0xffffff12]          ; 00427ab2
    FLD float ptr [EBP + 0xffffff12]    ; 00427ab8
    FLD float ptr [EBP + 0xffffff16]    ; 00427abe
    FLD float ptr [EBP + 0xffffff1a]    ; 00427ac4
    LEA EDI,[EBP + 0xe]                 ; 00427aca
    LEA ESI,[EBP + -0x2e]               ; 00427acd
    FXCH ST2                            ; 00427ad0
    FADD float ptr [EAX + 0xc]          ; 00427ad2
    FXCH                                ; 00427ad5
    FADD float ptr [EAX + 0x10]         ; 00427ad7
    FXCH ST2                            ; 00427ada
    FADD float ptr [EAX + 0x14]         ; 00427adc
    FXCH                                ; 00427adf
    FSTP float ptr [EBP + -0x2e]        ; 00427ae1
    FXCH                                ; 00427ae4
    FSTP float ptr [EBP + -0x2a]        ; 00427ae6
    FSTP float ptr [EBP + -0x26]        ; 00427ae9
    MOVSD ES:EDI,ESI                    ; 00427aec
    MOVSD ES:EDI,ESI                    ; 00427aed
    MOVSD ES:EDI,ESI                    ; 00427aee
    FLD float ptr [0x005b7cd7]          ; 00427aef | DAT_005b7cd7
    FLD float ptr [EBP + 0xe]           ; 00427af5
    FMUL ST1                            ; 00427af8
    FLD float ptr [EBP + 0x12]          ; 00427afa
    FMUL ST2                            ; 00427afd
    FLD float ptr [EBP + 0x16]          ; 00427aff
    FMULP ST3                           ; 00427b02
    LEA EDI,[EBP + 0x4a]                ; 00427b04
    LEA ESI,[EBP + 0x2]                 ; 00427b07
    FXCH                                ; 00427b0a
    FSTP float ptr [EBP + 0x2]          ; 00427b0c
    FSTP float ptr [EBP + 0x6]          ; 00427b0f
    FSTP float ptr [EBP + 0xa]          ; 00427b12
    MOVSD ES:EDI,ESI                    ; 00427b15
    MOVSD ES:EDI,ESI                    ; 00427b16
    MOVSD ES:EDI,ESI                    ; 00427b17
    LEA EAX,[EBP + -0x52]               ; 00427b18
    LEA ESI,[EBP + 0x4a]                ; 00427b1b
    ADD ESP,0x4                         ; 00427b1e
    CMP EAX,ESI                         ; 00427b21
    JZ 0x00427b37                       ; 00427b23
        ;   XREF to: 00427b37 (CONDITIONAL_JUMP)  ; LAB_00427b37
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00427b25
    MOV dword ptr [EBP + -0x52],EAX     ; 00427b28
    MOV EAX,dword ptr [EBP + 0x4e]      ; 00427b2b
    MOV dword ptr [EBP + -0x4e],EAX     ; 00427b2e
    MOV EAX,dword ptr [EBP + 0x52]      ; 00427b31
    MOV dword ptr [EBP + -0x4a],EAX     ; 00427b34
    MOV EAX,dword ptr [EBP + 0x92]      ; 00427b37
        ;   Label: LAB_00427b37
    SHL EAX,0x3                         ; 00427b3d
    MOV ESI,EAX                         ; 00427b40
    SHL EAX,0x4                         ; 00427b42
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00427b45
    SUB EAX,ESI                         ; 00427b4b
    ADD EAX,EDX                         ; 00427b4d
    MOV ECX,0xc                         ; 00427b4f
    LEA EDI,[EBP + 0xfffffee2]          ; 00427b54
    LEA ESI,[EAX + 0x25b4]              ; 00427b5a
    MOVSD.REP ES:EDI,ESI                ; 00427b60
    JMP 0x00427908                      ; 00427b62
        ;   XREF to: 00427908 (UNCONDITIONAL_JUMP)  ; LAB_00427908
    MOV ESI,0x3ecccccd                  ; 00427b67
        ;   Label: LAB_00427b67
    PUSH EAX                            ; 00427b6c
    XOR EDI,EDI                         ; 00427b6d
    LEA EAX,[EBP + -0x3a]               ; 00427b6f
    MOV dword ptr [EBP + -0x3a],ESI     ; 00427b72
    MOV dword ptr [EBP + -0x36],EDI     ; 00427b75
    MOV dword ptr [EBP + -0x32],EDI     ; 00427b78
    PUSH EAX                            ; 00427b7b
    LEA ESI,[EBP + -0x46]               ; 00427b7c
    LEA EDI,[EBP + -0x16]               ; 00427b7f
    CALL core_xform.cpp_FUN_00583260    ; 00427b82
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + -0x46]               ; 00427b87
    MOVSD ES:EDI,ESI                    ; 00427b8a
    MOVSD ES:EDI,ESI                    ; 00427b8b
    MOVSD ES:EDI,ESI                    ; 00427b8c
    LEA EAX,[EBP + -0x16]               ; 00427b8d
    LEA ESI,[EBP + 0xffffff7e]          ; 00427b90
    ADD ESP,0x8                         ; 00427b96
    CMP ESI,EAX                         ; 00427b99
    JZ 0x00427984                       ; 00427b9b
        ;   XREF to: 00427984 (CONDITIONAL_JUMP)  ; LAB_00427984
    MOV EAX,dword ptr [EBP + -0x16]     ; 00427ba1
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 00427ba4
    MOV EAX,dword ptr [EBP + -0x12]     ; 00427baa
    MOV dword ptr [EBP + -0x7e],EAX     ; 00427bad
    MOV EAX,dword ptr [EBP + -0xe]      ; 00427bb0
    JMP 0x00427981                      ; 00427bb3
        ;   XREF to: 00427981 (UNCONDITIONAL_JUMP)  ; LAB_00427981

