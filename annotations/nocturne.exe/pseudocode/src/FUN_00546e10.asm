; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00546e10(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined8       Stack[-0x1b8]:8  local_1b8
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x118]:1  local_118
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
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
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
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   float FLOAT_00596953 = 0.05000000
;   float FLOAT_00596957 = 0.07000000
;   float FLOAT_0059695b = 0.5
;   float FLOAT_0059695f = 0.8000000
;   double DOUBLE_00596963 = 0.159154943096444
;   double DOUBLE_0059696b = 0.900000000000000
;   double DOUBLE_00596973 = 1.5
;   float FLOAT_0059697b = 0.7000000
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fb1afc
;   undefined4 DAT_01fb1b00
;   undefined4 DAT_01fb1b04
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   FUN_00510a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546e10
        ;   Label: FUN_00546e10
    PUSH ESI                            ; 00546e11
    PUSH EDI                            ; 00546e12
    PUSH EBP                            ; 00546e13
    MOV EBP,ESP                         ; 00546e14
    SUB ESP,0x1a8                       ; 00546e16
    AND ESP,0xfffffff8                  ; 00546e1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00546e1f
    LEA ESI,[EBX + 0x20]                ; 00546e22
    PUSH 0x42c80000                     ; 00546e25
    PUSH ESI                            ; 00546e2a
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 00546e2b
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0()
    ADD ESP,0x8                         ; 00546e30
    TEST EAX,EAX                        ; 00546e33
    JZ 0x00547625                       ; 00546e35
        ;   XREF to: 00547625 (CONDITIONAL_JUMP)  ; LAB_00547625
    PUSH 0x3d4ccccd                     ; 00546e3b
    PUSH 0xbd4ccccd                     ; 00546e40
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00546e45
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00546e4a
    FLD float ptr [ESP + 0x1ac]         ; 00546e51
    ADD ESP,0x8                         ; 00546e58
    LEA ESI,[EBX + 0x2f8]               ; 00546e5b
    PUSH 0x3d4ccccd                     ; 00546e61
    FADD float ptr [ESI]                ; 00546e66
    PUSH 0xbd4ccccd                     ; 00546e68
    FSTP float ptr [ESI]                ; 00546e6d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00546e6f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00546e74
    FLD float ptr [ESP + 0x1ac]         ; 00546e7b
    ADD ESP,0x8                         ; 00546e82
    LEA ESI,[EBX + 0x2fc]               ; 00546e85
    PUSH 0x3d4ccccd                     ; 00546e8b
    FADD float ptr [ESI]                ; 00546e90
    PUSH 0xbd4ccccd                     ; 00546e92
    FSTP float ptr [ESI]                ; 00546e97
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00546e99
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV EDX,0x40800000                  ; 00546e9e
    LEA ESI,[EBX + 0x300]               ; 00546ea3
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00546ea9
    XOR ECX,ECX                         ; 00546eb0
    FLD float ptr [ESP + 0x1ac]         ; 00546eb2
    LEA EAX,[ESP + 0xf0]                ; 00546eb9
    FADD float ptr [ESI]                ; 00546ec0
    ADD ESP,0x8                         ; 00546ec2
    FSTP float ptr [ESI]                ; 00546ec5
    MOV dword ptr [ESP + 0xe8],EDX      ; 00546ec7
    MOV EDX,dword ptr [0x005be368]      ; 00546ece | DAT_005be368
    MOV dword ptr [ESP + 0xec],ECX      ; 00546ed4
    ADD EDX,0x15a878                    ; 00546edb
    MOV dword ptr [ESP + 0xf0],ECX      ; 00546ee1
    CMP EDX,EAX                         ; 00546ee8
    JZ 0x00546f06                       ; 00546eea
        ;   XREF to: 00546f06 (CONDITIONAL_JUMP)  ; LAB_00546f06
    MOV dword ptr [EDX],0x40800000      ; 00546eec | DAT_01fb1afc
    MOV EAX,dword ptr [ESP + 0xec]      ; 00546ef2
    MOV dword ptr [EDX + 0x4],EAX       ; 00546ef9 | DAT_01fb1b00
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00546efc
    MOV dword ptr [EDX + 0x8],EAX       ; 00546f03 | DAT_01fb1b04
    FLD float ptr [EBX + 0x30c]         ; 00546f06
        ;   Label: LAB_00546f06
    FSUB float ptr [EBP + 0x18]         ; 00546f0c
    FST float ptr [EBX + 0x30c]         ; 00546f0f
    FLDZ                                ; 00546f15
    FCOMPP                              ; 00546f17
    FNSTSW AX                           ; 00546f19
    SAHF                                ; 00546f1b
    JC 0x00546ff0                       ; 00546f1c
        ;   XREF to: 00546ff0 (CONDITIONAL_JUMP)  ; LAB_00546ff0
    MOV EAX,[0x005be368]                ; 00546f22 | DAT_005be368
    LEA EDX,[EBX + 0x310]               ; 00546f27
    ADD EAX,0x15a878                    ; 00546f2d
    CMP EDX,EAX                         ; 00546f32
    JZ 0x00546f46                       ; 00546f34
        ;   XREF to: 00546f46 (CONDITIONAL_JUMP)  ; LAB_00546f46
    MOV ECX,dword ptr [EAX]             ; 00546f36 | DAT_01fb1afc
    MOV dword ptr [EDX],ECX             ; 00546f38
    MOV ECX,dword ptr [EAX + 0x4]       ; 00546f3a | DAT_01fb1b00
    MOV dword ptr [EDX + 0x4],ECX       ; 00546f3d
    MOV ECX,dword ptr [EAX + 0x8]       ; 00546f40 | DAT_01fb1b04
    MOV dword ptr [EDX + 0x8],ECX       ; 00546f43
    PUSH 0x41200000                     ; 00546f46
        ;   Label: LAB_00546f46
    PUSH 0xc1200000                     ; 00546f4b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00546f50
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00546f55
    FLD float ptr [ESP + 0x1ac]         ; 00546f5c
    ADD ESP,0x8                         ; 00546f63
    PUSH 0x41c80000                     ; 00546f66
    FADD float ptr [EBX + 0x310]        ; 00546f6b
    PUSH 0x41700000                     ; 00546f71
    FSTP float ptr [EBX + 0x310]        ; 00546f76
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00546f7c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00546f81
    FLD float ptr [ESP + 0x1ac]         ; 00546f88
    ADD ESP,0x8                         ; 00546f8f
    PUSH 0x41200000                     ; 00546f92
    FADD float ptr [EBX + 0x314]        ; 00546f97
    PUSH 0xc1200000                     ; 00546f9d
    FSTP float ptr [EBX + 0x314]        ; 00546fa2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00546fa8
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00546fad
    FLD float ptr [ESP + 0x1ac]         ; 00546fb4
    ADD ESP,0x8                         ; 00546fbb
    PUSH 0x41a00000                     ; 00546fbe
    FADD float ptr [EBX + 0x318]        ; 00546fc3
    PUSH 0x40c00000                     ; 00546fc9
    FSTP float ptr [EBX + 0x318]        ; 00546fce
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00546fd4
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00546fd9
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 00546fe0
    MOV dword ptr [EBX + 0x30c],EAX     ; 00546fe7
    ADD ESP,0x8                         ; 00546fed
    MOV EDX,dword ptr [0x005be368]      ; 00546ff0 | DAT_005be368
        ;   Label: LAB_00546ff0
    LEA EAX,[EBX + 0x310]               ; 00546ff6
    FLD float ptr [EDX + 0x15a878]      ; 00546ffc | DAT_01fb1afc
    FSUB float ptr [EAX]                ; 00547002
    FST float ptr [ESP + 0x190]         ; 00547004
    FLD float ptr [EDX + 0x15a87c]      ; 0054700b | DAT_01fb1b00
    FSUB float ptr [EAX + 0x4]          ; 00547011
    FXCH                                ; 00547014
    FLD float ptr [0x00596953]          ; 00547016 | FLOAT_00596953
    FXCH                                ; 0054701c
    FMUL ST1                            ; 0054701e
    FXCH ST2                            ; 00547020
    FST float ptr [ESP + 0x194]         ; 00547022
    FLD float ptr [EDX + 0x15a880]      ; 00547029 | DAT_01fb1b04
    FSUB float ptr [EAX + 0x8]          ; 0054702f
    FXCH                                ; 00547032
    FMUL ST2                            ; 00547034
    FXCH                                ; 00547036
    FST float ptr [ESP + 0x198]         ; 00547038
    FMULP ST2                           ; 0054703f
    LEA EDX,[EBX + 0x2f8]               ; 00547041
    FXCH ST2                            ; 00547047
    FSTP float ptr [ESP + 0x10c]        ; 00547049
    FXCH                                ; 00547050
    FSTP float ptr [ESP + 0x110]        ; 00547052
    FSTP float ptr [ESP + 0x114]        ; 00547059
    FLD float ptr [EAX]                 ; 00547060
    FADD float ptr [ESP + 0x10c]        ; 00547062
    FLD float ptr [EAX + 0x4]           ; 00547069
    FXCH                                ; 0054706c
    FSTP float ptr [EAX]                ; 0054706e
    FADD float ptr [ESP + 0x110]        ; 00547070
    FLD float ptr [EAX + 0x8]           ; 00547077
    FXCH                                ; 0054707a
    FSTP float ptr [EAX + 0x4]          ; 0054707c
    FADD float ptr [ESP + 0x114]        ; 0054707f
    FLD float ptr [EAX]                 ; 00547086
    FXCH                                ; 00547088
    FSTP float ptr [EAX + 0x8]          ; 0054708a
    FSUB float ptr [EDX]                ; 0054708d
    FST float ptr [ESP + 0x124]         ; 0054708f
    FLD float ptr [EAX + 0x4]           ; 00547096
    FSUB float ptr [EDX + 0x4]          ; 00547099
    FXCH                                ; 0054709c
    FLD float ptr [0x00596957]          ; 0054709e | FLOAT_00596957
    FXCH                                ; 005470a4
    FMUL ST1                            ; 005470a6
    FXCH ST2                            ; 005470a8
    FST float ptr [ESP + 0x128]         ; 005470aa
    FLD float ptr [EAX + 0x8]           ; 005470b1
    FSUB float ptr [EDX + 0x8]          ; 005470b4
    FXCH                                ; 005470b7
    FMUL ST2                            ; 005470b9
    FXCH                                ; 005470bb
    FST float ptr [ESP + 0x12c]         ; 005470bd
    FMULP ST2                           ; 005470c4
    FXCH ST2                            ; 005470c6
    FSTP float ptr [ESP + 0x178]        ; 005470c8
    FXCH                                ; 005470cf
    FSTP float ptr [ESP + 0x17c]        ; 005470d1
    FSTP float ptr [ESP + 0x180]        ; 005470d8
    FLD float ptr [EDX]                 ; 005470df
    FADD float ptr [ESP + 0x178]        ; 005470e1
    FLD float ptr [EDX + 0x4]           ; 005470e8
    FXCH                                ; 005470eb
    FSTP float ptr [EDX]                ; 005470ed
    FADD float ptr [ESP + 0x17c]        ; 005470ef
    FLD float ptr [EDX + 0x8]           ; 005470f6
    FXCH                                ; 005470f9
    FSTP float ptr [EDX + 0x4]          ; 005470fb
    FADD float ptr [ESP + 0x180]        ; 005470fe
    LEA ESI,[EBX + 0x20]                ; 00547105
    FSTP float ptr [EDX + 0x8]          ; 00547108
    MOV EAX,dword ptr [ESI]             ; 0054710b
    MOV dword ptr [ESP + 0xf4],EAX      ; 0054710d
    LEA EAX,[ESI + 0x4]                 ; 00547114
    MOV EAX,dword ptr [EAX]             ; 00547117
    MOV dword ptr [ESP + 0xf8],EAX      ; 00547119
    LEA EAX,[ESI + 0x8]                 ; 00547120
    MOV EAX,dword ptr [EAX]             ; 00547123
    MOV dword ptr [ESP + 0xfc],EAX      ; 00547125
    XOR EDI,EDI                         ; 0054712c
    FLD float ptr [EBX + 0x31c]         ; 0054712e
    FCHS                                ; 00547134
    FSTP float ptr [ESP + 0x1a4]        ; 00547136
    MOV dword ptr [ESP + 0xdc],EDI      ; 0054713d
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 00547144
    MOV dword ptr [ESP + 0xe4],EDI      ; 0054714b
    MOV dword ptr [ESP + 0xe0],EAX      ; 00547152
    LEA ESI,[EBX + 0x2e0]               ; 00547159
    FLD float ptr [EDX]                 ; 0054715f
    FSUB float ptr [ESI]                ; 00547161
    FSTP float ptr [ESP + 0xd0]         ; 00547163
    FLD float ptr [EDX + 0x4]           ; 0054716a
    FSUB float ptr [ESI + 0x4]          ; 0054716d
    LEA EAX,[EBX + 0x304]               ; 00547170
    FSTP float ptr [ESP + 0xd4]         ; 00547176
    FLD float ptr [EDX + 0x8]           ; 0054717d
    FSUB float ptr [ESI + 0x8]          ; 00547180
    FLD float ptr [ESP + 0xd0]          ; 00547183
    FXCH                                ; 0054718a
    FSTP float ptr [ESP + 0xd8]         ; 0054718c
    FMUL float ptr [EAX]                ; 00547193
    FLD float ptr [ESP + 0xd4]          ; 00547195
    FXCH                                ; 0054719c
    FSTP float ptr [ESP + 0x16c]        ; 0054719e
    FMUL float ptr [EAX]                ; 005471a5
    FLD float ptr [ESP + 0xd8]          ; 005471a7
    FXCH                                ; 005471ae
    FSTP float ptr [ESP + 0x170]        ; 005471b0
    FMUL float ptr [EAX]                ; 005471b7
    FLD float ptr [ESP + 0x1a4]         ; 005471b9
    FADD float ptr [ESP + 0x170]        ; 005471c0
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005471c7
    FXCH                                ; 005471ce
    FSTP float ptr [ESP + 0x174]        ; 005471d0
    MOV dword ptr [ESP + 0xdc],EAX      ; 005471d7
    MOV EAX,dword ptr [ESP + 0x174]     ; 005471de
    FSTP float ptr [ESP + 0xe0]         ; 005471e5
    MOV dword ptr [ESP + 0xe4],EAX      ; 005471ec
    PUSH EDX                            ; 005471f3
    LEA EAX,[ESP + 0x14c]               ; 005471f4
    PUSH EAX                            ; 005471fb
    PUSH EBX                            ; 005471fc
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 005471fd
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220()
    FLD float ptr [0x0059695b]          ; 00547202 | FLOAT_0059695b
    FLD float ptr [EAX]                 ; 00547208
    FMUL ST1                            ; 0054720a
    ADD ESP,0xc                         ; 0054720c
    FSTP float ptr [ESP + 0x118]        ; 0054720f
    FLD float ptr [EAX + 0x4]           ; 00547216
    FMUL ST1                            ; 00547219
    FSTP float ptr [ESP + 0x11c]        ; 0054721b
    FMUL float ptr [EAX + 0x8]          ; 00547222
    LEA EDX,[EBX + 0x2ec]               ; 00547225
    FSTP float ptr [ESP + 0x120]        ; 0054722b
    FLD float ptr [0x0059695f]          ; 00547232 | FLOAT_0059695f
    FLD float ptr [EDX]                 ; 00547238
    FMUL ST1                            ; 0054723a
    FLD float ptr [EDX + 0x4]           ; 0054723c
    FMUL ST2                            ; 0054723f
    FLD float ptr [EDX + 0x8]           ; 00547241
    FMULP ST3                           ; 00547244
    FXCH                                ; 00547246
    FSTP float ptr [EDX]                ; 00547248
    FSTP float ptr [EDX + 0x4]          ; 0054724a
    FSTP float ptr [EDX + 0x8]          ; 0054724d
    FLD float ptr [EDX]                 ; 00547250
    FADD float ptr [ESP + 0x118]        ; 00547252
    FLD float ptr [EDX + 0x4]           ; 00547259
    FXCH                                ; 0054725c
    FSTP float ptr [EDX]                ; 0054725e
    FADD float ptr [ESP + 0x11c]        ; 00547260
    FLD float ptr [EDX + 0x8]           ; 00547267
    FXCH                                ; 0054726a
    FSTP float ptr [EDX + 0x4]          ; 0054726c
    FADD float ptr [ESP + 0x120]        ; 0054726f
    FSTP float ptr [EDX + 0x8]          ; 00547276
    FLD float ptr [EBP + 0x18]          ; 00547279
    FLD float ptr [ESP + 0xdc]          ; 0054727c
    FMUL ST1                            ; 00547283
    FLD float ptr [ESP + 0xe0]          ; 00547285
    FMUL ST2                            ; 0054728c
    FLD float ptr [ESP + 0xe4]          ; 0054728e
    FMULP ST3                           ; 00547295
    FXCH                                ; 00547297
    FSTP float ptr [ESP + 0x13c]        ; 00547299
    FSTP float ptr [ESP + 0x140]        ; 005472a0
    FSTP float ptr [ESP + 0x144]        ; 005472a7
    FLD float ptr [ESI]                 ; 005472ae
    FADD float ptr [ESP + 0x13c]        ; 005472b0
    FLD float ptr [ESI + 0x4]           ; 005472b7
    FXCH                                ; 005472ba
    FSTP float ptr [ESI]                ; 005472bc
    FADD float ptr [ESP + 0x140]        ; 005472be
    FLD float ptr [ESI + 0x8]           ; 005472c5
    FXCH                                ; 005472c8
    FSTP float ptr [ESI + 0x4]          ; 005472ca
    FADD float ptr [ESP + 0x144]        ; 005472cd
    FSTP float ptr [ESI + 0x8]          ; 005472d4
    FLD float ptr [EDX + 0x4]           ; 005472d7
    FMUL ST0                            ; 005472da
    FLD float ptr [EDX]                 ; 005472dc
    FMUL ST0                            ; 005472de
    FADDP                               ; 005472e0
    FLD float ptr [EDX + 0x8]           ; 005472e2
    FMUL ST0                            ; 005472e5
    FADDP                               ; 005472e7
    FSQRT                               ; 005472e9
    FMUL double ptr [0x00596963]        ; 005472eb | DOUBLE_00596963
    FST float ptr [ESP + 0x8]           ; 005472f1
    FLD1                                ; 005472f5
    FCOMPP                              ; 005472f7
    FNSTSW AX                           ; 005472f9
    SAHF                                ; 005472fb
    JNC 0x00547320                      ; 005472fc
        ;   XREF to: 00547320 (CONDITIONAL_JUMP)  ; LAB_00547320
    FLD1                                ; 005472fe
    FLD float ptr [EDX]                 ; 00547300
    FXCH                                ; 00547302
    FDIV float ptr [ESP + 0x8]          ; 00547304
    FXCH                                ; 00547308
    FMUL ST1                            ; 0054730a
    FLD float ptr [EDX + 0x4]           ; 0054730c
    FMUL ST2                            ; 0054730f
    FLD float ptr [EDX + 0x8]           ; 00547311
    FMULP ST3                           ; 00547314
    FXCH                                ; 00547316
    FSTP float ptr [EDX]                ; 00547318
    FSTP float ptr [EDX + 0x4]          ; 0054731a
    FSTP float ptr [EDX + 0x8]          ; 0054731d
    LEA EAX,[EBX + 0x2e0]               ; 00547320
        ;   Label: LAB_00547320
    FLD float ptr [EBP + 0x18]          ; 00547326
    FLD float ptr [EAX]                 ; 00547329
    FMUL ST1                            ; 0054732b
    FSTP float ptr [ESP + 0x160]        ; 0054732d
    FLD float ptr [EAX + 0x4]           ; 00547334
    FMUL ST1                            ; 00547337
    FSTP float ptr [ESP + 0x164]        ; 00547339
    FLD float ptr [EAX + 0x8]           ; 00547340
    FMUL ST1                            ; 00547343
    LEA EAX,[EBX + 0x2ec]               ; 00547345
    FSTP float ptr [ESP + 0x168]        ; 0054734b
    FLD float ptr [EAX]                 ; 00547352
    FMUL ST1                            ; 00547354
    FSTP float ptr [ESP + 0x184]        ; 00547356
    FLD float ptr [EAX + 0x4]           ; 0054735d
    FMUL ST1                            ; 00547360
    FSTP float ptr [ESP + 0x188]        ; 00547362
    FMUL float ptr [EAX + 0x8]          ; 00547369
    FSTP float ptr [ESP + 0x18c]        ; 0054736c
    PUSH dword ptr [EBX + 0x2dc]        ; 00547373
    PUSH dword ptr [EBX + 0x2d8]        ; 00547379
    PUSH dword ptr [EBX + 0x308]        ; 0054737f
    PUSH dword ptr [ESP + 0x174]        ; 00547385
    PUSH dword ptr [ESP + 0x170]        ; 0054738c
    PUSH dword ptr [EBX + 0x28]         ; 00547393
    MOV EDX,dword ptr [0x005be368]      ; 00547396 | DAT_005be368
    PUSH dword ptr [EBX + 0x20]         ; 0054739c
    PUSH EDX                            ; 0054739f | DAT_01e57284
    CALL FUN_00510a40                   ; 005473a0
        ;   XREF to: 00510a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00510a40()
    MOV dword ptr [ESP + 0x1c4],EAX     ; 005473a5
    XOR EDI,EDI                         ; 005473ac
    FLD float ptr [ESP + 0x1c4]         ; 005473ae
    ADD ESP,0x20                        ; 005473b5
    FLDZ                                ; 005473b8
    FXCH                                ; 005473ba
    FST float ptr [ESP + 0xc]           ; 005473bc
    FSTP double ptr [ESP]               ; 005473c0
    FCOMP double ptr [ESP]              ; 005473c3
    FNSTSW AX                           ; 005473c6
    SAHF                                ; 005473c8
    JA 0x00547410                       ; 005473c9
        ;   XREF to: 00547410 (CONDITIONAL_JUMP)  ; LAB_00547410
    FLD1                                ; 005473cb
    FCOMP double ptr [ESP]              ; 005473cd
    FNSTSW AX                           ; 005473d0
    SAHF                                ; 005473d2
    JBE 0x00547410                      ; 005473d3
        ;   XREF to: 00547410 (CONDITIONAL_JUMP)  ; LAB_00547410
    FLD float ptr [ESP + 0xc]           ; 005473d5
    FLD float ptr [ESP + 0x160]         ; 005473d9
    FMUL ST1                            ; 005473e0
    FLD float ptr [ESP + 0x164]         ; 005473e2
    FMUL ST2                            ; 005473e9
    FLD float ptr [ESP + 0x168]         ; 005473eb
    FMULP ST3                           ; 005473f2
    MOV EDI,0x1                         ; 005473f4
    FSTP float ptr [ESP + 0x164]        ; 005473f9
    FXCH                                ; 00547400
    FSTP float ptr [ESP + 0x168]        ; 00547402
    FSTP float ptr [ESP + 0x160]        ; 00547409
    LEA ESI,[EBX + 0x20]                ; 00547410
        ;   Label: LAB_00547410
    FLD float ptr [ESI]                 ; 00547413
    FADD float ptr [ESP + 0x160]        ; 00547415
    FLD float ptr [ESI + 0x4]           ; 0054741c
    FXCH                                ; 0054741f
    FSTP float ptr [ESI]                ; 00547421
    FADD float ptr [ESP + 0x164]        ; 00547423
    FLD float ptr [ESI + 0x8]           ; 0054742a
    FXCH                                ; 0054742d
    FSTP float ptr [ESI + 0x4]          ; 0054742f
    FADD float ptr [ESP + 0x168]        ; 00547432
    FSTP float ptr [ESI + 0x8]          ; 00547439
    FLD float ptr [EBX + 0x308]         ; 0054743c
    FMUL double ptr [0x0059696b]        ; 00547442 | DOUBLE_0059696b
    SUB ESP,0x4                         ; 00547448
    FSTP float ptr [ESP]                ; 0054744b
    PUSH ESI                            ; 0054744e
    MOV ECX,dword ptr [0x005be368]      ; 0054744f | DAT_005be368
    PUSH ECX                            ; 00547455 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 ; 00547456
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80()
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0054745b
    FLD float ptr [ESP + 0x1b0]         ; 00547462
    ADD ESP,0xc                         ; 00547469
    FLD float ptr [EBX + 0x24]          ; 0054746c
    FXCH                                ; 0054746f
    FSTP float ptr [ESP + 0x19c]        ; 00547471
    FCOMP float ptr [ESP + 0x19c]       ; 00547478
    FNSTSW AX                           ; 0054747f
    SAHF                                ; 00547481
    JNC 0x00547654                      ; 00547482
        ;   XREF to: 00547654 (CONDITIONAL_JUMP)  ; LAB_00547654
    FLD float ptr [EBX + 0x308]         ; 00547488
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0054748e
    FMUL double ptr [0x00596973]        ; 00547495 | DOUBLE_00596973
    MOV dword ptr [EBX + 0x24],EAX      ; 0054749b
    FADD float ptr [ESP + 0xf8]         ; 0054749e
    FLD float ptr [EBX + 0x24]          ; 005474a5
    FCOMPP                              ; 005474a8
    FNSTSW AX                           ; 005474aa
    SAHF                                ; 005474ac
    JBE 0x005474cc                      ; 005474ad
        ;   XREF to: 005474cc (CONDITIONAL_JUMP)  ; LAB_005474cc
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005474af
    MOV dword ptr [ESI],EAX             ; 005474b6
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005474b8
    MOV dword ptr [ESI + 0x4],EAX       ; 005474bf
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005474c2
    MOV dword ptr [ESI + 0x8],EAX       ; 005474c9
    LEA EAX,[EBX + 0x2ec]               ; 005474cc
        ;   Label: LAB_005474cc
    FLD float ptr [0x0059697b]          ; 005474d2 | FLOAT_0059697b
    FLD float ptr [EAX]                 ; 005474d8
    FMUL ST1                            ; 005474da
    FLD float ptr [EAX + 0x4]           ; 005474dc
    FMUL ST2                            ; 005474df
    FLD float ptr [EAX + 0x8]           ; 005474e1
    FMULP ST3                           ; 005474e4
    FXCH                                ; 005474e6
    FSTP float ptr [EAX]                ; 005474e8
    FSTP float ptr [EAX + 0x4]          ; 005474ea
    FSTP float ptr [EAX + 0x8]          ; 005474ed
    LEA EAX,[EBX + 0x20]                ; 005474f0
        ;   Label: LAB_005474f0
    FLD float ptr [EAX]                 ; 005474f3
    FSUB float ptr [ESP + 0xf4]         ; 005474f5
    FLD1                                ; 005474fc
    FXCH                                ; 005474fe
    FST float ptr [ESP + 0x154]         ; 00547500
    FLD float ptr [EAX + 0x4]           ; 00547507
    FSUB float ptr [ESP + 0xf8]         ; 0054750a
    FXCH ST2                            ; 00547511
    FDIV float ptr [EBP + 0x18]         ; 00547513
    FXCH                                ; 00547516
    FMUL ST1                            ; 00547518
    FXCH ST2                            ; 0054751a
    FST float ptr [ESP + 0x158]         ; 0054751c
    FLD float ptr [EAX + 0x8]           ; 00547523
    FSUB float ptr [ESP + 0xfc]         ; 00547526
    FXCH                                ; 0054752d
    FMUL ST2                            ; 0054752f
    FXCH                                ; 00547531
    FST float ptr [ESP + 0x15c]         ; 00547533
    FMULP ST2                           ; 0054753a
    LEA EDX,[EBX + 0x2e0]               ; 0054753c
    LEA EAX,[ESP + 0x100]               ; 00547542
    FXCH ST2                            ; 00547549
    FSTP float ptr [ESP + 0x100]        ; 0054754b
    FXCH                                ; 00547552
    FSTP float ptr [ESP + 0x104]        ; 00547554
    FSTP float ptr [ESP + 0x108]        ; 0054755b
    CMP EDX,EAX                         ; 00547562
    JZ 0x00547583                       ; 00547564
        ;   XREF to: 00547583 (CONDITIONAL_JUMP)  ; LAB_00547583
    MOV EAX,dword ptr [ESP + 0x100]     ; 00547566
    MOV dword ptr [EDX],EAX             ; 0054756d
    MOV EAX,dword ptr [ESP + 0x104]     ; 0054756f
    MOV dword ptr [EDX + 0x4],EAX       ; 00547576
    MOV EAX,dword ptr [ESP + 0x108]     ; 00547579
    MOV dword ptr [EDX + 0x8],EAX       ; 00547580
    LEA EAX,[EBX + 0x30]                ; 00547583
        ;   Label: LAB_00547583
    PUSH EAX                            ; 00547586
    PUSH 0x2dd1184                      ; 00547587 | DAT_02dd1184
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0054758c
    LEA EAX,[ESP + 0x18]                ; 00547593
    PUSH EAX                            ; 00547597
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 00547598
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0054759d
    LEA EAX,[ESP + 0x184]               ; 005475a0
    PUSH EAX                            ; 005475a7
    PUSH 0x2dd1184                      ; 005475a8 | DAT_02dd1184
    LEA EAX,[ESP + 0xa8]                ; 005475ad
    PUSH EAX                            ; 005475b4
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 005475b5
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 005475ba
    LEA EAX,[ESP + 0x10]                ; 005475bd
    PUSH EAX                            ; 005475c1
    LEA EAX,[ESP + 0xa4]                ; 005475c2
    PUSH EAX                            ; 005475c9
    LEA ESI,[ESP + 0x48]                ; 005475ca
    LEA EDI,[ESP + 0x78]                ; 005475ce
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 005475d2
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 005475d7
    LEA EAX,[ESP + 0x130]               ; 005475da
    MOV ECX,0xc                         ; 005475e1
    PUSH EAX                            ; 005475e6
    LEA EAX,[ESP + 0x74]                ; 005475e7
    LEA ESI,[ESP + 0x44]                ; 005475eb
    PUSH EAX                            ; 005475ef
    MOVSD.REP ES:EDI,ESI                ; 005475f0
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 005475f2
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_0055b180()
    ADD ESP,0x8                         ; 005475f7
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 005475fa
    CMP EAX,EDI                         ; 00547601
    JZ 0x00547615                       ; 00547603
        ;   XREF to: 00547615 (CONDITIONAL_JUMP)  ; LAB_00547615
    MOV EDX,dword ptr [EAX]             ; 00547605
    MOV dword ptr [EDI],EDX             ; 00547607
    MOV EDX,dword ptr [EAX + 0x4]       ; 00547609
    MOV dword ptr [EDI + 0x4],EDX       ; 0054760c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054760f
    MOV dword ptr [EDI + 0x8],EDX       ; 00547612
    PUSH EBX                            ; 00547615
        ;   Label: LAB_00547615
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00547616
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 0054761b
    MOV ESP,EBP                         ; 0054761e
        ;   Label: LAB_0054761e
    POP EBP                             ; 00547620
    POP EDI                             ; 00547621
    POP ESI                             ; 00547622
    POP EBX                             ; 00547623
    RET                                 ; 00547624
    ADD EBX,0x2cc                       ; 00547625
        ;   Label: LAB_00547625
    PUSH 0x42c80000                     ; 0054762b
    PUSH EBX                            ; 00547630
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 00547631
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0()
    ADD ESP,0x8                         ; 00547636
    TEST EAX,EAX                        ; 00547639
    JNZ 0x0054761e                      ; 0054763b
        ;   XREF to: 0054761e (CONDITIONAL_JUMP)  ; LAB_0054761e
    MOV EAX,dword ptr [EBX]             ; 0054763d
    MOV dword ptr [ESI],EAX             ; 0054763f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00547641
    MOV dword ptr [ESI + 0x4],EAX       ; 00547644
    MOV EAX,dword ptr [EBX + 0x8]       ; 00547647
    MOV dword ptr [ESI + 0x8],EAX       ; 0054764a
    MOV ESP,EBP                         ; 0054764d
    POP EBP                             ; 0054764f
    POP EDI                             ; 00547650
    POP ESI                             ; 00547651
    POP EBX                             ; 00547652
    RET                                 ; 00547653
    TEST EDI,EDI                        ; 00547654
        ;   Label: LAB_00547654
    JNZ 0x005474cc                      ; 00547656
        ;   XREF to: 005474cc (CONDITIONAL_JUMP)  ; LAB_005474cc
    JMP 0x005474f0                      ; 0054765c
        ;   XREF to: 005474f0 (UNCONDITIONAL_JUMP)  ; LAB_005474f0

