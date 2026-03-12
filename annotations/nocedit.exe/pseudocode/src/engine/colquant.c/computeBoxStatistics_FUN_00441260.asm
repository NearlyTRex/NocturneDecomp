; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_colquant_c_computeBoxStatistics_FUN_00441260(SColorQuantMapper *workspace,int box_index)
;
; Parameters:
; SColorQuantMapper * Stack[0x4]:4   workspace
; int              Stack[0x8]:4   box_index
; Local Variables:
; double           Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; double           Stack[-0x78]:8  local_78
; double           Stack[-0x70]:8  local_70
; double           Stack[-0x68]:8  local_68
; double           Stack[-0x60]:8  local_60
; double           Stack[-0x58]:8  local_58
; double           Stack[-0x50]:8  local_50
; double           Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[6]:
;   engine_colquant.c_partitionByBlue_FUN_00440dc0 at 00440ebc
;   engine_colquant.c_partitionByGreen_FUN_00440c80 at 00440d7c
;   engine_colquant.c_partitionByIntensity_FUN_00440f00 at 00440ffc
;   engine_colquant.c_partitionByRed_FUN_00440b40 at 00440c48
;   engine_colquant.c_quantizeColors_FUN_004406c0 at 004407e0
;   engine_colquant.c_refinePartitionByDistance_FUN_00441110 at 00441248
;
; Referenced Globals:
;   double DOUBLE_00618dc1 = 0.300000000000000
;   double DOUBLE_00618dc9 = 0.590000000000000
;   double DOUBLE_00618dd1 = 0.110000000000000
;   double DOUBLE_00618dd9 = 0.700000000000000
;   double DOUBLE_00618de1 = 0.330000000000000
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_colquant.c_doubleMax_FUN_00441790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441260
        ;   Label: engine_colquant.c_computeBoxStatistics_FUN_00441260
    PUSH ESI                            ; 00441261
    PUSH EDI                            ; 00441262
    PUSH EBP                            ; 00441263
    MOV EBP,ESP                         ; 00441264
    SUB ESP,0x7c                        ; 00441266
    AND ESP,0xfffffff8                  ; 00441269
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044126c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0044126f
    XOR EDX,EDX                         ; 00441272
    MOV EBX,ECX                         ; 00441274
    MOV dword ptr [ESP + 0x20],EDX      ; 00441276
    MOV dword ptr [ESP + 0x24],EDX      ; 0044127a
    MOV dword ptr [ESP + 0x40],EDX      ; 0044127e
    MOV dword ptr [ESP + 0x44],EDX      ; 00441282
    MOV dword ptr [ESP + 0x48],EDX      ; 00441286
    MOV dword ptr [ESP + 0x4c],EDX      ; 0044128a
    SHL EBX,0x6                         ; 0044128e
    MOV dword ptr [ESP + 0x18],EDX      ; 00441291
    MOV dword ptr [ESP + 0x1c],EDX      ; 00441295
    MOV EDX,dword ptr [EDI + EBX*0x1 + 0x4040] ; 00441299
    MOV ESI,dword ptr [EDI + EBX*0x1 + 0x4044] ; 004412a0
    MOV EBX,dword ptr [EDI + EBX*0x1 + 0x4040] ; 004412a7
    ADD EDX,ESI                         ; 004412ae
    CMP EBX,EDX                         ; 004412b0
    JGE 0x00441332                      ; 004412b2
        ;   XREF to: 00441332 (CONDITIONAL_JUMP)  ; LAB_00441332
    FLD double ptr [ESP + 0x48]         ; 004412b8
    FLD double ptr [ESP + 0x40]         ; 004412bc
    LEA ESI,[EBX*0x4 + 0x0]             ; 004412c0
    MOV EAX,dword ptr [EDI + 0x2004]    ; 004412c7
    FLD double ptr [ESP + 0x18]         ; 004412cd
    ADD ESI,EAX                         ; 004412d1
    XOR EAX,EAX                         ; 004412d3
        ;   Label: LAB_004412d3
    MOV AL,byte ptr [ESI]               ; 004412d5
    ADD ESI,0x4                         ; 004412d7
    MOV dword ptr [ESP + 0x78],EAX      ; 004412da
    XOR EAX,EAX                         ; 004412de
    INC EBX                             ; 004412e0
    MOV AL,byte ptr [ESI + -0x3]        ; 004412e1
    FILD word ptr [ESP + 0x78]          ; 004412e4
    MOV dword ptr [ESP + 0x78],EAX      ; 004412e8
    XOR EAX,EAX                         ; 004412ec
    FADD ST0,ST1                        ; 004412ee
    MOV AL,byte ptr [ESI + -0x2]        ; 004412f0
    FILD word ptr [ESP + 0x78]          ; 004412f3
    MOV dword ptr [ESP + 0x78],EAX      ; 004412f7
    XOR EAX,EAX                         ; 004412fb
    FADD double ptr [ESP + 0x20]        ; 004412fd
    MOV AL,byte ptr [ESI + -0x1]        ; 00441301
    FILD word ptr [ESP + 0x78]          ; 00441304
    MOV dword ptr [ESP + 0x78],EAX      ; 00441308
    FADD ST0,ST4                        ; 0044130c
    FILD word ptr [ESP + 0x78]          ; 0044130e
    FADD ST0,ST6                        ; 00441312
    FXCH ST3                            ; 00441314
    FSTP ST4                            ; 00441316
    FXCH                                ; 00441318
    FSTP double ptr [ESP + 0x20]        ; 0044131a
    FSTP ST3                            ; 0044131e
    FSTP ST3                            ; 00441320
    CMP EBX,EDX                         ; 00441322
    JL 0x004412d3                       ; 00441324
        ;   XREF to: 004412d3 (CONDITIONAL_JUMP)  ; LAB_004412d3
    FSTP double ptr [ESP + 0x18]        ; 00441326
    FSTP double ptr [ESP + 0x40]        ; 0044132a
    FSTP double ptr [ESP + 0x48]        ; 0044132e
    MOV ESI,ECX                         ; 00441332
        ;   Label: LAB_00441332
    SHL ESI,0x6                         ; 00441334
    XOR EAX,EAX                         ; 00441337
    LEA EBX,[EDI + ESI*0x1]             ; 00441339
    MOV dword ptr [ESP + 0x64],EAX      ; 0044133c
    MOV EAX,dword ptr [EBX + 0x4044]    ; 00441340
    MOV dword ptr [ESP + 0x60],EAX      ; 00441346
    FILD qword ptr [ESP + 0x60]         ; 0044134a
    FDIVR double ptr [ESP + 0x18]       ; 0044134e
    CALL crt_math.c_round_FUN_005fe6b0  ; 00441352
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x74]        ; 00441357
    MOV EAX,dword ptr [ESP + 0x74]      ; 0044135b
    XOR ECX,ECX                         ; 0044135f
    MOV word ptr [EBX + 0x4008],AX      ; 00441361
    MOV EAX,dword ptr [EBX + 0x4044]    ; 00441368
    MOV dword ptr [ESP + 0x64],ECX      ; 0044136e
    MOV dword ptr [ESP + 0x60],EAX      ; 00441372
    FILD qword ptr [ESP + 0x60]         ; 00441376
    FDIVR double ptr [ESP + 0x20]       ; 0044137a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044137e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x74]        ; 00441383
    MOV EAX,dword ptr [ESP + 0x74]      ; 00441387
    MOV word ptr [EBX + 0x400a],AX      ; 0044138b
    MOV EAX,dword ptr [EBX + 0x4044]    ; 00441392
    MOV dword ptr [ESP + 0x64],ECX      ; 00441398
    MOV dword ptr [ESP + 0x60],EAX      ; 0044139c
    FILD qword ptr [ESP + 0x60]         ; 004413a0
    FDIVR double ptr [ESP + 0x40]       ; 004413a4
    CALL crt_math.c_round_FUN_005fe6b0  ; 004413a8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x74]        ; 004413ad
    MOV EAX,dword ptr [ESP + 0x74]      ; 004413b1
    MOV word ptr [EBX + 0x400c],AX      ; 004413b5
    MOV EAX,dword ptr [EBX + 0x4044]    ; 004413bc
    MOV dword ptr [ESP + 0x64],ECX      ; 004413c2
    MOV dword ptr [ESP + 0x60],EAX      ; 004413c6
    FILD qword ptr [ESP + 0x60]         ; 004413ca
    FDIVR double ptr [ESP + 0x48]       ; 004413ce
    SHL EDX,0x2                         ; 004413d2
    MOV dword ptr [ESP + 0x6c],EDX      ; 004413d5
    MOV dword ptr [EBX + 0x4018],ECX    ; 004413d9
    MOV dword ptr [ESP + 0x28],ECX      ; 004413df
    MOV dword ptr [EBX + 0x401c],ECX    ; 004413e3
    MOV dword ptr [ESP + 0x2c],ECX      ; 004413e9
    MOV dword ptr [EBX + 0x4020],ECX    ; 004413ed
    MOV dword ptr [ESP + 0x38],ECX      ; 004413f3
    MOV dword ptr [EBX + 0x4024],ECX    ; 004413f7
    MOV dword ptr [ESP + 0x3c],ECX      ; 004413fd
    MOV dword ptr [EBX + 0x4028],ECX    ; 00441401
    MOV dword ptr [ESP],ECX             ; 00441407
    MOV dword ptr [EBX + 0x402c],ECX    ; 0044140a
    MOV dword ptr [ESP + 0x4],ECX       ; 00441410
    MOV dword ptr [EBX + 0x4030],ECX    ; 00441414
    MOV dword ptr [ESP + 0x30],ECX      ; 0044141a
    MOV dword ptr [EBX + 0x4034],ECX    ; 0044141e
    MOV dword ptr [ESP + 0x34],ECX      ; 00441424
    MOV dword ptr [EBX + 0x4010],ECX    ; 00441428
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044142e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x74]        ; 00441433
    MOV EAX,dword ptr [ESP + 0x74]      ; 00441437
    MOV dword ptr [ESP + 0x68],ESI      ; 0044143b
    MOV word ptr [EBX + 0x400e],AX      ; 0044143f
    MOV EAX,dword ptr [EBX + 0x4040]    ; 00441446
    MOV dword ptr [EBX + 0x4014],ECX    ; 0044144c
    MOV dword ptr [ESP + 0x70],EAX      ; 00441452
    LEA ESI,[EAX*0x4 + 0x0]             ; 00441456
    MOV EBX,dword ptr [ESP + 0x68]      ; 0044145d
        ;   Label: LAB_0044145d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00441461
    ADD EBX,EDI                         ; 00441465
    CMP ESI,EAX                         ; 00441467
    JL 0x00441587                       ; 00441469
        ;   XREF to: 00441587 (CONDITIONAL_JUMP)  ; LAB_00441587
    FLD double ptr [EBX + 0x4018]       ; 0044146f
    FMUL double ptr [0x00618de1]        ; 00441475 | DOUBLE_00618de1
    FLD double ptr [EBX + 0x4020]       ; 0044147b
    FMUL double ptr [0x00618dc9]        ; 00441481 | DOUBLE_00618dc9
    FLD double ptr [EBX + 0x4028]       ; 00441487
    FMUL double ptr [0x00618dd1]        ; 0044148d | DOUBLE_00618dd1
    FLD double ptr [EBX + 0x4030]       ; 00441493
    FMUL double ptr [0x00618dd9]        ; 00441499 | DOUBLE_00618dd9
    FXCH ST3                            ; 0044149f
    FMUL double ptr [ESP + 0x28]        ; 004414a1
    FXCH ST2                            ; 004414a5
    FMUL double ptr [ESP + 0x38]        ; 004414a7
    FXCH                                ; 004414ab
    FMUL double ptr [ESP]               ; 004414ad
    FXCH ST3                            ; 004414b0
    FMUL double ptr [ESP + 0x30]        ; 004414b2
    FXCH                                ; 004414b6
    FSTP double ptr [EBX + 0x4020]      ; 004414b8
    MOV ESI,dword ptr [EBX + 0x4024]    ; 004414be
    MOV EDI,dword ptr [EBX + 0x4020]    ; 004414c4
    PUSH ESI                            ; 004414ca
    FXCH                                ; 004414cb
    FSTP double ptr [EBX + 0x4018]      ; 004414cd
    PUSH EDI                            ; 004414d3
    MOV EAX,dword ptr [EBX + 0x401c]    ; 004414d4
    MOV EDX,dword ptr [EBX + 0x4018]    ; 004414da
    PUSH EAX                            ; 004414e0
    FXCH                                ; 004414e1
    FSTP double ptr [EBX + 0x4028]      ; 004414e3
    PUSH EDX                            ; 004414e9
    FSTP double ptr [EBX + 0x4030]      ; 004414ea
    CALL engine_colquant.c_doubleMax_FUN_00441790 ; 004414f0
        ;   XREF to: 00441790 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_doubleMax_FUN_00441790(double a, double b)
    MOV dword ptr [ESP + 0x70],EAX      ; 004414f5
    MOV dword ptr [ESP + 0x74],EDX      ; 004414f9
    FLD double ptr [ESP + 0x70]         ; 004414fd
    ADD ESP,0x10                        ; 00441501
    MOV ECX,dword ptr [EBX + 0x402c]    ; 00441504
    PUSH ECX                            ; 0044150a
    MOV ESI,dword ptr [EBX + 0x4028]    ; 0044150b
    PUSH ESI                            ; 00441511
    FSTP double ptr [EBX + 0x4038]      ; 00441512
    MOV EDI,dword ptr [EBX + 0x403c]    ; 00441518
    PUSH EDI                            ; 0044151e
    MOV EAX,dword ptr [EBX + 0x4038]    ; 0044151f
    PUSH EAX                            ; 00441525
    CALL engine_colquant.c_doubleMax_FUN_00441790 ; 00441526
        ;   XREF to: 00441790 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_doubleMax_FUN_00441790(double a, double b)
    MOV dword ptr [ESP + 0x70],EAX      ; 0044152b
    MOV dword ptr [ESP + 0x74],EDX      ; 0044152f
    FLD double ptr [ESP + 0x70]         ; 00441533
    ADD ESP,0x10                        ; 00441537
    MOV EDX,dword ptr [EBX + 0x4034]    ; 0044153a
    PUSH EDX                            ; 00441540
    MOV ECX,dword ptr [EBX + 0x4030]    ; 00441541
    PUSH ECX                            ; 00441547
    FSTP double ptr [EBX + 0x4038]      ; 00441548
    MOV ESI,dword ptr [EBX + 0x403c]    ; 0044154e
    PUSH ESI                            ; 00441554
    MOV EDI,dword ptr [EBX + 0x4038]    ; 00441555
    PUSH EDI                            ; 0044155b
    CALL engine_colquant.c_doubleMax_FUN_00441790 ; 0044155c
        ;   XREF to: 00441790 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_doubleMax_FUN_00441790(double a, double b)
    MOV dword ptr [ESP + 0x70],EAX      ; 00441561
    MOV dword ptr [ESP + 0x74],EDX      ; 00441565
    MOV EAX,dword ptr [ESP + 0x70]      ; 00441569
    MOV dword ptr [EBX + 0x4038],EAX    ; 0044156d
    MOV EAX,dword ptr [ESP + 0x74]      ; 00441573
    MOV dword ptr [EBX + 0x403c],EAX    ; 00441577
    ADD ESP,0x10                        ; 0044157d
    MOV ESP,EBP                         ; 00441580
    POP EBP                             ; 00441582
    POP EDI                             ; 00441583
    POP ESI                             ; 00441584
    POP EBX                             ; 00441585
    RET                                 ; 00441586
    MOV EAX,dword ptr [EDI + 0x2004]    ; 00441587
        ;   Label: LAB_00441587
    MOV AL,byte ptr [ESI + EAX*0x1]     ; 0044158d
    MOV EDX,dword ptr [EBX + 0x4006]    ; 00441590
    AND EAX,0xff                        ; 00441596
    SAR EDX,0x10                        ; 0044159b
    SUB EDX,EAX                         ; 0044159e
    MOV EAX,EDX                         ; 004415a0
    CDQ                                 ; 004415a2
    XOR EAX,EDX                         ; 004415a3
    SUB EAX,EDX                         ; 004415a5
    MOV dword ptr [ESP + 0x74],EAX      ; 004415a7
    FILD dword ptr [ESP + 0x74]         ; 004415ab
    MOV EAX,dword ptr [EDI + 0x2004]    ; 004415af
    FSTP double ptr [ESP + 0x58]        ; 004415b5
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1] ; 004415b9
    MOV EDX,dword ptr [EBX + 0x4008]    ; 004415bd
    AND EAX,0xff                        ; 004415c3
    SAR EDX,0x10                        ; 004415c8
    SUB EDX,EAX                         ; 004415cb
    MOV EAX,EDX                         ; 004415cd
    CDQ                                 ; 004415cf
    XOR EAX,EDX                         ; 004415d0
    SUB EAX,EDX                         ; 004415d2
    MOV dword ptr [ESP + 0x74],EAX      ; 004415d4
    FILD dword ptr [ESP + 0x74]         ; 004415d8
    MOV EAX,dword ptr [EDI + 0x2004]    ; 004415dc
    FSTP double ptr [ESP + 0x8]         ; 004415e2
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x2] ; 004415e6
    MOV EDX,dword ptr [EBX + 0x400a]    ; 004415ea
    AND EAX,0xff                        ; 004415f0
    SAR EDX,0x10                        ; 004415f5
    SUB EDX,EAX                         ; 004415f8
    MOV EAX,EDX                         ; 004415fa
    CDQ                                 ; 004415fc
    XOR EAX,EDX                         ; 004415fd
    SUB EAX,EDX                         ; 004415ff
    MOV dword ptr [ESP + 0x74],EAX      ; 00441601
    MOV EAX,dword ptr [EDI + 0x2004]    ; 00441605
    XOR EDX,EDX                         ; 0044160b
    MOV DL,byte ptr [ESI + EAX*0x1 + 0x3] ; 0044160d
    MOV EAX,dword ptr [EBX + 0x400c]    ; 00441611
    MOV ECX,dword ptr [ESP + 0x58]      ; 00441617
    SAR EAX,0x10                        ; 0044161b
    FILD dword ptr [ESP + 0x74]         ; 0044161e
    SUB EAX,EDX                         ; 00441622
    FSTP double ptr [ESP + 0x10]        ; 00441624
    CDQ                                 ; 00441628
    XOR EAX,EDX                         ; 00441629
    SUB EAX,EDX                         ; 0044162b
    FLD double ptr [EBX + 0x4018]       ; 0044162d
    FLD double ptr [EBX + 0x4020]       ; 00441633
    FLD double ptr [EBX + 0x4028]       ; 00441639
    FLD double ptr [EBX + 0x4030]       ; 0044163f
    MOV dword ptr [ESP + 0x74],EAX      ; 00441645
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00441649
    FILD dword ptr [ESP + 0x74]         ; 0044164d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00441651
    FSTP double ptr [ESP + 0x50]        ; 00441655
    FXCH ST3                            ; 00441659
    FADD double ptr [ESP + 0x58]        ; 0044165b
    FXCH ST2                            ; 0044165f
    FADD double ptr [ESP + 0x8]         ; 00441661
    FXCH                                ; 00441665
    FADD double ptr [ESP + 0x10]        ; 00441667
    PUSH EDX                            ; 0044166b
    FXCH ST2                            ; 0044166c
    FSTP double ptr [EBX + 0x4018]      ; 0044166e
    FSTP double ptr [EBX + 0x4020]      ; 00441674
    PUSH ECX                            ; 0044167a
    FSTP double ptr [EBX + 0x4028]      ; 0044167b
    MOV EDX,dword ptr [ESP + 0x30]      ; 00441681
    PUSH EAX                            ; 00441685
    FADD double ptr [ESP + 0x5c]        ; 00441686
    PUSH EDX                            ; 0044168a
    FSTP double ptr [EBX + 0x4030]      ; 0044168b
    CALL engine_colquant.c_doubleMax_FUN_00441790 ; 00441691
        ;   XREF to: 00441790 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_doubleMax_FUN_00441790(double a, double b)
    MOV dword ptr [ESP + 0x70],EAX      ; 00441696
    MOV dword ptr [ESP + 0x74],EDX      ; 0044169a
    FLD double ptr [ESP + 0x70]         ; 0044169e
    ADD ESP,0x10                        ; 004416a2
    MOV ECX,dword ptr [ESP + 0xc]       ; 004416a5
    PUSH ECX                            ; 004416a9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004416aa
    PUSH EAX                            ; 004416ae
    MOV EDX,dword ptr [ESP + 0x44]      ; 004416af
    PUSH EDX                            ; 004416b3
    MOV ECX,dword ptr [ESP + 0x44]      ; 004416b4
    PUSH ECX                            ; 004416b8
    FSTP double ptr [ESP + 0x38]        ; 004416b9
    CALL engine_colquant.c_doubleMax_FUN_00441790 ; 004416bd
        ;   XREF to: 00441790 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_doubleMax_FUN_00441790(double a, double b)
    MOV dword ptr [ESP + 0x70],EAX      ; 004416c2
    MOV dword ptr [ESP + 0x74],EDX      ; 004416c6
    FLD double ptr [ESP + 0x70]         ; 004416ca
    ADD ESP,0x10                        ; 004416ce
    MOV EAX,dword ptr [ESP + 0x14]      ; 004416d1
    PUSH EAX                            ; 004416d5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004416d6
    PUSH EDX                            ; 004416da
    MOV ECX,dword ptr [ESP + 0xc]       ; 004416db
    PUSH ECX                            ; 004416df
    MOV EAX,dword ptr [ESP + 0xc]       ; 004416e0
    PUSH EAX                            ; 004416e4
    FSTP double ptr [ESP + 0x48]        ; 004416e5
    CALL engine_colquant.c_doubleMax_FUN_00441790 ; 004416e9
        ;   XREF to: 00441790 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_doubleMax_FUN_00441790(double a, double b)
    MOV dword ptr [ESP + 0x70],EAX      ; 004416ee
    MOV dword ptr [ESP + 0x74],EDX      ; 004416f2
    FLD double ptr [ESP + 0x70]         ; 004416f6
    ADD ESP,0x10                        ; 004416fa
    FSTP double ptr [ESP]               ; 004416fd
    MOV EDX,dword ptr [ESP + 0x54]      ; 00441700
    PUSH EDX                            ; 00441704
    MOV ECX,dword ptr [ESP + 0x54]      ; 00441705
    PUSH ECX                            ; 00441709
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044170a
    PUSH EAX                            ; 0044170e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0044170f
    PUSH EDX                            ; 00441713
    CALL engine_colquant.c_doubleMax_FUN_00441790 ; 00441714
        ;   XREF to: 00441790 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_doubleMax_FUN_00441790(double a, double b)
    MOV dword ptr [ESP + 0x70],EAX      ; 00441719
    MOV dword ptr [ESP + 0x74],EDX      ; 0044171d
    FLD double ptr [ESP + 0x70]         ; 00441721
    ADD ESP,0x10                        ; 00441725
    FLD double ptr [ESP + 0x58]         ; 00441728
    FMUL ST0                            ; 0044172c
    FMUL double ptr [0x00618dc1]        ; 0044172e | DOUBLE_00618dc1
    FLD double ptr [ESP + 0x8]          ; 00441734
    FMUL ST0                            ; 00441738
    FMUL double ptr [0x00618dc9]        ; 0044173a | DOUBLE_00618dc9
    FADDP                               ; 00441740
    FLD double ptr [ESP + 0x10]         ; 00441742
    FMUL ST0                            ; 00441746
    FMUL double ptr [0x00618dd1]        ; 00441748 | DOUBLE_00618dd1
    FADDP                               ; 0044174e
    FLD double ptr [ESP + 0x50]         ; 00441750
    FMUL ST0                            ; 00441754
    FMUL double ptr [0x00618dd9]        ; 00441756 | DOUBLE_00618dd9
    ADD ESI,0x4                         ; 0044175c
    FXCH ST2                            ; 0044175f
    FSTP double ptr [ESP + 0x30]        ; 00441761
    MOV ECX,dword ptr [ESP + 0x70]      ; 00441765
    FADDP                               ; 00441769
    INC ECX                             ; 0044176b
    FADD double ptr [EBX + 0x4010]      ; 0044176c
    MOV dword ptr [ESP + 0x70],ECX      ; 00441772
    FSTP double ptr [EBX + 0x4010]      ; 00441776
    JMP 0x0044145d                      ; 0044177c
        ;   XREF to: 0044145d (UNCONDITIONAL_JUMP)  ; LAB_0044145d

