; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004ccae0(void)
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
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0 at 004609c2
;   engine_matrix.c_buildRotationMatrix_FUN_004ccdc0 at 004cd0a4
;
; Referenced Globals:
;   undefined4 DAT_005881db
;   undefined4 DAT_005881e3
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   undefined4 DAT_01c03a04
;   undefined4 DAT_01c03a08
;   undefined4 DAT_01cc5118
;   undefined4 DAT_01cc511c
;   undefined4 DAT_01cc5120
;   undefined4 DAT_01cc5124
;   ... and 14 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ccae0
        ;   Label: engine_matrix.c_invertTransformMatrix_FUN_004ccae0
    MOV EBP,ESP                         ; 004ccae1
    SUB ESP,0x54                        ; 004ccae3
    AND ESP,0xfffffff8                  ; 004ccae6
    FILD dword ptr [0x01c039e8]         ; 004ccae9 | DAT_01c039e8
    FMUL double ptr [0x005881db]        ; 004ccaef | DAT_005881db
    FILD dword ptr [0x01c039ec]         ; 004ccaf5 | DAT_01c039ec
    FMUL double ptr [0x005881db]        ; 004ccafb | DAT_005881db
    FILD dword ptr [0x01c039f0]         ; 004ccb01 | DAT_01c039f0
    FMUL double ptr [0x005881db]        ; 004ccb07 | DAT_005881db
    FILD dword ptr [0x01c039f4]         ; 004ccb0d | DAT_01c039f4
    FMUL double ptr [0x005881db]        ; 004ccb13 | DAT_005881db
    FILD dword ptr [0x01c039f8]         ; 004ccb19 | DAT_01c039f8
    FMUL double ptr [0x005881db]        ; 004ccb1f | DAT_005881db
    FILD dword ptr [0x01c039fc]         ; 004ccb25 | DAT_01c039fc
    FMUL double ptr [0x005881db]        ; 004ccb2b | DAT_005881db
    FILD dword ptr [0x01c03a00]         ; 004ccb31 | DAT_01c03a00
    FMUL double ptr [0x005881db]        ; 004ccb37 | DAT_005881db
    FXCH ST6                            ; 004ccb3d
    FSTP float ptr [ESP + 0x48]         ; 004ccb3f
    FILD dword ptr [0x01c03a04]         ; 004ccb43 | DAT_01c03a04
    FMUL double ptr [0x005881db]        ; 004ccb49 | DAT_005881db
    FXCH ST2                            ; 004ccb4f
    FSTP float ptr [ESP + 0x3c]         ; 004ccb51
    FILD dword ptr [0x01c03a08]         ; 004ccb55 | DAT_01c03a08
    FMUL double ptr [0x005881db]        ; 004ccb5b | DAT_005881db
    FXCH                                ; 004ccb61
    FSTP float ptr [ESP + 0x34]         ; 004ccb63
    FLD float ptr [ESP + 0x3c]          ; 004ccb67
    FXCH                                ; 004ccb6b
    FSTP float ptr [ESP + 0x14]         ; 004ccb6d
    FMUL float ptr [ESP + 0x14]         ; 004ccb71
    FXCH                                ; 004ccb75
    FSTP float ptr [ESP + 0x40]         ; 004ccb77
    FLD float ptr [ESP + 0x34]          ; 004ccb7b
    FMUL float ptr [ESP + 0x40]         ; 004ccb7f
    FXCH ST4                            ; 004ccb83
    FST float ptr [ESP + 0x50]          ; 004ccb85
    FMUL float ptr [ESP + 0x14]         ; 004ccb89
    FXCH ST3                            ; 004ccb8d
    FSTP float ptr [ESP + 0x4c]         ; 004ccb8f
    FLD float ptr [ESP + 0x48]          ; 004ccb93
    FMUL float ptr [ESP + 0x14]         ; 004ccb97
    FLD float ptr [ESP + 0x4c]          ; 004ccb9b
    FMUL float ptr [ESP + 0x40]         ; 004ccb9f
    FXCH ST2                            ; 004ccba3
    FSTP float ptr [ESP + 0x18]         ; 004ccba5
    FXCH ST4                            ; 004ccba9
    FSUBR float ptr [ESP + 0x18]        ; 004ccbab
    FLD float ptr [ESP + 0x48]          ; 004ccbaf
    FXCH                                ; 004ccbb3
    FSTP float ptr [ESP + 0x2c]         ; 004ccbb5
    FMUL float ptr [ESP + 0x2c]         ; 004ccbb9
    FXCH ST2                            ; 004ccbbd
    FST float ptr [ESP + 0x44]          ; 004ccbbf
    FMUL float ptr [ESP + 0x14]         ; 004ccbc3
    FXCH ST5                            ; 004ccbc7
    FSTP float ptr [ESP + 0x38]         ; 004ccbc9
    FLD float ptr [ESP + 0x34]          ; 004ccbcd
    FMUL float ptr [ESP + 0x38]         ; 004ccbd1
    FLD float ptr [ESP + 0x4c]          ; 004ccbd5
    FMUL float ptr [ESP + 0x38]         ; 004ccbd9
    FXCH                                ; 004ccbdd
    FSUBP ST6,ST0                       ; 004ccbdf
    MOV EAX,[0x01c039e8]                ; 004ccbe1 | DAT_01c039e8
    FLD float ptr [ESP + 0x50]          ; 004ccbe6
    FMUL ST6                            ; 004ccbea
    MOV [0x01cc5140],EAX                ; 004ccbec | DAT_01cc5140
    FSUBP ST3,ST0                       ; 004ccbf1
    MOV EAX,[0x01c039ec]                ; 004ccbf3 | DAT_01c039ec
    FLD float ptr [ESP + 0x44]          ; 004ccbf8
    FMUL float ptr [ESP + 0x40]         ; 004ccbfc
    MOV [0x01cc5144],EAX                ; 004ccc00 | DAT_01cc5144
    MOV EAX,[0x01c039f0]                ; 004ccc05 | DAT_01c039f0
    FSTP float ptr [ESP + 0x18]         ; 004ccc0a
    FLD float ptr [ESP + 0x3c]          ; 004ccc0e
    FMUL float ptr [ESP + 0x38]         ; 004ccc12
    MOV [0x01cc5148],EAX                ; 004ccc16 | DAT_01cc5148
    FSUBR float ptr [ESP + 0x18]        ; 004ccc1b
    MOV EAX,[0x01c039f4]                ; 004ccc1f | DAT_01c039f4
    FSTP float ptr [ESP + 0x30]         ; 004ccc24
    FLD float ptr [ESP + 0x4c]          ; 004ccc28
    FMUL float ptr [ESP + 0x30]         ; 004ccc2c
    MOV [0x01cc514c],EAX                ; 004ccc30 | DAT_01cc514c
    FXCH ST2                            ; 004ccc35
    FSUBP ST4,ST0                       ; 004ccc37
    MOV EAX,[0x01c039f8]                ; 004ccc39 | DAT_01c039f8
    FSUBP ST4,ST0                       ; 004ccc3e
    MOV [0x01cc5150],EAX                ; 004ccc40 | DAT_01cc5150
    MOV EAX,[0x01c039fc]                ; 004ccc45 | DAT_01c039fc
    FXCH ST2                            ; 004ccc4a
    FCHS                                ; 004ccc4c
    MOV [0x01cc5154],EAX                ; 004ccc4e | DAT_01cc5154
    MOV EAX,[0x01c03a00]                ; 004ccc53 | DAT_01c03a00
    FXCH ST3                            ; 004ccc58
    FSTP float ptr [ESP + 0x28]         ; 004ccc5a
    MOV [0x01cc5158],EAX                ; 004ccc5e | DAT_01cc5158
    MOV EAX,[0x01c03a04]                ; 004ccc63 | DAT_01c03a04
    FXCH ST2                            ; 004ccc68
    FSTP float ptr [ESP + 0x24]         ; 004ccc6a
    MOV [0x01cc515c],EAX                ; 004ccc6e | DAT_01cc515c
    FXCH ST2                            ; 004ccc73
    FCHS                                ; 004ccc75
    FSTP float ptr [ESP + 0x20]         ; 004ccc77
    MOV EAX,[0x01c03a08]                ; 004ccc7b | DAT_01c03a08
    FADDP                               ; 004ccc80
    MOV [0x01cc5160],EAX                ; 004ccc82 | DAT_01cc5160
    FSTP float ptr [ESP]                ; 004ccc87
    FLD float ptr [ESP]                 ; 004ccc8a
    FDIVR double ptr [0x005881e3]       ; 004ccc8d | DAT_005881e3
    FLD float ptr [ESP + 0x48]          ; 004ccc93
    FLD ST0                             ; 004ccc97
    FMUL float ptr [ESP + 0x40]         ; 004ccc99
    FLD float ptr [ESP + 0x34]          ; 004ccc9d
    FLD float ptr [ESP + 0x50]          ; 004ccca1
    FMUL ST1                            ; 004ccca5
    FLD ST3                             ; 004ccca7
    FMULP ST2                           ; 004ccca9
    FXCH ST3                            ; 004cccab
    FMUL float ptr [ESP + 0x3c]         ; 004cccad
    FLD float ptr [ESP + 0x50]          ; 004cccb1
    FMUL float ptr [ESP + 0x38]         ; 004cccb5
    FLD float ptr [ESP + 0x4c]          ; 004cccb9
    FXCH                                ; 004cccbd
    FSUBP ST4,ST0                       ; 004cccbf
    FMUL float ptr [ESP + 0x3c]         ; 004cccc1
    FXCH ST3                            ; 004cccc5
    FCHS                                ; 004cccc7
    FSTP float ptr [ESP + 0x8]          ; 004cccc9
    FLD float ptr [ESP + 0x4c]          ; 004ccccd
    FMUL float ptr [ESP + 0x44]         ; 004cccd1
    FLD float ptr [ESP + 0x50]          ; 004cccd5
    FMUL float ptr [ESP + 0x44]         ; 004cccd9
    FXCH ST4                            ; 004cccdd
    FSUBP ST5,ST0                       ; 004cccdf
    FLD float ptr [ESP + 0x2c]          ; 004ccce1
    FXCH ST6                            ; 004ccce5
    FSTP float ptr [ESP]                ; 004ccce7
    FXCH ST5                            ; 004cccea
    FMUL float ptr [ESP]                ; 004cccec
    FLD float ptr [ESP + 0x24]          ; 004cccef
    FXCH ST6                            ; 004cccf3
    FSUBP ST3,ST0                       ; 004cccf5
    FXCH ST5                            ; 004cccf7
    FMUL float ptr [ESP]                ; 004cccf9
    FXCH ST2                            ; 004cccfc
    FCHS                                ; 004cccfe
    FXCH ST4                            ; 004ccd00
    FMUL float ptr [ESP]                ; 004ccd02
    FLD float ptr [ESP + 0x20]          ; 004ccd05
    FMUL float ptr [ESP]                ; 004ccd09
    FXCH ST4                            ; 004ccd0c
    FSUBP ST2,ST0                       ; 004ccd0e
    FXCH                                ; 004ccd10
    FSTP float ptr [ESP + 0x10]         ; 004ccd12
    FLD float ptr [ESP + 0x28]          ; 004ccd16
    FMUL float ptr [ESP]                ; 004ccd1a
    FXCH ST4                            ; 004ccd1d
    FMUL float ptr [ESP]                ; 004ccd1f
    FLD float ptr [ESP + 0x30]          ; 004ccd22
    FMUL float ptr [ESP]                ; 004ccd26
    FXCH ST6                            ; 004ccd29
    CALL crt_math.c_round_FUN_00563a30  ; 004ccd2b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [0x01cc5118]        ; 004ccd30 | DAT_01cc5118
    FLD float ptr [ESP + 0x8]           ; 004ccd36
    FMUL float ptr [ESP]                ; 004ccd3a
    FXCH ST3                            ; 004ccd3d
    CALL crt_math.c_round_FUN_00563a30  ; 004ccd3f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [0x01cc511c]        ; 004ccd44 | DAT_01cc511c
    FLD float ptr [ESP + 0x10]          ; 004ccd4a
    FMUL float ptr [ESP]                ; 004ccd4e
    FXCH ST2                            ; 004ccd51
    CALL crt_math.c_round_FUN_00563a30  ; 004ccd53
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST4                            ; 004ccd58
    CALL crt_math.c_round_FUN_00563a30  ; 004ccd5a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST5                            ; 004ccd5f
    CALL crt_math.c_round_FUN_00563a30  ; 004ccd61
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004ccd66
    CALL crt_math.c_round_FUN_00563a30  ; 004ccd68
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST6                            ; 004ccd6d
    CALL crt_math.c_round_FUN_00563a30  ; 004ccd6f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 004ccd74
    CALL crt_math.c_round_FUN_00563a30  ; 004ccd76
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 004ccd7b
    CALL crt_math.c_round_FUN_00563a30  ; 004ccd7d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST4                            ; 004ccd82
    FISTP dword ptr [0x01cc5120]        ; 004ccd84 | DAT_01cc5120
    FXCH ST4                            ; 004ccd8a
    FISTP dword ptr [0x01cc5124]        ; 004ccd8c | DAT_01cc5124
    FXCH ST3                            ; 004ccd92
    FISTP dword ptr [0x01cc5128]        ; 004ccd94 | DAT_01cc5128
    FXCH ST3                            ; 004ccd9a
    FISTP dword ptr [0x01cc512c]        ; 004ccd9c | DAT_01cc512c
    FXCH ST2                            ; 004ccda2
    FISTP dword ptr [0x01cc5130]        ; 004ccda4 | DAT_01cc5130
    FISTP dword ptr [0x01cc5134]        ; 004ccdaa | DAT_01cc5134
    FISTP dword ptr [0x01cc5138]        ; 004ccdb0 | DAT_01cc5138
    MOV ESP,EBP                         ; 004ccdb6
    POP EBP                             ; 004ccdb8
    RET                                 ; 004ccdb9

