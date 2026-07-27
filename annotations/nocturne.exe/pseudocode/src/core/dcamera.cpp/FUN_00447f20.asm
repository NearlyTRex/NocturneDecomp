; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_dcamera_cpp_FUN_00447f20(int param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_set.cpp_FUN_00507f80 at 00508092
;
; Referenced Globals:
;   float FLOAT_0059bde4 = 0.00390625
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447f20
        ;   Label: core_dcamera.cpp_FUN_00447f20
    PUSH ESI                            ; 00447f21
    PUSH EDI                            ; 00447f22
    PUSH EBP                            ; 00447f23
    SUB ESP,0xdc                        ; 00447f24
    MOV EBP,dword ptr [ESP + 0xf0]      ; 00447f2a
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00447f31
    ADD EAX,0xc                         ; 00447f38
    MOV EBX,EAX                         ; 00447f3b
    CMP EAX,0x2dd1184                   ; 00447f3d
    JNZ 0x0044801a                      ; 00447f42
        ;   XREF to: 0044801a (CONDITIONAL_JUMP)  ; LAB_0044801a
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00447f48
        ;   Label: LAB_00447f48
    CMP EBX,EDX                         ; 00447f4f
    JNZ 0x00448039                      ; 00447f51
        ;   XREF to: 00448039 (CONDITIONAL_JUMP)  ; LAB_00448039
    MOV ECX,0x1                         ; 00447f57
        ;   Label: LAB_00447f57
    LEA EAX,[EBP + 0x104]               ; 00447f5c
    XOR EBX,EBX                         ; 00447f62
    MOV dword ptr [ESP + 0xcc],EAX      ; 00447f64
    MOV dword ptr [ESP + 0xb4],EBX      ; 00447f6b
    LEA EAX,[EBP + 0x110]               ; 00447f72
    MOV dword ptr [ESP + 0xd4],ECX      ; 00447f78
    MOV dword ptr [ESP + 0xb8],EAX      ; 00447f7f
    MOV EAX,dword ptr [EBP + 0x140]     ; 00447f86
        ;   Label: LAB_00447f86
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00447f8c
    DEC EAX                             ; 00447f93
    CMP EAX,ESI                         ; 00447f94
    JLE 0x004482f6                      ; 00447f96
        ;   XREF to: 004482f6 (CONDITIONAL_JUMP)  ; LAB_004482f6
    MOV EDI,0x1                         ; 00447f9c
    LEA EAX,[ESI + EDI*0x1]             ; 00447fa1
    MOV dword ptr [ESP + 0xc8],EAX      ; 00447fa4
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00447fab
    MOV dword ptr [ESP + 0xc4],EAX      ; 00447fb2
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00447fb9
    MOV dword ptr [ESP + 0xc0],EAX      ; 00447fc0
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00447fc7
    MOV dword ptr [ESP + 0xbc],EAX      ; 00447fce
    XOR EAX,EAX                         ; 00447fd5
    MOV dword ptr [ESP + 0xd8],EDI      ; 00447fd7
    MOV dword ptr [ESP + 0xd0],EAX      ; 00447fde
    MOV EAX,dword ptr [EBP + 0x13c]     ; 00447fe5
        ;   Label: LAB_00447fe5
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00447feb
    DEC EAX                             ; 00447ff2
    CMP EAX,EDX                         ; 00447ff3
    JG 0x0044804e                       ; 00447ff5
        ;   XREF to: 0044804e (CONDITIONAL_JUMP)  ; LAB_0044804e
    MOV EBX,dword ptr [ESP + 0xd4]      ; 00447ff7
    MOV ECX,dword ptr [ESP + 0xb4]      ; 00447ffe
    INC EBX                             ; 00448005
    INC ECX                             ; 00448006
    MOV dword ptr [ESP + 0xd4],EBX      ; 00448007
    MOV dword ptr [ESP + 0xb4],ECX      ; 0044800e
    JMP 0x00447f86                      ; 00448015
        ;   XREF to: 00447f86 (UNCONDITIONAL_JUMP)  ; LAB_00447f86
    MOV EDX,dword ptr [0x02dd1184]      ; 0044801a | DAT_02dd1184
        ;   Label: LAB_0044801a
    MOV dword ptr [EAX],EDX             ; 00448020
    MOV EDX,dword ptr [0x02dd1188]      ; 00448022 | DAT_02dd1188
    MOV dword ptr [EAX + 0x4],EDX       ; 00448028
    MOV EDX,dword ptr [0x02dd118c]      ; 0044802b | DAT_02dd118c
    MOV dword ptr [EAX + 0x8],EDX       ; 00448031
    JMP 0x00447f48                      ; 00448034
        ;   XREF to: 00447f48 (UNCONDITIONAL_JUMP)  ; LAB_00447f48
    MOV EAX,dword ptr [EBX]             ; 00448039
        ;   Label: LAB_00448039
    MOV dword ptr [EDX],EAX             ; 0044803b
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044803d
    MOV dword ptr [EDX + 0x4],EAX       ; 00448040
    MOV EAX,dword ptr [EBX + 0x8]       ; 00448043
    MOV dword ptr [EDX + 0x8],EAX       ; 00448046
    JMP 0x00447f57                      ; 00448049
        ;   XREF to: 00447f57 (UNCONDITIONAL_JUMP)  ; LAB_00447f57
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0044804e
        ;   Label: LAB_0044804e
    PUSH ESI                            ; 00448055
    PUSH EDX                            ; 00448056
    PUSH EBP                            ; 00448057
    LEA ESI,[ESP + 0x24]                ; 00448058
    LEA EDI,[ESP + 0x78]                ; 0044805c
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0 ; 00448060
        ;   XREF to: 004410c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0()
    LEA ESI,[ESP + 0x24]                ; 00448065
    ADD ESP,0xc                         ; 00448069
    MOVSD ES:EDI,ESI                    ; 0044806c
    MOVSD ES:EDI,ESI                    ; 0044806d
    MOVSD ES:EDI,ESI                    ; 0044806e
    CMP dword ptr [ESP + 0x74],0x1f400  ; 0044806f
    JLE 0x004480de                      ; 00448077
        ;   XREF to: 004480de (CONDITIONAL_JUMP)  ; LAB_004480de
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00448079
    XOR EBX,EBX                         ; 00448080
    CMP EDX,0x1                         ; 00448082
    JG 0x004481ba                       ; 00448085
        ;   XREF to: 004481ba (CONDITIONAL_JUMP)  ; LAB_004481ba
    INC EBX                             ; 0044808b
        ;   Label: LAB_0044808b
    CMP dword ptr [ESP + 0xd8],0x1      ; 0044808c
        ;   Label: LAB_0044808c
    JG 0x00448203                       ; 00448094
        ;   XREF to: 00448203 (CONDITIONAL_JUMP)  ; LAB_00448203
    INC EBX                             ; 0044809a
        ;   Label: LAB_0044809a
    MOV EAX,dword ptr [EBP + 0x13c]     ; 0044809b
        ;   Label: LAB_0044809b
    MOV EDX,dword ptr [ESP + 0xd8]      ; 004480a1
    SUB EAX,0x2                         ; 004480a8
    CMP EAX,EDX                         ; 004480ab
    JG 0x00448256                       ; 004480ad
        ;   XREF to: 00448256 (CONDITIONAL_JUMP)  ; LAB_00448256
    INC EBX                             ; 004480b3
        ;   Label: LAB_004480b3
    MOV EAX,dword ptr [EBP + 0x13c]     ; 004480b4
        ;   Label: LAB_004480b4
    MOV EDX,dword ptr [ESP + 0xd8]      ; 004480ba
    SUB EAX,0x2                         ; 004480c1
    CMP EAX,EDX                         ; 004480c4
    JG 0x0044829b                       ; 004480c6
        ;   XREF to: 0044829b (CONDITIONAL_JUMP)  ; LAB_0044829b
    INC EBX                             ; 004480cc
        ;   Label: LAB_004480cc
    CMP EBX,0x4                         ; 004480cd
        ;   Label: LAB_004480cd
    JL 0x00448197                       ; 004480d0
        ;   XREF to: 00448197 (CONDITIONAL_JUMP)  ; LAB_00448197
    MOV dword ptr [ESP + 0x74],0x1f400  ; 004480d6
    LEA EAX,[ESP + 0x6c]                ; 004480de
        ;   Label: LAB_004480de
    PUSH EAX                            ; 004480e2
    LEA ESI,[ESP + 0x10]                ; 004480e3
    PUSH EBP                            ; 004480e7
    LEA EDI,[ESP + 0x8c]                ; 004480e8
    LEA EBX,[ESP + 0x50]                ; 004480ef
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0 ; 004480f3
        ;   XREF to: 004411b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0()
    LEA ESI,[ESP + 0x14]                ; 004480f8
    ADD ESP,0x8                         ; 004480fc
    LEA EAX,[ESP + 0x84]                ; 004480ff
    MOVSD ES:EDI,ESI                    ; 00448106
    MOVSD ES:EDI,ESI                    ; 00448107
    MOVSD ES:EDI,ESI                    ; 00448108
    FILD dword ptr [EAX]                ; 00448109
    FMUL float ptr [0x0059bde4]         ; 0044810b | FLOAT_0059bde4
    FSTP float ptr [EBX]                ; 00448111
    FILD dword ptr [EAX + 0x4]          ; 00448113
    FMUL float ptr [0x0059bde4]         ; 00448116 | FLOAT_0059bde4
    FSTP float ptr [EBX + 0x4]          ; 0044811c
    FILD dword ptr [EAX + 0x8]          ; 0044811f
    FMUL float ptr [0x0059bde4]         ; 00448122 | FLOAT_0059bde4
    FSTP float ptr [EBX + 0x8]          ; 00448128
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044812b
    FLD float ptr [ESP + 0x48]          ; 00448132
    FSUB float ptr [EAX]                ; 00448136
    FLD float ptr [ESP + 0x4c]          ; 00448138
    FXCH                                ; 0044813c
    FSTP float ptr [ESP + 0x90]         ; 0044813e
    FSUB float ptr [EAX + 0x4]          ; 00448145
    FLD float ptr [ESP + 0x50]          ; 00448148
    FXCH                                ; 0044814c
    FSTP float ptr [ESP + 0x94]         ; 0044814e
    FSUB float ptr [EAX + 0x8]          ; 00448155
    LEA EAX,[ESP + 0x90]                ; 00448158
    PUSH EAX                            ; 0044815f
    LEA EAX,[ESP + 0xa0]                ; 00448160
    PUSH EAX                            ; 00448167
    MOV EDX,dword ptr [ESP + 0xc0]      ; 00448168
    PUSH EDX                            ; 0044816f
    FSTP float ptr [ESP + 0xa4]         ; 00448170
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00448177
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 0044817c
    LEA EAX,[ESP + 0x9c]                ; 0044817f
    PUSH EAX                            ; 00448186
    MOV ECX,dword ptr [ESP + 0xf8]      ; 00448187
    PUSH ECX                            ; 0044818e
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 0044818f
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 00448194
    MOV ESI,dword ptr [ESP + 0xd8]      ; 00448197
        ;   Label: LAB_00448197
    MOV EBX,dword ptr [ESP + 0xd0]      ; 0044819e
    INC ESI                             ; 004481a5
    INC EBX                             ; 004481a6
    MOV dword ptr [ESP + 0xd8],ESI      ; 004481a7
    MOV dword ptr [ESP + 0xd0],EBX      ; 004481ae
    JMP 0x00447fe5                      ; 004481b5
        ;   XREF to: 00447fe5 (UNCONDITIONAL_JUMP)  ; LAB_00447fe5
    CMP dword ptr [ESP + 0xd4],0x1      ; 004481ba
        ;   Label: LAB_004481ba
    JLE 0x0044808b                      ; 004481c2
        ;   XREF to: 0044808b (CONDITIONAL_JUMP)  ; LAB_0044808b
    MOV ESI,dword ptr [ESP + 0xbc]      ; 004481c8
    PUSH ESI                            ; 004481cf
    MOV EDI,dword ptr [ESP + 0xd4]      ; 004481d0
    PUSH EDI                            ; 004481d7
    PUSH EBP                            ; 004481d8
    LEA ESI,[ESP + 0x3c]                ; 004481d9
    LEA EDI,[ESP + 0x30]                ; 004481dd
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0 ; 004481e1
        ;   XREF to: 004410c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0()
    LEA ESI,[ESP + 0x3c]                ; 004481e6
    ADD ESP,0xc                         ; 004481ea
    MOVSD ES:EDI,ESI                    ; 004481ed
    MOVSD ES:EDI,ESI                    ; 004481ee
    MOVSD ES:EDI,ESI                    ; 004481ef
    CMP dword ptr [ESP + 0x2c],0x1f400  ; 004481f0
    JG 0x0044808b                       ; 004481f8
        ;   XREF to: 0044808b (CONDITIONAL_JUMP)  ; LAB_0044808b
    JMP 0x0044808c                      ; 004481fe
        ;   XREF to: 0044808c (UNCONDITIONAL_JUMP)  ; LAB_0044808c
    MOV EAX,dword ptr [EBP + 0x140]     ; 00448203
        ;   Label: LAB_00448203
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00448209
    SUB EAX,0x2                         ; 00448210
    CMP EAX,ECX                         ; 00448213
    JLE 0x0044809a                      ; 00448215
        ;   XREF to: 0044809a (CONDITIONAL_JUMP)  ; LAB_0044809a
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0044821b
    PUSH ESI                            ; 00448222
    MOV EDI,dword ptr [ESP + 0xd4]      ; 00448223
    PUSH EDI                            ; 0044822a
    PUSH EBP                            ; 0044822b
    LEA ESI,[ESP + 0xc]                 ; 0044822c
    LEA EDI,[ESP + 0x48]                ; 00448230
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0 ; 00448234
        ;   XREF to: 004410c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0()
    LEA ESI,[ESP + 0xc]                 ; 00448239
    ADD ESP,0xc                         ; 0044823d
    MOVSD ES:EDI,ESI                    ; 00448240
    MOVSD ES:EDI,ESI                    ; 00448241
    MOVSD ES:EDI,ESI                    ; 00448242
    CMP dword ptr [ESP + 0x44],0x1f400  ; 00448243
    JG 0x0044809a                       ; 0044824b
        ;   XREF to: 0044809a (CONDITIONAL_JUMP)  ; LAB_0044809a
    JMP 0x0044809b                      ; 00448251
        ;   XREF to: 0044809b (UNCONDITIONAL_JUMP)  ; LAB_0044809b
    CMP dword ptr [ESP + 0xd4],0x1      ; 00448256
        ;   Label: LAB_00448256
    JLE 0x004480b3                      ; 0044825e
        ;   XREF to: 004480b3 (CONDITIONAL_JUMP)  ; LAB_004480b3
    MOV ESI,dword ptr [ESP + 0xc4]      ; 00448264
    PUSH ESI                            ; 0044826b
    LEA EAX,[EDX + 0x1]                 ; 0044826c
    PUSH EAX                            ; 0044826f
    PUSH EBP                            ; 00448270
    LEA ESI,[ESP + 0x6c]                ; 00448271
    LEA EDI,[ESP + 0x60]                ; 00448275
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0 ; 00448279
        ;   XREF to: 004410c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0()
    LEA ESI,[ESP + 0x6c]                ; 0044827e
    ADD ESP,0xc                         ; 00448282
    MOVSD ES:EDI,ESI                    ; 00448285
    MOVSD ES:EDI,ESI                    ; 00448286
    MOVSD ES:EDI,ESI                    ; 00448287
    CMP dword ptr [ESP + 0x5c],0x1f400  ; 00448288
    JG 0x004480b3                       ; 00448290
        ;   XREF to: 004480b3 (CONDITIONAL_JUMP)  ; LAB_004480b3
    JMP 0x004480b4                      ; 00448296
        ;   XREF to: 004480b4 (UNCONDITIONAL_JUMP)  ; LAB_004480b4
    MOV EAX,dword ptr [EBP + 0x140]     ; 0044829b
        ;   Label: LAB_0044829b
    MOV ECX,dword ptr [ESP + 0xd4]      ; 004482a1
    SUB EAX,0x2                         ; 004482a8
    CMP EAX,ECX                         ; 004482ab
    JLE 0x004480cc                      ; 004482ad
        ;   XREF to: 004480cc (CONDITIONAL_JUMP)  ; LAB_004480cc
    MOV ESI,dword ptr [ESP + 0xc8]      ; 004482b3
    PUSH ESI                            ; 004482ba
    LEA EAX,[EDX + 0x1]                 ; 004482bb
    PUSH EAX                            ; 004482be
    PUSH EBP                            ; 004482bf
    LEA ESI,[ESP + 0xb4]                ; 004482c0
    LEA EDI,[ESP + 0x84]                ; 004482c7
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0 ; 004482ce
        ;   XREF to: 004410c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0()
    LEA ESI,[ESP + 0xb4]                ; 004482d3
    ADD ESP,0xc                         ; 004482da
    MOVSD ES:EDI,ESI                    ; 004482dd
    MOVSD ES:EDI,ESI                    ; 004482de
    MOVSD ES:EDI,ESI                    ; 004482df
    CMP dword ptr [ESP + 0x80],0x1f400  ; 004482e0
    JG 0x004480cc                       ; 004482eb
        ;   XREF to: 004480cc (CONDITIONAL_JUMP)  ; LAB_004480cc
    JMP 0x004480cd                      ; 004482f1
        ;   XREF to: 004480cd (UNCONDITIONAL_JUMP)  ; LAB_004480cd
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004482f6
        ;   Label: LAB_004482f6
    ADD ESP,0xdc                        ; 004482fd
    POP EBP                             ; 00448303
    POP EDI                             ; 00448304
    POP ESI                             ; 00448305
    POP EBX                             ; 00448306
    RET                                 ; 00448307

