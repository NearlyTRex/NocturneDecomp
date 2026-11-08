; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043c330(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_0043c5d0 at 0043c697
;
; Referenced Globals:
;   undefined4 DAT_005ce3c6
;   undefined4 DAT_005ce3ce
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0043c330
        ;   Label: FUN_0043c330
    MOV EBP,ESP                         ; 0043c331
    SUB ESP,0x54                        ; 0043c333
    AND ESP,0xfffffff8                  ; 0043c336
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043c339
    FILD dword ptr [EAX + 0x178]        ; 0043c33c
    FMUL double ptr [0x005ce3c6]        ; 0043c342 | DAT_005ce3c6
    FILD dword ptr [EAX + 0x17c]        ; 0043c348
    FMUL double ptr [0x005ce3c6]        ; 0043c34e | DAT_005ce3c6
    FILD dword ptr [EAX + 0x180]        ; 0043c354
    FMUL double ptr [0x005ce3c6]        ; 0043c35a | DAT_005ce3c6
    FILD dword ptr [EAX + 0x184]        ; 0043c360
    FMUL double ptr [0x005ce3c6]        ; 0043c366 | DAT_005ce3c6
    FILD dword ptr [EAX + 0x188]        ; 0043c36c
    FMUL double ptr [0x005ce3c6]        ; 0043c372 | DAT_005ce3c6
    FILD dword ptr [EAX + 0x18c]        ; 0043c378
    FMUL double ptr [0x005ce3c6]        ; 0043c37e | DAT_005ce3c6
    FILD dword ptr [EAX + 0x190]        ; 0043c384
    FMUL double ptr [0x005ce3c6]        ; 0043c38a | DAT_005ce3c6
    FXCH ST6                            ; 0043c390
    FSTP float ptr [ESP + 0x50]         ; 0043c392
    FILD dword ptr [EAX + 0x194]        ; 0043c396
    FMUL double ptr [0x005ce3c6]        ; 0043c39c | DAT_005ce3c6
    FXCH ST2                            ; 0043c3a2
    FSTP float ptr [ESP + 0x44]         ; 0043c3a4
    FILD dword ptr [EAX + 0x198]        ; 0043c3a8
    FMUL double ptr [0x005ce3c6]        ; 0043c3ae | DAT_005ce3c6
    FXCH                                ; 0043c3b4
    FST float ptr [ESP + 0x1c]          ; 0043c3b6
    FXCH ST2                            ; 0043c3ba
    FSTP float ptr [ESP + 0xc]          ; 0043c3bc
    FXCH                                ; 0043c3c0
    FMUL float ptr [ESP + 0xc]          ; 0043c3c2
    FLD float ptr [ESP + 0x44]          ; 0043c3c6
    FXCH ST2                            ; 0043c3ca
    FSTP float ptr [ESP + 0x4]          ; 0043c3cc
    FXCH                                ; 0043c3d0
    FMUL float ptr [ESP + 0x4]          ; 0043c3d2
    FSUBRP                              ; 0043c3d6
    FLD float ptr [ESP + 0x50]          ; 0043c3d8
    FXCH                                ; 0043c3dc
    FSTP float ptr [ESP + 0x3c]         ; 0043c3de
    FMUL float ptr [ESP + 0x3c]         ; 0043c3e2
    FXCH                                ; 0043c3e6
    FST float ptr [ESP + 0x48]          ; 0043c3e8
    FMUL float ptr [ESP + 0x4]          ; 0043c3ec
    FXCH ST3                            ; 0043c3f0
    FST float ptr [ESP + 0x4c]          ; 0043c3f2
    FMUL float ptr [ESP + 0x4]          ; 0043c3f6
    FLD float ptr [ESP + 0x1c]          ; 0043c3fa
    FXCH ST5                            ; 0043c3fe
    FSTP float ptr [ESP + 0x8]          ; 0043c400
    FXCH ST4                            ; 0043c404
    FMUL float ptr [ESP + 0x8]          ; 0043c406
    FLD float ptr [ESP + 0x50]          ; 0043c40a
    FXCH                                ; 0043c40e
    FSUBP ST4,ST0                       ; 0043c410
    FMUL float ptr [ESP + 0x4]          ; 0043c412
    FXCH ST3                            ; 0043c416
    FSTP float ptr [ESP + 0x14]         ; 0043c418
    FLD float ptr [ESP + 0x4c]          ; 0043c41c
    FMUL float ptr [ESP + 0x14]         ; 0043c420
    FLD float ptr [ESP + 0x50]          ; 0043c424
    FXCH                                ; 0043c428
    FSUBP ST2,ST0                       ; 0043c42a
    FMUL float ptr [ESP + 0xc]          ; 0043c42c
    FLD float ptr [ESP + 0x48]          ; 0043c430
    FMUL float ptr [ESP + 0xc]          ; 0043c434
    FXCH ST3                            ; 0043c438
    FSTP float ptr [ESP + 0x18]         ; 0043c43a
    FLD float ptr [ESP + 0x4c]          ; 0043c43e
    FMUL float ptr [ESP + 0x1c]         ; 0043c442
    FXCH ST3                            ; 0043c446
    FSTP float ptr [ESP + 0x20]         ; 0043c448
    FLD float ptr [ESP + 0x44]          ; 0043c44c
    FMUL float ptr [ESP + 0x8]          ; 0043c450
    FLD float ptr [ESP + 0x18]          ; 0043c454
    FMUL float ptr [ESP + 0xc]          ; 0043c458
    FXCH                                ; 0043c45c
    FSUBR float ptr [ESP + 0x20]        ; 0043c45e
    FXCH                                ; 0043c462
    FSUBP ST6,ST0                       ; 0043c464
    FSTP float ptr [ESP + 0x40]         ; 0043c466
    FLD float ptr [ESP + 0x18]          ; 0043c46a
    FMUL float ptr [ESP + 0x40]         ; 0043c46e
    FXCH ST5                            ; 0043c472
    FCHS                                ; 0043c474
    FSTP float ptr [ESP + 0x30]         ; 0043c476
    FLD float ptr [ESP + 0x18]          ; 0043c47a
    FMUL float ptr [ESP + 0x8]          ; 0043c47e
    FLD float ptr [ESP + 0x50]          ; 0043c482
    FXCH                                ; 0043c486
    FSUBP ST5,ST0                       ; 0043c488
    FMUL float ptr [ESP + 0x1c]         ; 0043c48a
    FXCH ST4                            ; 0043c48e
    FSTP float ptr [ESP + 0x34]         ; 0043c490
    FLD float ptr [ESP + 0x4c]          ; 0043c494
    FMUL float ptr [ESP + 0x8]          ; 0043c498
    FLD float ptr [ESP + 0x18]          ; 0043c49c
    FMUL float ptr [ESP + 0x44]         ; 0043c4a0
    FXCH                                ; 0043c4a4
    FSUBP ST2,ST0                       ; 0043c4a6
    FLD float ptr [ESP + 0x18]          ; 0043c4a8
    FMUL float ptr [ESP + 0x48]         ; 0043c4ac
    FXCH                                ; 0043c4b0
    FSUBP ST4,ST0                       ; 0043c4b2
    FSUBP ST4,ST0                       ; 0043c4b4
    FCHS                                ; 0043c4b6
    FXCH ST2                            ; 0043c4b8
    FSTP float ptr [ESP + 0x28]         ; 0043c4ba
    FXCH ST2                            ; 0043c4be
    FCHS                                ; 0043c4c0
    FXCH                                ; 0043c4c2
    FSTP float ptr [ESP + 0x2c]         ; 0043c4c4
    FSTP float ptr [ESP + 0x38]         ; 0043c4c8
    FLD float ptr [ESP + 0x14]          ; 0043c4cc
    FCHS                                ; 0043c4d0
    FXCH ST2                            ; 0043c4d2
    FADDP                               ; 0043c4d4
    FXCH                                ; 0043c4d6
    FSTP float ptr [ESP + 0x24]         ; 0043c4d8
    FSTP float ptr [ESP]                ; 0043c4dc
    FLD float ptr [ESP]                 ; 0043c4df
    FDIVR double ptr [0x005ce3ce]       ; 0043c4e2 | DAT_005ce3ce
    FLD float ptr [ESP + 0x50]          ; 0043c4e8
    FMUL float ptr [ESP + 0x44]         ; 0043c4ec
    FLD float ptr [ESP + 0x4c]          ; 0043c4f0
    FMUL float ptr [ESP + 0x48]         ; 0043c4f4
    FLD float ptr [ESP + 0x3c]          ; 0043c4f8
    FXCH ST3                            ; 0043c4fc
    FSTP float ptr [ESP]                ; 0043c4fe
    FXCH ST2                            ; 0043c501
    FMUL float ptr [ESP]                ; 0043c503
    FLD float ptr [ESP + 0x30]          ; 0043c506
    FMUL float ptr [ESP]                ; 0043c50a
    FLD float ptr [ESP + 0x28]          ; 0043c50d
    FMUL float ptr [ESP]                ; 0043c511
    FLD float ptr [ESP + 0x24]          ; 0043c514
    FMUL float ptr [ESP]                ; 0043c518
    FXCH ST5                            ; 0043c51b
    FSUBP ST4,ST0                       ; 0043c51d
    FXCH ST3                            ; 0043c51f
    FSTP float ptr [ESP + 0x10]         ; 0043c521
    FLD float ptr [ESP + 0x34]          ; 0043c525
    FMUL float ptr [ESP]                ; 0043c529
    FLD float ptr [ESP + 0x38]          ; 0043c52c
    FMUL float ptr [ESP]                ; 0043c530
    FLD float ptr [ESP + 0x40]          ; 0043c533
    FMUL float ptr [ESP]                ; 0043c537
    FXCH ST4                            ; 0043c53a
    CALL FUN_005b7ff0                   ; 0043c53c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EAX + 0x19c]       ; 0043c541
    FLD float ptr [ESP + 0x2c]          ; 0043c547
    FMUL float ptr [ESP]                ; 0043c54b
    FXCH ST3                            ; 0043c54e
    CALL FUN_005b7ff0                   ; 0043c550
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EAX + 0x1a0]       ; 0043c555
    FLD float ptr [ESP + 0x10]          ; 0043c55b
    FMUL float ptr [ESP]                ; 0043c55f
    FXCH ST5                            ; 0043c562
    CALL FUN_005b7ff0                   ; 0043c564
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST6                            ; 0043c569
    CALL FUN_005b7ff0                   ; 0043c56b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST2                            ; 0043c570
    CALL FUN_005b7ff0                   ; 0043c572
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0043c577
    CALL FUN_005b7ff0                   ; 0043c579
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST4                            ; 0043c57e
    CALL FUN_005b7ff0                   ; 0043c580
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST3                            ; 0043c585
    CALL FUN_005b7ff0                   ; 0043c587
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST5                            ; 0043c58c
    CALL FUN_005b7ff0                   ; 0043c58e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST6                            ; 0043c593
    FISTP dword ptr [EAX + 0x1a4]       ; 0043c595
    FXCH                                ; 0043c59b
    FISTP dword ptr [EAX + 0x1a8]       ; 0043c59d
    FISTP dword ptr [EAX + 0x1ac]       ; 0043c5a3
    FXCH                                ; 0043c5a9
    FISTP dword ptr [EAX + 0x1b0]       ; 0043c5ab
    FISTP dword ptr [EAX + 0x1b4]       ; 0043c5b1
    FISTP dword ptr [EAX + 0x1b8]       ; 0043c5b7
    FISTP dword ptr [EAX + 0x1bc]       ; 0043c5bd
    MOV ESP,EBP                         ; 0043c5c3
    POP EBP                             ; 0043c5c5
    RET                                 ; 0043c5c6

