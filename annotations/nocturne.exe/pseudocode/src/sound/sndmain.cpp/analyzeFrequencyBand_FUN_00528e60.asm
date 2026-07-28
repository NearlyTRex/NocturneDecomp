; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined8       Stack[-0xa0]:8  local_a0
; undefined4       Stack[-0x98]:4  local_98
; undefined8       Stack[-0x94]:8  local_94
; undefined8       Stack[-0x8c]:8  local_8c
; undefined8       Stack[-0x84]:8  local_84
; undefined8       Stack[-0x7c]:8  local_7c
; undefined8       Stack[-0x74]:8  local_74
; undefined8       Stack[-0x6c]:8  local_6c
; undefined8       Stack[-0x4c]:8  local_4c
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
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1a8f
;
; Referenced Globals:
;   double DOUBLE_00593ae6 = 2
;   double DOUBLE_00593aee = 3.14159265350000
;   undefined4 DAT_005bea6c
;   undefined4 DAT_02dc8330
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;   sound_sndmain.cpp_getMixBufferCount_FUN_00528620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528e60
        ;   Label: sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60
    PUSH ESI                            ; 00528e61
    PUSH EDI                            ; 00528e62
    PUSH EBP                            ; 00528e63
    MOV EBP,ESP                         ; 00528e64
    SUB ESP,0xb4                        ; 00528e66
    AND ESP,0xfffffff8                  ; 00528e6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00528e6f
    SHL EBX,0x2                         ; 00528e72
    CMP dword ptr [EBX + 0x2dc8360],0x0 ; 00528e75
    JZ 0x00528e99                       ; 00528e7c
        ;   XREF to: 00528e99 (CONDITIONAL_JUMP)  ; LAB_00528e99
    CMP dword ptr [EBX + 0x2dc8384],0x0 ; 00528e7e
    JZ 0x00528e99                       ; 00528e85
        ;   XREF to: 00528e99 (CONDITIONAL_JUMP)  ; LAB_00528e99
    CMP dword ptr [EBX + 0x2dc83a4],0x0 ; 00528e87
    JZ 0x00528e99                       ; 00528e8e
        ;   XREF to: 00528e99 (CONDITIONAL_JUMP)  ; LAB_00528e99
    CMP dword ptr [0x02dc8330],0x1      ; 00528e90 | DAT_02dc8330
    JGE 0x00528eb0                      ; 00528e97
        ;   XREF to: 00528eb0 (CONDITIONAL_JUMP)  ; LAB_00528eb0
    XOR EDI,EDI                         ; 00528e99
        ;   Label: LAB_00528e99
    MOV dword ptr [ESP + 0x88],EDI      ; 00528e9b
    MOV EAX,dword ptr [ESP + 0x88]      ; 00528ea2
    MOV ESP,EBP                         ; 00528ea9
    POP EBP                             ; 00528eab
    POP EDI                             ; 00528eac
    POP ESI                             ; 00528ead
    POP EBX                             ; 00528eae
    RET                                 ; 00528eaf
    CALL sound_sndmain.cpp_getMixBufferCount_FUN_00528620 ; 00528eb0
        ;   XREF to: 00528620 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getMixBufferCount_FUN_00528620()
        ;   Label: LAB_00528eb0
    CMP EAX,dword ptr [EBX + 0x2dbd350] ; 00528eb5
    JZ 0x00529207                       ; 00528ebb
        ;   XREF to: 00529207 (CONDITIONAL_JUMP)  ; LAB_00529207
    MOV ESI,dword ptr [0x02dc8330]      ; 00528ec1 | DAT_02dc8330
    MOV EDX,dword ptr [EBX + 0x2dc8384] ; 00528ec7
    MOV ECX,dword ptr [EBX + 0x2dc83a4] ; 00528ecd
    MOV EDI,dword ptr [EBX + 0x2dc8360] ; 00528ed3
    MOV dword ptr [ESP + 0xa8],EDX      ; 00528ed9
    MOV dword ptr [ESP + 0xa4],ECX      ; 00528ee0
    MOV dword ptr [ESP + 0xa0],ESI      ; 00528ee7
    XOR EBX,EBX                         ; 00528eee
    MOV ESI,0x1                         ; 00528ef0
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00528ef5
    MOV dword ptr [ESP + 0x94],EBX      ; 00528efc
    MOV dword ptr [ESP + 0x9c],ESI      ; 00528f03
    MOV CL,byte ptr [ESP + 0x9c]        ; 00528f0a
        ;   Label: LAB_00528f0a
    MOV EAX,0x1                         ; 00528f11
    SHL EAX,CL                          ; 00528f16
    CMP EAX,EDX                         ; 00528f18
    JGE 0x00528f25                      ; 00528f1a
        ;   XREF to: 00528f25 (CONDITIONAL_JUMP)  ; LAB_00528f25
    INC dword ptr [ESP + 0x9c]          ; 00528f1c
    JMP 0x00528f0a                      ; 00528f23
        ;   XREF to: 00528f0a (UNCONDITIONAL_JUMP)  ; LAB_00528f0a
    XOR ESI,ESI                         ; 00528f25
        ;   Label: LAB_00528f25
    TEST EDX,EDX                        ; 00528f27
    JLE 0x00528f92                      ; 00528f29
        ;   XREF to: 00528f92 (CONDITIONAL_JUMP)  ; LAB_00528f92
    MOV EBX,dword ptr [ESP + 0x9c]      ; 00528f2b
        ;   Label: LAB_00528f2b
    MOV EDX,ESI                         ; 00528f32
    XOR ECX,ECX                         ; 00528f34
    XOR EAX,EAX                         ; 00528f36
    TEST EBX,EBX                        ; 00528f38
    JLE 0x00528f53                      ; 00528f3a
        ;   XREF to: 00528f53 (CONDITIONAL_JUMP)  ; LAB_00528f53
    MOV EBX,EDX                         ; 00528f3c
        ;   Label: LAB_00528f3c
    ADD EAX,EAX                         ; 00528f3e
    AND EBX,0x1                         ; 00528f40
    INC ECX                             ; 00528f43
    OR EAX,EBX                          ; 00528f44
    MOV EBX,dword ptr [ESP + 0x9c]      ; 00528f46
    SAR EDX,0x1                         ; 00528f4d
    CMP ECX,EBX                         ; 00528f4f
    JL 0x00528f3c                       ; 00528f51
        ;   XREF to: 00528f3c (CONDITIONAL_JUMP)  ; LAB_00528f3c
    FLD float ptr [EDI]                 ; 00528f53
        ;   Label: LAB_00528f53
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00528f55
    SHL EAX,0x2                         ; 00528f5c
    MOV EBX,dword ptr [ESP + 0x94]      ; 00528f5f
    FSTP float ptr [EDX + EAX*0x1]      ; 00528f66
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00528f69
    LEA ECX,[ESI*0x4 + 0x0]             ; 00528f70
    ADD EAX,EDX                         ; 00528f77
    TEST EBX,EBX                        ; 00528f79
    JNZ 0x005293b7                      ; 00528f7b
        ;   XREF to: 005293b7 (CONDITIONAL_JUMP)  ; LAB_005293b7
    MOV dword ptr [EAX],EBX             ; 00528f81
        ;   Label: LAB_00528f81
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00528f83
    INC ESI                             ; 00528f8a
    ADD EDI,0x4                         ; 00528f8b
    CMP ESI,EAX                         ; 00528f8e
    JL 0x00528f2b                       ; 00528f90
        ;   XREF to: 00528f2b (CONDITIONAL_JUMP)  ; LAB_00528f2b
    MOV EDX,0x2                         ; 00528f92
        ;   Label: LAB_00528f92
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00528f97
    MOV dword ptr [ESP + 0x98],EDX      ; 00528f9e
    CMP ECX,EDX                         ; 00528fa5
    JL 0x005291f8                       ; 00528fa7
        ;   XREF to: 005291f8 (CONDITIONAL_JUMP)  ; LAB_005291f8
    MOV EAX,dword ptr [ESP + 0x98]      ; 00528fad
        ;   Label: LAB_00528fad
    MOV EDX,EAX                         ; 00528fb4
    SAR EDX,0x1f                        ; 00528fb6
    SUB EAX,EDX                         ; 00528fb9
    SAR EAX,0x1                         ; 00528fbb
    MOV dword ptr [ESP + 0xb0],EAX      ; 00528fbd
    MOV dword ptr [ESP + 0x30],EAX      ; 00528fc4
    FILD dword ptr [ESP + 0xb0]         ; 00528fc8
    FDIVR double ptr [0x00593aee]       ; 00528fcf | DOUBLE_00593aee
    FLD ST0                             ; 00528fd5
    FSINCOS                             ; 00528fd7
    FXCH ST2                            ; 00528fd9
    FLD double ptr [0x00593ae6]         ; 00528fdb | DOUBLE_00593ae6
    FXCH                                ; 00528fe1
    FMUL ST1                            ; 00528fe3
    FLD ST0                             ; 00528fe5
    FSIN                                ; 00528fe7
    FXCH                                ; 00528fe9
    FCOS                                ; 00528feb
    FXCH ST4                            ; 00528fed
    FSTP double ptr [ESP + 0x7c]        ; 00528fef
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00528ff3
    MOV dword ptr [ESP + 0x18],EAX      ; 00528ff7
    MOV EAX,dword ptr [ESP + 0x80]      ; 00528ffb
    MOV dword ptr [ESP + 0x1c],EAX      ; 00529002
    FLD double ptr [ESP + 0x18]         ; 00529006
    FMULP ST2                           ; 0052900a
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0052900c
    FXCH ST3                            ; 00529013
    FSTP double ptr [ESP + 0x7c]        ; 00529015
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00529019
    FXCH                                ; 0052901d
    FSTP double ptr [ESP]               ; 0052901f
    MOV dword ptr [ESP + 0x20],EAX      ; 00529022
    MOV EAX,dword ptr [ESP + 0x80]      ; 00529026
    FXCH                                ; 0052902d
    FSTP double ptr [ESP + 0x8]         ; 0052902f
    MOV dword ptr [ESP + 0x24],EAX      ; 00529033
    XOR EAX,EAX                         ; 00529037
    FSTP double ptr [ESP + 0x10]        ; 00529039
    MOV dword ptr [ESP + 0xac],EAX      ; 0052903d
    TEST EDX,EDX                        ; 00529044
    JLE 0x005291d9                      ; 00529046
        ;   XREF to: 005291d9 (CONDITIONAL_JUMP)  ; LAB_005291d9
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052904c
        ;   Label: LAB_0052904c
    MOV dword ptr [ESP + 0x3c],EAX      ; 00529050
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00529054
    MOV dword ptr [ESP + 0x40],EAX      ; 00529058
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052905c
    MOV dword ptr [ESP + 0x44],EAX      ; 00529060
    MOV EAX,dword ptr [ESP + 0x24]      ; 00529064
    MOV dword ptr [ESP + 0x48],EAX      ; 00529068
    MOV EAX,dword ptr [ESP]             ; 0052906c
    MOV dword ptr [ESP + 0x54],EAX      ; 0052906f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00529073
    MOV dword ptr [ESP + 0x58],EAX      ; 00529077
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052907b
    MOV EDI,dword ptr [ESP + 0x30]      ; 0052907f
    MOV dword ptr [ESP + 0x5c],EAX      ; 00529083
    MOV EAX,dword ptr [ESP + 0xc]       ; 00529087
    XOR ESI,ESI                         ; 0052908b
    MOV dword ptr [ESP + 0x60],EAX      ; 0052908d
    TEST EDI,EDI                        ; 00529091
    JLE 0x005291b3                      ; 00529093
        ;   XREF to: 005291b3 (CONDITIONAL_JUMP)  ; LAB_005291b3
    FLD double ptr [ESP + 0x10]         ; 00529099
    MOV ECX,dword ptr [ESP + 0xac]      ; 0052909d
    MOV EDX,dword ptr [ESP + 0xa4]      ; 005290a4
    LEA EBX,[EDI*0x4 + 0x0]             ; 005290ab
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005290b2
    MOV dword ptr [ESP + 0xb0],EBX      ; 005290b9
    MOV EBX,dword ptr [ESP + 0xa4]      ; 005290c0
    MOV EDI,dword ptr [ESP + 0xb0]      ; 005290c7
    SHL ECX,0x2                         ; 005290ce
    ADD EBX,EDI                         ; 005290d1
    MOV EDI,dword ptr [ESP + 0xa8]      ; 005290d3
    ADD EDX,ECX                         ; 005290da
    ADD EDI,dword ptr [ESP + 0xb0]      ; 005290dc
    ADD EAX,ECX                         ; 005290e3
    ADD EDI,ECX                         ; 005290e5
    ADD EBX,ECX                         ; 005290e7
    MOV ECX,EDI                         ; 005290e9
    FLD ST0                             ; 005290eb
        ;   Label: LAB_005290eb
    FMUL double ptr [ESP + 0x3c]        ; 005290ed
    FLD ST1                             ; 005290f1
    FMUL double ptr [ESP + 0x54]        ; 005290f3
    FXCH                                ; 005290f7
    FSUB double ptr [ESP + 0x44]        ; 005290f9
    FLD float ptr [ECX]                 ; 005290fd
    FXCH                                ; 005290ff
    FST double ptr [ESP + 0x34]         ; 00529101
    FMUL ST1                            ; 00529105
    FXCH ST2                            ; 00529107
    FSUB double ptr [ESP + 0x5c]        ; 00529109
    FLD float ptr [EBX]                 ; 0052910d
    FLD double ptr [ESP + 0x34]         ; 0052910f
    FMUL ST1                            ; 00529113
    FXCH ST2                            ; 00529115
    FST double ptr [ESP + 0x4c]         ; 00529117
    FMULP                               ; 0052911b
    FLD double ptr [ESP + 0x4c]         ; 0052911d
    FMULP ST3                           ; 00529121
    FLD float ptr [EAX]                 ; 00529123
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00529125
    ADD EDX,0x4                         ; 00529129
    ADD EAX,0x4                         ; 0052912c
    MOV dword ptr [ESP + 0x44],EDI      ; 0052912f
    MOV EDI,dword ptr [ESP + 0x40]      ; 00529133
    ADD EBX,0x4                         ; 00529137
    MOV dword ptr [ESP + 0x48],EDI      ; 0052913a
    MOV EDI,dword ptr [ESP + 0x34]      ; 0052913e
    ADD ECX,0x4                         ; 00529142
    MOV dword ptr [ESP + 0x3c],EDI      ; 00529145
    MOV EDI,dword ptr [ESP + 0x38]      ; 00529149
    INC ESI                             ; 0052914d
    MOV dword ptr [ESP + 0x40],EDI      ; 0052914e
    FXCH                                ; 00529152
    FSUBP ST4,ST0                       ; 00529154
    MOV EDI,dword ptr [ESP + 0x54]      ; 00529156
    FXCH ST2                            ; 0052915a
    FADDP                               ; 0052915c
    FXCH                                ; 0052915e
    FSUB ST0,ST2                        ; 00529160
    MOV dword ptr [ESP + 0x5c],EDI      ; 00529162
    FSTP float ptr [ECX + -0x4]         ; 00529166
    MOV EDI,dword ptr [ESP + 0x58]      ; 00529169
    FLD float ptr [EDX + -0x4]          ; 0052916d
    MOV dword ptr [ESP + 0x60],EDI      ; 00529170
    FSUB ST0,ST1                        ; 00529174
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00529176
    FSTP float ptr [EBX + -0x4]         ; 0052917a
    FLD float ptr [EAX + -0x4]          ; 0052917d
    MOV dword ptr [ESP + 0x54],EDI      ; 00529180
    FLD ST0                             ; 00529184
    MOV EDI,dword ptr [ESP + 0x50]      ; 00529186
    FADDP ST3,ST0                       ; 0052918a
    MOV dword ptr [ESP + 0x58],EDI      ; 0052918c
    FXCH ST2                            ; 00529190
    FSTP ST2                            ; 00529192
    FXCH                                ; 00529194
    FSTP float ptr [EAX + -0x4]         ; 00529196
    FLD float ptr [EDX + -0x4]          ; 00529199
    FADD ST1,ST0                        ; 0052919c
    MOV EDI,dword ptr [ESP + 0x30]      ; 0052919e
    FXCH                                ; 005291a2
    FSTP ST1                            ; 005291a4
    FSTP float ptr [EDX + -0x4]         ; 005291a6
    CMP ESI,EDI                         ; 005291a9
    JL 0x005290eb                       ; 005291ab
        ;   XREF to: 005290eb (CONDITIONAL_JUMP)  ; LAB_005290eb
    FSTP ST0                            ; 005291b1
    MOV EAX,dword ptr [ESP + 0x98]      ; 005291b3
        ;   Label: LAB_005291b3
    MOV ECX,dword ptr [ESP + 0xac]      ; 005291ba
    ADD ECX,EAX                         ; 005291c1
    MOV EBX,dword ptr [ESP + 0xa0]      ; 005291c3
    MOV dword ptr [ESP + 0xac],ECX      ; 005291ca
    CMP ECX,EBX                         ; 005291d1
    JL 0x0052904c                       ; 005291d3
        ;   XREF to: 0052904c (CONDITIONAL_JUMP)  ; LAB_0052904c
    MOV ESI,dword ptr [ESP + 0x98]      ; 005291d9
        ;   Label: LAB_005291d9
    ADD ESI,ESI                         ; 005291e0
    MOV EDI,dword ptr [ESP + 0xa0]      ; 005291e2
    MOV dword ptr [ESP + 0x98],ESI      ; 005291e9
    CMP ESI,EDI                         ; 005291f0
    JLE 0x00528fad                      ; 005291f2
        ;   XREF to: 00528fad (CONDITIONAL_JUMP)  ; LAB_00528fad
    CALL sound_sndmain.cpp_getMixBufferCount_FUN_00528620 ; 005291f8
        ;   XREF to: 00528620 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getMixBufferCount_FUN_00528620()
        ;   Label: LAB_005291f8
    MOV EDX,dword ptr [EBP + 0x14]      ; 005291fd
    MOV dword ptr [EDX*0x4 + 0x2dbd350],EAX ; 00529200
    MOV EAX,[0x02dc8330]                ; 00529207 | DAT_02dc8330
        ;   Label: LAB_00529207
    MOV EDX,EAX                         ; 0052920c
    SAR EDX,0x1f                        ; 0052920e
    SUB EAX,EDX                         ; 00529211
    SAR EAX,0x1                         ; 00529213
    LEA EDI,[EAX + 0x1]                 ; 00529215
    MOV dword ptr [ESP + 0xb0],EDI      ; 00529218
    FLD float ptr [EBP + 0x18]          ; 0052921f
    FILD dword ptr [ESP + 0xb0]         ; 00529222
    FSTP float ptr [ESP + 0xb0]         ; 00529229
    FMUL float ptr [ESP + 0xb0]         ; 00529230
    FILD dword ptr [0x005bea6c]         ; 00529237 | DAT_005bea6c
    FDIVP                               ; 0052923d
    SUB ESP,0x8                         ; 0052923f
    FSTP double ptr [ESP]               ; 00529242
    CALL crt_math.c_floor_FUN_005648c0  ; 00529245
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x84],EAX      ; 0052924a
    MOV dword ptr [ESP + 0x88],EDX      ; 00529251
    FLD double ptr [ESP + 0x84]         ; 00529258
    ADD ESP,0x8                         ; 0052925f
    FLD float ptr [EBP + 0x1c]          ; 00529262
    FMUL float ptr [ESP + 0xb0]         ; 00529265
    FILD dword ptr [0x005bea6c]         ; 0052926c | DAT_005bea6c
    FDIVP                               ; 00529272
    FXCH                                ; 00529274
    CALL crt_math.c_round_FUN_00563a30  ; 00529276
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x90]        ; 0052927b
    SUB ESP,0x8                         ; 00529282
    FSTP double ptr [ESP]               ; 00529285
    CALL crt_math.c_floor_FUN_005648c0  ; 00529288
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x84],EAX      ; 0052928d
    MOV dword ptr [ESP + 0x88],EDX      ; 00529294
    FLD double ptr [ESP + 0x84]         ; 0052929b
    ADD ESP,0x8                         ; 005292a2
    CALL crt_math.c_round_FUN_00563a30  ; 005292a5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EAX,dword ptr [ESP + 0x90]      ; 005292aa
    FISTP dword ptr [ESP + 0x8c]        ; 005292b1
    CMP EDI,EAX                         ; 005292b8
    JLE 0x005293c1                      ; 005292ba
        ;   XREF to: 005293c1 (CONDITIONAL_JUMP)  ; LAB_005293c1
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005292c0
    TEST EDX,EDX                        ; 005292c7
    JLE 0x005293c1                      ; 005292c9
        ;   XREF to: 005293c1 (CONDITIONAL_JUMP)  ; LAB_005293c1
    CMP EDI,EDX                         ; 005292cf
    JG 0x005292da                       ; 005292d1
        ;   XREF to: 005292da (CONDITIONAL_JUMP)  ; LAB_005292da
    MOV dword ptr [ESP + 0x8c],EDI      ; 005292d3
    CMP dword ptr [ESP + 0x90],0x0      ; 005292da
        ;   Label: LAB_005292da
    JL 0x005293d8                       ; 005292e2
        ;   XREF to: 005293d8 (CONDITIONAL_JUMP)  ; LAB_005293d8
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005292e8
        ;   Label: LAB_005292e8
    SUB ESI,dword ptr [ESP + 0x90]      ; 005292ef
    CMP ESI,0x1                         ; 005292f6
    JGE 0x00529316                      ; 005292f9
        ;   XREF to: 00529316 (CONDITIONAL_JUMP)  ; LAB_00529316
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005292fb
    MOV ESI,0x1                         ; 00529302
    CMP EDI,EDX                         ; 00529307
    JG 0x00529316                       ; 00529309
        ;   XREF to: 00529316 (CONDITIONAL_JUMP)  ; LAB_00529316
    MOV EAX,EDI                         ; 0052930b
    SUB EAX,ESI                         ; 0052930d
    MOV dword ptr [ESP + 0x90],EAX      ; 0052930f
    XOR ECX,ECX                         ; 00529316
        ;   Label: LAB_00529316
    XOR EBX,EBX                         ; 00529318
    MOV dword ptr [ESP + 0x28],ECX      ; 0052931a
    MOV dword ptr [ESP + 0x2c],ECX      ; 0052931e
    TEST ESI,ESI                        ; 00529322
    JLE 0x00529374                      ; 00529324
        ;   XREF to: 00529374 (CONDITIONAL_JUMP)  ; LAB_00529374
    MOV EAX,dword ptr [EBP + 0x14]      ; 00529326
    MOV EDX,dword ptr [EAX*0x4 + 0x2dc8384] ; 00529329
    MOV dword ptr [ESP + 0x84],EDX      ; 00529330
    MOV EDX,dword ptr [EAX*0x4 + 0x2dc83a4] ; 00529337
    MOV EAX,dword ptr [ESP + 0x90]      ; 0052933e
    FLD double ptr [ESP + 0x28]         ; 00529345
    SHL EAX,0x2                         ; 00529349
    MOV ECX,dword ptr [ESP + 0x84]      ; 0052934c
    ADD EDX,EAX                         ; 00529353
    ADD ECX,EAX                         ; 00529355
    FLD float ptr [ECX]                 ; 00529357
        ;   Label: LAB_00529357
    FMUL ST0                            ; 00529359
    FLD float ptr [EDX]                 ; 0052935b
    FMUL ST0                            ; 0052935d
    FADDP                               ; 0052935f
    FSQRT                               ; 00529361
    ADD EDX,0x4                         ; 00529363
    ADD ECX,0x4                         ; 00529366
    INC EBX                             ; 00529369
    FADDP                               ; 0052936a
    CMP EBX,ESI                         ; 0052936c
    JL 0x00529357                       ; 0052936e
        ;   XREF to: 00529357 (CONDITIONAL_JUMP)  ; LAB_00529357
    FSTP double ptr [ESP + 0x28]        ; 00529370
    MOV dword ptr [ESP + 0xb0],ESI      ; 00529374
        ;   Label: LAB_00529374
    FILD dword ptr [ESP + 0xb0]         ; 0052937b
    FDIVR double ptr [ESP + 0x28]       ; 00529382
    MOV dword ptr [ESP + 0xb0],EDI      ; 00529386
    FILD dword ptr [ESP + 0xb0]         ; 0052938d
    FDIVP                               ; 00529394
    FSQRT                               ; 00529396
    FMUL double ptr [0x00593ae6]        ; 00529398 | DOUBLE_00593ae6
    FST double ptr [ESP + 0x28]         ; 0052939e
    FSTP float ptr [ESP + 0x88]         ; 005293a2
    MOV EAX,dword ptr [ESP + 0x88]      ; 005293a9
    MOV ESP,EBP                         ; 005293b0
    POP EBP                             ; 005293b2
    POP EDI                             ; 005293b3
    POP ESI                             ; 005293b4
    POP EBX                             ; 005293b5
    RET                                 ; 005293b6
    MOV EDX,EBX                         ; 005293b7
        ;   Label: LAB_005293b7
    MOV EBX,dword ptr [ECX + EDX*0x1]   ; 005293b9
    JMP 0x00528f81                      ; 005293bc
        ;   XREF to: 00528f81 (UNCONDITIONAL_JUMP)  ; LAB_00528f81
    XOR ESI,ESI                         ; 005293c1
        ;   Label: LAB_005293c1
    MOV dword ptr [ESP + 0x88],ESI      ; 005293c3
    MOV EAX,dword ptr [ESP + 0x88]      ; 005293ca
    MOV ESP,EBP                         ; 005293d1
    POP EBP                             ; 005293d3
    POP EDI                             ; 005293d4
    POP ESI                             ; 005293d5
    POP EBX                             ; 005293d6
    RET                                 ; 005293d7
    XOR ESI,ESI                         ; 005293d8
        ;   Label: LAB_005293d8
    MOV dword ptr [ESP + 0x90],ESI      ; 005293da
    JMP 0x005292e8                      ; 005293e1
        ;   XREF to: 005292e8 (UNCONDITIONAL_JUMP)  ; LAB_005292e8

