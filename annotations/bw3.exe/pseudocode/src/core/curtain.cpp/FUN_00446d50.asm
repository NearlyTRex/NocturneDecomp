; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_FUN_00446d50(CCurtain *this_ptr,SCurtainVertex *vertex)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; SCurtainVertex * Stack[0x8]:4   vertex
;
; XREF[1]:
;   core_curtain.cpp_FUN_00447830 at 0044803f
;
; Referenced Globals:
;   undefined4 DAT_005b9a69
;   undefined4 DAT_005b9a71
;   undefined4 DAT_007f8fcc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446d50
        ;   Label: core_curtain.cpp_FUN_00446d50
    PUSH ESI                            ; 00446d51
    PUSH EDI                            ; 00446d52
    PUSH EBP                            ; 00446d53
    MOV EBP,ESP                         ; 00446d54
    SUB ESP,0x1f0                       ; 00446d56
    AND ESP,0xfffffff8                  ; 00446d5c
    MOV ECX,dword ptr [EBP + 0x18]      ; 00446d5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446d62
    CMP dword ptr [EAX + 0x65b2c],0x0   ; 00446d65
    JZ 0x00446da4                       ; 00446d6c
        ;   XREF to: 00446da4 (CONDITIONAL_JUMP)  ; LAB_00446da4
    FLD float ptr [ECX + 0x24]          ; 00446d6e
    FCOMP float ptr [EAX + 0x65b28]     ; 00446d71
    FNSTSW AX                           ; 00446d77
    SAHF                                ; 00446d79
    JNC 0x00446da4                      ; 00446d7a
        ;   XREF to: 00446da4 (CONDITIONAL_JUMP)  ; LAB_00446da4
    LEA EAX,[ECX + 0x2c]                ; 00446d7c
    MOV dword ptr [EAX + 0x8],0x0       ; 00446d7f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00446d86
    MOV dword ptr [EAX + 0x4],EDX       ; 00446d89
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446d8c
    MOV dword ptr [EAX],EDX             ; 00446d8f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446d91
    MOV EDX,dword ptr [EAX + 0x65b28]   ; 00446d94
    MOV dword ptr [ECX + 0x24],EDX      ; 00446d9a
    MOV dword ptr [ECX + 0x6c],0x1      ; 00446d9d
    XOR EBX,EBX                         ; 00446da4
        ;   Label: LAB_00446da4
    MOV ESI,dword ptr [0x007f8fcc]      ; 00446da6 | DAT_007f8fcc
    MOV dword ptr [ESP + 0x1e4],EBX     ; 00446dac
    TEST ESI,ESI                        ; 00446db3
    JLE 0x00446f2e                      ; 00446db5
        ;   XREF to: 00446f2e (CONDITIONAL_JUMP)  ; LAB_00446f2e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446dbb
    LEA EDX,[ECX + 0x20]                ; 00446dbe
    ADD EAX,0x1c728                     ; 00446dc1
    XOR ESI,ESI                         ; 00446dc6
    MOV dword ptr [ESP + 0x1d4],EAX     ; 00446dc8
    MOV EAX,0x7f9480                    ; 00446dcf
    LEA EBX,[ECX + 0x2c]                ; 00446dd4
    ADD EAX,0x1c                        ; 00446dd7
    MOV dword ptr [ESP + 0x1d8],ESI     ; 00446dda
    MOV dword ptr [ESP + 0x1cc],EAX     ; 00446de1
    LEA EDI,[ESP + 0x94]                ; 00446de8
        ;   Label: LAB_00446de8
    LEA ESI,[ECX + 0x2c]                ; 00446def
    MOVSD ES:EDI,ESI                    ; 00446df2
    MOVSD ES:EDI,ESI                    ; 00446df3
    MOVSD ES:EDI,ESI                    ; 00446df4
    FLD float ptr [ESP + 0x98]          ; 00446df5
    FMUL ST0                            ; 00446dfc
    FLD float ptr [ESP + 0x94]          ; 00446dfe
    FMUL ST0                            ; 00446e05
    FADDP                               ; 00446e07
    FLD float ptr [ESP + 0x9c]          ; 00446e09
    FMUL ST0                            ; 00446e10
    FADDP                               ; 00446e12
    FSQRT                               ; 00446e14
    FLDZ                                ; 00446e16
    FXCH                                ; 00446e18
    FSTP float ptr [ESP + 0x19c]        ; 00446e1a
    FCOMP float ptr [ESP + 0x19c]       ; 00446e21
    FNSTSW AX                           ; 00446e28
    SAHF                                ; 00446e2a
    FLD float ptr [ECX + 0x30]          ; 00446e2b
    FCOMP double ptr [0x005b9a69]       ; 00446e2e | DAT_005b9a69
    FNSTSW AX                           ; 00446e34
    SAHF                                ; 00446e36
    JNC 0x00447357                      ; 00446e37
        ;   XREF to: 00447357 (CONDITIONAL_JUMP)  ; LAB_00447357
    IMUL ESI,dword ptr [ESP + 0x1e4],0x28 ; 00446e3d
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00446e45
    FLD float ptr [EAX + 0x7f8fd4]      ; 00446e4c
    FADD float ptr [ESI + 0x7f9498]     ; 00446e52
    FLD float ptr [ECX + 0x24]          ; 00446e58
    FXCH                                ; 00446e5b
    FSTP float ptr [ESP + 0x1e8]        ; 00446e5d
    FCOMP float ptr [ESP + 0x1e8]       ; 00446e64
    FNSTSW AX                           ; 00446e6b
    SAHF                                ; 00446e6d
    JNC 0x00447357                      ; 00446e6e
        ;   XREF to: 00447357 (CONDITIONAL_JUMP)  ; LAB_00447357
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00446e74
    FLD float ptr [ECX + 0x24]          ; 00446e7b
    FCOMP float ptr [EAX + 0x7f8fd4]    ; 00446e7e
    FNSTSW AX                           ; 00446e84
    SAHF                                ; 00446e86
    JBE 0x00447357                      ; 00446e87
        ;   XREF to: 00447357 (CONDITIONAL_JUMP)  ; LAB_00447357
    FLD float ptr [ECX + 0x20]          ; 00446e8d
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00446e90
    FLD float ptr [ECX + 0x28]          ; 00446e97
    FXCH                                ; 00446e9a
    FSUB float ptr [EAX + 0x7f8fd0]     ; 00446e9c
    FXCH                                ; 00446ea2
    FSUB float ptr [EAX + 0x7f8fd8]     ; 00446ea4
    FXCH                                ; 00446eaa
    FST float ptr [ESP + 0x1c]          ; 00446eac
    FMUL float ptr [ESP + 0x1c]         ; 00446eb0
    FXCH                                ; 00446eb4
    FST float ptr [ESP + 0x24]          ; 00446eb6
    FMUL float ptr [ESP + 0x24]         ; 00446eba
    XOR EAX,EAX                         ; 00446ebe
    FADDP                               ; 00446ec0
    MOV dword ptr [ESP + 0x20],EAX      ; 00446ec2
    FSQRT                               ; 00446ec6
    FCOMP float ptr [ESI + 0x7f949c]    ; 00446ec8
    FNSTSW AX                           ; 00446ece
    SAHF                                ; 00446ed0
    JNC 0x00447357                      ; 00446ed1
        ;   XREF to: 00447357 (CONDITIONAL_JUMP)  ; LAB_00447357
    MOV dword ptr [ECX + 0x30],0x0      ; 00446ed7
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 00446ede
    MOV dword ptr [ECX + 0x6c],0x1      ; 00446ee5
    MOV dword ptr [ECX + 0x24],EAX      ; 00446eec
    MOV EDI,dword ptr [ESP + 0x1d8]     ; 00446eef
        ;   Label: LAB_00446eef
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00446ef6
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 00446efd
    ADD EDI,0xc                         ; 00446f04
    ADD EAX,0x28                        ; 00446f07
    INC ESI                             ; 00446f0a
    MOV dword ptr [ESP + 0x1d8],EDI     ; 00446f0b
    MOV dword ptr [ESP + 0x1cc],EAX     ; 00446f12
    MOV EDI,dword ptr [0x007f8fcc]      ; 00446f19 | DAT_007f8fcc
    MOV dword ptr [ESP + 0x1e4],ESI     ; 00446f1f
    CMP ESI,EDI                         ; 00446f26
    JL 0x00446de8                       ; 00446f28
        ;   XREF to: 00446de8 (CONDITIONAL_JUMP)  ; LAB_00446de8
    XOR EAX,EAX                         ; 00446f2e
        ;   Label: LAB_00446f2e
    MOV EDX,dword ptr [ECX + 0x44]      ; 00446f30
    MOV dword ptr [ESP + 0x1ec],EAX     ; 00446f33
    TEST EDX,EDX                        ; 00446f3a
    JLE 0x00447350                      ; 00446f3c
        ;   XREF to: 00447350 (CONDITIONAL_JUMP)  ; LAB_00447350
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446f42
    ADD EAX,0x65b1c                     ; 00446f45
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00446f4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446f51
    ADD EAX,0x1c728                     ; 00446f54
    LEA EDX,[ECX + 0x20]                ; 00446f59
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00446f5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446f63
    LEA EBX,[ECX + 0x2c]                ; 00446f66
    ADD EAX,0x208                       ; 00446f69
    MOV dword ptr [ESP + 0x1bc],ECX     ; 00446f6e
    MOV dword ptr [ESP + 0x1dc],EAX     ; 00446f75
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00446f7c
        ;   Label: LAB_00446f7c
    IMUL EAX,dword ptr [EAX + 0x48],0x74 ; 00446f83
    FLD float ptr [EDX]                 ; 00446f87
    FLD float ptr [EDX + 0x4]           ; 00446f89
    MOV ESI,dword ptr [ESP + 0x1dc]     ; 00446f8c
    FLD float ptr [EDX + 0x8]           ; 00446f93
    ADD EAX,ESI                         ; 00446f96
    LEA EDI,[ESP + 0xb8]                ; 00446f98
    LEA ESI,[ESP + 0x58]                ; 00446f9f
    FXCH ST2                            ; 00446fa3
    FSUB float ptr [EAX + 0x20]         ; 00446fa5
    FXCH                                ; 00446fa8
    FSUB float ptr [EAX + 0x24]         ; 00446faa
    FXCH ST2                            ; 00446fad
    FSUB float ptr [EAX + 0x28]         ; 00446faf
    FXCH                                ; 00446fb2
    FSTP float ptr [ESP + 0x58]         ; 00446fb4
    FXCH                                ; 00446fb8
    FSTP float ptr [ESP + 0x5c]         ; 00446fba
    FSTP float ptr [ESP + 0x60]         ; 00446fbe
    MOVSD ES:EDI,ESI                    ; 00446fc2
    MOVSD ES:EDI,ESI                    ; 00446fc3
    MOVSD ES:EDI,ESI                    ; 00446fc4
    LEA EAX,[ESP + 0xb8]                ; 00446fc5
    LEA ESI,[ESP + 0x16c]               ; 00446fcc
    CMP ESI,EAX                         ; 00446fd3
    JNZ 0x004477f8                      ; 00446fd5
        ;   XREF to: 004477f8 (CONDITIONAL_JUMP)  ; LAB_004477f8
    FLD float ptr [ESP + 0x170]         ; 00446fdb
        ;   Label: LAB_00446fdb
    FMUL ST0                            ; 00446fe2
    FLD float ptr [ESP + 0x16c]         ; 00446fe4
    FMUL ST0                            ; 00446feb
    FADDP                               ; 00446fed
    FLD float ptr [ESP + 0x174]         ; 00446fef
    FMUL ST0                            ; 00446ff6
    FADDP                               ; 00446ff8
    FSQRT                               ; 00446ffa
    FSTP float ptr [ESP + 0x1c0]        ; 00446ffc
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00447003
    MOV dword ptr [ESP],EAX             ; 0044700a
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0044700d
    MOV EAX,dword ptr [EAX + 0x58]      ; 00447014
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00447017
    FLD float ptr [ESP + 0x1c0]         ; 0044701e
    FCOMP float ptr [ESP + 0x1c4]       ; 00447025
    FNSTSW AX                           ; 0044702c
    SAHF                                ; 0044702e
    JBE 0x00447170                      ; 0044702f
        ;   XREF to: 00447170 (CONDITIONAL_JUMP)  ; LAB_00447170
    FLD float ptr [ESP + 0x1c0]         ; 00447035
    FLD ST0                             ; 0044703c
    FSUB float ptr [ESP + 0x1c4]        ; 0044703e
    FLD float ptr [ESP + 0x16c]         ; 00447045
    FXCH                                ; 0044704c
    FSTP float ptr [ESP + 0x1b0]        ; 0044704e
    FMUL float ptr [ESP + 0x1b0]        ; 00447055
    FLD float ptr [ESP + 0x170]         ; 0044705c
    FMUL float ptr [ESP + 0x1b0]        ; 00447063
    FLD float ptr [ESP + 0x174]         ; 0044706a
    FMUL float ptr [ESP + 0x1b0]        ; 00447071
    LEA EDI,[ESP + 0x40]                ; 00447078
    LEA ESI,[ESP + 0x160]               ; 0044707c
    FXCH ST2                            ; 00447083
    FSTP float ptr [ESP + 0x160]        ; 00447085
    FSTP float ptr [ESP + 0x164]        ; 0044708c
    FSTP float ptr [ESP + 0x168]        ; 00447093
    MOVSD ES:EDI,ESI                    ; 0044709a
    MOVSD ES:EDI,ESI                    ; 0044709b
    MOVSD ES:EDI,ESI                    ; 0044709c
    FLD1                                ; 0044709d
    FLD float ptr [ESP + 0x40]          ; 0044709f
    FXCH                                ; 004470a3
    FDIVRP ST2,ST0                      ; 004470a5
    FMUL ST1                            ; 004470a7
    FLD float ptr [ESP + 0x44]          ; 004470a9
    FMUL ST2                            ; 004470ad
    FLD float ptr [ESP + 0x48]          ; 004470af
    FMULP ST3                           ; 004470b3
    LEA EDI,[ESP + 0x70]                ; 004470b5
    LEA ESI,[ESP + 0xe8]                ; 004470b9
    FXCH                                ; 004470c0
    FSTP float ptr [ESP + 0xe8]         ; 004470c2
    FSTP float ptr [ESP + 0xec]         ; 004470c9
    FSTP float ptr [ESP + 0xf0]         ; 004470d0
    MOVSD ES:EDI,ESI                    ; 004470d7
    MOVSD ES:EDI,ESI                    ; 004470d8
    MOVSD ES:EDI,ESI                    ; 004470d9
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 004470da
    FLD float ptr [ESP + 0x70]          ; 004470e1
    FLD float ptr [EDX]                 ; 004470e5
    FLD float ptr [EDX + 0x4]           ; 004470e7
    FLD float ptr [EDX + 0x8]           ; 004470ea
    FXCH ST2                            ; 004470ed
    FSUB float ptr [ESP + 0x70]         ; 004470ef
    FXCH                                ; 004470f3
    FSUB float ptr [ESP + 0x74]         ; 004470f5
    FXCH ST2                            ; 004470f9
    FSUB float ptr [ESP + 0x78]         ; 004470fb
    FXCH                                ; 004470ff
    FSTP float ptr [EDX]                ; 00447101
    FXCH                                ; 00447103
    FSTP float ptr [EDX + 0x4]          ; 00447105
    FSTP float ptr [EDX + 0x8]          ; 00447108
    FMUL float ptr [EAX]                ; 0044710b
    FLD float ptr [ESP + 0x74]          ; 0044710d
    FMUL float ptr [EAX]                ; 00447111
    FLD float ptr [ESP + 0x78]          ; 00447113
    FMUL float ptr [EAX]                ; 00447117
    LEA EDI,[ESP + 0x184]               ; 00447119
    LEA ESI,[ESP + 0xd0]                ; 00447120
    FXCH ST2                            ; 00447127
    FSTP float ptr [ESP + 0xd0]         ; 00447129
    FSTP float ptr [ESP + 0xd4]         ; 00447130
    FSTP float ptr [ESP + 0xd8]         ; 00447137
    MOVSD ES:EDI,ESI                    ; 0044713e
    MOVSD ES:EDI,ESI                    ; 0044713f
    MOVSD ES:EDI,ESI                    ; 00447140
    FLD float ptr [EBX]                 ; 00447141
    FLD float ptr [EBX + 0x4]           ; 00447143
    FLD float ptr [EBX + 0x8]           ; 00447146
    FXCH ST2                            ; 00447149
    FSUB float ptr [ESP + 0x184]        ; 0044714b
    FXCH                                ; 00447152
    FSUB float ptr [ESP + 0x188]        ; 00447154
    FXCH ST2                            ; 0044715b
    FSUB float ptr [ESP + 0x18c]        ; 0044715d
    FXCH                                ; 00447164
    FSTP float ptr [EBX]                ; 00447166
    FXCH                                ; 00447168
    FSTP float ptr [EBX + 0x4]          ; 0044716a
    FSTP float ptr [EBX + 0x8]          ; 0044716d
    FLD float ptr [ESP]                 ; 00447170
        ;   Label: LAB_00447170
    FCOMP float ptr [ESP + 0x1c4]       ; 00447173
    FNSTSW AX                           ; 0044717a
    SAHF                                ; 0044717c
    JNC 0x00447325                      ; 0044717d
        ;   XREF to: 00447325 (CONDITIONAL_JUMP)  ; LAB_00447325
    FLD float ptr [ESP]                 ; 00447183
    FCOMP double ptr [0x005b9a71]       ; 00447186 | DAT_005b9a71
    FNSTSW AX                           ; 0044718c
    SAHF                                ; 0044718e
    JBE 0x00447325                      ; 0044718f
        ;   XREF to: 00447325 (CONDITIONAL_JUMP)  ; LAB_00447325
    FLD float ptr [ESP]                 ; 00447195
    FLD float ptr [ESP + 0x1c4]         ; 00447198
    FSUB ST0,ST1                        ; 0044719f
    FLD float ptr [ESP + 0x16c]         ; 004471a1
    FXCH                                ; 004471a8
    FSTP float ptr [ESP + 0x1b4]        ; 004471aa
    FMUL float ptr [ESP + 0x1b4]        ; 004471b1
    FLD float ptr [ESP + 0x170]         ; 004471b8
    FMUL float ptr [ESP + 0x1b4]        ; 004471bf
    FLD float ptr [ESP + 0x174]         ; 004471c6
    FMUL float ptr [ESP + 0x1b4]        ; 004471cd
    LEA EDI,[ESP + 0xc4]                ; 004471d4
    LEA ESI,[ESP + 0x7c]                ; 004471db
    FXCH ST2                            ; 004471df
    FSTP float ptr [ESP + 0x7c]         ; 004471e1
    FSTP float ptr [ESP + 0x80]         ; 004471e5
    FSTP float ptr [ESP + 0x84]         ; 004471ec
    MOVSD ES:EDI,ESI                    ; 004471f3
    MOVSD ES:EDI,ESI                    ; 004471f4
    MOVSD ES:EDI,ESI                    ; 004471f5
    FLD1                                ; 004471f6
    FLD float ptr [ESP + 0xc4]          ; 004471f8
    FXCH                                ; 004471ff
    FDIVRP ST2,ST0                      ; 00447201
    FMUL ST1                            ; 00447203
    FLD float ptr [ESP + 0xc8]          ; 00447205
    FMUL ST2                            ; 0044720c
    FLD float ptr [ESP + 0xcc]          ; 0044720e
    FMULP ST3                           ; 00447215
    LEA EDI,[ESP + 0x13c]               ; 00447217
    LEA ESI,[ESP + 0xa0]                ; 0044721e
    FXCH                                ; 00447225
    FSTP float ptr [ESP + 0xa0]         ; 00447227
    FSTP float ptr [ESP + 0xa4]         ; 0044722e
    FSTP float ptr [ESP + 0xa8]         ; 00447235
    MOVSD ES:EDI,ESI                    ; 0044723c
    MOVSD ES:EDI,ESI                    ; 0044723d
    MOVSD ES:EDI,ESI                    ; 0044723e
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0044723f
    FLD float ptr [ESP + 0x13c]         ; 00447246
    FMUL float ptr [EAX]                ; 0044724d
    FLD float ptr [ESP + 0x140]         ; 0044724f
    FMUL float ptr [EAX]                ; 00447256
    FLD float ptr [ESP + 0x144]         ; 00447258
    FMUL float ptr [EAX]                ; 0044725f
    LEA EDI,[ESP + 0x154]               ; 00447261
    LEA ESI,[ESP + 0x4c]                ; 00447268
    FXCH ST2                            ; 0044726c
    FSTP float ptr [ESP + 0x4c]         ; 0044726e
    FSTP float ptr [ESP + 0x50]         ; 00447272
    FSTP float ptr [ESP + 0x54]         ; 00447276
    MOVSD ES:EDI,ESI                    ; 0044727a
    MOVSD ES:EDI,ESI                    ; 0044727b
    MOVSD ES:EDI,ESI                    ; 0044727c
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0044727d
    FLD float ptr [ESP + 0x154]         ; 00447284
    FLD float ptr [EDX]                 ; 0044728b
    FLD float ptr [EDX + 0x4]           ; 0044728d
    FLD float ptr [EDX + 0x8]           ; 00447290
    FXCH ST2                            ; 00447293
    FADD float ptr [ESP + 0x154]        ; 00447295
    FXCH                                ; 0044729c
    FADD float ptr [ESP + 0x158]        ; 0044729e
    FXCH ST2                            ; 004472a5
    FADD float ptr [ESP + 0x15c]        ; 004472a7
    FXCH                                ; 004472ae
    FSTP float ptr [EDX]                ; 004472b0
    FXCH                                ; 004472b2
    FSTP float ptr [EDX + 0x4]          ; 004472b4
    FSTP float ptr [EDX + 0x8]          ; 004472b7
    FMUL float ptr [EAX]                ; 004472ba
    FLD float ptr [ESP + 0x158]         ; 004472bc
    FMUL float ptr [EAX]                ; 004472c3
    FLD float ptr [ESP + 0x15c]         ; 004472c5
    FMUL float ptr [EAX]                ; 004472cc
    LEA EDI,[ESP + 0xac]                ; 004472ce
    LEA ESI,[ESP + 0xdc]                ; 004472d5
    FXCH ST2                            ; 004472dc
    FSTP float ptr [ESP + 0xdc]         ; 004472de
    FSTP float ptr [ESP + 0xe0]         ; 004472e5
    FSTP float ptr [ESP + 0xe4]         ; 004472ec
    MOVSD ES:EDI,ESI                    ; 004472f3
    MOVSD ES:EDI,ESI                    ; 004472f4
    MOVSD ES:EDI,ESI                    ; 004472f5
    FLD float ptr [EBX]                 ; 004472f6
    FLD float ptr [EBX + 0x4]           ; 004472f8
    FLD float ptr [EBX + 0x8]           ; 004472fb
    FXCH ST2                            ; 004472fe
    FADD float ptr [ESP + 0xac]         ; 00447300
    FXCH                                ; 00447307
    FADD float ptr [ESP + 0xb0]         ; 00447309
    FXCH ST2                            ; 00447310
    FADD float ptr [ESP + 0xb4]         ; 00447312
    FXCH                                ; 00447319
    FSTP float ptr [EBX]                ; 0044731b
    FXCH                                ; 0044731d
    FSTP float ptr [EBX + 0x4]          ; 0044731f
    FSTP float ptr [EBX + 0x8]          ; 00447322
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 00447325
        ;   Label: LAB_00447325
    MOV EDI,dword ptr [ESP + 0x1ec]     ; 0044732c
    ADD ESI,0x4                         ; 00447333
    INC EDI                             ; 00447336
    MOV dword ptr [ESP + 0x1bc],ESI     ; 00447337
    MOV ESI,dword ptr [ECX + 0x44]      ; 0044733e
    MOV dword ptr [ESP + 0x1ec],EDI     ; 00447341
    CMP EDI,ESI                         ; 00447348
    JL 0x00446f7c                       ; 0044734a
        ;   XREF to: 00446f7c (CONDITIONAL_JUMP)  ; LAB_00446f7c
    MOV ESP,EBP                         ; 00447350
        ;   Label: LAB_00447350
    POP EBP                             ; 00447352
    POP EDI                             ; 00447353
    POP ESI                             ; 00447354
    POP EBX                             ; 00447355
    RET                                 ; 00447356
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00447357
        ;   Label: LAB_00447357
    FLD float ptr [ECX + 0x24]          ; 0044735e
    FCOMP float ptr [EAX + 0x7f8fd4]    ; 00447361
    FNSTSW AX                           ; 00447367
    SAHF                                ; 00447369
    JC 0x00446eef                       ; 0044736a
        ;   XREF to: 00446eef (CONDITIONAL_JUMP)  ; LAB_00446eef
    IMUL ESI,dword ptr [ESP + 0x1e4],0x28 ; 00447370
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00447378
    FLD float ptr [EAX + 0x7f8fd4]      ; 0044737f
    FADD float ptr [ESI + 0x7f9498]     ; 00447385
    FLD float ptr [ECX + 0x24]          ; 0044738b
    FXCH                                ; 0044738e
    FSTP float ptr [ESP + 0x1c8]        ; 00447390
    FCOMP float ptr [ESP + 0x1c8]       ; 00447397
    FNSTSW AX                           ; 0044739e
    SAHF                                ; 004473a0
    JA 0x00446eef                       ; 004473a1
        ;   XREF to: 00446eef (CONDITIONAL_JUMP)  ; LAB_00446eef
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 004473a7
    FLD float ptr [ECX + 0x20]          ; 004473ae
    FSUB float ptr [EAX + 0x7f8fd0]     ; 004473b1
    FST float ptr [ESP + 0x124]         ; 004473b7
    FLD float ptr [ECX + 0x28]          ; 004473be
    FSUB float ptr [EAX + 0x7f8fd8]     ; 004473c1
    FXCH                                ; 004473c7
    FMUL float ptr [ESP + 0x124]        ; 004473c9
    FXCH                                ; 004473d0
    FST float ptr [ESP + 0x12c]         ; 004473d2
    FMUL float ptr [ESP + 0x12c]        ; 004473d9
    FXCH                                ; 004473e0
    XOR EAX,EAX                         ; 004473e2
    FXCH                                ; 004473e4
    FSTP float ptr [ESP + 0x1e0]        ; 004473e6
    FADD float ptr [ESP + 0x1e0]        ; 004473ed
    MOV dword ptr [ESP + 0x128],EAX     ; 004473f4
    FSQRT                               ; 004473fb
    FST float ptr [ESP + 0x1b8]         ; 004473fd
    FCOMP float ptr [ESI + 0x7f949c]    ; 00447404
    FNSTSW AX                           ; 0044740a
    SAHF                                ; 0044740c
    JA 0x00446eef                       ; 0044740d
        ;   XREF to: 00446eef (CONDITIONAL_JUMP)  ; LAB_00446eef
    FLD float ptr [ECX + 0x3c]          ; 00447413
    FCOMP float ptr [ESP + 0x1c8]       ; 00447416
    FNSTSW AX                           ; 0044741d
    SAHF                                ; 0044741f
    JC 0x00447512                       ; 00447420
        ;   XREF to: 00447512 (CONDITIONAL_JUMP)  ; LAB_00447512
    LEA EDI,[ESP + 0x100]               ; 00447426
    LEA ESI,[ECX + 0x20]                ; 0044742d
    FLD float ptr [ESP + 0x1c8]         ; 00447430
    MOVSD ES:EDI,ESI                    ; 00447437
    MOVSD ES:EDI,ESI                    ; 00447438
    MOVSD ES:EDI,ESI                    ; 00447439
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0044743a
    FLD float ptr [ESP + 0x100]         ; 00447441
    FLD float ptr [ESP + 0x108]         ; 00447448
    LEA EDI,[ESP + 0x34]                ; 0044744f
    MOV dword ptr [ESP + 0x104],EAX     ; 00447453
    LEA ESI,[ESP + 0x10c]               ; 0044745a
    FXCH                                ; 00447461
    FSUB float ptr [EDX]                ; 00447463
    FXCH ST2                            ; 00447465
    FSUB float ptr [EDX + 0x4]          ; 00447467
    FXCH                                ; 0044746a
    FSUB float ptr [EDX + 0x8]          ; 0044746c
    FXCH ST2                            ; 0044746f
    FSTP float ptr [ESP + 0x10c]        ; 00447471
    FSTP float ptr [ESP + 0x110]        ; 00447478
    FSTP float ptr [ESP + 0x114]        ; 0044747f
    MOVSD ES:EDI,ESI                    ; 00447486
    MOVSD ES:EDI,ESI                    ; 00447487
    MOVSD ES:EDI,ESI                    ; 00447488
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00447489
    FLD float ptr [ESP + 0x34]          ; 00447490
    FMUL float ptr [EAX]                ; 00447494
    FLD float ptr [ESP + 0x38]          ; 00447496
    FMUL float ptr [EAX]                ; 0044749a
    FLD float ptr [ESP + 0x3c]          ; 0044749c
    FMUL float ptr [EAX]                ; 004474a0
    LEA EDI,[ESP + 0x28]                ; 004474a2
    LEA ESI,[ESP + 0x4]                 ; 004474a6
    FXCH ST2                            ; 004474aa
    FSTP float ptr [ESP + 0x4]          ; 004474ac
    FSTP float ptr [ESP + 0x8]          ; 004474b0
    FSTP float ptr [ESP + 0xc]          ; 004474b4
    MOVSD ES:EDI,ESI                    ; 004474b8
    MOVSD ES:EDI,ESI                    ; 004474b9
    MOVSD ES:EDI,ESI                    ; 004474ba
    LEA EAX,[ESP + 0x100]               ; 004474bb
    FLD float ptr [EBX]                 ; 004474c2
    FLD float ptr [EBX + 0x4]           ; 004474c4
    FLD float ptr [EBX + 0x8]           ; 004474c7
    FXCH ST2                            ; 004474ca
    FADD float ptr [ESP + 0x28]         ; 004474cc
    FXCH                                ; 004474d0
    FADD float ptr [ESP + 0x2c]         ; 004474d2
    FXCH ST2                            ; 004474d6
    FADD float ptr [ESP + 0x30]         ; 004474d8
    FXCH                                ; 004474dc
    FSTP float ptr [EBX]                ; 004474de
    FXCH                                ; 004474e0
    FSTP float ptr [EBX + 0x4]          ; 004474e2
    FSTP float ptr [EBX + 0x8]          ; 004474e5
    CMP EDX,EAX                         ; 004474e8
    JZ 0x00446eef                       ; 004474ea
        ;   XREF to: 00446eef (CONDITIONAL_JUMP)  ; LAB_00446eef
    MOV EAX,dword ptr [ESP + 0x100]     ; 004474f0
    MOV dword ptr [EDX],EAX             ; 004474f7
    MOV EAX,dword ptr [ESP + 0x104]     ; 004474f9
    MOV dword ptr [EDX + 0x4],EAX       ; 00447500
    MOV EAX,dword ptr [ESP + 0x108]     ; 00447503
    MOV dword ptr [EDX + 0x8],EAX       ; 0044750a
    JMP 0x00446eef                      ; 0044750d
        ;   XREF to: 00446eef (UNCONDITIONAL_JUMP)  ; LAB_00446eef
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00447512
        ;   Label: LAB_00447512
    FLD float ptr [ECX + 0x3c]          ; 00447519
    FCOMP float ptr [EAX + 0x7f8fd4]    ; 0044751c
    FNSTSW AX                           ; 00447522
    SAHF                                ; 00447524
    JA 0x00447628                       ; 00447525
        ;   XREF to: 00447628 (CONDITIONAL_JUMP)  ; LAB_00447628
    LEA EDI,[ESP + 0x64]                ; 0044752b
    LEA ESI,[ECX + 0x20]                ; 0044752f
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00447532
    MOVSD ES:EDI,ESI                    ; 00447539
    MOVSD ES:EDI,ESI                    ; 0044753a
    MOVSD ES:EDI,ESI                    ; 0044753b
    MOV EAX,dword ptr [EAX + 0x7f8fd4]  ; 0044753c
    FLD float ptr [ESP + 0x64]          ; 00447542
    FLD float ptr [ESP + 0x6c]          ; 00447546
    LEA EDI,[ESP + 0xf4]                ; 0044754a
    MOV dword ptr [ESP + 0x68],EAX      ; 00447551
    LEA ESI,[ESP + 0x130]               ; 00447555
    FLD float ptr [ESP + 0x68]          ; 0044755c
    FXCH ST2                            ; 00447560
    FSUB float ptr [EDX]                ; 00447562
    FXCH                                ; 00447564
    FSUB float ptr [EDX + 0x8]          ; 00447566
    FXCH                                ; 00447569
    FSTP float ptr [ESP + 0x130]        ; 0044756b
    FXCH                                ; 00447572
    FSUB float ptr [EDX + 0x4]          ; 00447574
    FXCH                                ; 00447577
    FSTP float ptr [ESP + 0x138]        ; 00447579
    FSTP float ptr [ESP + 0x134]        ; 00447580
    MOVSD ES:EDI,ESI                    ; 00447587
    MOVSD ES:EDI,ESI                    ; 00447588
    MOVSD ES:EDI,ESI                    ; 00447589
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0044758a
    FLD float ptr [ESP + 0xf4]          ; 00447591
    FMUL float ptr [EAX]                ; 00447598
    FLD float ptr [ESP + 0xf8]          ; 0044759a
    FMUL float ptr [EAX]                ; 004475a1
    FLD float ptr [ESP + 0xfc]          ; 004475a3
    FMUL float ptr [EAX]                ; 004475aa
    LEA EDI,[ESP + 0x148]               ; 004475ac
    LEA ESI,[ESP + 0x178]               ; 004475b3
    FXCH ST2                            ; 004475ba
    FSTP float ptr [ESP + 0x178]        ; 004475bc
    FSTP float ptr [ESP + 0x17c]        ; 004475c3
    FSTP float ptr [ESP + 0x180]        ; 004475ca
    MOVSD ES:EDI,ESI                    ; 004475d1
    MOVSD ES:EDI,ESI                    ; 004475d2
    MOVSD ES:EDI,ESI                    ; 004475d3
    LEA EAX,[ESP + 0x64]                ; 004475d4
    FLD float ptr [EBX]                 ; 004475d8
    FLD float ptr [EBX + 0x4]           ; 004475da
    FLD float ptr [EBX + 0x8]           ; 004475dd
    FXCH ST2                            ; 004475e0
    FADD float ptr [ESP + 0x148]        ; 004475e2
    FXCH                                ; 004475e9
    FADD float ptr [ESP + 0x14c]        ; 004475eb
    FXCH ST2                            ; 004475f2
    FADD float ptr [ESP + 0x150]        ; 004475f4
    FXCH                                ; 004475fb
    FSTP float ptr [EBX]                ; 004475fd
    FXCH                                ; 004475ff
    FSTP float ptr [EBX + 0x4]          ; 00447601
    FSTP float ptr [EBX + 0x8]          ; 00447604
    CMP EDX,EAX                         ; 00447607
    JZ 0x00446eef                       ; 00447609
        ;   XREF to: 00446eef (CONDITIONAL_JUMP)  ; LAB_00446eef
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044760f
    MOV dword ptr [EDX],EAX             ; 00447613
    MOV EAX,dword ptr [ESP + 0x68]      ; 00447615
    MOV dword ptr [EDX + 0x4],EAX       ; 00447619
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044761c
    MOV dword ptr [EDX + 0x8],EAX       ; 00447620
    JMP 0x00446eef                      ; 00447623
        ;   XREF to: 00446eef (UNCONDITIONAL_JUMP)  ; LAB_00446eef
    FLDZ                                ; 00447628
        ;   Label: LAB_00447628
    FCOMP float ptr [ESP + 0x1b8]       ; 0044762a
    FNSTSW AX                           ; 00447631
    SAHF                                ; 00447633
    JNC 0x004477dc                      ; 00447634
        ;   XREF to: 004477dc (CONDITIONAL_JUMP)  ; LAB_004477dc
    FLD1                                ; 0044763a
    FLD float ptr [ESP + 0x124]         ; 0044763c
    FXCH                                ; 00447643
    FDIV float ptr [ESP + 0x1b8]        ; 00447645
    FXCH                                ; 0044764c
    FMUL ST1                            ; 0044764e
    FLDZ                                ; 00447650
    FMUL ST2                            ; 00447652
    FLD float ptr [ESP + 0x12c]         ; 00447654
    FMULP ST3                           ; 0044765b
    FXCH                                ; 0044765d
    FSTP float ptr [ESP + 0x124]        ; 0044765f
    FSTP float ptr [ESP + 0x128]        ; 00447666
    FSTP float ptr [ESP + 0x12c]        ; 0044766d
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00447674
        ;   Label: LAB_00447674
    FLD float ptr [ESP + 0x124]         ; 0044767b
    FMUL float ptr [EAX]                ; 00447682
    FLD float ptr [ESP + 0x128]         ; 00447684
    FXCH                                ; 0044768b
    FSTP float ptr [ESP + 0x124]        ; 0044768d
    FMUL float ptr [EAX]                ; 00447694
    FLD float ptr [ESP + 0x12c]         ; 00447696
    FXCH                                ; 0044769d
    FSTP float ptr [ESP + 0x128]        ; 0044769f
    FMUL float ptr [EAX]                ; 004476a6
    LEA EDI,[ESP + 0x118]               ; 004476a8
    LEA ESI,[ESP + 0x190]               ; 004476af
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 004476b6
    FLD float ptr [ESP + 0x124]         ; 004476bd
    FADD float ptr [EAX + 0x7f8fd0]     ; 004476c4
    FXCH                                ; 004476ca
    FSTP float ptr [ESP + 0x12c]        ; 004476cc
    FSTP float ptr [ESP + 0x124]        ; 004476d3
    MOV EAX,dword ptr [ECX + 0x24]      ; 004476da
    FLD float ptr [ESP + 0x12c]         ; 004476dd
    MOV dword ptr [ESP + 0x128],EAX     ; 004476e4
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 004476eb
    FLD float ptr [ESP + 0x124]         ; 004476f2
    FXCH                                ; 004476f9
    FADD float ptr [EAX + 0x7f8fd8]     ; 004476fb
    FLD float ptr [ESP + 0x128]         ; 00447701
    FXCH                                ; 00447708
    FST float ptr [ESP + 0x12c]         ; 0044770a
    FXCH ST2                            ; 00447711
    FSUB float ptr [EDX]                ; 00447713
    FXCH                                ; 00447715
    FSUB float ptr [EDX + 0x4]          ; 00447717
    FXCH                                ; 0044771a
    FSTP float ptr [ESP + 0x190]        ; 0044771c
    FXCH                                ; 00447723
    FSUB float ptr [EDX + 0x8]          ; 00447725
    FXCH                                ; 00447728
    FSTP float ptr [ESP + 0x194]        ; 0044772a
    FSTP float ptr [ESP + 0x198]        ; 00447731
    MOVSD ES:EDI,ESI                    ; 00447738
    MOVSD ES:EDI,ESI                    ; 00447739
    MOVSD ES:EDI,ESI                    ; 0044773a
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0044773b
    FLD float ptr [ESP + 0x118]         ; 00447742
    FMUL float ptr [EAX]                ; 00447749
    FLD float ptr [ESP + 0x11c]         ; 0044774b
    FMUL float ptr [EAX]                ; 00447752
    FLD float ptr [ESP + 0x120]         ; 00447754
    FMUL float ptr [EAX]                ; 0044775b
    LEA EDI,[ESP + 0x88]                ; 0044775d
    LEA ESI,[ESP + 0x10]                ; 00447764
    FXCH ST2                            ; 00447768
    FSTP float ptr [ESP + 0x10]         ; 0044776a
    FSTP float ptr [ESP + 0x14]         ; 0044776e
    FSTP float ptr [ESP + 0x18]         ; 00447772
    MOVSD ES:EDI,ESI                    ; 00447776
    MOVSD ES:EDI,ESI                    ; 00447777
    MOVSD ES:EDI,ESI                    ; 00447778
    LEA EAX,[ESP + 0x124]               ; 00447779
    FLD float ptr [EBX]                 ; 00447780
    FLD float ptr [EBX + 0x4]           ; 00447782
    FLD float ptr [EBX + 0x8]           ; 00447785
    FXCH ST2                            ; 00447788
    FADD float ptr [ESP + 0x88]         ; 0044778a
    FXCH                                ; 00447791
    FADD float ptr [ESP + 0x8c]         ; 00447793
    FXCH ST2                            ; 0044779a
    FADD float ptr [ESP + 0x90]         ; 0044779c
    FXCH                                ; 004477a3
    FSTP float ptr [EBX]                ; 004477a5
    FXCH                                ; 004477a7
    FSTP float ptr [EBX + 0x4]          ; 004477a9
    FSTP float ptr [EBX + 0x8]          ; 004477ac
    CMP EDX,EAX                         ; 004477af
    JZ 0x004477d0                       ; 004477b1
        ;   XREF to: 004477d0 (CONDITIONAL_JUMP)  ; LAB_004477d0
    MOV EAX,dword ptr [ESP + 0x124]     ; 004477b3
    MOV dword ptr [EDX],EAX             ; 004477ba
    MOV EAX,dword ptr [ESP + 0x128]     ; 004477bc
    MOV dword ptr [EDX + 0x4],EAX       ; 004477c3
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004477c6
    MOV dword ptr [EDX + 0x8],EAX       ; 004477cd
    MOV dword ptr [ECX + 0x6c],0x1      ; 004477d0
        ;   Label: LAB_004477d0
    JMP 0x00446eef                      ; 004477d7
        ;   XREF to: 00446eef (UNCONDITIONAL_JUMP)  ; LAB_00446eef
    XOR ESI,ESI                         ; 004477dc
        ;   Label: LAB_004477dc
    MOV dword ptr [ESP + 0x128],ESI     ; 004477de
    MOV dword ptr [ESP + 0x124],ESI     ; 004477e5
    MOV dword ptr [ESP + 0x12c],ESI     ; 004477ec
    JMP 0x00447674                      ; 004477f3
        ;   XREF to: 00447674 (UNCONDITIONAL_JUMP)  ; LAB_00447674
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004477f8
        ;   Label: LAB_004477f8
    MOV dword ptr [ESP + 0x16c],EAX     ; 004477ff
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00447806
    MOV dword ptr [ESP + 0x170],EAX     ; 0044780d
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00447814
    MOV dword ptr [ESP + 0x174],EAX     ; 0044781b
    JMP 0x00446fdb                      ; 00447822
        ;   XREF to: 00446fdb (UNCONDITIONAL_JUMP)  ; LAB_00446fdb

