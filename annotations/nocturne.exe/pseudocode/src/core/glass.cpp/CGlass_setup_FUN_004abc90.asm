; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_glass_cpp_CGlass_setup_FUN_004abc90(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
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
;
; Referenced Globals:
;   string s_..\\core\\glass.cpp_00584edc
;   string s_CGlass::setup_-_Too_many_vertici_00584eee
;   TerminatedCString s_none_00584f23
;   string s_7YEARS.RAW_00584f28
;   string s_factwin.raw_00584f33
;   string s_factwinx.raw_00584f3f
;   undefined4 s_actwinx.raw_00584f3f+1
;   undefined4 s_ctwinx.raw_00584f3f+2
;   undefined4 s_twinx.raw_00584f3f+3
;   string s_dockwin.raw_00584f4c
;   string s_dockwinx.raw_00584f58
;   undefined4 s_ockwinx.raw_00584f58+1
;   undefined4 s_ckwinx.raw_00584f58+2
;   undefined4 s_kwinx.raw_00584f58+3
;   string s_windo10.raw_00584f65
;   ... and 17 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_mirror.cpp_CMirror_setupCorners_FUN_004d6590
;   crt_math.c_round_FUN_00563a30
;   crt_string.c__strcmp_FUN_005649c0
;   crt_string.c__stricmp_FUN_00564520
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abc90
        ;   Label: core_glass.cpp_CGlass_setup_FUN_004abc90
    PUSH ESI                            ; 004abc91
    PUSH EDI                            ; 004abc92
    PUSH EBP                            ; 004abc93
    MOV EBP,ESP                         ; 004abc94
    SUB ESP,0xc8                        ; 004abc96
    AND ESP,0xfffffff8                  ; 004abc9c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004abc9f
    PUSH EBX                            ; 004abca2
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004abca3
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 004abca8
    LEA EAX,[EBX + 0x15c]               ; 004abcab
    PUSH EAX                            ; 004abcb1
    MOV EDX,dword ptr [0x005ae704]      ; 004abcb2 | DAT_005ae704
    PUSH EDX                            ; 004abcb8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004abcb9
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    MOV ECX,dword ptr [EBX + 0x1e0]     ; 004abcbe
    ADD ESP,0x8                         ; 004abcc4
    TEST ECX,ECX                        ; 004abcc7
    JNZ 0x004abe5d                      ; 004abcc9
        ;   XREF to: 004abe5d (CONDITIONAL_JUMP)  ; LAB_004abe5d
    FLD float ptr [EBX + 0x150]         ; 004abccf
        ;   Label: LAB_004abccf
    FMUL double ptr [0x00584fa0]        ; 004abcd5 | DOUBLE_00584fa0
    CALL crt_math.c_round_FUN_00563a30  ; 004abcdb
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc4]        ; 004abce0
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004abce7
    INC EAX                             ; 004abcee
    MOV dword ptr [EBX + 0xb24],EAX     ; 004abcef
    CMP EAX,0x4                         ; 004abcf5
    JLE 0x004abd04                      ; 004abcf8
        ;   XREF to: 004abd04 (CONDITIONAL_JUMP)  ; LAB_004abd04
    MOV dword ptr [EBX + 0xb24],0x4     ; 004abcfa
    FLD float ptr [EBX + 0x154]         ; 004abd04
        ;   Label: LAB_004abd04
    FMUL double ptr [0x00584fa0]        ; 004abd0a | DOUBLE_00584fa0
    CALL crt_math.c_round_FUN_00563a30  ; 004abd10
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc4]        ; 004abd15
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004abd1c
    INC EAX                             ; 004abd23
    MOV dword ptr [EBX + 0xb28],EAX     ; 004abd24
    CMP EAX,0x4                         ; 004abd2a
    JLE 0x004abd39                      ; 004abd2d
        ;   XREF to: 004abd39 (CONDITIONAL_JUMP)  ; LAB_004abd39
    MOV dword ptr [EBX + 0xb28],0x4     ; 004abd2f
    MOV EAX,dword ptr [EBX + 0xb28]     ; 004abd39
        ;   Label: LAB_004abd39
    MOV EDX,dword ptr [EBX + 0xb24]     ; 004abd3f
    INC EAX                             ; 004abd45
    INC EDX                             ; 004abd46
    IMUL EDX,EAX                        ; 004abd47
    MOV ESI,dword ptr [EBX + 0xb28]     ; 004abd4a
    MOV EAX,dword ptr [EBX + 0xb24]     ; 004abd50
    IMUL EAX,ESI                        ; 004abd56
    MOV dword ptr [EBX + 0xb2c],EDX     ; 004abd59
    MOV EDI,dword ptr [EBX + 0xb2c]     ; 004abd5f
    MOV dword ptr [EBX + 0xb30],EAX     ; 004abd65
    CMP EDI,0x19                        ; 004abd6b
    JLE 0x004ac04e                      ; 004abd6e
        ;   XREF to: 004ac04e (CONDITIONAL_JUMP)  ; LAB_004ac04e
    MOV ESI,dword ptr [EBX + 0xb30]     ; 004abd74
        ;   Label: LAB_004abd74
    PUSH ESI                            ; 004abd7a
    MOV EDI,dword ptr [EBX + 0xb2c]     ; 004abd7b
    PUSH EDI                            ; 004abd81
    MOV EDX,0x584edc                    ; 004abd82 | = "..\\core\\glass.cpp"
    MOV ECX,0x86                        ; 004abd87
    PUSH 0x584eee                       ; 004abd8c | = "CGlass::setup - Too many verticies(%d..."
    MOV dword ptr [0x01cc4800],EDX      ; 004abd91 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004abd97 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004abd9d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 004abda2
    FILD dword ptr [EBX + 0xb24]        ; 004abda5
        ;   Label: LAB_004abda5
    FDIVR float ptr [EBX + 0x150]       ; 004abdab
    FILD dword ptr [EBX + 0xb28]        ; 004abdb1
    FDIVR float ptr [EBX + 0x154]       ; 004abdb7
    XOR EAX,EAX                         ; 004abdbd
    XOR EDI,EDI                         ; 004abdbf
    MOV dword ptr [ESP + 0xb8],EAX      ; 004abdc1
    FXCH                                ; 004abdc8
    FSTP float ptr [ESP + 0xb4]         ; 004abdca
    MOV dword ptr [ESP],EAX             ; 004abdd1
    MOV dword ptr [ESP + 0x4],EAX       ; 004abdd4
    MOV dword ptr [ESP + 0x8],EAX       ; 004abdd8
    LEA EAX,[EBX + 0x384]               ; 004abddc
    FSTP float ptr [ESP + 0xa8]         ; 004abde2
    MOV dword ptr [ESP + 0xb0],EAX      ; 004abde9
    MOV EAX,dword ptr [EBX + 0xb28]     ; 004abdf0
        ;   Label: LAB_004abdf0
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004abdf6
    INC EAX                             ; 004abdfd
    CMP EAX,EDX                         ; 004abdfe
    JLE 0x004ac112                      ; 004abe00
        ;   XREF to: 004ac112 (CONDITIONAL_JUMP)  ; LAB_004ac112
    IMUL EDX,EDI,0xc                    ; 004abe06
    FLD float ptr [EBX + 0x150]         ; 004abe09
    FCHS                                ; 004abe0f
    FMUL double ptr [0x00584fa0]        ; 004abe11 | DOUBLE_00584fa0
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004abe17
    XOR ESI,ESI                         ; 004abe1e
    FSTP float ptr [ESP]                ; 004abe20
    LEA ECX,[EDI*0x4 + 0x0]             ; 004abe23
    ADD EDX,EAX                         ; 004abe2a
    ADD ECX,EBX                         ; 004abe2c
    MOV EAX,dword ptr [EBX + 0xb24]     ; 004abe2e
        ;   Label: LAB_004abe2e
    INC EAX                             ; 004abe34
    CMP ESI,EAX                         ; 004abe35
    JL 0x004ac05c                       ; 004abe37
        ;   XREF to: 004ac05c (CONDITIONAL_JUMP)  ; LAB_004ac05c
    FLD float ptr [ESP + 0x4]           ; 004abe3d
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004abe41
    FADD float ptr [ESP + 0xa8]         ; 004abe48
    INC EDX                             ; 004abe4f
    FSTP float ptr [ESP + 0x4]          ; 004abe50
    MOV dword ptr [ESP + 0xb8],EDX      ; 004abe54
    JMP 0x004abdf0                      ; 004abe5b
        ;   XREF to: 004abdf0 (UNCONDITIONAL_JUMP)  ; LAB_004abdf0
    XOR ESI,ESI                         ; 004abe5d
        ;   Label: LAB_004abe5d
    LEA EAX,[ESP + 0x54]                ; 004abe5f
    MOV dword ptr [ESP + 0x5c],ESI      ; 004abe63
    MOV dword ptr [ESP + 0x58],ESI      ; 004abe67
    MOV dword ptr [ESP + 0x54],ESI      ; 004abe6b
    PUSH EAX                            ; 004abe6f
    FLD float ptr [EBX + 0x150]         ; 004abe70
    LEA EAX,[ESP + 0x34]                ; 004abe76
    FMUL float ptr [0x00584f98]         ; 004abe7a | FLOAT_00584f98
    PUSH EAX                            ; 004abe80
    LEA EAX,[EBX + 0x3c]                ; 004abe81
    PUSH EAX                            ; 004abe84
    FSTP float ptr [ESP + 0x60]         ; 004abe85
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004abe89
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0x20]                ; 004abe8e
    FLD float ptr [EDX]                 ; 004abe91
    FADD float ptr [EAX]                ; 004abe93
    ADD ESP,0xc                         ; 004abe95
    FSTP float ptr [ESP + 0x60]         ; 004abe98
    FLD float ptr [EDX + 0x4]           ; 004abe9c
    FADD float ptr [EAX + 0x4]          ; 004abe9f
    FSTP float ptr [ESP + 0x64]         ; 004abea2
    FLD float ptr [EDX + 0x8]           ; 004abea6
    LEA EDX,[ESP + 0x60]                ; 004abea9
    FADD float ptr [EAX + 0x8]          ; 004abead
    LEA EAX,[ESP + 0x90]                ; 004abeb0
    FSTP float ptr [ESP + 0x68]         ; 004abeb7
    CMP EAX,EDX                         ; 004abebb
    JZ 0x004abee0                       ; 004abebd
        ;   XREF to: 004abee0 (CONDITIONAL_JUMP)  ; LAB_004abee0
    MOV EAX,dword ptr [ESP + 0x60]      ; 004abebf
    MOV dword ptr [ESP + 0x90],EAX      ; 004abec3
    MOV EAX,dword ptr [ESP + 0x64]      ; 004abeca
    MOV dword ptr [ESP + 0x94],EAX      ; 004abece
    MOV EAX,dword ptr [ESP + 0x68]      ; 004abed5
    MOV dword ptr [ESP + 0x98],EAX      ; 004abed9
    XOR byte ptr [ESP + 0x57],0x80      ; 004abee0
        ;   Label: LAB_004abee0
    LEA EAX,[ESP + 0x54]                ; 004abee5
    PUSH EAX                            ; 004abee9
    LEA EAX,[ESP + 0x88]                ; 004abeea
    PUSH EAX                            ; 004abef1
    LEA EAX,[EBX + 0x3c]                ; 004abef2
    PUSH EAX                            ; 004abef5
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004abef6
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0x20]                ; 004abefb
    FLD float ptr [EDX]                 ; 004abefe
    FADD float ptr [EAX]                ; 004abf00
    ADD ESP,0xc                         ; 004abf02
    FSTP float ptr [ESP + 0x9c]         ; 004abf05
    FLD float ptr [EDX + 0x4]           ; 004abf0c
    FADD float ptr [EAX + 0x4]          ; 004abf0f
    FSTP float ptr [ESP + 0xa0]         ; 004abf12
    FLD float ptr [EDX + 0x8]           ; 004abf19
    LEA EDX,[ESP + 0x78]                ; 004abf1c
    FADD float ptr [EAX + 0x8]          ; 004abf20
    LEA EAX,[ESP + 0x9c]                ; 004abf23
    FSTP float ptr [ESP + 0xa4]         ; 004abf2a
    CMP EDX,EAX                         ; 004abf31
    JZ 0x004abf59                       ; 004abf33
        ;   XREF to: 004abf59 (CONDITIONAL_JUMP)  ; LAB_004abf59
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004abf35
    MOV dword ptr [ESP + 0x78],EAX      ; 004abf3c
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004abf40
    MOV dword ptr [ESP + 0x7c],EAX      ; 004abf47
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004abf4b
    MOV dword ptr [ESP + 0x80],EAX      ; 004abf52
    MOV EAX,dword ptr [EBX + 0x154]     ; 004abf59
        ;   Label: LAB_004abf59
    MOV dword ptr [ESP + 0x58],EAX      ; 004abf5f
    LEA EAX,[ESP + 0x54]                ; 004abf63
    PUSH EAX                            ; 004abf67
    LEA EAX,[ESP + 0x70]                ; 004abf68
    PUSH EAX                            ; 004abf6c
    LEA EAX,[EBX + 0x3c]                ; 004abf6d
    PUSH EAX                            ; 004abf70
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004abf71
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0x20]                ; 004abf76
    FLD float ptr [EDX]                 ; 004abf79
    FADD float ptr [EAX]                ; 004abf7b
    ADD ESP,0xc                         ; 004abf7d
    FSTP float ptr [ESP + 0xc]          ; 004abf80
    FLD float ptr [EDX + 0x4]           ; 004abf84
    FADD float ptr [EAX + 0x4]          ; 004abf87
    FSTP float ptr [ESP + 0x10]         ; 004abf8a
    FLD float ptr [EDX + 0x8]           ; 004abf8e
    LEA EDX,[ESP + 0x18]                ; 004abf91
    FADD float ptr [EAX + 0x8]          ; 004abf95
    LEA EAX,[ESP + 0xc]                 ; 004abf98
    FSTP float ptr [ESP + 0x14]         ; 004abf9c
    CMP EDX,EAX                         ; 004abfa0
    JZ 0x004abfbc                       ; 004abfa2
        ;   XREF to: 004abfbc (CONDITIONAL_JUMP)  ; LAB_004abfbc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004abfa4
    MOV dword ptr [ESP + 0x18],EAX      ; 004abfa8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004abfac
    MOV dword ptr [ESP + 0x1c],EAX      ; 004abfb0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004abfb4
    MOV dword ptr [ESP + 0x20],EAX      ; 004abfb8
    LEA EAX,[ESP + 0x54]                ; 004abfbc
        ;   Label: LAB_004abfbc
    PUSH EAX                            ; 004abfc0
    LEA EAX,[ESP + 0x40]                ; 004abfc1
    MOV DL,byte ptr [ESP + 0x5b]        ; 004abfc5
    PUSH EAX                            ; 004abfc9
    LEA EAX,[EBX + 0x3c]                ; 004abfca
    XOR DL,0x80                         ; 004abfcd
    PUSH EAX                            ; 004abfd0
    MOV byte ptr [ESP + 0x63],DL        ; 004abfd1
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004abfd5
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0x20]                ; 004abfda
    FLD float ptr [EDX]                 ; 004abfdd
    FADD float ptr [EAX]                ; 004abfdf
    ADD ESP,0xc                         ; 004abfe1
    FSTP float ptr [ESP + 0x48]         ; 004abfe4
    FLD float ptr [EDX + 0x4]           ; 004abfe8
    FADD float ptr [EAX + 0x4]          ; 004abfeb
    FSTP float ptr [ESP + 0x4c]         ; 004abfee
    FLD float ptr [EDX + 0x8]           ; 004abff2
    LEA EDX,[ESP + 0x24]                ; 004abff5
    FADD float ptr [EAX + 0x8]          ; 004abff9
    LEA EAX,[ESP + 0x48]                ; 004abffc
    FSTP float ptr [ESP + 0x50]         ; 004ac000
    CMP EDX,EAX                         ; 004ac004
    JZ 0x004ac020                       ; 004ac006
        ;   XREF to: 004ac020 (CONDITIONAL_JUMP)  ; LAB_004ac020
    MOV EAX,dword ptr [ESP + 0x48]      ; 004ac008
    MOV dword ptr [ESP + 0x24],EAX      ; 004ac00c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004ac010
    MOV dword ptr [ESP + 0x28],EAX      ; 004ac014
    MOV EAX,dword ptr [ESP + 0x50]      ; 004ac018
    MOV dword ptr [ESP + 0x2c],EAX      ; 004ac01c
    LEA EAX,[ESP + 0x24]                ; 004ac020
        ;   Label: LAB_004ac020
    PUSH EAX                            ; 004ac024
    LEA EAX,[ESP + 0x1c]                ; 004ac025
    PUSH EAX                            ; 004ac029
    LEA EAX,[ESP + 0x80]                ; 004ac02a
    PUSH EAX                            ; 004ac031
    LEA EAX,[ESP + 0x9c]                ; 004ac032
    PUSH EAX                            ; 004ac039
    LEA EAX,[EBX + 0x1e4]               ; 004ac03a
    PUSH EAX                            ; 004ac040
    CALL core_mirror.cpp_CMirror_setupCorners_FUN_004d6590 ; 004ac041
        ;   XREF to: 004d6590 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_CMirror_setupCorners_FUN_004d6590()
    ADD ESP,0x14                        ; 004ac046
    JMP 0x004abccf                      ; 004ac049
        ;   XREF to: 004abccf (UNCONDITIONAL_JUMP)  ; LAB_004abccf
    CMP EAX,0x10                        ; 004ac04e
        ;   Label: LAB_004ac04e
    JG 0x004abd74                       ; 004ac051
        ;   XREF to: 004abd74 (CONDITIONAL_JUMP)  ; LAB_004abd74
    JMP 0x004abda5                      ; 004ac057
        ;   XREF to: 004abda5 (UNCONDITIONAL_JUMP)  ; LAB_004abda5
    MOV EAX,ESP                         ; 004ac05c
        ;   Label: LAB_004ac05c
    CMP EDX,EAX                         ; 004ac05e
    JZ 0x004ac075                       ; 004ac060
        ;   XREF to: 004ac075 (CONDITIONAL_JUMP)  ; LAB_004ac075
    MOV EAX,dword ptr [ESP]             ; 004ac062
    MOV dword ptr [EDX],EAX             ; 004ac065
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ac067
    MOV dword ptr [EDX + 0x4],EAX       ; 004ac06b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ac06e
    MOV dword ptr [EDX + 0x8],EAX       ; 004ac072
    MOV dword ptr [ESP + 0xc4],ESI      ; 004ac075
        ;   Label: LAB_004ac075
    FILD dword ptr [EBX + 0xb24]        ; 004ac07c
    FILD dword ptr [ESP + 0xc4]         ; 004ac082
    FDIVRP                              ; 004ac089
    FLD double ptr [0x00584fa8]         ; 004ac08b | DOUBLE_00584fa8
    FXCH                                ; 004ac091
    FMUL ST1                            ; 004ac093
    FLD double ptr [0x00584fb0]         ; 004ac095 | DOUBLE_00584fb0
    FXCH                                ; 004ac09b
    FADD ST0,ST1                        ; 004ac09d
    CALL crt_math.c_round_FUN_00563a30  ; 004ac09f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc4]        ; 004ac0a4
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004ac0ab
    MOV dword ptr [ECX + 0x5dc],EAX     ; 004ac0b2
    MOV EAX,dword ptr [EBX + 0xb28]     ; 004ac0b8
    SUB EAX,dword ptr [ESP + 0xb8]      ; 004ac0be
    MOV dword ptr [ESP + 0xc4],EAX      ; 004ac0c5
    FILD dword ptr [ESP + 0xc4]         ; 004ac0cc
    FILD dword ptr [EBX + 0xb28]        ; 004ac0d3
    FDIVP                               ; 004ac0d9
    FMULP ST2                           ; 004ac0db
    ADD ECX,0x4                         ; 004ac0dd
    FADDP                               ; 004ac0e0
    CALL crt_math.c_round_FUN_00563a30  ; 004ac0e2
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc4]        ; 004ac0e7
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004ac0ee
    ADD EDX,0xc                         ; 004ac0f5
    MOV dword ptr [ECX + 0x63c],EAX     ; 004ac0f8
    INC EDI                             ; 004ac0fe
    FLD float ptr [ESP]                 ; 004ac0ff
    FADD float ptr [ESP + 0xb4]         ; 004ac102
    INC ESI                             ; 004ac109
    FSTP float ptr [ESP]                ; 004ac10a
    JMP 0x004abe2e                      ; 004ac10d
        ;   XREF to: 004abe2e (UNCONDITIONAL_JUMP)  ; LAB_004abe2e
    XOR ECX,ECX                         ; 004ac112
        ;   Label: LAB_004ac112
    MOV EDI,dword ptr [EBX + 0xb28]     ; 004ac114
    MOV dword ptr [ESP + 0xbc],ECX      ; 004ac11a
    MOV dword ptr [ESP + 0xc0],ECX      ; 004ac121
    TEST EDI,EDI                        ; 004ac128
    JLE 0x004ac258                      ; 004ac12a
        ;   XREF to: 004ac258 (CONDITIONAL_JUMP)  ; LAB_004ac258
    LEA EAX,[EBX + 0x6a4]               ; 004ac130
    MOV dword ptr [ESP + 0xac],EAX      ; 004ac136
    MOV EDX,dword ptr [EBX + 0xb24]     ; 004ac13d
        ;   Label: LAB_004ac13d
    XOR ESI,ESI                         ; 004ac143
    TEST EDX,EDX                        ; 004ac145
    JLE 0x004ac23b                      ; 004ac147
        ;   XREF to: 004ac23b (CONDITIONAL_JUMP)  ; LAB_004ac23b
    IMUL EAX,dword ptr [ESP + 0xc0],0x48 ; 004ac14d
    ADD EAX,dword ptr [ESP + 0xac]      ; 004ac155
    MOV dword ptr [EAX + 0x4],0x4       ; 004ac15c
        ;   Label: LAB_004ac15c
    MOV dword ptr [EAX + 0x14],0x0      ; 004ac163
    MOV EDX,dword ptr [EAX + 0x14]      ; 004ac16a
    MOV dword ptr [EAX + 0x10],EDX      ; 004ac16d
    MOV dword ptr [EAX + 0xc],EDX       ; 004ac170
    MOV dword ptr [EAX + 0x8],EDX       ; 004ac173
    MOV EDX,dword ptr [EBX + 0xb24]     ; 004ac176
    MOV ECX,dword ptr [ESP + 0xbc]      ; 004ac17c
    INC EDX                             ; 004ac183
    IMUL EDX,ECX                        ; 004ac184
    ADD EDX,ESI                         ; 004ac187
    MOV dword ptr [EAX + 0x18],EDX      ; 004ac189
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x5dc] ; 004ac18c
    MOV dword ptr [EAX + 0x1c],EDI      ; 004ac193
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x640] ; 004ac196
    MOV dword ptr [EAX + 0x20],EDI      ; 004ac19d
    LEA EDI,[EDX + 0x1]                 ; 004ac1a0
    MOV dword ptr [EAX + 0x24],EDI      ; 004ac1a3
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x5e0] ; 004ac1a6
    MOV dword ptr [EAX + 0x28],EDI      ; 004ac1ad
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x644] ; 004ac1b0
    MOV dword ptr [EAX + 0x2c],ECX      ; 004ac1b7
    MOV ECX,dword ptr [EBX + 0xb24]     ; 004ac1ba
    ADD ECX,EDX                         ; 004ac1c0
    ADD ECX,0x2                         ; 004ac1c2
    MOV dword ptr [EAX + 0x30],ECX      ; 004ac1c5
    MOV ECX,dword ptr [EBX + 0xb24]     ; 004ac1c8
    ADD ECX,EDX                         ; 004ac1ce
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x5e4] ; 004ac1d0
    MOV dword ptr [EAX + 0x34],ECX      ; 004ac1d7
    MOV ECX,dword ptr [EBX + 0xb24]     ; 004ac1da
    ADD ECX,EDX                         ; 004ac1e0
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x648] ; 004ac1e2
    MOV dword ptr [EAX + 0x38],ECX      ; 004ac1e9
    MOV ECX,dword ptr [EBX + 0xb24]     ; 004ac1ec
    ADD ECX,EDX                         ; 004ac1f2
    INC ECX                             ; 004ac1f4
    MOV dword ptr [EAX + 0x3c],ECX      ; 004ac1f5
    MOV ECX,dword ptr [EBX + 0xb24]     ; 004ac1f8
    ADD ECX,EDX                         ; 004ac1fe
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x5e0] ; 004ac200
    MOV dword ptr [EAX + 0x40],ECX      ; 004ac207
    ADD EDX,dword ptr [EBX + 0xb24]     ; 004ac20a
    ADD EAX,0x48                        ; 004ac210
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x644] ; 004ac213
    MOV dword ptr [EAX + -0x4],EDX      ; 004ac21a
    MOV EDX,dword ptr [ESP + 0xc0]      ; 004ac21d
    INC ESI                             ; 004ac224
    INC EDX                             ; 004ac225
    MOV ECX,dword ptr [EBX + 0xb24]     ; 004ac226
    MOV dword ptr [ESP + 0xc0],EDX      ; 004ac22c
    CMP ESI,ECX                         ; 004ac233
    JL 0x004ac15c                       ; 004ac235
        ;   XREF to: 004ac15c (CONDITIONAL_JUMP)  ; LAB_004ac15c
    MOV ECX,dword ptr [ESP + 0xbc]      ; 004ac23b
        ;   Label: LAB_004ac23b
    INC ECX                             ; 004ac242
    MOV ESI,dword ptr [EBX + 0xb28]     ; 004ac243
    MOV dword ptr [ESP + 0xbc],ECX      ; 004ac249
    CMP ECX,ESI                         ; 004ac250
    JL 0x004ac13d                       ; 004ac252
        ;   XREF to: 004ac13d (CONDITIONAL_JUMP)  ; LAB_004ac13d
    CMP dword ptr [EBX + 0x174],0xfde8  ; 004ac258
        ;   Label: LAB_004ac258
    SETLE AL                            ; 004ac262
    AND EAX,0xff                        ; 004ac265
    PUSH 0x584f23                       ; 004ac26a | = "none"
    MOV dword ptr [EBX + 0xfc],EAX      ; 004ac26f
    LEA EAX,[EBX + 0x17c]               ; 004ac275
    PUSH EAX                            ; 004ac27b
    CALL crt_string.c__stricmp_FUN_00564520 ; 004ac27c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004ac281
    TEST EAX,EAX                        ; 004ac284
    JNZ 0x004ac28f                      ; 004ac286
        ;   XREF to: 004ac28f (CONDITIONAL_JUMP)  ; LAB_004ac28f
    MOV byte ptr [EBX + 0x17c],0x0      ; 004ac288
    MOV DH,byte ptr [EBX + 0x17c]       ; 004ac28f
        ;   Label: LAB_004ac28f
    MOV dword ptr [EBX + 0x104],0x0     ; 004ac295
    TEST DH,DH                          ; 004ac29f
    JNZ 0x004ac2ad                      ; 004ac2a1
        ;   XREF to: 004ac2ad (CONDITIONAL_JUMP)  ; LAB_004ac2ad
    MOV dword ptr [EBX + 0x104],0x1     ; 004ac2a3
    MOV EAX,dword ptr [EBX + 0x368]     ; 004ac2ad
        ;   Label: LAB_004ac2ad
    MOV dword ptr [EBX + 0xb34],0x0     ; 004ac2b3
    TEST EAX,EAX                        ; 004ac2bd
    JNZ 0x004ac2c8                      ; 004ac2bf
        ;   XREF to: 004ac2c8 (CONDITIONAL_JUMP)  ; LAB_004ac2c8
    MOV ESP,EBP                         ; 004ac2c1
        ;   Label: LAB_004ac2c1
    POP EBP                             ; 004ac2c3
    POP EDI                             ; 004ac2c4
    POP ESI                             ; 004ac2c5
    POP EBX                             ; 004ac2c6
    RET                                 ; 004ac2c7
    PUSH 0x584f28                       ; 004ac2c8 | = "7YEARS.RAW"
        ;   Label: LAB_004ac2c8
    LEA EDI,[EBX + 0x374]               ; 004ac2cd
    PUSH EDI                            ; 004ac2d3
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004ac2d4
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 004ac2d9
    TEST EAX,EAX                        ; 004ac2dc
    JNZ 0x004ac2c1                      ; 004ac2de
        ;   XREF to: 004ac2c1 (CONDITIONAL_JUMP)  ; LAB_004ac2c1
    PUSH 0x584f33                       ; 004ac2e0 | = "factwin.raw"
    LEA EAX,[EBX + 0x164]               ; 004ac2e5
    PUSH EAX                            ; 004ac2eb
    CALL crt_string.c__stricmp_FUN_00564520 ; 004ac2ec
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004ac2f1
    TEST EAX,EAX                        ; 004ac2f4
    JZ 0x004ac3be                       ; 004ac2f6
        ;   XREF to: 004ac3be (CONDITIONAL_JUMP)  ; LAB_004ac3be
    PUSH 0x584f4c                       ; 004ac2fc | = "dockwin.raw"
        ;   Label: LAB_004ac2fc
    LEA EAX,[EBX + 0x164]               ; 004ac301
    PUSH EAX                            ; 004ac307
    CALL crt_string.c__stricmp_FUN_00564520 ; 004ac308
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004ac30d
    TEST EAX,EAX                        ; 004ac310
    JNZ 0x004ac339                      ; 004ac312
        ;   XREF to: 004ac339 (CONDITIONAL_JUMP)  ; LAB_004ac339
    MOV ESI,0x584f58                    ; 004ac314 | = "dockwinx.raw"
    LEA EDI,[EBX + 0x374]               ; 004ac319
    PUSH EDI                            ; 004ac31f
    MOV AL,byte ptr [ESI]               ; 004ac320 | = "dockwinx.raw" | s_ckwinx.raw_00584f58+2
        ;   Label: LAB_004ac320
    MOV byte ptr [EDI],AL               ; 004ac322
    CMP AL,0x0                          ; 004ac324
    JZ 0x004ac338                       ; 004ac326
        ;   XREF to: 004ac338 (CONDITIONAL_JUMP)  ; LAB_004ac338
    MOV AL,byte ptr [ESI + 0x1]         ; 004ac328 | s_ockwinx.raw_00584f58+1 | s_kwinx.raw_00584f58+3
    ADD ESI,0x2                         ; 004ac32b
    MOV byte ptr [EDI + 0x1],AL         ; 004ac32e
    ADD EDI,0x2                         ; 004ac331
    CMP AL,0x0                          ; 004ac334
    JNZ 0x004ac320                      ; 004ac336
        ;   XREF to: 004ac320 (CONDITIONAL_JUMP)  ; LAB_004ac320
    POP EDI                             ; 004ac338
        ;   Label: LAB_004ac338
    PUSH 0x584f65                       ; 004ac339 | = "windo10.raw"
        ;   Label: LAB_004ac339
    LEA EAX,[EBX + 0x164]               ; 004ac33e
    PUSH EAX                            ; 004ac344
    CALL crt_string.c__stricmp_FUN_00564520 ; 004ac345
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004ac34a
    TEST EAX,EAX                        ; 004ac34d
    JNZ 0x004ac376                      ; 004ac34f
        ;   XREF to: 004ac376 (CONDITIONAL_JUMP)  ; LAB_004ac376
    MOV ESI,0x584f71                    ; 004ac351 | = "windo10x.raw"
    LEA EDI,[EBX + 0x374]               ; 004ac356
    PUSH EDI                            ; 004ac35c
    MOV AL,byte ptr [ESI]               ; 004ac35d | = "windo10x.raw" | s_ndo10x.raw_00584f71+2
        ;   Label: LAB_004ac35d
    MOV byte ptr [EDI],AL               ; 004ac35f
    CMP AL,0x0                          ; 004ac361
    JZ 0x004ac375                       ; 004ac363
        ;   XREF to: 004ac375 (CONDITIONAL_JUMP)  ; LAB_004ac375
    MOV AL,byte ptr [ESI + 0x1]         ; 004ac365 | s_indo10x.raw_00584f71+1 | s_do10x.raw_00584f71+3
    ADD ESI,0x2                         ; 004ac368
    MOV byte ptr [EDI + 0x1],AL         ; 004ac36b
    ADD EDI,0x2                         ; 004ac36e
    CMP AL,0x0                          ; 004ac371
    JNZ 0x004ac35d                      ; 004ac373
        ;   XREF to: 004ac35d (CONDITIONAL_JUMP)  ; LAB_004ac35d
    POP EDI                             ; 004ac375
        ;   Label: LAB_004ac375
    PUSH 0x584f7e                       ; 004ac376 | = "windo11.raw"
        ;   Label: LAB_004ac376
    LEA EAX,[EBX + 0x164]               ; 004ac37b
    PUSH EAX                            ; 004ac381
    CALL crt_string.c__stricmp_FUN_00564520 ; 004ac382
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004ac387
    TEST EAX,EAX                        ; 004ac38a
    JNZ 0x004ac2c1                      ; 004ac38c
        ;   XREF to: 004ac2c1 (CONDITIONAL_JUMP)  ; LAB_004ac2c1
    MOV ESI,0x584f8a                    ; 004ac392 | = "windo11x.raw"
    LEA EDI,[EBX + 0x374]               ; 004ac397
    PUSH EDI                            ; 004ac39d
    MOV AL,byte ptr [ESI]               ; 004ac39e | = "windo11x.raw" | s_ndo11x.raw_00584f8a+2
        ;   Label: LAB_004ac39e
    MOV byte ptr [EDI],AL               ; 004ac3a0
    CMP AL,0x0                          ; 004ac3a2
    JZ 0x004ac3b6                       ; 004ac3a4
        ;   XREF to: 004ac3b6 (CONDITIONAL_JUMP)  ; LAB_004ac3b6
    MOV AL,byte ptr [ESI + 0x1]         ; 004ac3a6 | s_indo11x.raw_00584f8a+1 | s_do11x.raw_00584f8a+3
    ADD ESI,0x2                         ; 004ac3a9
    MOV byte ptr [EDI + 0x1],AL         ; 004ac3ac
    ADD EDI,0x2                         ; 004ac3af
    CMP AL,0x0                          ; 004ac3b2
    JNZ 0x004ac39e                      ; 004ac3b4
        ;   XREF to: 004ac39e (CONDITIONAL_JUMP)  ; LAB_004ac39e
    POP EDI                             ; 004ac3b6
        ;   Label: LAB_004ac3b6
    MOV ESP,EBP                         ; 004ac3b7
    POP EBP                             ; 004ac3b9
    POP EDI                             ; 004ac3ba
    POP ESI                             ; 004ac3bb
    POP EBX                             ; 004ac3bc
    RET                                 ; 004ac3bd
    MOV ESI,0x584f3f                    ; 004ac3be | = "factwinx.raw"
        ;   Label: LAB_004ac3be
    PUSH EDI                            ; 004ac3c3
    MOV AL,byte ptr [ESI]               ; 004ac3c4 | = "factwinx.raw" | s_ctwinx.raw_00584f3f+2
        ;   Label: LAB_004ac3c4
    MOV byte ptr [EDI],AL               ; 004ac3c6
    CMP AL,0x0                          ; 004ac3c8
    JZ 0x004ac3dc                       ; 004ac3ca
        ;   XREF to: 004ac3dc (CONDITIONAL_JUMP)  ; LAB_004ac3dc
    MOV AL,byte ptr [ESI + 0x1]         ; 004ac3cc | s_actwinx.raw_00584f3f+1 | s_twinx.raw_00584f3f+3
    ADD ESI,0x2                         ; 004ac3cf
    MOV byte ptr [EDI + 0x1],AL         ; 004ac3d2
    ADD EDI,0x2                         ; 004ac3d5
    CMP AL,0x0                          ; 004ac3d8
    JNZ 0x004ac3c4                      ; 004ac3da
        ;   XREF to: 004ac3c4 (CONDITIONAL_JUMP)  ; LAB_004ac3c4
    POP EDI                             ; 004ac3dc
        ;   Label: LAB_004ac3dc
    JMP 0x004ac2fc                      ; 004ac3dd
        ;   XREF to: 004ac2fc (UNCONDITIONAL_JUMP)  ; LAB_004ac2fc

