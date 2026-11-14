; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_004eca10(CMatrix3x3f *rotation)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   rotation
;
; Referenced Globals:
;   undefined4 DAT_005c7e69
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
;   undefined4 DAT_01d72654
;   ... and 27 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b9b0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eca10
        ;   Label: engine_mini3d.cpp_setCameraMatrix_FUN_004eca10
    PUSH ESI                            ; 004eca11
    PUSH EDI                            ; 004eca12
    SUB ESP,0x60                        ; 004eca13
    MOV EBX,dword ptr [ESP + 0x70]      ; 004eca16
    PUSH EBX                            ; 004eca1a
    LEA ESI,[ESP + 0x4]                 ; 004eca1b
    CALL core_dirmat.cpp_FUN_0045b9b0   ; 004eca1f
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b9b0()
    FLD float ptr [0x01d76c54]          ; 004eca24 | DAT_01d76c54
    FLD float ptr [0x01d76c58]          ; 004eca2a | DAT_01d76c58
    FSUB float ptr [0x01d76c50]         ; 004eca30 | DAT_01d76c50
    ADD ESP,0x4                         ; 004eca36
    FLD1                                ; 004eca39
    FADDP                               ; 004eca3b
    FXCH                                ; 004eca3d
    FSUB float ptr [0x01d76c4c]         ; 004eca3f | DAT_01d76c4c
    FLD1                                ; 004eca45
    FADDP                               ; 004eca47
    FDIVRP                              ; 004eca49
    LEA EDI,[ESP + 0xc]                 ; 004eca4b
    MOV ESI,ESP                         ; 004eca4f
    MOVSD ES:EDI,ESI                    ; 004eca51
    MOVSD ES:EDI,ESI                    ; 004eca52
    MOVSD ES:EDI,ESI                    ; 004eca53
    MOV EAX,dword ptr [ESP + 0xc]       ; 004eca54
    MOV [0x01d76c9c],EAX                ; 004eca58 | DAT_01d76c9c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004eca5d
    FLD float ptr [0x01d76ca8]          ; 004eca61 | DAT_01d76ca8
    FLD ST0                             ; 004eca67
    MOV [0x01d76ca0],EAX                ; 004eca69 | DAT_01d76ca0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004eca6e
    FSTP float ptr [0x01d76cac]         ; 004eca72 | DAT_01d76cac
    MOV [0x01d76ca4],EAX                ; 004eca78 | DAT_01d76ca4
    MOV EAX,[0x01d76cfc]                ; 004eca7d | DAT_01d76cfc
    MOV EDX,dword ptr [EBX]             ; 004eca82
    MOV dword ptr [EAX],EDX             ; 004eca84
    MOV EDX,dword ptr [EBX + 0x4]       ; 004eca86
    MOV dword ptr [EAX + 0x4],EDX       ; 004eca89
    MOV EDX,dword ptr [EBX + 0x8]       ; 004eca8c
    MOV dword ptr [EAX + 0x8],EDX       ; 004eca8f
    MOV EDX,dword ptr [EBX + 0xc]       ; 004eca92
    MOV dword ptr [EAX + 0xc],EDX       ; 004eca95
    FLD float ptr [EAX + 0xc]           ; 004eca98
    FMUL float ptr [0x01d76cac]         ; 004eca9b | DAT_01d76cac
    FLD float ptr [0x01d76cac]          ; 004ecaa1 | DAT_01d76cac
    FLD1                                ; 004ecaa7
    MOV EDX,dword ptr [EBX + 0x10]      ; 004ecaa9
    MOV dword ptr [EAX + 0x10],EDX      ; 004ecaac
    MOV EDX,dword ptr [EBX + 0x14]      ; 004ecaaf
    MOV dword ptr [EAX + 0x14],EDX      ; 004ecab2
    MOV EDX,dword ptr [EBX + 0x18]      ; 004ecab5
    MOV dword ptr [EAX + 0x18],EDX      ; 004ecab8
    FDIVRP                              ; 004ecabb
    FLD float ptr [EAX + 0x18]          ; 004ecabd
    FMUL float ptr [0x01d76cac]         ; 004ecac0 | DAT_01d76cac
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004ecac6
    MOV dword ptr [EAX + 0x1c],EDX      ; 004ecac9
    MOV EDX,dword ptr [EBX + 0x20]      ; 004ecacc
    MOV dword ptr [EAX + 0x20],EDX      ; 004ecacf
    FXCH ST2                            ; 004ecad2
    FST float ptr [EAX + 0xc]           ; 004ecad4
    FMUL float ptr [EAX + 0x20]         ; 004ecad7
    FLD float ptr [EAX + 0x14]          ; 004ecada
    FXCH ST3                            ; 004ecadd
    FSTP float ptr [EAX + 0x18]         ; 004ecadf
    FXCH ST2                            ; 004ecae2
    FMUL float ptr [EAX + 0x18]         ; 004ecae4
    FXCH ST3                            ; 004ecae7
    FMULP ST4                           ; 004ecae9
    FLD float ptr [EAX + 0x4]           ; 004ecaeb
    FXCH ST4                            ; 004ecaee
    FSTP float ptr [0x01d76cb0]         ; 004ecaf0 | DAT_01d76cb0
    FXCH ST3                            ; 004ecaf6
    FMUL float ptr [0x01d76cb0]         ; 004ecaf8 | DAT_01d76cb0
    FLD float ptr [EAX + 0x10]          ; 004ecafe
    FMUL float ptr [0x01d76cb0]         ; 004ecb01 | DAT_01d76cb0
    FLD float ptr [EAX + 0x1c]          ; 004ecb07
    FXCH ST3                            ; 004ecb0a
    FSTP float ptr [ESP + 0x58]         ; 004ecb0c
    FXCH ST3                            ; 004ecb10
    FSTP float ptr [ESP + 0x20]         ; 004ecb12
    FLD float ptr [ESP + 0x58]          ; 004ecb16
    FSUB float ptr [ESP + 0x20]         ; 004ecb1a
    FXCH ST2                            ; 004ecb1e
    FMUL float ptr [0x01d76cb0]         ; 004ecb20 | DAT_01d76cb0
    FXCH ST2                            ; 004ecb26
    FSTP float ptr [ESP + 0x2c]         ; 004ecb28
    FLD float ptr [0x01d76cb0]          ; 004ecb2c | DAT_01d76cb0
    FLD1                                ; 004ecb32
    FXCH ST2                            ; 004ecb34
    FST float ptr [EAX + 0x4]           ; 004ecb36
    FMUL float ptr [ESP + 0x2c]         ; 004ecb39
    FXCH ST2                            ; 004ecb3d
    FDIVRP                              ; 004ecb3f
    FXCH ST3                            ; 004ecb41
    FST float ptr [EAX + 0x10]          ; 004ecb43
    FMUL float ptr [EAX + 0x20]         ; 004ecb46
    FXCH ST2                            ; 004ecb49
    FSTP float ptr [EAX + 0x1c]         ; 004ecb4b
    FXCH                                ; 004ecb4e
    FSTP float ptr [ESP + 0x54]         ; 004ecb50
    FLD float ptr [EAX + 0x14]          ; 004ecb54
    FMUL float ptr [EAX + 0x1c]         ; 004ecb57
    FLD float ptr [EAX]                 ; 004ecb5a
    FMUL float ptr [0x01d76cac]         ; 004ecb5c | DAT_01d76cac
    FXCH                                ; 004ecb62
    FSTP float ptr [ESP + 0x5c]         ; 004ecb64
    FLD float ptr [ESP + 0x54]          ; 004ecb68
    FSUB float ptr [ESP + 0x5c]         ; 004ecb6c
    FXCH                                ; 004ecb70
    FSTP float ptr [EAX]                ; 004ecb72
    FSTP float ptr [ESP + 0x30]         ; 004ecb74
    FLD float ptr [EAX]                 ; 004ecb78
    FMUL float ptr [ESP + 0x30]         ; 004ecb7a
    FSUBRP                              ; 004ecb7e
    FLD float ptr [EAX + 0xc]           ; 004ecb80
    FMUL float ptr [EAX + 0x1c]         ; 004ecb83
    FSTP float ptr [ESP + 0x1c]         ; 004ecb86
    FLD float ptr [EAX + 0x10]          ; 004ecb8a
    FMUL float ptr [EAX + 0x18]         ; 004ecb8d
    FSTP float ptr [ESP + 0x24]         ; 004ecb90
    FLD float ptr [ESP + 0x1c]          ; 004ecb94
    FSUB float ptr [ESP + 0x24]         ; 004ecb98
    FSTP float ptr [ESP + 0x28]         ; 004ecb9c
    FLD float ptr [EAX + 0x8]           ; 004ecba0
    FMUL float ptr [ESP + 0x28]         ; 004ecba3
    FXCH ST3                            ; 004ecba7
    FSTP float ptr [0x01d76cb4]         ; 004ecba9 | DAT_01d76cb4
    FADDP ST2,ST0                       ; 004ecbaf
    FSTP float ptr [0x01d76cb8]         ; 004ecbb1 | DAT_01d76cb8
    FSTP float ptr [ESP + 0x4c]         ; 004ecbb7
    FLD float ptr [EAX]                 ; 004ecbbb
    FMUL float ptr [0x005c7e69]         ; 004ecbbd | DAT_005c7e69
    FLD float ptr [EAX + 0x4]           ; 004ecbc3
    FMUL float ptr [0x005c7e69]         ; 004ecbc6 | DAT_005c7e69
    FLD float ptr [EAX + 0x8]           ; 004ecbcc
    FMUL float ptr [0x005c7e69]         ; 004ecbcf | DAT_005c7e69
    FLD float ptr [EAX + 0x4]           ; 004ecbd5
    FMUL float ptr [EAX + 0x20]         ; 004ecbd8
    FLD float ptr [EAX + 0x8]           ; 004ecbdb
    FMUL float ptr [EAX + 0x18]         ; 004ecbde
    FLD float ptr [EAX + 0x8]           ; 004ecbe1
    FMUL float ptr [EAX + 0x1c]         ; 004ecbe4
    FLD float ptr [ESP + 0x2c]          ; 004ecbe7
    FCHS                                ; 004ecbeb
    FSTP float ptr [ESP + 0x3c]         ; 004ecbed
    FLD float ptr [EAX]                 ; 004ecbf1
    FXCH                                ; 004ecbf3
    FSUBP ST3,ST0                       ; 004ecbf5
    FMUL float ptr [EAX + 0x20]         ; 004ecbf7
    FXCH ST2                            ; 004ecbfa
    FCHS                                ; 004ecbfc
    FSTP float ptr [ESP + 0x34]         ; 004ecbfe
    FLD1                                ; 004ecc02
    FLD float ptr [EAX + 0x4]           ; 004ecc04
    FMUL float ptr [EAX + 0x18]         ; 004ecc07
    FXCH                                ; 004ecc0a
    FDIV float ptr [ESP + 0x4c]         ; 004ecc0c
    FXCH ST3                            ; 004ecc10
    FSUBRP ST2,ST0                      ; 004ecc12
    FXCH                                ; 004ecc14
    FSTP float ptr [ESP + 0x40]         ; 004ecc16
    FLD float ptr [EAX]                 ; 004ecc1a
    FMUL float ptr [EAX + 0x1c]         ; 004ecc1c
    FLD float ptr [EAX + 0x4]           ; 004ecc1f
    FXCH                                ; 004ecc22
    FSUBRP ST2,ST0                      ; 004ecc24
    FMUL float ptr [EAX + 0x14]         ; 004ecc26
    FXCH                                ; 004ecc29
    FCHS                                ; 004ecc2b
    FSTP float ptr [ESP + 0x48]         ; 004ecc2d
    FLD float ptr [EAX + 0x8]           ; 004ecc31
    FMUL float ptr [EAX + 0x10]         ; 004ecc34
    FLD float ptr [EAX + 0x8]           ; 004ecc37
    FMUL float ptr [EAX + 0xc]          ; 004ecc3a
    FXCH                                ; 004ecc3d
    FSUBP ST2,ST0                       ; 004ecc3f
    FXCH                                ; 004ecc41
    FSTP float ptr [ESP + 0x38]         ; 004ecc43
    FLD float ptr [EAX]                 ; 004ecc47
    FMUL float ptr [EAX + 0x14]         ; 004ecc49
    FLD float ptr [EAX + 0x4]           ; 004ecc4c
    FXCH                                ; 004ecc4f
    FSUBRP ST2,ST0                      ; 004ecc51
    FMUL float ptr [EAX + 0xc]          ; 004ecc53
    FXCH                                ; 004ecc56
    FCHS                                ; 004ecc58
    FSTP float ptr [ESP + 0x44]         ; 004ecc5a
    FLD float ptr [EAX]                 ; 004ecc5e
    FMUL float ptr [EAX + 0x10]         ; 004ecc60
    FLD float ptr [EAX + 0xc]           ; 004ecc63
    FXCH                                ; 004ecc66
    FSUBRP ST2,ST0                      ; 004ecc68
    FMUL float ptr [0x005c7e69]         ; 004ecc6a | DAT_005c7e69
    FXCH                                ; 004ecc70
    FSTP float ptr [ESP + 0x18]         ; 004ecc72
    FLD float ptr [EAX + 0x10]          ; 004ecc76
    FMUL float ptr [0x005c7e69]         ; 004ecc79 | DAT_005c7e69
    FLD float ptr [ESP + 0x30]          ; 004ecc7f
    FXCH ST3                            ; 004ecc83
    FSTP float ptr [ESP + 0x4c]         ; 004ecc85
    FXCH ST2                            ; 004ecc89
    FMUL float ptr [ESP + 0x4c]         ; 004ecc8b
    FLD float ptr [ESP + 0x34]          ; 004ecc8f
    FMUL float ptr [ESP + 0x4c]         ; 004ecc93
    FXCH                                ; 004ecc97
    FSTP float ptr [0x01d76c6c]         ; 004ecc99 | DAT_01d76c6c
    FLD float ptr [ESP + 0x38]          ; 004ecc9f
    FMUL float ptr [ESP + 0x4c]         ; 004ecca3
    FXCH                                ; 004ecca7
    FSTP float ptr [0x01d76c70]         ; 004ecca9 | DAT_01d76c70
    FLD float ptr [ESP + 0x3c]          ; 004eccaf
    FMUL float ptr [ESP + 0x4c]         ; 004eccb3
    FXCH                                ; 004eccb7
    FSTP float ptr [0x01d76c74]         ; 004eccb9 | DAT_01d76c74
    FLD float ptr [ESP + 0x40]          ; 004eccbf
    FMUL float ptr [ESP + 0x4c]         ; 004eccc3
    FXCH                                ; 004eccc7
    FSTP float ptr [0x01d76c78]         ; 004eccc9 | DAT_01d76c78
    FLD float ptr [ESP + 0x44]          ; 004ecccf
    FMUL float ptr [ESP + 0x4c]         ; 004eccd3
    FXCH                                ; 004eccd7
    FSTP float ptr [0x01d76c7c]         ; 004eccd9 | DAT_01d76c7c
    FLD float ptr [ESP + 0x28]          ; 004eccdf
    FMUL float ptr [ESP + 0x4c]         ; 004ecce3
    FXCH                                ; 004ecce7
    FSTP float ptr [0x01d76c80]         ; 004ecce9 | DAT_01d76c80
    FLD float ptr [ESP + 0x48]          ; 004eccef
    FMUL float ptr [ESP + 0x4c]         ; 004eccf3
    FXCH                                ; 004eccf7
    FSTP float ptr [0x01d76c84]         ; 004eccf9 | DAT_01d76c84
    FLD float ptr [ESP + 0x18]          ; 004eccff
    FMUL float ptr [ESP + 0x4c]         ; 004ecd03
    FXCH                                ; 004ecd07
    FSTP float ptr [0x01d76c88]         ; 004ecd09 | DAT_01d76c88
    FLD float ptr [EAX + 0x14]          ; 004ecd0f
    FMUL float ptr [0x005c7e69]         ; 004ecd12 | DAT_005c7e69
    FXCH                                ; 004ecd18
    FSTP float ptr [0x01d76c8c]         ; 004ecd1a | DAT_01d76c8c
    FLD float ptr [EAX + 0x18]          ; 004ecd20
    MOV EDX,0x1                         ; 004ecd23
    FMUL float ptr [0x005c7e69]         ; 004ecd28 | DAT_005c7e69
    MOV dword ptr [0x01d7977c],EDX      ; 004ecd2e | DAT_01d7977c
    FXCH ST6                            ; 004ecd34
    CALL crt_math.c_round_FUN_005a3120  ; 004ecd36
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e2fc]        ; 004ecd3b | DAT_01c6e2fc
    FLD float ptr [EAX + 0x1c]          ; 004ecd41
    FMUL float ptr [0x005c7e69]         ; 004ecd44 | DAT_005c7e69
    FXCH ST5                            ; 004ecd4a
    CALL crt_math.c_round_FUN_005a3120  ; 004ecd4c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e300]        ; 004ecd51 | DAT_01c6e300
    FLD float ptr [EAX + 0x20]          ; 004ecd57
    FMUL float ptr [0x005c7e69]         ; 004ecd5a | DAT_005c7e69
    FXCH ST4                            ; 004ecd60
    CALL crt_math.c_round_FUN_005a3120  ; 004ecd62
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e304]        ; 004ecd67 | DAT_01c6e304
    FLD float ptr [0x01d76c6c]          ; 004ecd6d | DAT_01d76c6c
    FMUL float ptr [0x005c7e69]         ; 004ecd73 | DAT_005c7e69
    FXCH ST2                            ; 004ecd79
    CALL crt_math.c_round_FUN_005a3120  ; 004ecd7b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e308]        ; 004ecd80 | DAT_01c6e308
    FLD float ptr [0x01d76c70]          ; 004ecd86 | DAT_01d76c70
    FMUL float ptr [0x005c7e69]         ; 004ecd8c | DAT_005c7e69
    FXCH ST3                            ; 004ecd92
    CALL crt_math.c_round_FUN_005a3120  ; 004ecd94
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e30c]        ; 004ecd99 | DAT_01c6e30c
    FLD float ptr [0x01d76c74]          ; 004ecd9f | DAT_01d76c74
    FMUL float ptr [0x005c7e69]         ; 004ecda5 | DAT_005c7e69
    FXCH                                ; 004ecdab
    CALL crt_math.c_round_FUN_005a3120  ; 004ecdad
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e310]        ; 004ecdb2 | DAT_01c6e310
    FLD float ptr [0x01d76c78]          ; 004ecdb8 | DAT_01d76c78
    FMUL float ptr [0x005c7e69]         ; 004ecdbe | DAT_005c7e69
    FXCH ST6                            ; 004ecdc4
    CALL crt_math.c_round_FUN_005a3120  ; 004ecdc6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e314]        ; 004ecdcb | DAT_01c6e314
    FLD float ptr [0x01d76c7c]          ; 004ecdd1 | DAT_01d76c7c
    FMUL float ptr [0x005c7e69]         ; 004ecdd7 | DAT_005c7e69
    FXCH ST5                            ; 004ecddd
    CALL crt_math.c_round_FUN_005a3120  ; 004ecddf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e318]        ; 004ecde4 | DAT_01c6e318
    FLD float ptr [0x01d76c80]          ; 004ecdea | DAT_01d76c80
    FMUL float ptr [0x005c7e69]         ; 004ecdf0 | DAT_005c7e69
    FXCH ST4                            ; 004ecdf6
    CALL crt_math.c_round_FUN_005a3120  ; 004ecdf8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e31c]        ; 004ecdfd | DAT_01c6e31c
    FLD float ptr [0x01d76c84]          ; 004ece03 | DAT_01d76c84
    FMUL float ptr [0x005c7e69]         ; 004ece09 | DAT_005c7e69
    FXCH ST2                            ; 004ece0f
    CALL crt_math.c_round_FUN_005a3120  ; 004ece11
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01d72644]        ; 004ece16 | DAT_01d72644
    FLD float ptr [0x01d76c88]          ; 004ece1c | DAT_01d76c88
    FMUL float ptr [0x005c7e69]         ; 004ece22 | DAT_005c7e69
    FXCH ST3                            ; 004ece28
    CALL crt_math.c_round_FUN_005a3120  ; 004ece2a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01d72648]        ; 004ece2f | DAT_01d72648
    FLD float ptr [0x01d76c8c]          ; 004ece35 | DAT_01d76c8c
    FMUL float ptr [0x005c7e69]         ; 004ece3b | DAT_005c7e69
    FXCH                                ; 004ece41
    CALL crt_math.c_round_FUN_005a3120  ; 004ece43
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST6                            ; 004ece48
    CALL crt_math.c_round_FUN_005a3120  ; 004ece4a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST5                            ; 004ece4f
    CALL crt_math.c_round_FUN_005a3120  ; 004ece51
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST4                            ; 004ece56
    CALL crt_math.c_round_FUN_005a3120  ; 004ece58
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 004ece5d
    CALL crt_math.c_round_FUN_005a3120  ; 004ece5f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 004ece64
    CALL crt_math.c_round_FUN_005a3120  ; 004ece66
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004ece6b
    CALL crt_math.c_round_FUN_005a3120  ; 004ece6d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST6                            ; 004ece72
    FISTP dword ptr [0x01d7264c]        ; 004ece74 | DAT_01d7264c
    FXCH ST4                            ; 004ece7a
    FISTP dword ptr [0x01d72650]        ; 004ece7c | DAT_01d72650
    FXCH ST2                            ; 004ece82
    FISTP dword ptr [0x01d72654]        ; 004ece84 | DAT_01d72654
    FXCH                                ; 004ece8a
    FISTP dword ptr [0x01d72658]        ; 004ece8c | DAT_01d72658
    FISTP dword ptr [0x01d7265c]        ; 004ece92 | DAT_01d7265c
    FISTP dword ptr [0x01d72660]        ; 004ece98 | DAT_01d72660
    FISTP dword ptr [0x01d72664]        ; 004ece9e | DAT_01d72664
    ADD ESP,0x60                        ; 004ecea4
    POP EDI                             ; 004ecea7
    POP ESI                             ; 004ecea8
    POP EBX                             ; 004ecea9
    RET                                 ; 004eceaa

