; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spline_cpp_FUN_00583d60(float *out_basis,float t,float tension)
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
;   core_dracbrid.cpp_FUN_0047d920 at 0047dcb6
;   core_dracbrid.cpp_FUN_0047de00 at 0047e044
;   core_flies.cpp_FUN_004c0080 at 004c0144
;
; Referenced Globals:
;   undefined4 DAT_005f62dc
;   undefined4 DAT_005f62e0
;   undefined4 DAT_005f62e4
;   undefined4 DAT_005f62e8
;   undefined4 DAT_005f62ec
;   undefined4 DAT_005f62f0
;
; *****************************************************************************

section .text

    SUB ESP,0x24                        ; 00583d60
        ;   Label: core_spline.cpp_FUN_00583d60
    MOV EAX,dword ptr [ESP + 0x28]      ; 00583d63
    FLD1                                ; 00583d67
    FLD float ptr [ESP + 0x2c]          ; 00583d69
    FXCH                                ; 00583d6d
    FSUB float ptr [ESP + 0x30]         ; 00583d6f
    FXCH                                ; 00583d73
    FMUL float ptr [ESP + 0x2c]         ; 00583d75
    FXCH                                ; 00583d79
    FMUL float ptr [0x005f62dc]         ; 00583d7b | DAT_005f62dc
    FXCH                                ; 00583d81
    FST float ptr [ESP + 0x4]           ; 00583d83
    FMUL float ptr [ESP + 0x2c]         ; 00583d87
    FXCH                                ; 00583d8b
    FST float ptr [ESP]                 ; 00583d8d
    FMUL float ptr [0x005f62e0]         ; 00583d90 | DAT_005f62e0
    FLD float ptr [0x005f62e4]          ; 00583d96 | DAT_005f62e4
    FLD float ptr [ESP]                 ; 00583d9c
    FMUL ST1                            ; 00583d9f
    FLD float ptr [ESP]                 ; 00583da1
    FXCH ST4                            ; 00583da4
    FSTP float ptr [ESP + 0x8]          ; 00583da6
    FXCH ST3                            ; 00583daa
    FMUL float ptr [ESP + 0x8]          ; 00583dac
    FLD float ptr [0x005f62e0]          ; 00583db0 | DAT_005f62e0
    FSUB float ptr [ESP]                ; 00583db6
    FXCH ST4                            ; 00583db9
    FMUL float ptr [ESP + 0x4]          ; 00583dbb
    FXCH ST4                            ; 00583dbf
    FST float ptr [ESP + 0x14]          ; 00583dc1
    FMUL float ptr [ESP + 0x8]          ; 00583dc5
    FXCH ST3                            ; 00583dc9
    FST float ptr [ESP + 0xc]           ; 00583dcb
    FMUL float ptr [ESP + 0x4]          ; 00583dcf
    FLD float ptr [ESP]                 ; 00583dd3
    FLD ST0                             ; 00583dd6
    FCHS                                ; 00583dd8
    FXCH                                ; 00583dda
    FADDP ST4,ST0                       ; 00583ddc
    FMUL float ptr [ESP + 0x8]          ; 00583dde
    FXCH ST3                            ; 00583de2
    FST float ptr [ESP + 0x18]          ; 00583de4
    FXCH ST3                            ; 00583de8
    FADDP                               ; 00583dea
    FXCH ST2                            ; 00583dec
    FMUL float ptr [ESP + 0x4]          ; 00583dee
    FLD float ptr [ESP]                 ; 00583df2
    FMUL float ptr [ESP + 0x2c]         ; 00583df5
    FLD float ptr [0x005f62e8]          ; 00583df9 | DAT_005f62e8
    FXCH ST2                            ; 00583dff
    FADDP ST5,ST0                       ; 00583e01
    FLD float ptr [ESP]                 ; 00583e03
    FXCH ST2                            ; 00583e06
    FSUB float ptr [ESP + 0xc]          ; 00583e08
    FXCH ST2                            ; 00583e0c
    FMUL float ptr [ESP + 0x4]          ; 00583e0e
    FXCH ST2                            ; 00583e12
    FSTP float ptr [ESP + 0x1c]         ; 00583e14
    FSTP float ptr [ESP + 0x10]         ; 00583e18
    FLD1                                ; 00583e1c
    FADDP ST4,ST0                       ; 00583e1e
    FXCH ST2                            ; 00583e20
    FSUB float ptr [ESP + 0x10]         ; 00583e22
    FXCH ST3                            ; 00583e26
    FSTP float ptr [EAX + 0x4]          ; 00583e28
    FLD float ptr [ESP + 0x1c]          ; 00583e2b
    FMUL float ptr [ESP + 0x4]          ; 00583e2f
    FLD float ptr [ESP]                 ; 00583e33
    FMUL float ptr [0x005f62f0]         ; 00583e36 | DAT_005f62f0
    FLD float ptr [ESP]                 ; 00583e3c
    FADD float ptr [0x005f62ec]         ; 00583e3f | DAT_005f62ec
    FXCH ST4                            ; 00583e45
    FSUBP ST3,ST0                       ; 00583e47
    FXCH ST3                            ; 00583e49
    FST float ptr [ESP + 0x20]          ; 00583e4b
    FMUL float ptr [ESP + 0x8]          ; 00583e4f
    FXCH ST2                            ; 00583e53
    FSTP float ptr [EAX + 0xc]          ; 00583e55
    FLD float ptr [ESP]                 ; 00583e58
    FMUL float ptr [0x005f62e8]         ; 00583e5b | DAT_005f62e8
    FXCH ST3                            ; 00583e61
    FMUL float ptr [ESP + 0x2c]         ; 00583e63
    FLD float ptr [ESP + 0x14]          ; 00583e67
    FXCH                                ; 00583e6b
    FADDP ST6,ST0                       ; 00583e6d
    FMUL float ptr [0x005f62e8]         ; 00583e6f | DAT_005f62e8
    FXCH ST5                            ; 00583e75
    FSUB float ptr [ESP]                ; 00583e77
    FXCH ST5                            ; 00583e7a
    FMUL float ptr [ESP + 0x4]          ; 00583e7c
    FXCH ST5                            ; 00583e80
    FSTP float ptr [EAX + 0x10]         ; 00583e82
    FLD float ptr [ESP + 0x18]          ; 00583e85
    FMUL float ptr [0x005f62e0]         ; 00583e89 | DAT_005f62e0
    FXCH ST3                            ; 00583e8f
    FMUL float ptr [ESP + 0x4]          ; 00583e91
    FXCH ST3                            ; 00583e95
    FMUL float ptr [ESP + 0x2c]         ; 00583e97
    FLD float ptr [ESP + 0x1c]          ; 00583e9b
    FMUL float ptr [0x005f62e0]         ; 00583e9f | DAT_005f62e0
    FXCH                                ; 00583ea5
    FADDP ST6,ST0                       ; 00583ea7
    FMUL float ptr [ESP + 0x2c]         ; 00583ea9
    FXCH ST5                            ; 00583ead
    FSTP float ptr [EAX + 0x14]         ; 00583eaf
    FLD float ptr [ESP + 0xc]           ; 00583eb2
    FMUL float ptr [ESP + 0x2c]         ; 00583eb6
    FLD float ptr [ESP + 0x20]          ; 00583eba
    FMUL float ptr [0x005f62e8]         ; 00583ebe | DAT_005f62e8
    FXCH                                ; 00583ec4
    FSUBP ST4,ST0                       ; 00583ec6
    FMUL float ptr [ESP + 0x4]          ; 00583ec8
    FXCH ST3                            ; 00583ecc
    FSTP float ptr [EAX + 0x1c]         ; 00583ece
    FADDP                               ; 00583ed1
    FXCH ST2                            ; 00583ed3
    FSTP float ptr [EAX]                ; 00583ed5
    FADDP ST2,ST0                       ; 00583ed7
    FADD float ptr [ESP + 0x10]         ; 00583ed9
    FXCH                                ; 00583edd
    FADD float ptr [ESP]                ; 00583edf
    FXCH                                ; 00583ee2
    FSTP float ptr [EAX + 0x8]          ; 00583ee4
    FSTP float ptr [EAX + 0x18]         ; 00583ee7
    ADD ESP,0x24                        ; 00583eea
    RET                                 ; 00583eed

