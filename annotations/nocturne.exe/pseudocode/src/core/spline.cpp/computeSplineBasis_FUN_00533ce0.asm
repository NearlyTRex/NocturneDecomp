; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spline_cpp_computeSplineBasis_FUN_00533ce0(float *out_basis,float t,float tension)
;
; Parameters:
; float *          Stack[0x4]:4   out_basis
; float            Stack[0x8]:4   t
; float            Stack[0xc]:4   tension
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
; XREF[3]:
;   core_dracbrid.cpp_CDraculaBride_startFreakySound_FUN_0045ab40 at 0045af24
;   core_dracbrid.cpp_CDraculaBride_updateFreakySounds_FUN_0045b020 at 0045b23b
;   core_flies.cpp_CFlies_renderOpaque_FUN_0048f490 at 0048f53f
;
; Referenced Globals:
;   double DOUBLE_005950fe = 0.5
;   float FLOAT_00595106 = 2
;   float FLOAT_0059510a = -3
;   float FLOAT_0059510e = 3
;   float FLOAT_00595112 = -2
;   float FLOAT_00595116 = 4
;
; *****************************************************************************

section .text

    SUB ESP,0x24                        ; 00533ce0
        ;   Label: core_spline.cpp_computeSplineBasis_FUN_00533ce0
    MOV EAX,dword ptr [ESP + 0x28]      ; 00533ce3
    FLD float ptr [ESP + 0x30]          ; 00533ce7
    FLD float ptr [ESP + 0x2c]          ; 00533ceb
    FLD1                                ; 00533cef
    FSUBRP ST2,ST0                      ; 00533cf1
    FMUL float ptr [ESP + 0x2c]         ; 00533cf3
    FXCH                                ; 00533cf7
    FMUL double ptr [0x005950fe]        ; 00533cf9 | DOUBLE_005950fe
    FXCH                                ; 00533cff
    FST float ptr [ESP + 0x4]           ; 00533d01
    FMUL float ptr [ESP + 0x2c]         ; 00533d05
    FXCH                                ; 00533d09
    FST float ptr [ESP]                 ; 00533d0b
    FXCH                                ; 00533d0e
    FSTP float ptr [ESP + 0x8]          ; 00533d10
    FMUL float ptr [ESP + 0x8]          ; 00533d14
    FLD float ptr [ESP]                 ; 00533d18
    FMUL float ptr [0x00595106]         ; 00533d1b | FLOAT_00595106
    FLD float ptr [0x0059510a]          ; 00533d21 | FLOAT_0059510a
    FLD float ptr [ESP]                 ; 00533d27
    FMUL ST1                            ; 00533d2a
    FLD float ptr [0x00595106]          ; 00533d2c | FLOAT_00595106
    FSUB float ptr [ESP]                ; 00533d32
    FXCH                                ; 00533d35
    FMUL float ptr [ESP + 0x4]          ; 00533d37
    FXCH                                ; 00533d3b
    FST float ptr [ESP + 0x14]          ; 00533d3d
    FMUL float ptr [ESP + 0x8]          ; 00533d41
    FXCH ST3                            ; 00533d45
    FST float ptr [ESP + 0xc]           ; 00533d47
    FMUL float ptr [ESP + 0x4]          ; 00533d4b
    FLD float ptr [ESP]                 ; 00533d4f
    FLD ST0                             ; 00533d52
    FCHS                                ; 00533d54
    FXCH                                ; 00533d56
    FADDP ST4,ST0                       ; 00533d58
    FMUL float ptr [ESP + 0x8]          ; 00533d5a
    FXCH ST3                            ; 00533d5e
    FST float ptr [ESP + 0x18]          ; 00533d60
    FXCH ST3                            ; 00533d64
    FADDP                               ; 00533d66
    FXCH ST2                            ; 00533d68
    FMUL float ptr [ESP + 0x4]          ; 00533d6a
    FLD float ptr [ESP]                 ; 00533d6e
    FMUL float ptr [ESP + 0x2c]         ; 00533d71
    FLD float ptr [0x0059510e]          ; 00533d75 | FLOAT_0059510e
    FXCH ST2                            ; 00533d7b
    FADDP ST5,ST0                       ; 00533d7d
    FLD float ptr [ESP]                 ; 00533d7f
    FXCH ST2                            ; 00533d82
    FSUB float ptr [ESP + 0xc]          ; 00533d84
    FXCH ST2                            ; 00533d88
    FMUL float ptr [ESP + 0x4]          ; 00533d8a
    FXCH ST2                            ; 00533d8e
    FSTP float ptr [ESP + 0x1c]         ; 00533d90
    FSTP float ptr [ESP + 0x10]         ; 00533d94
    FLD1                                ; 00533d98
    FADDP ST4,ST0                       ; 00533d9a
    FXCH ST2                            ; 00533d9c
    FSUB float ptr [ESP + 0x10]         ; 00533d9e
    FXCH ST3                            ; 00533da2
    FSTP float ptr [EAX + 0x4]          ; 00533da4
    FLD float ptr [ESP + 0x1c]          ; 00533da7
    FMUL float ptr [ESP + 0x4]          ; 00533dab
    FLD float ptr [ESP]                 ; 00533daf
    FMUL float ptr [0x00595116]         ; 00533db2 | FLOAT_00595116
    FLD float ptr [ESP]                 ; 00533db8
    FADD float ptr [0x00595112]         ; 00533dbb | FLOAT_00595112
    FXCH ST4                            ; 00533dc1
    FSUBP ST6,ST0                       ; 00533dc3
    FXCH ST3                            ; 00533dc5
    FST float ptr [ESP + 0x20]          ; 00533dc7
    FMUL float ptr [ESP + 0x8]          ; 00533dcb
    FXCH ST5                            ; 00533dcf
    FSTP float ptr [EAX + 0xc]          ; 00533dd1
    FLD float ptr [ESP]                 ; 00533dd4
    FMUL float ptr [0x0059510e]         ; 00533dd7 | FLOAT_0059510e
    FXCH ST3                            ; 00533ddd
    FMUL float ptr [ESP + 0x2c]         ; 00533ddf
    FLD float ptr [ESP + 0x14]          ; 00533de3
    FXCH                                ; 00533de7
    FADDP ST3,ST0                       ; 00533de9
    FMUL float ptr [0x0059510e]         ; 00533deb | FLOAT_0059510e
    FXCH ST2                            ; 00533df1
    FSUB float ptr [ESP]                ; 00533df3
    FXCH ST2                            ; 00533df6
    FMUL float ptr [ESP + 0x4]          ; 00533df8
    FXCH ST2                            ; 00533dfc
    FSTP float ptr [EAX + 0x10]         ; 00533dfe
    FLD float ptr [ESP + 0x18]          ; 00533e01
    FMUL float ptr [0x00595106]         ; 00533e05 | FLOAT_00595106
    FXCH ST3                            ; 00533e0b
    FMUL float ptr [ESP + 0x4]          ; 00533e0d
    FXCH ST3                            ; 00533e11
    FMUL float ptr [ESP + 0x2c]         ; 00533e13
    FLD float ptr [ESP + 0x1c]          ; 00533e17
    FMUL float ptr [0x00595106]         ; 00533e1b | FLOAT_00595106
    FXCH                                ; 00533e21
    FADDP ST3,ST0                       ; 00533e23
    FMUL float ptr [ESP + 0x2c]         ; 00533e25
    FXCH ST2                            ; 00533e29
    FSTP float ptr [EAX + 0x14]         ; 00533e2b
    FLD float ptr [ESP + 0xc]           ; 00533e2e
    FMUL float ptr [ESP + 0x2c]         ; 00533e32
    FLD float ptr [ESP + 0x20]          ; 00533e36
    FMUL float ptr [0x0059510e]         ; 00533e3a | FLOAT_0059510e
    FXCH                                ; 00533e40
    FSUBP ST4,ST0                       ; 00533e42
    FMUL float ptr [ESP + 0x4]          ; 00533e44
    FXCH ST3                            ; 00533e48
    FSTP float ptr [EAX + 0x1c]         ; 00533e4a
    FADDP ST4,ST0                       ; 00533e4d
    FXCH ST2                            ; 00533e4f
    FSTP float ptr [EAX]                ; 00533e51
    FADDP                               ; 00533e53
    FXCH                                ; 00533e55
    FADD float ptr [ESP + 0x10]         ; 00533e57
    FXCH                                ; 00533e5b
    FADD float ptr [ESP]                ; 00533e5d
    FXCH                                ; 00533e60
    FSTP float ptr [EAX + 0x8]          ; 00533e62
    FSTP float ptr [EAX + 0x18]         ; 00533e65
    ADD ESP,0x24                        ; 00533e68
    RET                                 ; 00533e6b

