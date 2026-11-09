; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dtrace_cpp_FUN_00473cd0(CDemonRaytrace *param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5)
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
;   core_box.cpp_CBox_processPhysics_FUN_0041b470 at 0041b50f
;   core_dtrace.cpp_FUN_00473bc0 at 00473bdd
;   core_gore.cpp_FUN_004ce170 at 004ce249
;   core_particle.cpp_FUN_00509f30 at 0050a0a7
;   core_setcolid.cpp_FUN_0053cad0 at 0053cb47
;   core_setcolid.cpp_FUN_0053ccc0 at 0053cd10
;   core_tvbat.cpp_FUN_00575380 at 00575bdb
;
; Referenced Globals:
;   undefined4 DAT_005bca09
;
; Called Functions:
;   core_dcube.cpp_FUN_00454360
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473cd0
        ;   Label: core_dtrace.cpp_FUN_00473cd0
    PUSH ESI                            ; 00473cd1
    PUSH EDI                            ; 00473cd2
    PUSH EBP                            ; 00473cd3
    MOV EBP,ESP                         ; 00473cd4
    SUB ESP,0xac                        ; 00473cd6
    AND ESP,0xfffffff8                  ; 00473cdc
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00473cdf
    MOV EBX,dword ptr [EBP + 0x20]      ; 00473ce2
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473ce5
    FLD float ptr [EAX]                 ; 00473ce8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473cea
    FSUB float ptr [EAX + 0x10]         ; 00473ced
    FDIV float ptr [EAX + 0x28]         ; 00473cf0
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473cf3
    FLD float ptr [EAX + 0x4]           ; 00473cf6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473cf9
    FSUB float ptr [EAX + 0x14]         ; 00473cfc
    FDIV float ptr [EAX + 0x2c]         ; 00473cff
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473d02
    FLD float ptr [EAX + 0x8]           ; 00473d05
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473d08
    FSUB float ptr [EAX + 0x18]         ; 00473d0b
    FDIV float ptr [EAX + 0x30]         ; 00473d0e
    FXCH ST2                            ; 00473d11
    FST float ptr [ESP + 0xc]           ; 00473d13
    FXCH                                ; 00473d17
    FSTP float ptr [ESP + 0x10]         ; 00473d19
    FXCH                                ; 00473d1d
    FSTP float ptr [ESP + 0x8]          ; 00473d1f
    SUB ESP,0x8                         ; 00473d23
    FSTP double ptr [ESP]               ; 00473d26
    CALL crt_math.c_floor_FUN_005a3600  ; 00473d29
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00473d2e
    MOV dword ptr [ESP + 0x50],EDX      ; 00473d32
    FLD double ptr [ESP + 0x4c]         ; 00473d36
    ADD ESP,0x8                         ; 00473d3a
    CALL crt_math.c_round_FUN_005a3120  ; 00473d3d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FLD float ptr [ESP + 0x10]          ; 00473d42
    FXCH                                ; 00473d46
    FISTP dword ptr [ESP + 0x88]        ; 00473d48
    SUB ESP,0x8                         ; 00473d4f
    FSTP double ptr [ESP]               ; 00473d52
    CALL crt_math.c_floor_FUN_005a3600  ; 00473d55
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00473d5a
    MOV dword ptr [ESP + 0x50],EDX      ; 00473d5e
    FLD double ptr [ESP + 0x4c]         ; 00473d62
    ADD ESP,0x8                         ; 00473d66
    CALL crt_math.c_round_FUN_005a3120  ; 00473d69
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FLD float ptr [ESP + 0x8]           ; 00473d6e
    FXCH                                ; 00473d72
    FISTP dword ptr [ESP + 0x84]        ; 00473d74
    SUB ESP,0x8                         ; 00473d7b
    FSTP double ptr [ESP]               ; 00473d7e
    CALL crt_math.c_floor_FUN_005a3600  ; 00473d81
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00473d86
    MOV dword ptr [ESP + 0x50],EDX      ; 00473d8a
    FLD double ptr [ESP + 0x4c]         ; 00473d8e
    ADD ESP,0x8                         ; 00473d92
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473d95
    FLD float ptr [ESI]                 ; 00473d98
    FSUB float ptr [EAX + 0x10]         ; 00473d9a
    FDIV float ptr [EAX + 0x28]         ; 00473d9d
    FLD float ptr [ESI + 0x4]           ; 00473da0
    FSUB float ptr [EAX + 0x14]         ; 00473da3
    FDIV float ptr [EAX + 0x2c]         ; 00473da6
    FLD float ptr [ESI + 0x8]           ; 00473da9
    FSUB float ptr [EAX + 0x18]         ; 00473dac
    FDIV float ptr [EAX + 0x30]         ; 00473daf
    FXCH ST3                            ; 00473db2
    CALL crt_math.c_round_FUN_005a3120  ; 00473db4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8c]        ; 00473db9
    FXCH                                ; 00473dc0
    FSTP float ptr [ESP + 0x4]          ; 00473dc2
    FSTP float ptr [ESP + 0x1c]         ; 00473dc6
    FSTP float ptr [ESP + 0x14]         ; 00473dca
    FLD float ptr [ESP + 0x4]           ; 00473dce
    SUB ESP,0x8                         ; 00473dd2
    FSTP double ptr [ESP]               ; 00473dd5
    CALL crt_math.c_floor_FUN_005a3600  ; 00473dd8
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00473ddd
    MOV dword ptr [ESP + 0x50],EDX      ; 00473de1
    FLD double ptr [ESP + 0x4c]         ; 00473de5
    ADD ESP,0x8                         ; 00473de9
    CALL crt_math.c_round_FUN_005a3120  ; 00473dec
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FLD float ptr [ESP + 0x1c]          ; 00473df1
    FXCH                                ; 00473df5
    FISTP dword ptr [ESP + 0x64]        ; 00473df7
    SUB ESP,0x8                         ; 00473dfb
    FSTP double ptr [ESP]               ; 00473dfe
    CALL crt_math.c_floor_FUN_005a3600  ; 00473e01
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00473e06
    MOV dword ptr [ESP + 0x50],EDX      ; 00473e0a
    FLD double ptr [ESP + 0x4c]         ; 00473e0e
    ADD ESP,0x8                         ; 00473e12
    CALL crt_math.c_round_FUN_005a3120  ; 00473e15
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FLD float ptr [ESP + 0x14]          ; 00473e1a
    FXCH                                ; 00473e1e
    FISTP dword ptr [ESP + 0x9c]        ; 00473e20
    SUB ESP,0x8                         ; 00473e27
    FSTP double ptr [ESP]               ; 00473e2a
    CALL crt_math.c_floor_FUN_005a3600  ; 00473e2d
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 00473e32
    MOV dword ptr [ESP + 0x50],EDX      ; 00473e36
    FLD double ptr [ESP + 0x4c]         ; 00473e3a
    ADD ESP,0x8                         ; 00473e3e
    CALL crt_math.c_round_FUN_005a3120  ; 00473e41
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EDX,dword ptr [ESP + 0x88]      ; 00473e46
    FISTP dword ptr [ESP + 0x60]        ; 00473e4d
    TEST EDX,EDX                        ; 00473e51
    JL 0x004741b0                       ; 00473e53
        ;   XREF to: 004741b0 (CONDITIONAL_JUMP)  ; LAB_004741b0
    CMP dword ptr [ESP + 0x84],0x0      ; 00473e59
        ;   Label: LAB_00473e59
    JL 0x004741ce                       ; 00473e61
        ;   XREF to: 004741ce (CONDITIONAL_JUMP)  ; LAB_004741ce
    CMP dword ptr [ESP + 0x8c],0x0      ; 00473e67
        ;   Label: LAB_00473e67
    JL 0x004741ef                       ; 00473e6f
        ;   XREF to: 004741ef (CONDITIONAL_JUMP)  ; LAB_004741ef
    MOV EDX,dword ptr [EBP + 0x14]      ; 00473e75
        ;   Label: LAB_00473e75
    MOV EAX,dword ptr [ESP + 0x88]      ; 00473e78
    MOV EDI,dword ptr [EDX + 0x40]      ; 00473e7f
    CMP EAX,EDI                         ; 00473e82
    JL 0x00473e90                       ; 00473e84
        ;   XREF to: 00473e90 (CONDITIONAL_JUMP)  ; LAB_00473e90
    CMP EDI,dword ptr [ESP + 0x64]      ; 00473e86
    JLE 0x004741bb                      ; 00473e8a
        ;   XREF to: 004741bb (CONDITIONAL_JUMP)  ; LAB_004741bb
    MOV EDX,dword ptr [EBP + 0x14]      ; 00473e90
        ;   Label: LAB_00473e90
    MOV EAX,dword ptr [ESP + 0x84]      ; 00473e93
    MOV EDI,dword ptr [EDX + 0x44]      ; 00473e9a
    CMP EAX,EDI                         ; 00473e9d
    JL 0x00473eae                       ; 00473e9f
        ;   XREF to: 00473eae (CONDITIONAL_JUMP)  ; LAB_00473eae
    CMP EDI,dword ptr [ESP + 0x9c]      ; 00473ea1
    JLE 0x004741bb                      ; 00473ea8
        ;   XREF to: 004741bb (CONDITIONAL_JUMP)  ; LAB_004741bb
    MOV EDX,dword ptr [EBP + 0x14]      ; 00473eae
        ;   Label: LAB_00473eae
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00473eb1
    MOV EDI,dword ptr [EDX + 0x48]      ; 00473eb8
    CMP EAX,EDI                         ; 00473ebb
    JL 0x00473ec9                       ; 00473ebd
        ;   XREF to: 00473ec9 (CONDITIONAL_JUMP)  ; LAB_00473ec9
    CMP EDI,dword ptr [ESP + 0x60]      ; 00473ebf
    JLE 0x004741bb                      ; 00473ec3
        ;   XREF to: 004741bb (CONDITIONAL_JUMP)  ; LAB_004741bb
    FLD float ptr [ESI + 0x4]           ; 00473ec9
        ;   Label: LAB_00473ec9
    FLD float ptr [ESI + 0x8]           ; 00473ecc
    FLD float ptr [ESI]                 ; 00473ecf
    MOV EAX,dword ptr [EBP + 0x18]      ; 00473ed1
    LEA EDI,[ESP + 0x38]                ; 00473ed4
    LEA ESI,[ESP + 0x2c]                ; 00473ed8
    FSUB float ptr [EAX]                ; 00473edc
    FXCH ST2                            ; 00473ede
    FSUB float ptr [EAX + 0x4]          ; 00473ee0
    FXCH                                ; 00473ee3
    FSUB float ptr [EAX + 0x8]          ; 00473ee5
    FXCH                                ; 00473ee8
    FSTP float ptr [ESP + 0x30]         ; 00473eea
    FSTP float ptr [ESP + 0x34]         ; 00473eee
    FSTP float ptr [ESP + 0x2c]         ; 00473ef2
    MOVSD ES:EDI,ESI                    ; 00473ef6
    MOVSD ES:EDI,ESI                    ; 00473ef7
    MOVSD ES:EDI,ESI                    ; 00473ef8
    MOV EAX,dword ptr [ESP + 0x88]      ; 00473ef9
    MOV EDI,dword ptr [ESP + 0x64]      ; 00473f00
    MOV ESI,0x1                         ; 00473f04
    CMP EAX,EDI                         ; 00473f09
    JZ 0x0047420d                       ; 00473f0b
        ;   XREF to: 0047420d (CONDITIONAL_JUMP)  ; LAB_0047420d
    FLD float ptr [ESP + 0x3c]          ; 00473f11
        ;   Label: LAB_00473f11
    FMUL ST0                            ; 00473f15
    FLD float ptr [ESP + 0x38]          ; 00473f17
    FMUL ST0                            ; 00473f1b
    FADDP                               ; 00473f1d
    FLD float ptr [ESP + 0x40]          ; 00473f1f
    FMUL ST0                            ; 00473f23
    FADDP                               ; 00473f25
    FSQRT                               ; 00473f27
    FST float ptr [ESP]                 ; 00473f29
    FLDZ                                ; 00473f2c
    FCOMPP                              ; 00473f2e
    FNSTSW AX                           ; 00473f30
    SAHF                                ; 00473f32
    JNC 0x004741bb                      ; 00473f33
        ;   XREF to: 004741bb (CONDITIONAL_JUMP)  ; LAB_004741bb
    FLD float ptr [ESP + 0x4]           ; 00473f39
    FSUB float ptr [ESP + 0xc]          ; 00473f3d
    FABS                                ; 00473f41
    FLD float ptr [ESP + 0x1c]          ; 00473f43
    FSUB float ptr [ESP + 0x10]         ; 00473f47
    FABS                                ; 00473f4b
    FLD float ptr [ESP + 0x14]          ; 00473f4d
    FSUB float ptr [ESP + 0x8]          ; 00473f51
    FABS                                ; 00473f55
    FLD float ptr [0x005bca09]          ; 00473f57 | DAT_005bca09
    FDIV float ptr [ESP]                ; 00473f5d
    FXCH ST3                            ; 00473f60
    FMUL ST3                            ; 00473f62
    FXCH ST2                            ; 00473f64
    FMUL ST3                            ; 00473f66
    FXCH                                ; 00473f68
    FMULP ST3                           ; 00473f6a
    FXCH                                ; 00473f6c
    CALL crt_math.c_round_FUN_005a3120  ; 00473f6e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x7c]        ; 00473f73
    FLD float ptr [ESP + 0x38]          ; 00473f77
    FXCH                                ; 00473f7b
    CALL crt_math.c_round_FUN_005a3120  ; 00473f7d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x80]        ; 00473f82
    FLDZ                                ; 00473f89
    FXCH ST2                            ; 00473f8b
    CALL crt_math.c_round_FUN_005a3120  ; 00473f8d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x78]        ; 00473f92
    FXCH                                ; 00473f96
    FCOMPP                              ; 00473f98
    FNSTSW AX                           ; 00473f9a
    SAHF                                ; 00473f9c
    JA 0x00474237                       ; 00473f9d
        ;   XREF to: 00474237 (CONDITIONAL_JUMP)  ; LAB_00474237
    MOV EAX,dword ptr [ESP + 0x64]      ; 00473fa3
    MOV EDI,dword ptr [ESP + 0x88]      ; 00473fa7
    SUB EAX,EDI                         ; 00473fae
    MOV ECX,0x1                         ; 00473fb0
    ADD ESI,EAX                         ; 00473fb5
    LEA EAX,[EDI + ECX*0x1]             ; 00473fb7
    MOV dword ptr [ESP + 0xa8],EAX      ; 00473fba
    FILD dword ptr [ESP + 0xa8]         ; 00473fc1
    FSUB float ptr [ESP + 0xc]          ; 00473fc8
    MOV dword ptr [ESP + 0x6c],ECX      ; 00473fcc
    FSTP float ptr [ESP + 0x58]         ; 00473fd0
        ;   Label: LAB_00473fd0
    FLD float ptr [ESP + 0x3c]          ; 00473fd4
    FLDZ                                ; 00473fd8
    FCOMPP                              ; 00473fda
    FNSTSW AX                           ; 00473fdc
    SAHF                                ; 00473fde
    JA 0x0047426b                       ; 00473fdf
        ;   XREF to: 0047426b (CONDITIONAL_JUMP)  ; LAB_0047426b
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00473fe5
    MOV EDI,dword ptr [ESP + 0x84]      ; 00473fec
    SUB EAX,EDI                         ; 00473ff3
    MOV ECX,0x1                         ; 00473ff5
    ADD ESI,EAX                         ; 00473ffa
    LEA EAX,[EDI + ECX*0x1]             ; 00473ffc
    MOV dword ptr [ESP + 0xa8],EAX      ; 00473fff
    FILD dword ptr [ESP + 0xa8]         ; 00474006
    FSUB float ptr [ESP + 0x10]         ; 0047400d
    MOV dword ptr [ESP + 0x70],ECX      ; 00474011
    FSTP float ptr [ESP + 0x5c]         ; 00474015
        ;   Label: LAB_00474015
    FLD float ptr [ESP + 0x40]          ; 00474019
    FLDZ                                ; 0047401d
    FCOMPP                              ; 0047401f
    FNSTSW AX                           ; 00474021
    SAHF                                ; 00474023
    JA 0x004742a4                       ; 00474024
        ;   XREF to: 004742a4 (CONDITIONAL_JUMP)  ; LAB_004742a4
    MOV EAX,dword ptr [ESP + 0x60]      ; 0047402a
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0047402e
    SUB EAX,EDI                         ; 00474035
    MOV ECX,0x1                         ; 00474037
    ADD ESI,EAX                         ; 0047403c
    LEA EAX,[EDI + ECX*0x1]             ; 0047403e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00474041
    FILD dword ptr [ESP + 0xa8]         ; 00474048
    FSUB float ptr [ESP + 0x8]          ; 0047404f
    MOV dword ptr [ESP + 0xa0],ECX      ; 00474053
    FSTP float ptr [ESP + 0x74]         ; 0047405a
        ;   Label: LAB_0047405a
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047405e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00474065
    FILD dword ptr [ESP + 0xa8]         ; 0047406c
    FLD ST0                             ; 00474073
    FMUL float ptr [ESP + 0x58]         ; 00474075
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00474079
    FXCH                                ; 0047407d
    FLD float ptr [ESP + 0x74]          ; 0047407f
    FXCH                                ; 00474083
    FMUL ST1                            ; 00474085
    MOV dword ptr [ESP + 0xa8],EAX      ; 00474087
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047408e
    FILD dword ptr [ESP + 0xa8]         ; 00474092
    MOV dword ptr [ESP + 0xa8],EAX      ; 00474099
    FLD ST0                             ; 004740a0
    FMUL float ptr [ESP + 0x5c]         ; 004740a2
    FILD dword ptr [ESP + 0xa8]         ; 004740a6
    FLD ST0                             ; 004740ad
    FMUL float ptr [ESP + 0x58]         ; 004740af
    FXCH                                ; 004740b3
    FMUL float ptr [ESP + 0x5c]         ; 004740b5
    FXCH ST2                            ; 004740b9
    FSUBP ST6,ST0                       ; 004740bb
    FXCH ST2                            ; 004740bd
    FMULP ST4                           ; 004740bf
    FXCH ST4                            ; 004740c1
    CALL crt_math.c_round_FUN_005a3120  ; 004740c3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST4                            ; 004740c8
    FSUBP ST2,ST0                       ; 004740ca
    FXCH ST3                            ; 004740cc
    FISTP dword ptr [ESP + 0x90]        ; 004740ce
    CALL crt_math.c_round_FUN_005a3120  ; 004740d5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004740da
    FSUBP ST2,ST0                       ; 004740dc
    FISTP dword ptr [ESP + 0x98]        ; 004740de
    CALL crt_math.c_round_FUN_005a3120  ; 004740e5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x94]        ; 004740ea
    MOV dword ptr [ESP + 0x18],0x3f800347 ; 004740f1
        ;   Label: LAB_004740f1
    MOV ECX,dword ptr [ESP + 0x8c]      ; 004740f9
        ;   Label: LAB_004740f9
    PUSH ECX                            ; 00474100
    MOV EDI,dword ptr [ESP + 0x88]      ; 00474101
    PUSH EDI                            ; 00474108
    MOV EAX,dword ptr [ESP + 0x90]      ; 00474109
    PUSH EAX                            ; 00474110
    MOV EDX,dword ptr [EBP + 0x14]      ; 00474111
    PUSH EDX                            ; 00474114
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60 ; 00474115
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0047411a
    TEST EAX,EAX                        ; 0047411d
    JNZ 0x004742dd                      ; 0047411f
        ;   XREF to: 004742dd (CONDITIONAL_JUMP)  ; LAB_004742dd
    DEC ESI                             ; 00474125
        ;   Label: LAB_00474125
    TEST ESI,ESI                        ; 00474126
    JLE 0x004743d3                      ; 00474128
        ;   XREF to: 004743d3 (CONDITIONAL_JUMP)  ; LAB_004743d3
    MOV EDX,dword ptr [ESP + 0x98]      ; 0047412e
    MOV EAX,dword ptr [ESP + 0x80]      ; 00474135
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0047413c
    ADD EDX,EAX                         ; 00474143
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00474145
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0047414c
    ADD EAX,ECX                         ; 00474150
    MOV ECX,dword ptr [ESP + 0x94]      ; 00474152
    SUB ECX,EDI                         ; 00474159
    CMP dword ptr [ESP + 0x90],0x0      ; 0047415b
    JL 0x00474373                       ; 00474163
        ;   XREF to: 00474373 (CONDITIONAL_JUMP)  ; LAB_00474373
    MOV EDI,dword ptr [ESP + 0x98]      ; 00474169
    TEST EDI,EDI                        ; 00474170
    JL 0x0047437e                       ; 00474172
        ;   XREF to: 0047437e (CONDITIONAL_JUMP)  ; LAB_0047437e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00474178
    MOV EDX,dword ptr [ESP + 0x84]      ; 0047417c
    MOV ECX,dword ptr [ESP + 0x90]      ; 00474183
    ADD EDX,EAX                         ; 0047418a
    SUB ECX,dword ptr [ESP + 0x7c]      ; 0047418c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00474190
    MOV dword ptr [ESP + 0x84],EDX      ; 00474194
    SUB EDI,EAX                         ; 0047419b
    MOV dword ptr [ESP + 0x90],ECX      ; 0047419d
    MOV dword ptr [ESP + 0x98],EDI      ; 004741a4
    JMP 0x004740f9                      ; 004741ab
        ;   XREF to: 004740f9 (UNCONDITIONAL_JUMP)  ; LAB_004740f9
    CMP dword ptr [ESP + 0x64],0x0      ; 004741b0
        ;   Label: LAB_004741b0
    JGE 0x00473e59                      ; 004741b5
        ;   XREF to: 00473e59 (CONDITIONAL_JUMP)  ; LAB_00473e59
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 004741bb
        ;   Label: LAB_004741bb
    MOV EAX,dword ptr [ESP + 0x68]      ; 004741c3
    MOV ESP,EBP                         ; 004741c7
    POP EBP                             ; 004741c9
    POP EDI                             ; 004741ca
    POP ESI                             ; 004741cb
    POP EBX                             ; 004741cc
    RET                                 ; 004741cd
    CMP dword ptr [ESP + 0x9c],0x0      ; 004741ce
        ;   Label: LAB_004741ce
    JGE 0x00473e67                      ; 004741d6
        ;   XREF to: 00473e67 (CONDITIONAL_JUMP)  ; LAB_00473e67
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 004741dc
    MOV EAX,dword ptr [ESP + 0x68]      ; 004741e4
    MOV ESP,EBP                         ; 004741e8
    POP EBP                             ; 004741ea
    POP EDI                             ; 004741eb
    POP ESI                             ; 004741ec
    POP EBX                             ; 004741ed
    RET                                 ; 004741ee
    CMP dword ptr [ESP + 0x60],0x0      ; 004741ef
        ;   Label: LAB_004741ef
    JGE 0x00473e75                      ; 004741f4
        ;   XREF to: 00473e75 (CONDITIONAL_JUMP)  ; LAB_00473e75
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 004741fa
    MOV EAX,dword ptr [ESP + 0x68]      ; 00474202
    MOV ESP,EBP                         ; 00474206
    POP EBP                             ; 00474208
    POP EDI                             ; 00474209
    POP ESI                             ; 0047420a
    POP EBX                             ; 0047420b
    RET                                 ; 0047420c
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047420d
        ;   Label: LAB_0047420d
    CMP EAX,dword ptr [ESP + 0x9c]      ; 00474214
    JNZ 0x00473f11                      ; 0047421b
        ;   XREF to: 00473f11 (CONDITIONAL_JUMP)  ; LAB_00473f11
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00474221
    CMP EAX,dword ptr [ESP + 0x60]      ; 00474228
    JNZ 0x00473f11                      ; 0047422c
        ;   XREF to: 00473f11 (CONDITIONAL_JUMP)  ; LAB_00473f11
    JMP 0x004740f1                      ; 00474232
        ;   XREF to: 004740f1 (UNCONDITIONAL_JUMP)  ; LAB_004740f1
    MOV EAX,dword ptr [ESP + 0x88]      ; 00474237
        ;   Label: LAB_00474237
    SUB EAX,dword ptr [ESP + 0x64]      ; 0047423e
    ADD ESI,EAX                         ; 00474242
    MOV EAX,dword ptr [ESP + 0x88]      ; 00474244
    MOV dword ptr [ESP + 0xa8],EAX      ; 0047424b
    MOV EDI,0xffffffff                  ; 00474252
    FILD dword ptr [ESP + 0xa8]         ; 00474257
    FSUBR float ptr [ESP + 0xc]         ; 0047425e
    MOV dword ptr [ESP + 0x6c],EDI      ; 00474262
    JMP 0x00473fd0                      ; 00474266
        ;   XREF to: 00473fd0 (UNCONDITIONAL_JUMP)  ; LAB_00473fd0
    MOV EAX,0xffffffff                  ; 0047426b
        ;   Label: LAB_0047426b
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00474270
    MOV dword ptr [ESP + 0x70],EAX      ; 00474277
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047427b
    SUB EAX,EDX                         ; 00474282
    ADD ESI,EAX                         ; 00474284
    MOV EAX,dword ptr [ESP + 0x84]      ; 00474286
    MOV dword ptr [ESP + 0xa8],EAX      ; 0047428d
    FILD dword ptr [ESP + 0xa8]         ; 00474294
    FSUBR float ptr [ESP + 0x10]        ; 0047429b
    JMP 0x00474015                      ; 0047429f
        ;   XREF to: 00474015 (UNCONDITIONAL_JUMP)  ; LAB_00474015
    MOV EAX,0xffffffff                  ; 004742a4
        ;   Label: LAB_004742a4
    MOV EDX,dword ptr [ESP + 0x60]      ; 004742a9
    MOV dword ptr [ESP + 0xa0],EAX      ; 004742ad
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004742b4
    SUB EAX,EDX                         ; 004742bb
    ADD ESI,EAX                         ; 004742bd
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004742bf
    MOV dword ptr [ESP + 0xa8],EAX      ; 004742c6
    FILD dword ptr [ESP + 0xa8]         ; 004742cd
    FSUBR float ptr [ESP + 0x8]         ; 004742d4
    JMP 0x0047405a                      ; 004742d8
        ;   XREF to: 0047405a (UNCONDITIONAL_JUMP)  ; LAB_0047405a
    LEA EDX,[ESP + 0x4c]                ; 004742dd
        ;   Label: LAB_004742dd
    PUSH EDX                            ; 004742e1
    LEA EDX,[ESP + 0x24]                ; 004742e2
    PUSH EDX                            ; 004742e6
    LEA EDX,[ESP + 0x40]                ; 004742e7
    PUSH EDX                            ; 004742eb
    MOV ECX,dword ptr [EBP + 0x18]      ; 004742ec
    PUSH ECX                            ; 004742ef
    PUSH EAX                            ; 004742f0
    CALL core_dcube.cpp_FUN_00454360    ; 004742f1
        ;   XREF to: 00454360 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_00454360()
    MOV dword ptr [ESP + 0xbc],EAX      ; 004742f6
    FLD float ptr [ESP + 0xbc]          ; 004742fd
    ADD ESP,0x14                        ; 00474304
    FST float ptr [ESP + 0xa4]          ; 00474307
    FCOMP float ptr [ESP + 0x18]        ; 0047430e
    FNSTSW AX                           ; 00474312
    SAHF                                ; 00474314
    JNC 0x0047434f                      ; 00474315
        ;   XREF to: 0047434f (CONDITIONAL_JUMP)  ; LAB_0047434f
    TEST EBX,EBX                        ; 00474317
    JZ 0x00474337                       ; 00474319
        ;   XREF to: 00474337 (CONDITIONAL_JUMP)  ; LAB_00474337
    LEA EAX,[ESP + 0x20]                ; 0047431b
    CMP EBX,EAX                         ; 0047431f
    JZ 0x00474337                       ; 00474321
        ;   XREF to: 00474337 (CONDITIONAL_JUMP)  ; LAB_00474337
    MOV EAX,dword ptr [ESP + 0x20]      ; 00474323
    MOV dword ptr [EBX],EAX             ; 00474327
    MOV EAX,dword ptr [ESP + 0x24]      ; 00474329
    MOV dword ptr [EBX + 0x4],EAX       ; 0047432d
    MOV EAX,dword ptr [ESP + 0x28]      ; 00474330
    MOV dword ptr [EBX + 0x8],EAX       ; 00474334
    MOV EDI,dword ptr [EBP + 0x24]      ; 00474337
        ;   Label: LAB_00474337
    TEST EDI,EDI                        ; 0047433a
    JZ 0x00474344                       ; 0047433c
        ;   XREF to: 00474344 (CONDITIONAL_JUMP)  ; LAB_00474344
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047433e
    MOV dword ptr [EDI],EAX             ; 00474342
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00474344
        ;   Label: LAB_00474344
    MOV dword ptr [ESP + 0x18],EAX      ; 0047434b
    FLD float ptr [ESP + 0x18]          ; 0047434f
        ;   Label: LAB_0047434f
    FLD1                                ; 00474353
    FCOMPP                              ; 00474355
    FNSTSW AX                           ; 00474357
    SAHF                                ; 00474359
    JC 0x00474125                       ; 0047435a
        ;   XREF to: 00474125 (CONDITIONAL_JUMP)  ; LAB_00474125
    MOV EAX,dword ptr [ESP + 0x18]      ; 00474360
    MOV dword ptr [ESP + 0x68],EAX      ; 00474364
    MOV EAX,dword ptr [ESP + 0x68]      ; 00474368
    MOV ESP,EBP                         ; 0047436c
    POP EBP                             ; 0047436e
    POP EDI                             ; 0047436f
    POP ESI                             ; 00474370
    POP EBX                             ; 00474371
    RET                                 ; 00474372
    MOV EDI,dword ptr [ESP + 0x94]      ; 00474373
        ;   Label: LAB_00474373
    TEST EDI,EDI                        ; 0047437a
    JL 0x00474398                       ; 0047437c
        ;   XREF to: 00474398 (CONDITIONAL_JUMP)  ; LAB_00474398
    MOV dword ptr [ESP + 0x94],ECX      ; 0047437e
        ;   Label: LAB_0047437e
    MOV dword ptr [ESP + 0x98],EDX      ; 00474385
    MOV dword ptr [ESP + 0x8c],EAX      ; 0047438c
    JMP 0x004740f9                      ; 00474393
        ;   XREF to: 004740f9 (UNCONDITIONAL_JUMP)  ; LAB_004740f9
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00474398
        ;   Label: LAB_00474398
    MOV EDX,dword ptr [ESP + 0x88]      ; 0047439c
    MOV ECX,dword ptr [ESP + 0x90]      ; 004743a3
    ADD EDX,EAX                         ; 004743aa
    ADD ECX,dword ptr [ESP + 0x80]      ; 004743ac
    MOV EAX,dword ptr [ESP + 0x78]      ; 004743b3
    MOV dword ptr [ESP + 0x88],EDX      ; 004743b7
    ADD EDI,EAX                         ; 004743be
    MOV dword ptr [ESP + 0x90],ECX      ; 004743c0
    MOV dword ptr [ESP + 0x94],EDI      ; 004743c7
    JMP 0x004740f9                      ; 004743ce
        ;   XREF to: 004740f9 (UNCONDITIONAL_JUMP)  ; LAB_004740f9
    MOV EAX,dword ptr [EBP + 0x24]      ; 004743d3
        ;   Label: LAB_004743d3
    TEST EAX,EAX                        ; 004743d6
    JZ 0x004741bb                       ; 004743d8
        ;   XREF to: 004741bb (CONDITIONAL_JUMP)  ; LAB_004741bb
    MOV dword ptr [EAX],0x1             ; 004743de
    MOV dword ptr [ESP + 0x68],0xbf800000 ; 004743e4
    MOV EAX,dword ptr [ESP + 0x68]      ; 004743ec
    MOV ESP,EBP                         ; 004743f0
    POP EBP                             ; 004743f2
    POP EDI                             ; 004743f3
    POP ESI                             ; 004743f4
    POP EBX                             ; 004743f5
    RET                                 ; 004743f6

