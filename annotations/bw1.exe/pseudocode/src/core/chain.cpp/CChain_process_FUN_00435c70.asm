; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_CChain_process_FUN_00435c70(CChain *this_ptr,float delta_time)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005d6023
;   undefined4 DAT_005d6027
;   undefined4 DAT_005d602f
;   undefined4 DAT_005d6037
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_chain.cpp_CChain_constrainSegmentDistance_FUN_004359e0
;   core_chain.cpp_FUN_004357a0
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435c70
        ;   Label: core_chain.cpp_CChain_process_FUN_00435c70
    PUSH ESI                            ; 00435c71
    PUSH EDI                            ; 00435c72
    PUSH EBP                            ; 00435c73
    MOV EBP,ESP                         ; 00435c74
    SUB ESP,0x154                       ; 00435c76
    AND ESP,0xfffffff8                  ; 00435c7c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00435c7f
    FLD float ptr [EBX + 0x56c]         ; 00435c82
    FCOMP float ptr [0x005d6023]        ; 00435c88 | DAT_005d6023
    FNSTSW AX                           ; 00435c8e
    SAHF                                ; 00435c90
    JC 0x00435d23                       ; 00435c91
        ;   XREF to: 00435d23 (CONDITIONAL_JUMP)  ; LAB_00435d23
    CMP dword ptr [EBX + 0x574],0x0     ; 00435c97
        ;   Label: LAB_00435c97
    JZ 0x00435d50                       ; 00435c9e
        ;   XREF to: 00435d50 (CONDITIONAL_JUMP)  ; LAB_00435d50
    XOR ECX,ECX                         ; 00435ca4
    LEA EDX,[EBX + 0x2b0]               ; 00435ca6
    MOV dword ptr [ESP + 0x4],ECX       ; 00435cac
    MOV EAX,dword ptr [EBX + 0x158]     ; 00435cb0
        ;   Label: LAB_00435cb0
    DEC EAX                             ; 00435cb6
    CMP ECX,EAX                         ; 00435cb7
    JGE 0x00435d50                      ; 00435cb9
        ;   XREF to: 00435d50 (CONDITIONAL_JUMP)  ; LAB_00435d50
    FLD float ptr [EDX + -0x24]         ; 00435cbf
    FLD float ptr [EDX + -0x20]         ; 00435cc2
    FLD float ptr [EDX + -0x1c]         ; 00435cc5
    LEA EDI,[ESP + 0x2c]                ; 00435cc8
    LEA ESI,[ESP + 0xf8]                ; 00435ccc
    FXCH ST2                            ; 00435cd3
    FSUB float ptr [EDX]                ; 00435cd5
    FXCH                                ; 00435cd7
    FSUB float ptr [EDX + 0x4]          ; 00435cd9
    FXCH ST2                            ; 00435cdc
    FSUB float ptr [EDX + 0x8]          ; 00435cde
    FXCH                                ; 00435ce1
    FSTP float ptr [ESP + 0xf8]         ; 00435ce3
    FXCH                                ; 00435cea
    FSTP float ptr [ESP + 0xfc]         ; 00435cec
    FSTP float ptr [ESP + 0x100]        ; 00435cf3
    MOVSD ES:EDI,ESI                    ; 00435cfa
    MOVSD ES:EDI,ESI                    ; 00435cfb
    MOVSD ES:EDI,ESI                    ; 00435cfc
    FLD float ptr [ESP + 0x30]          ; 00435cfd
    FMUL ST0                            ; 00435d01
    FLD float ptr [ESP + 0x2c]          ; 00435d03
    FMUL ST0                            ; 00435d07
    FADDP                               ; 00435d09
    FLD float ptr [ESP + 0x34]          ; 00435d0b
    FMUL ST0                            ; 00435d0f
    FADDP                               ; 00435d11
    FSQRT                               ; 00435d13
    ADD EDX,0x24                        ; 00435d15
    FADD float ptr [ESP + 0x4]          ; 00435d18
    INC ECX                             ; 00435d1c
    FSTP float ptr [ESP + 0x4]          ; 00435d1d
    JMP 0x00435cb0                      ; 00435d21
        ;   XREF to: 00435cb0 (UNCONDITIONAL_JUMP)  ; LAB_00435cb0
    PUSH 0x0                            ; 00435d23
        ;   Label: LAB_00435d23
    MOV EAX,dword ptr [EBX + 0x154]     ; 00435d25
    PUSH 0x3dcccccd                     ; 00435d2b
    PUSH EBX                            ; 00435d30
    CALL dword ptr [EAX + 0x40]         ; 00435d31
    MOV dword ptr [ESP + 0x15c],EAX     ; 00435d34
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00435d3b
    MOV dword ptr [EBX + 0x56c],EAX     ; 00435d42
    ADD ESP,0xc                         ; 00435d48
    JMP 0x00435c97                      ; 00435d4b
        ;   XREF to: 00435c97 (UNCONDITIONAL_JUMP)  ; LAB_00435c97
    FLD float ptr [EBP + 0x18]          ; 00435d50
        ;   Label: LAB_00435d50
    FLD1                                ; 00435d53
    FDIVRP                              ; 00435d55
    MOV EAX,dword ptr [EBX + 0x158]     ; 00435d57
    LEA EDX,[EAX + -0x1]                ; 00435d5d
    LEA EAX,[EDX*0x8 + 0x0]             ; 00435d60
    LEA EDI,[ESP + 0xe0]                ; 00435d67
    ADD EAX,EDX                         ; 00435d6e
    FSTP float ptr [EBX + 0x570]        ; 00435d70
    LEA ESI,[EBX + EAX*0x4 + 0x28c]     ; 00435d76
    MOVSD ES:EDI,ESI                    ; 00435d7d
    MOVSD ES:EDI,ESI                    ; 00435d7e
    MOVSD ES:EDI,ESI                    ; 00435d7f
    PUSH EBX                            ; 00435d80
    LEA ESI,[ESP + 0xd8]                ; 00435d81
    LEA EDI,[ESP + 0x48]                ; 00435d88
    CALL core_chain.cpp_FUN_004357a0    ; 00435d8c
        ;   XREF to: 004357a0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_004357a0()
    LEA ESI,[ESP + 0xd8]                ; 00435d91
    ADD ESP,0x4                         ; 00435d98
    MOVSD ES:EDI,ESI                    ; 00435d9b
    MOVSD ES:EDI,ESI                    ; 00435d9c
    MOVSD ES:EDI,ESI                    ; 00435d9d
    MOV EDX,dword ptr [EBX + 0x158]     ; 00435d9e
    DEC EDX                             ; 00435da4
    LEA EAX,[EDX*0x8 + 0x0]             ; 00435da5
    ADD EAX,EDX                         ; 00435dac
    SHL EAX,0x2                         ; 00435dae
    LEA EDX,[EBX + 0x28c]               ; 00435db1
    ADD EDX,EAX                         ; 00435db7
    LEA EAX,[ESP + 0x44]                ; 00435db9
    CMP EDX,EAX                         ; 00435dbd
    JZ 0x00435dd5                       ; 00435dbf
        ;   XREF to: 00435dd5 (CONDITIONAL_JUMP)  ; LAB_00435dd5
    MOV EAX,dword ptr [ESP + 0x44]      ; 00435dc1
    MOV dword ptr [EDX],EAX             ; 00435dc5
    MOV EAX,dword ptr [ESP + 0x48]      ; 00435dc7
    MOV dword ptr [EDX + 0x4],EAX       ; 00435dcb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00435dce
    MOV dword ptr [EDX + 0x8],EAX       ; 00435dd2
    MOV EDX,dword ptr [EBX + 0x158]     ; 00435dd5
        ;   Label: LAB_00435dd5
    DEC EDX                             ; 00435ddb
    LEA EAX,[EDX*0x8 + 0x0]             ; 00435ddc
    ADD EAX,EDX                         ; 00435de3
    LEA EDX,[EBX + 0x28c]               ; 00435de5
    MOV dword ptr [EDX + EAX*0x4 + 0x14],0x0 ; 00435deb
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x14] ; 00435df3
    MOV dword ptr [EDX + EAX*0x4 + 0x10],ECX ; 00435df7
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x10] ; 00435dfb
    MOV dword ptr [EDX + EAX*0x4 + 0xc],ECX ; 00435dff
    LEA EAX,[EBX + 0x20]                ; 00435e03
    CMP EDX,EAX                         ; 00435e06
    JNZ 0x00436008                      ; 00435e08
        ;   XREF to: 00436008 (CONDITIONAL_JUMP)  ; LAB_00436008
    LEA EAX,[EBX + 0x298]               ; 00435e0e
        ;   Label: LAB_00435e0e
    MOV dword ptr [EAX + 0x8],0x0       ; 00435e14
    MOV EDX,dword ptr [EAX + 0x8]       ; 00435e1b
    MOV dword ptr [EAX + 0x4],EDX       ; 00435e1e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00435e21
    MOV dword ptr [EAX],EDX             ; 00435e24
    LEA EAX,[EBX + 0x28c]               ; 00435e26
    MOV dword ptr [ESP + 0x10c],EAX     ; 00435e2c
    LEA EAX,[EBX + 0x568]               ; 00435e33
    MOV dword ptr [ESP + 0x120],EAX     ; 00435e39
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00435e40
    ADD EAX,0x30                        ; 00435e47
    MOV dword ptr [ESP + 0x12c],EAX     ; 00435e4a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00435e51
    ADD EAX,0x48                        ; 00435e58
    MOV ESI,0x1                         ; 00435e5b
    MOV dword ptr [ESP + 0x118],EAX     ; 00435e60
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00435e67
    MOV dword ptr [ESP + 0x128],ESI     ; 00435e6e
    MOV dword ptr [ESP + 0x11c],EAX     ; 00435e75
    MOV EAX,dword ptr [EBX + 0x158]     ; 00435e7c
        ;   Label: LAB_00435e7c
    MOV EDI,dword ptr [ESP + 0x128]     ; 00435e82
    DEC EAX                             ; 00435e89
    CMP EAX,EDI                         ; 00435e8a
    JG 0x0043601d                       ; 00435e8c
        ;   XREF to: 0043601d (CONDITIONAL_JUMP)  ; LAB_0043601d
    XOR EAX,EAX                         ; 00435e92
    MOV dword ptr [ESP + 0x124],EAX     ; 00435e94
    LEA EAX,[EBX + 0x298]               ; 00435e9b
    MOV dword ptr [ESP + 0x138],EAX     ; 00435ea1
    LEA EAX,[EBX + 0x28c]               ; 00435ea8
    MOV dword ptr [ESP + 0x13c],EAX     ; 00435eae
    LEA EAX,[EBX + 0x20]                ; 00435eb5
    MOV dword ptr [ESP + 0x130],EAX     ; 00435eb8
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00435ebf
    ADD EAX,0x48                        ; 00435ec6
    MOV dword ptr [ESP + 0x104],EAX     ; 00435ec9
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00435ed0
    ADD EAX,0x24                        ; 00435ed7
    MOV dword ptr [ESP + 0x108],EAX     ; 00435eda
    PUSH EBX                            ; 00435ee1
        ;   Label: LAB_00435ee1
    LEA ESI,[ESP + 0x54]                ; 00435ee2
    LEA EDI,[ESP + 0xa8]                ; 00435ee6
    CALL core_chain.cpp_FUN_004357a0    ; 00435eed
        ;   XREF to: 004357a0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_004357a0()
    LEA ESI,[ESP + 0x54]                ; 00435ef2
    ADD ESP,0x4                         ; 00435ef6
    MOVSD ES:EDI,ESI                    ; 00435ef9
    MOVSD ES:EDI,ESI                    ; 00435efa
    MOVSD ES:EDI,ESI                    ; 00435efb
    MOV EDX,dword ptr [EBX + 0x158]     ; 00435efc
    DEC EDX                             ; 00435f02
    IMUL EDX,EDX,0x24                   ; 00435f03
    MOV ESI,dword ptr [ESP + 0x13c]     ; 00435f06
    LEA EAX,[ESP + 0xa4]                ; 00435f0d
    ADD EDX,ESI                         ; 00435f14
    CMP EDX,EAX                         ; 00435f16
    JZ 0x00435f37                       ; 00435f18
        ;   XREF to: 00435f37 (CONDITIONAL_JUMP)  ; LAB_00435f37
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00435f1a
    MOV dword ptr [EDX],EAX             ; 00435f21
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00435f23
    MOV dword ptr [EDX + 0x4],EAX       ; 00435f2a
    MOV EAX,dword ptr [ESP + 0xac]      ; 00435f2d
    MOV dword ptr [EDX + 0x8],EAX       ; 00435f34
    MOV EAX,dword ptr [EBX + 0x158]     ; 00435f37
        ;   Label: LAB_00435f37
    DEC EAX                             ; 00435f3d
    IMUL EAX,EAX,0x24                   ; 00435f3e
    MOV EDI,dword ptr [ESP + 0x13c]     ; 00435f41
    ADD EAX,EDI                         ; 00435f48
    MOV dword ptr [EAX + 0x14],0x0      ; 00435f4a
    MOV EDX,dword ptr [ESP + 0x130]     ; 00435f51
    MOV ECX,dword ptr [EAX + 0x14]      ; 00435f58
    MOV dword ptr [EAX + 0x10],ECX      ; 00435f5b
    MOV ECX,dword ptr [EAX + 0x10]      ; 00435f5e
    MOV dword ptr [EAX + 0xc],ECX       ; 00435f61
    CMP EDI,EDX                         ; 00435f64
    JNZ 0x00436227                      ; 00435f66
        ;   XREF to: 00436227 (CONDITIONAL_JUMP)  ; LAB_00436227
    MOV EAX,dword ptr [ESP + 0x138]     ; 00435f6c
        ;   Label: LAB_00435f6c
    MOV dword ptr [EAX + 0x8],0x0       ; 00435f73
    MOV EDX,dword ptr [EAX + 0x8]       ; 00435f7a
    MOV dword ptr [EAX + 0x4],EDX       ; 00435f7d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00435f80
    MOV dword ptr [EAX],EDX             ; 00435f83
    MOV EAX,dword ptr [ESP + 0x104]     ; 00435f85
    MOV EDI,0x1                         ; 00435f8c
    MOV dword ptr [ESP + 0x140],EAX     ; 00435f91
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00435f98
    MOV ESI,dword ptr [ESP + 0x108]     ; 00435f9f
    MOV dword ptr [ESP + 0x144],EAX     ; 00435fa6
    MOV EAX,dword ptr [EBX + 0x158]     ; 00435fad
        ;   Label: LAB_00435fad
    DEC EAX                             ; 00435fb3
    CMP EDI,EAX                         ; 00435fb4
    JGE 0x0043623e                      ; 00435fb6
        ;   XREF to: 0043623e (CONDITIONAL_JUMP)  ; LAB_0043623e
    MOV ECX,dword ptr [ESP + 0x144]     ; 00435fbc
    PUSH ECX                            ; 00435fc3
    PUSH ESI                            ; 00435fc4
    PUSH EBX                            ; 00435fc5
    CALL core_chain.cpp_CChain_constrainSegmentDistance_FUN_004359e0 ; 00435fc6
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_CChain_constrainSegmentDistance_FUN_004359e0(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 00435fcb
    MOV EAX,dword ptr [ESP + 0x140]     ; 00435fce
    PUSH EAX                            ; 00435fd5
    PUSH ESI                            ; 00435fd6
    PUSH EBX                            ; 00435fd7
    INC EDI                             ; 00435fd8
    CALL core_chain.cpp_CChain_constrainSegmentDistance_FUN_004359e0 ; 00435fd9
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_CChain_constrainSegmentDistance_FUN_004359e0(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 00435fde
    ADD ESI,0x24                        ; 00435fe1
    MOV EDX,dword ptr [ESP + 0x140]     ; 00435fe4
    MOV ECX,dword ptr [ESP + 0x144]     ; 00435feb
    ADD EDX,0x24                        ; 00435ff2
    ADD ECX,0x24                        ; 00435ff5
    MOV dword ptr [ESP + 0x140],EDX     ; 00435ff8
    MOV dword ptr [ESP + 0x144],ECX     ; 00435fff
    JMP 0x00435fad                      ; 00436006
        ;   XREF to: 00435fad (UNCONDITIONAL_JUMP)  ; LAB_00435fad
    MOV ECX,dword ptr [EAX]             ; 00436008
        ;   Label: LAB_00436008
    MOV dword ptr [EDX],ECX             ; 0043600a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043600c
    MOV dword ptr [EDX + 0x4],ECX       ; 0043600f
    MOV ECX,dword ptr [EAX + 0x8]       ; 00436012
    MOV dword ptr [EDX + 0x8],ECX       ; 00436015
    JMP 0x00435e0e                      ; 00436018
        ;   XREF to: 00435e0e (UNCONDITIONAL_JUMP)  ; LAB_00435e0e
    IMUL EAX,EDI,0x24                   ; 0043601d
        ;   Label: LAB_0043601d
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00436020
    ADD EDX,EAX                         ; 00436027
    MOV EAX,dword ptr [ESP + 0x120]     ; 00436029
    FLD float ptr [EAX]                 ; 00436030
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00436032
    FMUL float ptr [EAX]                ; 00436039
    FSTP float ptr [EAX]                ; 0043603b
    MOV EAX,dword ptr [ESP + 0x120]     ; 0043603d
    FLD float ptr [EAX]                 ; 00436044
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00436046
    FMUL float ptr [EAX + 0x4]          ; 0043604d
    FSTP float ptr [EAX + 0x4]          ; 00436050
    MOV EAX,dword ptr [ESP + 0x120]     ; 00436053
    FLD float ptr [EAX]                 ; 0043605a
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0043605c
    FMUL float ptr [EAX + 0x8]          ; 00436063
    FSTP float ptr [EAX + 0x8]          ; 00436066
    FLD float ptr [EBX + 0x55c]         ; 00436069
    FMUL double ptr [0x005d6027]        ; 0043606f | DAT_005d6027
    FLDZ                                ; 00436075
    FLD1                                ; 00436077
    XOR ECX,ECX                         ; 00436079
    FLDZ                                ; 0043607b
    MOV dword ptr [ESP + 0x60],ECX      ; 0043607d
    FXCH ST2                            ; 00436081
    FSUB float ptr [EBX + 0x55c]        ; 00436083
    FXCH ST3                            ; 00436089
    FSTP float ptr [ESP + 0x110]        ; 0043608b
    FDIV float ptr [ESP + 0x110]        ; 00436092
    FXCH                                ; 00436099
    FMUL ST1                            ; 0043609b
    FXCH ST2                            ; 0043609d
    FST float ptr [ESP + 0x60]          ; 0043609f
    FMULP                               ; 004360a3
    LEA ESI,[ESP + 0x8c]                ; 004360a5
    MOV dword ptr [ESP + 0x64],ECX      ; 004360ac
    MOV dword ptr [ESP + 0x5c],ECX      ; 004360b0
    LEA EDI,[ESP + 0x20]                ; 004360b4
    MOV dword ptr [ESP + 0x134],EDX     ; 004360b8
    LEA EDX,[ESP + 0x14]                ; 004360bf
    FXCH                                ; 004360c3
    FSTP float ptr [ESP + 0x8c]         ; 004360c5
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004360cc
    FSTP float ptr [ESP + 0x90]         ; 004360d3
    MOV dword ptr [ESP + 0x94],EAX      ; 004360da
    LEA EAX,[ESP + 0x20]                ; 004360e1
    MOVSD ES:EDI,ESI                    ; 004360e5
    MOVSD ES:EDI,ESI                    ; 004360e6
    MOVSD ES:EDI,ESI                    ; 004360e7
    CMP EDX,EAX                         ; 004360e8
    JZ 0x00436104                       ; 004360ea
        ;   XREF to: 00436104 (CONDITIONAL_JUMP)  ; LAB_00436104
    MOV EAX,dword ptr [ESP + 0x20]      ; 004360ec
    MOV dword ptr [ESP + 0x14],EAX      ; 004360f0
    MOV EAX,dword ptr [ESP + 0x24]      ; 004360f4
    MOV dword ptr [ESP + 0x18],EAX      ; 004360f8
    MOV EAX,dword ptr [ESP + 0x28]      ; 004360fc
    MOV dword ptr [ESP + 0x1c],EAX      ; 00436100
    FLD float ptr [EBP + 0x18]          ; 00436104
        ;   Label: LAB_00436104
    FLD float ptr [ESP + 0x14]          ; 00436107
    FMUL ST1                            ; 0043610b
    FLD float ptr [ESP + 0x18]          ; 0043610d
    FMUL ST2                            ; 00436111
    FLD float ptr [ESP + 0x1c]          ; 00436113
    FMUL ST3                            ; 00436117
    LEA EDI,[ESP + 0xc8]                ; 00436119
    LEA ESI,[ESP + 0x8]                 ; 00436120
    MOV EAX,dword ptr [ESP + 0x134]     ; 00436124
    FXCH ST2                            ; 0043612b
    FSTP float ptr [ESP + 0x8]          ; 0043612d
    FSTP float ptr [ESP + 0xc]          ; 00436131
    FSTP float ptr [ESP + 0x10]         ; 00436135
    MOVSD ES:EDI,ESI                    ; 00436139
    MOVSD ES:EDI,ESI                    ; 0043613a
    MOVSD ES:EDI,ESI                    ; 0043613b
    FLD float ptr [EAX + 0xc]           ; 0043613c
    FADD float ptr [ESP + 0xc8]         ; 0043613f
    FST float ptr [EAX + 0xc]           ; 00436146
    FMUL ST1                            ; 00436149
    FLD float ptr [EAX + 0x14]          ; 0043614b
    FLD float ptr [EAX + 0x10]          ; 0043614e
    FADD float ptr [ESP + 0xcc]         ; 00436151
    FXCH                                ; 00436158
    FADD float ptr [ESP + 0xd0]         ; 0043615a
    FXCH                                ; 00436161
    FST float ptr [EAX + 0x10]          ; 00436163
    FMUL ST3                            ; 00436166
    FXCH                                ; 00436168
    FST float ptr [EAX + 0x14]          ; 0043616a
    FMULP ST3                           ; 0043616d
    LEA EDI,[ESP + 0x38]                ; 0043616f
    LEA ESI,[ESP + 0x68]                ; 00436173
    FXCH                                ; 00436177
    FSTP float ptr [ESP + 0x68]         ; 00436179
    FSTP float ptr [ESP + 0x6c]         ; 0043617d
    FSTP float ptr [ESP + 0x70]         ; 00436181
    MOVSD ES:EDI,ESI                    ; 00436185
    MOVSD ES:EDI,ESI                    ; 00436186
    MOVSD ES:EDI,ESI                    ; 00436187
    FLD float ptr [EAX]                 ; 00436188
    FLD float ptr [EAX + 0x4]           ; 0043618a
    FLD float ptr [EAX + 0x8]           ; 0043618d
    FXCH ST2                            ; 00436190
    FADD float ptr [ESP + 0x38]         ; 00436192
    FXCH                                ; 00436196
    FADD float ptr [ESP + 0x3c]         ; 00436198
    FXCH ST2                            ; 0043619c
    FADD float ptr [ESP + 0x40]         ; 0043619e
    FXCH                                ; 004361a2
    FSTP float ptr [EAX]                ; 004361a4
    FXCH                                ; 004361a6
    FSTP float ptr [EAX + 0x4]          ; 004361a8
    FSTP float ptr [EAX + 0x8]          ; 004361ab
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004361ae
    PUSH EAX                            ; 004361b5
    MOV EDX,dword ptr [ESP + 0x138]     ; 004361b6
    PUSH EDX                            ; 004361bd
    PUSH EBX                            ; 004361be
    CALL core_chain.cpp_CChain_constrainSegmentDistance_FUN_004359e0 ; 004361bf
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_CChain_constrainSegmentDistance_FUN_004359e0(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 004361c4
    MOV ECX,dword ptr [ESP + 0x118]     ; 004361c7
    PUSH ECX                            ; 004361ce
    MOV ESI,dword ptr [ESP + 0x138]     ; 004361cf
    PUSH ESI                            ; 004361d6
    PUSH EBX                            ; 004361d7
    CALL core_chain.cpp_CChain_constrainSegmentDistance_FUN_004359e0 ; 004361d8
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_CChain_constrainSegmentDistance_FUN_004359e0(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 004361dd
    MOV EDI,dword ptr [ESP + 0x12c]     ; 004361e0
    MOV EAX,dword ptr [ESP + 0x118]     ; 004361e7
    MOV EDX,dword ptr [ESP + 0x11c]     ; 004361ee
    MOV ECX,dword ptr [ESP + 0x128]     ; 004361f5
    ADD EDI,0x24                        ; 004361fc
    ADD EAX,0x24                        ; 004361ff
    ADD EDX,0x24                        ; 00436202
    INC ECX                             ; 00436205
    MOV dword ptr [ESP + 0x12c],EDI     ; 00436206
    MOV dword ptr [ESP + 0x118],EAX     ; 0043620d
    MOV dword ptr [ESP + 0x11c],EDX     ; 00436214
    MOV dword ptr [ESP + 0x128],ECX     ; 0043621b
    JMP 0x00435e7c                      ; 00436222
        ;   XREF to: 00435e7c (UNCONDITIONAL_JUMP)  ; LAB_00435e7c
    MOV EAX,EDX                         ; 00436227
        ;   Label: LAB_00436227
    MOV EDX,dword ptr [EAX]             ; 00436229
    MOV dword ptr [EDI],EDX             ; 0043622b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043622d
    MOV dword ptr [EDI + 0x4],EDX       ; 00436230
    MOV EDX,dword ptr [EAX + 0x8]       ; 00436233
    MOV dword ptr [EDI + 0x8],EDX       ; 00436236
    JMP 0x00435f6c                      ; 00436239
        ;   XREF to: 00435f6c (UNCONDITIONAL_JUMP)  ; LAB_00435f6c
    PUSH EBX                            ; 0043623e
        ;   Label: LAB_0043623e
    LEA ESI,[ESP + 0x84]                ; 0043623f
    LEA EDI,[ESP + 0xc0]                ; 00436246
    CALL core_chain.cpp_FUN_004357a0    ; 0043624d
        ;   XREF to: 004357a0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_004357a0()
    LEA ESI,[ESP + 0x84]                ; 00436252
    ADD ESP,0x4                         ; 00436259
    MOVSD ES:EDI,ESI                    ; 0043625c
    MOVSD ES:EDI,ESI                    ; 0043625d
    MOVSD ES:EDI,ESI                    ; 0043625e
    MOV EAX,dword ptr [EBX + 0x158]     ; 0043625f
    DEC EAX                             ; 00436265
    IMUL EAX,EAX,0x24                   ; 00436266
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00436269
    ADD EDX,EAX                         ; 00436270
    LEA EAX,[ESP + 0xbc]                ; 00436272
    CMP EDX,EAX                         ; 00436279
    JZ 0x0043629a                       ; 0043627b
        ;   XREF to: 0043629a (CONDITIONAL_JUMP)  ; LAB_0043629a
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0043627d
    MOV dword ptr [EDX],EAX             ; 00436284
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00436286
    MOV dword ptr [EDX + 0x4],EAX       ; 0043628d
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00436290
    MOV dword ptr [EDX + 0x8],EAX       ; 00436297
    MOV EAX,dword ptr [EBX + 0x158]     ; 0043629a
        ;   Label: LAB_0043629a
    DEC EAX                             ; 004362a0
    IMUL EAX,EAX,0x24                   ; 004362a1
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004362a4
    ADD EAX,ECX                         ; 004362ab
    MOV dword ptr [EAX + 0x14],0x0      ; 004362ad
    MOV ESI,dword ptr [ESP + 0x130]     ; 004362b4
    MOV EDX,dword ptr [EAX + 0x14]      ; 004362bb
    MOV dword ptr [EAX + 0x10],EDX      ; 004362be
    MOV EDX,dword ptr [EAX + 0x10]      ; 004362c1
    MOV dword ptr [EAX + 0xc],EDX       ; 004362c4
    CMP ECX,ESI                         ; 004362c7
    JZ 0x004362dd                       ; 004362c9
        ;   XREF to: 004362dd (CONDITIONAL_JUMP)  ; LAB_004362dd
    MOV EAX,ESI                         ; 004362cb
    MOV EDX,dword ptr [EAX]             ; 004362cd
    MOV dword ptr [ECX],EDX             ; 004362cf
    MOV EDX,dword ptr [EAX + 0x4]       ; 004362d1
    MOV dword ptr [ECX + 0x4],EDX       ; 004362d4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004362d7
    MOV dword ptr [ECX + 0x8],EDX       ; 004362da
    MOV EAX,dword ptr [ESP + 0x138]     ; 004362dd
        ;   Label: LAB_004362dd
    MOV EDI,dword ptr [ESP + 0x124]     ; 004362e4
    MOV dword ptr [EAX + 0x8],0x0       ; 004362eb
    INC EDI                             ; 004362f2
    FLD float ptr [EAX + 0x8]           ; 004362f3
    MOV dword ptr [ESP + 0x124],EDI     ; 004362f6
    FST float ptr [EAX + 0x4]           ; 004362fd
    FSTP float ptr [EAX]                ; 00436300
    CMP EDI,0x3                         ; 00436302
    JL 0x00435ee1                       ; 00436305
        ;   XREF to: 00435ee1 (CONDITIONAL_JUMP)  ; LAB_00435ee1
    MOV EDX,dword ptr [EBX + 0x158]     ; 0043630b
    XOR ESI,ESI                         ; 00436311
    TEST EDX,EDX                        ; 00436313
    JLE 0x0043634a                      ; 00436315
        ;   XREF to: 0043634a (CONDITIONAL_JUMP)  ; LAB_0043634a
    LEA ECX,[EBX + 0x28c]               ; 00436317
    LEA EDX,[EBX + 0x2a4]               ; 0043631d
    IMUL EAX,ESI,0x24                   ; 00436323
        ;   Label: LAB_00436323
    ADD EAX,ECX                         ; 00436326
    CMP EDX,EAX                         ; 00436328
    JZ 0x0043633c                       ; 0043632a
        ;   XREF to: 0043633c (CONDITIONAL_JUMP)  ; LAB_0043633c
    MOV EDI,dword ptr [EAX]             ; 0043632c
    MOV dword ptr [EDX],EDI             ; 0043632e
    MOV EDI,dword ptr [EAX + 0x4]       ; 00436330
    MOV dword ptr [EDX + 0x4],EDI       ; 00436333
    MOV EDI,dword ptr [EAX + 0x8]       ; 00436336
    MOV dword ptr [EDX + 0x8],EDI       ; 00436339
    INC ESI                             ; 0043633c
        ;   Label: LAB_0043633c
    MOV EDI,dword ptr [EBX + 0x158]     ; 0043633d
    ADD EDX,0x24                        ; 00436343
    CMP ESI,EDI                         ; 00436346
    JL 0x00436323                       ; 00436348
        ;   XREF to: 00436323 (CONDITIONAL_JUMP)  ; LAB_00436323
    XOR EAX,EAX                         ; 0043634a
        ;   Label: LAB_0043634a
    MOV ECX,dword ptr [EBX + 0x574]     ; 0043634c
    MOV dword ptr [ESP + 0x114],EAX     ; 00436352
    MOV dword ptr [ESP + 0x14c],EAX     ; 00436359
    TEST ECX,ECX                        ; 00436360
    JZ 0x004364c0                       ; 00436362
        ;   XREF to: 004364c0 (CONDITIONAL_JUMP)  ; LAB_004364c0
    FLD float ptr [EBX + 0x15c]         ; 00436368
    FMUL double ptr [0x005d602f]        ; 0043636e | DAT_005d602f
    FLD float ptr [ESP + 0x4]           ; 00436374
    FCOMPP                              ; 00436378
    FNSTSW AX                           ; 0043637a
    SAHF                                ; 0043637c
    JNC 0x0043641e                      ; 0043637d
        ;   XREF to: 0043641e (CONDITIONAL_JUMP)  ; LAB_0043641e
    LEA EDX,[EBX + 0x2b0]               ; 00436383
    XOR ESI,ESI                         ; 00436389
    XOR ECX,ECX                         ; 0043638b
    MOV dword ptr [ESP],ESI             ; 0043638d
    MOV EAX,dword ptr [EBX + 0x158]     ; 00436390
        ;   Label: LAB_00436390
    DEC EAX                             ; 00436396
    CMP ECX,EAX                         ; 00436397
    JGE 0x004363fd                      ; 00436399
        ;   XREF to: 004363fd (CONDITIONAL_JUMP)  ; LAB_004363fd
    FLD float ptr [EDX + -0x24]         ; 0043639b
    FLD float ptr [EDX + -0x20]         ; 0043639e
    FLD float ptr [EDX + -0x1c]         ; 004363a1
    LEA EDI,[ESP + 0xec]                ; 004363a4
    LEA ESI,[ESP + 0x74]                ; 004363ab
    FXCH ST2                            ; 004363af
    FSUB float ptr [EDX]                ; 004363b1
    FXCH                                ; 004363b3
    FSUB float ptr [EDX + 0x4]          ; 004363b5
    FXCH ST2                            ; 004363b8
    FSUB float ptr [EDX + 0x8]          ; 004363ba
    FXCH                                ; 004363bd
    FSTP float ptr [ESP + 0x74]         ; 004363bf
    FXCH                                ; 004363c3
    FSTP float ptr [ESP + 0x78]         ; 004363c5
    FSTP float ptr [ESP + 0x7c]         ; 004363c9
    MOVSD ES:EDI,ESI                    ; 004363cd
    MOVSD ES:EDI,ESI                    ; 004363ce
    MOVSD ES:EDI,ESI                    ; 004363cf
    FLD float ptr [ESP + 0xf0]          ; 004363d0
    FMUL ST0                            ; 004363d7
    FLD float ptr [ESP + 0xec]          ; 004363d9
    FMUL ST0                            ; 004363e0
    FADDP                               ; 004363e2
    FLD float ptr [ESP + 0xf4]          ; 004363e4
    FMUL ST0                            ; 004363eb
    FADDP                               ; 004363ed
    FSQRT                               ; 004363ef
    ADD EDX,0x24                        ; 004363f1
    FADD float ptr [ESP]                ; 004363f4
    INC ECX                             ; 004363f7
    FSTP float ptr [ESP]                ; 004363f8
    JMP 0x00436390                      ; 004363fb
        ;   XREF to: 00436390 (UNCONDITIONAL_JUMP)  ; LAB_00436390
    FLD float ptr [EBX + 0x15c]         ; 004363fd
        ;   Label: LAB_004363fd
    FMUL double ptr [0x005d602f]        ; 00436403 | DAT_005d602f
    FLD float ptr [ESP]                 ; 00436409
    FCOMPP                              ; 0043640c
    FNSTSW AX                           ; 0043640e
    SAHF                                ; 00436410
    JBE 0x0043641e                      ; 00436411
        ;   XREF to: 0043641e (CONDITIONAL_JUMP)  ; LAB_0043641e
    MOV dword ptr [ESP + 0x14c],0x1     ; 00436413
    MOV EDX,dword ptr [EBX + 0x158]     ; 0043641e
        ;   Label: LAB_0043641e
    FLD float ptr [ESP + 0xe0]          ; 00436424
    DEC EDX                             ; 0043642b
    FLD float ptr [ESP + 0xe4]          ; 0043642c
    LEA EAX,[EDX*0x8 + 0x0]             ; 00436433
    FLD float ptr [ESP + 0xe8]          ; 0043643a
    ADD EAX,EDX                         ; 00436441
    LEA EDX,[EBX + 0x28c]               ; 00436443
    LEA EDI,[ESP + 0x98]                ; 00436449
    LEA ESI,[ESP + 0xb0]                ; 00436450
    FXCH ST2                            ; 00436457
    FSUB float ptr [EDX + EAX*0x4]      ; 00436459
    FXCH                                ; 0043645c
    FSUB float ptr [EDX + EAX*0x4 + 0x4] ; 0043645e
    FXCH ST2                            ; 00436462
    FSUB float ptr [EDX + EAX*0x4 + 0x8] ; 00436464
    FXCH                                ; 00436468
    FSTP float ptr [ESP + 0xb0]         ; 0043646a
    FXCH                                ; 00436471
    FSTP float ptr [ESP + 0xb4]         ; 00436473
    FSTP float ptr [ESP + 0xb8]         ; 0043647a
    MOVSD ES:EDI,ESI                    ; 00436481
    MOVSD ES:EDI,ESI                    ; 00436482
    MOVSD ES:EDI,ESI                    ; 00436483
    FLD float ptr [ESP + 0x9c]          ; 00436484
    FMUL ST0                            ; 0043648b
    FLD float ptr [ESP + 0x98]          ; 0043648d
    FMUL ST0                            ; 00436494
    FADDP                               ; 00436496
    FLD float ptr [ESP + 0xa0]          ; 00436498
    FMUL ST0                            ; 0043649f
    FADDP                               ; 004364a1
    FSQRT                               ; 004364a3
    FLD float ptr [EBP + 0x18]          ; 004364a5
    FMUL double ptr [0x005d6037]        ; 004364a8 | DAT_005d6037
    FCOMPP                              ; 004364ae
    FNSTSW AX                           ; 004364b0
    SAHF                                ; 004364b2
    JNC 0x004364c0                      ; 004364b3
        ;   XREF to: 004364c0 (CONDITIONAL_JUMP)  ; LAB_004364c0
    MOV dword ptr [ESP + 0x114],0x1     ; 004364b5
    CMP dword ptr [ESP + 0x14c],0x0     ; 004364c0
        ;   Label: LAB_004364c0
    JZ 0x004364f5                       ; 004364c8
        ;   XREF to: 004364f5 (CONDITIONAL_JUMP)  ; LAB_004364f5
    CMP byte ptr [EBX + 0x1b4],0x0      ; 004364ca
    JZ 0x004364f5                       ; 004364d1
        ;   XREF to: 004364f5 (CONDITIONAL_JUMP)  ; LAB_004364f5
    MOV ECX,dword ptr [EBX + 0x280]     ; 004364d3
    PUSH ECX                            ; 004364d9
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004364da
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004364df
    MOV ESI,dword ptr [EBX + 0x218]     ; 004364e2
    PUSH ESI                            ; 004364e8
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004364e9
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004364ee
    TEST EAX,EAX                        ; 004364f1
    JZ 0x00436529                       ; 004364f3
        ;   XREF to: 00436529 (CONDITIONAL_JUMP)  ; LAB_00436529
    FLD float ptr [EBX + 0x284]         ; 004364f5
        ;   Label: LAB_004364f5
    FSUB float ptr [EBP + 0x18]         ; 004364fb
    MOV EAX,dword ptr [ESP + 0x114]     ; 004364fe
    FSTP float ptr [EBX + 0x284]        ; 00436505
    TEST EAX,EAX                        ; 0043650b
    JNZ 0x00436564                      ; 0043650d
        ;   XREF to: 00436564 (CONDITIONAL_JUMP)  ; LAB_00436564
    FLD float ptr [EBX + 0x284]         ; 0043650f
    FLDZ                                ; 00436515
    FCOMPP                              ; 00436517
    FNSTSW AX                           ; 00436519
    SAHF                                ; 0043651b
    JA 0x004365d4                       ; 0043651c
        ;   XREF to: 004365d4 (CONDITIONAL_JUMP)  ; LAB_004365d4
    MOV ESP,EBP                         ; 00436522
    POP EBP                             ; 00436524
    POP EDI                             ; 00436525
    POP ESI                             ; 00436526
    POP EBX                             ; 00436527
    RET                                 ; 00436528
    MOV EDX,dword ptr [EBX + 0x158]     ; 00436529
        ;   Label: LAB_00436529
    DEC EDX                             ; 0043652f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00436530
    ADD EAX,EDX                         ; 00436537
    SHL EAX,0x2                         ; 00436539
    LEA EDX,[EBX + 0x28c]               ; 0043653c
    ADD EAX,EDX                         ; 00436542
    PUSH EAX                            ; 00436544
    LEA EAX,[EBX + 0x1b4]               ; 00436545
    PUSH EAX                            ; 0043654b
    PUSH EBX                            ; 0043654c
    MOV EDI,dword ptr [0x006236b8]      ; 0043654d | DAT_006236b8
    PUSH EDI                            ; 00436553
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0 ; 00436554
        ;   XREF to: 0057d8d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00436559
    MOV dword ptr [EBX + 0x280],EAX     ; 0043655c
    JMP 0x004364f5                      ; 00436562
        ;   XREF to: 004364f5 (UNCONDITIONAL_JUMP)  ; LAB_004364f5
    MOV ECX,dword ptr [EBX + 0x218]     ; 00436564
        ;   Label: LAB_00436564
    PUSH ECX                            ; 0043656a
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0043656b
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00436570
    TEST EAX,EAX                        ; 00436573
    JNZ 0x004365c3                      ; 00436575
        ;   XREF to: 004365c3 (CONDITIONAL_JUMP)  ; LAB_004365c3
    MOV ESI,dword ptr [EBX + 0x280]     ; 00436577
    PUSH ESI                            ; 0043657d
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0043657e
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00436583
    TEST EAX,EAX                        ; 00436586
    JNZ 0x004365c3                      ; 00436588
        ;   XREF to: 004365c3 (CONDITIONAL_JUMP)  ; LAB_004365c3
    MOV EDX,dword ptr [EBX + 0x158]     ; 0043658a
    DEC EDX                             ; 00436590
    LEA EAX,[EDX*0x8 + 0x0]             ; 00436591
    ADD EDX,EAX                         ; 00436598
    SHL EDX,0x2                         ; 0043659a
    LEA EAX,[EBX + 0x28c]               ; 0043659d
    ADD EAX,EDX                         ; 004365a3
    PUSH EAX                            ; 004365a5
    LEA EAX,[EBX + 0x21c]               ; 004365a6
    PUSH EAX                            ; 004365ac
    PUSH EBX                            ; 004365ad
    MOV EDI,dword ptr [0x006236b8]      ; 004365ae | DAT_006236b8
    PUSH EDI                            ; 004365b4
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0 ; 004365b5
        ;   XREF to: 0057d8d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 004365ba
    MOV dword ptr [EBX + 0x280],EAX     ; 004365bd
    MOV dword ptr [EBX + 0x284],0x3f000000 ; 004365c3
        ;   Label: LAB_004365c3
    MOV ESP,EBP                         ; 004365cd
    POP EBP                             ; 004365cf
    POP EDI                             ; 004365d0
    POP ESI                             ; 004365d1
    POP EBX                             ; 004365d2
    RET                                 ; 004365d3
    MOV EDX,dword ptr [EBX + 0x280]     ; 004365d4
        ;   Label: LAB_004365d4
    PUSH EDX                            ; 004365da
    MOV dword ptr [EBX + 0x284],0x0     ; 004365db
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004365e5
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004365ea
    MOV ESP,EBP                         ; 004365ed
    POP EBP                             ; 004365ef
    POP EDI                             ; 004365f0
    POP ESI                             ; 004365f1
    POP EBX                             ; 004365f2
    RET                                 ; 004365f3

