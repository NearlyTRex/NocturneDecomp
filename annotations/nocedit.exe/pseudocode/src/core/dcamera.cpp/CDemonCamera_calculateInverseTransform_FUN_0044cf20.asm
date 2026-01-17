; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera * this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0 at 0044d287
;
; Referenced Globals:
;   double g_FixedPointToFloat_0061a09a = 0.0000152587890625
;   double g_FloatToFixedPoint = 65536
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0044cf20
        ;   Label: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
    MOV EBP,ESP                         ; 0044cf21
    SUB ESP,0x54                        ; 0044cf23
    AND ESP,0xfffffff8                  ; 0044cf26
    MOV EAX,dword ptr [EBP + 0x8]       ; 0044cf29
    FILD dword ptr [EAX + 0x178]        ; 0044cf2c
    FMUL double ptr [0x0061a09a]        ; 0044cf32 | g_FixedPointToFloat_0061a09a
    FILD dword ptr [EAX + 0x17c]        ; 0044cf38
    FMUL double ptr [0x0061a09a]        ; 0044cf3e | g_FixedPointToFloat_0061a09a
    FILD dword ptr [EAX + 0x180]        ; 0044cf44
    FMUL double ptr [0x0061a09a]        ; 0044cf4a | g_FixedPointToFloat_0061a09a
    FILD dword ptr [EAX + 0x184]        ; 0044cf50
    FMUL double ptr [0x0061a09a]        ; 0044cf56 | g_FixedPointToFloat_0061a09a
    FILD dword ptr [EAX + 0x188]        ; 0044cf5c
    FMUL double ptr [0x0061a09a]        ; 0044cf62 | g_FixedPointToFloat_0061a09a
    FILD dword ptr [EAX + 0x18c]        ; 0044cf68
    FMUL double ptr [0x0061a09a]        ; 0044cf6e | g_FixedPointToFloat_0061a09a
    FILD dword ptr [EAX + 0x190]        ; 0044cf74
    FMUL double ptr [0x0061a09a]        ; 0044cf7a | g_FixedPointToFloat_0061a09a
    FXCH ST6                            ; 0044cf80
    FSTP float ptr [ESP + 0x50]         ; 0044cf82
    FILD dword ptr [EAX + 0x194]        ; 0044cf86
    FMUL double ptr [0x0061a09a]        ; 0044cf8c | g_FixedPointToFloat_0061a09a
    FXCH ST2                            ; 0044cf92
    FSTP float ptr [ESP + 0x44]         ; 0044cf94
    FILD dword ptr [EAX + 0x198]        ; 0044cf98
    FMUL double ptr [0x0061a09a]        ; 0044cf9e | g_FixedPointToFloat_0061a09a
    FXCH                                ; 0044cfa4
    FST float ptr [ESP + 0x1c]          ; 0044cfa6
    FXCH ST2                            ; 0044cfaa
    FSTP float ptr [ESP + 0xc]          ; 0044cfac
    FXCH                                ; 0044cfb0
    FMUL float ptr [ESP + 0xc]          ; 0044cfb2
    FLD float ptr [ESP + 0x44]          ; 0044cfb6
    FXCH ST2                            ; 0044cfba
    FSTP float ptr [ESP + 0x4]          ; 0044cfbc
    FXCH                                ; 0044cfc0
    FMUL float ptr [ESP + 0x4]          ; 0044cfc2
    FSUBRP                              ; 0044cfc6
    FLD float ptr [ESP + 0x50]          ; 0044cfc8
    FXCH                                ; 0044cfcc
    FSTP float ptr [ESP + 0x3c]         ; 0044cfce
    FMUL float ptr [ESP + 0x3c]         ; 0044cfd2
    FXCH                                ; 0044cfd6
    FST float ptr [ESP + 0x48]          ; 0044cfd8
    FMUL float ptr [ESP + 0x4]          ; 0044cfdc
    FXCH ST3                            ; 0044cfe0
    FST float ptr [ESP + 0x4c]          ; 0044cfe2
    FMUL float ptr [ESP + 0x4]          ; 0044cfe6
    FLD float ptr [ESP + 0x1c]          ; 0044cfea
    FXCH ST5                            ; 0044cfee
    FSTP float ptr [ESP + 0x8]          ; 0044cff0
    FXCH ST4                            ; 0044cff4
    FMUL float ptr [ESP + 0x8]          ; 0044cff6
    FLD float ptr [ESP + 0x50]          ; 0044cffa
    FXCH                                ; 0044cffe
    FSUBP ST4,ST0                       ; 0044d000
    FMUL float ptr [ESP + 0x4]          ; 0044d002
    FXCH ST3                            ; 0044d006
    FSTP float ptr [ESP + 0x14]         ; 0044d008
    FLD float ptr [ESP + 0x4c]          ; 0044d00c
    FMUL float ptr [ESP + 0x14]         ; 0044d010
    FLD float ptr [ESP + 0x50]          ; 0044d014
    FXCH                                ; 0044d018
    FSUBP ST2,ST0                       ; 0044d01a
    FMUL float ptr [ESP + 0xc]          ; 0044d01c
    FLD float ptr [ESP + 0x48]          ; 0044d020
    FMUL float ptr [ESP + 0xc]          ; 0044d024
    FXCH ST3                            ; 0044d028
    FSTP float ptr [ESP + 0x18]         ; 0044d02a
    FLD float ptr [ESP + 0x4c]          ; 0044d02e
    FMUL float ptr [ESP + 0x1c]         ; 0044d032
    FXCH ST3                            ; 0044d036
    FSTP float ptr [ESP + 0x20]         ; 0044d038
    FLD float ptr [ESP + 0x44]          ; 0044d03c
    FMUL float ptr [ESP + 0x8]          ; 0044d040
    FLD float ptr [ESP + 0x18]          ; 0044d044
    FMUL float ptr [ESP + 0xc]          ; 0044d048
    FXCH                                ; 0044d04c
    FSUBR float ptr [ESP + 0x20]        ; 0044d04e
    FXCH                                ; 0044d052
    FSUBP ST6,ST0                       ; 0044d054
    FSTP float ptr [ESP + 0x40]         ; 0044d056
    FLD float ptr [ESP + 0x18]          ; 0044d05a
    FMUL float ptr [ESP + 0x40]         ; 0044d05e
    FXCH ST5                            ; 0044d062
    FCHS                                ; 0044d064
    FSTP float ptr [ESP + 0x30]         ; 0044d066
    FLD float ptr [ESP + 0x18]          ; 0044d06a
    FMUL float ptr [ESP + 0x8]          ; 0044d06e
    FLD float ptr [ESP + 0x50]          ; 0044d072
    FXCH                                ; 0044d076
    FSUBP ST5,ST0                       ; 0044d078
    FMUL float ptr [ESP + 0x1c]         ; 0044d07a
    FXCH ST4                            ; 0044d07e
    FSTP float ptr [ESP + 0x34]         ; 0044d080
    FLD float ptr [ESP + 0x4c]          ; 0044d084
    FMUL float ptr [ESP + 0x8]          ; 0044d088
    FLD float ptr [ESP + 0x18]          ; 0044d08c
    FMUL float ptr [ESP + 0x44]         ; 0044d090
    FXCH                                ; 0044d094
    FSUBP ST2,ST0                       ; 0044d096
    FLD float ptr [ESP + 0x18]          ; 0044d098
    FMUL float ptr [ESP + 0x48]         ; 0044d09c
    FXCH                                ; 0044d0a0
    FSUBP ST4,ST0                       ; 0044d0a2
    FSUBP ST4,ST0                       ; 0044d0a4
    FCHS                                ; 0044d0a6
    FXCH ST2                            ; 0044d0a8
    FSTP float ptr [ESP + 0x28]         ; 0044d0aa
    FXCH ST2                            ; 0044d0ae
    FCHS                                ; 0044d0b0
    FXCH                                ; 0044d0b2
    FSTP float ptr [ESP + 0x2c]         ; 0044d0b4
    FSTP float ptr [ESP + 0x38]         ; 0044d0b8
    FLD float ptr [ESP + 0x14]          ; 0044d0bc
    FCHS                                ; 0044d0c0
    FXCH ST2                            ; 0044d0c2
    FADDP                               ; 0044d0c4
    FXCH                                ; 0044d0c6
    FSTP float ptr [ESP + 0x24]         ; 0044d0c8
    FSTP float ptr [ESP]                ; 0044d0cc
    FLD float ptr [ESP]                 ; 0044d0cf
    FDIVR double ptr [0x0061a0a2]       ; 0044d0d2 | g_FloatToFixedPoint
    FLD float ptr [ESP + 0x50]          ; 0044d0d8
    FMUL float ptr [ESP + 0x44]         ; 0044d0dc
    FLD float ptr [ESP + 0x4c]          ; 0044d0e0
    FMUL float ptr [ESP + 0x48]         ; 0044d0e4
    FLD float ptr [ESP + 0x3c]          ; 0044d0e8
    FXCH ST3                            ; 0044d0ec
    FSTP float ptr [ESP]                ; 0044d0ee
    FXCH ST2                            ; 0044d0f1
    FMUL float ptr [ESP]                ; 0044d0f3
    FLD float ptr [ESP + 0x30]          ; 0044d0f6
    FMUL float ptr [ESP]                ; 0044d0fa
    FLD float ptr [ESP + 0x28]          ; 0044d0fd
    FMUL float ptr [ESP]                ; 0044d101
    FLD float ptr [ESP + 0x24]          ; 0044d104
    FMUL float ptr [ESP]                ; 0044d108
    FXCH ST5                            ; 0044d10b
    FSUBP ST4,ST0                       ; 0044d10d
    FXCH ST3                            ; 0044d10f
    FSTP float ptr [ESP + 0x10]         ; 0044d111
    FLD float ptr [ESP + 0x34]          ; 0044d115
    FMUL float ptr [ESP]                ; 0044d119
    FLD float ptr [ESP + 0x38]          ; 0044d11c
    FMUL float ptr [ESP]                ; 0044d120
    FLD float ptr [ESP + 0x40]          ; 0044d123
    FMUL float ptr [ESP]                ; 0044d127
    FXCH ST4                            ; 0044d12a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044d12c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0x19c]       ; 0044d131
    FLD float ptr [ESP + 0x2c]          ; 0044d137
    FMUL float ptr [ESP]                ; 0044d13b
    FXCH ST3                            ; 0044d13e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044d140
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0x1a0]       ; 0044d145
    FLD float ptr [ESP + 0x10]          ; 0044d14b
    FMUL float ptr [ESP]                ; 0044d14f
    FXCH ST5                            ; 0044d152
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044d154
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST6                            ; 0044d159
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044d15b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0044d160
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044d162
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0044d167
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044d169
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST4                            ; 0044d16e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044d170
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 0044d175
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044d177
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST5                            ; 0044d17c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044d17e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST6                            ; 0044d183
    FISTP dword ptr [EAX + 0x1a4]       ; 0044d185
    FXCH                                ; 0044d18b
    FISTP dword ptr [EAX + 0x1a8]       ; 0044d18d
    FISTP dword ptr [EAX + 0x1ac]       ; 0044d193
    FXCH                                ; 0044d199
    FISTP dword ptr [EAX + 0x1b0]       ; 0044d19b
    FISTP dword ptr [EAX + 0x1b4]       ; 0044d1a1
    FISTP dword ptr [EAX + 0x1b8]       ; 0044d1a7
    FISTP dword ptr [EAX + 0x1bc]       ; 0044d1ad
    MOV ESP,EBP                         ; 0044d1b3
    POP EBP                             ; 0044d1b5
    RET                                 ; 0044d1b6

