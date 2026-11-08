; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00538d10(int *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
;
; XREF[6]:
;   FUN_004b6170 at 004b64b8
;   FUN_004b7fc0 at 004b7ff7
;   FUN_004b8030 at 004b8067
;   FUN_004b82e0 at 004b89b4
;   FUN_004bd570 at 004bda9b
;   FUN_00522350 at 00525e3c
;
; Referenced Globals:
;   TerminatedCString s_core_setdir_cpp_005e5f5d
;   TerminatedCString s_saveZBufferTable_already_005e5f70
;   TerminatedCString s_core_setdir_cpp_005e5f92
;   TerminatedCString s_saveZBufferTable_not_sav_005e5fa5
;   undefined4 DAT_005e5ff5
;   undefined4 DAT_005e5ffd
;   undefined4 DAT_005e6005
;   undefined4 DAT_005e600d
;   undefined4 DAT_005e6015
;   undefined4 DAT_005fb33c
;   undefined4 DAT_005fb354
;   undefined4 DAT_005fb358
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141bc
;   undefined4 DAT_00616494
;   ... and 28 more
;
; Called Functions:
;   FUN_00408d70
;   FUN_0041a600
;   FUN_0041b6b0
;   FUN_0046b940
;   FUN_0046b960
;   FUN_004e4500
;   FUN_0052ddf0
;   FUN_005386e0
;   FUN_0053a760
;   FUN_0053ae20
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538d10
        ;   Label: FUN_00538d10
    PUSH ESI                            ; 00538d11
    PUSH EDI                            ; 00538d12
    PUSH EBP                            ; 00538d13
    MOV EBP,ESP                         ; 00538d14
    SUB ESP,0x20c                       ; 00538d16
    AND ESP,0xfffffff8                  ; 00538d1c
    XOR EDX,EDX                         ; 00538d1f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00538d21
    MOV dword ptr [ESP + 0x1cc],EDX     ; 00538d24
    TEST ECX,ECX                        ; 00538d2b
    JNZ 0x00538d53                      ; 00538d2d
        ;   XREF to: 00538d53 (CONDITIONAL_JUMP)  ; LAB_00538d53
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538d2f
    CMP dword ptr [EAX + 0x15aeb8],0x0  ; 00538d32
    JL 0x00538d47                       ; 00538d39
        ;   XREF to: 00538d47 (CONDITIONAL_JUMP)  ; LAB_00538d47
    MOV EAX,0x1                         ; 00538d3b
        ;   Label: LAB_00538d3b
    MOV ESP,EBP                         ; 00538d40
    POP EBP                             ; 00538d42
    POP EDI                             ; 00538d43
    POP ESI                             ; 00538d44
    POP EBX                             ; 00538d45
    RET                                 ; 00538d46
    PUSH EDX                            ; 00538d47
        ;   Label: LAB_00538d47
    PUSH EAX                            ; 00538d48
    CALL FUN_0052ddf0                   ; 00538d49
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ddf0()
    ADD ESP,0x8                         ; 00538d4e
    JMP 0x00538d3b                      ; 00538d51
        ;   XREF to: 00538d3b (UNCONDITIONAL_JUMP)  ; LAB_00538d3b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538d53
        ;   Label: LAB_00538d53
    CMP dword ptr [EAX + 0x15aeb8],0x0  ; 00538d56
    JL 0x005393f3                       ; 00538d5d
        ;   XREF to: 005393f3 (CONDITIONAL_JUMP)  ; LAB_005393f3
    CMP dword ptr [EBP + 0x1c],0x2      ; 00538d63
    JGE 0x00538d7f                      ; 00538d67
        ;   XREF to: 00538d7f (CONDITIONAL_JUMP)  ; LAB_00538d7f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538d69
        ;   Label: LAB_00538d69
    FLD float ptr [EAX + 0x15aec8]      ; 00538d6c
    FLDZ                                ; 00538d72
    FCOMPP                              ; 00538d74
    FNSTSW AX                           ; 00538d76
    SAHF                                ; 00538d78
    JC 0x005393ff                       ; 00538d79
        ;   XREF to: 005393ff (CONDITIONAL_JUMP)  ; LAB_005393ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538d7f
        ;   Label: LAB_00538d7f
    MOV ECX,dword ptr [0x0060b280]      ; 00538d82 | DAT_0060b280
    XOR EDX,EDX                         ; 00538d88
    MOV dword ptr [EAX + 0x15aec8],0x0  ; 00538d8a
    MOV EAX,[0x01c37788]                ; 00538d94 | DAT_01c37788
    PUSH ECX                            ; 00538d99 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00538d9a
    MOV dword ptr [0x01c37788],EDX      ; 00538da1 | DAT_01c37788
    CALL FUN_0046b960                   ; 00538da7
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00538dac
    PUSH 0x0                            ; 00538daf
    MOV EBX,dword ptr [0x0060b280]      ; 00538db1 | DAT_0060b280
    PUSH EBX                            ; 00538db7 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00538db8
    CALL FUN_0046b940                   ; 00538dbf
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b940()
    ADD ESP,0x8                         ; 00538dc4
    MOV ESI,dword ptr [EBP + 0x18]      ; 00538dc7
    MOV EAX,dword ptr [EBP + 0x18]      ; 00538dca
    PUSH ESI                            ; 00538dcd
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00538dce
    LEA ESI,[ESP + 0x90]                ; 00538dd4
    LEA EDI,[ESP + 0xc0]                ; 00538ddb
    CALL dword ptr [EAX + 0x24]         ; 00538de2
    MOV ECX,0x6                         ; 00538de5
    LEA ESI,[ESP + 0x90]                ; 00538dea
    ADD ESP,0x4                         ; 00538df1
    MOVSD.REP ES:EDI,ESI                ; 00538df4
    LEA EAX,[ESP + 0x8]                 ; 00538df6
    XOR EDI,EDI                         ; 00538dfa
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00538dfc
    MOV dword ptr [ESP + 0x1fc],EDI     ; 00538e03
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 00538e0a
        ;   Label: LAB_00538e0a
    PUSH EDX                            ; 00538e11
    LEA EAX,[ESP + 0xc0]                ; 00538e12
    PUSH EAX                            ; 00538e19
    LEA ESI,[ESP + 0x130]               ; 00538e1a
    LEA EDI,[ESP + 0x190]               ; 00538e21
    CALL FUN_0041a600                   ; 00538e28
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a600()
    LEA ESI,[ESP + 0x130]               ; 00538e2d
    ADD ESP,0x8                         ; 00538e34
    LEA EAX,[ESP + 0x188]               ; 00538e37
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 00538e3e
    MOVSD ES:EDI,ESI                    ; 00538e45
    MOVSD ES:EDI,ESI                    ; 00538e46
    MOVSD ES:EDI,ESI                    ; 00538e47
    FLD float ptr [EAX]                 ; 00538e48
    FMUL float ptr [0x005fb33c]         ; 00538e4a | DAT_005fb33c
    FISTP dword ptr [EBX]               ; 00538e50
    FLD float ptr [EAX + 0x4]           ; 00538e52
    FMUL float ptr [0x005fb33c]         ; 00538e55 | DAT_005fb33c
    FISTP dword ptr [EBX + 0x4]         ; 00538e5b
    FLD float ptr [EAX + 0x8]           ; 00538e5e
    FMUL float ptr [0x005fb33c]         ; 00538e61 | DAT_005fb33c
    FISTP dword ptr [EBX + 0x8]         ; 00538e67
    LEA ECX,[EBX + 0xc]                 ; 00538e6a
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 00538e6d
    INC EBX                             ; 00538e74
    MOV dword ptr [ESP + 0x1e8],ECX     ; 00538e75
    MOV dword ptr [ESP + 0x1fc],EBX     ; 00538e7c
    CMP EBX,0x8                         ; 00538e83
    JL 0x00538e0a                       ; 00538e86
        ;   XREF to: 00538e0a (CONDITIONAL_JUMP)  ; LAB_00538e0a
    FLD float ptr [ESP + 0xbc]          ; 00538e88
    FLD float ptr [ESP + 0xc0]          ; 00538e8f
    FLD float ptr [ESP + 0xc4]          ; 00538e96
    LEA EDI,[ESP + 0x11c]               ; 00538e9d
    LEA ESI,[ESP + 0x170]               ; 00538ea4
    FXCH ST2                            ; 00538eab
    FADD float ptr [ESP + 0xc8]         ; 00538ead
    FXCH                                ; 00538eb4
    FADD float ptr [ESP + 0xcc]         ; 00538eb6
    FXCH ST2                            ; 00538ebd
    FADD float ptr [ESP + 0xd0]         ; 00538ebf
    FXCH                                ; 00538ec6
    FSTP float ptr [ESP + 0x170]        ; 00538ec8
    FXCH                                ; 00538ecf
    FSTP float ptr [ESP + 0x174]        ; 00538ed1
    FSTP float ptr [ESP + 0x178]        ; 00538ed8
    MOVSD ES:EDI,ESI                    ; 00538edf
    MOVSD ES:EDI,ESI                    ; 00538ee0
    MOVSD ES:EDI,ESI                    ; 00538ee1
    FLD float ptr [0x005e5ff5]          ; 00538ee2 | DAT_005e5ff5
    FLD float ptr [ESP + 0x11c]         ; 00538ee8
    FMUL ST1                            ; 00538eef
    FLD float ptr [ESP + 0x120]         ; 00538ef1
    FMUL ST2                            ; 00538ef8
    FLD float ptr [ESP + 0x124]         ; 00538efa
    FMULP ST3                           ; 00538f01
    LEA EBX,[ESP + 0x68]                ; 00538f03
    LEA EAX,[ESP + 0x17c]               ; 00538f07
    LEA EDI,[ESP + 0x17c]               ; 00538f0e
    LEA ESI,[ESP + 0x164]               ; 00538f15
    FXCH                                ; 00538f1c
    FSTP float ptr [ESP + 0x164]        ; 00538f1e
    FSTP float ptr [ESP + 0x168]        ; 00538f25
    FSTP float ptr [ESP + 0x16c]        ; 00538f2c
    MOVSD ES:EDI,ESI                    ; 00538f33
    MOVSD ES:EDI,ESI                    ; 00538f34
    MOVSD ES:EDI,ESI                    ; 00538f35
    FLD float ptr [EAX]                 ; 00538f36
    FMUL float ptr [0x005fb33c]         ; 00538f38 | DAT_005fb33c
    FISTP dword ptr [EBX]               ; 00538f3e
    FLD float ptr [EAX + 0x4]           ; 00538f40
    FMUL float ptr [0x005fb33c]         ; 00538f43 | DAT_005fb33c
    FISTP dword ptr [EBX + 0x4]         ; 00538f49
    FLD float ptr [EAX + 0x8]           ; 00538f4c
    FMUL float ptr [0x005fb33c]         ; 00538f4f | DAT_005fb33c
    FISTP dword ptr [EBX + 0x8]         ; 00538f55
    MOV EAX,0x61b97c                    ; 00538f58 | DAT_0061b97c
    LEA EDX,[EAX + 0x1b0]               ; 00538f5d | DAT_0061bb2c
    IMUL EBX,dword ptr [EAX + 0x18],0xc ; 00538f63 | DAT_0061b994 | DAT_0061b9dc
        ;   Label: LAB_00538f63
    LEA ESI,[ESP + 0x8]                 ; 00538f67
    ADD ESI,EBX                         ; 00538f6b
    MOV EDI,dword ptr [EAX + 0xc]       ; 00538f6d | DAT_0061b988 | DAT_0061b9d0
    IMUL EDI,dword ptr [ESI + 0x4]      ; 00538f70
    MOV EBX,dword ptr [EAX + 0x8]       ; 00538f74 | DAT_0061b984 | DAT_0061b9cc
    IMUL EBX,dword ptr [ESI]            ; 00538f77
    MOV ECX,dword ptr [ESI + 0x8]       ; 00538f7a
    ADD EDI,EBX                         ; 00538f7d
    MOV EBX,dword ptr [EAX + 0x10]      ; 00538f7f | DAT_0061b98c | DAT_0061b9d4
    IMUL EBX,ECX                        ; 00538f82
    ADD EAX,0x48                        ; 00538f85
    ADD EDI,EBX                         ; 00538f88
    MOV dword ptr [EAX + -0x34],EDI     ; 00538f8a | DAT_0061b990 | DAT_0061b9d8
    CMP EAX,EDX                         ; 00538f8d
    JNZ 0x00538f63                      ; 00538f8f
        ;   XREF to: 00538f63 (CONDITIONAL_JUMP)  ; LAB_00538f63
    CMP dword ptr [EBP + 0x1c],0x0      ; 00538f91
    JZ 0x0053946e                       ; 00538f95
        ;   XREF to: 0053946e (CONDITIONAL_JUMP)  ; LAB_0053946e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538f9b
    MOV EAX,dword ptr [EAX]             ; 00538f9e
    MOV dword ptr [ESP + 0x1b4],EAX     ; 00538fa0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538fa7
    XOR EBX,EBX                         ; 00538faa
    MOV dword ptr [EAX + 0x15aebc],0xffffffff ; 00538fac
    MOV dword ptr [0x02093938],EBX      ; 00538fb6 | DAT_02093938
    MOV dword ptr [EAX + 0x15aec0],EBX  ; 00538fbc
    MOV ESI,dword ptr [EBP + 0x18]      ; 00538fc2
        ;   Label: LAB_00538fc2
    MOV EAX,dword ptr [EBP + 0x18]      ; 00538fc5
    PUSH ESI                            ; 00538fc8
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00538fc9
    LEA ESI,[ESP + 0x78]                ; 00538fcf
    LEA EDI,[ESP + 0xf0]                ; 00538fd3
    CALL dword ptr [EAX + 0x24]         ; 00538fda
    MOV ECX,0x6                         ; 00538fdd
    ADD ESP,0x4                         ; 00538fe2
    LEA EAX,[ESP + 0xec]                ; 00538fe5
    LEA ESI,[ESP + 0x74]                ; 00538fec
    PUSH EAX                            ; 00538ff0
    MOVSD.REP ES:EDI,ESI                ; 00538ff1
    CALL FUN_0041b6b0                   ; 00538ff3
        ;   XREF to: 0041b6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b6b0()
    MOV dword ptr [ESP + 0x20c],EAX     ; 00538ff8
    FLD float ptr [ESP + 0x20c]         ; 00538fff
    FMUL double ptr [0x005e5ffd]        ; 00539006 | DAT_005e5ffd
    LEA EDI,[ESP + 0x144]               ; 0053900c
    ADD ESP,0x4                         ; 00539013
    LEA EAX,[ESP + 0x140]               ; 00539016
    MOV ESI,dword ptr [EBP + 0x18]      ; 0053901d
    FLD1                                ; 00539020
    PUSH EAX                            ; 00539022
    LEA ESI,[ESI + 0x20]                ; 00539023
    FADDP                               ; 00539026
    MOVSD ES:EDI,ESI                    ; 00539028
    MOVSD ES:EDI,ESI                    ; 00539029
    MOVSD ES:EDI,ESI                    ; 0053902a
    FSTP float ptr [ESP + 0x1dc]        ; 0053902b
    FLD float ptr [ESP + 0x148]         ; 00539032
    MOV EDI,dword ptr [EBP + 0x14]      ; 00539039
    LEA ESI,[ESP + 0x198]               ; 0053903c
    FADD float ptr [0x005e6005]         ; 00539043 | DAT_005e6005
    PUSH EDI                            ; 00539049
    FSTP float ptr [ESP + 0x14c]        ; 0053904a
    CALL FUN_0053a760                   ; 00539051
        ;   XREF to: 0053a760 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a760()
    ADD ESP,0x8                         ; 00539056
    LEA EDI,[ESP + 0x110]               ; 00539059
    FLD float ptr [ESP + 0xec]          ; 00539060
    FLD float ptr [ESP + 0xf0]          ; 00539067
    FLD float ptr [ESP + 0xf4]          ; 0053906e
    FXCH ST2                            ; 00539075
    FADD float ptr [ESP + 0xf8]         ; 00539077
    FXCH                                ; 0053907e
    FADD float ptr [ESP + 0xfc]         ; 00539080
    FXCH ST2                            ; 00539087
    FADD float ptr [ESP + 0x100]        ; 00539089
    FXCH                                ; 00539090
    FSTP float ptr [ESP + 0x194]        ; 00539092
    FXCH                                ; 00539099
    FSTP float ptr [ESP + 0x198]        ; 0053909b
    FSTP float ptr [ESP + 0x19c]        ; 005390a2
    MOVSD ES:EDI,ESI                    ; 005390a9
    MOVSD ES:EDI,ESI                    ; 005390aa
    MOVSD ES:EDI,ESI                    ; 005390ab
    FLD float ptr [0x005e5ff5]          ; 005390ac | DAT_005e5ff5
    FLD float ptr [ESP + 0x110]         ; 005390b2
    FMUL ST1                            ; 005390b9
    FLD float ptr [ESP + 0x114]         ; 005390bb
    FMUL ST2                            ; 005390c2
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005390c4
    LEA EAX,[ESP + 0x134]               ; 005390cb
    FLD float ptr [ESP + 0x118]         ; 005390d2
    FMULP ST3                           ; 005390d9
    PUSH EAX                            ; 005390db
    MOV EAX,dword ptr [EBP + 0x18]      ; 005390dc
    LEA EDI,[ESP + 0x138]               ; 005390df
    LEA ESI,[ESP + 0x150]               ; 005390e6
    FXCH                                ; 005390ed
    FSTP float ptr [ESP + 0x150]        ; 005390ef
    FSTP float ptr [ESP + 0x154]        ; 005390f6
    FSTP float ptr [ESP + 0x158]        ; 005390fd
    MOVSD ES:EDI,ESI                    ; 00539104
    MOVSD ES:EDI,ESI                    ; 00539105
    MOVSD ES:EDI,ESI                    ; 00539106
    PUSH EAX                            ; 00539107
    LEA ESI,[ESP + 0x160]               ; 00539108
    LEA EDI,[ESP + 0x10c]               ; 0053910f
    CALL FUN_00408d70                   ; 00539116
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x160]               ; 0053911b
    LEA EAX,[ESP + 0x10c]               ; 00539122
    ADD ESP,0x8                         ; 00539129
    LEA EDX,[ESP + 0x140]               ; 0053912c
    MOVSD ES:EDI,ESI                    ; 00539133
    MOVSD ES:EDI,ESI                    ; 00539134
    MOVSD ES:EDI,ESI                    ; 00539135
    CMP EDX,EAX                         ; 00539136
    JZ 0x00539164                       ; 00539138
        ;   XREF to: 00539164 (CONDITIONAL_JUMP)  ; LAB_00539164
    MOV EAX,dword ptr [ESP + 0x104]     ; 0053913a
    MOV dword ptr [ESP + 0x140],EAX     ; 00539141
    MOV EAX,dword ptr [ESP + 0x108]     ; 00539148
    MOV dword ptr [ESP + 0x144],EAX     ; 0053914f
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00539156
    MOV dword ptr [ESP + 0x148],EAX     ; 0053915d
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 00539164
        ;   Label: LAB_00539164
    CMP EAX,dword ptr [0x0209393c]      ; 0053916b | DAT_0209393c
    JZ 0x005391a2                       ; 00539171
        ;   XREF to: 005391a2 (CONDITIONAL_JUMP)  ; LAB_005391a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539173
    MOV EAX,dword ptr [EAX]             ; 00539176
    MOV EBX,0x1                         ; 00539178
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0053917d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539184
    XOR ECX,ECX                         ; 00539187
    MOV dword ptr [EBP + 0x1c],EBX      ; 00539189
    MOV dword ptr [EAX + 0x15aebc],0xffffffff ; 0053918c
    MOV dword ptr [0x02093938],ECX      ; 00539196 | DAT_02093938
    MOV dword ptr [EAX + 0x15aec0],ECX  ; 0053919c
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 005391a2
        ;   Label: LAB_005391a2
    MOV [0x0209393c],EAX                ; 005391a9 | DAT_0209393c
    CMP EAX,-0x1                        ; 005391ae
    SETZ AL                             ; 005391b1
    MOV EBX,dword ptr [0x006141bc]      ; 005391b4 | DAT_006141bc
    AND EAX,0xff                        ; 005391ba
    MOV EDI,dword ptr [0x020b0258]      ; 005391bf | DAT_020b0258
    MOV [0x020b1520],EAX                ; 005391c5 | DAT_020b1520
    TEST EDI,EDI                        ; 005391ca
    JZ 0x005391f0                       ; 005391cc
        ;   XREF to: 005391f0 (CONDITIONAL_JUMP)  ; LAB_005391f0
    MOV EAX,0x5e5f5d                    ; 005391ce | = "..\\core\\setdir.cpp"
    MOV EDX,0x67                        ; 005391d3
    PUSH 0x5e5f70                       ; 005391d8 | = "saveZBufferTable - already saved!"
    MOV [0x01d046a0],EAX                ; 005391dd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 005391e2 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005391e8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005391ed
    TEST EBX,EBX                        ; 005391f0
        ;   Label: LAB_005391f0
    JLE 0x00539210                      ; 005391f2
        ;   XREF to: 00539210 (CONDITIONAL_JUMP)  ; LAB_00539210
    LEA ESI,[EBX*0x4 + 0x0]             ; 005391f4
    XOR EAX,EAX                         ; 005391fb
    ADD EAX,0x4                         ; 005391fd
        ;   Label: LAB_005391fd
    MOV EBX,dword ptr [EAX + 0x1c2b648] ; 00539200 | DAT_01c2b64c
    MOV dword ptr [EAX + 0x20b0254],EBX ; 00539206 | DAT_020b0258
    CMP EAX,ESI                         ; 0053920c
    JL 0x005391fd                       ; 0053920e
        ;   XREF to: 005391fd (CONDITIONAL_JUMP)  ; LAB_005391fd
    FLD float ptr [0x005fb358]          ; 00539210 | DAT_005fb358
        ;   Label: LAB_00539210
    FMUL ST0                            ; 00539216
    XOR ECX,ECX                         ; 00539218
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053921a
    MOV dword ptr [0x020a2794],ECX      ; 0053921d | DAT_020a2794
    MOV dword ptr [ESP + 0x1f4],ECX     ; 00539223
    ADD EAX,0x20                        ; 0053922a
    MOV dword ptr [ESP + 0x1f0],ECX     ; 0053922d
    FSTP float ptr [ESP + 0x1d4]        ; 00539234
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0053923b
    MOV EAX,[0x0061b5a8]                ; 00539242 | DAT_0061b5a8
        ;   Label: LAB_00539242
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 00539247
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0053924e | DAT_01fb331c
    JL 0x00539513                       ; 00539254
        ;   XREF to: 00539513 (CONDITIONAL_JUMP)  ; LAB_00539513
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053925a
    FLD float ptr [0x005fb354]          ; 0053925d | DAT_005fb354
    FLD ST0                             ; 00539263
    ADD EAX,0x20                        ; 00539265
    FMULP                               ; 00539268
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0053926a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539271
    ADD EAX,0x4                         ; 00539274
    FSTP float ptr [ESP + 0x1e0]        ; 00539277
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0053927e
    CMP dword ptr [ESP + 0x1b4],0x0     ; 00539285
        ;   Label: LAB_00539285
    JLE 0x0053929f                      ; 0053928d
        ;   XREF to: 0053929f (CONDITIONAL_JUMP)  ; LAB_0053929f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053928f
    MOV EAX,[0x02093938]                ; 00539292 | DAT_02093938
    CMP EAX,dword ptr [EDX]             ; 00539297
    JL 0x00539625                       ; 00539299
        ;   XREF to: 00539625 (CONDITIONAL_JUMP)  ; LAB_00539625
    MOV EAX,[0x020b0258]                ; 0053929f | DAT_020b0258
        ;   Label: LAB_0053929f
    MOV EBX,dword ptr [0x006141bc]      ; 005392a4 | DAT_006141bc
    TEST EAX,EAX                        ; 005392aa
    JNZ 0x005392d1                      ; 005392ac
        ;   XREF to: 005392d1 (CONDITIONAL_JUMP)  ; LAB_005392d1
    MOV EDX,0x5e5f92                    ; 005392ae | = "..\\core\\setdir.cpp"
    MOV ECX,0x70                        ; 005392b3
    PUSH 0x5e5fa5                       ; 005392b8 | = "saveZBufferTable - not saved!"
    MOV dword ptr [0x01d046a0],EDX      ; 005392bd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005392c3 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005392c9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005392ce
    TEST EBX,EBX                        ; 005392d1
        ;   Label: LAB_005392d1
    JLE 0x00539300                      ; 005392d3
        ;   XREF to: 00539300 (CONDITIONAL_JUMP)  ; LAB_00539300
    LEA ESI,[EBX*0x4 + 0x0]             ; 005392d5
    XOR EAX,EAX                         ; 005392dc
    ADD EAX,0x4                         ; 005392de
        ;   Label: LAB_005392de
    MOV EBX,dword ptr [EAX + 0x20b0254] ; 005392e1 | DAT_020b0258
    MOV dword ptr [EAX + 0x1c2b648],EBX ; 005392e7 | DAT_01c2b64c
    CMP EAX,ESI                         ; 005392ed
    JL 0x005392de                       ; 005392ef
        ;   XREF to: 005392de (CONDITIONAL_JUMP)  ; LAB_005392de
    LEA EAX,[EAX]                       ; 005392f1
    LEA EDX,[EDX]                       ; 005392f7
    LEA EAX,[EAX]                       ; 005392fd
    MOV EDX,dword ptr [ESP + 0x1c8]     ; 00539300
        ;   Label: LAB_00539300
    PUSH EDX                            ; 00539307
    MOV ECX,dword ptr [0x0060b280]      ; 00539308 | DAT_0060b280
    XOR EAX,EAX                         ; 0053930e
    PUSH ECX                            ; 00539310 | DAT_01ba5c50
    MOV [0x020b0258],EAX                ; 00539311 | DAT_020b0258
    CALL FUN_0046b940                   ; 00539316
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b940()
    ADD ESP,0x8                         ; 0053931b
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0053931e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00539325
    MOV [0x01c37788],EAX                ; 00539328 | DAT_01c37788
    MOV EBX,dword ptr [EDX]             ; 0053932d
    CMP EBX,dword ptr [0x02093938]      ; 0053932f | DAT_02093938
    JG 0x005393e5                       ; 00539335
        ;   XREF to: 005393e5 (CONDITIONAL_JUMP)  ; LAB_005393e5
    MOV ESI,0xbf800000                  ; 0053933b
    MOV EDI,0xffffffff                  ; 00539340
    MOV dword ptr [ESP + 0x4],ESI       ; 00539345
    XOR ESI,ESI                         ; 00539349
    TEST EBX,EBX                        ; 0053934b
    JLE 0x00539379                      ; 0053934d
        ;   XREF to: 00539379 (CONDITIONAL_JUMP)  ; LAB_00539379
    XOR EBX,EBX                         ; 0053934f
    FLD float ptr [EBX + 0x209394c]     ; 00539351
        ;   Label: LAB_00539351
    FCOMP float ptr [ESP + 0x4]         ; 00539357
    FNSTSW AX                           ; 0053935b
    SAHF                                ; 0053935d
    JBE 0x0053936c                      ; 0053935e
        ;   XREF to: 0053936c (CONDITIONAL_JUMP)  ; LAB_0053936c
    MOV EAX,dword ptr [EBX + 0x209394c] ; 00539360
    MOV EDI,ESI                         ; 00539366
    MOV dword ptr [ESP + 0x4],EAX       ; 00539368
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053936c
        ;   Label: LAB_0053936c
    INC ESI                             ; 0053936f
    MOV ECX,dword ptr [EAX]             ; 00539370
    ADD EBX,0x4                         ; 00539372
    CMP ESI,ECX                         ; 00539375
    JL 0x00539351                       ; 00539377
        ;   XREF to: 00539351 (CONDITIONAL_JUMP)  ; LAB_00539351
    TEST EDI,EDI                        ; 00539379
        ;   Label: LAB_00539379
    JL 0x005393dd                       ; 0053937b
        ;   XREF to: 005393dd (CONDITIONAL_JUMP)  ; LAB_005393dd
    FLD float ptr [ESP + 0x4]           ; 0053937d
    MOV EDX,0x1                         ; 00539381
    FLDZ                                ; 00539386
    FCOMPP                              ; 00539388
    FNSTSW AX                           ; 0053938a
    SAHF                                ; 0053938c
    JC 0x00539391                       ; 0053938d
        ;   XREF to: 00539391 (CONDITIONAL_JUMP)  ; LAB_00539391
    XOR EDX,EDX                         ; 0053938f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539391
        ;   Label: LAB_00539391
    CMP EDI,dword ptr [EAX + 0x15aeb8]  ; 00539394
    JNZ 0x0053939e                      ; 0053939a
        ;   XREF to: 0053939e (CONDITIONAL_JUMP)  ; LAB_0053939e
    XOR EDX,EDX                         ; 0053939c
    CMP dword ptr [EBP + 0x1c],0x1      ; 0053939e
        ;   Label: LAB_0053939e
    JLE 0x005393a9                      ; 005393a2
        ;   XREF to: 005393a9 (CONDITIONAL_JUMP)  ; LAB_005393a9
    MOV EDX,0x1                         ; 005393a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005393a9
        ;   Label: LAB_005393a9
    CMP dword ptr [EAX + 0x15aeb8],0x0  ; 005393ac
    JL 0x005393b9                       ; 005393b3
        ;   XREF to: 005393b9 (CONDITIONAL_JUMP)  ; LAB_005393b9
    TEST EDX,EDX                        ; 005393b5
    JZ 0x005393dd                       ; 005393b7
        ;   XREF to: 005393dd (CONDITIONAL_JUMP)  ; LAB_005393dd
    PUSH EDI                            ; 005393b9
        ;   Label: LAB_005393b9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005393ba
    MOV EAX,[0x020b1520]                ; 005393bd | DAT_020b1520
    PUSH EDX                            ; 005393c2
    MOV ESI,0x1                         ; 005393c3
    MOV dword ptr [EDX + 0x15ae5c],EAX  ; 005393c8
    CALL FUN_0052ddf0                   ; 005393ce
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ddf0()
    ADD ESP,0x8                         ; 005393d3
    MOV dword ptr [ESP + 0x1cc],ESI     ; 005393d6
    XOR EDI,EDI                         ; 005393dd
        ;   Label: LAB_005393dd
    MOV dword ptr [0x02093938],EDI      ; 005393df | DAT_02093938
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 005393e5
        ;   Label: LAB_005393e5
    MOV ESP,EBP                         ; 005393ec
    POP EBP                             ; 005393ee
    POP EDI                             ; 005393ef
    POP ESI                             ; 005393f0
    POP EBX                             ; 005393f1
    RET                                 ; 005393f2
    MOV dword ptr [EBP + 0x1c],0x1      ; 005393f3
        ;   Label: LAB_005393f3
    JMP 0x00538d69                      ; 005393fa
        ;   XREF to: 00538d69 (UNCONDITIONAL_JUMP)  ; LAB_00538d69
    MOV EDX,dword ptr [0x00616494]      ; 005393ff | DAT_00616494
        ;   Label: LAB_005393ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539405
    FLD float ptr [EDX + 0x284]         ; 00539408 | DAT_01cb6b84
    FSUBR float ptr [EAX + 0x15aec8]    ; 0053940e
    FST float ptr [EAX + 0x15aec8]      ; 00539414
    FLDZ                                ; 0053941a
    FCOMPP                              ; 0053941c
    FNSTSW AX                           ; 0053941e
    SAHF                                ; 00539420
    JNC 0x00539462                      ; 00539421
        ;   XREF to: 00539462 (CONDITIONAL_JUMP)  ; LAB_00539462
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539423
    MOV EDX,dword ptr [EAX + 0x15aec4]  ; 00539426
    TEST EDX,EDX                        ; 0053942c
    JL 0x0053943d                       ; 0053942e
        ;   XREF to: 0053943d (CONDITIONAL_JUMP)  ; LAB_0053943d
    MOV EAX,EDX                         ; 00539430
    MOV EDX,dword ptr [EBP + 0x14]      ; 00539432
    CMP EAX,dword ptr [EDX + 0x15aeb8]  ; 00539435
    JNZ 0x00539446                      ; 0053943b
        ;   XREF to: 00539446 (CONDITIONAL_JUMP)  ; LAB_00539446
    XOR EAX,EAX                         ; 0053943d
        ;   Label: LAB_0053943d
    MOV ESP,EBP                         ; 0053943f
    POP EBP                             ; 00539441
    POP EDI                             ; 00539442
    POP ESI                             ; 00539443
    POP EBX                             ; 00539444
    RET                                 ; 00539445
    MOV EBX,dword ptr [EDX + 0x15aec4]  ; 00539446
        ;   Label: LAB_00539446
    PUSH EBX                            ; 0053944c
    PUSH EDX                            ; 0053944d
    CALL FUN_0052ddf0                   ; 0053944e
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ddf0()
    MOV EAX,0x1                         ; 00539453
    ADD ESP,0x8                         ; 00539458
    MOV ESP,EBP                         ; 0053945b
    POP EBP                             ; 0053945d
    POP EDI                             ; 0053945e
    POP ESI                             ; 0053945f
    POP EBX                             ; 00539460
    RET                                 ; 00539461
    MOV dword ptr [EBP + 0x1c],0x1      ; 00539462
        ;   Label: LAB_00539462
    JMP 0x00538d7f                      ; 00539469
        ;   XREF to: 00538d7f (UNCONDITIONAL_JUMP)  ; LAB_00538d7f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053946e
        ;   Label: LAB_0053946e
    MOV EDX,dword ptr [EDX]             ; 00539471
    LEA EAX,[EDX*0x4 + 0x0]             ; 00539473
    ADD EAX,EDX                         ; 0053947a
    ADD EAX,EAX                         ; 0053947c
    MOV dword ptr [ESP + 0x208],EAX     ; 0053947e
    MOV EAX,[0x00616494]                ; 00539485 | DAT_00616494
    FILD dword ptr [ESP + 0x208]        ; 0053948a
    FMUL float ptr [EAX + 0x284]        ; 00539491 | DAT_01cb6b84
    CALL FUN_005b7ff0                   ; 00539497
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1b4]       ; 0053949c
    CMP dword ptr [ESP + 0x1b4],0x3     ; 005394a3
    JGE 0x005394b8                      ; 005394ab
        ;   XREF to: 005394b8 (CONDITIONAL_JUMP)  ; LAB_005394b8
    MOV dword ptr [ESP + 0x1b4],0x3     ; 005394ad
    MOV EDX,dword ptr [EBP + 0x14]      ; 005394b8
        ;   Label: LAB_005394b8
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005394bb
    MOV ECX,dword ptr [EDX]             ; 005394c2
    CMP EAX,ECX                         ; 005394c4
    JLE 0x005394cf                      ; 005394c6
        ;   XREF to: 005394cf (CONDITIONAL_JUMP)  ; LAB_005394cf
    MOV dword ptr [ESP + 0x1b4],ECX     ; 005394c8
    MOV EDX,dword ptr [0x00616494]      ; 005394cf | DAT_00616494
        ;   Label: LAB_005394cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005394d5
    FLD float ptr [EDX + 0x284]         ; 005394d8 | DAT_01cb6b84
    FSUBR float ptr [EAX + 0x15aec0]    ; 005394de
    FST float ptr [EAX + 0x15aec0]      ; 005394e4
    FLDZ                                ; 005394ea
    FCOMPP                              ; 005394ec
    FNSTSW AX                           ; 005394ee
    SAHF                                ; 005394f0
    JC 0x00538fc2                       ; 005394f1
        ;   XREF to: 00538fc2 (CONDITIONAL_JUMP)  ; LAB_00538fc2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005394f7
    MOV dword ptr [EAX + 0x15aebc],0xffffffff ; 005394fa
    MOV dword ptr [EAX + 0x15aec0],0x0  ; 00539504
    JMP 0x00538fc2                      ; 0053950e
        ;   XREF to: 00538fc2 (UNCONDITIONAL_JUMP)  ; LAB_00538fc2
    ADD EAX,dword ptr [ESP + 0x1f0]     ; 00539513
        ;   Label: LAB_00539513
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0053951a | DAT_01fb3320
    PUSH EBX                            ; 00539520
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00539521
    CALL dword ptr [EAX + 0x50]         ; 00539527
    ADD ESP,0x4                         ; 0053952a
    TEST EAX,EAX                        ; 0053952d
    JZ 0x00539600                       ; 0053952f
        ;   XREF to: 00539600 (CONDITIONAL_JUMP)  ; LAB_00539600
    CMP EBX,dword ptr [EBP + 0x18]      ; 00539535
    JZ 0x00539600                       ; 00539538
        ;   XREF to: 00539600 (CONDITIONAL_JUMP)  ; LAB_00539600
    LEA EAX,[EBX + 0x20]                ; 0053953e
    MOV EDX,dword ptr [ESP + 0x1ec]     ; 00539541
    FLD float ptr [EAX]                 ; 00539548
    FSUB float ptr [EDX]                ; 0053954a
    FMUL ST0                            ; 0053954c
    FLD float ptr [EAX + 0x4]           ; 0053954e
    FSUB float ptr [EDX + 0x4]          ; 00539551
    FMUL ST0                            ; 00539554
    FLD float ptr [EAX + 0x8]           ; 00539556
    FXCH                                ; 00539559
    FADDP ST2,ST0                       ; 0053955b
    FSUB float ptr [EDX + 0x8]          ; 0053955d
    FMUL ST0                            ; 00539560
    FADDP                               ; 00539562
    FCOMP float ptr [ESP + 0x1d4]       ; 00539564
    FNSTSW AX                           ; 0053956b
    SAHF                                ; 0053956d
    JA 0x00539600                       ; 0053956e
        ;   XREF to: 00539600 (CONDITIONAL_JUMP)  ; LAB_00539600
    MOV EAX,[0x020a2794]                ; 00539574 | DAT_020a2794
    MOV dword ptr [EAX*0x4 + 0x20a2798],EBX ; 00539579 | DAT_020a2798
    PUSH EBX                            ; 00539580
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00539581
    LEA ESI,[ESP + 0xd8]                ; 00539587
    LEA EDI,[ESP + 0xa8]                ; 0053958e
    CALL dword ptr [EAX + 0x24]         ; 00539595
    MOV ECX,0x6                         ; 00539598
    LEA ESI,[ESP + 0xd8]                ; 0053959d
    ADD ESP,0x4                         ; 005395a4
    MOVSD.REP ES:EDI,ESI                ; 005395a7
    IMUL EBX,dword ptr [0x020a2794],0x18 ; 005395a9 | DAT_020a2794
    ADD EBX,0x20a46d8                   ; 005395b0
    LEA EDI,[ESP + 0xa4]                ; 005395b6
    MOV ESI,EBX                         ; 005395bd
    CMP EBX,EDI                         ; 005395bf
    JZ 0x005395e0                       ; 005395c1
        ;   XREF to: 005395e0 (CONDITIONAL_JUMP)  ; LAB_005395e0
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005395c3
    MOV dword ptr [EBX],EAX             ; 005395ca
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005395cc
    MOV dword ptr [EBX + 0x4],EAX       ; 005395d3
    MOV EAX,dword ptr [ESP + 0xac]      ; 005395d6
    MOV dword ptr [EBX + 0x8],EAX       ; 005395dd
    LEA EBX,[EDI + 0xc]                 ; 005395e0
        ;   Label: LAB_005395e0
    LEA EAX,[ESI + 0xc]                 ; 005395e3
    CMP EAX,EBX                         ; 005395e6
    JZ 0x005395fa                       ; 005395e8
        ;   XREF to: 005395fa (CONDITIONAL_JUMP)  ; LAB_005395fa
    MOV EDX,dword ptr [EBX]             ; 005395ea
    MOV dword ptr [EAX],EDX             ; 005395ec
    MOV EDX,dword ptr [EBX + 0x4]       ; 005395ee
    MOV dword ptr [EAX + 0x4],EDX       ; 005395f1
    MOV EDX,dword ptr [EBX + 0x8]       ; 005395f4
    MOV dword ptr [EAX + 0x8],EDX       ; 005395f7
    INC dword ptr [0x020a2794]          ; 005395fa | DAT_020a2794
        ;   Label: LAB_005395fa
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 00539600
        ;   Label: LAB_00539600
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 00539607
    INC EDX                             ; 0053960e
    ADD EAX,0x4                         ; 0053960f
    MOV dword ptr [ESP + 0x1f4],EDX     ; 00539612
    MOV dword ptr [ESP + 0x1f0],EAX     ; 00539619
    JMP 0x00539242                      ; 00539620
        ;   XREF to: 00539242 (UNCONDITIONAL_JUMP)  ; LAB_00539242
    IMUL EBX,EAX,0x1a4                  ; 00539625
        ;   Label: LAB_00539625
    MOV EAX,EDX                         ; 0053962b
    MOV EDX,dword ptr [ESP + 0x1e4]     ; 0053962d
    CMP EDX,dword ptr [EBX + EAX*0x1 + 0x1a0] ; 00539634
    JNZ 0x005397bb                      ; 0053963b
        ;   XREF to: 005397bb (CONDITIONAL_JUMP)  ; LAB_005397bb
    MOV EDX,dword ptr [ESP + 0x1dc]     ; 00539641
    MOV EDI,dword ptr [EBP + 0x18]      ; 00539648
    ADD EBX,EDX                         ; 0053964b
    LEA EAX,[ESP + 0x8]                 ; 0053964d
    MOV ESI,dword ptr [0x02093938]      ; 00539651 | DAT_02093938
    MOV ECX,dword ptr [EBX + 0x1a0]     ; 00539657
    MOV dword ptr [ESP + 0x200],EAX     ; 0053965d
    TEST ECX,ECX                        ; 00539664
    JZ 0x005396ea                       ; 00539666
        ;   XREF to: 005396ea (CONDITIONAL_JUMP)  ; LAB_005396ea
    LEA EAX,[EBX + 0x100]               ; 0053966c
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 00539672
    FLD float ptr [EAX]                 ; 00539679
    FSUB float ptr [EDX]                ; 0053967b
    FMUL ST0                            ; 0053967d
    FLD float ptr [EAX + 0x4]           ; 0053967f
    FSUB float ptr [EDX + 0x4]          ; 00539682
    FMUL ST0                            ; 00539685
    FLD float ptr [EAX + 0x8]           ; 00539687
    FXCH                                ; 0053968a
    FADDP ST2,ST0                       ; 0053968c
    FSUB float ptr [EDX + 0x8]          ; 0053968e
    FMUL ST0                            ; 00539691
    FADDP                               ; 00539693
    FCOMP float ptr [ESP + 0x1e0]       ; 00539695
    FNSTSW AX                           ; 0053969c
    SAHF                                ; 0053969e
    JBE 0x005396f3                      ; 0053969f
        ;   XREF to: 005396f3 (CONDITIONAL_JUMP)  ; LAB_005396f3
    XOR EDI,EDI                         ; 005396a1
    MOV dword ptr [ESP + 0x1a8],EDI     ; 005396a3
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 005396aa
        ;   Label: LAB_005396aa
    MOV dword ptr [ESP],EAX             ; 005396b1
    CMP dword ptr [EBP + 0x1c],0x0      ; 005396b4
        ;   Label: LAB_005396b4
    JZ 0x005397c7                       ; 005396b8
        ;   XREF to: 005397c7 (CONDITIONAL_JUMP)  ; LAB_005397c7
    MOV EDX,dword ptr [ESP]             ; 005396be
        ;   Label: LAB_005396be
    MOV EAX,[0x02093938]                ; 005396c1 | DAT_02093938
    MOV EDI,dword ptr [ESP + 0x1b4]     ; 005396c6
    LEA ESI,[EAX + 0x1]                 ; 005396cd
    DEC EDI                             ; 005396d0
    MOV dword ptr [EAX*0x4 + 0x209394c],EDX ; 005396d1 | DAT_0209394c
    MOV dword ptr [0x02093938],ESI      ; 005396d8 | DAT_02093938
    MOV dword ptr [ESP + 0x1b4],EDI     ; 005396de
    JMP 0x00539285                      ; 005396e5
        ;   XREF to: 00539285 (UNCONDITIONAL_JUMP)  ; LAB_00539285
    MOV dword ptr [ESP + 0x1a8],ECX     ; 005396ea
        ;   Label: LAB_005396ea
    JMP 0x005396aa                      ; 005396f1
        ;   XREF to: 005396aa (UNCONDITIONAL_JUMP)  ; LAB_005396aa
    PUSH dword ptr [ESP + 0x1d8]        ; 005396f3
        ;   Label: LAB_005396f3
    PUSH EDX                            ; 005396fa
    PUSH EBX                            ; 005396fb
    CALL FUN_0053ae20                   ; 005396fc
        ;   XREF to: 0053ae20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ae20()
    ADD ESP,0xc                         ; 00539701
    TEST EAX,EAX                        ; 00539704
    JZ 0x00539771                       ; 00539706
        ;   XREF to: 00539771 (CONDITIONAL_JUMP)  ; LAB_00539771
    IMUL EAX,ESI,0xf0                   ; 00539708
    MOV ECX,dword ptr [EBX + 0x140]     ; 0053970e
    ADD EAX,0x2093d34                   ; 00539714
    TEST ECX,ECX                        ; 00539719
    JZ 0x0053977d                       ; 0053971b
        ;   XREF to: 0053977d (CONDITIONAL_JUMP)  ; LAB_0053977d
    XOR ESI,ESI                         ; 0053971d
    MOV EBX,EAX                         ; 0053971f
    MOV dword ptr [ESP + 0x204],ESI     ; 00539721
    LEA ESI,[EAX + 0xf0]                ; 00539728
    PUSH 0x0                            ; 0053972e
        ;   Label: LAB_0053972e
    PUSH 0x61b97c                       ; 00539730 | DAT_0061b97c
    MOV EAX,dword ptr [ESP + 0x208]     ; 00539735
    PUSH EAX                            ; 0053973c
    PUSH EDI                            ; 0053973d
    PUSH EBX                            ; 0053973e
    CALL FUN_005386e0                   ; 0053973f
        ;   XREF to: 005386e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005386e0()
    MOV dword ptr [ESP + 0x21c],EAX     ; 00539744
    FLD float ptr [ESP + 0x21c]         ; 0053974b
    ADD ESP,0x14                        ; 00539752
    FADD float ptr [ESP + 0x204]        ; 00539755
    ADD EBX,0x28                        ; 0053975c
    FSTP float ptr [ESP + 0x204]        ; 0053975f
    CMP EBX,ESI                         ; 00539766
    JNZ 0x0053972e                      ; 00539768
        ;   XREF to: 0053972e (CONDITIONAL_JUMP)  ; LAB_0053972e
    MOV EAX,dword ptr [ESP + 0x204]     ; 0053976a
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00539771
        ;   Label: LAB_00539771
    JMP 0x005396aa                      ; 00539778
        ;   XREF to: 005396aa (UNCONDITIONAL_JUMP)  ; LAB_005396aa
    PUSH 0x1                            ; 0053977d
        ;   Label: LAB_0053977d
    PUSH 0x61b97c                       ; 0053977f | DAT_0061b97c
    LEA EBX,[ESP + 0x10]                ; 00539784
    PUSH EBX                            ; 00539788
    PUSH EDI                            ; 00539789
    PUSH EAX                            ; 0053978a
    CALL FUN_005386e0                   ; 0053978b
        ;   XREF to: 005386e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005386e0()
    MOV dword ptr [ESP + 0x21c],EAX     ; 00539790
    FLD float ptr [ESP + 0x21c]         ; 00539797
    ADD ESP,0x14                        ; 0053979e
    FSTP float ptr [ESP + 0x204]        ; 005397a1
    MOV EAX,dword ptr [ESP + 0x204]     ; 005397a8
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005397af
    JMP 0x005396aa                      ; 005397b6
        ;   XREF to: 005396aa (UNCONDITIONAL_JUMP)  ; LAB_005396aa
    MOV dword ptr [ESP],0xc7c34ff3      ; 005397bb
        ;   Label: LAB_005397bb
    JMP 0x005396b4                      ; 005397c2
        ;   XREF to: 005396b4 (UNCONDITIONAL_JUMP)  ; LAB_005396b4
    FLDZ                                ; 005397c7
        ;   Label: LAB_005397c7
    FCOMP float ptr [ESP]               ; 005397c9
    FNSTSW AX                           ; 005397cc
    SAHF                                ; 005397ce
    JNC 0x005396be                      ; 005397cf
        ;   XREF to: 005396be (CONDITIONAL_JUMP)  ; LAB_005396be
    MOV EDX,dword ptr [EBP + 0x14]      ; 005397d5
    MOV EAX,[0x02093938]                ; 005397d8 | DAT_02093938
    CMP EAX,dword ptr [EDX + 0x15aeb8]  ; 005397dd
    JNZ 0x005397f5                      ; 005397e3
        ;   XREF to: 005397f5 (CONDITIONAL_JUMP)  ; LAB_005397f5
    FLD float ptr [ESP]                 ; 005397e5
    FLD ST0                             ; 005397e8
    FMUL double ptr [0x005e600d]        ; 005397ea | DAT_005e600d
    FSTP ST1                            ; 005397f0
    FSTP float ptr [ESP]                ; 005397f2
    MOV EDX,dword ptr [EBP + 0x14]      ; 005397f5
        ;   Label: LAB_005397f5
    MOV EAX,[0x02093938]                ; 005397f8 | DAT_02093938
    CMP EAX,dword ptr [EDX + 0x15aebc]  ; 005397fd
    JNZ 0x005396be                      ; 00539803
        ;   XREF to: 005396be (CONDITIONAL_JUMP)  ; LAB_005396be
    FLD float ptr [ESP]                 ; 00539809
    FLD ST0                             ; 0053980c
    FMUL double ptr [0x005e6015]        ; 0053980e | DAT_005e6015
    FSTP ST1                            ; 00539814
    FSTP float ptr [ESP]                ; 00539816
    JMP 0x005396be                      ; 00539819
        ;   XREF to: 005396be (UNCONDITIONAL_JUMP)  ; LAB_005396be

