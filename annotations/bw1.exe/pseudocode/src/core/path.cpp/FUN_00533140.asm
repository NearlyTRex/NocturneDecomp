; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00533140(float *param_1,int param_2,int param_3,int param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00533dc0 at 00534461
;
; Referenced Globals:
;   void* switchdataD_005330e4 = 005331fe
;   void* switchdataD_005330f4 = 00533216
;   void* switchdataD_00533104 = 0053325f
;   void* switchdataD_00533124 = 0053341f
;   TerminatedCString s_core_path_cpp_005ec92a
;   TerminatedCString s_CPathMap_getDirection_Sh_005ec93b
;   undefined4 DAT_005ec9b4
;   undefined4 DAT_005ec9b8
;   undefined4 DAT_005ec9bc
;   undefined4 DAT_005ec9c4
;   undefined4 DAT_005ec9cc
;   undefined4 DAT_005ec9d4
;   undefined4 DAT_005ec9dc
;   undefined4 DAT_005ec9e4
;   undefined4 DAT_005ec9ec
;   ... and 2 more
;
; Called Functions:
;   FUN_005030e0
;   FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533140
        ;   Label: FUN_00533140
    PUSH ESI                            ; 00533141
    PUSH EDI                            ; 00533142
    PUSH EBP                            ; 00533143
    MOV EBP,ESP                         ; 00533144
    SUB ESP,0x94                        ; 00533146
    AND ESP,0xfffffff8                  ; 0053314c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053314f
    MOV EBX,dword ptr [EBP + 0x24]      ; 00533152
    FLD float ptr [EAX + 0x4]           ; 00533155
    FLD float ptr [EAX + 0x8]           ; 00533158
    FLD float ptr [EAX]                 ; 0053315b
    LEA EDI,[ESP + 0x30]                ; 0053315d
    LEA ESI,[ESP + 0x48]                ; 00533161
    LEA EAX,[ESP + 0x30]                ; 00533165
    FSUB float ptr [EBX]                ; 00533169
    FXCH ST2                            ; 0053316b
    FSUB float ptr [EBX + 0x4]          ; 0053316d
    FXCH                                ; 00533170
    FSUB float ptr [EBX + 0x8]          ; 00533172
    FXCH ST2                            ; 00533175
    FSTP float ptr [ESP + 0x48]         ; 00533177
    FSTP float ptr [ESP + 0x4c]         ; 0053317b
    FSTP float ptr [ESP + 0x50]         ; 0053317f
    MOVSD ES:EDI,ESI                    ; 00533183
    MOVSD ES:EDI,ESI                    ; 00533184
    MOVSD ES:EDI,ESI                    ; 00533185
    PUSH EAX                            ; 00533186
    LEA ESI,[ESP + 0x64]                ; 00533187
    LEA EDI,[ESP + 0x1c]                ; 0053318b
    CALL FUN_005a7520                   ; 0053318f
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x64]                ; 00533194
    ADD ESP,0x4                         ; 00533198
    MOVSD ES:EDI,ESI                    ; 0053319b
    MOVSD ES:EDI,ESI                    ; 0053319c
    MOVSD ES:EDI,ESI                    ; 0053319d
    FLD float ptr [0x005ec9b4]          ; 0053319e | DAT_005ec9b4
    FLD float ptr [ESP + 0x18]          ; 005331a4
    FMUL ST1                            ; 005331a8
    FLD float ptr [ESP + 0x1c]          ; 005331aa
    FMUL ST2                            ; 005331ae
    FLD float ptr [ESP + 0x20]          ; 005331b0
    FMULP ST3                           ; 005331b4
    LEA EDI,[ESP + 0x24]                ; 005331b6
    LEA ESI,[ESP + 0x6c]                ; 005331ba
    FXCH                                ; 005331be
    FSTP float ptr [ESP + 0x6c]         ; 005331c0
    FSTP float ptr [ESP + 0x70]         ; 005331c4
    FSTP float ptr [ESP + 0x74]         ; 005331c8
    MOVSD ES:EDI,ESI                    ; 005331cc
    MOVSD ES:EDI,ESI                    ; 005331cd
    MOVSD ES:EDI,ESI                    ; 005331ce
    MOV EBX,0x1                         ; 005331cf
    MOV AH,byte ptr [ESP + 0x2b]        ; 005331d4
    XOR EDX,EDX                         ; 005331d8
    XOR AH,0x80                         ; 005331da
    MOV dword ptr [ESP + 0x3c],EDX      ; 005331dd
    MOV byte ptr [ESP + 0x2b],AH        ; 005331e1
    MOV EAX,dword ptr [EBP + 0x18]      ; 005331e5
    MOV dword ptr [ESP + 0x40],EDX      ; 005331e8
    SUB EAX,EBX                         ; 005331ec
    MOV dword ptr [ESP + 0x44],EDX      ; 005331ee
    CMP EAX,0x3                         ; 005331f2
    JA 0x00533206                       ; 005331f5
        ;   XREF to: 00533206 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5330e4]  ; 005331f7 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [ESP + 0x44],0x3f800000 ; 005331fe
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00533206
        ;   Label: default
    DEC EAX                             ; 00533209
    CMP EAX,0x3                         ; 0053320a
    JA 0x00533221                       ; 0053320d
        ;   XREF to: 00533221 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5330f4]  ; 0053320f | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD1                                ; 00533216
        ;   Label: caseD_1
    FADD float ptr [ESP + 0x44]         ; 00533218
    INC EBX                             ; 0053321c
        ;   Label: LAB_0053321c
    FSTP float ptr [ESP + 0x44]         ; 0053321d
    TEST dword ptr [ESP + 0x3c],0x7fffffff ; 00533221
        ;   Label: default
    JNZ 0x00533401                      ; 00533229
        ;   XREF to: 00533401 (CONDITIONAL_JUMP)  ; LAB_00533401
    TEST dword ptr [ESP + 0x40],0x7fffffff ; 0053322f
    JNZ 0x00533401                      ; 00533237
        ;   XREF to: 00533401 (CONDITIONAL_JUMP)  ; LAB_00533401
    TEST dword ptr [ESP + 0x44],0x7fffffff ; 0053323d
    JNZ 0x00533401                      ; 00533245
        ;   XREF to: 00533401 (CONDITIONAL_JUMP)  ; LAB_00533401
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053324b
    DEC EAX                             ; 0053324e
    CMP EAX,0x7                         ; 0053324f
    JA 0x005333df                       ; 00533252
        ;   XREF to: 005333df (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x533104]  ; 00533258 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053325f
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0x8c],EAX      ; 00533263
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0053326a
    MOV ESP,EBP                         ; 00533271
    POP EBP                             ; 00533273
    POP EDI                             ; 00533274
    POP ESI                             ; 00533275
    POP EBX                             ; 00533276
    RET                                 ; 00533277
    MOV dword ptr [ESP + 0x44],0xbf800000 ; 00533278
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00533280
    DEC EAX                             ; 00533283
    CMP EAX,0x3                         ; 00533284
    JA 0x00533221                       ; 00533287
        ;   XREF to: 00533221 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5330f4]  ; 00533289 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    XOR ECX,ECX                         ; 00533290
        ;   Label: caseD_3
    MOV EDX,0x3f800000                  ; 00533292
    MOV dword ptr [ESP + 0x40],ECX      ; 00533297
    MOV dword ptr [ESP + 0x44],ECX      ; 0053329b
    MOV dword ptr [ESP + 0x3c],EDX      ; 0053329f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005332a3
    DEC EAX                             ; 005332a6
    CMP EAX,0x3                         ; 005332a7
    JA 0x00533221                       ; 005332aa
        ;   XREF to: 00533221 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5330f4]  ; 005332b0 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [ESP + 0x3c],0xbf800000 ; 005332b7
        ;   Label: caseD_4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005332bf
    DEC EAX                             ; 005332c2
    CMP EAX,0x3                         ; 005332c3
    JA 0x00533221                       ; 005332c6
        ;   XREF to: 00533221 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5330f4]  ; 005332cc | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD float ptr [ESP + 0x44]          ; 005332d3
        ;   Label: caseD_2
    FADD float ptr [0x005ec9b8]         ; 005332d7 | DAT_005ec9b8
    JMP 0x0053321c                      ; 005332dd
        ;   XREF to: 0053321c (UNCONDITIONAL_JUMP)  ; LAB_0053321c
    FLD1                                ; 005332e2
        ;   Label: caseD_3
    FADD float ptr [ESP + 0x3c]         ; 005332e4
    INC EBX                             ; 005332e8
    FSTP float ptr [ESP + 0x3c]         ; 005332e9
    JMP 0x00533221                      ; 005332ed
        ;   XREF to: 00533221 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x3c]          ; 005332f2
        ;   Label: caseD_4
    FADD float ptr [0x005ec9b8]         ; 005332f6 | DAT_005ec9b8
    INC EBX                             ; 005332fc
    FSTP float ptr [ESP + 0x3c]         ; 005332fd
    JMP 0x00533221                      ; 00533301
        ;   XREF to: 00533221 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x28]          ; 00533306
        ;   Label: caseD_5
    FADD double ptr [0x005ec9d4]        ; 0053330a | DAT_005ec9d4
    FSTP float ptr [ESP + 0x8c]         ; 00533310
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00533317
    MOV ESP,EBP                         ; 0053331e
    POP EBP                             ; 00533320
    POP EDI                             ; 00533321
    POP ESI                             ; 00533322
    POP EBX                             ; 00533323
    RET                                 ; 00533324
    FLD float ptr [ESP + 0x28]          ; 00533325
        ;   Label: caseD_3
    FADD double ptr [0x005ec9e4]        ; 00533329 | DAT_005ec9e4
    FSTP float ptr [ESP + 0x8c]         ; 0053332f
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00533336
    MOV ESP,EBP                         ; 0053333d
    POP EBP                             ; 0053333f
    POP EDI                             ; 00533340
    POP ESI                             ; 00533341
    POP EBX                             ; 00533342
    RET                                 ; 00533343
    FLD float ptr [ESP + 0x28]          ; 00533344
        ;   Label: caseD_7
    FADD double ptr [0x005ec9c4]        ; 00533348 | DAT_005ec9c4
    FSTP float ptr [ESP + 0x8c]         ; 0053334e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00533355
    MOV ESP,EBP                         ; 0053335c
    POP EBP                             ; 0053335e
    POP EDI                             ; 0053335f
    POP ESI                             ; 00533360
    POP EBX                             ; 00533361
    RET                                 ; 00533362
    FLD float ptr [ESP + 0x28]          ; 00533363
        ;   Label: caseD_2
    FADD float ptr [0x005ec9ec]         ; 00533367 | DAT_005ec9ec
    FSTP float ptr [ESP + 0x8c]         ; 0053336d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00533374
    MOV ESP,EBP                         ; 0053337b
    POP EBP                             ; 0053337d
    POP EDI                             ; 0053337e
    POP ESI                             ; 0053337f
    POP EBX                             ; 00533380
    RET                                 ; 00533381
    FLD float ptr [ESP + 0x28]          ; 00533382
        ;   Label: caseD_8
    FADD double ptr [0x005ec9bc]        ; 00533386 | DAT_005ec9bc
    FSTP float ptr [ESP + 0x8c]         ; 0053338c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00533393
    MOV ESP,EBP                         ; 0053339a
    POP EBP                             ; 0053339c
    POP EDI                             ; 0053339d
    POP ESI                             ; 0053339e
    POP EBX                             ; 0053339f
    RET                                 ; 005333a0
    FLD float ptr [ESP + 0x28]          ; 005333a1
        ;   Label: caseD_4
    FADD double ptr [0x005ec9dc]        ; 005333a5 | DAT_005ec9dc
    FSTP float ptr [ESP + 0x8c]         ; 005333ab
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005333b2
    MOV ESP,EBP                         ; 005333b9
    POP EBP                             ; 005333bb
    POP EDI                             ; 005333bc
    POP ESI                             ; 005333bd
    POP EBX                             ; 005333be
    RET                                 ; 005333bf
    FLD float ptr [ESP + 0x28]          ; 005333c0
        ;   Label: caseD_6
    FADD double ptr [0x005ec9cc]        ; 005333c4 | DAT_005ec9cc
    FSTP float ptr [ESP + 0x8c]         ; 005333ca
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005333d1
    MOV ESP,EBP                         ; 005333d8
    POP EBP                             ; 005333da
    POP EDI                             ; 005333db
    POP ESI                             ; 005333dc
    POP EBX                             ; 005333dd
    RET                                 ; 005333de
    MOV EDI,0x5ec92a                    ; 005333df | = "..\\core\\path.cpp"
        ;   Label: default
    MOV EAX,0x183                       ; 005333e4
    PUSH 0x5ec93b                       ; 005333e9 | = "CPathMap::getDirection - Should never..."
    MOV dword ptr [0x01d1d400],EDI      ; 005333ee | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005333f4 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005333f9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005333fe
    MOV EAX,dword ptr [EBP + 0x18]      ; 00533401
        ;   Label: LAB_00533401
    MOV EDX,dword ptr [EBP + 0x20]      ; 00533404
    CMP EAX,EDX                         ; 00533407
    JNZ 0x005334ad                      ; 00533409
        ;   XREF to: 005334ad (CONDITIONAL_JUMP)  ; LAB_005334ad
    MOV EAX,dword ptr [EBP + 0x20]      ; 0053340f
        ;   Label: LAB_0053340f
    DEC EAX                             ; 00533412
    CMP EAX,0x3                         ; 00533413
    JA 0x0053342a                       ; 00533416
        ;   XREF to: 0053342a (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x533124]  ; 00533418 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD1                                ; 0053341f
        ;   Label: caseD_1
    FADD float ptr [ESP + 0x44]         ; 00533421
    INC EBX                             ; 00533425
        ;   Label: LAB_00533425
    FSTP float ptr [ESP + 0x44]         ; 00533426
    FLD1                                ; 0053342a
        ;   Label: default
    MOV dword ptr [ESP + 0x90],EBX      ; 0053342c
    FLD float ptr [ESP + 0x3c]          ; 00533433
    FILD dword ptr [ESP + 0x90]         ; 00533437
    FSTP float ptr [ESP + 0x84]         ; 0053343e
    FXCH                                ; 00533445
    FDIV float ptr [ESP + 0x84]         ; 00533447
    FXCH                                ; 0053344e
    FMUL ST1                            ; 00533450
    FLD float ptr [ESP + 0x40]          ; 00533452
    FMUL ST2                            ; 00533456
    FLD float ptr [ESP + 0x44]          ; 00533458
    FMULP ST3                           ; 0053345c
    LEA EDI,[ESP + 0x54]                ; 0053345e
    MOV ESI,ESP                         ; 00533462
    LEA EAX,[ESP + 0x54]                ; 00533464
    FXCH                                ; 00533468
    FSTP float ptr [ESP]                ; 0053346a
    FSTP float ptr [ESP + 0x4]          ; 0053346d
    FSTP float ptr [ESP + 0x8]          ; 00533471
    MOVSD ES:EDI,ESI                    ; 00533475
    MOVSD ES:EDI,ESI                    ; 00533476
    MOVSD ES:EDI,ESI                    ; 00533477
    PUSH EAX                            ; 00533478
    LEA ESI,[ESP + 0x7c]                ; 00533479
    LEA EDI,[ESP + 0x10]                ; 0053347d
    CALL FUN_005a7520                   ; 00533481
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x7c]                ; 00533486
    ADD ESP,0x4                         ; 0053348a
    MOVSD ES:EDI,ESI                    ; 0053348d
    MOVSD ES:EDI,ESI                    ; 0053348e
    MOVSD ES:EDI,ESI                    ; 0053348f
    FLD float ptr [ESP + 0x10]          ; 00533490
    FADD float ptr [ESP + 0x28]         ; 00533494
    FSTP float ptr [ESP + 0x8c]         ; 00533498
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0053349f
    MOV ESP,EBP                         ; 005334a6
    POP EBP                             ; 005334a8
    POP EDI                             ; 005334a9
    POP ESI                             ; 005334aa
    POP EBX                             ; 005334ab
    RET                                 ; 005334ac
    CMP EDX,dword ptr [EBP + 0x1c]      ; 005334ad
        ;   Label: LAB_005334ad
    JZ 0x0053340f                       ; 005334b0
        ;   XREF to: 0053340f (CONDITIONAL_JUMP)  ; LAB_0053340f
    JMP 0x0053342a                      ; 005334b6
        ;   XREF to: 0053342a (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x44]          ; 005334bb
        ;   Label: caseD_2
    FADD float ptr [0x005ec9b8]         ; 005334bf | DAT_005ec9b8
    JMP 0x00533425                      ; 005334c5
        ;   XREF to: 00533425 (UNCONDITIONAL_JUMP)  ; LAB_00533425
    FLD1                                ; 005334ca
        ;   Label: caseD_3
    FADD float ptr [ESP + 0x3c]         ; 005334cc
    INC EBX                             ; 005334d0
    FSTP float ptr [ESP + 0x3c]         ; 005334d1
    JMP 0x0053342a                      ; 005334d5
        ;   XREF to: 0053342a (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x3c]          ; 005334da
        ;   Label: caseD_4
    FADD float ptr [0x005ec9b8]         ; 005334de | DAT_005ec9b8
    INC EBX                             ; 005334e4
    FSTP float ptr [ESP + 0x3c]         ; 005334e5
    JMP 0x0053342a                      ; 005334e9
        ;   XREF to: 0053342a (UNCONDITIONAL_JUMP)  ; default

