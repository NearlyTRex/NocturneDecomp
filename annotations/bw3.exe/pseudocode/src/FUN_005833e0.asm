; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005833e0(float *param_1,float *param_2)
;
; Local Variables:
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
;
; XREF[36]:
;   FUN_00415e30 at 004160a8
;   FUN_004186b0 at 0041886f
;   FUN_00420420 at 004205f5
;   FUN_00422570 at 00422690
;   FUN_00427780 at 004279b6
;   FUN_0042e3a0 at 0042e425
;   FUN_0042f770 at 0042fa87
;   FUN_00430590 at 004306ff
;   FUN_00431ab0 at 00431b34
;   FUN_00431d10 at 00431dc0
;   ... and 26 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005833e0
        ;   Label: FUN_005833e0
    PUSH EDI                            ; 005833e1
    SUB ESP,0x30                        ; 005833e2
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005833e5
    MOV EAX,dword ptr [ESP + 0x40]      ; 005833e9
    MOV EBX,ESI                         ; 005833ed
    FLD float ptr [EAX + 0x4]           ; 005833ef
    FMUL float ptr [EDX + 0x10]         ; 005833f2
    FLD float ptr [EAX + 0x4]           ; 005833f5
    FMUL float ptr [EDX + 0x14]         ; 005833f8
    FLD float ptr [EAX + 0x4]           ; 005833fb
    FMUL float ptr [EDX + 0x18]         ; 005833fe
    FLD float ptr [EAX + 0x14]          ; 00583401
    FMUL float ptr [EDX + 0x10]         ; 00583404
    FLD float ptr [EAX]                 ; 00583407
    FMUL float ptr [EDX]                ; 00583409
    FLD float ptr [EAX + 0x10]          ; 0058340b
    FXCH                                ; 0058340e
    FADDP ST5,ST0                       ; 00583410
    FMUL float ptr [EDX + 0x4]          ; 00583412
    FLD float ptr [EAX + 0x8]           ; 00583415
    FMUL float ptr [EDX + 0x20]         ; 00583418
    FLD float ptr [EAX]                 ; 0058341b
    FXCH                                ; 0058341d
    FADDP ST6,ST0                       ; 0058341f
    FMUL float ptr [EDX + 0x4]          ; 00583421
    FXCH ST5                            ; 00583424
    FSTP float ptr [ESP]                ; 00583426
    FLD float ptr [EAX + 0x10]          ; 00583429
    FXCH ST5                            ; 0058342c
    FADDP ST4,ST0                       ; 0058342e
    FXCH ST4                            ; 00583430
    FMUL float ptr [EDX + 0x8]          ; 00583432
    FLD float ptr [EAX + 0x8]           ; 00583435
    FMUL float ptr [EDX + 0x24]         ; 00583438
    FLD float ptr [EAX]                 ; 0058343b
    FXCH                                ; 0058343d
    FADDP ST5,ST0                       ; 0058343f
    FMUL float ptr [EDX + 0x8]          ; 00583441
    FXCH ST4                            ; 00583444
    FSTP float ptr [ESP + 0x4]          ; 00583446
    FLD float ptr [EAX + 0x24]          ; 0058344a
    FXCH ST4                            ; 0058344d
    FADDP ST3,ST0                       ; 0058344f
    FXCH ST3                            ; 00583451
    FMUL float ptr [EDX + 0x10]         ; 00583453
    FLD float ptr [EAX + 0x8]           ; 00583456
    FMUL float ptr [EDX + 0x28]         ; 00583459
    FLD float ptr [EAX + 0x10]          ; 0058345c
    FXCH                                ; 0058345f
    FADDP ST4,ST0                       ; 00583461
    FMUL float ptr [EDX]                ; 00583463
    FXCH ST3                            ; 00583465
    FSTP float ptr [ESP + 0x8]          ; 00583467
    FLD float ptr [EAX + 0x20]          ; 0058346b
    FXCH ST3                            ; 0058346e
    FADDP ST2,ST0                       ; 00583470
    FXCH ST2                            ; 00583472
    FMUL float ptr [EDX + 0x4]          ; 00583474
    FLD float ptr [EAX + 0x18]          ; 00583477
    FMUL float ptr [EDX + 0x20]         ; 0058347a
    FLD float ptr [EAX + 0x14]          ; 0058347d
    FXCH                                ; 00583480
    FADDP ST3,ST0                       ; 00583482
    FMUL float ptr [EDX + 0x14]         ; 00583484
    FXCH ST2                            ; 00583487
    FSTP float ptr [ESP + 0x10]         ; 00583489
    FLD float ptr [EAX + 0x20]          ; 0058348d
    FXCH ST2                            ; 00583490
    FADDP ST5,ST0                       ; 00583492
    FXCH                                ; 00583494
    FMUL float ptr [EDX + 0x8]          ; 00583496
    FLD float ptr [EAX + 0x18]          ; 00583499
    FMUL float ptr [EDX + 0x24]         ; 0058349c
    FLD float ptr [EAX + 0x14]          ; 0058349f
    FXCH                                ; 005834a2
    FADDP ST6,ST0                       ; 005834a4
    FMUL float ptr [EDX + 0x18]         ; 005834a6
    FXCH ST5                            ; 005834a9
    FSTP float ptr [ESP + 0x14]         ; 005834ab
    FLD float ptr [EAX + 0x4]           ; 005834af
    FXCH ST5                            ; 005834b2
    FADDP ST4,ST0                       ; 005834b4
    FXCH ST4                            ; 005834b6
    FMUL float ptr [EDX + 0x1c]         ; 005834b8
    FLD float ptr [EAX + 0x18]          ; 005834bb
    FMUL float ptr [EDX + 0x28]         ; 005834be
    FLD float ptr [EAX + 0x20]          ; 005834c1
    FXCH                                ; 005834c4
    FADDP ST5,ST0                       ; 005834c6
    FMUL float ptr [EDX]                ; 005834c8
    FXCH ST4                            ; 005834ca
    FSTP float ptr [ESP + 0x18]         ; 005834cc
    FLD float ptr [EAX + 0x10]          ; 005834d0
    FXCH ST4                            ; 005834d3
    FADDP ST3,ST0                       ; 005834d5
    FXCH ST3                            ; 005834d7
    FMUL float ptr [EDX + 0xc]          ; 005834d9
    FLD float ptr [EAX + 0x28]          ; 005834dc
    FMUL float ptr [EDX + 0x20]         ; 005834df
    FLD float ptr [EAX + 0x20]          ; 005834e2
    FXCH                                ; 005834e5
    FADDP ST4,ST0                       ; 005834e7
    FMUL float ptr [EDX + 0xc]          ; 005834e9
    FXCH ST3                            ; 005834ec
    FSTP float ptr [ESP + 0x20]         ; 005834ee
    FLD float ptr [EAX + 0x24]          ; 005834f2
    FMUL float ptr [EDX + 0x14]         ; 005834f5
    FLD float ptr [EAX + 0x24]          ; 005834f8
    FMUL float ptr [EDX + 0x18]         ; 005834fb
    FXCH                                ; 005834fe
    FADDP ST3,ST0                       ; 00583500
    FADDP ST5,ST0                       ; 00583502
    FLD float ptr [EAX + 0x28]          ; 00583504
    FMUL float ptr [EDX + 0x24]         ; 00583507
    FLD float ptr [EAX + 0x28]          ; 0058350a
    FMUL float ptr [EDX + 0x28]         ; 0058350d
    FXCH                                ; 00583510
    FADDP ST3,ST0                       ; 00583512
    FLD float ptr [EAX]                 ; 00583514
    FMUL float ptr [EDX + 0xc]          ; 00583516
    FXCH                                ; 00583519
    FADDP ST6,ST0                       ; 0058351b
    FLD float ptr [EAX + 0x14]          ; 0058351d
    FXCH                                ; 00583520
    FADDP ST5,ST0                       ; 00583522
    FMUL float ptr [EDX + 0x1c]         ; 00583524
    FLD float ptr [EAX + 0x8]           ; 00583527
    FMUL float ptr [EDX + 0x2c]         ; 0058352a
    FXCH                                ; 0058352d
    FADDP ST2,ST0                       ; 0058352f
    FLD float ptr [EAX + 0x24]          ; 00583531
    FMUL float ptr [EDX + 0x1c]         ; 00583534
    FADDP ST4,ST0                       ; 00583537
    FADDP ST4,ST0                       ; 00583539
    FLD float ptr [EAX + 0x18]          ; 0058353b
    FMUL float ptr [EDX + 0x2c]         ; 0058353e
    FLD float ptr [EAX + 0x28]          ; 00583541
    FMUL float ptr [EDX + 0x2c]         ; 00583544
    MOV ECX,0xc                         ; 00583547
    MOV EDI,ESI                         ; 0058354c
    MOV ESI,ESP                         ; 0058354e
    FXCH                                ; 00583550
    FADDP ST2,ST0                       ; 00583552
    FADDP ST3,ST0                       ; 00583554
    FXCH                                ; 00583556
    FSTP float ptr [ESP + 0x24]         ; 00583558
    FXCH ST3                            ; 0058355c
    FSTP float ptr [ESP + 0x28]         ; 0058355e
    FXCH                                ; 00583562
    FADD float ptr [EAX + 0xc]          ; 00583564
    FXCH ST2                            ; 00583567
    FADD float ptr [EAX + 0x1c]         ; 00583569
    FXCH                                ; 0058356c
    FADD float ptr [EAX + 0x2c]         ; 0058356e
    FXCH ST2                            ; 00583571
    FSTP float ptr [ESP + 0xc]          ; 00583573
    FSTP float ptr [ESP + 0x1c]         ; 00583577
    FSTP float ptr [ESP + 0x2c]         ; 0058357b
    MOVSD.REP ES:EDI,ESI                ; 0058357f
    MOV EAX,EBX                         ; 00583581
    ADD ESP,0x30                        ; 00583583
    POP EDI                             ; 00583586
    POP EBX                             ; 00583587
    RET                                 ; 00583588

