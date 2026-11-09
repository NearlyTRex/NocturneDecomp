; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_00500c80(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)
;
; Local Variables:
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
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
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
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
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
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 005035d6
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005ca297
;   TerminatedCString s_Error_in_streo_processin_005ca2a8
;   undefined4 DAT_005ca2cf
;   undefined4 DAT_005ca2d7
;   undefined4 DAT_00601668
;   undefined4 DAT_0060166c
;   undefined4 DAT_00601670
;   undefined4 DAT_00601674
;   undefined4 DAT_00601698
;   undefined4 DAT_0060169c
;   undefined4 DAT_006016b8
;   undefined4 DAT_006016bc
;   undefined4 DAT_006016f0
;   undefined4 DAT_006016f4
;   undefined4 DAT_006016f8
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500c80
        ;   Label: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00500c80
    PUSH ESI                            ; 00500c81
    PUSH EDI                            ; 00500c82
    PUSH EBP                            ; 00500c83
    MOV EBP,ESP                         ; 00500c84
    SUB ESP,0xec                        ; 00500c86
    AND ESP,0xfffffff8                  ; 00500c8c
    MOV ECX,dword ptr [EBP + 0x20]      ; 00500c8f
    MOV EAX,dword ptr [EBP + 0x24]      ; 00500c92
    MOV EDX,dword ptr [EAX + 0x10]      ; 00500c95
    MOV dword ptr [ESP + 0x10],EDX      ; 00500c98
    MOV EDX,dword ptr [EAX]             ; 00500c9c
    CMP dword ptr [EDX + 0x1c],0x1      ; 00500c9e
    JNZ 0x00500eec                      ; 00500ca2
        ;   XREF to: 00500eec (CONDITIONAL_JUMP)  ; LAB_00500eec
    TEST byte ptr [EDX + 0x20],0x2      ; 00500ca8
    JZ 0x00500eec                       ; 00500cac
        ;   XREF to: 00500eec (CONDITIONAL_JUMP)  ; LAB_00500eec
    MOV EDX,0x1                         ; 00500cb2
    MOV dword ptr [ESP + 0x58],EDX      ; 00500cb7
        ;   Label: LAB_00500cb7
    MOV EDX,dword ptr [EAX]             ; 00500cbb
    MOV ESI,dword ptr [EDX + 0x1c]      ; 00500cbd
    CMP ESI,0x1                         ; 00500cc0
    JNZ 0x00500ef3                      ; 00500cc3
        ;   XREF to: 00500ef3 (CONDITIONAL_JUMP)  ; LAB_00500ef3
    TEST byte ptr [EDX + 0x20],0x1      ; 00500cc9
    JZ 0x00500ef3                       ; 00500ccd
        ;   XREF to: 00500ef3 (CONDITIONAL_JUMP)  ; LAB_00500ef3
    MOV EDX,ESI                         ; 00500cd3
    MOV dword ptr [ESP + 0x14],EDX      ; 00500cd5
        ;   Label: LAB_00500cd5
    MOV EDX,dword ptr [EAX]             ; 00500cd9
    CMP dword ptr [EDX],0x0             ; 00500cdb
    SETZ DL                             ; 00500cde
    AND EDX,0xff                        ; 00500ce1
    MOV dword ptr [ESP + 0x20],EDX      ; 00500ce7
    MOV EDX,dword ptr [ECX + 0xc]       ; 00500ceb
    AND EDX,0x1                         ; 00500cee
    CMP EDX,0x1                         ; 00500cf1
    JNZ 0x00500efa                      ; 00500cf4
        ;   XREF to: 00500efa (CONDITIONAL_JUMP)  ; LAB_00500efa
    MOV ESI,0x667f6ee7                  ; 00500cfa
    MOV EDI,0x3fe6a09e                  ; 00500cff
    MOV dword ptr [ESP],ESI             ; 00500d04
    MOV dword ptr [ESP + 0x4],EDI       ; 00500d07
    MOV EBX,dword ptr [EAX]             ; 00500d0b
        ;   Label: LAB_00500d0b
    MOV EDX,dword ptr [EBX]             ; 00500d0d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00500d0f
    SUB EAX,EDX                         ; 00500d16
    MOV EDX,dword ptr [EBX + 0x10]      ; 00500d18
    ADD EDX,EAX                         ; 00500d1b
    MOV dword ptr [ESP + 0x54],EDX      ; 00500d1d
    XOR EAX,EAX                         ; 00500d21
    MOV EDX,0x7                         ; 00500d23
    ADD EAX,0x2                         ; 00500d28
        ;   Label: LAB_00500d28
    MOV word ptr [EAX + 0x1d91096],DX   ; 00500d2b
    CMP EAX,0x480                       ; 00500d32
    JNZ 0x00500d28                      ; 00500d37
        ;   XREF to: 00500d28 (CONDITIONAL_JUMP)  ; LAB_00500d28
    MOV EAX,dword ptr [ESP + 0x10]      ; 00500d39
    CMP EAX,0x2                         ; 00500d3d
    JZ 0x00500f10                       ; 00500d40
        ;   XREF to: 00500f10 (CONDITIONAL_JUMP)  ; LAB_00500f10
    LEA EAX,[EAX]                       ; 00500d46
    LEA EDX,[EDX]                       ; 00500d4c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00500d50
        ;   Label: LAB_00500d50
    MOV dword ptr [ESP + 0xa8],EAX      ; 00500d53
    ADD EAX,0x1200                      ; 00500d5a
    MOV dword ptr [ESP + 0xac],EAX      ; 00500d5f
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00500d66
        ;   Label: LAB_00500d66
    XOR EDX,EDX                         ; 00500d6d
    LEA EBX,[ESI + 0x48]                ; 00500d6f
    IMUL EAX,EDX,0x48                   ; 00500d72
        ;   Label: LAB_00500d72
    LEA ECX,[ESI + EAX*0x1]             ; 00500d75
    MOV EAX,EBX                         ; 00500d78
    MOV dword ptr [ECX],0x0             ; 00500d7a
        ;   Label: LAB_00500d7a
    ADD ECX,0x4                         ; 00500d80
    CMP ECX,EAX                         ; 00500d83
    JNZ 0x00500d7a                      ; 00500d85
        ;   XREF to: 00500d7a (CONDITIONAL_JUMP)  ; LAB_00500d7a
    INC EDX                             ; 00500d87
    ADD EBX,0x48                        ; 00500d88
    CMP EDX,0x20                        ; 00500d8b
    JL 0x00500d72                       ; 00500d8e
        ;   XREF to: 00500d72 (CONDITIONAL_JUMP)  ; LAB_00500d72
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00500d90
    ADD EDX,0x900                       ; 00500d97
    MOV ECX,dword ptr [ESP + 0xac]      ; 00500d9d
    MOV dword ptr [ESP + 0xa8],EDX      ; 00500da4
    CMP EDX,ECX                         ; 00500dab
    JNZ 0x00500d66                      ; 00500dad
        ;   XREF to: 00500d66 (CONDITIONAL_JUMP)  ; LAB_00500d66
    CMP dword ptr [ESP + 0x10],0x2      ; 00500daf
    JNZ 0x00501990                      ; 00500db4
        ;   XREF to: 00501990 (CONDITIONAL_JUMP)  ; LAB_00501990
    XOR ESI,ESI                         ; 00500dba
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500dbc
    MOV dword ptr [ESP + 0xe0],ESI      ; 00500dbf
    MOV dword ptr [ESP + 0xc0],EAX      ; 00500dc6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00500dcd
    MOV dword ptr [ESP + 0xc8],ESI      ; 00500dd0
    MOV dword ptr [ESP + 0xc4],EAX      ; 00500dd7
    MOV EDI,0x48                        ; 00500dde
    MOV EBX,dword ptr [ESP + 0xe0]      ; 00500de3
        ;   Label: LAB_00500de3
    IMUL EAX,EBX,0x12                   ; 00500dea
    MOV dword ptr [ESP + 0x64],EAX      ; 00500ded
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00500df1
    MOV dword ptr [ESP + 0xb4],EAX      ; 00500df8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00500dff
    XOR ESI,ESI                         ; 00500e06
    MOV dword ptr [ESP + 0xb8],EAX      ; 00500e08
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00500e0f
    XOR EBX,EBX                         ; 00500e16
    MOV dword ptr [ESP + 0xbc],EAX      ; 00500e18
    MOV EAX,dword ptr [ESP + 0x64]      ; 00500e1f
        ;   Label: LAB_00500e1f
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00500e23
    ADD EAX,ESI                         ; 00500e2a
    MOV ECX,dword ptr [ESP + 0xb4]      ; 00500e2c
    MOV dword ptr [ESP + 0xd4],EAX      ; 00500e33
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00500e3a
    ADD EDX,EBX                         ; 00500e41
    ADD EAX,EBX                         ; 00500e43
    CMP word ptr [ECX + 0x1d91098],0x7  ; 00500e45
    JNZ 0x0050190e                      ; 00500e4d
        ;   XREF to: 0050190e (CONDITIONAL_JUMP)  ; LAB_0050190e
    CMP dword ptr [ESP + 0x58],0x0      ; 00500e53
    JZ 0x005018f9                       ; 00500e58
        ;   XREF to: 005018f9 (CONDITIONAL_JUMP)  ; LAB_005018f9
    FLD float ptr [EAX]                 ; 00500e5e
    FADD float ptr [EAX + 0x900]        ; 00500e60
    FLD double ptr [0x005ca2d7]         ; 00500e66 | DAT_005ca2d7
    FXCH                                ; 00500e6c
    FMUL ST1                            ; 00500e6e
    FSTP float ptr [EDX]                ; 00500e70
    FLD float ptr [EAX]                 ; 00500e72
    FSUB float ptr [EAX + 0x900]        ; 00500e74
    FMULP                               ; 00500e7a
    FSTP float ptr [EDX + 0x900]        ; 00500e7c
        ;   Label: LAB_00500e7c
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00500e82
        ;   Label: LAB_00500e82
    INC ESI                             ; 00500e89
    ADD EAX,0x2                         ; 00500e8a
    ADD EBX,0x4                         ; 00500e8d
    MOV dword ptr [ESP + 0xb4],EAX      ; 00500e90
    CMP ESI,0x12                        ; 00500e97
    JL 0x00500e1f                       ; 00500e9a
        ;   XREF to: 00500e1f (CONDITIONAL_JUMP)  ; LAB_00500e1f
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00500e9c
    MOV EBX,dword ptr [ESP + 0xc8]      ; 00500ea3
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00500eaa
    MOV EDX,dword ptr [ESP + 0xc0]      ; 00500eb1
    ADD EBX,0x24                        ; 00500eb8
    INC ESI                             ; 00500ebb
    ADD ECX,EDI                         ; 00500ebc
    ADD EDX,EDI                         ; 00500ebe
    MOV dword ptr [ESP + 0xc4],ECX      ; 00500ec0
    MOV dword ptr [ESP + 0xc8],EBX      ; 00500ec7
    MOV dword ptr [ESP + 0xe0],ESI      ; 00500ece
    MOV dword ptr [ESP + 0xc0],EDX      ; 00500ed5
    CMP ESI,0x20                        ; 00500edc
    JL 0x00500de3                       ; 00500edf
        ;   XREF to: 00500de3 (CONDITIONAL_JUMP)  ; LAB_00500de3
    MOV ESP,EBP                         ; 00500ee5
        ;   Label: LAB_00500ee5
    POP EBP                             ; 00500ee7
    POP EDI                             ; 00500ee8
    POP ESI                             ; 00500ee9
    POP EBX                             ; 00500eea
    RET                                 ; 00500eeb
    XOR EDX,EDX                         ; 00500eec
        ;   Label: LAB_00500eec
    JMP 0x00500cb7                      ; 00500eee
        ;   XREF to: 00500cb7 (UNCONDITIONAL_JUMP)  ; LAB_00500cb7
    XOR EDX,EDX                         ; 00500ef3
        ;   Label: LAB_00500ef3
    JMP 0x00500cd5                      ; 00500ef5
        ;   XREF to: 00500cd5 (UNCONDITIONAL_JUMP)  ; LAB_00500cd5
    MOV EDX,0x995b2417                  ; 00500efa
        ;   Label: LAB_00500efa
    MOV EBX,0x3feae89f                  ; 00500eff
    MOV dword ptr [ESP],EDX             ; 00500f04
    MOV dword ptr [ESP + 0x4],EBX       ; 00500f07
    JMP 0x00500d0b                      ; 00500f0b
        ;   XREF to: 00500d0b (UNCONDITIONAL_JUMP)  ; LAB_00500d0b
    CMP dword ptr [ESP + 0x14],0x0      ; 00500f10
        ;   Label: LAB_00500f10
    JZ 0x00500d50                       ; 00500f15
        ;   XREF to: 00500d50 (CONDITIONAL_JUMP)  ; LAB_00500d50
    CMP dword ptr [ECX + 0x10],0x0      ; 00500f1b
    JNZ 0x00501116                      ; 00500f1f
        ;   XREF to: 00501116 (CONDITIONAL_JUMP)  ; LAB_00501116
    MOV ECX,0x1f                        ; 00500f25
        ;   Label: LAB_00500f25
    MOV EDX,0x11                        ; 00500f2a
    MOV EBX,dword ptr [EBP + 0x14]      ; 00500f2f
    XOR EDI,EDI                         ; 00500f32
    ADD EBX,0x8b8                       ; 00500f34
    MOV ESI,EDX                         ; 00500f3a
    TEST dword ptr [EBX + EDX*0x4 + 0x900],0x7fffffff ; 00500f3c
        ;   Label: LAB_00500f3c
    JZ 0x005018c2                       ; 00500f47
        ;   XREF to: 005018c2 (CONDITIONAL_JUMP)  ; LAB_005018c2
    LEA EAX,[ECX*0x8 + 0x0]             ; 00500f4d
    ADD EAX,ECX                         ; 00500f54
    ADD EAX,EAX                         ; 00500f56
    LEA EDI,[EAX + EDX*0x1]             ; 00500f58
    MOV EDX,dword ptr [ESP + 0x54]      ; 00500f5b
        ;   Label: LAB_00500f5b
    LEA EAX,[EDX*0x8 + 0x0]             ; 00500f5f
    ADD EAX,EDX                         ; 00500f66
    SHL EAX,0x2                         ; 00500f68
    ADD EDX,EAX                         ; 00500f6b
    SHL EDX,0x2                         ; 00500f6d
    XOR ESI,ESI                         ; 00500f70
    MOV ECX,dword ptr [EDX + 0x601668]  ; 00500f72 | DAT_00601668
    MOV EAX,EDX                         ; 00500f78
    CMP EDI,ECX                         ; 00500f7a
    JL 0x00500f90                       ; 00500f7c
        ;   XREF to: 00500f90 (CONDITIONAL_JUMP)  ; LAB_00500f90
    INC ESI                             ; 00500f7e
        ;   Label: LAB_00500f7e
    MOV EBX,dword ptr [EAX + 0x60166c]  ; 00500f7f | DAT_0060166c | DAT_00601670
    ADD EAX,0x4                         ; 00500f85
    CMP EDI,EBX                         ; 00500f88
    JGE 0x00500f7e                      ; 00500f8a
        ;   XREF to: 00500f7e (CONDITIONAL_JUMP)  ; LAB_00500f7e
    LEA EAX,[EAX]                       ; 00500f8c
    MOV EDX,dword ptr [ESP + 0x54]      ; 00500f90
        ;   Label: LAB_00500f90
    MOV dword ptr [ESP + 0x18],ESI      ; 00500f94
    MOV ESI,dword ptr [EAX + 0x601668]  ; 00500f98 | DAT_0060166c | DAT_00601670 | DAT_00601668
    LEA EAX,[EDX*0x8 + 0x0]             ; 00500f9e
    ADD EAX,EDX                         ; 00500fa5
    SHL EAX,0x2                         ; 00500fa7
    ADD EAX,EDX                         ; 00500faa
    MOV EDI,dword ptr [ESP + 0x18]      ; 00500fac
    SHL EAX,0x2                         ; 00500fb0
    SHL EDI,0x2                         ; 00500fb3
    MOV dword ptr [ESP + 0x70],EAX      ; 00500fb6
    ADD EAX,EDI                         ; 00500fba
    MOV dword ptr [ESP + 0x78],EAX      ; 00500fbc
    CMP dword ptr [ESP + 0x18],0x15     ; 00500fc0
    JGE 0x00501083                      ; 00500fc5
        ;   XREF to: 00501083 (CONDITIONAL_JUMP)  ; LAB_00501083
    MOV dword ptr [ESP + 0x7c],EDI      ; 00500fcb
    MOV EAX,dword ptr [ESP + 0x78]      ; 00500fcf
        ;   Label: LAB_00500fcf
    MOV EDI,dword ptr [ESP + 0x78]      ; 00500fd3
    MOV EBX,dword ptr [EAX + 0x601668]  ; 00500fd7 | DAT_0060166c | DAT_00601670
    MOV EDI,dword ptr [EDI + 0x60166c]  ; 00500fdd | DAT_00601670 | DAT_00601674
    SUB EDI,EBX                         ; 00500fe3
    TEST EDI,EDI                        ; 00500fe5
    JLE 0x0050105b                      ; 00500fe7
        ;   XREF to: 0050105b (CONDITIONAL_JUMP)  ; LAB_0050105b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00500fe9
    ADD EAX,dword ptr [ESP + 0x7c]      ; 00500fec
    LEA EBX,[ESI + ESI*0x1]             ; 00500ff0
    MOV dword ptr [ESP + 0x5c],EAX      ; 00500ff3
    LEA EAX,[ESI*0x4 + 0x0]             ; 00500ff7
    MOV dword ptr [ESP + 0x74],EAX      ; 00500ffe
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00501002
        ;   Label: LAB_00501002
    MOV AX,word ptr [EAX + 0xf8]        ; 00501006
    MOV word ptr [EBX + 0x1d91098],AX   ; 0050100d
    CMP AX,0x7                          ; 00501014
    JZ 0x00501047                       ; 00501018
        ;   XREF to: 00501047 (CONDITIONAL_JUMP)  ; LAB_00501047
    CMP dword ptr [ESP + 0x20],0x0      ; 0050101a
    JZ 0x005018da                       ; 0050101f
        ;   XREF to: 005018da (CONDITIONAL_JUMP)  ; LAB_005018da
    PUSH 0x1d91e18                      ; 00501025
    PUSH ESI                            ; 0050102a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050102b
    PUSH EAX                            ; 0050102f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00501030
    MOV EAX,dword ptr [EBX + 0x1d91096] ; 00501034
    PUSH EDX                            ; 0050103a
    SAR EAX,0x10                        ; 0050103b
    PUSH EAX                            ; 0050103e
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0 ; 0050103f
        ;   XREF to: 00500be0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0()
    ADD ESP,0x14                        ; 00501044
    MOV EAX,dword ptr [ESP + 0x74]      ; 00501047
        ;   Label: LAB_00501047
    ADD EBX,0x2                         ; 0050104b
    INC ESI                             ; 0050104e
    ADD EAX,0x4                         ; 0050104f
    DEC EDI                             ; 00501052
    MOV dword ptr [ESP + 0x74],EAX      ; 00501053
    TEST EDI,EDI                        ; 00501057
    JG 0x00501002                       ; 00501059
        ;   XREF to: 00501002 (CONDITIONAL_JUMP)  ; LAB_00501002
    MOV EDX,dword ptr [ESP + 0x78]      ; 0050105b
        ;   Label: LAB_0050105b
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0050105f
    MOV EBX,dword ptr [ESP + 0x18]      ; 00501063
    ADD EDX,0x4                         ; 00501067
    ADD ECX,0x4                         ; 0050106a
    INC EBX                             ; 0050106d
    MOV dword ptr [ESP + 0x78],EDX      ; 0050106e
    MOV dword ptr [ESP + 0x7c],ECX      ; 00501072
    MOV dword ptr [ESP + 0x18],EBX      ; 00501076
    CMP ECX,0x54                        ; 0050107a
    JL 0x00500fcf                       ; 0050107d
        ;   XREF to: 00500fcf (CONDITIONAL_JUMP)  ; LAB_00500fcf
    MOV EAX,dword ptr [ESP + 0x70]      ; 00501083
        ;   Label: LAB_00501083
    MOV EDI,0x240                       ; 00501087
    MOV ECX,dword ptr [EAX + 0x6016bc]  ; 0050108c | DAT_006016bc
    MOV EDX,dword ptr [ESP + 0x70]      ; 00501092
    SUB EDI,ECX                         ; 00501096
    MOV EDX,dword ptr [EDX + 0x6016b8]  ; 00501098 | DAT_006016b8
    TEST EDI,EDI                        ; 0050109e
    JLE 0x00500d50                      ; 005010a0
        ;   XREF to: 00500d50 (CONDITIONAL_JUMP)  ; LAB_00500d50
    LEA EAX,[EDX + EDX*0x1]             ; 005010a6
    MOV dword ptr [ESP + 0x60],EAX      ; 005010a9
    LEA EAX,[ESI*0x4 + 0x0]             ; 005010ad
    LEA ECX,[ESI + ESI*0x1]             ; 005010b4
    SHL EDX,0x2                         ; 005010b7
    MOV dword ptr [ESP + 0x80],ECX      ; 005010ba
    FLD float ptr [EDX + 0x1d91518]     ; 005010c1
        ;   Label: LAB_005010c1
    FLD float ptr [EDX + 0x1d91e18]     ; 005010c7
    MOV EBX,dword ptr [ESP + 0x60]      ; 005010cd
    MOV ECX,dword ptr [ESP + 0x80]      ; 005010d1
    ADD EAX,0x4                         ; 005010d8
    INC ESI                             ; 005010db
    DEC EDI                             ; 005010dc
    FSTP float ptr [EAX + 0x1d91e14]    ; 005010dd
    FSTP float ptr [EAX + 0x1d91514]    ; 005010e3
    FLD float ptr [EDX + 0x1d92718]     ; 005010e9
    ADD ECX,0x2                         ; 005010ef
    MOV BX,word ptr [EBX + 0x1d91098]   ; 005010f2
    FSTP float ptr [EAX + 0x1d92714]    ; 005010f9
    MOV dword ptr [ESP + 0x80],ECX      ; 005010ff
    MOV word ptr [ECX + 0x1d91096],BX   ; 00501106
    TEST EDI,EDI                        ; 0050110d
    JG 0x005010c1                       ; 0050110f
        ;   XREF to: 005010c1 (CONDITIONAL_JUMP)  ; LAB_005010c1
    JMP 0x00500d50                      ; 00501111
        ;   XREF to: 00500d50 (UNCONDITIONAL_JUMP)  ; LAB_00500d50
    CMP EAX,dword ptr [ECX + 0x14]      ; 00501116
        ;   Label: LAB_00501116
    JNZ 0x00500f25                      ; 00501119
        ;   XREF to: 00500f25 (CONDITIONAL_JUMP)  ; LAB_00500f25
    MOV EDX,dword ptr [ESP + 0x54]      ; 0050111f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00501123
    ADD EAX,EDX                         ; 0050112a
    SHL EAX,0x2                         ; 0050112c
    ADD EAX,EDX                         ; 0050112f
    MOV EDI,dword ptr [ECX + 0x18]      ; 00501131
    SHL EAX,0x2                         ; 00501134
    TEST EDI,EDI                        ; 00501137
    JZ 0x005015f5                       ; 00501139
        ;   XREF to: 005015f5 (CONDITIONAL_JUMP)  ; LAB_005015f5
    MOV dword ptr [ESP + 0x6c],EAX      ; 0050113f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00501143
    XOR ECX,ECX                         ; 00501147
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00501149
    MOV dword ptr [ESP + 0x24],ECX      ; 0050114c
    MOV dword ptr [ESP + 0xc],ECX       ; 00501150
    MOV dword ptr [ESP + 0x9c],EAX      ; 00501154
    MOV EBX,0x2                         ; 0050115b
        ;   Label: LAB_0050115b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00501160
    MOV ESI,0xc                         ; 00501164
    INC EAX                             ; 00501169
    MOV dword ptr [ESP + 0x28],EBX      ; 0050116a
    MOV dword ptr [ESP + 0x30],EAX      ; 0050116e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00501172
        ;   Label: LAB_00501172
    LEA EAX,[ESI*0x4 + 0x0]             ; 00501176
    ADD EAX,EDI                         ; 0050117d
    MOV EBX,dword ptr [EAX + 0x6016c8]  ; 0050117f | DAT_006016f8 | DAT_0060169c
    MOV EDX,dword ptr [EAX + 0x6016c4]  ; 00501185 | DAT_006016f4 | DAT_00601698
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050118b
    SUB EBX,EDX                         ; 0050118f
    IMUL EAX,EBX                        ; 00501191
    LEA EDX,[EDX + EDX*0x2]             ; 00501194
    ADD EAX,EDX                         ; 00501197
    LEA ECX,[EAX + -0x1]                ; 00501199
    TEST EBX,EBX                        ; 0050119c
    JLE 0x005011ed                      ; 0050119e
        ;   XREF to: 005011ed (CONDITIONAL_JUMP)  ; LAB_005011ed
    MOV EDI,0x12                        ; 005011a0
        ;   Label: LAB_005011a0
    MOV EDX,ECX                         ; 005011a5
    MOV EAX,ECX                         ; 005011a7
    SAR EDX,0x1f                        ; 005011a9
    IDIV EDI                            ; 005011ac
    IMUL EAX,EAX,0x48                   ; 005011ae
    MOV dword ptr [ESP + 0xe8],0x12     ; 005011b1
    MOV EDX,ECX                         ; 005011bc
    MOV EDI,dword ptr [EBP + 0x14]      ; 005011be
    SAR EDX,0x1f                        ; 005011c1
    ADD EDI,EAX                         ; 005011c4
    MOV EAX,ECX                         ; 005011c6
    IDIV dword ptr [ESP + 0xe8]         ; 005011c8
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 005011cf
    JZ 0x005011e7                       ; 005011da
        ;   XREF to: 005011e7 (CONDITIONAL_JUMP)  ; LAB_005011e7
    MOV dword ptr [ESP + 0x28],ESI      ; 005011dc
    MOV ESI,0xfffffff6                  ; 005011e0
    MOV EBX,ESI                         ; 005011e5
    DEC EBX                             ; 005011e7
        ;   Label: LAB_005011e7
    DEC ECX                             ; 005011e8
    TEST EBX,EBX                        ; 005011e9
    JG 0x005011a0                       ; 005011eb
        ;   XREF to: 005011a0 (CONDITIONAL_JUMP)  ; LAB_005011a0
    DEC ESI                             ; 005011ed
        ;   Label: LAB_005011ed
    CMP ESI,0x3                         ; 005011ee
    JGE 0x00501172                      ; 005011f1
        ;   XREF to: 00501172 (CONDITIONAL_JUMP)  ; LAB_00501172
    MOV EAX,dword ptr [ESP + 0x28]      ; 005011f7
    INC EAX                             ; 005011fb
    MOV ECX,dword ptr [ESP + 0x24]      ; 005011fc
    MOV dword ptr [ESP + 0xcc],EAX      ; 00501200
    CMP EAX,ECX                         ; 00501207
    JG 0x005014d8                       ; 00501209
        ;   XREF to: 005014d8 (CONDITIONAL_JUMP)  ; LAB_005014d8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0050120f
        ;   Label: LAB_0050120f
    MOV dword ptr [ESP + 0x34],EAX      ; 00501216
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050121a
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00501221
    SHL EAX,0x2                         ; 00501225
    ADD EAX,EBX                         ; 00501228
    MOV dword ptr [ESP + 0x98],EAX      ; 0050122a
    MOV ESI,dword ptr [ESP + 0xcc]      ; 00501231
        ;   Label: LAB_00501231
    CMP ESI,0xc                         ; 00501238
    JGE 0x00501503                      ; 0050123b
        ;   XREF to: 00501503 (CONDITIONAL_JUMP)  ; LAB_00501503
    LEA EDX,[ESI*0x4 + 0x0]             ; 00501241
    MOV EAX,dword ptr [ESP + 0x98]      ; 00501248
    MOV ESI,dword ptr [ESP + 0x98]      ; 0050124f
    MOV EDI,dword ptr [EAX + 0x6016c4]  ; 00501256 | DAT_006016f8
    MOV ESI,dword ptr [ESI + 0x6016c8]  ; 0050125c | DAT_006016fc
    MOV EAX,dword ptr [ESP + 0xc]       ; 00501262
    SUB ESI,EDI                         ; 00501266
    IMUL EAX,ESI                        ; 00501268
    LEA EDI,[EDI + EDI*0x2]             ; 0050126b
    ADD EDI,EAX                         ; 0050126e
    TEST ESI,ESI                        ; 00501270
    JLE 0x005012f2                      ; 00501272
        ;   XREF to: 005012f2 (CONDITIONAL_JUMP)  ; LAB_005012f2
    MOV EAX,dword ptr [ESP + 0x34]      ; 00501278
    ADD EAX,EDX                         ; 0050127c
    LEA EBX,[EDI + EDI*0x1]             ; 0050127e
    MOV dword ptr [ESP + 0x38],EAX      ; 00501281
    LEA EAX,[EDI*0x4 + 0x0]             ; 00501285
    MOV dword ptr [ESP + 0x94],EAX      ; 0050128c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00501293
        ;   Label: LAB_00501293
    MOV AX,word ptr [EAX + 0x154]       ; 00501297
    MOV word ptr [EBX + 0x1d91098],AX   ; 0050129e
    CMP AX,0x7                          ; 005012a5
    JZ 0x005012d8                       ; 005012a9
        ;   XREF to: 005012d8 (CONDITIONAL_JUMP)  ; LAB_005012d8
    CMP dword ptr [ESP + 0x20],0x0      ; 005012ab
    JZ 0x005014e1                       ; 005012b0
        ;   XREF to: 005014e1 (CONDITIONAL_JUMP)  ; LAB_005014e1
    PUSH 0x1d91e18                      ; 005012b6
    PUSH EDI                            ; 005012bb
    MOV EDX,dword ptr [ESP + 0xc]       ; 005012bc
    PUSH EDX                            ; 005012c0
    MOV ECX,dword ptr [ESP + 0xc]       ; 005012c1
    MOV EAX,dword ptr [EBX + 0x1d91096] ; 005012c5
    PUSH ECX                            ; 005012cb
    SAR EAX,0x10                        ; 005012cc
    PUSH EAX                            ; 005012cf
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0 ; 005012d0
        ;   XREF to: 00500be0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0()
    ADD ESP,0x14                        ; 005012d5
    MOV EAX,dword ptr [ESP + 0x94]      ; 005012d8
        ;   Label: LAB_005012d8
    ADD EBX,0x2                         ; 005012df
    INC EDI                             ; 005012e2
    ADD EAX,0x4                         ; 005012e3
    DEC ESI                             ; 005012e6
    MOV dword ptr [ESP + 0x94],EAX      ; 005012e7
    TEST ESI,ESI                        ; 005012ee
    JG 0x00501293                       ; 005012f0
        ;   XREF to: 00501293 (CONDITIONAL_JUMP)  ; LAB_00501293
    MOV ECX,dword ptr [ESP + 0xcc]      ; 005012f2
        ;   Label: LAB_005012f2
    MOV EDX,dword ptr [ESP + 0x98]      ; 005012f9
    INC ECX                             ; 00501300
    ADD EDX,0x4                         ; 00501301
    MOV dword ptr [ESP + 0xcc],ECX      ; 00501304
    MOV dword ptr [ESP + 0x98],EDX      ; 0050130b
    JMP 0x00501231                      ; 00501312
        ;   XREF to: 00501231 (UNCONDITIONAL_JUMP)  ; LAB_00501231
    MOV EDI,dword ptr [ESP + 0xc]       ; 00501317
        ;   Label: LAB_00501317
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0050131b
    INC EDI                             ; 00501322
    ADD ESI,0x34                        ; 00501323
    MOV dword ptr [ESP + 0xc],EDI       ; 00501326
    MOV dword ptr [ESP + 0x9c],ESI      ; 0050132a
    CMP EDI,0x3                         ; 00501331
    JL 0x0050115b                       ; 00501334
        ;   XREF to: 0050115b (CONDITIONAL_JUMP)  ; LAB_0050115b
    CMP dword ptr [ESP + 0x24],0x3      ; 0050133a
    JG 0x00500d50                       ; 0050133f
        ;   XREF to: 00500d50 (CONDITIONAL_JUMP)  ; LAB_00500d50
    MOV ECX,0x2                         ; 00501345
    MOV EDX,0x11                        ; 0050134a
    MOV EBX,0xffffffff                  ; 0050134f
    MOV EDI,dword ptr [EBP + 0x14]      ; 00501354
    MOV dword ptr [ESP + 0xe4],EBX      ; 00501357
    ADD EDI,0x90                        ; 0050135e
    MOV EBX,EDX                         ; 00501364
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 00501366
        ;   Label: LAB_00501366
    JZ 0x005015bb                       ; 00501371
        ;   XREF to: 005015bb (CONDITIONAL_JUMP)  ; LAB_005015bb
    LEA EAX,[ECX*0x8 + 0x0]             ; 00501377
    ADD EAX,ECX                         ; 0050137e
    ADD EAX,EAX                         ; 00501380
    ADD EAX,EDX                         ; 00501382
    MOV dword ptr [ESP + 0xe4],EAX      ; 00501384
    MOV EDX,dword ptr [ESP + 0x54]      ; 0050138b
        ;   Label: LAB_0050138b
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050138f
    ADD EAX,EDX                         ; 00501396
    SHL EAX,0x2                         ; 00501398
    ADD EDX,EAX                         ; 0050139b
    SHL EDX,0x2                         ; 0050139d
    MOV EDI,dword ptr [ESP + 0xe4]      ; 005013a0
    MOV EAX,EDX                         ; 005013a7
    MOV EDX,dword ptr [EDX + 0x601668]  ; 005013a9 | DAT_00601668
    XOR ESI,ESI                         ; 005013af
    CMP EDX,EDI                         ; 005013b1
    JG 0x005013d0                       ; 005013b3
        ;   XREF to: 005013d0 (CONDITIONAL_JUMP)  ; LAB_005013d0
    MOV ECX,dword ptr [ESP + 0xe4]      ; 005013b5
    INC ESI                             ; 005013bc
        ;   Label: LAB_005013bc
    MOV EDX,dword ptr [EAX + 0x60166c]  ; 005013bd | DAT_0060166c | DAT_00601670
    ADD EAX,0x4                         ; 005013c3
    CMP EDX,ECX                         ; 005013c6
    JLE 0x005013bc                      ; 005013c8
        ;   XREF to: 005013bc (CONDITIONAL_JUMP)  ; LAB_005013bc
    LEA EAX,[EAX]                       ; 005013ca
    MOV dword ptr [ESP + 0x8],ESI       ; 005013d0
        ;   Label: LAB_005013d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005013d4
    MOV ESI,dword ptr [EAX + 0x601668]  ; 005013d8 | DAT_0060166c | DAT_00601670 | DAT_00601668
    CMP EBX,0x8                         ; 005013de
    JGE 0x00500d50                      ; 005013e1
        ;   XREF to: 00500d50 (CONDITIONAL_JUMP)  ; LAB_00500d50
    MOV EDX,dword ptr [ESP + 0x54]      ; 005013e7
    LEA EAX,[EDX*0x8 + 0x0]             ; 005013eb
    ADD EAX,EDX                         ; 005013f2
    SHL EAX,0x2                         ; 005013f4
    ADD EDX,EAX                         ; 005013f7
    SHL EDX,0x2                         ; 005013f9
    LEA EAX,[EBX*0x4 + 0x0]             ; 005013fc
    ADD EAX,EDX                         ; 00501403
    MOV dword ptr [ESP + 0xa4],EAX      ; 00501405
    MOV EDI,dword ptr [ESP + 0xa4]      ; 0050140c
        ;   Label: LAB_0050140c
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00501413
    MOV EDI,dword ptr [EDI + 0x60166c]  ; 0050141a | DAT_00601670 | DAT_00601674 | DAT_0060166c
    MOV ECX,dword ptr [EDX + 0x601668]  ; 00501420 | DAT_0060166c | DAT_00601670
    MOV EAX,dword ptr [ESP + 0x8]       ; 00501426
    SUB EDI,ECX                         ; 0050142a
    SHL EAX,0x2                         ; 0050142c
    TEST EDI,EDI                        ; 0050142f
    JLE 0x005014b0                      ; 00501431
        ;   XREF to: 005014b0 (CONDITIONAL_JUMP)  ; LAB_005014b0
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00501437
    LEA EBX,[ESI + ESI*0x1]             ; 0050143a
    ADD EDX,EAX                         ; 0050143d
    LEA EAX,[ESI*0x4 + 0x0]             ; 0050143f
    MOV dword ptr [ESP + 0x3c],EDX      ; 00501446
    MOV dword ptr [ESP + 0xa0],EAX      ; 0050144a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00501451
        ;   Label: LAB_00501451
    MOV AX,word ptr [EAX + 0xf8]        ; 00501455
    MOV word ptr [EBX + 0x1d91098],AX   ; 0050145c
    CMP AX,0x7                          ; 00501463
    JZ 0x00501496                       ; 00501467
        ;   XREF to: 00501496 (CONDITIONAL_JUMP)  ; LAB_00501496
    CMP dword ptr [ESP + 0x20],0x0      ; 00501469
    JZ 0x005015d3                       ; 0050146e
        ;   XREF to: 005015d3 (CONDITIONAL_JUMP)  ; LAB_005015d3
    PUSH 0x1d91e18                      ; 00501474
    PUSH ESI                            ; 00501479
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050147a
    PUSH ECX                            ; 0050147e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050147f
    PUSH EAX                            ; 00501483
    MOV EAX,dword ptr [EBX + 0x1d91096] ; 00501484
    SAR EAX,0x10                        ; 0050148a
    PUSH EAX                            ; 0050148d
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0 ; 0050148e
        ;   XREF to: 00500be0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0()
    ADD ESP,0x14                        ; 00501493
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00501496
        ;   Label: LAB_00501496
    ADD EBX,0x2                         ; 0050149d
    INC ESI                             ; 005014a0
    ADD EAX,0x4                         ; 005014a1
    DEC EDI                             ; 005014a4
    MOV dword ptr [ESP + 0xa0],EAX      ; 005014a5
    TEST EDI,EDI                        ; 005014ac
    JG 0x00501451                       ; 005014ae
        ;   XREF to: 00501451 (CONDITIONAL_JUMP)  ; LAB_00501451
    MOV EBX,dword ptr [ESP + 0xa4]      ; 005014b0
        ;   Label: LAB_005014b0
    MOV EDI,dword ptr [ESP + 0x8]       ; 005014b7
    ADD EBX,0x4                         ; 005014bb
    INC EDI                             ; 005014be
    MOV dword ptr [ESP + 0xa4],EBX      ; 005014bf
    MOV dword ptr [ESP + 0x8],EDI       ; 005014c6
    CMP EDI,0x8                         ; 005014ca
    JGE 0x00500d50                      ; 005014cd
        ;   XREF to: 00500d50 (CONDITIONAL_JUMP)  ; LAB_00500d50
    JMP 0x0050140c                      ; 005014d3
        ;   XREF to: 0050140c (UNCONDITIONAL_JUMP)  ; LAB_0050140c
    MOV dword ptr [ESP + 0x24],EAX      ; 005014d8
        ;   Label: LAB_005014d8
    JMP 0x0050120f                      ; 005014dc
        ;   XREF to: 0050120f (UNCONDITIONAL_JUMP)  ; LAB_0050120f
    FILD word ptr [EBX + 0x1d91098]     ; 005014e1
        ;   Label: LAB_005014e1
    FMUL double ptr [0x005ca2cf]        ; 005014e7 | DAT_005ca2cf
    FPTAN                               ; 005014ed
    FSTP ST0                            ; 005014ef
    MOV EAX,dword ptr [ESP + 0x94]      ; 005014f1
    FSTP float ptr [EAX + 0x1d91518]    ; 005014f8
    JMP 0x005012d8                      ; 005014fe
        ;   XREF to: 005012d8 (UNCONDITIONAL_JUMP)  ; LAB_005012d8
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00501503
        ;   Label: LAB_00501503
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00501507
    MOV EDI,dword ptr [EAX + 0x6016f0]  ; 0050150b | DAT_006016f0
    MOV ESI,dword ptr [ESI + 0x6016f4]  ; 00501511 | DAT_006016f4
    MOV EDX,dword ptr [ESP + 0xc]       ; 00501517
    SUB ESI,EDI                         ; 0050151b
    IMUL EDX,ESI                        ; 0050151d
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00501520
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00501524
    MOV EBX,dword ptr [ECX + 0x6016f4]  ; 00501528 | DAT_006016f4
    MOV ESI,dword ptr [ESI + 0x6016f8]  ; 0050152e | DAT_006016f8
    MOV ECX,dword ptr [ESP + 0xc]       ; 00501534
    SUB ESI,EBX                         ; 00501538
    IMUL ECX,ESI                        ; 0050153a
    LEA EAX,[EDI + EDI*0x2]             ; 0050153d
    ADD EDX,EAX                         ; 00501540
    ADD EAX,ECX                         ; 00501542
    MOV dword ptr [ESP + 0xd8],EAX      ; 00501544
    TEST ESI,ESI                        ; 0050154b
    JLE 0x00501317                      ; 0050154d
        ;   XREF to: 00501317 (CONDITIONAL_JUMP)  ; LAB_00501317
    LEA EDI,[EDX + EDX*0x1]             ; 00501553
    LEA ECX,[EDX*0x4 + 0x0]             ; 00501556
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0050155d
    SHL EAX,0x2                         ; 00501564
    ADD EDX,EDX                         ; 00501567
    FLD float ptr [ECX + 0x1d91518]     ; 00501569
        ;   Label: LAB_00501569
    FLD float ptr [ECX + 0x1d91e18]     ; 0050156f
    ADD EAX,0x4                         ; 00501575
    ADD EDX,0x2                         ; 00501578
    DEC ESI                             ; 0050157b
    MOV BX,word ptr [EDI + 0x1d91098]   ; 0050157c
    FSTP float ptr [EAX + 0x1d91e14]    ; 00501583
    FSTP float ptr [EAX + 0x1d91514]    ; 00501589
    MOV word ptr [EDX + 0x1d91096],BX   ; 0050158f
    MOV EBX,dword ptr [ESP + 0xd8]      ; 00501596
    FLD float ptr [ECX + 0x1d92718]     ; 0050159d
    INC EBX                             ; 005015a3
    FSTP float ptr [EAX + 0x1d92714]    ; 005015a4
    MOV dword ptr [ESP + 0xd8],EBX      ; 005015aa
    TEST ESI,ESI                        ; 005015b1
    JLE 0x00501317                      ; 005015b3
        ;   XREF to: 00501317 (CONDITIONAL_JUMP)  ; LAB_00501317
    JMP 0x00501569                      ; 005015b9
        ;   XREF to: 00501569 (UNCONDITIONAL_JUMP)  ; LAB_00501569
    DEC EDX                             ; 005015bb
        ;   Label: LAB_005015bb
    TEST EDX,EDX                        ; 005015bc
    JGE 0x005015c6                      ; 005015be
        ;   XREF to: 005015c6 (CONDITIONAL_JUMP)  ; LAB_005015c6
    SUB EDI,0x48                        ; 005015c0
    DEC ECX                             ; 005015c3
    MOV EDX,EBX                         ; 005015c4
    TEST ECX,ECX                        ; 005015c6
        ;   Label: LAB_005015c6
    JGE 0x00501366                      ; 005015c8
        ;   XREF to: 00501366 (CONDITIONAL_JUMP)  ; LAB_00501366
    JMP 0x0050138b                      ; 005015ce
        ;   XREF to: 0050138b (UNCONDITIONAL_JUMP)  ; LAB_0050138b
    FILD word ptr [EBX + 0x1d91098]     ; 005015d3
        ;   Label: LAB_005015d3
    FMUL double ptr [0x005ca2cf]        ; 005015d9 | DAT_005ca2cf
    FPTAN                               ; 005015df
    FSTP ST0                            ; 005015e1
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005015e3
    FSTP float ptr [EAX + 0x1d91518]    ; 005015ea
    JMP 0x00501496                      ; 005015f0
        ;   XREF to: 00501496 (UNCONDITIONAL_JUMP)  ; LAB_00501496
    MOV dword ptr [ESP + 0x68],EAX      ; 005015f5
        ;   Label: LAB_005015f5
    MOV dword ptr [ESP + 0x44],EAX      ; 005015f9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005015fd
    MOV dword ptr [ESP + 0x1c],EDI      ; 00501600
    MOV dword ptr [ESP + 0x90],EAX      ; 00501604
    MOV ECX,0xffffffff                  ; 0050160b
        ;   Label: LAB_0050160b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501610
    MOV ESI,0xc                         ; 00501614
    INC EAX                             ; 00501619
    MOV dword ptr [ESP + 0x40],ECX      ; 0050161a
    MOV dword ptr [ESP + 0x48],EAX      ; 0050161e
    MOV EBX,dword ptr [ESP + 0x44]      ; 00501622
        ;   Label: LAB_00501622
    LEA EAX,[ESI*0x4 + 0x0]             ; 00501626
    ADD EAX,EBX                         ; 0050162d
    MOV EBX,dword ptr [EAX + 0x6016c8]  ; 0050162f | DAT_006016f8 | DAT_0060169c
    MOV EDI,dword ptr [EAX + 0x6016c4]  ; 00501635 | DAT_006016f4 | DAT_00601698
    MOV EDX,dword ptr [ESP + 0x48]      ; 0050163b
    SUB EBX,EDI                         ; 0050163f
    IMUL EDX,EBX                        ; 00501641
    LEA EAX,[EDI + EDI*0x2]             ; 00501644
    ADD EAX,EDX                         ; 00501647
    LEA ECX,[EAX + -0x1]                ; 00501649
    TEST EBX,EBX                        ; 0050164c
    JLE 0x0050169d                      ; 0050164e
        ;   XREF to: 0050169d (CONDITIONAL_JUMP)  ; LAB_0050169d
    MOV EDI,0x12                        ; 00501650
        ;   Label: LAB_00501650
    MOV EDX,ECX                         ; 00501655
    MOV EAX,ECX                         ; 00501657
    SAR EDX,0x1f                        ; 00501659
    IDIV EDI                            ; 0050165c
    IMUL EAX,EAX,0x48                   ; 0050165e
    MOV dword ptr [ESP + 0xe8],0x12     ; 00501661
    MOV EDX,ECX                         ; 0050166c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050166e
    SAR EDX,0x1f                        ; 00501671
    ADD EDI,EAX                         ; 00501674
    MOV EAX,ECX                         ; 00501676
    IDIV dword ptr [ESP + 0xe8]         ; 00501678
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 0050167f
    JZ 0x00501697                       ; 0050168a
        ;   XREF to: 00501697 (CONDITIONAL_JUMP)  ; LAB_00501697
    MOV dword ptr [ESP + 0x40],ESI      ; 0050168c
    MOV ESI,0xfffffff6                  ; 00501690
    MOV EBX,ESI                         ; 00501695
    DEC EBX                             ; 00501697
        ;   Label: LAB_00501697
    DEC ECX                             ; 00501698
    TEST EBX,EBX                        ; 00501699
    JG 0x00501650                       ; 0050169b
        ;   XREF to: 00501650 (CONDITIONAL_JUMP)  ; LAB_00501650
    DEC ESI                             ; 0050169d
        ;   Label: LAB_0050169d
    TEST ESI,ESI                        ; 0050169e
    JGE 0x00501622                      ; 005016a0
        ;   XREF to: 00501622 (CONDITIONAL_JUMP)  ; LAB_00501622
    MOV EAX,dword ptr [ESP + 0x40]      ; 005016a2
    INC EAX                             ; 005016a6
    MOV dword ptr [ESP + 0xd0],EAX      ; 005016a7
    MOV EAX,dword ptr [ESP + 0x90]      ; 005016ae
    MOV ESI,dword ptr [ESP + 0xd0]      ; 005016b5
    MOV dword ptr [ESP + 0x4c],EAX      ; 005016bc
    SHL ESI,0x2                         ; 005016c0
    MOV EAX,dword ptr [ESP + 0x68]      ; 005016c3
    ADD EAX,ESI                         ; 005016c7
    MOV dword ptr [ESP + 0x88],EAX      ; 005016c9
    CMP dword ptr [ESP + 0xd0],0xc      ; 005016d0
    JGE 0x005017ce                      ; 005016d8
        ;   XREF to: 005017ce (CONDITIONAL_JUMP)  ; LAB_005017ce
    MOV dword ptr [ESP + 0x8c],ESI      ; 005016de
    MOV EAX,dword ptr [ESP + 0x88]      ; 005016e5
        ;   Label: LAB_005016e5
    MOV ESI,dword ptr [ESP + 0x88]      ; 005016ec
    MOV EDI,dword ptr [EAX + 0x6016c4]  ; 005016f3 | DAT_006016f8 | DAT_006016fc
    MOV ESI,dword ptr [ESI + 0x6016c8]  ; 005016f9 | DAT_006016fc | DAT_00601700
    SUB ESI,EDI                         ; 005016ff
    LEA EAX,[EDI + EDI*0x2]             ; 00501701
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00501704
    IMUL EDI,ESI                        ; 00501708
    ADD EDI,EAX                         ; 0050170b
    TEST ESI,ESI                        ; 0050170d
    JLE 0x00501794                      ; 0050170f
        ;   XREF to: 00501794 (CONDITIONAL_JUMP)  ; LAB_00501794
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00501715
    ADD EAX,dword ptr [ESP + 0x8c]      ; 00501719
    LEA EBX,[EDI + EDI*0x1]             ; 00501720
    MOV dword ptr [ESP + 0x50],EAX      ; 00501723
    LEA EAX,[EDI*0x4 + 0x0]             ; 00501727
    MOV dword ptr [ESP + 0x84],EAX      ; 0050172e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00501735
        ;   Label: LAB_00501735
    MOV AX,word ptr [EAX + 0x154]       ; 00501739
    MOV word ptr [EBX + 0x1d91098],AX   ; 00501740
    CMP AX,0x7                          ; 00501747
    JZ 0x0050177a                       ; 0050174b
        ;   XREF to: 0050177a (CONDITIONAL_JUMP)  ; LAB_0050177a
    CMP dword ptr [ESP + 0x20],0x0      ; 0050174d
    JZ 0x005018a0                       ; 00501752
        ;   XREF to: 005018a0 (CONDITIONAL_JUMP)  ; LAB_005018a0
    PUSH 0x1d91e18                      ; 00501758
    PUSH EDI                            ; 0050175d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050175e
    PUSH EDX                            ; 00501762
    MOV ECX,dword ptr [ESP + 0xc]       ; 00501763
    MOV EAX,dword ptr [EBX + 0x1d91096] ; 00501767
    PUSH ECX                            ; 0050176d
    SAR EAX,0x10                        ; 0050176e
    PUSH EAX                            ; 00501771
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0 ; 00501772
        ;   XREF to: 00500be0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0()
    ADD ESP,0x14                        ; 00501777
    MOV EDX,dword ptr [ESP + 0x84]      ; 0050177a
        ;   Label: LAB_0050177a
    ADD EBX,0x2                         ; 00501781
    INC EDI                             ; 00501784
    ADD EDX,0x4                         ; 00501785
    DEC ESI                             ; 00501788
    MOV dword ptr [ESP + 0x84],EDX      ; 00501789
    TEST ESI,ESI                        ; 00501790
    JG 0x00501735                       ; 00501792
        ;   XREF to: 00501735 (CONDITIONAL_JUMP)  ; LAB_00501735
    MOV EDX,dword ptr [ESP + 0x88]      ; 00501794
        ;   Label: LAB_00501794
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0050179b
    MOV EBX,dword ptr [ESP + 0xd0]      ; 005017a2
    ADD EDX,0x4                         ; 005017a9
    ADD ECX,0x4                         ; 005017ac
    INC EBX                             ; 005017af
    MOV dword ptr [ESP + 0x88],EDX      ; 005017b0
    MOV dword ptr [ESP + 0x8c],ECX      ; 005017b7
    MOV dword ptr [ESP + 0xd0],EBX      ; 005017be
    CMP ECX,0x30                        ; 005017c5
    JL 0x005016e5                       ; 005017c8
        ;   XREF to: 005016e5 (CONDITIONAL_JUMP)  ; LAB_005016e5
    MOV EAX,dword ptr [ESP + 0x68]      ; 005017ce
        ;   Label: LAB_005017ce
    MOV ESI,dword ptr [ESP + 0x68]      ; 005017d2
    MOV EDI,dword ptr [EAX + 0x6016f0]  ; 005017d6 | DAT_006016f0
    MOV ESI,dword ptr [ESI + 0x6016f4]  ; 005017dc | DAT_006016f4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005017e2
    SUB ESI,EDI                         ; 005017e6
    IMUL EDX,ESI                        ; 005017e8
    MOV ECX,dword ptr [ESP + 0x68]      ; 005017eb
    MOV ESI,dword ptr [ESP + 0x68]      ; 005017ef
    MOV EBX,dword ptr [ECX + 0x6016f4]  ; 005017f3 | DAT_006016f4
    MOV ESI,dword ptr [ESI + 0x6016f8]  ; 005017f9 | DAT_006016f8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005017ff
    SUB ESI,EBX                         ; 00501803
    IMUL ECX,ESI                        ; 00501805
    LEA EAX,[EDI + EDI*0x2]             ; 00501808
    ADD EDX,EAX                         ; 0050180b
    ADD EAX,ECX                         ; 0050180d
    MOV dword ptr [ESP + 0xdc],EAX      ; 0050180f
    TEST ESI,ESI                        ; 00501816
    JLE 0x00501878                      ; 00501818
        ;   XREF to: 00501878 (CONDITIONAL_JUMP)  ; LAB_00501878
    MOV ECX,dword ptr [ESP + 0xdc]      ; 0050181a
    LEA EDI,[EDX + EDX*0x1]             ; 00501821
    SHL EAX,0x2                         ; 00501824
    SHL EDX,0x2                         ; 00501827
    ADD ECX,ECX                         ; 0050182a
    FLD float ptr [EDX + 0x1d91518]     ; 0050182c
        ;   Label: LAB_0050182c
    FLD float ptr [EDX + 0x1d91e18]     ; 00501832
    ADD EAX,0x4                         ; 00501838
    ADD ECX,0x2                         ; 0050183b
    DEC ESI                             ; 0050183e
    MOV BX,word ptr [EDI + 0x1d91098]   ; 0050183f
    FSTP float ptr [EAX + 0x1d91e14]    ; 00501846
    FSTP float ptr [EAX + 0x1d91514]    ; 0050184c
    MOV word ptr [ECX + 0x1d91096],BX   ; 00501852
    MOV EBX,dword ptr [ESP + 0xdc]      ; 00501859
    FLD float ptr [EDX + 0x1d92718]     ; 00501860
    INC EBX                             ; 00501866
    FSTP float ptr [EAX + 0x1d92714]    ; 00501867
    MOV dword ptr [ESP + 0xdc],EBX      ; 0050186d
    TEST ESI,ESI                        ; 00501874
    JG 0x0050182c                       ; 00501876
        ;   XREF to: 0050182c (CONDITIONAL_JUMP)  ; LAB_0050182c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00501878
        ;   Label: LAB_00501878
    MOV ESI,dword ptr [ESP + 0x90]      ; 0050187c
    INC EDI                             ; 00501883
    ADD ESI,0x34                        ; 00501884
    MOV dword ptr [ESP + 0x1c],EDI      ; 00501887
    MOV dword ptr [ESP + 0x90],ESI      ; 0050188b
    CMP EDI,0x3                         ; 00501892
    JGE 0x00500d50                      ; 00501895
        ;   XREF to: 00500d50 (CONDITIONAL_JUMP)  ; LAB_00500d50
    JMP 0x0050160b                      ; 0050189b
        ;   XREF to: 0050160b (UNCONDITIONAL_JUMP)  ; LAB_0050160b
    FILD word ptr [EBX + 0x1d91098]     ; 005018a0
        ;   Label: LAB_005018a0
    FMUL double ptr [0x005ca2cf]        ; 005018a6 | DAT_005ca2cf
    FPTAN                               ; 005018ac
    FSTP ST0                            ; 005018ae
    MOV EAX,dword ptr [ESP + 0x84]      ; 005018b0
    FSTP float ptr [EAX + 0x1d91518]    ; 005018b7
    JMP 0x0050177a                      ; 005018bd
        ;   XREF to: 0050177a (UNCONDITIONAL_JUMP)  ; LAB_0050177a
    DEC EDX                             ; 005018c2
        ;   Label: LAB_005018c2
    TEST EDX,EDX                        ; 005018c3
    JGE 0x005018cd                      ; 005018c5
        ;   XREF to: 005018cd (CONDITIONAL_JUMP)  ; LAB_005018cd
    SUB EBX,0x48                        ; 005018c7
    DEC ECX                             ; 005018ca
    MOV EDX,ESI                         ; 005018cb
    TEST ECX,ECX                        ; 005018cd
        ;   Label: LAB_005018cd
    JGE 0x00500f3c                      ; 005018cf
        ;   XREF to: 00500f3c (CONDITIONAL_JUMP)  ; LAB_00500f3c
    JMP 0x00500f5b                      ; 005018d5
        ;   XREF to: 00500f5b (UNCONDITIONAL_JUMP)  ; LAB_00500f5b
    FILD word ptr [EBX + 0x1d91098]     ; 005018da
        ;   Label: LAB_005018da
    FMUL double ptr [0x005ca2cf]        ; 005018e0 | DAT_005ca2cf
    FPTAN                               ; 005018e6
    FSTP ST0                            ; 005018e8
    MOV EAX,dword ptr [ESP + 0x74]      ; 005018ea
    FSTP float ptr [EAX + 0x1d91518]    ; 005018ee
    JMP 0x00501047                      ; 005018f4
        ;   XREF to: 00501047 (UNCONDITIONAL_JUMP)  ; LAB_00501047
    MOV ECX,dword ptr [EAX]             ; 005018f9
        ;   Label: LAB_005018f9
    MOV dword ptr [EDX],ECX             ; 005018fb
    MOV ECX,dword ptr [EAX + 0x900]     ; 005018fd
    MOV dword ptr [EDX + 0x900],ECX     ; 00501903
    JMP 0x00500e82                      ; 00501909
        ;   XREF to: 00500e82 (UNCONDITIONAL_JUMP)  ; LAB_00500e82
    CMP dword ptr [ESP + 0x14],0x0      ; 0050190e
        ;   Label: LAB_0050190e
    JZ 0x00501964                       ; 00501913
        ;   XREF to: 00501964 (CONDITIONAL_JUMP)  ; LAB_00501964
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00501915
    SHL ECX,0x2                         ; 0050191c
    CMP dword ptr [ESP + 0x20],0x0      ; 0050191f
    JZ 0x0050193d                       ; 00501924
        ;   XREF to: 0050193d (CONDITIONAL_JUMP)  ; LAB_0050193d
    FLD float ptr [EAX]                 ; 00501926
    FMUL float ptr [ECX + 0x1d91e18]    ; 00501928
    FSTP float ptr [EDX]                ; 0050192e
    FLD float ptr [EAX]                 ; 00501930
    FMUL float ptr [ECX + 0x1d92718]    ; 00501932
    JMP 0x00500e7c                      ; 00501938
        ;   XREF to: 00500e7c (UNCONDITIONAL_JUMP)  ; LAB_00500e7c
    FLD1                                ; 0050193d
        ;   Label: LAB_0050193d
    FADD float ptr [ECX + 0x1d91518]    ; 0050193f
    FDIVR float ptr [ECX + 0x1d91518]   ; 00501945
    FMUL float ptr [EAX]                ; 0050194b
    FLD1                                ; 0050194d
    FXCH                                ; 0050194f
    FSTP float ptr [EDX]                ; 00501951
    FADD float ptr [ECX + 0x1d91518]    ; 00501953
    FLD1                                ; 00501959
    FDIVRP                              ; 0050195b
    FMUL float ptr [EAX]                ; 0050195d
    JMP 0x00500e7c                      ; 0050195f
        ;   XREF to: 00500e7c (UNCONDITIONAL_JUMP)  ; LAB_00500e7c
    PUSH 0x1d94b98                      ; 00501964 | DAT_01d94b98
        ;   Label: LAB_00501964
    MOV EAX,0x5ca297                    ; 00501969 | = "..\\sound\\mp3.cpp"
    MOV EDX,0xa3a                       ; 0050196e
    PUSH 0x5ca2a8                       ; 00501973 | = "Error in streo processing.  File: %s"
    MOV [0x01d71de0],EAX                ; 00501978 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0050197d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00501983
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00501988
    JMP 0x00500e82                      ; 0050198b
        ;   XREF to: 00500e82 (UNCONDITIONAL_JUMP)  ; LAB_00500e82
    MOV ESI,dword ptr [EBP + 0x14]      ; 00501990
        ;   Label: LAB_00501990
    MOV EAX,dword ptr [EBP + 0x18]      ; 00501993
    XOR EBX,EBX                         ; 00501996
    ADD ESI,0x48                        ; 00501998
    MOV dword ptr [ESP + 0xb0],EAX      ; 0050199b
    IMUL EAX,EBX,0x48                   ; 005019a2
        ;   Label: LAB_005019a2
    MOV EDX,dword ptr [EBP + 0x14]      ; 005019a5
    MOV ECX,ESI                         ; 005019a8
    ADD EAX,EDX                         ; 005019aa
    MOV EDX,dword ptr [ESP + 0xb0]      ; 005019ac
    ADD EDX,0x4                         ; 005019b3
        ;   Label: LAB_005019b3
    FLD float ptr [EAX]                 ; 005019b6
    ADD EAX,0x4                         ; 005019b8
    FSTP float ptr [EDX + -0x4]         ; 005019bb
    CMP EAX,ECX                         ; 005019be
    JNZ 0x005019b3                      ; 005019c0
        ;   XREF to: 005019b3 (CONDITIONAL_JUMP)  ; LAB_005019b3
    MOV ECX,dword ptr [ESP + 0xb0]      ; 005019c2
    INC EBX                             ; 005019c9
    ADD ECX,0x48                        ; 005019ca
    ADD ESI,0x48                        ; 005019cd
    MOV dword ptr [ESP + 0xb0],ECX      ; 005019d0
    CMP EBX,0x20                        ; 005019d7
    JGE 0x00500ee5                      ; 005019da
        ;   XREF to: 00500ee5 (CONDITIONAL_JUMP)  ; LAB_00500ee5
    JMP 0x005019a2                      ; 005019e0
        ;   XREF to: 005019a2 (UNCONDITIONAL_JUMP)  ; LAB_005019a2

