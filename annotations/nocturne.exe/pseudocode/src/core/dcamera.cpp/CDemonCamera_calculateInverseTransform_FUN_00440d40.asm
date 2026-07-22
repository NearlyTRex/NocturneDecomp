; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40(int param_1)
;
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
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0 at 004410a7
;
; Referenced Globals:
;   double DOUBLE_0057b78b = 0.0000152587890625
;   double DOUBLE_0057b793 = 65536
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00440d40
        ;   Label: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40
    MOV EBP,ESP                         ; 00440d41
    SUB ESP,0x54                        ; 00440d43
    AND ESP,0xfffffff8                  ; 00440d46
    MOV EAX,dword ptr [EBP + 0x8]       ; 00440d49
    FILD dword ptr [EAX + 0x178]        ; 00440d4c
    FMUL double ptr [0x0057b78b]        ; 00440d52 | DOUBLE_0057b78b
    FILD dword ptr [EAX + 0x17c]        ; 00440d58
    FMUL double ptr [0x0057b78b]        ; 00440d5e | DOUBLE_0057b78b
    FILD dword ptr [EAX + 0x180]        ; 00440d64
    FMUL double ptr [0x0057b78b]        ; 00440d6a | DOUBLE_0057b78b
    FILD dword ptr [EAX + 0x184]        ; 00440d70
    FMUL double ptr [0x0057b78b]        ; 00440d76 | DOUBLE_0057b78b
    FILD dword ptr [EAX + 0x188]        ; 00440d7c
    FMUL double ptr [0x0057b78b]        ; 00440d82 | DOUBLE_0057b78b
    FILD dword ptr [EAX + 0x18c]        ; 00440d88
    FMUL double ptr [0x0057b78b]        ; 00440d8e | DOUBLE_0057b78b
    FILD dword ptr [EAX + 0x190]        ; 00440d94
    FMUL double ptr [0x0057b78b]        ; 00440d9a | DOUBLE_0057b78b
    FXCH ST6                            ; 00440da0
    FSTP float ptr [ESP + 0x50]         ; 00440da2
    FILD dword ptr [EAX + 0x194]        ; 00440da6
    FMUL double ptr [0x0057b78b]        ; 00440dac | DOUBLE_0057b78b
    FXCH ST2                            ; 00440db2
    FSTP float ptr [ESP + 0x44]         ; 00440db4
    FILD dword ptr [EAX + 0x198]        ; 00440db8
    FMUL double ptr [0x0057b78b]        ; 00440dbe | DOUBLE_0057b78b
    FXCH                                ; 00440dc4
    FST float ptr [ESP + 0x1c]          ; 00440dc6
    FXCH ST2                            ; 00440dca
    FSTP float ptr [ESP + 0xc]          ; 00440dcc
    FXCH                                ; 00440dd0
    FMUL float ptr [ESP + 0xc]          ; 00440dd2
    FLD float ptr [ESP + 0x44]          ; 00440dd6
    FXCH ST2                            ; 00440dda
    FSTP float ptr [ESP + 0x4]          ; 00440ddc
    FXCH                                ; 00440de0
    FMUL float ptr [ESP + 0x4]          ; 00440de2
    FSUBRP                              ; 00440de6
    FLD float ptr [ESP + 0x50]          ; 00440de8
    FXCH                                ; 00440dec
    FSTP float ptr [ESP + 0x3c]         ; 00440dee
    FMUL float ptr [ESP + 0x3c]         ; 00440df2
    FXCH                                ; 00440df6
    FST float ptr [ESP + 0x48]          ; 00440df8
    FMUL float ptr [ESP + 0x4]          ; 00440dfc
    FXCH ST3                            ; 00440e00
    FST float ptr [ESP + 0x4c]          ; 00440e02
    FMUL float ptr [ESP + 0x4]          ; 00440e06
    FLD float ptr [ESP + 0x1c]          ; 00440e0a
    FXCH ST5                            ; 00440e0e
    FSTP float ptr [ESP + 0x8]          ; 00440e10
    FXCH ST4                            ; 00440e14
    FMUL float ptr [ESP + 0x8]          ; 00440e16
    FLD float ptr [ESP + 0x50]          ; 00440e1a
    FXCH                                ; 00440e1e
    FSUBP ST4,ST0                       ; 00440e20
    FMUL float ptr [ESP + 0x4]          ; 00440e22
    FXCH ST3                            ; 00440e26
    FSTP float ptr [ESP + 0x14]         ; 00440e28
    FLD float ptr [ESP + 0x4c]          ; 00440e2c
    FMUL float ptr [ESP + 0x14]         ; 00440e30
    FLD float ptr [ESP + 0x50]          ; 00440e34
    FXCH                                ; 00440e38
    FSUBP ST2,ST0                       ; 00440e3a
    FMUL float ptr [ESP + 0xc]          ; 00440e3c
    FLD float ptr [ESP + 0x48]          ; 00440e40
    FMUL float ptr [ESP + 0xc]          ; 00440e44
    FXCH ST3                            ; 00440e48
    FSTP float ptr [ESP + 0x18]         ; 00440e4a
    FLD float ptr [ESP + 0x4c]          ; 00440e4e
    FMUL float ptr [ESP + 0x1c]         ; 00440e52
    FXCH ST3                            ; 00440e56
    FSTP float ptr [ESP + 0x20]         ; 00440e58
    FLD float ptr [ESP + 0x44]          ; 00440e5c
    FMUL float ptr [ESP + 0x8]          ; 00440e60
    FLD float ptr [ESP + 0x18]          ; 00440e64
    FMUL float ptr [ESP + 0xc]          ; 00440e68
    FXCH                                ; 00440e6c
    FSUBR float ptr [ESP + 0x20]        ; 00440e6e
    FXCH                                ; 00440e72
    FSUBP ST6,ST0                       ; 00440e74
    FSTP float ptr [ESP + 0x40]         ; 00440e76
    FLD float ptr [ESP + 0x18]          ; 00440e7a
    FMUL float ptr [ESP + 0x40]         ; 00440e7e
    FXCH ST5                            ; 00440e82
    FCHS                                ; 00440e84
    FSTP float ptr [ESP + 0x30]         ; 00440e86
    FLD float ptr [ESP + 0x18]          ; 00440e8a
    FMUL float ptr [ESP + 0x8]          ; 00440e8e
    FLD float ptr [ESP + 0x50]          ; 00440e92
    FXCH                                ; 00440e96
    FSUBP ST5,ST0                       ; 00440e98
    FMUL float ptr [ESP + 0x1c]         ; 00440e9a
    FXCH ST4                            ; 00440e9e
    FSTP float ptr [ESP + 0x34]         ; 00440ea0
    FLD float ptr [ESP + 0x4c]          ; 00440ea4
    FMUL float ptr [ESP + 0x8]          ; 00440ea8
    FLD float ptr [ESP + 0x18]          ; 00440eac
    FMUL float ptr [ESP + 0x44]         ; 00440eb0
    FXCH                                ; 00440eb4
    FSUBP ST2,ST0                       ; 00440eb6
    FLD float ptr [ESP + 0x18]          ; 00440eb8
    FMUL float ptr [ESP + 0x48]         ; 00440ebc
    FXCH                                ; 00440ec0
    FSUBP ST4,ST0                       ; 00440ec2
    FSUBP ST4,ST0                       ; 00440ec4
    FCHS                                ; 00440ec6
    FXCH ST2                            ; 00440ec8
    FSTP float ptr [ESP + 0x28]         ; 00440eca
    FXCH ST2                            ; 00440ece
    FCHS                                ; 00440ed0
    FXCH                                ; 00440ed2
    FSTP float ptr [ESP + 0x2c]         ; 00440ed4
    FSTP float ptr [ESP + 0x38]         ; 00440ed8
    FLD float ptr [ESP + 0x14]          ; 00440edc
    FCHS                                ; 00440ee0
    FXCH ST2                            ; 00440ee2
    FADDP                               ; 00440ee4
    FXCH                                ; 00440ee6
    FSTP float ptr [ESP + 0x24]         ; 00440ee8
    FSTP float ptr [ESP]                ; 00440eec
    FLD float ptr [ESP]                 ; 00440eef
    FDIVR double ptr [0x0057b793]       ; 00440ef2 | DOUBLE_0057b793
    FLD float ptr [ESP + 0x50]          ; 00440ef8
    FMUL float ptr [ESP + 0x44]         ; 00440efc
    FLD float ptr [ESP + 0x4c]          ; 00440f00
    FMUL float ptr [ESP + 0x48]         ; 00440f04
    FLD float ptr [ESP + 0x3c]          ; 00440f08
    FXCH ST3                            ; 00440f0c
    FSTP float ptr [ESP]                ; 00440f0e
    FXCH ST2                            ; 00440f11
    FMUL float ptr [ESP]                ; 00440f13
    FLD float ptr [ESP + 0x30]          ; 00440f16
    FMUL float ptr [ESP]                ; 00440f1a
    FLD float ptr [ESP + 0x28]          ; 00440f1d
    FMUL float ptr [ESP]                ; 00440f21
    FLD float ptr [ESP + 0x24]          ; 00440f24
    FMUL float ptr [ESP]                ; 00440f28
    FXCH ST5                            ; 00440f2b
    FSUBP ST4,ST0                       ; 00440f2d
    FXCH ST3                            ; 00440f2f
    FSTP float ptr [ESP + 0x10]         ; 00440f31
    FLD float ptr [ESP + 0x34]          ; 00440f35
    FMUL float ptr [ESP]                ; 00440f39
    FLD float ptr [ESP + 0x38]          ; 00440f3c
    FMUL float ptr [ESP]                ; 00440f40
    FLD float ptr [ESP + 0x40]          ; 00440f43
    FMUL float ptr [ESP]                ; 00440f47
    FXCH ST4                            ; 00440f4a
    CALL crt_math.c_round_FUN_00563a30  ; 00440f4c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EAX + 0x19c]       ; 00440f51
    FLD float ptr [ESP + 0x2c]          ; 00440f57
    FMUL float ptr [ESP]                ; 00440f5b
    FXCH ST3                            ; 00440f5e
    CALL crt_math.c_round_FUN_00563a30  ; 00440f60
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EAX + 0x1a0]       ; 00440f65
    FLD float ptr [ESP + 0x10]          ; 00440f6b
    FMUL float ptr [ESP]                ; 00440f6f
    FXCH ST5                            ; 00440f72
    CALL crt_math.c_round_FUN_00563a30  ; 00440f74
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST6                            ; 00440f79
    CALL crt_math.c_round_FUN_00563a30  ; 00440f7b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 00440f80
    CALL crt_math.c_round_FUN_00563a30  ; 00440f82
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 00440f87
    CALL crt_math.c_round_FUN_00563a30  ; 00440f89
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST4                            ; 00440f8e
    CALL crt_math.c_round_FUN_00563a30  ; 00440f90
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 00440f95
    CALL crt_math.c_round_FUN_00563a30  ; 00440f97
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST5                            ; 00440f9c
    CALL crt_math.c_round_FUN_00563a30  ; 00440f9e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST6                            ; 00440fa3
    FISTP dword ptr [EAX + 0x1a4]       ; 00440fa5
    FXCH                                ; 00440fab
    FISTP dword ptr [EAX + 0x1a8]       ; 00440fad
    FISTP dword ptr [EAX + 0x1ac]       ; 00440fb3
    FXCH                                ; 00440fb9
    FISTP dword ptr [EAX + 0x1b0]       ; 00440fbb
    FISTP dword ptr [EAX + 0x1b4]       ; 00440fc1
    FISTP dword ptr [EAX + 0x1b8]       ; 00440fc7
    FISTP dword ptr [EAX + 0x1bc]       ; 00440fcd
    MOV ESP,EBP                         ; 00440fd3
    POP EBP                             ; 00440fd5
    RET                                 ; 00440fd6

