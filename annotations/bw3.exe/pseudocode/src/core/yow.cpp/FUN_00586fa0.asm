; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_yow_cpp_FUN_00586fa0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00586f90 = 0058704b
;   undefined4 DAT_005d8327
;   undefined4 DAT_005d832f
;   undefined4 DAT_005d8337
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586fa0
        ;   Label: core_yow.cpp_FUN_00586fa0
    PUSH ESI                            ; 00586fa1
    PUSH EDI                            ; 00586fa2
    PUSH EBP                            ; 00586fa3
    MOV EBP,ESP                         ; 00586fa4
    SUB ESP,0x90                        ; 00586fa6
    AND ESP,0xfffffff8                  ; 00586fac
    MOV EBX,dword ptr [EBP + 0x14]      ; 00586faf
    PUSH EBX                            ; 00586fb2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00586fb3
    CALL dword ptr [EAX + 0x10c]        ; 00586fb9
    ADD ESP,0x4                         ; 00586fbf
    TEST EAX,EAX                        ; 00586fc2
    JZ 0x00586fcf                       ; 00586fc4
        ;   XREF to: 00586fcf (CONDITIONAL_JUMP)  ; LAB_00586fcf
    XOR EAX,EAX                         ; 00586fc6
    MOV ESP,EBP                         ; 00586fc8
    POP EBP                             ; 00586fca
    POP EDI                             ; 00586fcb
    POP ESI                             ; 00586fcc
    POP EBX                             ; 00586fcd
    RET                                 ; 00586fce
    MOV EDX,dword ptr [EBX + 0xd06c]    ; 00586fcf
        ;   Label: LAB_00586fcf
    PUSH EDX                            ; 00586fd5
    LEA EAX,[EBX + 0x158]               ; 00586fd6
    PUSH EAX                            ; 00586fdc
    LEA ESI,[ESP + 0x74]                ; 00586fdd
    LEA EDI,[ESP + 0x50]                ; 00586fe1
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00586fe5
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x74]                ; 00586fea
    ADD ESP,0x8                         ; 00586fee
    LEA EAX,[ESP + 0x48]                ; 00586ff1
    MOV ECX,dword ptr [EBP + 0x18]      ; 00586ff5
    MOVSD ES:EDI,ESI                    ; 00586ff8
    MOVSD ES:EDI,ESI                    ; 00586ff9
    MOVSD ES:EDI,ESI                    ; 00586ffa
    CMP EAX,ECX                         ; 00586ffb
    JNZ 0x0058712f                      ; 00586ffd
        ;   XREF to: 0058712f (CONDITIONAL_JUMP)  ; LAB_0058712f
    MOV ESI,0x1                         ; 00587003
        ;   Label: LAB_00587003
    XOR EDI,EDI                         ; 00587008
    LEA EAX,[EBX + 0x158]               ; 0058700a
    MOV dword ptr [ESP + 0x84],EDI      ; 00587010
    MOV dword ptr [ESP + 0x88],EAX      ; 00587017
    MOV dword ptr [ESP + 0x8c],ESI      ; 0058701e
    MOV EDX,dword ptr [ESP + 0x84]      ; 00587025
        ;   Label: LAB_00587025
    ADD EDX,dword ptr [EBX + 0x6c]      ; 0058702c
    MOV ESI,0x4                         ; 0058702f
    MOV EAX,EDX                         ; 00587034
    SAR EDX,0x1f                        ; 00587036
    IDIV ESI                            ; 00587039
    CMP EDX,0x3                         ; 0058703b
    JA 0x00587109                       ; 0058703e
        ;   XREF to: 00587109 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x586f90]  ; 00587044 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd05c]    ; 0058704b
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00587051
    JZ 0x00587109                       ; 00587059
        ;   XREF to: 00587109 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 0058705f
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00587060
    PUSH ESI                            ; 00587067
    LEA ESI,[ESP + 0x8]                 ; 00587068
    LEA EDI,[ESP + 0x68]                ; 0058706c
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00587070
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 00587075
    LEA EDX,[ESP + 0x68]                ; 00587079
    ADD ESP,0x8                         ; 0058707d
    LEA EAX,[ESP + 0x24]                ; 00587080
    MOVSD ES:EDI,ESI                    ; 00587084
    MOVSD ES:EDI,ESI                    ; 00587085
    MOVSD ES:EDI,ESI                    ; 00587086
    CMP EAX,EDX                         ; 00587087
    JZ 0x005870a3                       ; 00587089
        ;   XREF to: 005870a3 (CONDITIONAL_JUMP)  ; LAB_005870a3
    MOV EAX,dword ptr [ESP + 0x60]      ; 0058708b
    MOV dword ptr [ESP + 0x24],EAX      ; 0058708f
    MOV EAX,dword ptr [ESP + 0x64]      ; 00587093
    MOV dword ptr [ESP + 0x28],EAX      ; 00587097
    MOV EAX,dword ptr [ESP + 0x68]      ; 0058709b
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058709f
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005870a3
        ;   Label: LAB_005870a3
    FLD double ptr [0x005d8327]         ; 005870ab | DAT_005d8327
    FLD float ptr [ESP + 0x24]          ; 005870b1
    FMUL ST1                            ; 005870b5
    FLD float ptr [ESP + 0x28]          ; 005870b7
    FMUL double ptr [0x005d832f]        ; 005870bb | DAT_005d832f
    FLD float ptr [ESP + 0x48]          ; 005870c1
    FMULP ST3                           ; 005870c5
    FLD float ptr [ESP + 0x4c]          ; 005870c7
    FMUL double ptr [0x005d8337]        ; 005870cb | DAT_005d8337
    MOV EAX,dword ptr [EBP + 0x18]      ; 005870d1
    FADDP                               ; 005870d4
    FXCH ST2                            ; 005870d6
    FADDP                               ; 005870d8
    FXCH                                ; 005870da
    FSTP float ptr [ESP + 0x28]         ; 005870dc
    ADD EDX,EAX                         ; 005870e0
    LEA EAX,[ESP + 0x24]                ; 005870e2
    FSTP float ptr [ESP + 0x24]         ; 005870e6
        ;   Label: LAB_005870e6
    CMP EDX,EAX                         ; 005870ea
    JZ 0x00587102                       ; 005870ec
        ;   XREF to: 00587102 (CONDITIONAL_JUMP)  ; LAB_00587102
    MOV EAX,dword ptr [ESP + 0x24]      ; 005870ee
    MOV dword ptr [EDX],EAX             ; 005870f2
    MOV EAX,dword ptr [ESP + 0x28]      ; 005870f4
    MOV dword ptr [EDX + 0x4],EAX       ; 005870f8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005870fb
    MOV dword ptr [EDX + 0x8],EAX       ; 005870ff
        ;   Label: LAB_005870ff
    INC dword ptr [ESP + 0x8c]          ; 00587102
        ;   Label: LAB_00587102
    MOV ECX,dword ptr [ESP + 0x84]      ; 00587109
        ;   Label: default
    INC ECX                             ; 00587110
    MOV dword ptr [ESP + 0x84],ECX      ; 00587111
    CMP ECX,0x4                         ; 00587118
    JL 0x00587025                       ; 0058711b
        ;   XREF to: 00587025 (CONDITIONAL_JUMP)  ; LAB_00587025
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00587121
    MOV ESP,EBP                         ; 00587128
    POP EBP                             ; 0058712a
    POP EDI                             ; 0058712b
    POP ESI                             ; 0058712c
    POP EBX                             ; 0058712d
    RET                                 ; 0058712e
    MOV EAX,dword ptr [ESP + 0x48]      ; 0058712f
        ;   Label: LAB_0058712f
    MOV dword ptr [ECX],EAX             ; 00587133
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00587135
    MOV dword ptr [ECX + 0x4],EAX       ; 00587139
    MOV EAX,dword ptr [ESP + 0x50]      ; 0058713c
    MOV dword ptr [ECX + 0x8],EAX       ; 00587140
    JMP 0x00587003                      ; 00587143
        ;   XREF to: 00587003 (UNCONDITIONAL_JUMP)  ; LAB_00587003
    MOV EAX,dword ptr [EBX + 0xd060]    ; 00587148
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058714e
    JZ 0x00587109                       ; 00587156
        ;   XREF to: 00587109 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 00587158
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00587159
    PUSH EDX                            ; 00587160
    LEA ESI,[ESP + 0x80]                ; 00587161
    LEA EDI,[ESP + 0x20]                ; 00587168
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0058716c
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x80]                ; 00587171
    LEA EAX,[ESP + 0x20]                ; 00587178
    ADD ESP,0x8                         ; 0058717c
    LEA EDX,[ESP + 0x24]                ; 0058717f
    MOVSD ES:EDI,ESI                    ; 00587183
    MOVSD ES:EDI,ESI                    ; 00587184
    MOVSD ES:EDI,ESI                    ; 00587185
    CMP EDX,EAX                         ; 00587186
    JZ 0x005871a2                       ; 00587188
        ;   XREF to: 005871a2 (CONDITIONAL_JUMP)  ; LAB_005871a2
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058718a
    MOV dword ptr [ESP + 0x24],EAX      ; 0058718e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00587192
    MOV dword ptr [ESP + 0x28],EAX      ; 00587196
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058719a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058719e
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005871a2
        ;   Label: LAB_005871a2
    FLD double ptr [0x005d8327]         ; 005871aa | DAT_005d8327
    FLD float ptr [ESP + 0x24]          ; 005871b0
    FMUL ST1                            ; 005871b4
    FLD float ptr [ESP + 0x28]          ; 005871b6
    FMUL double ptr [0x005d832f]        ; 005871ba | DAT_005d832f
    FLD float ptr [ESP + 0x48]          ; 005871c0
    FMULP ST3                           ; 005871c4
    FLD float ptr [ESP + 0x4c]          ; 005871c6
    FMUL double ptr [0x005d8337]        ; 005871ca | DAT_005d8337
    MOV ESI,dword ptr [EBP + 0x18]      ; 005871d0
    LEA EAX,[ESP + 0x24]                ; 005871d3
    FADDP                               ; 005871d7
    FXCH ST2                            ; 005871d9
    FADDP                               ; 005871db
    FXCH                                ; 005871dd
    FSTP float ptr [ESP + 0x28]         ; 005871df
    ADD EDX,ESI                         ; 005871e3
    JMP 0x005870e6                      ; 005871e5
        ;   XREF to: 005870e6 (UNCONDITIONAL_JUMP)  ; LAB_005870e6
    MOV EAX,dword ptr [EBX + 0xd064]    ; 005871ea
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005871f0
    JZ 0x00587109                       ; 005871f8
        ;   XREF to: 00587109 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 005871fe
    MOV EDI,dword ptr [ESP + 0x8c]      ; 005871ff
    PUSH EDI                            ; 00587206
    LEA ESI,[ESP + 0x44]                ; 00587207
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0058720b
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 00587210
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00587213
    LEA EDI,[ESP + 0x54]                ; 0058721b
    LEA ESI,[ESP + 0x3c]                ; 0058721f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00587223
    LEA EAX,[ESP + 0x54]                ; 00587226
    ADD EDX,ECX                         ; 0058722a
    MOVSD ES:EDI,ESI                    ; 0058722c
    MOVSD ES:EDI,ESI                    ; 0058722d
    MOVSD ES:EDI,ESI                    ; 0058722e
    CMP EDX,EAX                         ; 0058722f
    JZ 0x00587102                       ; 00587231
        ;   XREF to: 00587102 (CONDITIONAL_JUMP)  ; LAB_00587102
    MOV EAX,dword ptr [ESP + 0x54]      ; 00587237
    MOV dword ptr [EDX],EAX             ; 0058723b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0058723d
    MOV dword ptr [EDX + 0x4],EAX       ; 00587241
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00587244
    JMP 0x005870ff                      ; 00587248
        ;   XREF to: 005870ff (UNCONDITIONAL_JUMP)  ; LAB_005870ff
    MOV EAX,dword ptr [EBX + 0xd068]    ; 0058724d
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00587253
    JZ 0x00587109                       ; 0058725b
        ;   XREF to: 00587109 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 00587261
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00587262
    PUSH ESI                            ; 00587269
    LEA ESI,[ESP + 0x14]                ; 0058726a
    LEA EDI,[ESP + 0x38]                ; 0058726e
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00587272
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x14]                ; 00587277
    ADD ESP,0x8                         ; 0058727b
    MOVSD ES:EDI,ESI                    ; 0058727e
    MOVSD ES:EDI,ESI                    ; 0058727f
    MOVSD ES:EDI,ESI                    ; 00587280
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00587281
    ADD EDX,dword ptr [EBP + 0x18]      ; 00587289
    LEA EAX,[ESP + 0x30]                ; 0058728c
    CMP EDX,EAX                         ; 00587290
    JZ 0x00587102                       ; 00587292
        ;   XREF to: 00587102 (CONDITIONAL_JUMP)  ; LAB_00587102
    MOV EAX,dword ptr [ESP + 0x30]      ; 00587298
    MOV dword ptr [EDX],EAX             ; 0058729c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058729e
    MOV dword ptr [EDX + 0x4],EAX       ; 005872a2
    MOV EAX,dword ptr [ESP + 0x38]      ; 005872a5
    JMP 0x005870ff                      ; 005872a9
        ;   XREF to: 005870ff (UNCONDITIONAL_JUMP)  ; LAB_005870ff

