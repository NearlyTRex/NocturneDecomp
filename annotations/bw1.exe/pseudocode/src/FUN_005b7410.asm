; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7410(float *param_1,float *param_2)
;
; Local Variables:
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
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[5]:
;   FUN_00568e30 at 00568f15
;   FUN_00569180 at 005691f8
;   FUN_0056b130 at 0056b1a5
;   FUN_005b72c0 at 005b73a9
;   FUN_005b7560 at 005b7571
;
; Referenced Globals:
;   undefined4 DAT_005fa164
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 005b7410
        ;   Label: FUN_005b7410
    MOV EDX,dword ptr [ESP + 0x38]      ; 005b7413
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b7417
    FLD float ptr [EAX + 0x4]           ; 005b741b
    FMUL ST0                            ; 005b741e
    FLD float ptr [EAX]                 ; 005b7420
    FMUL ST0                            ; 005b7422
    FADDP                               ; 005b7424
    FLD float ptr [EAX + 0x8]           ; 005b7426
    FMUL ST0                            ; 005b7429
    FADDP                               ; 005b742b
    FLD float ptr [EAX + 0xc]           ; 005b742d
    FMUL ST0                            ; 005b7430
    FADDP                               ; 005b7432
    FLD float ptr [EAX + 0x4]           ; 005b7434
    FXCH                                ; 005b7437
    FDIVR float ptr [0x005fa164]        ; 005b7439 | DAT_005fa164
    FXCH                                ; 005b743f
    FMUL ST1                            ; 005b7441
    FLD float ptr [EAX + 0x8]           ; 005b7443
    FMUL ST2                            ; 005b7446
    FLD float ptr [EAX + 0xc]           ; 005b7448
    FMULP ST3                           ; 005b744b
    FLD float ptr [EAX]                 ; 005b744d
    FMUL ST2                            ; 005b744f
    FLD float ptr [EAX]                 ; 005b7451
    FXCH ST2                            ; 005b7453
    FSTP float ptr [ESP + 0x8]          ; 005b7455
    FXCH                                ; 005b7459
    FMUL float ptr [ESP + 0x8]          ; 005b745b
    FLD float ptr [EAX]                 ; 005b745f
    FXCH ST4                            ; 005b7461
    FSTP float ptr [ESP + 0xc]          ; 005b7463
    FXCH ST3                            ; 005b7467
    FMUL float ptr [ESP + 0xc]          ; 005b7469
    FLD float ptr [EAX + 0x4]           ; 005b746d
    FMULP ST3                           ; 005b7470
    FLD float ptr [EAX + 0x4]           ; 005b7472
    FMUL float ptr [ESP + 0x8]          ; 005b7475
    FLD float ptr [EAX + 0x4]           ; 005b7479
    FMUL float ptr [ESP + 0xc]          ; 005b747c
    FLD float ptr [EAX + 0x8]           ; 005b7480
    FMUL float ptr [ESP + 0x8]          ; 005b7483
    FXCH ST4                            ; 005b7487
    FSTP float ptr [ESP + 0x10]         ; 005b7489
    FLD float ptr [EAX + 0x8]           ; 005b748d
    FMUL float ptr [ESP + 0xc]          ; 005b7490
    FXCH ST5                            ; 005b7494
    FSTP float ptr [ESP + 0x1c]         ; 005b7496
    FLD float ptr [EAX + 0xc]           ; 005b749a
    FMUL float ptr [ESP + 0xc]          ; 005b749d
    FXCH                                ; 005b74a1
    FSTP float ptr [ESP + 0x24]         ; 005b74a3
    FXCH ST3                            ; 005b74a7
    FST float ptr [ESP + 0x28]          ; 005b74a9
    FXCH                                ; 005b74ad
    FST float ptr [ESP + 0x20]          ; 005b74af
    FXCH ST5                            ; 005b74b3
    FSTP float ptr [ESP + 0x14]         ; 005b74b5
    FLD float ptr [ESP + 0x24]          ; 005b74b9
    FXCH ST2                            ; 005b74bd
    FSTP float ptr [ESP + 0x18]         ; 005b74bf
    FLD float ptr [ESP + 0x1c]          ; 005b74c3
    FXCH ST4                            ; 005b74c7
    FST float ptr [ESP + 0x2c]          ; 005b74c9
    FLD float ptr [ESP + 0x24]          ; 005b74cd
    FXCH ST4                            ; 005b74d1
    FSTP float ptr [ESP + 0x30]         ; 005b74d3
    FXCH                                ; 005b74d7
    FADD float ptr [ESP + 0x30]         ; 005b74d9
    FXCH ST5                            ; 005b74dd
    FADD float ptr [ESP + 0x18]         ; 005b74df
    FXCH ST2                            ; 005b74e3
    FSUB float ptr [ESP + 0x14]         ; 005b74e5
    FLD1                                ; 005b74e9
    FXCH ST3                            ; 005b74eb
    FSTP float ptr [EDX + 0x10]         ; 005b74ed
    FLD float ptr [ESP + 0x1c]          ; 005b74f0
    FXCH                                ; 005b74f4
    FSTP float ptr [EDX + 0x20]         ; 005b74f6
    FLD float ptr [ESP + 0x20]          ; 005b74f9
    FSUB float ptr [ESP + 0x18]         ; 005b74fd
    FXCH ST5                            ; 005b7501
    FADD float ptr [ESP + 0x30]         ; 005b7503
    FXCH ST2                            ; 005b7507
    FADD float ptr [ESP + 0x10]         ; 005b7509
    FXCH ST4                            ; 005b750d
    FADD float ptr [ESP + 0x14]         ; 005b750f
    FXCH ST5                            ; 005b7513
    FSTP float ptr [EDX + 0x4]          ; 005b7515
    FLD1                                ; 005b7518
    FXCH ST4                            ; 005b751a
    FSTP float ptr [EDX + 0x24]         ; 005b751c
    FLD float ptr [ESP + 0x2c]          ; 005b751f
    FSUB float ptr [ESP + 0x10]         ; 005b7523
    FXCH                                ; 005b7527
    FADD float ptr [ESP + 0x28]         ; 005b7529
    FXCH ST5                            ; 005b752d
    FSTP float ptr [EDX + 0x8]          ; 005b752f
    FLD1                                ; 005b7532
    FXCH                                ; 005b7534
    FSTP float ptr [EDX + 0x18]         ; 005b7536
    FXCH ST2                            ; 005b7539
    FSUBRP ST5,ST0                      ; 005b753b
    FSUBP ST2,ST0                       ; 005b753d
    FSUBRP ST2,ST0                      ; 005b753f
    FXCH ST2                            ; 005b7541
    FSTP float ptr [EDX]                ; 005b7543
    FXCH                                ; 005b7545
    FSTP float ptr [EDX + 0x14]         ; 005b7547
    FSTP float ptr [EDX + 0x28]         ; 005b754a
    ADD ESP,0x34                        ; 005b754d
    RET                                 ; 005b7550

