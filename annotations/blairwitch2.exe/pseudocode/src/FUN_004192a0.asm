; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004192a0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005cc1f2
;   undefined4 DAT_005cc1fa
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_0040d340
;   FUN_00591530
;   FUN_005916b0
;   FUN_00591c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004192a0
        ;   Label: FUN_004192a0
    PUSH EDI                            ; 004192a1
    PUSH EBP                            ; 004192a2
    MOV EBP,ESP                         ; 004192a3
    SUB ESP,0x178                       ; 004192a5
    SUB EBP,0x7a                        ; 004192ab
    MOV EBX,ESI                         ; 004192ae
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004192b0
    SHL EAX,0x3                         ; 004192b6
    MOV EDX,EAX                         ; 004192b9
    SHL EAX,0x4                         ; 004192bb
    SUB EAX,EDX                         ; 004192be
    ADD EAX,dword ptr [EBP + 0x8a]      ; 004192c0
    MOV ESI,dword ptr [EAX + 0x2620]    ; 004192c6
    MOV EAX,dword ptr [EAX + 0x2618]    ; 004192cc
    MOV dword ptr [EBP + 0x76],EAX      ; 004192d2
    MOV dword ptr [EBP + 0x1a],0xc0224dd3 ; 004192d5
    LEA EAX,[EBP + 0x16]                ; 004192dc
    PUSH EAX                            ; 004192df
    MOV ECX,0xbf456042                  ; 004192e0
    PUSH 0x265370c                      ; 004192e5 | DAT_0265370c
    LEA EAX,[EBP + 0xffffff62]          ; 004192ea
    MOV EDI,0x40224dd3                  ; 004192f0
    PUSH EAX                            ; 004192f5
    MOV dword ptr [EBP + 0x16],ECX      ; 004192f6
    MOV dword ptr [EBP + 0x1e],EDI      ; 004192f9
    CALL FUN_00591c10                   ; 004192fc
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    ADD ESP,0xc                         ; 00419301
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00419304
    PUSH ESI                            ; 0041930a
    LEA ESI,[EBP + -0x56]               ; 0041930b
    LEA EDI,[EBP + -0x6e]               ; 0041930e
    CALL dword ptr [EAX + 0x24]         ; 00419311
    MOV ECX,0x6                         ; 00419314
    ADD ESP,0x4                         ; 00419319
    LEA EAX,[EBP + 0x22]                ; 0041931c
    LEA ESI,[EBP + -0x56]               ; 0041931f
    PUSH EAX                            ; 00419322
    MOVSD.REP ES:EDI,ESI                ; 00419323
    CALL FUN_0040d340                   ; 00419325
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d340()
    FLD float ptr [EBP + -0x6e]         ; 0041932a
    FLD float ptr [EBP + -0x6a]         ; 0041932d
    FLD float ptr [EBP + -0x66]         ; 00419330
    LEA EDI,[EBP + 0x46]                ; 00419333
    LEA ESI,[EBP + 0x22]                ; 00419336
    LEA EAX,[EBP + 0x6a]                ; 00419339
    ADD ESP,0x4                         ; 0041933c
    FXCH ST2                            ; 0041933f
    FADD float ptr [EBP + -0x62]        ; 00419341
    FXCH                                ; 00419344
    FADD float ptr [EBP + -0x5e]        ; 00419346
    FXCH ST2                            ; 00419349
    FADD float ptr [EBP + -0x5a]        ; 0041934b
    PUSH EAX                            ; 0041934e
    FXCH                                ; 0041934f
    FSTP float ptr [EBP + 0x22]         ; 00419351
    FXCH                                ; 00419354
    FSTP float ptr [EBP + 0x26]         ; 00419356
    FSTP float ptr [EBP + 0x2a]         ; 00419359
    MOVSD ES:EDI,ESI                    ; 0041935c
    MOVSD ES:EDI,ESI                    ; 0041935d
    MOVSD ES:EDI,ESI                    ; 0041935e
    CALL FUN_0040d340                   ; 0041935f
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d340()
    FLD float ptr [0x005cc1f2]          ; 00419364 | DAT_005cc1f2
    FLD float ptr [EBP + 0x46]          ; 0041936a
    FMUL ST1                            ; 0041936d
    FLD float ptr [EBP + 0x4a]          ; 0041936f
    FMUL ST2                            ; 00419372
    FLD float ptr [EBP + 0x4e]          ; 00419374
    FMULP ST3                           ; 00419377
    FLD float ptr [EBP + -0x66]         ; 00419379
    LEA EDI,[EBP + -0xe]                ; 0041937c
    LEA ESI,[EBP + 0x6a]                ; 0041937f
    LEA EAX,[EBP + -0x1a]               ; 00419382
    LEA EDX,[EBP + -0x2]                ; 00419385
    ADD ESP,0x4                         ; 00419388
    FXCH ST2                            ; 0041938b
    FSTP float ptr [EBP + 0x6a]         ; 0041938d
    FSTP float ptr [EBP + 0x6e]         ; 00419390
    FXCH                                ; 00419393
    FSTP float ptr [EBP + 0x72]         ; 00419395
    MOVSD ES:EDI,ESI                    ; 00419398
    MOVSD ES:EDI,ESI                    ; 00419399
    MOVSD ES:EDI,ESI                    ; 0041939a
    FADD double ptr [0x005cc1fa]        ; 0041939b | DAT_005cc1fa
    LEA EDI,[EBP + -0x1a]               ; 004193a1
    LEA ESI,[EBP + -0xe]                ; 004193a4
    FSTP float ptr [EBP + -0x6]         ; 004193a7
    MOVSD ES:EDI,ESI                    ; 004193aa
    MOVSD ES:EDI,ESI                    ; 004193ab
    MOVSD ES:EDI,ESI                    ; 004193ac
    CMP EDX,EAX                         ; 004193ad
    JZ 0x004193c3                       ; 004193af
        ;   XREF to: 004193c3 (CONDITIONAL_JUMP)  ; LAB_004193c3
    MOV EAX,dword ptr [EBP + -0x1a]     ; 004193b1
    MOV dword ptr [EBP + -0x2],EAX      ; 004193b4
    MOV EAX,dword ptr [EBP + -0x16]     ; 004193b7
    MOV dword ptr [EBP + 0x2],EAX       ; 004193ba
    MOV EAX,dword ptr [EBP + -0x12]     ; 004193bd
    MOV dword ptr [EBP + 0x6],EAX       ; 004193c0
    MOV EDX,dword ptr [EBP + 0x76]      ; 004193c3
        ;   Label: LAB_004193c3
    MOV ECX,0x3e560419                  ; 004193c6
    MOV ESI,0xbda7ef9e                  ; 004193cb
    LEA EAX,[EDX*0x4 + 0x0]             ; 004193d0
    LEA EDI,[EBP + 0x2e]                ; 004193d7
    SUB EAX,EDX                         ; 004193da
    MOV EDX,dword ptr [EBP + 0x8a]      ; 004193dc
    SHL EAX,0x4                         ; 004193e2
    ADD EDX,0x1134                      ; 004193e5
    MOV dword ptr [EBP + 0x62],ECX      ; 004193eb
    ADD EAX,EDX                         ; 004193ee
    MOV dword ptr [EBP + 0x66],ESI      ; 004193f0
    PUSH EAX                            ; 004193f3
    LEA EAX,[EBP + 0x5e]                ; 004193f4
    MOV EDX,0x3d03126f                  ; 004193f7
    PUSH EAX                            ; 004193fc
    LEA ESI,[EBP + 0xa]                 ; 004193fd
    MOV dword ptr [EBP + 0x5e],EDX      ; 00419400
    CALL FUN_00591530                   ; 00419403
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[EBP + 0xa]                 ; 00419408
    LEA EAX,[EBP + 0x2e]                ; 0041940b
    LEA EDX,[EBP + -0x32]               ; 0041940e
    ADD ESP,0x8                         ; 00419411
    MOVSD ES:EDI,ESI                    ; 00419414
    MOVSD ES:EDI,ESI                    ; 00419415
    MOVSD ES:EDI,ESI                    ; 00419416
    CMP EDX,EAX                         ; 00419417
    JZ 0x0041942d                       ; 00419419
        ;   XREF to: 0041942d (CONDITIONAL_JUMP)  ; LAB_0041942d
    MOV EAX,dword ptr [EBP + 0x2e]      ; 0041941b
    MOV dword ptr [EBP + -0x32],EAX     ; 0041941e
    MOV EAX,dword ptr [EBP + 0x32]      ; 00419421
    MOV dword ptr [EBP + -0x2e],EAX     ; 00419424
    MOV EAX,dword ptr [EBP + 0x36]      ; 00419427
    MOV dword ptr [EBP + -0x2a],EAX     ; 0041942a
    MOV EDX,dword ptr [EBP + 0x76]      ; 0041942d
        ;   Label: LAB_0041942d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00419430
    SUB EAX,EDX                         ; 00419437
    MOV EDX,EAX                         ; 00419439
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0041943b
    SHL EDX,0x4                         ; 00419441
    ADD EAX,0x1134                      ; 00419444
    ADD EAX,EDX                         ; 00419449
    PUSH EAX                            ; 0041944b
    LEA EAX,[EBP + 0xffffff62]          ; 0041944c
    PUSH EAX                            ; 00419452
    LEA ESI,[EBP + 0xffffff02]          ; 00419453
    LEA EDI,[EBP + 0xffffff32]          ; 00419459
    CALL FUN_005916b0                   ; 0041945f
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 00419464
    ADD ESP,0x8                         ; 00419469
    LEA EAX,[EBP + 0xffffff32]          ; 0041946c
    LEA ESI,[EBP + 0xffffff02]          ; 00419472
    PUSH EAX                            ; 00419478
    LEA EAX,[EBP + -0x2]                ; 00419479
    MOVSD.REP ES:EDI,ESI                ; 0041947c
    PUSH EAX                            ; 0041947e
    LEA ESI,[EBP + -0x3e]               ; 0041947f
    LEA EDI,[EBP + 0x3a]                ; 00419482
    CALL FUN_00591530                   ; 00419485
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    FLD float ptr [EBP + -0x32]         ; 0041948a
    FLD float ptr [EBP + -0x2e]         ; 0041948d
    FLD float ptr [EBP + -0x2a]         ; 00419490
    FLD float ptr [EBP + 0xffffff3e]    ; 00419493
    FLD float ptr [EBP + 0xffffff4e]    ; 00419499
    LEA ESI,[EBP + -0x3e]               ; 0041949f
    FLD float ptr [EBP + 0xffffff5e]    ; 004194a2
    MOVSD ES:EDI,ESI                    ; 004194a8
    MOVSD ES:EDI,ESI                    ; 004194a9
    MOVSD ES:EDI,ESI                    ; 004194aa
    MOV ECX,0xc                         ; 004194ab
    LEA EDI,[EBP + 0x52]                ; 004194b0
    LEA ESI,[EBP + -0x26]               ; 004194b3
    FXCH ST5                            ; 004194b6
    FSUB float ptr [EBP + 0x3a]         ; 004194b8
    FXCH ST4                            ; 004194bb
    FSUB float ptr [EBP + 0x3e]         ; 004194bd
    FXCH ST3                            ; 004194c0
    FSUB float ptr [EBP + 0x42]         ; 004194c2
    FXCH ST4                            ; 004194c5
    FSTP float ptr [EBP + -0x26]        ; 004194c7
    FXCH ST2                            ; 004194ca
    FSTP float ptr [EBP + -0x22]        ; 004194cc
    FXCH ST2                            ; 004194cf
    FSTP float ptr [EBP + -0x1e]        ; 004194d1
    MOVSD ES:EDI,ESI                    ; 004194d4
    MOVSD ES:EDI,ESI                    ; 004194d5
    MOVSD ES:EDI,ESI                    ; 004194d6
    ADD ESP,0x8                         ; 004194d7
    LEA ESI,[EBP + 0xffffff32]          ; 004194da
    MOV EDI,EBX                         ; 004194e0
    FXCH                                ; 004194e2
    FADD float ptr [EBP + 0x52]         ; 004194e4
    FXCH                                ; 004194e7
    FADD float ptr [EBP + 0x56]         ; 004194e9
    FXCH ST2                            ; 004194ec
    FADD float ptr [EBP + 0x5a]         ; 004194ee
    FXCH                                ; 004194f1
    FSTP float ptr [EBP + 0xffffff3e]   ; 004194f3
    FXCH                                ; 004194f9
    FSTP float ptr [EBP + 0xffffff4e]   ; 004194fb
    FSTP float ptr [EBP + 0xffffff5e]   ; 00419501
    MOVSD.REP ES:EDI,ESI                ; 00419507
    MOV EAX,EBX                         ; 00419509
    LEA ESP,[EBP + 0x7a]                ; 0041950b
    POP EBP                             ; 0041950e
    POP EDI                             ; 0041950f
    POP EBX                             ; 00419510
    RET                                 ; 00419511

