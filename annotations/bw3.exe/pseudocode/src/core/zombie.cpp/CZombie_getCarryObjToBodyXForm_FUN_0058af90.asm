; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   undefined4 DAT_005d873f
;   undefined4 DAT_005d8743
;   undefined4 DAT_005d8747
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

    PUSH EBX                            ; 0058af90
        ;   Label: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90
    PUSH EDI                            ; 0058af91
    PUSH EBP                            ; 0058af92
    MOV EBP,ESP                         ; 0058af93
    SUB ESP,0x200                       ; 0058af95
    SUB EBP,0x7a                        ; 0058af9b
    MOV EBX,dword ptr [EBP + 0x8a]      ; 0058af9e
    MOV dword ptr [EBP + 0x72],ESI      ; 0058afa4
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0058afa7
    SHL EAX,0x3                         ; 0058afad
    MOV ESI,EAX                         ; 0058afb0
    SHL EAX,0x4                         ; 0058afb2
    SUB EAX,ESI                         ; 0058afb5
    ADD EAX,EBX                         ; 0058afb7
    MOV EDX,dword ptr [EBX + 0xd140]    ; 0058afb9
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 0058afbf
    CMP EDX,0x4                         ; 0058afc5
    JZ 0x0058b22c                       ; 0058afc8
        ;   XREF to: 0058b22c (CONDITIONAL_JUMP)  ; LAB_0058b22c
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0058afce
    CMP EDX,dword ptr [EBX + 0xd0e8]    ; 0058afd4
    JZ 0x0058b22c                       ; 0058afda
        ;   XREF to: 0058b22c (CONDITIONAL_JUMP)  ; LAB_0058b22c
    MOV EAX,dword ptr [EAX + 0x25a8]    ; 0058afe0
    MOV dword ptr [EBP + 0x76],EAX      ; 0058afe6
        ;   Label: LAB_0058afe6
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0058afe9
    CMP EAX,dword ptr [EBX + 0xd0e8]    ; 0058afef
    JZ 0x0058b0e2                       ; 0058aff5
        ;   XREF to: 0058b0e2 (CONDITIONAL_JUMP)  ; LAB_0058b0e2
    MOV EAX,dword ptr [EBX + 0xd068]    ; 0058affb
    CMP EAX,0x1                         ; 0058b001
    JNC 0x0058b385                      ; 0058b004
        ;   XREF to: 0058b385 (CONDITIONAL_JUMP)  ; LAB_0058b385
    PUSH ESI                            ; 0058b00a
        ;   Label: LAB_0058b00a
    MOV EAX,dword ptr [ESI + 0x154]     ; 0058b00b
    LEA ESI,[EBP + 0xffffff52]          ; 0058b011
    LEA EDI,[EBP + 0xffffff3a]          ; 0058b017
    CALL dword ptr [EAX + 0x1c]         ; 0058b01d
    MOV ECX,0x6                         ; 0058b020
    LEA ESI,[EBP + 0xffffff52]          ; 0058b025
    MOVSD.REP ES:EDI,ESI                ; 0058b02b
    LEA EAX,[EBP + 0xffffff3a]          ; 0058b02d
    FLD float ptr [EBP + 0xffffff3a]    ; 0058b033
    FLD float ptr [EBP + 0xffffff3e]    ; 0058b039
    FLD float ptr [EBP + 0xffffff42]    ; 0058b03f
    LEA EDI,[EBP + 0x2a]                ; 0058b045
    LEA ESI,[EBP + -0x72]               ; 0058b048
    FXCH ST2                            ; 0058b04b
    FADD float ptr [EAX + 0xc]          ; 0058b04d
    FXCH                                ; 0058b050
    FADD float ptr [EAX + 0x10]         ; 0058b052
    FXCH ST2                            ; 0058b055
    FADD float ptr [EAX + 0x14]         ; 0058b057
    FXCH                                ; 0058b05a
    FSTP float ptr [EBP + -0x72]        ; 0058b05c
    FXCH                                ; 0058b05f
    FSTP float ptr [EBP + -0x6e]        ; 0058b061
    FSTP float ptr [EBP + -0x6a]        ; 0058b064
    MOVSD ES:EDI,ESI                    ; 0058b067
    MOVSD ES:EDI,ESI                    ; 0058b068
    MOVSD ES:EDI,ESI                    ; 0058b069
    FLD float ptr [0x005d8743]          ; 0058b06a | DAT_005d8743
    FLD float ptr [EBP + 0x2a]          ; 0058b070
    FMUL ST1                            ; 0058b073
    FLD float ptr [EBP + 0x2e]          ; 0058b075
    FMUL ST2                            ; 0058b078
    FLD float ptr [EBP + 0x32]          ; 0058b07a
    FMULP ST3                           ; 0058b07d
    LEA EDI,[EBP + -0x12]               ; 0058b07f
    LEA ESI,[EBP + 0xffffff76]          ; 0058b082
    FXCH                                ; 0058b088
    FSTP float ptr [EBP + 0xffffff76]   ; 0058b08a
    FSTP float ptr [EBP + 0xffffff7a]   ; 0058b090
    FSTP float ptr [EBP + 0xffffff7e]   ; 0058b096
    MOVSD ES:EDI,ESI                    ; 0058b09c
    MOVSD ES:EDI,ESI                    ; 0058b09d
    MOVSD ES:EDI,ESI                    ; 0058b09e
    LEA EAX,[EBP + -0x66]               ; 0058b09f
    LEA ESI,[EBP + -0x12]               ; 0058b0a2
    ADD ESP,0x4                         ; 0058b0a5
    CMP EAX,ESI                         ; 0058b0a8
    JZ 0x0058b0be                       ; 0058b0aa
        ;   XREF to: 0058b0be (CONDITIONAL_JUMP)  ; LAB_0058b0be
    MOV EAX,dword ptr [EBP + -0x12]     ; 0058b0ac
    MOV dword ptr [EBP + -0x66],EAX     ; 0058b0af
    MOV EAX,dword ptr [EBP + -0xe]      ; 0058b0b2
    MOV dword ptr [EBP + -0x62],EAX     ; 0058b0b5
    MOV EAX,dword ptr [EBP + -0xa]      ; 0058b0b8
    MOV dword ptr [EBP + -0x5e],EAX     ; 0058b0bb
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0058b0be
        ;   Label: LAB_0058b0be
    SHL EAX,0x3                         ; 0058b0c4
    MOV ESI,EAX                         ; 0058b0c7
    SHL EAX,0x4                         ; 0058b0c9
    SUB EAX,ESI                         ; 0058b0cc
    MOV ECX,0xc                         ; 0058b0ce
    LEA EDI,[EBP + 0xfffffe7a]          ; 0058b0d3
    LEA ESI,[EBX + EAX*0x1 + 0x25b4]    ; 0058b0d9
    MOVSD.REP ES:EDI,ESI                ; 0058b0e0
    MOV ESI,dword ptr [EBP + 0x76]      ; 0058b0e2
        ;   Label: LAB_0058b0e2
    LEA EAX,[ESI*0x4 + 0x0]             ; 0058b0e5
    SUB EAX,ESI                         ; 0058b0ec
    LEA EDX,[EBX + 0xfd8]               ; 0058b0ee
    SHL EAX,0x4                         ; 0058b0f4
    MOV ECX,dword ptr [EBX + 0xd0ec]    ; 0058b0f7
    ADD EAX,EDX                         ; 0058b0fd
    CMP ESI,ECX                         ; 0058b0ff
    JNZ 0x0058b399                      ; 0058b101
        ;   XREF to: 0058b399 (CONDITIONAL_JUMP)  ; LAB_0058b399
    MOV EDX,0xbecccccd                  ; 0058b107
    LEA ESI,[EBP + 0x66]                ; 0058b10c
    LEA EDI,[EBP + -0x2a]               ; 0058b10f
    PUSH EAX                            ; 0058b112
    XOR ECX,ECX                         ; 0058b113
    LEA EAX,[EBP + -0x5a]               ; 0058b115
    MOV dword ptr [EBP + -0x5a],EDX     ; 0058b118
    PUSH EAX                            ; 0058b11b
    MOV dword ptr [EBP + -0x56],ECX     ; 0058b11c
    MOV dword ptr [EBP + -0x52],ECX     ; 0058b11f
    CALL core_xform.cpp_FUN_00583260    ; 0058b122
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + 0x66]                ; 0058b127
    MOVSD ES:EDI,ESI                    ; 0058b12a
    MOVSD ES:EDI,ESI                    ; 0058b12b
    MOVSD ES:EDI,ESI                    ; 0058b12c
    LEA EAX,[EBP + -0x2a]               ; 0058b12d
    LEA ESI,[EBP + -0x1e]               ; 0058b130
    ADD ESP,0x8                         ; 0058b133
    CMP ESI,EAX                         ; 0058b136
    JZ 0x0058b14c                       ; 0058b138
        ;   XREF to: 0058b14c (CONDITIONAL_JUMP)  ; LAB_0058b14c
    MOV EAX,dword ptr [EBP + -0x2a]     ; 0058b13a
    MOV dword ptr [EBP + -0x1e],EAX     ; 0058b13d
    MOV EAX,dword ptr [EBP + -0x26]     ; 0058b140
    MOV dword ptr [EBP + -0x1a],EAX     ; 0058b143
    MOV EAX,dword ptr [EBP + -0x22]     ; 0058b146
    MOV dword ptr [EBP + -0x16],EAX     ; 0058b149
        ;   Label: LAB_0058b149
    MOV ESI,dword ptr [EBP + 0x76]      ; 0058b14c
        ;   Label: LAB_0058b14c
    LEA EAX,[ESI*0x4 + 0x0]             ; 0058b14f
    SUB EAX,ESI                         ; 0058b156
    ADD EBX,0xfd8                       ; 0058b158
    SHL EAX,0x4                         ; 0058b15e
    ADD EAX,EBX                         ; 0058b161
    PUSH EAX                            ; 0058b163
    LEA EAX,[EBP + 0xfffffe7a]          ; 0058b164
    PUSH EAX                            ; 0058b16a
    LEA ESI,[EBP + 0xfffffeda]          ; 0058b16b
    LEA EDI,[EBP + 0xfffffeaa]          ; 0058b171
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0058b177
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0058b17c
    ADD ESP,0x8                         ; 0058b181
    LEA EAX,[EBP + 0xfffffeaa]          ; 0058b184
    LEA ESI,[EBP + 0xfffffeda]          ; 0058b18a
    PUSH EAX                            ; 0058b190
    LEA EAX,[EBP + -0x66]               ; 0058b191
    MOVSD.REP ES:EDI,ESI                ; 0058b194
    PUSH EAX                            ; 0058b196
    LEA ESI,[EBP + 0x1e]                ; 0058b197
    LEA EDI,[EBP + 0x5a]                ; 0058b19a
    CALL core_xform.cpp_FUN_00583260    ; 0058b19d
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    FLD float ptr [EBP + -0x1e]         ; 0058b1a2
    FLD float ptr [EBP + -0x1a]         ; 0058b1a5
    FLD float ptr [EBP + -0x16]         ; 0058b1a8
    FLD float ptr [EBP + 0xfffffeb6]    ; 0058b1ab
    FLD float ptr [EBP + 0xfffffec6]    ; 0058b1b1
    LEA ESI,[EBP + 0x1e]                ; 0058b1b7
    FLD float ptr [EBP + 0xfffffed6]    ; 0058b1ba
    MOVSD ES:EDI,ESI                    ; 0058b1c0
    MOVSD ES:EDI,ESI                    ; 0058b1c1
    MOVSD ES:EDI,ESI                    ; 0058b1c2
    MOV ECX,0xc                         ; 0058b1c3
    LEA EDI,[EBP + 0x4e]                ; 0058b1c8
    LEA ESI,[EBP + 0x42]                ; 0058b1cb
    FXCH ST5                            ; 0058b1ce
    FSUB float ptr [EBP + 0x5a]         ; 0058b1d0
    FXCH ST4                            ; 0058b1d3
    FSUB float ptr [EBP + 0x5e]         ; 0058b1d5
    FXCH ST3                            ; 0058b1d8
    FSUB float ptr [EBP + 0x62]         ; 0058b1da
    FXCH ST4                            ; 0058b1dd
    FSTP float ptr [EBP + 0x42]         ; 0058b1df
    FXCH ST2                            ; 0058b1e2
    FSTP float ptr [EBP + 0x46]         ; 0058b1e4
    FXCH ST2                            ; 0058b1e7
    FSTP float ptr [EBP + 0x4a]         ; 0058b1e9
    MOVSD ES:EDI,ESI                    ; 0058b1ec
    MOVSD ES:EDI,ESI                    ; 0058b1ed
    MOVSD ES:EDI,ESI                    ; 0058b1ee
    ADD ESP,0x8                         ; 0058b1ef
    MOV EDI,dword ptr [EBP + 0x72]      ; 0058b1f2
    LEA ESI,[EBP + 0xfffffeaa]          ; 0058b1f5
    FXCH                                ; 0058b1fb
    FADD float ptr [EBP + 0x4e]         ; 0058b1fd
    FXCH                                ; 0058b200
    FADD float ptr [EBP + 0x52]         ; 0058b202
    FXCH ST2                            ; 0058b205
    FADD float ptr [EBP + 0x56]         ; 0058b207
    FXCH                                ; 0058b20a
    FSTP float ptr [EBP + 0xfffffeb6]   ; 0058b20c
    FXCH                                ; 0058b212
    FSTP float ptr [EBP + 0xfffffec6]   ; 0058b214
    FSTP float ptr [EBP + 0xfffffed6]   ; 0058b21a
    MOVSD.REP ES:EDI,ESI                ; 0058b220
    MOV EAX,dword ptr [EBP + 0x72]      ; 0058b222
    LEA ESP,[EBP + 0x7a]                ; 0058b225
    POP EBP                             ; 0058b228
    POP EDI                             ; 0058b229
    POP EBX                             ; 0058b22a
    RET                                 ; 0058b22b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0058b22c
        ;   Label: LAB_0058b22c
    JMP 0x0058afe6                      ; 0058b232
        ;   XREF to: 0058afe6 (UNCONDITIONAL_JUMP)  ; LAB_0058afe6
    PUSH 0x3                            ; 0058b237
        ;   Label: LAB_0058b237
    PUSH 0x5d873f                       ; 0058b239 | DAT_005d873f
    LEA EAX,[EBX + 0x24a8]              ; 0058b23e
    PUSH EAX                            ; 0058b244
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0058b245
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0058b24a
    TEST EAX,EAX                        ; 0058b24d
    JNZ 0x0058b36b                      ; 0058b24f
        ;   XREF to: 0058b36b (CONDITIONAL_JUMP)  ; LAB_0058b36b
    MOV EAX,0xbf7c6a90                  ; 0058b255
    MOV EDX,0x3f7343c8                  ; 0058b25a
    MOV EDI,0xbf93b0b4                  ; 0058b25f
    MOV dword ptr [EBP + 0x1a],EAX      ; 0058b264
    MOV dword ptr [EBP + 0x16],EDX      ; 0058b267
    MOV dword ptr [EBP + 0x12],EDI      ; 0058b26a
    LEA EAX,[EBP + 0x12]                ; 0058b26d
        ;   Label: LAB_0058b26d
    PUSH EAX                            ; 0058b270
    PUSH 0x2cfd900                      ; 0058b271 | DAT_02cfd900
    LEA EAX,[EBP + 0xfffffe7a]          ; 0058b276
    PUSH EAX                            ; 0058b27c
    CALL core_xform.cpp_FUN_00583940    ; 0058b27d
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 0058b282
    MOV EAX,dword ptr [ESI + 0x154]     ; 0058b285
    PUSH ESI                            ; 0058b28b
    LEA ESI,[EBP + 0xffffff22]          ; 0058b28c
    LEA EDI,[EBP + 0xffffff0a]          ; 0058b292
    CALL dword ptr [EAX + 0x1c]         ; 0058b298
    MOV ECX,0x6                         ; 0058b29b
    ADD ESP,0x4                         ; 0058b2a0
    LEA EAX,[EBP + -0x4e]               ; 0058b2a3
    LEA ESI,[EBP + 0xffffff22]          ; 0058b2a6
    PUSH EAX                            ; 0058b2ac
    MOVSD.REP ES:EDI,ESI                ; 0058b2ad
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0058b2af
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [EBP + 0xffffff0a]    ; 0058b2b4
    FLD float ptr [EBP + 0xffffff0e]    ; 0058b2ba
    FLD float ptr [EBP + 0xffffff12]    ; 0058b2c0
    LEA EDI,[EBP + -0x6]                ; 0058b2c6
    LEA ESI,[EBP + -0x4e]               ; 0058b2c9
    LEA EAX,[EBP + 0x6]                 ; 0058b2cc
    ADD ESP,0x4                         ; 0058b2cf
    FXCH ST2                            ; 0058b2d2
    FADD float ptr [EBP + 0xffffff16]   ; 0058b2d4
    FXCH                                ; 0058b2da
    FADD float ptr [EBP + 0xffffff1a]   ; 0058b2dc
    FXCH ST2                            ; 0058b2e2
    FADD float ptr [EBP + 0xffffff1e]   ; 0058b2e4
    PUSH EAX                            ; 0058b2ea
    FXCH                                ; 0058b2eb
    FSTP float ptr [EBP + -0x4e]        ; 0058b2ed
    FXCH                                ; 0058b2f0
    FSTP float ptr [EBP + -0x4a]        ; 0058b2f2
    FSTP float ptr [EBP + -0x46]        ; 0058b2f5
    MOVSD ES:EDI,ESI                    ; 0058b2f8
    MOVSD ES:EDI,ESI                    ; 0058b2f9
    MOVSD ES:EDI,ESI                    ; 0058b2fa
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0058b2fb
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [0x005d8743]          ; 0058b300 | DAT_005d8743
    FLD float ptr [EBP + -0x6]          ; 0058b306
    FMUL ST1                            ; 0058b309
    FLD float ptr [EBP + -0x2]          ; 0058b30b
    FMUL ST2                            ; 0058b30e
    FLD float ptr [EBP + 0x2]           ; 0058b310
    FMULP ST3                           ; 0058b313
    FLD float ptr [EBP + 0xffffff12]    ; 0058b315
    LEA EDI,[EBP + 0x36]                ; 0058b31b
    LEA ESI,[EBP + 0x6]                 ; 0058b31e
    LEA EDX,[EBP + -0x42]               ; 0058b321
    LEA EAX,[EBP + -0x66]               ; 0058b324
    ADD ESP,0x4                         ; 0058b327
    FXCH ST2                            ; 0058b32a
    FSTP float ptr [EBP + 0x6]          ; 0058b32c
    FSTP float ptr [EBP + 0xa]          ; 0058b32f
    FXCH                                ; 0058b332
    FSTP float ptr [EBP + 0xe]          ; 0058b334
    MOVSD ES:EDI,ESI                    ; 0058b337
    MOVSD ES:EDI,ESI                    ; 0058b338
    MOVSD ES:EDI,ESI                    ; 0058b339
    FADD double ptr [0x005d8747]        ; 0058b33a | DAT_005d8747
    LEA EDI,[EBP + -0x42]               ; 0058b340
    LEA ESI,[EBP + 0x36]                ; 0058b343
    FSTP float ptr [EBP + 0x3e]         ; 0058b346
    MOVSD ES:EDI,ESI                    ; 0058b349
    MOVSD ES:EDI,ESI                    ; 0058b34a
    MOVSD ES:EDI,ESI                    ; 0058b34b
    CMP EAX,EDX                         ; 0058b34c
    JZ 0x0058b0e2                       ; 0058b34e
        ;   XREF to: 0058b0e2 (CONDITIONAL_JUMP)  ; LAB_0058b0e2
    MOV EAX,dword ptr [EBP + -0x42]     ; 0058b354
    MOV dword ptr [EBP + -0x66],EAX     ; 0058b357
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0058b35a
    MOV dword ptr [EBP + -0x62],EAX     ; 0058b35d
    MOV EAX,dword ptr [EBP + -0x3a]     ; 0058b360
    MOV dword ptr [EBP + -0x5e],EAX     ; 0058b363
    JMP 0x0058b0e2                      ; 0058b366
        ;   XREF to: 0058b0e2 (UNCONDITIONAL_JUMP)  ; LAB_0058b0e2
    MOV ECX,0x3f676c8b                  ; 0058b36b
        ;   Label: LAB_0058b36b
    XOR EDX,EDX                         ; 0058b370
    MOV EAX,0x3e1eb852                  ; 0058b372
    MOV dword ptr [EBP + 0x1a],EDX      ; 0058b377
    MOV dword ptr [EBP + 0x16],ECX      ; 0058b37a
    MOV dword ptr [EBP + 0x12],EAX      ; 0058b37d
    JMP 0x0058b26d                      ; 0058b380
        ;   XREF to: 0058b26d (UNCONDITIONAL_JUMP)  ; LAB_0058b26d
    JBE 0x0058b237                      ; 0058b385
        ;   XREF to: 0058b237 (CONDITIONAL_JUMP)  ; LAB_0058b237
        ;   Label: LAB_0058b385
    CMP EAX,0x3                         ; 0058b38b
    JZ 0x0058b237                       ; 0058b38e
        ;   XREF to: 0058b237 (CONDITIONAL_JUMP)  ; LAB_0058b237
    JMP 0x0058b00a                      ; 0058b394
        ;   XREF to: 0058b00a (UNCONDITIONAL_JUMP)  ; LAB_0058b00a
    MOV ESI,0x3ecccccd                  ; 0058b399
        ;   Label: LAB_0058b399
    PUSH EAX                            ; 0058b39e
    XOR EDI,EDI                         ; 0058b39f
    LEA EAX,[EBP + -0x7e]               ; 0058b3a1
    MOV dword ptr [EBP + -0x7e],ESI     ; 0058b3a4
    MOV dword ptr [EBP + -0x7a],EDI     ; 0058b3a7
    MOV dword ptr [EBP + -0x76],EDI     ; 0058b3aa
    PUSH EAX                            ; 0058b3ad
    LEA ESI,[EBP + 0xffffff6a]          ; 0058b3ae
    LEA EDI,[EBP + -0x36]               ; 0058b3b4
    CALL core_xform.cpp_FUN_00583260    ; 0058b3b7
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + 0xffffff6a]          ; 0058b3bc
    MOVSD ES:EDI,ESI                    ; 0058b3c2
    MOVSD ES:EDI,ESI                    ; 0058b3c3
    MOVSD ES:EDI,ESI                    ; 0058b3c4
    LEA EAX,[EBP + -0x36]               ; 0058b3c5
    LEA ESI,[EBP + -0x1e]               ; 0058b3c8
    ADD ESP,0x8                         ; 0058b3cb
    CMP ESI,EAX                         ; 0058b3ce
    JZ 0x0058b14c                       ; 0058b3d0
        ;   XREF to: 0058b14c (CONDITIONAL_JUMP)  ; LAB_0058b14c
    MOV EAX,dword ptr [EBP + -0x36]     ; 0058b3d6
    MOV dword ptr [EBP + -0x1e],EAX     ; 0058b3d9
    MOV EAX,dword ptr [EBP + -0x32]     ; 0058b3dc
    MOV dword ptr [EBP + -0x1a],EAX     ; 0058b3df
    MOV EAX,dword ptr [EBP + -0x2e]     ; 0058b3e2
    JMP 0x0058b149                      ; 0058b3e5
        ;   XREF to: 0058b149 (UNCONDITIONAL_JUMP)  ; LAB_0058b149

