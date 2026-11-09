; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dtrace_cpp_FUN_00472c60(CDemonRaytrace *param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5)
;
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
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
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined8       Stack[-0x7c]:8  local_7c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x68]:4  local_68
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
;
; XREF[7]:
;   core_box.cpp_CBox_processPhysics_FUN_005b22f0 at 005b238f
;   core_dtrace.cpp_FUN_00472b50 at 00472b6d
;   core_gore.cpp_CFootstep_init_FUN_004c8e80 at 004c8f57
;   core_particle.cpp_FUN_00510ef0 at 00511067
;   core_setcolid.cpp_FUN_00535cf0 at 00535d67
;   core_setcolid.cpp_FUN_00535ee0 at 00535f30
;   core_tvbat.cpp_FUN_00580610 at 00580e6b
;
; Referenced Globals:
;   undefined4 DAT_005d1b53
;
; Called Functions:
;   core_dcube.cpp_FUN_00446b60
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472c60
        ;   Label: core_dtrace.cpp_FUN_00472c60
    PUSH ESI                            ; 00472c61
    PUSH EDI                            ; 00472c62
    PUSH EBP                            ; 00472c63
    MOV EBP,ESP                         ; 00472c64
    SUB ESP,0xac                        ; 00472c66
    AND ESP,0xfffffff8                  ; 00472c6c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00472c6f
    MOV EBX,dword ptr [EBP + 0x20]      ; 00472c72
    MOV EAX,dword ptr [EBP + 0x18]      ; 00472c75
    FLD float ptr [EAX]                 ; 00472c78
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472c7a
    FSUB float ptr [EAX + 0x10]         ; 00472c7d
    FDIV float ptr [EAX + 0x28]         ; 00472c80
    MOV EAX,dword ptr [EBP + 0x18]      ; 00472c83
    FLD float ptr [EAX + 0x4]           ; 00472c86
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472c89
    FSUB float ptr [EAX + 0x14]         ; 00472c8c
    FDIV float ptr [EAX + 0x2c]         ; 00472c8f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00472c92
    FLD float ptr [EAX + 0x8]           ; 00472c95
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472c98
    FSUB float ptr [EAX + 0x18]         ; 00472c9b
    FDIV float ptr [EAX + 0x30]         ; 00472c9e
    FXCH ST2                            ; 00472ca1
    FST float ptr [ESP + 0xc]           ; 00472ca3
    FXCH                                ; 00472ca7
    FSTP float ptr [ESP + 0x10]         ; 00472ca9
    FXCH                                ; 00472cad
    FSTP float ptr [ESP + 0x8]          ; 00472caf
    SUB ESP,0x8                         ; 00472cb3
    FSTP double ptr [ESP]               ; 00472cb6
    CALL crt_math.c_floor_FUN_005b84d0  ; 00472cb9
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00472cbe
    MOV dword ptr [ESP + 0x50],EDX      ; 00472cc2
    FLD double ptr [ESP + 0x4c]         ; 00472cc6
    ADD ESP,0x8                         ; 00472cca
    CALL crt_math.c_round_FUN_005b7ff0  ; 00472ccd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FLD float ptr [ESP + 0x10]          ; 00472cd2
    FXCH                                ; 00472cd6
    FISTP dword ptr [ESP + 0x88]        ; 00472cd8
    SUB ESP,0x8                         ; 00472cdf
    FSTP double ptr [ESP]               ; 00472ce2
    CALL crt_math.c_floor_FUN_005b84d0  ; 00472ce5
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00472cea
    MOV dword ptr [ESP + 0x50],EDX      ; 00472cee
    FLD double ptr [ESP + 0x4c]         ; 00472cf2
    ADD ESP,0x8                         ; 00472cf6
    CALL crt_math.c_round_FUN_005b7ff0  ; 00472cf9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FLD float ptr [ESP + 0x8]           ; 00472cfe
    FXCH                                ; 00472d02
    FISTP dword ptr [ESP + 0x84]        ; 00472d04
    SUB ESP,0x8                         ; 00472d0b
    FSTP double ptr [ESP]               ; 00472d0e
    CALL crt_math.c_floor_FUN_005b84d0  ; 00472d11
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00472d16
    MOV dword ptr [ESP + 0x50],EDX      ; 00472d1a
    FLD double ptr [ESP + 0x4c]         ; 00472d1e
    ADD ESP,0x8                         ; 00472d22
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472d25
    FLD float ptr [ESI]                 ; 00472d28
    FSUB float ptr [EAX + 0x10]         ; 00472d2a
    FDIV float ptr [EAX + 0x28]         ; 00472d2d
    FLD float ptr [ESI + 0x4]           ; 00472d30
    FSUB float ptr [EAX + 0x14]         ; 00472d33
    FDIV float ptr [EAX + 0x2c]         ; 00472d36
    FLD float ptr [ESI + 0x8]           ; 00472d39
    FSUB float ptr [EAX + 0x18]         ; 00472d3c
    FDIV float ptr [EAX + 0x30]         ; 00472d3f
    FXCH ST3                            ; 00472d42
    CALL crt_math.c_round_FUN_005b7ff0  ; 00472d44
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8c]        ; 00472d49
    FXCH                                ; 00472d50
    FSTP float ptr [ESP + 0x4]          ; 00472d52
    FSTP float ptr [ESP + 0x1c]         ; 00472d56
    FSTP float ptr [ESP + 0x14]         ; 00472d5a
    FLD float ptr [ESP + 0x4]           ; 00472d5e
    SUB ESP,0x8                         ; 00472d62
    FSTP double ptr [ESP]               ; 00472d65
    CALL crt_math.c_floor_FUN_005b84d0  ; 00472d68
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00472d6d
    MOV dword ptr [ESP + 0x50],EDX      ; 00472d71
    FLD double ptr [ESP + 0x4c]         ; 00472d75
    ADD ESP,0x8                         ; 00472d79
    CALL crt_math.c_round_FUN_005b7ff0  ; 00472d7c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FLD float ptr [ESP + 0x1c]          ; 00472d81
    FXCH                                ; 00472d85
    FISTP dword ptr [ESP + 0x64]        ; 00472d87
    SUB ESP,0x8                         ; 00472d8b
    FSTP double ptr [ESP]               ; 00472d8e
    CALL crt_math.c_floor_FUN_005b84d0  ; 00472d91
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00472d96
    MOV dword ptr [ESP + 0x50],EDX      ; 00472d9a
    FLD double ptr [ESP + 0x4c]         ; 00472d9e
    ADD ESP,0x8                         ; 00472da2
    CALL crt_math.c_round_FUN_005b7ff0  ; 00472da5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FLD float ptr [ESP + 0x14]          ; 00472daa
    FXCH                                ; 00472dae
    FISTP dword ptr [ESP + 0x9c]        ; 00472db0
    SUB ESP,0x8                         ; 00472db7
    FSTP double ptr [ESP]               ; 00472dba
    CALL crt_math.c_floor_FUN_005b84d0  ; 00472dbd
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00472dc2
    MOV dword ptr [ESP + 0x50],EDX      ; 00472dc6
    FLD double ptr [ESP + 0x4c]         ; 00472dca
    ADD ESP,0x8                         ; 00472dce
    CALL crt_math.c_round_FUN_005b7ff0  ; 00472dd1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EDX,dword ptr [ESP + 0x88]      ; 00472dd6
    FISTP dword ptr [ESP + 0x60]        ; 00472ddd
    TEST EDX,EDX                        ; 00472de1
    JL 0x00473140                       ; 00472de3
        ;   XREF to: 00473140 (CONDITIONAL_JUMP)  ; LAB_00473140
    CMP dword ptr [ESP + 0x84],0x0      ; 00472de9
        ;   Label: LAB_00472de9
    JL 0x0047315e                       ; 00472df1
        ;   XREF to: 0047315e (CONDITIONAL_JUMP)  ; LAB_0047315e
    CMP dword ptr [ESP + 0x8c],0x0      ; 00472df7
        ;   Label: LAB_00472df7
    JL 0x0047317f                       ; 00472dff
        ;   XREF to: 0047317f (CONDITIONAL_JUMP)  ; LAB_0047317f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00472e05
        ;   Label: LAB_00472e05
    MOV EAX,dword ptr [ESP + 0x88]      ; 00472e08
    MOV EDI,dword ptr [EDX + 0x40]      ; 00472e0f
    CMP EAX,EDI                         ; 00472e12
    JL 0x00472e20                       ; 00472e14
        ;   XREF to: 00472e20 (CONDITIONAL_JUMP)  ; LAB_00472e20
    CMP EDI,dword ptr [ESP + 0x64]      ; 00472e16
    JLE 0x0047314b                      ; 00472e1a
        ;   XREF to: 0047314b (CONDITIONAL_JUMP)  ; LAB_0047314b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00472e20
        ;   Label: LAB_00472e20
    MOV EAX,dword ptr [ESP + 0x84]      ; 00472e23
    MOV EDI,dword ptr [EDX + 0x44]      ; 00472e2a
    CMP EAX,EDI                         ; 00472e2d
    JL 0x00472e3e                       ; 00472e2f
        ;   XREF to: 00472e3e (CONDITIONAL_JUMP)  ; LAB_00472e3e
    CMP EDI,dword ptr [ESP + 0x9c]      ; 00472e31
    JLE 0x0047314b                      ; 00472e38
        ;   XREF to: 0047314b (CONDITIONAL_JUMP)  ; LAB_0047314b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00472e3e
        ;   Label: LAB_00472e3e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00472e41
    MOV EDI,dword ptr [EDX + 0x48]      ; 00472e48
    CMP EAX,EDI                         ; 00472e4b
    JL 0x00472e59                       ; 00472e4d
        ;   XREF to: 00472e59 (CONDITIONAL_JUMP)  ; LAB_00472e59
    CMP EDI,dword ptr [ESP + 0x60]      ; 00472e4f
    JLE 0x0047314b                      ; 00472e53
        ;   XREF to: 0047314b (CONDITIONAL_JUMP)  ; LAB_0047314b
    FLD float ptr [ESI + 0x4]           ; 00472e59
        ;   Label: LAB_00472e59
    FLD float ptr [ESI + 0x8]           ; 00472e5c
    FLD float ptr [ESI]                 ; 00472e5f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00472e61
    LEA EDI,[ESP + 0x38]                ; 00472e64
    LEA ESI,[ESP + 0x2c]                ; 00472e68
    FSUB float ptr [EAX]                ; 00472e6c
    FXCH ST2                            ; 00472e6e
    FSUB float ptr [EAX + 0x4]          ; 00472e70
    FXCH                                ; 00472e73
    FSUB float ptr [EAX + 0x8]          ; 00472e75
    FXCH                                ; 00472e78
    FSTP float ptr [ESP + 0x30]         ; 00472e7a
    FSTP float ptr [ESP + 0x34]         ; 00472e7e
    FSTP float ptr [ESP + 0x2c]         ; 00472e82
    MOVSD ES:EDI,ESI                    ; 00472e86
    MOVSD ES:EDI,ESI                    ; 00472e87
    MOVSD ES:EDI,ESI                    ; 00472e88
    MOV EAX,dword ptr [ESP + 0x88]      ; 00472e89
    MOV EDI,dword ptr [ESP + 0x64]      ; 00472e90
    MOV ESI,0x1                         ; 00472e94
    CMP EAX,EDI                         ; 00472e99
    JZ 0x0047319d                       ; 00472e9b
        ;   XREF to: 0047319d (CONDITIONAL_JUMP)  ; LAB_0047319d
    FLD float ptr [ESP + 0x3c]          ; 00472ea1
        ;   Label: LAB_00472ea1
    FMUL ST0                            ; 00472ea5
    FLD float ptr [ESP + 0x38]          ; 00472ea7
    FMUL ST0                            ; 00472eab
    FADDP                               ; 00472ead
    FLD float ptr [ESP + 0x40]          ; 00472eaf
    FMUL ST0                            ; 00472eb3
    FADDP                               ; 00472eb5
    FSQRT                               ; 00472eb7
    FST float ptr [ESP]                 ; 00472eb9
    FLDZ                                ; 00472ebc
    FCOMPP                              ; 00472ebe
    FNSTSW AX                           ; 00472ec0
    SAHF                                ; 00472ec2
    JNC 0x0047314b                      ; 00472ec3
        ;   XREF to: 0047314b (CONDITIONAL_JUMP)  ; LAB_0047314b
    FLD float ptr [ESP + 0x4]           ; 00472ec9
    FSUB float ptr [ESP + 0xc]          ; 00472ecd
    FABS                                ; 00472ed1
    FLD float ptr [ESP + 0x1c]          ; 00472ed3
    FSUB float ptr [ESP + 0x10]         ; 00472ed7
    FABS                                ; 00472edb
    FLD float ptr [ESP + 0x14]          ; 00472edd
    FSUB float ptr [ESP + 0x8]          ; 00472ee1
    FABS                                ; 00472ee5
    FLD float ptr [0x005d1b53]          ; 00472ee7 | DAT_005d1b53
    FDIV float ptr [ESP]                ; 00472eed
    FXCH ST3                            ; 00472ef0
    FMUL ST3                            ; 00472ef2
    FXCH ST2                            ; 00472ef4
    FMUL ST3                            ; 00472ef6
    FXCH                                ; 00472ef8
    FMULP ST3                           ; 00472efa
    FXCH                                ; 00472efc
    CALL crt_math.c_round_FUN_005b7ff0  ; 00472efe
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x7c]        ; 00472f03
    FLD float ptr [ESP + 0x38]          ; 00472f07
    FXCH                                ; 00472f0b
    CALL crt_math.c_round_FUN_005b7ff0  ; 00472f0d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x80]        ; 00472f12
    FLDZ                                ; 00472f19
    FXCH ST2                            ; 00472f1b
    CALL crt_math.c_round_FUN_005b7ff0  ; 00472f1d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x78]        ; 00472f22
    FXCH                                ; 00472f26
    FCOMPP                              ; 00472f28
    FNSTSW AX                           ; 00472f2a
    SAHF                                ; 00472f2c
    JA 0x004731c7                       ; 00472f2d
        ;   XREF to: 004731c7 (CONDITIONAL_JUMP)  ; LAB_004731c7
    MOV EAX,dword ptr [ESP + 0x64]      ; 00472f33
    MOV EDI,dword ptr [ESP + 0x88]      ; 00472f37
    SUB EAX,EDI                         ; 00472f3e
    MOV ECX,0x1                         ; 00472f40
    ADD ESI,EAX                         ; 00472f45
    LEA EAX,[EDI + ECX*0x1]             ; 00472f47
    MOV dword ptr [ESP + 0xa8],EAX      ; 00472f4a
    FILD dword ptr [ESP + 0xa8]         ; 00472f51
    FSUB float ptr [ESP + 0xc]          ; 00472f58
    MOV dword ptr [ESP + 0x6c],ECX      ; 00472f5c
    FSTP float ptr [ESP + 0x58]         ; 00472f60
        ;   Label: LAB_00472f60
    FLD float ptr [ESP + 0x3c]          ; 00472f64
    FLDZ                                ; 00472f68
    FCOMPP                              ; 00472f6a
    FNSTSW AX                           ; 00472f6c
    SAHF                                ; 00472f6e
    JA 0x004731fb                       ; 00472f6f
        ;   XREF to: 004731fb (CONDITIONAL_JUMP)  ; LAB_004731fb
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00472f75
    MOV EDI,dword ptr [ESP + 0x84]      ; 00472f7c
    SUB EAX,EDI                         ; 00472f83
    MOV ECX,0x1                         ; 00472f85
    ADD ESI,EAX                         ; 00472f8a
    LEA EAX,[EDI + ECX*0x1]             ; 00472f8c
    MOV dword ptr [ESP + 0xa8],EAX      ; 00472f8f
    FILD dword ptr [ESP + 0xa8]         ; 00472f96
    FSUB float ptr [ESP + 0x10]         ; 00472f9d
    MOV dword ptr [ESP + 0x70],ECX      ; 00472fa1
    FSTP float ptr [ESP + 0x5c]         ; 00472fa5
        ;   Label: LAB_00472fa5
    FLD float ptr [ESP + 0x40]          ; 00472fa9
    FLDZ                                ; 00472fad
    FCOMPP                              ; 00472faf
    FNSTSW AX                           ; 00472fb1
    SAHF                                ; 00472fb3
    JA 0x00473234                       ; 00472fb4
        ;   XREF to: 00473234 (CONDITIONAL_JUMP)  ; LAB_00473234
    MOV EAX,dword ptr [ESP + 0x60]      ; 00472fba
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00472fbe
    SUB EAX,EDI                         ; 00472fc5
    MOV ECX,0x1                         ; 00472fc7
    ADD ESI,EAX                         ; 00472fcc
    LEA EAX,[EDI + ECX*0x1]             ; 00472fce
    MOV dword ptr [ESP + 0xa8],EAX      ; 00472fd1
    FILD dword ptr [ESP + 0xa8]         ; 00472fd8
    FSUB float ptr [ESP + 0x8]          ; 00472fdf
    MOV dword ptr [ESP + 0xa0],ECX      ; 00472fe3
    FSTP float ptr [ESP + 0x74]         ; 00472fea
        ;   Label: LAB_00472fea
    MOV EAX,dword ptr [ESP + 0x80]      ; 00472fee
    MOV dword ptr [ESP + 0xa8],EAX      ; 00472ff5
    FILD dword ptr [ESP + 0xa8]         ; 00472ffc
    FLD ST0                             ; 00473003
    FMUL float ptr [ESP + 0x58]         ; 00473005
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00473009
    FXCH                                ; 0047300d
    FLD float ptr [ESP + 0x74]          ; 0047300f
    FXCH                                ; 00473013
    FMUL ST1                            ; 00473015
    MOV dword ptr [ESP + 0xa8],EAX      ; 00473017
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047301e
    FILD dword ptr [ESP + 0xa8]         ; 00473022
    MOV dword ptr [ESP + 0xa8],EAX      ; 00473029
    FLD ST0                             ; 00473030
    FMUL float ptr [ESP + 0x5c]         ; 00473032
    FILD dword ptr [ESP + 0xa8]         ; 00473036
    FLD ST0                             ; 0047303d
    FMUL float ptr [ESP + 0x58]         ; 0047303f
    FXCH                                ; 00473043
    FMUL float ptr [ESP + 0x5c]         ; 00473045
    FXCH ST2                            ; 00473049
    FSUBP ST6,ST0                       ; 0047304b
    FXCH ST2                            ; 0047304d
    FMULP ST4                           ; 0047304f
    FXCH ST4                            ; 00473051
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473053
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST4                            ; 00473058
    FSUBP ST2,ST0                       ; 0047305a
    FXCH ST3                            ; 0047305c
    FISTP dword ptr [ESP + 0x90]        ; 0047305e
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473065
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0047306a
    FSUBP ST2,ST0                       ; 0047306c
    FISTP dword ptr [ESP + 0x98]        ; 0047306e
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473075
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 0047307a
    MOV dword ptr [ESP + 0x18],0x3f800347 ; 00473081
        ;   Label: LAB_00473081
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00473089
        ;   Label: LAB_00473089
    PUSH ECX                            ; 00473090
    MOV EDI,dword ptr [ESP + 0x88]      ; 00473091
    PUSH EDI                            ; 00473098
    MOV EAX,dword ptr [ESP + 0x90]      ; 00473099
    PUSH EAX                            ; 004730a0
    MOV EDX,dword ptr [EBP + 0x14]      ; 004730a1
    PUSH EDX                            ; 004730a4
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 004730a5
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 004730aa
    TEST EAX,EAX                        ; 004730ad
    JNZ 0x0047326d                      ; 004730af
        ;   XREF to: 0047326d (CONDITIONAL_JUMP)  ; LAB_0047326d
    DEC ESI                             ; 004730b5
        ;   Label: LAB_004730b5
    TEST ESI,ESI                        ; 004730b6
    JLE 0x00473363                      ; 004730b8
        ;   XREF to: 00473363 (CONDITIONAL_JUMP)  ; LAB_00473363
    MOV EDX,dword ptr [ESP + 0x98]      ; 004730be
    MOV EAX,dword ptr [ESP + 0x80]      ; 004730c5
    MOV ECX,dword ptr [ESP + 0xa0]      ; 004730cc
    ADD EDX,EAX                         ; 004730d3
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004730d5
    MOV EDI,dword ptr [ESP + 0x7c]      ; 004730dc
    ADD EAX,ECX                         ; 004730e0
    MOV ECX,dword ptr [ESP + 0x94]      ; 004730e2
    SUB ECX,EDI                         ; 004730e9
    CMP dword ptr [ESP + 0x90],0x0      ; 004730eb
    JL 0x00473303                       ; 004730f3
        ;   XREF to: 00473303 (CONDITIONAL_JUMP)  ; LAB_00473303
    MOV EDI,dword ptr [ESP + 0x98]      ; 004730f9
    TEST EDI,EDI                        ; 00473100
    JL 0x0047330e                       ; 00473102
        ;   XREF to: 0047330e (CONDITIONAL_JUMP)  ; LAB_0047330e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00473108
    MOV EDX,dword ptr [ESP + 0x84]      ; 0047310c
    MOV ECX,dword ptr [ESP + 0x90]      ; 00473113
    ADD EDX,EAX                         ; 0047311a
    SUB ECX,dword ptr [ESP + 0x7c]      ; 0047311c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00473120
    MOV dword ptr [ESP + 0x84],EDX      ; 00473124
    SUB EDI,EAX                         ; 0047312b
    MOV dword ptr [ESP + 0x90],ECX      ; 0047312d
    MOV dword ptr [ESP + 0x98],EDI      ; 00473134
    JMP 0x00473089                      ; 0047313b
        ;   XREF to: 00473089 (UNCONDITIONAL_JUMP)  ; LAB_00473089
    CMP dword ptr [ESP + 0x64],0x0      ; 00473140
        ;   Label: LAB_00473140
    JGE 0x00472de9                      ; 00473145
        ;   XREF to: 00472de9 (CONDITIONAL_JUMP)  ; LAB_00472de9
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 0047314b
        ;   Label: LAB_0047314b
    MOV EAX,dword ptr [ESP + 0x68]      ; 00473153
    MOV ESP,EBP                         ; 00473157
    POP EBP                             ; 00473159
    POP EDI                             ; 0047315a
    POP ESI                             ; 0047315b
    POP EBX                             ; 0047315c
    RET                                 ; 0047315d
    CMP dword ptr [ESP + 0x9c],0x0      ; 0047315e
        ;   Label: LAB_0047315e
    JGE 0x00472df7                      ; 00473166
        ;   XREF to: 00472df7 (CONDITIONAL_JUMP)  ; LAB_00472df7
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 0047316c
    MOV EAX,dword ptr [ESP + 0x68]      ; 00473174
    MOV ESP,EBP                         ; 00473178
    POP EBP                             ; 0047317a
    POP EDI                             ; 0047317b
    POP ESI                             ; 0047317c
    POP EBX                             ; 0047317d
    RET                                 ; 0047317e
    CMP dword ptr [ESP + 0x60],0x0      ; 0047317f
        ;   Label: LAB_0047317f
    JGE 0x00472e05                      ; 00473184
        ;   XREF to: 00472e05 (CONDITIONAL_JUMP)  ; LAB_00472e05
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 0047318a
    MOV EAX,dword ptr [ESP + 0x68]      ; 00473192
    MOV ESP,EBP                         ; 00473196
    POP EBP                             ; 00473198
    POP EDI                             ; 00473199
    POP ESI                             ; 0047319a
    POP EBX                             ; 0047319b
    RET                                 ; 0047319c
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047319d
        ;   Label: LAB_0047319d
    CMP EAX,dword ptr [ESP + 0x9c]      ; 004731a4
    JNZ 0x00472ea1                      ; 004731ab
        ;   XREF to: 00472ea1 (CONDITIONAL_JUMP)  ; LAB_00472ea1
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004731b1
    CMP EAX,dword ptr [ESP + 0x60]      ; 004731b8
    JNZ 0x00472ea1                      ; 004731bc
        ;   XREF to: 00472ea1 (CONDITIONAL_JUMP)  ; LAB_00472ea1
    JMP 0x00473081                      ; 004731c2
        ;   XREF to: 00473081 (UNCONDITIONAL_JUMP)  ; LAB_00473081
    MOV EAX,dword ptr [ESP + 0x88]      ; 004731c7
        ;   Label: LAB_004731c7
    SUB EAX,dword ptr [ESP + 0x64]      ; 004731ce
    ADD ESI,EAX                         ; 004731d2
    MOV EAX,dword ptr [ESP + 0x88]      ; 004731d4
    MOV dword ptr [ESP + 0xa8],EAX      ; 004731db
    MOV EDI,0xffffffff                  ; 004731e2
    FILD dword ptr [ESP + 0xa8]         ; 004731e7
    FSUBR float ptr [ESP + 0xc]         ; 004731ee
    MOV dword ptr [ESP + 0x6c],EDI      ; 004731f2
    JMP 0x00472f60                      ; 004731f6
        ;   XREF to: 00472f60 (UNCONDITIONAL_JUMP)  ; LAB_00472f60
    MOV EAX,0xffffffff                  ; 004731fb
        ;   Label: LAB_004731fb
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00473200
    MOV dword ptr [ESP + 0x70],EAX      ; 00473207
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047320b
    SUB EAX,EDX                         ; 00473212
    ADD ESI,EAX                         ; 00473214
    MOV EAX,dword ptr [ESP + 0x84]      ; 00473216
    MOV dword ptr [ESP + 0xa8],EAX      ; 0047321d
    FILD dword ptr [ESP + 0xa8]         ; 00473224
    FSUBR float ptr [ESP + 0x10]        ; 0047322b
    JMP 0x00472fa5                      ; 0047322f
        ;   XREF to: 00472fa5 (UNCONDITIONAL_JUMP)  ; LAB_00472fa5
    MOV EAX,0xffffffff                  ; 00473234
        ;   Label: LAB_00473234
    MOV EDX,dword ptr [ESP + 0x60]      ; 00473239
    MOV dword ptr [ESP + 0xa0],EAX      ; 0047323d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00473244
    SUB EAX,EDX                         ; 0047324b
    ADD ESI,EAX                         ; 0047324d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0047324f
    MOV dword ptr [ESP + 0xa8],EAX      ; 00473256
    FILD dword ptr [ESP + 0xa8]         ; 0047325d
    FSUBR float ptr [ESP + 0x8]         ; 00473264
    JMP 0x00472fea                      ; 00473268
        ;   XREF to: 00472fea (UNCONDITIONAL_JUMP)  ; LAB_00472fea
    LEA EDX,[ESP + 0x4c]                ; 0047326d
        ;   Label: LAB_0047326d
    PUSH EDX                            ; 00473271
    LEA EDX,[ESP + 0x24]                ; 00473272
    PUSH EDX                            ; 00473276
    LEA EDX,[ESP + 0x40]                ; 00473277
    PUSH EDX                            ; 0047327b
    MOV ECX,dword ptr [EBP + 0x18]      ; 0047327c
    PUSH ECX                            ; 0047327f
    PUSH EAX                            ; 00473280
    CALL core_dcube.cpp_FUN_00446b60    ; 00473281
        ;   XREF to: 00446b60 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_00446b60()
    MOV dword ptr [ESP + 0xbc],EAX      ; 00473286
    FLD float ptr [ESP + 0xbc]          ; 0047328d
    ADD ESP,0x14                        ; 00473294
    FST float ptr [ESP + 0xa4]          ; 00473297
    FCOMP float ptr [ESP + 0x18]        ; 0047329e
    FNSTSW AX                           ; 004732a2
    SAHF                                ; 004732a4
    JNC 0x004732df                      ; 004732a5
        ;   XREF to: 004732df (CONDITIONAL_JUMP)  ; LAB_004732df
    TEST EBX,EBX                        ; 004732a7
    JZ 0x004732c7                       ; 004732a9
        ;   XREF to: 004732c7 (CONDITIONAL_JUMP)  ; LAB_004732c7
    LEA EAX,[ESP + 0x20]                ; 004732ab
    CMP EBX,EAX                         ; 004732af
    JZ 0x004732c7                       ; 004732b1
        ;   XREF to: 004732c7 (CONDITIONAL_JUMP)  ; LAB_004732c7
    MOV EAX,dword ptr [ESP + 0x20]      ; 004732b3
    MOV dword ptr [EBX],EAX             ; 004732b7
    MOV EAX,dword ptr [ESP + 0x24]      ; 004732b9
    MOV dword ptr [EBX + 0x4],EAX       ; 004732bd
    MOV EAX,dword ptr [ESP + 0x28]      ; 004732c0
    MOV dword ptr [EBX + 0x8],EAX       ; 004732c4
    MOV EDI,dword ptr [EBP + 0x24]      ; 004732c7
        ;   Label: LAB_004732c7
    TEST EDI,EDI                        ; 004732ca
    JZ 0x004732d4                       ; 004732cc
        ;   XREF to: 004732d4 (CONDITIONAL_JUMP)  ; LAB_004732d4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004732ce
    MOV dword ptr [EDI],EAX             ; 004732d2
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004732d4
        ;   Label: LAB_004732d4
    MOV dword ptr [ESP + 0x18],EAX      ; 004732db
    FLD float ptr [ESP + 0x18]          ; 004732df
        ;   Label: LAB_004732df
    FLD1                                ; 004732e3
    FCOMPP                              ; 004732e5
    FNSTSW AX                           ; 004732e7
    SAHF                                ; 004732e9
    JC 0x004730b5                       ; 004732ea
        ;   XREF to: 004730b5 (CONDITIONAL_JUMP)  ; LAB_004730b5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004732f0
    MOV dword ptr [ESP + 0x68],EAX      ; 004732f4
    MOV EAX,dword ptr [ESP + 0x68]      ; 004732f8
    MOV ESP,EBP                         ; 004732fc
    POP EBP                             ; 004732fe
    POP EDI                             ; 004732ff
    POP ESI                             ; 00473300
    POP EBX                             ; 00473301
    RET                                 ; 00473302
    MOV EDI,dword ptr [ESP + 0x94]      ; 00473303
        ;   Label: LAB_00473303
    TEST EDI,EDI                        ; 0047330a
    JL 0x00473328                       ; 0047330c
        ;   XREF to: 00473328 (CONDITIONAL_JUMP)  ; LAB_00473328
    MOV dword ptr [ESP + 0x94],ECX      ; 0047330e
        ;   Label: LAB_0047330e
    MOV dword ptr [ESP + 0x98],EDX      ; 00473315
    MOV dword ptr [ESP + 0x8c],EAX      ; 0047331c
    JMP 0x00473089                      ; 00473323
        ;   XREF to: 00473089 (UNCONDITIONAL_JUMP)  ; LAB_00473089
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00473328
        ;   Label: LAB_00473328
    MOV EDX,dword ptr [ESP + 0x88]      ; 0047332c
    MOV ECX,dword ptr [ESP + 0x90]      ; 00473333
    ADD EDX,EAX                         ; 0047333a
    ADD ECX,dword ptr [ESP + 0x80]      ; 0047333c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00473343
    MOV dword ptr [ESP + 0x88],EDX      ; 00473347
    ADD EDI,EAX                         ; 0047334e
    MOV dword ptr [ESP + 0x90],ECX      ; 00473350
    MOV dword ptr [ESP + 0x94],EDI      ; 00473357
    JMP 0x00473089                      ; 0047335e
        ;   XREF to: 00473089 (UNCONDITIONAL_JUMP)  ; LAB_00473089
    MOV EAX,dword ptr [EBP + 0x24]      ; 00473363
        ;   Label: LAB_00473363
    TEST EAX,EAX                        ; 00473366
    JZ 0x0047314b                       ; 00473368
        ;   XREF to: 0047314b (CONDITIONAL_JUMP)  ; LAB_0047314b
    MOV dword ptr [EAX],0x1             ; 0047336e
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 00473374
    MOV EAX,dword ptr [ESP + 0x68]      ; 0047337c
    MOV ESP,EBP                         ; 00473380
    POP EBP                             ; 00473382
    POP EDI                             ; 00473383
    POP ESI                             ; 00473384
    POP EBX                             ; 00473385
    RET                                 ; 00473386

