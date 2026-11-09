; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004e4e10(void)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40 at 0046ce52
;   engine_matrix.c_buildRotationMatrix_FUN_004e50f0 at 004e53d4
;
; Referenced Globals:
;   undefined4 DAT_005c6eca
;   undefined4 DAT_005c6ed2
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   undefined4 DAT_01c6e314
;   undefined4 DAT_01c6e318
;   undefined4 DAT_01c6e31c
;   undefined4 DAT_01d72644
;   undefined4 DAT_01d72648
;   undefined4 DAT_01d7264c
;   undefined4 DAT_01d72650
;   ... and 14 more
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e4e10
        ;   Label: engine_matrix.c_invertTransformMatrix_FUN_004e4e10
    MOV EBP,ESP                         ; 004e4e11
    SUB ESP,0x54                        ; 004e4e13
    AND ESP,0xfffffff8                  ; 004e4e16
    FILD dword ptr [0x01c6e2fc]         ; 004e4e19 | DAT_01c6e2fc
    FMUL double ptr [0x005c6eca]        ; 004e4e1f | DAT_005c6eca
    FILD dword ptr [0x01c6e300]         ; 004e4e25 | DAT_01c6e300
    FMUL double ptr [0x005c6eca]        ; 004e4e2b | DAT_005c6eca
    FILD dword ptr [0x01c6e304]         ; 004e4e31 | DAT_01c6e304
    FMUL double ptr [0x005c6eca]        ; 004e4e37 | DAT_005c6eca
    FILD dword ptr [0x01c6e308]         ; 004e4e3d | DAT_01c6e308
    FMUL double ptr [0x005c6eca]        ; 004e4e43 | DAT_005c6eca
    FILD dword ptr [0x01c6e30c]         ; 004e4e49 | DAT_01c6e30c
    FMUL double ptr [0x005c6eca]        ; 004e4e4f | DAT_005c6eca
    FILD dword ptr [0x01c6e310]         ; 004e4e55 | DAT_01c6e310
    FMUL double ptr [0x005c6eca]        ; 004e4e5b | DAT_005c6eca
    FILD dword ptr [0x01c6e314]         ; 004e4e61 | DAT_01c6e314
    FMUL double ptr [0x005c6eca]        ; 004e4e67 | DAT_005c6eca
    FXCH ST6                            ; 004e4e6d
    FSTP float ptr [ESP + 0x48]         ; 004e4e6f
    FILD dword ptr [0x01c6e318]         ; 004e4e73 | DAT_01c6e318
    FMUL double ptr [0x005c6eca]        ; 004e4e79 | DAT_005c6eca
    FXCH ST2                            ; 004e4e7f
    FSTP float ptr [ESP + 0x3c]         ; 004e4e81
    FILD dword ptr [0x01c6e31c]         ; 004e4e85 | DAT_01c6e31c
    FMUL double ptr [0x005c6eca]        ; 004e4e8b | DAT_005c6eca
    FXCH                                ; 004e4e91
    FSTP float ptr [ESP + 0x34]         ; 004e4e93
    FLD float ptr [ESP + 0x3c]          ; 004e4e97
    FXCH                                ; 004e4e9b
    FSTP float ptr [ESP + 0x14]         ; 004e4e9d
    FMUL float ptr [ESP + 0x14]         ; 004e4ea1
    FXCH                                ; 004e4ea5
    FSTP float ptr [ESP + 0x40]         ; 004e4ea7
    FLD float ptr [ESP + 0x34]          ; 004e4eab
    FMUL float ptr [ESP + 0x40]         ; 004e4eaf
    FXCH ST4                            ; 004e4eb3
    FST float ptr [ESP + 0x50]          ; 004e4eb5
    FMUL float ptr [ESP + 0x14]         ; 004e4eb9
    FXCH ST3                            ; 004e4ebd
    FSTP float ptr [ESP + 0x4c]         ; 004e4ebf
    FLD float ptr [ESP + 0x48]          ; 004e4ec3
    FMUL float ptr [ESP + 0x14]         ; 004e4ec7
    FLD float ptr [ESP + 0x4c]          ; 004e4ecb
    FMUL float ptr [ESP + 0x40]         ; 004e4ecf
    FXCH ST2                            ; 004e4ed3
    FSTP float ptr [ESP + 0x18]         ; 004e4ed5
    FXCH ST4                            ; 004e4ed9
    FSUBR float ptr [ESP + 0x18]        ; 004e4edb
    FLD float ptr [ESP + 0x48]          ; 004e4edf
    FXCH                                ; 004e4ee3
    FSTP float ptr [ESP + 0x2c]         ; 004e4ee5
    FMUL float ptr [ESP + 0x2c]         ; 004e4ee9
    FXCH ST2                            ; 004e4eed
    FST float ptr [ESP + 0x44]          ; 004e4eef
    FMUL float ptr [ESP + 0x14]         ; 004e4ef3
    FXCH ST5                            ; 004e4ef7
    FSTP float ptr [ESP + 0x38]         ; 004e4ef9
    FLD float ptr [ESP + 0x34]          ; 004e4efd
    FMUL float ptr [ESP + 0x38]         ; 004e4f01
    FLD float ptr [ESP + 0x4c]          ; 004e4f05
    FMUL float ptr [ESP + 0x38]         ; 004e4f09
    FXCH                                ; 004e4f0d
    FSUBP ST6,ST0                       ; 004e4f0f
    MOV EAX,[0x01c6e2fc]                ; 004e4f11 | DAT_01c6e2fc
    FLD float ptr [ESP + 0x50]          ; 004e4f16
    FMUL ST6                            ; 004e4f1a
    MOV [0x01d7266c],EAX                ; 004e4f1c | DAT_01d7266c
    FSUBP ST3,ST0                       ; 004e4f21
    MOV EAX,[0x01c6e300]                ; 004e4f23 | DAT_01c6e300
    FLD float ptr [ESP + 0x44]          ; 004e4f28
    FMUL float ptr [ESP + 0x40]         ; 004e4f2c
    MOV [0x01d72670],EAX                ; 004e4f30 | DAT_01d72670
    MOV EAX,[0x01c6e304]                ; 004e4f35 | DAT_01c6e304
    FSTP float ptr [ESP + 0x18]         ; 004e4f3a
    FLD float ptr [ESP + 0x3c]          ; 004e4f3e
    FMUL float ptr [ESP + 0x38]         ; 004e4f42
    MOV [0x01d72674],EAX                ; 004e4f46 | DAT_01d72674
    FSUBR float ptr [ESP + 0x18]        ; 004e4f4b
    MOV EAX,[0x01c6e308]                ; 004e4f4f | DAT_01c6e308
    FSTP float ptr [ESP + 0x30]         ; 004e4f54
    FLD float ptr [ESP + 0x4c]          ; 004e4f58
    FMUL float ptr [ESP + 0x30]         ; 004e4f5c
    MOV [0x01d72678],EAX                ; 004e4f60 | DAT_01d72678
    FXCH ST2                            ; 004e4f65
    FSUBP ST4,ST0                       ; 004e4f67
    MOV EAX,[0x01c6e30c]                ; 004e4f69 | DAT_01c6e30c
    FSUBP ST4,ST0                       ; 004e4f6e
    MOV [0x01d7267c],EAX                ; 004e4f70 | DAT_01d7267c
    MOV EAX,[0x01c6e310]                ; 004e4f75 | DAT_01c6e310
    FXCH ST2                            ; 004e4f7a
    FCHS                                ; 004e4f7c
    MOV [0x01d72680],EAX                ; 004e4f7e | DAT_01d72680
    MOV EAX,[0x01c6e314]                ; 004e4f83 | DAT_01c6e314
    FXCH ST3                            ; 004e4f88
    FSTP float ptr [ESP + 0x28]         ; 004e4f8a
    MOV [0x01d72684],EAX                ; 004e4f8e | DAT_01d72684
    MOV EAX,[0x01c6e318]                ; 004e4f93 | DAT_01c6e318
    FXCH ST2                            ; 004e4f98
    FSTP float ptr [ESP + 0x24]         ; 004e4f9a
    MOV [0x01d72688],EAX                ; 004e4f9e | DAT_01d72688
    FXCH ST2                            ; 004e4fa3
    FCHS                                ; 004e4fa5
    FSTP float ptr [ESP + 0x20]         ; 004e4fa7
    MOV EAX,[0x01c6e31c]                ; 004e4fab | DAT_01c6e31c
    FADDP                               ; 004e4fb0
    MOV [0x01d7268c],EAX                ; 004e4fb2 | DAT_01d7268c
    FSTP float ptr [ESP]                ; 004e4fb7
    FLD float ptr [ESP]                 ; 004e4fba
    FDIVR double ptr [0x005c6ed2]       ; 004e4fbd | DAT_005c6ed2
    FLD float ptr [ESP + 0x48]          ; 004e4fc3
    FLD ST0                             ; 004e4fc7
    FMUL float ptr [ESP + 0x40]         ; 004e4fc9
    FLD float ptr [ESP + 0x34]          ; 004e4fcd
    FLD float ptr [ESP + 0x50]          ; 004e4fd1
    FMUL ST1                            ; 004e4fd5
    FLD ST3                             ; 004e4fd7
    FMULP ST2                           ; 004e4fd9
    FXCH ST3                            ; 004e4fdb
    FMUL float ptr [ESP + 0x3c]         ; 004e4fdd
    FLD float ptr [ESP + 0x50]          ; 004e4fe1
    FMUL float ptr [ESP + 0x38]         ; 004e4fe5
    FLD float ptr [ESP + 0x4c]          ; 004e4fe9
    FXCH                                ; 004e4fed
    FSUBP ST4,ST0                       ; 004e4fef
    FMUL float ptr [ESP + 0x3c]         ; 004e4ff1
    FXCH ST3                            ; 004e4ff5
    FCHS                                ; 004e4ff7
    FSTP float ptr [ESP + 0x8]          ; 004e4ff9
    FLD float ptr [ESP + 0x4c]          ; 004e4ffd
    FMUL float ptr [ESP + 0x44]         ; 004e5001
    FLD float ptr [ESP + 0x50]          ; 004e5005
    FMUL float ptr [ESP + 0x44]         ; 004e5009
    FXCH ST4                            ; 004e500d
    FSUBP ST5,ST0                       ; 004e500f
    FLD float ptr [ESP + 0x2c]          ; 004e5011
    FXCH ST6                            ; 004e5015
    FSTP float ptr [ESP]                ; 004e5017
    FXCH ST5                            ; 004e501a
    FMUL float ptr [ESP]                ; 004e501c
    FLD float ptr [ESP + 0x24]          ; 004e501f
    FXCH ST6                            ; 004e5023
    FSUBP ST3,ST0                       ; 004e5025
    FXCH ST5                            ; 004e5027
    FMUL float ptr [ESP]                ; 004e5029
    FXCH ST2                            ; 004e502c
    FCHS                                ; 004e502e
    FXCH ST4                            ; 004e5030
    FMUL float ptr [ESP]                ; 004e5032
    FLD float ptr [ESP + 0x20]          ; 004e5035
    FMUL float ptr [ESP]                ; 004e5039
    FXCH ST4                            ; 004e503c
    FSUBP ST2,ST0                       ; 004e503e
    FXCH                                ; 004e5040
    FSTP float ptr [ESP + 0x10]         ; 004e5042
    FLD float ptr [ESP + 0x28]          ; 004e5046
    FMUL float ptr [ESP]                ; 004e504a
    FXCH ST4                            ; 004e504d
    FMUL float ptr [ESP]                ; 004e504f
    FLD float ptr [ESP + 0x30]          ; 004e5052
    FMUL float ptr [ESP]                ; 004e5056
    FXCH ST6                            ; 004e5059
    CALL crt_math.c_round_FUN_005a3120  ; 004e505b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01d72644]        ; 004e5060 | DAT_01d72644
    FLD float ptr [ESP + 0x8]           ; 004e5066
    FMUL float ptr [ESP]                ; 004e506a
    FXCH ST3                            ; 004e506d
    CALL crt_math.c_round_FUN_005a3120  ; 004e506f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01d72648]        ; 004e5074 | DAT_01d72648
    FLD float ptr [ESP + 0x10]          ; 004e507a
    FMUL float ptr [ESP]                ; 004e507e
    FXCH ST2                            ; 004e5081
    CALL crt_math.c_round_FUN_005a3120  ; 004e5083
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST4                            ; 004e5088
    CALL crt_math.c_round_FUN_005a3120  ; 004e508a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST5                            ; 004e508f
    CALL crt_math.c_round_FUN_005a3120  ; 004e5091
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004e5096
    CALL crt_math.c_round_FUN_005a3120  ; 004e5098
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST6                            ; 004e509d
    CALL crt_math.c_round_FUN_005a3120  ; 004e509f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 004e50a4
    CALL crt_math.c_round_FUN_005a3120  ; 004e50a6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 004e50ab
    CALL crt_math.c_round_FUN_005a3120  ; 004e50ad
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST4                            ; 004e50b2
    FISTP dword ptr [0x01d7264c]        ; 004e50b4 | DAT_01d7264c
    FXCH ST4                            ; 004e50ba
    FISTP dword ptr [0x01d72650]        ; 004e50bc | DAT_01d72650
    FXCH ST3                            ; 004e50c2
    FISTP dword ptr [0x01d72654]        ; 004e50c4 | DAT_01d72654
    FXCH ST3                            ; 004e50ca
    FISTP dword ptr [0x01d72658]        ; 004e50cc | DAT_01d72658
    FXCH ST2                            ; 004e50d2
    FISTP dword ptr [0x01d7265c]        ; 004e50d4 | DAT_01d7265c
    FISTP dword ptr [0x01d72660]        ; 004e50da | DAT_01d72660
    FISTP dword ptr [0x01d72664]        ; 004e50e0 | DAT_01d72664
    MOV ESP,EBP                         ; 004e50e6
    POP EBP                             ; 004e50e8
    RET                                 ; 004e50e9

