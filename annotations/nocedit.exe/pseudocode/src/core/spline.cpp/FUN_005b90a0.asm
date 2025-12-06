; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_spline.cpp_FUN_005b90a0()
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_dracbrid.cpp_FUN_004869a0 at 00486bbb
;   core_flies.cpp_FUN_004cc300 at 004cc3ad
;
; Referenced Globals:
;   double DOUBLE_00652fc6 = 0.5
;   float FLOAT_00652fce = 2
;   float FLOAT_00652fd2 = -3
;   float FLOAT_00652fd6 = 3
;   float FLOAT_00652fda = -2
;   float FLOAT_00652fde = 4
;
; *****************************************************************************

section .text

    SUB ESP,0x24                        ; 005b90a0
        ;   Label: core_spline.cpp_FUN_005b90a0
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b90a3
    FLD float ptr [ESP + 0x30]          ; 005b90a7
    FLD float ptr [ESP + 0x2c]          ; 005b90ab
    FLD1                                ; 005b90af
    FSUBRP ST2,ST0                      ; 005b90b1
    FMUL float ptr [ESP + 0x2c]         ; 005b90b3
    FXCH                                ; 005b90b7
    FMUL double ptr [0x00652fc6]        ; 005b90b9 | double DOUBLE_00652fc6
    FXCH                                ; 005b90bf
    FST float ptr [ESP + 0x4]           ; 005b90c1
    FMUL float ptr [ESP + 0x2c]         ; 005b90c5
    FXCH                                ; 005b90c9
    FST float ptr [ESP]                 ; 005b90cb
    FXCH                                ; 005b90ce
    FSTP float ptr [ESP + 0x8]          ; 005b90d0
    FMUL float ptr [ESP + 0x8]          ; 005b90d4
    FLD float ptr [ESP]                 ; 005b90d8
    FMUL float ptr [0x00652fce]         ; 005b90db | float FLOAT_00652fce
    FLD float ptr [0x00652fd2]          ; 005b90e1 | float FLOAT_00652fd2
    FLD float ptr [ESP]                 ; 005b90e7
    FMUL ST1                            ; 005b90ea
    FLD float ptr [0x00652fce]          ; 005b90ec | float FLOAT_00652fce
    FSUB float ptr [ESP]                ; 005b90f2
    FXCH                                ; 005b90f5
    FMUL float ptr [ESP + 0x4]          ; 005b90f7
    FXCH                                ; 005b90fb
    FST float ptr [ESP + 0x14]          ; 005b90fd
    FMUL float ptr [ESP + 0x8]          ; 005b9101
    FXCH ST3                            ; 005b9105
    FST float ptr [ESP + 0xc]           ; 005b9107
    FMUL float ptr [ESP + 0x4]          ; 005b910b
    FLD float ptr [ESP]                 ; 005b910f
    FLD ST0                             ; 005b9112
    FCHS                                ; 005b9114
    FXCH                                ; 005b9116
    FADDP ST4,ST0                       ; 005b9118
    FMUL float ptr [ESP + 0x8]          ; 005b911a
    FXCH ST3                            ; 005b911e
    FST float ptr [ESP + 0x18]          ; 005b9120
    FXCH ST3                            ; 005b9124
    FADDP                               ; 005b9126
    FXCH ST2                            ; 005b9128
    FMUL float ptr [ESP + 0x4]          ; 005b912a
    FLD float ptr [ESP]                 ; 005b912e
    FMUL float ptr [ESP + 0x2c]         ; 005b9131
    FLD float ptr [0x00652fd6]          ; 005b9135 | float FLOAT_00652fd6
    FXCH ST2                            ; 005b913b
    FADDP ST5,ST0                       ; 005b913d
    FLD float ptr [ESP]                 ; 005b913f
    FXCH ST2                            ; 005b9142
    FSUB float ptr [ESP + 0xc]          ; 005b9144
    FXCH ST2                            ; 005b9148
    FMUL float ptr [ESP + 0x4]          ; 005b914a
    FXCH ST2                            ; 005b914e
    FSTP float ptr [ESP + 0x1c]         ; 005b9150
    FSTP float ptr [ESP + 0x10]         ; 005b9154
    FLD1                                ; 005b9158
    FADDP ST4,ST0                       ; 005b915a
    FXCH ST2                            ; 005b915c
    FSUB float ptr [ESP + 0x10]         ; 005b915e
    FXCH ST3                            ; 005b9162
    FSTP float ptr [EAX + 0x4]          ; 005b9164
    FLD float ptr [ESP + 0x1c]          ; 005b9167
    FMUL float ptr [ESP + 0x4]          ; 005b916b
    FLD float ptr [ESP]                 ; 005b916f
    FMUL float ptr [0x00652fde]         ; 005b9172 | float FLOAT_00652fde
    FLD float ptr [ESP]                 ; 005b9178
    FADD float ptr [0x00652fda]         ; 005b917b | float FLOAT_00652fda
    FXCH ST4                            ; 005b9181
    FSUBP ST6,ST0                       ; 005b9183
    FXCH ST3                            ; 005b9185
    FST float ptr [ESP + 0x20]          ; 005b9187
    FMUL float ptr [ESP + 0x8]          ; 005b918b
    FXCH ST5                            ; 005b918f
    FSTP float ptr [EAX + 0xc]          ; 005b9191
    FLD float ptr [ESP]                 ; 005b9194
    FMUL float ptr [0x00652fd6]         ; 005b9197 | float FLOAT_00652fd6
    FXCH ST3                            ; 005b919d
    FMUL float ptr [ESP + 0x2c]         ; 005b919f
    FLD float ptr [ESP + 0x14]          ; 005b91a3
    FXCH                                ; 005b91a7
    FADDP ST3,ST0                       ; 005b91a9
    FMUL float ptr [0x00652fd6]         ; 005b91ab | float FLOAT_00652fd6
    FXCH ST2                            ; 005b91b1
    FSUB float ptr [ESP]                ; 005b91b3
    FXCH ST2                            ; 005b91b6
    FMUL float ptr [ESP + 0x4]          ; 005b91b8
    FXCH ST2                            ; 005b91bc
    FSTP float ptr [EAX + 0x10]         ; 005b91be
    FLD float ptr [ESP + 0x18]          ; 005b91c1
    FMUL float ptr [0x00652fce]         ; 005b91c5 | float FLOAT_00652fce
    FXCH ST3                            ; 005b91cb
    FMUL float ptr [ESP + 0x4]          ; 005b91cd
    FXCH ST3                            ; 005b91d1
    FMUL float ptr [ESP + 0x2c]         ; 005b91d3
    FLD float ptr [ESP + 0x1c]          ; 005b91d7
    FMUL float ptr [0x00652fce]         ; 005b91db | float FLOAT_00652fce
    FXCH                                ; 005b91e1
    FADDP ST3,ST0                       ; 005b91e3
    FMUL float ptr [ESP + 0x2c]         ; 005b91e5
    FXCH ST2                            ; 005b91e9
    FSTP float ptr [EAX + 0x14]         ; 005b91eb
    FLD float ptr [ESP + 0xc]           ; 005b91ee
    FMUL float ptr [ESP + 0x2c]         ; 005b91f2
    FLD float ptr [ESP + 0x20]          ; 005b91f6
    FMUL float ptr [0x00652fd6]         ; 005b91fa | float FLOAT_00652fd6
    FXCH                                ; 005b9200
    FSUBP ST4,ST0                       ; 005b9202
    FMUL float ptr [ESP + 0x4]          ; 005b9204
    FXCH ST3                            ; 005b9208
    FSTP float ptr [EAX + 0x1c]         ; 005b920a
    FADDP ST4,ST0                       ; 005b920d
    FXCH ST2                            ; 005b920f
    FSTP float ptr [EAX]                ; 005b9211
    FADDP                               ; 005b9213
    FXCH                                ; 005b9215
    FADD float ptr [ESP + 0x10]         ; 005b9217
    FXCH                                ; 005b921b
    FADD float ptr [ESP]                ; 005b921d
    FXCH                                ; 005b9220
    FSTP float ptr [EAX + 0x8]          ; 005b9222
    FSTP float ptr [EAX + 0x18]         ; 005b9225
    ADD ESP,0x24                        ; 005b9228
    RET                                 ; 005b922b

