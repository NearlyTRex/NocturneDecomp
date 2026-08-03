; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_004dcf60(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds)
;
; Parameters:
; SMRGLHeaderBasic * Stack[0x4]:4   mrgl_data
; Local Variables:
; undefined        Stack[-0x160]:1  local_160
; undefined        Stack[-0x120]:1  local_120
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x110]:1  local_110
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x74]:1  local_74
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
;
; Referenced Globals:
;   TerminatedCString s_engine_model_c_0058a5d8
;   TerminatedCString s_Unable_to_read_magnify_0058a5ea
;   TerminatedCString s_Unable_to_read_verticies_0058a602
;   TerminatedCString s_engine_model_c_0058a625
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_boss.c_modelStructNotSupported4_FUN_0041a5a0
;   engine_model.c_freeMRGLData_FUN_004dcee0
;   engine_model.c_loadModelFile_FUN_004dcd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dcf60
        ;   Label: engine_model.c_getMRGLBounds_FUN_004dcf60
    PUSH EDI                            ; 004dcf61
    PUSH EBP                            ; 004dcf62
    SUB ESP,0x154                       ; 004dcf63
    MOV EAX,dword ptr [ESP + 0x164]     ; 004dcf69
    MOV dword ptr [ESP + 0x130],ESI     ; 004dcf70
    MOV EDX,dword ptr [EAX]             ; 004dcf77
    MOV EBX,EAX                         ; 004dcf79
    CMP EDX,0x20                        ; 004dcf7b
    JZ 0x004dd370                       ; 004dcf7e
        ;   XREF to: 004dd370 (CONDITIONAL_JUMP)  ; LAB_004dd370
    CMP EDX,0x26                        ; 004dcf84
    JZ 0x004dd3be                       ; 004dcf87
        ;   XREF to: 004dd3be (CONDITIONAL_JUMP)  ; LAB_004dd3be
    LEA EDX,[EAX + 0x8]                 ; 004dcf8d
    MOV dword ptr [ESP + 0x138],EDX     ; 004dcf90
    LEA EDX,[EAX + 0x14]                ; 004dcf97
    MOV ESI,dword ptr [EAX]             ; 004dcf9a
    MOV dword ptr [ESP + 0x12c],EDX     ; 004dcf9c
    CMP ESI,0x14                        ; 004dcfa3
    JNZ 0x004dd3e3                      ; 004dcfa6
        ;   XREF to: 004dd3e3 (CONDITIONAL_JUMP)  ; LAB_004dd3e3
    MOV EAX,0x7fffffff                  ; 004dcfac
        ;   Label: LAB_004dcfac
    MOV EDX,EAX                         ; 004dcfb1
    MOV ECX,dword ptr [EBX + 0x4]       ; 004dcfb3
    SAR EDX,0x1f                        ; 004dcfb6
    IDIV ECX                            ; 004dcfb9
    ADD EAX,EAX                         ; 004dcfbb
    MOV dword ptr [ESP + 0x134],EAX     ; 004dcfbd
    MOV EAX,dword ptr [ESP + 0x138]     ; 004dcfc4
    CMP dword ptr [EAX],0x2             ; 004dcfcb
    JZ 0x004dd003                       ; 004dcfce
        ;   XREF to: 004dd003 (CONDITIONAL_JUMP)  ; LAB_004dd003
    PUSH 0x58a602                       ; 004dcfd0 | = "Unable to read verticies in model!"
    LEA EAX,[ESP + 0x4]                 ; 004dcfd5
    PUSH EAX                            ; 004dcfd9
    MOV ESI,0x58a625                    ; 004dcfda | = "..\\engine\\model.c"
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dcfdf
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004dcfe4
    MOV EAX,ESP                         ; 004dcfe7
    MOV EDI,0x176                       ; 004dcfe9
    PUSH EAX                            ; 004dcfee
    MOV dword ptr [0x01cc4800],ESI      ; 004dcfef | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004dcff5 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004dcffb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dd000
    MOV EBP,0x80000000                  ; 004dd003
        ;   Label: LAB_004dd003
    MOV EAX,0x7fffffff                  ; 004dd008
    XOR EDX,EDX                         ; 004dd00d
    MOV EDI,EBP                         ; 004dd00f
    MOV ESI,EBP                         ; 004dd011
    MOV dword ptr [ESP + 0x140],EAX     ; 004dd013
    MOV ECX,EAX                         ; 004dd01a
    MOV EBX,EAX                         ; 004dd01c
    MOV dword ptr [ESP + 0x13c],EBP     ; 004dd01e
    MOV EAX,dword ptr [ESP + 0x138]     ; 004dd025
    MOV dword ptr [ESP + 0x144],EDX     ; 004dd02c
    MOV dword ptr [ESP + 0x148],EDX     ; 004dd033
    MOV EBP,dword ptr [EAX + 0x8]       ; 004dd03a
    MOV dword ptr [ESP + 0x14c],EDX     ; 004dd03d
    TEST EBP,EBP                        ; 004dd044
    JLE 0x004dd0eb                      ; 004dd046
        ;   XREF to: 004dd0eb (CONDITIONAL_JUMP)  ; LAB_004dd0eb
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004dd04c
    MOV EBP,dword ptr [EAX]             ; 004dd053
        ;   Label: LAB_004dd053
    CMP ESI,EBP                         ; 004dd055
    JGE 0x004dd05b                      ; 004dd057
        ;   XREF to: 004dd05b (CONDITIONAL_JUMP)  ; LAB_004dd05b
    MOV ESI,EBP                         ; 004dd059
    MOV EBP,dword ptr [EAX + 0x4]       ; 004dd05b
        ;   Label: LAB_004dd05b
    CMP EDI,EBP                         ; 004dd05e
    JGE 0x004dd064                      ; 004dd060
        ;   XREF to: 004dd064 (CONDITIONAL_JUMP)  ; LAB_004dd064
    MOV EDI,EBP                         ; 004dd062
    MOV EBP,dword ptr [EAX + 0x8]       ; 004dd064
        ;   Label: LAB_004dd064
    CMP EBP,dword ptr [ESP + 0x13c]     ; 004dd067
    JLE 0x004dd077                      ; 004dd06e
        ;   XREF to: 004dd077 (CONDITIONAL_JUMP)  ; LAB_004dd077
    MOV dword ptr [ESP + 0x13c],EBP     ; 004dd070
    MOV EBP,dword ptr [EAX]             ; 004dd077
        ;   Label: LAB_004dd077
    CMP EBX,EBP                         ; 004dd079
    JLE 0x004dd07f                      ; 004dd07b
        ;   XREF to: 004dd07f (CONDITIONAL_JUMP)  ; LAB_004dd07f
    MOV EBX,EBP                         ; 004dd07d
    MOV EBP,dword ptr [EAX + 0x4]       ; 004dd07f
        ;   Label: LAB_004dd07f
    CMP ECX,EBP                         ; 004dd082
    JLE 0x004dd088                      ; 004dd084
        ;   XREF to: 004dd088 (CONDITIONAL_JUMP)  ; LAB_004dd088
    MOV ECX,EBP                         ; 004dd086
    MOV EBP,dword ptr [EAX + 0x8]       ; 004dd088
        ;   Label: LAB_004dd088
    CMP EBP,dword ptr [ESP + 0x140]     ; 004dd08b
    JGE 0x004dd09b                      ; 004dd092
        ;   XREF to: 004dd09b (CONDITIONAL_JUMP)  ; LAB_004dd09b
    MOV dword ptr [ESP + 0x140],EBP     ; 004dd094
    FILD dword ptr [EAX]                ; 004dd09b
        ;   Label: LAB_004dd09b
    FILD dword ptr [EAX + 0x4]          ; 004dd09d
    FILD dword ptr [EAX + 0x8]          ; 004dd0a0
    MOV EBP,dword ptr [ESP + 0x138]     ; 004dd0a3
    ADD EAX,0xc                         ; 004dd0aa
    INC EDX                             ; 004dd0ad
    FXCH ST2                            ; 004dd0ae
    FADD float ptr [ESP + 0x14c]        ; 004dd0b0
    FXCH                                ; 004dd0b7
    FADD float ptr [ESP + 0x148]        ; 004dd0b9
    FXCH ST2                            ; 004dd0c0
    FADD float ptr [ESP + 0x144]        ; 004dd0c2
    FXCH                                ; 004dd0c9
    FSTP float ptr [ESP + 0x14c]        ; 004dd0cb
    FXCH                                ; 004dd0d2
    FSTP float ptr [ESP + 0x148]        ; 004dd0d4
    FSTP float ptr [ESP + 0x144]        ; 004dd0db
    CMP EDX,dword ptr [EBP + 0x8]       ; 004dd0e2
    JL 0x004dd053                       ; 004dd0e5
        ;   XREF to: 004dd053 (CONDITIONAL_JUMP)  ; LAB_004dd053
    MOV EAX,dword ptr [ESP + 0x134]     ; 004dd0eb
        ;   Label: LAB_004dd0eb
    MOV EDX,ESI                         ; 004dd0f2
    IMUL EDX                            ; 004dd0f4
    SHRD EAX,EDX,0x10                   ; 004dd0f6
    MOV ESI,EAX                         ; 004dd0fa
    MOV dword ptr [ESP + 0xc4],EAX      ; 004dd0fc
    MOV EDX,EDI                         ; 004dd103
    MOV EAX,dword ptr [ESP + 0x134]     ; 004dd105
    IMUL EDX                            ; 004dd10c
    SHRD EAX,EDX,0x10                   ; 004dd10e
    MOV EDX,dword ptr [ESP + 0x13c]     ; 004dd112
    MOV dword ptr [ESP + 0xc8],EAX      ; 004dd119
    MOV EAX,dword ptr [ESP + 0x134]     ; 004dd120
    IMUL EDX                            ; 004dd127
    SHRD EAX,EDX,0x10                   ; 004dd129
    MOV dword ptr [ESP + 0xcc],EAX      ; 004dd12d
    MOV EDX,EBX                         ; 004dd134
    MOV EAX,dword ptr [ESP + 0x134]     ; 004dd136
    IMUL EDX                            ; 004dd13d
    SHRD EAX,EDX,0x10                   ; 004dd13f
    MOV EBX,EAX                         ; 004dd143
    MOV dword ptr [ESP + 0xb8],EAX      ; 004dd145
    MOV EDX,ECX                         ; 004dd14c
    MOV EAX,dword ptr [ESP + 0x134]     ; 004dd14e
    IMUL EDX                            ; 004dd155
    SHRD EAX,EDX,0x10                   ; 004dd157
    MOV EDX,dword ptr [ESP + 0x140]     ; 004dd15b
    MOV dword ptr [ESP + 0xbc],EAX      ; 004dd162
    MOV EAX,dword ptr [ESP + 0x134]     ; 004dd169
    IMUL EDX                            ; 004dd170
    SHRD EAX,EDX,0x10                   ; 004dd172
    MOV dword ptr [ESP + 0xc0],EAX      ; 004dd176
    MOV EAX,dword ptr [ESP + 0x138]     ; 004dd17d
    FLD float ptr [ESP + 0x14c]         ; 004dd184
    FILD dword ptr [EAX + 0x8]          ; 004dd18b
    FLD1                                ; 004dd18e
    FDIVRP                              ; 004dd190
    FXCH                                ; 004dd192
    FMUL ST1                            ; 004dd194
    FLD float ptr [ESP + 0x148]         ; 004dd196
    FMUL ST2                            ; 004dd19d
    FLD float ptr [ESP + 0x144]         ; 004dd19f
    FMULP ST3                           ; 004dd1a6
    MOV EAX,dword ptr [ESP + 0x134]     ; 004dd1a8
    FXCH                                ; 004dd1af
    FSTP float ptr [ESP + 0x14c]        ; 004dd1b1
    FSTP float ptr [ESP + 0x148]        ; 004dd1b8
    FLD float ptr [ESP + 0x14c]         ; 004dd1bf
    CALL crt_math.c_round_FUN_00563a30  ; 004dd1c6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x150]       ; 004dd1cb
    MOV EDX,dword ptr [ESP + 0x150]     ; 004dd1d2
    FSTP float ptr [ESP + 0x144]        ; 004dd1d9
    IMUL EDX                            ; 004dd1e0
    SHRD EAX,EDX,0x10                   ; 004dd1e2
    FLD float ptr [ESP + 0x148]         ; 004dd1e6
    MOV dword ptr [ESP + 0xd0],EAX      ; 004dd1ed
    CALL crt_math.c_round_FUN_00563a30  ; 004dd1f4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x150]       ; 004dd1f9
    MOV EAX,dword ptr [ESP + 0x134]     ; 004dd200
    MOV EDX,dword ptr [ESP + 0x150]     ; 004dd207
    IMUL EDX                            ; 004dd20e
    SHRD EAX,EDX,0x10                   ; 004dd210
    FLD float ptr [ESP + 0x144]         ; 004dd214
    MOV dword ptr [ESP + 0xd4],EAX      ; 004dd21b
    CALL crt_math.c_round_FUN_00563a30  ; 004dd222
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x150]       ; 004dd227
    MOV EAX,dword ptr [ESP + 0x134]     ; 004dd22e
    MOV EDX,dword ptr [ESP + 0x150]     ; 004dd235
    IMUL EDX                            ; 004dd23c
    SHRD EAX,EDX,0x10                   ; 004dd23e
    MOV dword ptr [ESP + 0xd8],EAX      ; 004dd242
    MOV EAX,ESI                         ; 004dd249
    CDQ                                 ; 004dd24b
    XOR EAX,EDX                         ; 004dd24c
    SUB EAX,EDX                         ; 004dd24e
    MOV ECX,EAX                         ; 004dd250
    MOV dword ptr [ESP + 0xe0],EAX      ; 004dd252
    MOV EAX,EBX                         ; 004dd259
    CDQ                                 ; 004dd25b
    XOR EAX,EDX                         ; 004dd25c
    SUB EAX,EDX                         ; 004dd25e
    CMP ECX,EAX                         ; 004dd260
    JGE 0x004dd272                      ; 004dd262
        ;   XREF to: 004dd272 (CONDITIONAL_JUMP)  ; LAB_004dd272
    MOV EAX,EBX                         ; 004dd264
    CDQ                                 ; 004dd266
    XOR EAX,EDX                         ; 004dd267
    SUB EAX,EDX                         ; 004dd269
    MOV dword ptr [ESP + 0xe0],EAX      ; 004dd26b
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004dd272
        ;   Label: LAB_004dd272
    CDQ                                 ; 004dd279
    XOR EAX,EDX                         ; 004dd27a
    SUB EAX,EDX                         ; 004dd27c
    MOV ECX,EAX                         ; 004dd27e
    MOV dword ptr [ESP + 0xe4],EAX      ; 004dd280
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004dd287
    CDQ                                 ; 004dd28e
    XOR EAX,EDX                         ; 004dd28f
    SUB EAX,EDX                         ; 004dd291
    CMP ECX,EAX                         ; 004dd293
    JGE 0x004dd2aa                      ; 004dd295
        ;   XREF to: 004dd2aa (CONDITIONAL_JUMP)  ; LAB_004dd2aa
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004dd297
    CDQ                                 ; 004dd29e
    XOR EAX,EDX                         ; 004dd29f
    SUB EAX,EDX                         ; 004dd2a1
    MOV dword ptr [ESP + 0xe4],EAX      ; 004dd2a3
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004dd2aa
        ;   Label: LAB_004dd2aa
    CDQ                                 ; 004dd2b1
    XOR EAX,EDX                         ; 004dd2b2
    SUB EAX,EDX                         ; 004dd2b4
    MOV ECX,EAX                         ; 004dd2b6
    MOV dword ptr [ESP + 0xe8],EAX      ; 004dd2b8
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004dd2bf
    CDQ                                 ; 004dd2c6
    XOR EAX,EDX                         ; 004dd2c7
    SUB EAX,EDX                         ; 004dd2c9
    CMP ECX,EAX                         ; 004dd2cb
    JGE 0x004dd2e2                      ; 004dd2cd
        ;   XREF to: 004dd2e2 (CONDITIONAL_JUMP)  ; LAB_004dd2e2
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004dd2cf
    CDQ                                 ; 004dd2d6
    XOR EAX,EDX                         ; 004dd2d7
    SUB EAX,EDX                         ; 004dd2d9
    MOV dword ptr [ESP + 0xe8],EAX      ; 004dd2db
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004dd2e2
        ;   Label: LAB_004dd2e2
    MOV dword ptr [ESP + 0x150],EAX     ; 004dd2e9
    FILD dword ptr [ESP + 0x150]        ; 004dd2f0
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004dd2f7
    FLD ST0                             ; 004dd2fe
    MOV dword ptr [ESP + 0x150],EAX     ; 004dd300
    FMULP                               ; 004dd307
    FILD dword ptr [ESP + 0x150]        ; 004dd309
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004dd310
    FMUL ST0                            ; 004dd317
    MOV dword ptr [ESP + 0x150],EAX     ; 004dd319
    FADDP                               ; 004dd320
    FILD dword ptr [ESP + 0x150]        ; 004dd322
    FMUL ST0                            ; 004dd329
    FADDP                               ; 004dd32b
    FSQRT                               ; 004dd32d
    MOV ECX,0xd                         ; 004dd32f
    LEA EDI,[ESP + 0x50]                ; 004dd334
    LEA ESI,[ESP + 0xb8]                ; 004dd338
    CALL crt_math.c_round_FUN_00563a30  ; 004dd33f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0xdc]        ; 004dd344
    MOVSD.REP ES:EDI,ESI                ; 004dd34b
        ;   Label: LAB_004dd34b
    MOV ECX,0xd                         ; 004dd34d
    MOV EDI,dword ptr [ESP + 0x130]     ; 004dd352
    LEA ESI,[ESP + 0x50]                ; 004dd359
    MOVSD.REP ES:EDI,ESI                ; 004dd35d
    MOV EAX,dword ptr [ESP + 0x130]     ; 004dd35f
    ADD ESP,0x154                       ; 004dd366
    POP EBP                             ; 004dd36c
    POP EDI                             ; 004dd36d
    POP EBX                             ; 004dd36e
    RET                                 ; 004dd36f
    ADD EAX,0x18                        ; 004dd370
        ;   Label: LAB_004dd370
    PUSH EAX                            ; 004dd373
    CALL engine_model.c_loadModelFile_FUN_004dcd10 ; 004dd374
        ;   XREF to: 004dcd10 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_004dcd10(char * filename)
    ADD ESP,0x4                         ; 004dd379
    LEA ESI,[ESP + 0xec]                ; 004dd37c
    PUSH EAX                            ; 004dd383
    LEA EDI,[ESP + 0xbc]                ; 004dd384
    MOV EBX,EAX                         ; 004dd38b
    CALL engine_model.c_getMRGLBounds_FUN_004dcf60 ; 004dd38d
        ;   XREF to: 004dcf60 (UNCONDITIONAL_CALL)  ; SMRGLModelBounds * engine_model.c_getMRGLBounds_FUN_004dcf60(SMRGLHeaderBasic * mrgl_data, SMRGLModelBounds * output_bounds)
    ADD ESP,0x4                         ; 004dd392
    MOV ECX,0xd                         ; 004dd395
    LEA ESI,[ESP + 0xec]                ; 004dd39a
    PUSH EBX                            ; 004dd3a1
    MOVSD.REP ES:EDI,ESI                ; 004dd3a2
    CALL engine_model.c_freeMRGLData_FUN_004dcee0 ; 004dd3a4
        ;   XREF to: 004dcee0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_freeMRGLData_FUN_004dcee0()
    MOV ECX,0xd                         ; 004dd3a9
    LEA EDI,[ESP + 0x54]                ; 004dd3ae
    LEA ESI,[ESP + 0xbc]                ; 004dd3b2
    ADD ESP,0x4                         ; 004dd3b9
    JMP 0x004dd34b                      ; 004dd3bc
        ;   XREF to: 004dd34b (UNCONDITIONAL_JUMP)  ; LAB_004dd34b
    PUSH EAX                            ; 004dd3be
        ;   Label: LAB_004dd3be
    LEA ESI,[ESP + 0x88]                ; 004dd3bf
    LEA EDI,[ESP + 0x54]                ; 004dd3c6
    CALL engine_boss.c_modelStructNotSupported4_FUN_0041a5a0 ; 004dd3ca
        ;   XREF to: 0041a5a0 (UNCONDITIONAL_CALL)  ; undefined engine_boss.c_modelStructNotSupported4_FUN_0041a5a0()
    MOV ECX,0xd                         ; 004dd3cf
    LEA ESI,[ESP + 0x88]                ; 004dd3d4
    ADD ESP,0x4                         ; 004dd3db
    JMP 0x004dd34b                      ; 004dd3de
        ;   XREF to: 004dd34b (UNCONDITIONAL_JUMP)  ; LAB_004dd34b
    MOV EDI,0x58a5d8                    ; 004dd3e3 | = "..\\engine\\model.c"
        ;   Label: LAB_004dd3e3
    MOV EBP,0x172                       ; 004dd3e8
    PUSH 0x58a5ea                       ; 004dd3ed | = "Unable to read magnify!"
    MOV dword ptr [0x01cc4800],EDI      ; 004dd3f2 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004dd3f8 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004dd3fe
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dd403
    JMP 0x004dcfac                      ; 004dd406
        ;   XREF to: 004dcfac (UNCONDITIONAL_JUMP)  ; LAB_004dcfac

