; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_FUN_004ad950(CFlies *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c1c41
;   undefined4 DAT_005c1c49
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_flies.cpp_FUN_004ae280
;   core_flies.cpp_FUN_004ae380
;   crt_math.c_floor_FUN_005a3600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad950
        ;   Label: core_flies.cpp_FUN_004ad950
    PUSH ESI                            ; 004ad951
    PUSH EDI                            ; 004ad952
    PUSH EBP                            ; 004ad953
    MOV EBP,ESP                         ; 004ad954
    SUB ESP,0x78                        ; 004ad956
    AND ESP,0xfffffff8                  ; 004ad959
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ad95c
    CMP dword ptr [EAX + 0x2a1c],0x0    ; 004ad95f
    JZ 0x004adbe1                       ; 004ad966
        ;   XREF to: 004adbe1 (CONDITIONAL_JUMP)  ; LAB_004adbe1
    MOV ECX,dword ptr [EAX + 0x2a08]    ; 004ad96c
    TEST ECX,ECX                        ; 004ad972
    JZ 0x004adb44                       ; 004ad974
        ;   XREF to: 004adb44 (CONDITIONAL_JUMP)  ; LAB_004adb44
    MOV EBX,dword ptr [ECX + 0x70]      ; 004ad97a
    MOV EDX,ECX                         ; 004ad97d
    CMP EBX,0x1                         ; 004ad97f
    JNZ 0x004adbe8                      ; 004ad982
        ;   XREF to: 004adbe8 (CONDITIONAL_JUMP)  ; LAB_004adbe8
    FLD float ptr [EDX + 0x20]          ; 004ad988
    FLD float ptr [EDX + 0x24]          ; 004ad98b
    FLD float ptr [EDX + 0x28]          ; 004ad98e
    LEA EDI,[ESP + 0x8]                 ; 004ad991
    LEA ESI,[ESP + 0x44]                ; 004ad995
    FXCH ST2                            ; 004ad999
    FSUB float ptr [EAX + 0x20]         ; 004ad99b
    FXCH                                ; 004ad99e
    FSUB float ptr [EAX + 0x24]         ; 004ad9a0
    FXCH ST2                            ; 004ad9a3
    FSUB float ptr [EAX + 0x28]         ; 004ad9a5
    FXCH                                ; 004ad9a8
    FSTP float ptr [ESP + 0x44]         ; 004ad9aa
    FXCH                                ; 004ad9ae
    FSTP float ptr [ESP + 0x48]         ; 004ad9b0
    FSTP float ptr [ESP + 0x4c]         ; 004ad9b4
    MOVSD ES:EDI,ESI                    ; 004ad9b8
    MOVSD ES:EDI,ESI                    ; 004ad9b9
    MOVSD ES:EDI,ESI                    ; 004ad9ba
    FLD float ptr [ESP + 0xc]           ; 004ad9bb
    FMUL ST0                            ; 004ad9bf
    FLD float ptr [ESP + 0x8]           ; 004ad9c1
    FMUL ST0                            ; 004ad9c5
    FADDP                               ; 004ad9c7
    FLD float ptr [ESP + 0x10]          ; 004ad9c9
    FMUL ST0                            ; 004ad9cd
    FADDP                               ; 004ad9cf
    FSQRT                               ; 004ad9d1
    FLDZ                                ; 004ad9d3
    FCOMPP                              ; 004ad9d5
    FNSTSW AX                           ; 004ad9d7
    SAHF                                ; 004ad9d9
    JNC 0x004adb20                      ; 004ad9da
        ;   XREF to: 004adb20 (CONDITIONAL_JUMP)  ; LAB_004adb20
    LEA EAX,[ESP + 0x8]                 ; 004ad9e0
    PUSH EAX                            ; 004ad9e4
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ad9e5
    PUSH ESI                            ; 004ad9e8
    LEA ESI,[ESP + 0x58]                ; 004ad9e9
    LEA EDI,[ESP + 0x28]                ; 004ad9ed
    CALL core_actor.cpp_FUN_00408b40    ; 004ad9f1
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x58]                ; 004ad9f6
    ADD ESP,0x8                         ; 004ad9fa
    MOVSD ES:EDI,ESI                    ; 004ad9fd
    MOVSD ES:EDI,ESI                    ; 004ad9fe
    MOVSD ES:EDI,ESI                    ; 004ad9ff
    FLD float ptr [0x005c1c41]          ; 004ada00 | DAT_005c1c41
    FLD float ptr [ESP + 0x20]          ; 004ada06
    FMUL ST1                            ; 004ada0a
    FLD float ptr [ESP + 0x24]          ; 004ada0c
    FMUL ST2                            ; 004ada10
    FLD float ptr [ESP + 0x28]          ; 004ada12
    FMULP ST3                           ; 004ada16
    LEA EAX,[ESP + 0x14]                ; 004ada18
    LEA EDX,[ESP + 0x8]                 ; 004ada1c
    LEA EDI,[ESP + 0x14]                ; 004ada20
    LEA ESI,[ESP + 0x5c]                ; 004ada24
    FXCH                                ; 004ada28
    FSTP float ptr [ESP + 0x5c]         ; 004ada2a
    FSTP float ptr [ESP + 0x60]         ; 004ada2e
    FSTP float ptr [ESP + 0x64]         ; 004ada32
    MOVSD ES:EDI,ESI                    ; 004ada36
    MOVSD ES:EDI,ESI                    ; 004ada37
    MOVSD ES:EDI,ESI                    ; 004ada38
    CMP EDX,EAX                         ; 004ada39
    JZ 0x004ada55                       ; 004ada3b
        ;   XREF to: 004ada55 (CONDITIONAL_JUMP)  ; LAB_004ada55
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ada3d
    MOV dword ptr [ESP + 0x8],EAX       ; 004ada41
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ada45
    MOV dword ptr [ESP + 0xc],EAX       ; 004ada49
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ada4d
    MOV dword ptr [ESP + 0x10],EAX      ; 004ada51
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ada55
        ;   Label: LAB_004ada55
    MOV EDI,dword ptr [EAX + 0x164]     ; 004ada58
    XOR EBX,EBX                         ; 004ada5e
    TEST EDI,EDI                        ; 004ada60
    JLE 0x004adb20                      ; 004ada62
        ;   XREF to: 004adb20 (CONDITIONAL_JUMP)  ; LAB_004adb20
    LEA EDX,[EAX + 0x184]               ; 004ada68
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ada6e
    ADD EAX,0x16c                       ; 004ada71
    FLD float ptr [EAX]                 ; 004ada76
        ;   Label: LAB_004ada76
    FSUB float ptr [ESP + 0x8]          ; 004ada78
    FLD float ptr [EAX + 0x4]           ; 004ada7c
    FXCH                                ; 004ada7f
    FSTP float ptr [EAX]                ; 004ada81
    FSUB float ptr [ESP + 0xc]          ; 004ada83
    FLD float ptr [EAX + 0x8]           ; 004ada87
    FXCH                                ; 004ada8a
    FSTP float ptr [EAX + 0x4]          ; 004ada8c
    FSUB float ptr [ESP + 0x10]         ; 004ada8f
    FLD float ptr [EAX + 0xc]           ; 004ada93
    FXCH                                ; 004ada96
    FSTP float ptr [EAX + 0x8]          ; 004ada98
    FSUB float ptr [ESP + 0x8]          ; 004ada9b
    FLD float ptr [EAX + 0x10]          ; 004ada9f
    FXCH                                ; 004adaa2
    FSTP float ptr [EAX + 0xc]          ; 004adaa4
    FSUB float ptr [ESP + 0xc]          ; 004adaa7
    FLD float ptr [EAX + 0x14]          ; 004adaab
    FXCH                                ; 004adaae
    FSTP float ptr [EAX + 0x10]         ; 004adab0
    FSUB float ptr [ESP + 0x10]         ; 004adab3
    ADD EDX,0x34                        ; 004adab7
    FSTP float ptr [EAX + 0x14]         ; 004adaba
    FLD float ptr [EDX + -0x34]         ; 004adabd
    FSUB float ptr [ESP + 0x8]          ; 004adac0
    FLD float ptr [EDX + -0x30]         ; 004adac4
    FXCH                                ; 004adac7
    FSTP float ptr [EDX + -0x34]        ; 004adac9
    FSUB float ptr [ESP + 0xc]          ; 004adacc
    FLD float ptr [EDX + -0x2c]         ; 004adad0
    FXCH                                ; 004adad3
    FSTP float ptr [EDX + -0x30]        ; 004adad5
    FSUB float ptr [ESP + 0x10]         ; 004adad8
    FLD float ptr [EDX + -0x28]         ; 004adadc
    FXCH                                ; 004adadf
    FSTP float ptr [EDX + -0x2c]        ; 004adae1
    FSUB float ptr [ESP + 0x8]          ; 004adae4
    FLD float ptr [EDX + -0x24]         ; 004adae8
    FXCH                                ; 004adaeb
    FSTP float ptr [EDX + -0x28]        ; 004adaed
    FSUB float ptr [ESP + 0xc]          ; 004adaf0
    FLD float ptr [EDX + -0x20]         ; 004adaf4
    FXCH                                ; 004adaf7
    FSTP float ptr [EDX + -0x24]        ; 004adaf9
    FSUB float ptr [ESP + 0x10]         ; 004adafc
    INC EBX                             ; 004adb00
    FSTP float ptr [EDX + -0x20]        ; 004adb01
    MOV ECX,dword ptr [ESI + 0x164]     ; 004adb04
    ADD EAX,0x34                        ; 004adb0a
    CMP EBX,ECX                         ; 004adb0d
    JL 0x004ada76                       ; 004adb0f
        ;   XREF to: 004ada76 (CONDITIONAL_JUMP)  ; LAB_004ada76
    LEA EAX,[EAX]                       ; 004adb15
    LEA EDX,[EDX]                       ; 004adb1b
    MOV EBX,EBX                         ; 004adb1e
    MOV EDX,dword ptr [EBP + 0x14]      ; 004adb20
        ;   Label: LAB_004adb20
    MOV EDX,dword ptr [EDX + 0x2a08]    ; 004adb23
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adb29
    MOV ECX,dword ptr [EDX + 0x20]      ; 004adb2c
    MOV dword ptr [EAX + 0x20],ECX      ; 004adb2f
    MOV ECX,dword ptr [EDX + 0x24]      ; 004adb32
    MOV dword ptr [EAX + 0x24],ECX      ; 004adb35
    MOV ECX,dword ptr [EDX + 0x28]      ; 004adb38
    MOV dword ptr [EAX + 0x28],ECX      ; 004adb3b
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004adb3e
    MOV dword ptr [EAX + 0x2c],EDX      ; 004adb41
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adb44
        ;   Label: LAB_004adb44
    CMP dword ptr [EAX + 0x2a0c],0x0    ; 004adb47
    JLE 0x004adb87                      ; 004adb4e
        ;   XREF to: 004adb87 (CONDITIONAL_JUMP)  ; LAB_004adb87
    FLD float ptr [EAX + 0x2a10]        ; 004adb50
    FSUB float ptr [EBP + 0x18]         ; 004adb56
    FST float ptr [EAX + 0x2a10]        ; 004adb59
    FLDZ                                ; 004adb5f
    FCOMPP                              ; 004adb61
    FNSTSW AX                           ; 004adb63
    SAHF                                ; 004adb65
    JC 0x004adb87                       ; 004adb66
        ;   XREF to: 004adb87 (CONDITIONAL_JUMP)  ; LAB_004adb87
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adb68
    MOV ESI,dword ptr [EAX + 0x164]     ; 004adb6b
    CMP ESI,0xc8                        ; 004adb71
    JL 0x004adbf1                       ; 004adb77
        ;   XREF to: 004adbf1 (CONDITIONAL_JUMP)  ; LAB_004adbf1
    MOV dword ptr [EAX + 0x2a0c],0x0    ; 004adb7d
    FLD float ptr [EBP + 0x18]          ; 004adb87
        ;   Label: LAB_004adb87
    FLD ST0                             ; 004adb8a
    FMUL double ptr [0x005c1c49]        ; 004adb8c | DAT_005c1c49
    XOR EBX,EBX                         ; 004adb92
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adb94
    MOV dword ptr [ESP + 0x70],EBX      ; 004adb97
    MOV ESI,dword ptr [EAX + 0x164]     ; 004adb9b
    FSTP ST1                            ; 004adba1
    FSTP float ptr [EBP + 0x18]         ; 004adba3
    TEST ESI,ESI                        ; 004adba6
    JLE 0x004adbe1                      ; 004adba8
        ;   XREF to: 004adbe1 (CONDITIONAL_JUMP)  ; LAB_004adbe1
    LEA EBX,[EAX + 0x168]               ; 004adbaa
    FLD1                                ; 004adbb0
        ;   Label: LAB_004adbb0
    FLD float ptr [EBX]                 ; 004adbb2
    FADD float ptr [EBP + 0x18]         ; 004adbb4
    MOV dword ptr [ESP + 0x74],EBX      ; 004adbb7
    FST float ptr [EBX]                 ; 004adbbb
    FSTP double ptr [ESP]               ; 004adbbd
    FCOMP double ptr [ESP]              ; 004adbc0
    FNSTSW AX                           ; 004adbc3
    SAHF                                ; 004adbc5
    JBE 0x004adc29                      ; 004adbc6
        ;   XREF to: 004adc29 (CONDITIONAL_JUMP)  ; LAB_004adc29
    MOV EDI,dword ptr [ESP + 0x70]      ; 004adbc8
        ;   Label: LAB_004adbc8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004adbcc
    ADD EBX,0x34                        ; 004adbcf
    INC EDI                             ; 004adbd2
    MOV ECX,dword ptr [EDX + 0x164]     ; 004adbd3
    MOV dword ptr [ESP + 0x70],EDI      ; 004adbd9
    CMP EDI,ECX                         ; 004adbdd
    JL 0x004adbb0                       ; 004adbdf
        ;   XREF to: 004adbb0 (CONDITIONAL_JUMP)  ; LAB_004adbb0
    MOV ESP,EBP                         ; 004adbe1
        ;   Label: LAB_004adbe1
    POP EBP                             ; 004adbe3
    POP EDI                             ; 004adbe4
    POP ESI                             ; 004adbe5
    POP EBX                             ; 004adbe6
    RET                                 ; 004adbe7
    MOV dword ptr [EAX + 0x70],0x2      ; 004adbe8
        ;   Label: LAB_004adbe8
    JMP 0x004adbe1                      ; 004adbef
        ;   XREF to: 004adbe1 (UNCONDITIONAL_JUMP)  ; LAB_004adbe1
    PUSH ESI                            ; 004adbf1
        ;   Label: LAB_004adbf1
    PUSH EAX                            ; 004adbf2
    CALL core_flies.cpp_FUN_004ae280    ; 004adbf3
        ;   XREF to: 004ae280 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_FUN_004ae280(CFlies * this_ptr, int fly_index)
    ADD ESP,0x8                         ; 004adbf8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adbfb
    MOV EDX,dword ptr [EAX + 0x164]     ; 004adbfe
    FLD float ptr [EAX + 0x2a14]        ; 004adc04
    INC EDX                             ; 004adc0a
    MOV ECX,dword ptr [EAX + 0x2a0c]    ; 004adc0b
    MOV dword ptr [EAX + 0x164],EDX     ; 004adc11
    DEC ECX                             ; 004adc17
    FSTP float ptr [EAX + 0x2a10]       ; 004adc18
    MOV dword ptr [EAX + 0x2a0c],ECX    ; 004adc1e
    JMP 0x004adb87                      ; 004adc24
        ;   XREF to: 004adb87 (UNCONDITIONAL_JUMP)  ; LAB_004adb87
    MOV ESI,dword ptr [ESP + 0x4]       ; 004adc29
        ;   Label: LAB_004adc29
    PUSH ESI                            ; 004adc2d
    MOV EDI,dword ptr [ESP + 0x4]       ; 004adc2e
    PUSH EDI                            ; 004adc32
    CALL crt_math.c_floor_FUN_005a3600  ; 004adc33
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x70],EAX      ; 004adc38
    MOV dword ptr [ESP + 0x74],EDX      ; 004adc3c
    FLD double ptr [ESP + 0x70]         ; 004adc40
    LEA EDX,[EBX + 0x4]                 ; 004adc44
    ADD ESP,0x8                         ; 004adc47
    FLD float ptr [EBX]                 ; 004adc4a
    FXCH                                ; 004adc4c
    FSUBR ST0,ST1                       ; 004adc4e
    LEA EAX,[EBX + 0x10]                ; 004adc50
    FSTP ST1                            ; 004adc53
    FSTP float ptr [EBX]                ; 004adc55
    CMP EDX,EAX                         ; 004adc57
    JZ 0x004adc6b                       ; 004adc59
        ;   XREF to: 004adc6b (CONDITIONAL_JUMP)  ; LAB_004adc6b
    MOV ECX,dword ptr [EAX]             ; 004adc5b
    MOV dword ptr [EDX],ECX             ; 004adc5d
    MOV ECX,dword ptr [EAX + 0x4]       ; 004adc5f
    MOV dword ptr [EDX + 0x4],ECX       ; 004adc62
    MOV ECX,dword ptr [EAX + 0x8]       ; 004adc65
    MOV dword ptr [EDX + 0x8],ECX       ; 004adc68
    MOV EDX,dword ptr [ESP + 0x74]      ; 004adc6b
        ;   Label: LAB_004adc6b
    MOV EAX,dword ptr [ESP + 0x74]      ; 004adc6f
    ADD EDX,0x1c                        ; 004adc73
    ADD EAX,0x10                        ; 004adc76
    CMP EAX,EDX                         ; 004adc79
    JZ 0x004adc8d                       ; 004adc7b
        ;   XREF to: 004adc8d (CONDITIONAL_JUMP)  ; LAB_004adc8d
    MOV ECX,dword ptr [EDX]             ; 004adc7d
    MOV dword ptr [EAX],ECX             ; 004adc7f
    MOV ECX,dword ptr [EDX + 0x4]       ; 004adc81
    MOV dword ptr [EAX + 0x4],ECX       ; 004adc84
    MOV ECX,dword ptr [EDX + 0x8]       ; 004adc87
    MOV dword ptr [EAX + 0x8],ECX       ; 004adc8a
    MOV EAX,dword ptr [ESP + 0x74]      ; 004adc8d
        ;   Label: LAB_004adc8d
    MOV EDX,dword ptr [ESP + 0x74]      ; 004adc91
    ADD EAX,0x28                        ; 004adc95
    ADD EDX,0x1c                        ; 004adc98
    CMP EDX,EAX                         ; 004adc9b
    JZ 0x004adcaf                       ; 004adc9d
        ;   XREF to: 004adcaf (CONDITIONAL_JUMP)  ; LAB_004adcaf
    MOV ECX,dword ptr [EAX]             ; 004adc9f
    MOV dword ptr [EDX],ECX             ; 004adca1
    MOV ECX,dword ptr [EAX + 0x4]       ; 004adca3
    MOV dword ptr [EDX + 0x4],ECX       ; 004adca6
    MOV ECX,dword ptr [EAX + 0x8]       ; 004adca9
    MOV dword ptr [EDX + 0x8],ECX       ; 004adcac
    MOV EAX,dword ptr [ESP + 0x74]      ; 004adcaf
        ;   Label: LAB_004adcaf
    ADD EAX,0x1c                        ; 004adcb3
    PUSH EAX                            ; 004adcb6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adcb7
    PUSH EAX                            ; 004adcba
    LEA ESI,[ESP + 0x40]                ; 004adcbb
    LEA EDI,[ESP + 0x34]                ; 004adcbf
    CALL core_flies.cpp_FUN_004ae380    ; 004adcc3
        ;   XREF to: 004ae380 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_FUN_004ae380()
    ADD ESP,0x8                         ; 004adcc8
    LEA ESI,[ESP + 0x38]                ; 004adccb
    MOV EDX,dword ptr [ESP + 0x74]      ; 004adccf
    LEA EAX,[ESP + 0x2c]                ; 004adcd3
    ADD EDX,0x28                        ; 004adcd7
    MOVSD ES:EDI,ESI                    ; 004adcda
    MOVSD ES:EDI,ESI                    ; 004adcdb
    MOVSD ES:EDI,ESI                    ; 004adcdc
    CMP EDX,EAX                         ; 004adcdd
    JZ 0x004adbc8                       ; 004adcdf
        ;   XREF to: 004adbc8 (CONDITIONAL_JUMP)  ; LAB_004adbc8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004adce5
    MOV dword ptr [EDX],EAX             ; 004adce9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004adceb
    MOV dword ptr [EDX + 0x4],EAX       ; 004adcef
    MOV EAX,dword ptr [ESP + 0x34]      ; 004adcf2
    MOV dword ptr [EDX + 0x8],EAX       ; 004adcf6
    JMP 0x004adbc8                      ; 004adcf9
        ;   XREF to: 004adbc8 (UNCONDITIONAL_JUMP)  ; LAB_004adbc8

