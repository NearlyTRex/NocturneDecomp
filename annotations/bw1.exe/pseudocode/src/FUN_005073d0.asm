; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005073d0(void)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_00483560 at 00483772
;   FUN_004fae10 at 004fb8ff
;
; Referenced Globals:
;   undefined4 DAT_005e76de
;   undefined4 DAT_005e76e6
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   undefined4 DAT_01c51d78
;   undefined4 DAT_01c51d7c
;   undefined4 DAT_01d1dd18
;   undefined4 DAT_01d1dd1c
;   undefined4 DAT_01d1dd20
;   undefined4 DAT_01d1dd24
;   ... and 14 more
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005073d0
        ;   Label: FUN_005073d0
    MOV EBP,ESP                         ; 005073d1
    SUB ESP,0x54                        ; 005073d3
    AND ESP,0xfffffff8                  ; 005073d6
    FILD dword ptr [0x01c51d5c]         ; 005073d9 | DAT_01c51d5c
    FMUL double ptr [0x005e76de]        ; 005073df | DAT_005e76de
    FILD dword ptr [0x01c51d60]         ; 005073e5 | DAT_01c51d60
    FMUL double ptr [0x005e76de]        ; 005073eb | DAT_005e76de
    FILD dword ptr [0x01c51d64]         ; 005073f1 | DAT_01c51d64
    FMUL double ptr [0x005e76de]        ; 005073f7 | DAT_005e76de
    FILD dword ptr [0x01c51d68]         ; 005073fd | DAT_01c51d68
    FMUL double ptr [0x005e76de]        ; 00507403 | DAT_005e76de
    FILD dword ptr [0x01c51d6c]         ; 00507409 | DAT_01c51d6c
    FMUL double ptr [0x005e76de]        ; 0050740f | DAT_005e76de
    FILD dword ptr [0x01c51d70]         ; 00507415 | DAT_01c51d70
    FMUL double ptr [0x005e76de]        ; 0050741b | DAT_005e76de
    FILD dword ptr [0x01c51d74]         ; 00507421 | DAT_01c51d74
    FMUL double ptr [0x005e76de]        ; 00507427 | DAT_005e76de
    FXCH ST6                            ; 0050742d
    FSTP float ptr [ESP + 0x48]         ; 0050742f
    FILD dword ptr [0x01c51d78]         ; 00507433 | DAT_01c51d78
    FMUL double ptr [0x005e76de]        ; 00507439 | DAT_005e76de
    FXCH ST2                            ; 0050743f
    FSTP float ptr [ESP + 0x3c]         ; 00507441
    FILD dword ptr [0x01c51d7c]         ; 00507445 | DAT_01c51d7c
    FMUL double ptr [0x005e76de]        ; 0050744b | DAT_005e76de
    FXCH                                ; 00507451
    FSTP float ptr [ESP + 0x34]         ; 00507453
    FLD float ptr [ESP + 0x3c]          ; 00507457
    FXCH                                ; 0050745b
    FSTP float ptr [ESP + 0x14]         ; 0050745d
    FMUL float ptr [ESP + 0x14]         ; 00507461
    FXCH                                ; 00507465
    FSTP float ptr [ESP + 0x40]         ; 00507467
    FLD float ptr [ESP + 0x34]          ; 0050746b
    FMUL float ptr [ESP + 0x40]         ; 0050746f
    FXCH ST4                            ; 00507473
    FST float ptr [ESP + 0x50]          ; 00507475
    FMUL float ptr [ESP + 0x14]         ; 00507479
    FXCH ST3                            ; 0050747d
    FSTP float ptr [ESP + 0x4c]         ; 0050747f
    FLD float ptr [ESP + 0x48]          ; 00507483
    FMUL float ptr [ESP + 0x14]         ; 00507487
    FLD float ptr [ESP + 0x4c]          ; 0050748b
    FMUL float ptr [ESP + 0x40]         ; 0050748f
    FXCH ST2                            ; 00507493
    FSTP float ptr [ESP + 0x18]         ; 00507495
    FXCH ST4                            ; 00507499
    FSUBR float ptr [ESP + 0x18]        ; 0050749b
    FLD float ptr [ESP + 0x48]          ; 0050749f
    FXCH                                ; 005074a3
    FSTP float ptr [ESP + 0x2c]         ; 005074a5
    FMUL float ptr [ESP + 0x2c]         ; 005074a9
    FXCH ST2                            ; 005074ad
    FST float ptr [ESP + 0x44]          ; 005074af
    FMUL float ptr [ESP + 0x14]         ; 005074b3
    FXCH ST5                            ; 005074b7
    FSTP float ptr [ESP + 0x38]         ; 005074b9
    FLD float ptr [ESP + 0x34]          ; 005074bd
    FMUL float ptr [ESP + 0x38]         ; 005074c1
    FLD float ptr [ESP + 0x4c]          ; 005074c5
    FMUL float ptr [ESP + 0x38]         ; 005074c9
    FXCH                                ; 005074cd
    FSUBP ST6,ST0                       ; 005074cf
    MOV EAX,[0x01c51d5c]                ; 005074d1 | DAT_01c51d5c
    FLD float ptr [ESP + 0x50]          ; 005074d6
    FMUL ST6                            ; 005074da
    MOV [0x01d1dd40],EAX                ; 005074dc | DAT_01d1dd40
    FSUBP ST3,ST0                       ; 005074e1
    MOV EAX,[0x01c51d60]                ; 005074e3 | DAT_01c51d60
    FLD float ptr [ESP + 0x44]          ; 005074e8
    FMUL float ptr [ESP + 0x40]         ; 005074ec
    MOV [0x01d1dd44],EAX                ; 005074f0 | DAT_01d1dd44
    MOV EAX,[0x01c51d64]                ; 005074f5 | DAT_01c51d64
    FSTP float ptr [ESP + 0x18]         ; 005074fa
    FLD float ptr [ESP + 0x3c]          ; 005074fe
    FMUL float ptr [ESP + 0x38]         ; 00507502
    MOV [0x01d1dd48],EAX                ; 00507506 | DAT_01d1dd48
    FSUBR float ptr [ESP + 0x18]        ; 0050750b
    MOV EAX,[0x01c51d68]                ; 0050750f | DAT_01c51d68
    FSTP float ptr [ESP + 0x30]         ; 00507514
    FLD float ptr [ESP + 0x4c]          ; 00507518
    FMUL float ptr [ESP + 0x30]         ; 0050751c
    MOV [0x01d1dd4c],EAX                ; 00507520 | DAT_01d1dd4c
    FXCH ST2                            ; 00507525
    FSUBP ST4,ST0                       ; 00507527
    MOV EAX,[0x01c51d6c]                ; 00507529 | DAT_01c51d6c
    FSUBP ST4,ST0                       ; 0050752e
    MOV [0x01d1dd50],EAX                ; 00507530 | DAT_01d1dd50
    MOV EAX,[0x01c51d70]                ; 00507535 | DAT_01c51d70
    FXCH ST2                            ; 0050753a
    FCHS                                ; 0050753c
    MOV [0x01d1dd54],EAX                ; 0050753e | DAT_01d1dd54
    MOV EAX,[0x01c51d74]                ; 00507543 | DAT_01c51d74
    FXCH ST3                            ; 00507548
    FSTP float ptr [ESP + 0x28]         ; 0050754a
    MOV [0x01d1dd58],EAX                ; 0050754e | DAT_01d1dd58
    MOV EAX,[0x01c51d78]                ; 00507553 | DAT_01c51d78
    FXCH ST2                            ; 00507558
    FSTP float ptr [ESP + 0x24]         ; 0050755a
    MOV [0x01d1dd5c],EAX                ; 0050755e | DAT_01d1dd5c
    FXCH ST2                            ; 00507563
    FCHS                                ; 00507565
    FSTP float ptr [ESP + 0x20]         ; 00507567
    MOV EAX,[0x01c51d7c]                ; 0050756b | DAT_01c51d7c
    FADDP                               ; 00507570
    MOV [0x01d1dd60],EAX                ; 00507572 | DAT_01d1dd60
    FSTP float ptr [ESP]                ; 00507577
    FLD float ptr [ESP]                 ; 0050757a
    FDIVR double ptr [0x005e76e6]       ; 0050757d | DAT_005e76e6
    FLD float ptr [ESP + 0x48]          ; 00507583
    FLD ST0                             ; 00507587
    FMUL float ptr [ESP + 0x40]         ; 00507589
    FLD float ptr [ESP + 0x34]          ; 0050758d
    FLD float ptr [ESP + 0x50]          ; 00507591
    FMUL ST1                            ; 00507595
    FLD ST3                             ; 00507597
    FMULP ST2                           ; 00507599
    FXCH ST3                            ; 0050759b
    FMUL float ptr [ESP + 0x3c]         ; 0050759d
    FLD float ptr [ESP + 0x50]          ; 005075a1
    FMUL float ptr [ESP + 0x38]         ; 005075a5
    FLD float ptr [ESP + 0x4c]          ; 005075a9
    FXCH                                ; 005075ad
    FSUBP ST4,ST0                       ; 005075af
    FMUL float ptr [ESP + 0x3c]         ; 005075b1
    FXCH ST3                            ; 005075b5
    FCHS                                ; 005075b7
    FSTP float ptr [ESP + 0x8]          ; 005075b9
    FLD float ptr [ESP + 0x4c]          ; 005075bd
    FMUL float ptr [ESP + 0x44]         ; 005075c1
    FLD float ptr [ESP + 0x50]          ; 005075c5
    FMUL float ptr [ESP + 0x44]         ; 005075c9
    FXCH ST4                            ; 005075cd
    FSUBP ST5,ST0                       ; 005075cf
    FLD float ptr [ESP + 0x2c]          ; 005075d1
    FXCH ST6                            ; 005075d5
    FSTP float ptr [ESP]                ; 005075d7
    FXCH ST5                            ; 005075da
    FMUL float ptr [ESP]                ; 005075dc
    FLD float ptr [ESP + 0x24]          ; 005075df
    FXCH ST6                            ; 005075e3
    FSUBP ST3,ST0                       ; 005075e5
    FXCH ST5                            ; 005075e7
    FMUL float ptr [ESP]                ; 005075e9
    FXCH ST2                            ; 005075ec
    FCHS                                ; 005075ee
    FXCH ST4                            ; 005075f0
    FMUL float ptr [ESP]                ; 005075f2
    FLD float ptr [ESP + 0x20]          ; 005075f5
    FMUL float ptr [ESP]                ; 005075f9
    FXCH ST4                            ; 005075fc
    FSUBP ST2,ST0                       ; 005075fe
    FXCH                                ; 00507600
    FSTP float ptr [ESP + 0x10]         ; 00507602
    FLD float ptr [ESP + 0x28]          ; 00507606
    FMUL float ptr [ESP]                ; 0050760a
    FXCH ST4                            ; 0050760d
    FMUL float ptr [ESP]                ; 0050760f
    FLD float ptr [ESP + 0x30]          ; 00507612
    FMUL float ptr [ESP]                ; 00507616
    FXCH ST6                            ; 00507619
    CALL FUN_005c03a0                   ; 0050761b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [0x01d1dd18]        ; 00507620 | DAT_01d1dd18
    FLD float ptr [ESP + 0x8]           ; 00507626
    FMUL float ptr [ESP]                ; 0050762a
    FXCH ST3                            ; 0050762d
    CALL FUN_005c03a0                   ; 0050762f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [0x01d1dd1c]        ; 00507634 | DAT_01d1dd1c
    FLD float ptr [ESP + 0x10]          ; 0050763a
    FMUL float ptr [ESP]                ; 0050763e
    FXCH ST2                            ; 00507641
    CALL FUN_005c03a0                   ; 00507643
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST4                            ; 00507648
    CALL FUN_005c03a0                   ; 0050764a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST5                            ; 0050764f
    CALL FUN_005c03a0                   ; 00507651
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 00507656
    CALL FUN_005c03a0                   ; 00507658
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST6                            ; 0050765d
    CALL FUN_005c03a0                   ; 0050765f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST3                            ; 00507664
    CALL FUN_005c03a0                   ; 00507666
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 0050766b
    CALL FUN_005c03a0                   ; 0050766d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST4                            ; 00507672
    FISTP dword ptr [0x01d1dd20]        ; 00507674 | DAT_01d1dd20
    FXCH ST4                            ; 0050767a
    FISTP dword ptr [0x01d1dd24]        ; 0050767c | DAT_01d1dd24
    FXCH ST3                            ; 00507682
    FISTP dword ptr [0x01d1dd28]        ; 00507684 | DAT_01d1dd28
    FXCH ST3                            ; 0050768a
    FISTP dword ptr [0x01d1dd2c]        ; 0050768c | DAT_01d1dd2c
    FXCH ST2                            ; 00507692
    FISTP dword ptr [0x01d1dd30]        ; 00507694 | DAT_01d1dd30
    FISTP dword ptr [0x01d1dd34]        ; 0050769a | DAT_01d1dd34
    FISTP dword ptr [0x01d1dd38]        ; 005076a0 | DAT_01d1dd38
    MOV ESP,EBP                         ; 005076a6
    POP EBP                             ; 005076a8
    RET                                 ; 005076a9

