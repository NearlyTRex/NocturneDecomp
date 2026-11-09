; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_FUN_004298f0(CChain *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7f03
;   undefined4 DAT_005b7f07
;   undefined4 DAT_005b7f0f
;   undefined4 DAT_005b7f17
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_chain.cpp_FUN_00429420
;   core_chain.cpp_FUN_00429660
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004298f0
        ;   Label: core_chain.cpp_FUN_004298f0
    PUSH ESI                            ; 004298f1
    PUSH EDI                            ; 004298f2
    PUSH EBP                            ; 004298f3
    MOV EBP,ESP                         ; 004298f4
    SUB ESP,0x154                       ; 004298f6
    AND ESP,0xfffffff8                  ; 004298fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004298ff
    FLD float ptr [EBX + 0x56c]         ; 00429902
    FCOMP float ptr [0x005b7f03]        ; 00429908 | DAT_005b7f03
    FNSTSW AX                           ; 0042990e
    SAHF                                ; 00429910
    JC 0x004299a3                       ; 00429911
        ;   XREF to: 004299a3 (CONDITIONAL_JUMP)  ; LAB_004299a3
    CMP dword ptr [EBX + 0x574],0x0     ; 00429917
        ;   Label: LAB_00429917
    JZ 0x004299d0                       ; 0042991e
        ;   XREF to: 004299d0 (CONDITIONAL_JUMP)  ; LAB_004299d0
    XOR ECX,ECX                         ; 00429924
    LEA EDX,[EBX + 0x2b0]               ; 00429926
    MOV dword ptr [ESP + 0x4],ECX       ; 0042992c
    MOV EAX,dword ptr [EBX + 0x158]     ; 00429930
        ;   Label: LAB_00429930
    DEC EAX                             ; 00429936
    CMP ECX,EAX                         ; 00429937
    JGE 0x004299d0                      ; 00429939
        ;   XREF to: 004299d0 (CONDITIONAL_JUMP)  ; LAB_004299d0
    FLD float ptr [EDX + -0x24]         ; 0042993f
    FLD float ptr [EDX + -0x20]         ; 00429942
    FLD float ptr [EDX + -0x1c]         ; 00429945
    LEA EDI,[ESP + 0x2c]                ; 00429948
    LEA ESI,[ESP + 0xf8]                ; 0042994c
    FXCH ST2                            ; 00429953
    FSUB float ptr [EDX]                ; 00429955
    FXCH                                ; 00429957
    FSUB float ptr [EDX + 0x4]          ; 00429959
    FXCH ST2                            ; 0042995c
    FSUB float ptr [EDX + 0x8]          ; 0042995e
    FXCH                                ; 00429961
    FSTP float ptr [ESP + 0xf8]         ; 00429963
    FXCH                                ; 0042996a
    FSTP float ptr [ESP + 0xfc]         ; 0042996c
    FSTP float ptr [ESP + 0x100]        ; 00429973
    MOVSD ES:EDI,ESI                    ; 0042997a
    MOVSD ES:EDI,ESI                    ; 0042997b
    MOVSD ES:EDI,ESI                    ; 0042997c
    FLD float ptr [ESP + 0x30]          ; 0042997d
    FMUL ST0                            ; 00429981
    FLD float ptr [ESP + 0x2c]          ; 00429983
    FMUL ST0                            ; 00429987
    FADDP                               ; 00429989
    FLD float ptr [ESP + 0x34]          ; 0042998b
    FMUL ST0                            ; 0042998f
    FADDP                               ; 00429991
    FSQRT                               ; 00429993
    ADD EDX,0x24                        ; 00429995
    FADD float ptr [ESP + 0x4]          ; 00429998
    INC ECX                             ; 0042999c
    FSTP float ptr [ESP + 0x4]          ; 0042999d
    JMP 0x00429930                      ; 004299a1
        ;   XREF to: 00429930 (UNCONDITIONAL_JUMP)  ; LAB_00429930
    PUSH 0x0                            ; 004299a3
        ;   Label: LAB_004299a3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004299a5
    PUSH 0x3dcccccd                     ; 004299ab
    PUSH EBX                            ; 004299b0
    CALL dword ptr [EAX + 0x40]         ; 004299b1
    MOV dword ptr [ESP + 0x15c],EAX     ; 004299b4
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004299bb
    MOV dword ptr [EBX + 0x56c],EAX     ; 004299c2
    ADD ESP,0xc                         ; 004299c8
    JMP 0x00429917                      ; 004299cb
        ;   XREF to: 00429917 (UNCONDITIONAL_JUMP)  ; LAB_00429917
    FLD float ptr [EBP + 0x18]          ; 004299d0
        ;   Label: LAB_004299d0
    FLD1                                ; 004299d3
    FDIVRP                              ; 004299d5
    MOV EAX,dword ptr [EBX + 0x158]     ; 004299d7
    LEA EDX,[EAX + -0x1]                ; 004299dd
    LEA EAX,[EDX*0x8 + 0x0]             ; 004299e0
    LEA EDI,[ESP + 0xe0]                ; 004299e7
    ADD EAX,EDX                         ; 004299ee
    FSTP float ptr [EBX + 0x570]        ; 004299f0
    LEA ESI,[EBX + EAX*0x4 + 0x28c]     ; 004299f6
    MOVSD ES:EDI,ESI                    ; 004299fd
    MOVSD ES:EDI,ESI                    ; 004299fe
    MOVSD ES:EDI,ESI                    ; 004299ff
    PUSH EBX                            ; 00429a00
    LEA ESI,[ESP + 0xd8]                ; 00429a01
    LEA EDI,[ESP + 0x48]                ; 00429a08
    CALL core_chain.cpp_FUN_00429420    ; 00429a0c
        ;   XREF to: 00429420 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_00429420()
    LEA ESI,[ESP + 0xd8]                ; 00429a11
    ADD ESP,0x4                         ; 00429a18
    MOVSD ES:EDI,ESI                    ; 00429a1b
    MOVSD ES:EDI,ESI                    ; 00429a1c
    MOVSD ES:EDI,ESI                    ; 00429a1d
    MOV EDX,dword ptr [EBX + 0x158]     ; 00429a1e
    DEC EDX                             ; 00429a24
    LEA EAX,[EDX*0x8 + 0x0]             ; 00429a25
    ADD EAX,EDX                         ; 00429a2c
    SHL EAX,0x2                         ; 00429a2e
    LEA EDX,[EBX + 0x28c]               ; 00429a31
    ADD EDX,EAX                         ; 00429a37
    LEA EAX,[ESP + 0x44]                ; 00429a39
    CMP EDX,EAX                         ; 00429a3d
    JZ 0x00429a55                       ; 00429a3f
        ;   XREF to: 00429a55 (CONDITIONAL_JUMP)  ; LAB_00429a55
    MOV EAX,dword ptr [ESP + 0x44]      ; 00429a41
    MOV dword ptr [EDX],EAX             ; 00429a45
    MOV EAX,dword ptr [ESP + 0x48]      ; 00429a47
    MOV dword ptr [EDX + 0x4],EAX       ; 00429a4b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00429a4e
    MOV dword ptr [EDX + 0x8],EAX       ; 00429a52
    MOV EDX,dword ptr [EBX + 0x158]     ; 00429a55
        ;   Label: LAB_00429a55
    DEC EDX                             ; 00429a5b
    LEA EAX,[EDX*0x8 + 0x0]             ; 00429a5c
    ADD EAX,EDX                         ; 00429a63
    LEA EDX,[EBX + 0x28c]               ; 00429a65
    MOV dword ptr [EDX + EAX*0x4 + 0x14],0x0 ; 00429a6b
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x14] ; 00429a73
    MOV dword ptr [EDX + EAX*0x4 + 0x10],ECX ; 00429a77
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x10] ; 00429a7b
    MOV dword ptr [EDX + EAX*0x4 + 0xc],ECX ; 00429a7f
    LEA EAX,[EBX + 0x20]                ; 00429a83
    CMP EDX,EAX                         ; 00429a86
    JNZ 0x00429c88                      ; 00429a88
        ;   XREF to: 00429c88 (CONDITIONAL_JUMP)  ; LAB_00429c88
    LEA EAX,[EBX + 0x298]               ; 00429a8e
        ;   Label: LAB_00429a8e
    MOV dword ptr [EAX + 0x8],0x0       ; 00429a94
    MOV EDX,dword ptr [EAX + 0x8]       ; 00429a9b
    MOV dword ptr [EAX + 0x4],EDX       ; 00429a9e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00429aa1
    MOV dword ptr [EAX],EDX             ; 00429aa4
    LEA EAX,[EBX + 0x28c]               ; 00429aa6
    MOV dword ptr [ESP + 0x10c],EAX     ; 00429aac
    LEA EAX,[EBX + 0x568]               ; 00429ab3
    MOV dword ptr [ESP + 0x120],EAX     ; 00429ab9
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00429ac0
    ADD EAX,0x30                        ; 00429ac7
    MOV dword ptr [ESP + 0x12c],EAX     ; 00429aca
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00429ad1
    ADD EAX,0x48                        ; 00429ad8
    MOV ESI,0x1                         ; 00429adb
    MOV dword ptr [ESP + 0x118],EAX     ; 00429ae0
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00429ae7
    MOV dword ptr [ESP + 0x128],ESI     ; 00429aee
    MOV dword ptr [ESP + 0x11c],EAX     ; 00429af5
    MOV EAX,dword ptr [EBX + 0x158]     ; 00429afc
        ;   Label: LAB_00429afc
    MOV EDI,dword ptr [ESP + 0x128]     ; 00429b02
    DEC EAX                             ; 00429b09
    CMP EAX,EDI                         ; 00429b0a
    JG 0x00429c9d                       ; 00429b0c
        ;   XREF to: 00429c9d (CONDITIONAL_JUMP)  ; LAB_00429c9d
    XOR EAX,EAX                         ; 00429b12
    MOV dword ptr [ESP + 0x124],EAX     ; 00429b14
    LEA EAX,[EBX + 0x298]               ; 00429b1b
    MOV dword ptr [ESP + 0x138],EAX     ; 00429b21
    LEA EAX,[EBX + 0x28c]               ; 00429b28
    MOV dword ptr [ESP + 0x13c],EAX     ; 00429b2e
    LEA EAX,[EBX + 0x20]                ; 00429b35
    MOV dword ptr [ESP + 0x130],EAX     ; 00429b38
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00429b3f
    ADD EAX,0x48                        ; 00429b46
    MOV dword ptr [ESP + 0x104],EAX     ; 00429b49
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00429b50
    ADD EAX,0x24                        ; 00429b57
    MOV dword ptr [ESP + 0x108],EAX     ; 00429b5a
    PUSH EBX                            ; 00429b61
        ;   Label: LAB_00429b61
    LEA ESI,[ESP + 0x54]                ; 00429b62
    LEA EDI,[ESP + 0xa8]                ; 00429b66
    CALL core_chain.cpp_FUN_00429420    ; 00429b6d
        ;   XREF to: 00429420 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_00429420()
    LEA ESI,[ESP + 0x54]                ; 00429b72
    ADD ESP,0x4                         ; 00429b76
    MOVSD ES:EDI,ESI                    ; 00429b79
    MOVSD ES:EDI,ESI                    ; 00429b7a
    MOVSD ES:EDI,ESI                    ; 00429b7b
    MOV EDX,dword ptr [EBX + 0x158]     ; 00429b7c
    DEC EDX                             ; 00429b82
    IMUL EDX,EDX,0x24                   ; 00429b83
    MOV ESI,dword ptr [ESP + 0x13c]     ; 00429b86
    LEA EAX,[ESP + 0xa4]                ; 00429b8d
    ADD EDX,ESI                         ; 00429b94
    CMP EDX,EAX                         ; 00429b96
    JZ 0x00429bb7                       ; 00429b98
        ;   XREF to: 00429bb7 (CONDITIONAL_JUMP)  ; LAB_00429bb7
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00429b9a
    MOV dword ptr [EDX],EAX             ; 00429ba1
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00429ba3
    MOV dword ptr [EDX + 0x4],EAX       ; 00429baa
    MOV EAX,dword ptr [ESP + 0xac]      ; 00429bad
    MOV dword ptr [EDX + 0x8],EAX       ; 00429bb4
    MOV EAX,dword ptr [EBX + 0x158]     ; 00429bb7
        ;   Label: LAB_00429bb7
    DEC EAX                             ; 00429bbd
    IMUL EAX,EAX,0x24                   ; 00429bbe
    MOV EDI,dword ptr [ESP + 0x13c]     ; 00429bc1
    ADD EAX,EDI                         ; 00429bc8
    MOV dword ptr [EAX + 0x14],0x0      ; 00429bca
    MOV EDX,dword ptr [ESP + 0x130]     ; 00429bd1
    MOV ECX,dword ptr [EAX + 0x14]      ; 00429bd8
    MOV dword ptr [EAX + 0x10],ECX      ; 00429bdb
    MOV ECX,dword ptr [EAX + 0x10]      ; 00429bde
    MOV dword ptr [EAX + 0xc],ECX       ; 00429be1
    CMP EDI,EDX                         ; 00429be4
    JNZ 0x00429ea7                      ; 00429be6
        ;   XREF to: 00429ea7 (CONDITIONAL_JUMP)  ; LAB_00429ea7
    MOV EAX,dword ptr [ESP + 0x138]     ; 00429bec
        ;   Label: LAB_00429bec
    MOV dword ptr [EAX + 0x8],0x0       ; 00429bf3
    MOV EDX,dword ptr [EAX + 0x8]       ; 00429bfa
    MOV dword ptr [EAX + 0x4],EDX       ; 00429bfd
    MOV EDX,dword ptr [EAX + 0x4]       ; 00429c00
    MOV dword ptr [EAX],EDX             ; 00429c03
    MOV EAX,dword ptr [ESP + 0x104]     ; 00429c05
    MOV EDI,0x1                         ; 00429c0c
    MOV dword ptr [ESP + 0x140],EAX     ; 00429c11
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00429c18
    MOV ESI,dword ptr [ESP + 0x108]     ; 00429c1f
    MOV dword ptr [ESP + 0x144],EAX     ; 00429c26
    MOV EAX,dword ptr [EBX + 0x158]     ; 00429c2d
        ;   Label: LAB_00429c2d
    DEC EAX                             ; 00429c33
    CMP EDI,EAX                         ; 00429c34
    JGE 0x00429ebe                      ; 00429c36
        ;   XREF to: 00429ebe (CONDITIONAL_JUMP)  ; LAB_00429ebe
    MOV ECX,dword ptr [ESP + 0x144]     ; 00429c3c
    PUSH ECX                            ; 00429c43
    PUSH ESI                            ; 00429c44
    PUSH EBX                            ; 00429c45
    CALL core_chain.cpp_FUN_00429660    ; 00429c46
        ;   XREF to: 00429660 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_FUN_00429660(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 00429c4b
    MOV EAX,dword ptr [ESP + 0x140]     ; 00429c4e
    PUSH EAX                            ; 00429c55
    PUSH ESI                            ; 00429c56
    PUSH EBX                            ; 00429c57
    INC EDI                             ; 00429c58
    CALL core_chain.cpp_FUN_00429660    ; 00429c59
        ;   XREF to: 00429660 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_FUN_00429660(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 00429c5e
    ADD ESI,0x24                        ; 00429c61
    MOV EDX,dword ptr [ESP + 0x140]     ; 00429c64
    MOV ECX,dword ptr [ESP + 0x144]     ; 00429c6b
    ADD EDX,0x24                        ; 00429c72
    ADD ECX,0x24                        ; 00429c75
    MOV dword ptr [ESP + 0x140],EDX     ; 00429c78
    MOV dword ptr [ESP + 0x144],ECX     ; 00429c7f
    JMP 0x00429c2d                      ; 00429c86
        ;   XREF to: 00429c2d (UNCONDITIONAL_JUMP)  ; LAB_00429c2d
    MOV ECX,dword ptr [EAX]             ; 00429c88
        ;   Label: LAB_00429c88
    MOV dword ptr [EDX],ECX             ; 00429c8a
    MOV ECX,dword ptr [EAX + 0x4]       ; 00429c8c
    MOV dword ptr [EDX + 0x4],ECX       ; 00429c8f
    MOV ECX,dword ptr [EAX + 0x8]       ; 00429c92
    MOV dword ptr [EDX + 0x8],ECX       ; 00429c95
    JMP 0x00429a8e                      ; 00429c98
        ;   XREF to: 00429a8e (UNCONDITIONAL_JUMP)  ; LAB_00429a8e
    IMUL EAX,EDI,0x24                   ; 00429c9d
        ;   Label: LAB_00429c9d
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00429ca0
    ADD EDX,EAX                         ; 00429ca7
    MOV EAX,dword ptr [ESP + 0x120]     ; 00429ca9
    FLD float ptr [EAX]                 ; 00429cb0
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00429cb2
    FMUL float ptr [EAX]                ; 00429cb9
    FSTP float ptr [EAX]                ; 00429cbb
    MOV EAX,dword ptr [ESP + 0x120]     ; 00429cbd
    FLD float ptr [EAX]                 ; 00429cc4
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00429cc6
    FMUL float ptr [EAX + 0x4]          ; 00429ccd
    FSTP float ptr [EAX + 0x4]          ; 00429cd0
    MOV EAX,dword ptr [ESP + 0x120]     ; 00429cd3
    FLD float ptr [EAX]                 ; 00429cda
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00429cdc
    FMUL float ptr [EAX + 0x8]          ; 00429ce3
    FSTP float ptr [EAX + 0x8]          ; 00429ce6
    FLD float ptr [EBX + 0x55c]         ; 00429ce9
    FMUL double ptr [0x005b7f07]        ; 00429cef | DAT_005b7f07
    FLDZ                                ; 00429cf5
    FLD1                                ; 00429cf7
    XOR ECX,ECX                         ; 00429cf9
    FLDZ                                ; 00429cfb
    MOV dword ptr [ESP + 0x60],ECX      ; 00429cfd
    FXCH ST2                            ; 00429d01
    FSUB float ptr [EBX + 0x55c]        ; 00429d03
    FXCH ST3                            ; 00429d09
    FSTP float ptr [ESP + 0x110]        ; 00429d0b
    FDIV float ptr [ESP + 0x110]        ; 00429d12
    FXCH                                ; 00429d19
    FMUL ST1                            ; 00429d1b
    FXCH ST2                            ; 00429d1d
    FST float ptr [ESP + 0x60]          ; 00429d1f
    FMULP                               ; 00429d23
    LEA ESI,[ESP + 0x8c]                ; 00429d25
    MOV dword ptr [ESP + 0x64],ECX      ; 00429d2c
    MOV dword ptr [ESP + 0x5c],ECX      ; 00429d30
    LEA EDI,[ESP + 0x20]                ; 00429d34
    MOV dword ptr [ESP + 0x134],EDX     ; 00429d38
    LEA EDX,[ESP + 0x14]                ; 00429d3f
    FXCH                                ; 00429d43
    FSTP float ptr [ESP + 0x8c]         ; 00429d45
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00429d4c
    FSTP float ptr [ESP + 0x90]         ; 00429d53
    MOV dword ptr [ESP + 0x94],EAX      ; 00429d5a
    LEA EAX,[ESP + 0x20]                ; 00429d61
    MOVSD ES:EDI,ESI                    ; 00429d65
    MOVSD ES:EDI,ESI                    ; 00429d66
    MOVSD ES:EDI,ESI                    ; 00429d67
    CMP EDX,EAX                         ; 00429d68
    JZ 0x00429d84                       ; 00429d6a
        ;   XREF to: 00429d84 (CONDITIONAL_JUMP)  ; LAB_00429d84
    MOV EAX,dword ptr [ESP + 0x20]      ; 00429d6c
    MOV dword ptr [ESP + 0x14],EAX      ; 00429d70
    MOV EAX,dword ptr [ESP + 0x24]      ; 00429d74
    MOV dword ptr [ESP + 0x18],EAX      ; 00429d78
    MOV EAX,dword ptr [ESP + 0x28]      ; 00429d7c
    MOV dword ptr [ESP + 0x1c],EAX      ; 00429d80
    FLD float ptr [EBP + 0x18]          ; 00429d84
        ;   Label: LAB_00429d84
    FLD float ptr [ESP + 0x14]          ; 00429d87
    FMUL ST1                            ; 00429d8b
    FLD float ptr [ESP + 0x18]          ; 00429d8d
    FMUL ST2                            ; 00429d91
    FLD float ptr [ESP + 0x1c]          ; 00429d93
    FMUL ST3                            ; 00429d97
    LEA EDI,[ESP + 0xc8]                ; 00429d99
    LEA ESI,[ESP + 0x8]                 ; 00429da0
    MOV EAX,dword ptr [ESP + 0x134]     ; 00429da4
    FXCH ST2                            ; 00429dab
    FSTP float ptr [ESP + 0x8]          ; 00429dad
    FSTP float ptr [ESP + 0xc]          ; 00429db1
    FSTP float ptr [ESP + 0x10]         ; 00429db5
    MOVSD ES:EDI,ESI                    ; 00429db9
    MOVSD ES:EDI,ESI                    ; 00429dba
    MOVSD ES:EDI,ESI                    ; 00429dbb
    FLD float ptr [EAX + 0xc]           ; 00429dbc
    FADD float ptr [ESP + 0xc8]         ; 00429dbf
    FST float ptr [EAX + 0xc]           ; 00429dc6
    FMUL ST1                            ; 00429dc9
    FLD float ptr [EAX + 0x14]          ; 00429dcb
    FLD float ptr [EAX + 0x10]          ; 00429dce
    FADD float ptr [ESP + 0xcc]         ; 00429dd1
    FXCH                                ; 00429dd8
    FADD float ptr [ESP + 0xd0]         ; 00429dda
    FXCH                                ; 00429de1
    FST float ptr [EAX + 0x10]          ; 00429de3
    FMUL ST3                            ; 00429de6
    FXCH                                ; 00429de8
    FST float ptr [EAX + 0x14]          ; 00429dea
    FMULP ST3                           ; 00429ded
    LEA EDI,[ESP + 0x38]                ; 00429def
    LEA ESI,[ESP + 0x68]                ; 00429df3
    FXCH                                ; 00429df7
    FSTP float ptr [ESP + 0x68]         ; 00429df9
    FSTP float ptr [ESP + 0x6c]         ; 00429dfd
    FSTP float ptr [ESP + 0x70]         ; 00429e01
    MOVSD ES:EDI,ESI                    ; 00429e05
    MOVSD ES:EDI,ESI                    ; 00429e06
    MOVSD ES:EDI,ESI                    ; 00429e07
    FLD float ptr [EAX]                 ; 00429e08
    FLD float ptr [EAX + 0x4]           ; 00429e0a
    FLD float ptr [EAX + 0x8]           ; 00429e0d
    FXCH ST2                            ; 00429e10
    FADD float ptr [ESP + 0x38]         ; 00429e12
    FXCH                                ; 00429e16
    FADD float ptr [ESP + 0x3c]         ; 00429e18
    FXCH ST2                            ; 00429e1c
    FADD float ptr [ESP + 0x40]         ; 00429e1e
    FXCH                                ; 00429e22
    FSTP float ptr [EAX]                ; 00429e24
    FXCH                                ; 00429e26
    FSTP float ptr [EAX + 0x4]          ; 00429e28
    FSTP float ptr [EAX + 0x8]          ; 00429e2b
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00429e2e
    PUSH EAX                            ; 00429e35
    MOV EDX,dword ptr [ESP + 0x138]     ; 00429e36
    PUSH EDX                            ; 00429e3d
    PUSH EBX                            ; 00429e3e
    CALL core_chain.cpp_FUN_00429660    ; 00429e3f
        ;   XREF to: 00429660 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_FUN_00429660(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 00429e44
    MOV ECX,dword ptr [ESP + 0x118]     ; 00429e47
    PUSH ECX                            ; 00429e4e
    MOV ESI,dword ptr [ESP + 0x138]     ; 00429e4f
    PUSH ESI                            ; 00429e56
    PUSH EBX                            ; 00429e57
    CALL core_chain.cpp_FUN_00429660    ; 00429e58
        ;   XREF to: 00429660 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_FUN_00429660(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 00429e5d
    MOV EDI,dword ptr [ESP + 0x12c]     ; 00429e60
    MOV EAX,dword ptr [ESP + 0x118]     ; 00429e67
    MOV EDX,dword ptr [ESP + 0x11c]     ; 00429e6e
    MOV ECX,dword ptr [ESP + 0x128]     ; 00429e75
    ADD EDI,0x24                        ; 00429e7c
    ADD EAX,0x24                        ; 00429e7f
    ADD EDX,0x24                        ; 00429e82
    INC ECX                             ; 00429e85
    MOV dword ptr [ESP + 0x12c],EDI     ; 00429e86
    MOV dword ptr [ESP + 0x118],EAX     ; 00429e8d
    MOV dword ptr [ESP + 0x11c],EDX     ; 00429e94
    MOV dword ptr [ESP + 0x128],ECX     ; 00429e9b
    JMP 0x00429afc                      ; 00429ea2
        ;   XREF to: 00429afc (UNCONDITIONAL_JUMP)  ; LAB_00429afc
    MOV EAX,EDX                         ; 00429ea7
        ;   Label: LAB_00429ea7
    MOV EDX,dword ptr [EAX]             ; 00429ea9
    MOV dword ptr [EDI],EDX             ; 00429eab
    MOV EDX,dword ptr [EAX + 0x4]       ; 00429ead
    MOV dword ptr [EDI + 0x4],EDX       ; 00429eb0
    MOV EDX,dword ptr [EAX + 0x8]       ; 00429eb3
    MOV dword ptr [EDI + 0x8],EDX       ; 00429eb6
    JMP 0x00429bec                      ; 00429eb9
        ;   XREF to: 00429bec (UNCONDITIONAL_JUMP)  ; LAB_00429bec
    PUSH EBX                            ; 00429ebe
        ;   Label: LAB_00429ebe
    LEA ESI,[ESP + 0x84]                ; 00429ebf
    LEA EDI,[ESP + 0xc0]                ; 00429ec6
    CALL core_chain.cpp_FUN_00429420    ; 00429ecd
        ;   XREF to: 00429420 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_00429420()
    LEA ESI,[ESP + 0x84]                ; 00429ed2
    ADD ESP,0x4                         ; 00429ed9
    MOVSD ES:EDI,ESI                    ; 00429edc
    MOVSD ES:EDI,ESI                    ; 00429edd
    MOVSD ES:EDI,ESI                    ; 00429ede
    MOV EAX,dword ptr [EBX + 0x158]     ; 00429edf
    DEC EAX                             ; 00429ee5
    IMUL EAX,EAX,0x24                   ; 00429ee6
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00429ee9
    ADD EDX,EAX                         ; 00429ef0
    LEA EAX,[ESP + 0xbc]                ; 00429ef2
    CMP EDX,EAX                         ; 00429ef9
    JZ 0x00429f1a                       ; 00429efb
        ;   XREF to: 00429f1a (CONDITIONAL_JUMP)  ; LAB_00429f1a
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00429efd
    MOV dword ptr [EDX],EAX             ; 00429f04
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00429f06
    MOV dword ptr [EDX + 0x4],EAX       ; 00429f0d
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00429f10
    MOV dword ptr [EDX + 0x8],EAX       ; 00429f17
    MOV EAX,dword ptr [EBX + 0x158]     ; 00429f1a
        ;   Label: LAB_00429f1a
    DEC EAX                             ; 00429f20
    IMUL EAX,EAX,0x24                   ; 00429f21
    MOV ECX,dword ptr [ESP + 0x13c]     ; 00429f24
    ADD EAX,ECX                         ; 00429f2b
    MOV dword ptr [EAX + 0x14],0x0      ; 00429f2d
    MOV ESI,dword ptr [ESP + 0x130]     ; 00429f34
    MOV EDX,dword ptr [EAX + 0x14]      ; 00429f3b
    MOV dword ptr [EAX + 0x10],EDX      ; 00429f3e
    MOV EDX,dword ptr [EAX + 0x10]      ; 00429f41
    MOV dword ptr [EAX + 0xc],EDX       ; 00429f44
    CMP ECX,ESI                         ; 00429f47
    JZ 0x00429f5d                       ; 00429f49
        ;   XREF to: 00429f5d (CONDITIONAL_JUMP)  ; LAB_00429f5d
    MOV EAX,ESI                         ; 00429f4b
    MOV EDX,dword ptr [EAX]             ; 00429f4d
    MOV dword ptr [ECX],EDX             ; 00429f4f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00429f51
    MOV dword ptr [ECX + 0x4],EDX       ; 00429f54
    MOV EDX,dword ptr [EAX + 0x8]       ; 00429f57
    MOV dword ptr [ECX + 0x8],EDX       ; 00429f5a
    MOV EAX,dword ptr [ESP + 0x138]     ; 00429f5d
        ;   Label: LAB_00429f5d
    MOV EDI,dword ptr [ESP + 0x124]     ; 00429f64
    MOV dword ptr [EAX + 0x8],0x0       ; 00429f6b
    INC EDI                             ; 00429f72
    FLD float ptr [EAX + 0x8]           ; 00429f73
    MOV dword ptr [ESP + 0x124],EDI     ; 00429f76
    FST float ptr [EAX + 0x4]           ; 00429f7d
    FSTP float ptr [EAX]                ; 00429f80
    CMP EDI,0x3                         ; 00429f82
    JL 0x00429b61                       ; 00429f85
        ;   XREF to: 00429b61 (CONDITIONAL_JUMP)  ; LAB_00429b61
    MOV EDX,dword ptr [EBX + 0x158]     ; 00429f8b
    XOR ESI,ESI                         ; 00429f91
    TEST EDX,EDX                        ; 00429f93
    JLE 0x00429fca                      ; 00429f95
        ;   XREF to: 00429fca (CONDITIONAL_JUMP)  ; LAB_00429fca
    LEA ECX,[EBX + 0x28c]               ; 00429f97
    LEA EDX,[EBX + 0x2a4]               ; 00429f9d
    IMUL EAX,ESI,0x24                   ; 00429fa3
        ;   Label: LAB_00429fa3
    ADD EAX,ECX                         ; 00429fa6
    CMP EDX,EAX                         ; 00429fa8
    JZ 0x00429fbc                       ; 00429faa
        ;   XREF to: 00429fbc (CONDITIONAL_JUMP)  ; LAB_00429fbc
    MOV EDI,dword ptr [EAX]             ; 00429fac
    MOV dword ptr [EDX],EDI             ; 00429fae
    MOV EDI,dword ptr [EAX + 0x4]       ; 00429fb0
    MOV dword ptr [EDX + 0x4],EDI       ; 00429fb3
    MOV EDI,dword ptr [EAX + 0x8]       ; 00429fb6
    MOV dword ptr [EDX + 0x8],EDI       ; 00429fb9
    INC ESI                             ; 00429fbc
        ;   Label: LAB_00429fbc
    MOV EDI,dword ptr [EBX + 0x158]     ; 00429fbd
    ADD EDX,0x24                        ; 00429fc3
    CMP ESI,EDI                         ; 00429fc6
    JL 0x00429fa3                       ; 00429fc8
        ;   XREF to: 00429fa3 (CONDITIONAL_JUMP)  ; LAB_00429fa3
    XOR EAX,EAX                         ; 00429fca
        ;   Label: LAB_00429fca
    MOV ECX,dword ptr [EBX + 0x574]     ; 00429fcc
    MOV dword ptr [ESP + 0x114],EAX     ; 00429fd2
    MOV dword ptr [ESP + 0x14c],EAX     ; 00429fd9
    TEST ECX,ECX                        ; 00429fe0
    JZ 0x0042a140                       ; 00429fe2
        ;   XREF to: 0042a140 (CONDITIONAL_JUMP)  ; LAB_0042a140
    FLD float ptr [EBX + 0x15c]         ; 00429fe8
    FMUL double ptr [0x005b7f0f]        ; 00429fee | DAT_005b7f0f
    FLD float ptr [ESP + 0x4]           ; 00429ff4
    FCOMPP                              ; 00429ff8
    FNSTSW AX                           ; 00429ffa
    SAHF                                ; 00429ffc
    JNC 0x0042a09e                      ; 00429ffd
        ;   XREF to: 0042a09e (CONDITIONAL_JUMP)  ; LAB_0042a09e
    LEA EDX,[EBX + 0x2b0]               ; 0042a003
    XOR ESI,ESI                         ; 0042a009
    XOR ECX,ECX                         ; 0042a00b
    MOV dword ptr [ESP],ESI             ; 0042a00d
    MOV EAX,dword ptr [EBX + 0x158]     ; 0042a010
        ;   Label: LAB_0042a010
    DEC EAX                             ; 0042a016
    CMP ECX,EAX                         ; 0042a017
    JGE 0x0042a07d                      ; 0042a019
        ;   XREF to: 0042a07d (CONDITIONAL_JUMP)  ; LAB_0042a07d
    FLD float ptr [EDX + -0x24]         ; 0042a01b
    FLD float ptr [EDX + -0x20]         ; 0042a01e
    FLD float ptr [EDX + -0x1c]         ; 0042a021
    LEA EDI,[ESP + 0xec]                ; 0042a024
    LEA ESI,[ESP + 0x74]                ; 0042a02b
    FXCH ST2                            ; 0042a02f
    FSUB float ptr [EDX]                ; 0042a031
    FXCH                                ; 0042a033
    FSUB float ptr [EDX + 0x4]          ; 0042a035
    FXCH ST2                            ; 0042a038
    FSUB float ptr [EDX + 0x8]          ; 0042a03a
    FXCH                                ; 0042a03d
    FSTP float ptr [ESP + 0x74]         ; 0042a03f
    FXCH                                ; 0042a043
    FSTP float ptr [ESP + 0x78]         ; 0042a045
    FSTP float ptr [ESP + 0x7c]         ; 0042a049
    MOVSD ES:EDI,ESI                    ; 0042a04d
    MOVSD ES:EDI,ESI                    ; 0042a04e
    MOVSD ES:EDI,ESI                    ; 0042a04f
    FLD float ptr [ESP + 0xf0]          ; 0042a050
    FMUL ST0                            ; 0042a057
    FLD float ptr [ESP + 0xec]          ; 0042a059
    FMUL ST0                            ; 0042a060
    FADDP                               ; 0042a062
    FLD float ptr [ESP + 0xf4]          ; 0042a064
    FMUL ST0                            ; 0042a06b
    FADDP                               ; 0042a06d
    FSQRT                               ; 0042a06f
    ADD EDX,0x24                        ; 0042a071
    FADD float ptr [ESP]                ; 0042a074
    INC ECX                             ; 0042a077
    FSTP float ptr [ESP]                ; 0042a078
    JMP 0x0042a010                      ; 0042a07b
        ;   XREF to: 0042a010 (UNCONDITIONAL_JUMP)  ; LAB_0042a010
    FLD float ptr [EBX + 0x15c]         ; 0042a07d
        ;   Label: LAB_0042a07d
    FMUL double ptr [0x005b7f0f]        ; 0042a083 | DAT_005b7f0f
    FLD float ptr [ESP]                 ; 0042a089
    FCOMPP                              ; 0042a08c
    FNSTSW AX                           ; 0042a08e
    SAHF                                ; 0042a090
    JBE 0x0042a09e                      ; 0042a091
        ;   XREF to: 0042a09e (CONDITIONAL_JUMP)  ; LAB_0042a09e
    MOV dword ptr [ESP + 0x14c],0x1     ; 0042a093
    MOV EDX,dword ptr [EBX + 0x158]     ; 0042a09e
        ;   Label: LAB_0042a09e
    FLD float ptr [ESP + 0xe0]          ; 0042a0a4
    DEC EDX                             ; 0042a0ab
    FLD float ptr [ESP + 0xe4]          ; 0042a0ac
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042a0b3
    FLD float ptr [ESP + 0xe8]          ; 0042a0ba
    ADD EAX,EDX                         ; 0042a0c1
    LEA EDX,[EBX + 0x28c]               ; 0042a0c3
    LEA EDI,[ESP + 0x98]                ; 0042a0c9
    LEA ESI,[ESP + 0xb0]                ; 0042a0d0
    FXCH ST2                            ; 0042a0d7
    FSUB float ptr [EDX + EAX*0x4]      ; 0042a0d9
    FXCH                                ; 0042a0dc
    FSUB float ptr [EDX + EAX*0x4 + 0x4] ; 0042a0de
    FXCH ST2                            ; 0042a0e2
    FSUB float ptr [EDX + EAX*0x4 + 0x8] ; 0042a0e4
    FXCH                                ; 0042a0e8
    FSTP float ptr [ESP + 0xb0]         ; 0042a0ea
    FXCH                                ; 0042a0f1
    FSTP float ptr [ESP + 0xb4]         ; 0042a0f3
    FSTP float ptr [ESP + 0xb8]         ; 0042a0fa
    MOVSD ES:EDI,ESI                    ; 0042a101
    MOVSD ES:EDI,ESI                    ; 0042a102
    MOVSD ES:EDI,ESI                    ; 0042a103
    FLD float ptr [ESP + 0x9c]          ; 0042a104
    FMUL ST0                            ; 0042a10b
    FLD float ptr [ESP + 0x98]          ; 0042a10d
    FMUL ST0                            ; 0042a114
    FADDP                               ; 0042a116
    FLD float ptr [ESP + 0xa0]          ; 0042a118
    FMUL ST0                            ; 0042a11f
    FADDP                               ; 0042a121
    FSQRT                               ; 0042a123
    FLD float ptr [EBP + 0x18]          ; 0042a125
    FMUL double ptr [0x005b7f17]        ; 0042a128 | DAT_005b7f17
    FCOMPP                              ; 0042a12e
    FNSTSW AX                           ; 0042a130
    SAHF                                ; 0042a132
    JNC 0x0042a140                      ; 0042a133
        ;   XREF to: 0042a140 (CONDITIONAL_JUMP)  ; LAB_0042a140
    MOV dword ptr [ESP + 0x114],0x1     ; 0042a135
    CMP dword ptr [ESP + 0x14c],0x0     ; 0042a140
        ;   Label: LAB_0042a140
    JZ 0x0042a175                       ; 0042a148
        ;   XREF to: 0042a175 (CONDITIONAL_JUMP)  ; LAB_0042a175
    CMP byte ptr [EBX + 0x1b4],0x0      ; 0042a14a
    JZ 0x0042a175                       ; 0042a151
        ;   XREF to: 0042a175 (CONDITIONAL_JUMP)  ; LAB_0042a175
    MOV ECX,dword ptr [EBX + 0x280]     ; 0042a153
    PUSH ECX                            ; 0042a159
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0042a15a
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0042a15f
    MOV ESI,dword ptr [EBX + 0x218]     ; 0042a162
    PUSH ESI                            ; 0042a168
    CALL sound_sndmain.cpp_FUN_00556700 ; 0042a169
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0042a16e
    TEST EAX,EAX                        ; 0042a171
    JZ 0x0042a1a9                       ; 0042a173
        ;   XREF to: 0042a1a9 (CONDITIONAL_JUMP)  ; LAB_0042a1a9
    FLD float ptr [EBX + 0x284]         ; 0042a175
        ;   Label: LAB_0042a175
    FSUB float ptr [EBP + 0x18]         ; 0042a17b
    MOV EAX,dword ptr [ESP + 0x114]     ; 0042a17e
    FSTP float ptr [EBX + 0x284]        ; 0042a185
    TEST EAX,EAX                        ; 0042a18b
    JNZ 0x0042a1e4                      ; 0042a18d
        ;   XREF to: 0042a1e4 (CONDITIONAL_JUMP)  ; LAB_0042a1e4
    FLD float ptr [EBX + 0x284]         ; 0042a18f
    FLDZ                                ; 0042a195
    FCOMPP                              ; 0042a197
    FNSTSW AX                           ; 0042a199
    SAHF                                ; 0042a19b
    JA 0x0042a254                       ; 0042a19c
        ;   XREF to: 0042a254 (CONDITIONAL_JUMP)  ; LAB_0042a254
    MOV ESP,EBP                         ; 0042a1a2
    POP EBP                             ; 0042a1a4
    POP EDI                             ; 0042a1a5
    POP ESI                             ; 0042a1a6
    POP EBX                             ; 0042a1a7
    RET                                 ; 0042a1a8
    MOV EDX,dword ptr [EBX + 0x158]     ; 0042a1a9
        ;   Label: LAB_0042a1a9
    DEC EDX                             ; 0042a1af
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042a1b0
    ADD EAX,EDX                         ; 0042a1b7
    SHL EAX,0x2                         ; 0042a1b9
    LEA EDX,[EBX + 0x28c]               ; 0042a1bc
    ADD EAX,EDX                         ; 0042a1c2
    PUSH EAX                            ; 0042a1c4
    LEA EAX,[EBX + 0x1b4]               ; 0042a1c5
    PUSH EAX                            ; 0042a1cb
    PUSH EBX                            ; 0042a1cc
    MOV EDI,dword ptr [0x006045f8]      ; 0042a1cd | DAT_006045f8
    PUSH EDI                            ; 0042a1d3
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00 ; 0042a1d4
        ;   XREF to: 00560a00 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0042a1d9
    MOV dword ptr [EBX + 0x280],EAX     ; 0042a1dc
    JMP 0x0042a175                      ; 0042a1e2
        ;   XREF to: 0042a175 (UNCONDITIONAL_JUMP)  ; LAB_0042a175
    MOV ECX,dword ptr [EBX + 0x218]     ; 0042a1e4
        ;   Label: LAB_0042a1e4
    PUSH ECX                            ; 0042a1ea
    CALL sound_sndmain.cpp_FUN_00556700 ; 0042a1eb
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0042a1f0
    TEST EAX,EAX                        ; 0042a1f3
    JNZ 0x0042a243                      ; 0042a1f5
        ;   XREF to: 0042a243 (CONDITIONAL_JUMP)  ; LAB_0042a243
    MOV ESI,dword ptr [EBX + 0x280]     ; 0042a1f7
    PUSH ESI                            ; 0042a1fd
    CALL sound_sndmain.cpp_FUN_00556700 ; 0042a1fe
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0042a203
    TEST EAX,EAX                        ; 0042a206
    JNZ 0x0042a243                      ; 0042a208
        ;   XREF to: 0042a243 (CONDITIONAL_JUMP)  ; LAB_0042a243
    MOV EDX,dword ptr [EBX + 0x158]     ; 0042a20a
    DEC EDX                             ; 0042a210
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042a211
    ADD EDX,EAX                         ; 0042a218
    SHL EDX,0x2                         ; 0042a21a
    LEA EAX,[EBX + 0x28c]               ; 0042a21d
    ADD EAX,EDX                         ; 0042a223
    PUSH EAX                            ; 0042a225
    LEA EAX,[EBX + 0x21c]               ; 0042a226
    PUSH EAX                            ; 0042a22c
    PUSH EBX                            ; 0042a22d
    MOV EDI,dword ptr [0x006045f8]      ; 0042a22e | DAT_006045f8
    PUSH EDI                            ; 0042a234
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00 ; 0042a235
        ;   XREF to: 00560a00 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0042a23a
    MOV dword ptr [EBX + 0x280],EAX     ; 0042a23d
    MOV dword ptr [EBX + 0x284],0x3f000000 ; 0042a243
        ;   Label: LAB_0042a243
    MOV ESP,EBP                         ; 0042a24d
    POP EBP                             ; 0042a24f
    POP EDI                             ; 0042a250
    POP ESI                             ; 0042a251
    POP EBX                             ; 0042a252
    RET                                 ; 0042a253
    MOV EDX,dword ptr [EBX + 0x280]     ; 0042a254
        ;   Label: LAB_0042a254
    PUSH EDX                            ; 0042a25a
    MOV dword ptr [EBX + 0x284],0x0     ; 0042a25b
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0042a265
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0042a26a
    MOV ESP,EBP                         ; 0042a26d
    POP EBP                             ; 0042a26f
    POP EDI                             ; 0042a270
    POP ESI                             ; 0042a271
    POP EBX                             ; 0042a272
    RET                                 ; 0042a273

