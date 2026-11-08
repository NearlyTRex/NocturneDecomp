; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00477fe0(float *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[3]:
;   FUN_0044f580 at 0044f61c
;   FUN_00536cb0 at 00536ddc
;   FUN_005621a0 at 005621c8
;
; Called Functions:
;   FUN_00477c60
;   FUN_00477f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477fe0
        ;   Label: FUN_00477fe0
    PUSH ESI                            ; 00477fe1
    PUSH EDI                            ; 00477fe2
    PUSH EBP                            ; 00477fe3
    SUB ESP,0x6c                        ; 00477fe4
    MOV EBX,dword ptr [ESP + 0x80]      ; 00477fe7
    MOV ESI,dword ptr [ESP + 0x84]      ; 00477fee
    FLD float ptr [EBX + 0x24]          ; 00477ff5
    FMUL float ptr [ESI + 0x18]         ; 00477ff8
    FLD float ptr [EBX + 0x2c]          ; 00477ffb
    FMUL float ptr [ESI + 0x1c]         ; 00477ffe
    FADDP                               ; 00478001
    FLDZ                                ; 00478003
    FCOMPP                              ; 00478005
    FNSTSW AX                           ; 00478007
    SAHF                                ; 00478009
    JNC 0x0047835a                      ; 0047800a
        ;   XREF to: 0047835a (CONDITIONAL_JUMP)  ; LAB_0047835a
    FLD float ptr [EBX + 0x8]           ; 00478010
    FMUL float ptr [ESI + 0x1c]         ; 00478013
    MOV EBP,EBX                         ; 00478016
    LEA EDI,[EBX + 0xc]                 ; 00478018
    FLD float ptr [EBX]                 ; 0047801b
    FMUL float ptr [ESI + 0x18]         ; 0047801d
    FLD float ptr [EDI + 0x8]           ; 00478020
    LEA EAX,[EBX + 0x18]                ; 00478023
    FMUL float ptr [ESI + 0x1c]         ; 00478026
    FLD float ptr [EAX + 0x8]           ; 00478029
    FMUL float ptr [ESI + 0x1c]         ; 0047802c
    FLD float ptr [EDI]                 ; 0047802f
    FMUL float ptr [ESI + 0x18]         ; 00478031
    FLD float ptr [EAX]                 ; 00478034
    FMUL float ptr [ESI + 0x18]         ; 00478036
    FXCH ST4                            ; 00478039
    FADDP ST5,ST0                       ; 0047803b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0047803d
    FXCH ST4                            ; 00478041
    FST float ptr [ESP + 0x40]          ; 00478043
    FXCH ST4                            ; 00478047
    FADDP ST2,ST0                       ; 00478049
    FADDP ST2,ST0                       ; 0047804b
    FSTP float ptr [ESP + 0x50]         ; 0047804d
    FSTP float ptr [ESP + 0x38]         ; 00478051
    FCOMP float ptr [ESP + 0x50]        ; 00478055
    FNSTSW AX                           ; 00478059
    SAHF                                ; 0047805b
    JA 0x00478362                       ; 0047805c
        ;   XREF to: 00478362 (CONDITIONAL_JUMP)  ; LAB_00478362
    FLD float ptr [ESP + 0x50]          ; 00478062
        ;   Label: LAB_00478062
    FCOMP float ptr [ESP + 0x38]        ; 00478066
    FNSTSW AX                           ; 0047806a
    SAHF                                ; 0047806c
    JBE 0x00478091                      ; 0047806d
        ;   XREF to: 00478091 (CONDITIONAL_JUMP)  ; LAB_00478091
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047806f
    MOV dword ptr [ESP + 0x58],EAX      ; 00478073
    MOV EAX,dword ptr [ESP + 0x38]      ; 00478077
    MOV dword ptr [ESP + 0x50],EAX      ; 0047807b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047807f
    MOV dword ptr [ESP + 0x38],EAX      ; 00478083
    MOV EAX,EDI                         ; 00478087
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00478089
    MOV dword ptr [ESP + 0x3c],EAX      ; 0047808d
    FLD float ptr [ESP + 0x40]          ; 00478091
        ;   Label: LAB_00478091
    FCOMP float ptr [ESP + 0x50]        ; 00478095
    FNSTSW AX                           ; 00478099
    SAHF                                ; 0047809b
    JBE 0x004780ac                      ; 0047809c
        ;   XREF to: 004780ac (CONDITIONAL_JUMP)  ; LAB_004780ac
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047809e
    MOV dword ptr [ESP + 0x40],EAX      ; 004780a2
    MOV EAX,EBP                         ; 004780a6
    MOV EBP,EDI                         ; 004780a8
    MOV EDI,EAX                         ; 004780aa
    FLD float ptr [ESP + 0x38]          ; 004780ac
        ;   Label: LAB_004780ac
    FCOMP float ptr [ESI + 0x2c]        ; 004780b0
    FNSTSW AX                           ; 004780b3
    SAHF                                ; 004780b5
    JC 0x0047835a                       ; 004780b6
        ;   XREF to: 0047835a (CONDITIONAL_JUMP)  ; LAB_0047835a
    FLD float ptr [ESP + 0x40]          ; 004780bc
    FCOMP float ptr [ESI + 0x30]        ; 004780c0
    FNSTSW AX                           ; 004780c3
    SAHF                                ; 004780c5
    JA 0x0047835a                       ; 004780c6
        ;   XREF to: 0047835a (CONDITIONAL_JUMP)  ; LAB_0047835a
    XOR EDX,EDX                         ; 004780cc
    FLD float ptr [EBX + 0x4]           ; 004780ce
    MOV dword ptr [ESP + 0x44],EDX      ; 004780d1
    FCOMP float ptr [ESI + 0x24]        ; 004780d5
    FNSTSW AX                           ; 004780d8
    SAHF                                ; 004780da
    JC 0x004780e5                       ; 004780db
        ;   XREF to: 004780e5 (CONDITIONAL_JUMP)  ; LAB_004780e5
    MOV dword ptr [ESP + 0x44],0x1      ; 004780dd
    FLD float ptr [EBX + 0x4]           ; 004780e5
        ;   Label: LAB_004780e5
    FCOMP float ptr [ESI + 0x28]        ; 004780e8
    FNSTSW AX                           ; 004780eb
    SAHF                                ; 004780ed
    JA 0x004780f5                       ; 004780ee
        ;   XREF to: 004780f5 (CONDITIONAL_JUMP)  ; LAB_004780f5
    OR byte ptr [ESP + 0x44],0x2        ; 004780f0
    XOR EAX,EAX                         ; 004780f5
        ;   Label: LAB_004780f5
    FLD float ptr [EBX + 0x10]          ; 004780f7
    MOV dword ptr [ESP + 0x4c],EAX      ; 004780fa
    FCOMP float ptr [ESI + 0x24]        ; 004780fe
    FNSTSW AX                           ; 00478101
    SAHF                                ; 00478103
    JC 0x0047810e                       ; 00478104
        ;   XREF to: 0047810e (CONDITIONAL_JUMP)  ; LAB_0047810e
    MOV dword ptr [ESP + 0x4c],0x1      ; 00478106
    FLD float ptr [EBX + 0x10]          ; 0047810e
        ;   Label: LAB_0047810e
    FCOMP float ptr [ESI + 0x28]        ; 00478111
    FNSTSW AX                           ; 00478114
    SAHF                                ; 00478116
    JA 0x0047811e                       ; 00478117
        ;   XREF to: 0047811e (CONDITIONAL_JUMP)  ; LAB_0047811e
    OR byte ptr [ESP + 0x4c],0x2        ; 00478119
    XOR ECX,ECX                         ; 0047811e
        ;   Label: LAB_0047811e
    FLD float ptr [EBX + 0x1c]          ; 00478120
    MOV dword ptr [ESP + 0x48],ECX      ; 00478123
    FCOMP float ptr [ESI + 0x24]        ; 00478127
    FNSTSW AX                           ; 0047812a
    SAHF                                ; 0047812c
    JC 0x00478137                       ; 0047812d
        ;   XREF to: 00478137 (CONDITIONAL_JUMP)  ; LAB_00478137
    MOV dword ptr [ESP + 0x48],0x1      ; 0047812f
    FLD float ptr [EBX + 0x1c]          ; 00478137
        ;   Label: LAB_00478137
    FCOMP float ptr [ESI + 0x28]        ; 0047813a
    FNSTSW AX                           ; 0047813d
    SAHF                                ; 0047813f
    JA 0x00478147                       ; 00478140
        ;   XREF to: 00478147 (CONDITIONAL_JUMP)  ; LAB_00478147
    OR byte ptr [ESP + 0x48],0x2        ; 00478142
    MOV EAX,dword ptr [ESP + 0x44]      ; 00478147
        ;   Label: LAB_00478147
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0047814b
    MOV ECX,dword ptr [ESP + 0x48]      ; 0047814f
    AND EAX,EDX                         ; 00478153
    TEST EAX,ECX                        ; 00478155
    JNZ 0x0047835a                      ; 00478157
        ;   XREF to: 0047835a (CONDITIONAL_JUMP)  ; LAB_0047835a
    FLDZ                                ; 0047815d
    FCOMP float ptr [EBX + 0x28]        ; 0047815f
    FNSTSW AX                           ; 00478162
    SAHF                                ; 00478164
    JA 0x00478256                       ; 00478165
        ;   XREF to: 00478256 (CONDITIONAL_JUMP)  ; LAB_00478256
    MOV EDX,dword ptr [ESP + 0x44]      ; 0047816b
    XOR EDX,dword ptr [ESP + 0x4c]      ; 0047816f
    XOR EAX,EAX                         ; 00478173
    TEST DL,0x1                         ; 00478175
    JZ 0x004781ac                       ; 00478178
        ;   XREF to: 004781ac (CONDITIONAL_JUMP)  ; LAB_004781ac
    FLD float ptr [ESI + 0x24]          ; 0047817a
    FSUB float ptr [EBX + 0x4]          ; 0047817d
    FLD float ptr [EBX + 0xc]           ; 00478180
    FLD float ptr [EBX + 0x10]          ; 00478183
    FSUB float ptr [EBX + 0x4]          ; 00478186
    FXCH                                ; 00478189
    FSUB float ptr [EBX]                ; 0047818b
    FXCH                                ; 0047818d
    FDIVP ST2,ST0                       ; 0047818f
    FMUL ST1                            ; 00478191
    FADD float ptr [EBX]                ; 00478193
    FSTP float ptr [ESP]                ; 00478195
    FLD float ptr [EBX + 0x14]          ; 00478198
    FSUB float ptr [EBX + 0x8]          ; 0047819b
    FMULP                               ; 0047819e
    FADD float ptr [EBX + 0x8]          ; 004781a0
    MOV EAX,0x1                         ; 004781a3
    FSTP float ptr [ESP + 0x24]         ; 004781a8
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004781ac
        ;   Label: LAB_004781ac
    XOR EDX,dword ptr [ESP + 0x48]      ; 004781b0
    TEST DL,0x1                         ; 004781b4
    JZ 0x004781e9                       ; 004781b7
        ;   XREF to: 004781e9 (CONDITIONAL_JUMP)  ; LAB_004781e9
    FLD float ptr [ESI + 0x24]          ; 004781b9
    FSUB float ptr [EBX + 0x10]         ; 004781bc
    FLD float ptr [EBX + 0x18]          ; 004781bf
    FLD float ptr [EBX + 0x1c]          ; 004781c2
    FSUB float ptr [EBX + 0x10]         ; 004781c5
    FXCH                                ; 004781c8
    FSUB float ptr [EBX + 0xc]          ; 004781ca
    FXCH                                ; 004781cd
    FDIVP ST2,ST0                       ; 004781cf
    FMUL ST1                            ; 004781d1
    FADD float ptr [EBX + 0xc]          ; 004781d3
    FSTP float ptr [ESP + EAX*0x4]      ; 004781d6
    FLD float ptr [EBX + 0x20]          ; 004781d9
    FSUB float ptr [EBX + 0x14]         ; 004781dc
    FMULP                               ; 004781df
    FADD float ptr [EBX + 0x14]         ; 004781e1
    INC EAX                             ; 004781e4
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 004781e5
    MOV EDX,dword ptr [ESP + 0x48]      ; 004781e9
        ;   Label: LAB_004781e9
    XOR EDX,dword ptr [ESP + 0x44]      ; 004781ed
    TEST DL,0x1                         ; 004781f1
    JZ 0x00478225                       ; 004781f4
        ;   XREF to: 00478225 (CONDITIONAL_JUMP)  ; LAB_00478225
    FLD float ptr [ESI + 0x24]          ; 004781f6
    FSUB float ptr [EBX + 0x1c]         ; 004781f9
    FLD float ptr [EBX]                 ; 004781fc
    FLD float ptr [EBX + 0x4]           ; 004781fe
    FSUB float ptr [EBX + 0x1c]         ; 00478201
    FXCH                                ; 00478204
    FSUB float ptr [EBX + 0x18]         ; 00478206
    FXCH                                ; 00478209
    FDIVP ST2,ST0                       ; 0047820b
    FMUL ST1                            ; 0047820d
    FADD float ptr [EBX + 0x18]         ; 0047820f
    FSTP float ptr [ESP + EAX*0x4]      ; 00478212
    FLD float ptr [EBX + 0x8]           ; 00478215
    FSUB float ptr [EBX + 0x20]         ; 00478218
    FMULP                               ; 0047821b
    FADD float ptr [EBX + 0x20]         ; 0047821d
    INC EAX                             ; 00478220
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 00478221
    CMP EAX,0x2                         ; 00478225
        ;   Label: LAB_00478225
    JL 0x00478256                       ; 00478228
        ;   XREF to: 00478256 (CONDITIONAL_JUMP)  ; LAB_00478256
    MOV EAX,dword ptr [ESP]             ; 0047822a
    MOV dword ptr [ESI + 0x3c],EAX      ; 0047822d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478230
    MOV dword ptr [ESI + 0x40],EAX      ; 00478234
    MOV EAX,dword ptr [ESP + 0x4]       ; 00478237
    MOV dword ptr [ESI + 0x44],EAX      ; 0047823b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047823e
    PUSH ESI                            ; 00478242
    MOV dword ptr [ESI + 0x48],EAX      ; 00478243
    CALL FUN_00477c60                   ; 00478246
        ;   XREF to: 00477c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00477c60()
    ADD ESP,0x4                         ; 0047824b
    TEST EAX,EAX                        ; 0047824e
    JNZ 0x00478328                      ; 00478250
        ;   XREF to: 00478328 (CONDITIONAL_JUMP)  ; LAB_00478328
    FLDZ                                ; 00478256
        ;   Label: LAB_00478256
    FCOMP float ptr [EBX + 0x28]        ; 00478258
    FNSTSW AX                           ; 0047825b
    SAHF                                ; 0047825d
    JC 0x004783bb                       ; 0047825e
        ;   XREF to: 004783bb (CONDITIONAL_JUMP)  ; LAB_004783bb
    MOV EDX,dword ptr [ESP + 0x44]      ; 00478264
    XOR EDX,dword ptr [ESP + 0x4c]      ; 00478268
    XOR EAX,EAX                         ; 0047826c
    TEST DL,0x2                         ; 0047826e
    JNZ 0x00478383                      ; 00478271
        ;   XREF to: 00478383 (CONDITIONAL_JUMP)  ; LAB_00478383
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00478277
        ;   Label: LAB_00478277
    XOR EDX,dword ptr [ESP + 0x48]      ; 0047827b
    TEST DL,0x2                         ; 0047827f
    JZ 0x004782b5                       ; 00478282
        ;   XREF to: 004782b5 (CONDITIONAL_JUMP)  ; LAB_004782b5
    FLD float ptr [ESI + 0x28]          ; 00478284
    FSUB float ptr [EBX + 0x10]         ; 00478287
    FLD float ptr [EBX + 0x18]          ; 0047828a
    FLD float ptr [EBX + 0x1c]          ; 0047828d
    FSUB float ptr [EBX + 0x10]         ; 00478290
    FXCH                                ; 00478293
    FSUB float ptr [EBX + 0xc]          ; 00478295
    FXCH                                ; 00478298
    FDIVP ST2,ST0                       ; 0047829a
    FMUL ST1                            ; 0047829c
    FADD float ptr [EBX + 0xc]          ; 0047829e
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 004782a1
    FLD float ptr [EBX + 0x20]          ; 004782a5
    FSUB float ptr [EBX + 0x14]         ; 004782a8
    FMULP                               ; 004782ab
    FADD float ptr [EBX + 0x14]         ; 004782ad
    INC EAX                             ; 004782b0
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 004782b1
    MOV EDX,dword ptr [ESP + 0x48]      ; 004782b5
        ;   Label: LAB_004782b5
    XOR EDX,dword ptr [ESP + 0x44]      ; 004782b9
    TEST DL,0x2                         ; 004782bd
    JZ 0x004782f2                       ; 004782c0
        ;   XREF to: 004782f2 (CONDITIONAL_JUMP)  ; LAB_004782f2
    FLD float ptr [ESI + 0x28]          ; 004782c2
    FSUB float ptr [EBX + 0x1c]         ; 004782c5
    FLD float ptr [EBX]                 ; 004782c8
    FLD float ptr [EBX + 0x4]           ; 004782ca
    FSUB float ptr [EBX + 0x1c]         ; 004782cd
    FXCH                                ; 004782d0
    FSUB float ptr [EBX + 0x18]         ; 004782d2
    FXCH                                ; 004782d5
    FDIVP ST2,ST0                       ; 004782d7
    FMUL ST1                            ; 004782d9
    FADD float ptr [EBX + 0x18]         ; 004782db
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 004782de
    FLD float ptr [EBX + 0x8]           ; 004782e2
    FSUB float ptr [EBX + 0x20]         ; 004782e5
    FMULP                               ; 004782e8
    FADD float ptr [EBX + 0x20]         ; 004782ea
    INC EAX                             ; 004782ed
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 004782ee
    CMP EAX,0x2                         ; 004782f2
        ;   Label: LAB_004782f2
    JL 0x004783bb                       ; 004782f5
        ;   XREF to: 004783bb (CONDITIONAL_JUMP)  ; LAB_004783bb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004782fb
    MOV dword ptr [ESI + 0x3c],EAX      ; 004782ff
    MOV EAX,dword ptr [ESP + 0x18]      ; 00478302
    MOV dword ptr [ESI + 0x40],EAX      ; 00478306
    MOV EAX,dword ptr [ESP + 0x10]      ; 00478309
    MOV dword ptr [ESI + 0x44],EAX      ; 0047830d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00478310
    PUSH ESI                            ; 00478314
    MOV dword ptr [ESI + 0x48],EAX      ; 00478315
    CALL FUN_00477c60                   ; 00478318
        ;   XREF to: 00477c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00477c60()
    ADD ESP,0x4                         ; 0047831d
    TEST EAX,EAX                        ; 00478320
    JZ 0x004783bb                       ; 00478322
        ;   XREF to: 004783bb (CONDITIONAL_JUMP)  ; LAB_004783bb
    MOV dword ptr [ESI + 0x8],0x0       ; 00478328
        ;   Label: LAB_00478328
    FLD float ptr [ESI + 0x18]          ; 0047832f
    FMUL float ptr [ESI + 0x4c]         ; 00478332
    FLD float ptr [ESI + 0x1c]          ; 00478335
    FMUL float ptr [ESI + 0x4c]         ; 00478338
    MOV EAX,dword ptr [ESI + 0x4c]      ; 0047833b
    MOV dword ptr [ESI],EAX             ; 0047833e
    FXCH                                ; 00478340
    FADD float ptr [ESI + 0x10]         ; 00478342
    FXCH                                ; 00478345
    FADD float ptr [ESI + 0x14]         ; 00478347
    FLD float ptr [ESI + 0x54]          ; 0047834a
    FLD float ptr [ESI + 0x58]          ; 0047834d
    FSUBP ST2,ST0                       ; 00478350
    FSUBP ST2,ST0                       ; 00478352
    FSTP float ptr [ESI + 0xc]          ; 00478354
    FSTP float ptr [ESI + 0x4]          ; 00478357
    ADD ESP,0x6c                        ; 0047835a
        ;   Label: LAB_0047835a
    POP EBP                             ; 0047835d
    POP EDI                             ; 0047835e
    POP ESI                             ; 0047835f
    POP EBX                             ; 00478360
    RET                                 ; 00478361
    MOV EAX,dword ptr [ESP + 0x40]      ; 00478362
        ;   Label: LAB_00478362
    MOV dword ptr [ESP + 0x54],EAX      ; 00478366
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047836a
    MOV EBP,EDI                         ; 0047836e
    MOV dword ptr [ESP + 0x40],EAX      ; 00478370
    MOV EAX,dword ptr [ESP + 0x54]      ; 00478374
    MOV EDI,EBX                         ; 00478378
    MOV dword ptr [ESP + 0x50],EAX      ; 0047837a
    JMP 0x00478062                      ; 0047837e
        ;   XREF to: 00478062 (UNCONDITIONAL_JUMP)  ; LAB_00478062
    FLD float ptr [ESI + 0x28]          ; 00478383
        ;   Label: LAB_00478383
    FSUB float ptr [EBX + 0x4]          ; 00478386
    FLD float ptr [EBX + 0xc]           ; 00478389
    FLD float ptr [EBX + 0x10]          ; 0047838c
    FSUB float ptr [EBX + 0x4]          ; 0047838f
    FXCH                                ; 00478392
    FSUB float ptr [EBX]                ; 00478394
    FXCH                                ; 00478396
    FDIVP ST2,ST0                       ; 00478398
    FMUL ST1                            ; 0047839a
    FADD float ptr [EBX]                ; 0047839c
    FSTP float ptr [ESP + 0xc]          ; 0047839e
    FLD float ptr [EBX + 0x14]          ; 004783a2
    FSUB float ptr [EBX + 0x8]          ; 004783a5
    FMULP                               ; 004783a8
    FADD float ptr [EBX + 0x8]          ; 004783aa
    MOV EAX,0x1                         ; 004783ad
    FSTP float ptr [ESP + 0x18]         ; 004783b2
    JMP 0x00478277                      ; 004783b6
        ;   XREF to: 00478277 (UNCONDITIONAL_JUMP)  ; LAB_00478277
    PUSH EDI                            ; 004783bb
        ;   Label: LAB_004783bb
    PUSH EBP                            ; 004783bc
    PUSH ESI                            ; 004783bd
    CALL FUN_00477f40                   ; 004783be
        ;   XREF to: 00477f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00477f40()
    ADD ESP,0xc                         ; 004783c3
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004783c6
    PUSH EBX                            ; 004783ca
    PUSH EBP                            ; 004783cb
    PUSH ESI                            ; 004783cc
    CALL FUN_00477f40                   ; 004783cd
        ;   XREF to: 00477f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00477f40()
    ADD ESP,0xc                         ; 004783d2
    ADD ESP,0x6c                        ; 004783d5
    POP EBP                             ; 004783d8
    POP EDI                             ; 004783d9
    POP ESI                             ; 004783da
    POP EBX                             ; 004783db
    RET                                 ; 004783dc

