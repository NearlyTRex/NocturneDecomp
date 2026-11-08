; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3520(uint param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[10]:
;   FUN_0047c050 at 0047c242
;   FUN_0047ee50 at 0047efe7
;   FUN_0047fa80 at 0047fbb3
;   FUN_00480200 at 004802bb
;   FUN_00480410 at 00480527
;   FUN_004843d0 at 004844c9
;   FUN_004850a0 at 00485106
;   FUN_004852f0 at 004853b2
;   FUN_00485640 at 004856d0
;   FUN_00486120 at 00486285
;
; Referenced Globals:
;   undefined4 DAT_005c8335
;   undefined4 DAT_005c8339
;   undefined4 DAT_01d76c40
;   undefined4 DAT_01d7a6b8
;   undefined4 DAT_01d7a6bc
;   undefined4 DAT_01d7a6c0
;   undefined4 DAT_01d7a6c4
;
; Called Functions:
;   FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004f3520
        ;   Label: FUN_004f3520
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3523
    MOV EDX,EAX                         ; 004f3527
    FLD float ptr [0x01d76c40]          ; 004f3529 | DAT_01d76c40
    SHR EDX,0x10                        ; 004f352f
    FMUL float ptr [0x005c8339]         ; 004f3532 | DAT_005c8339
    AND EDX,0xff                        ; 004f3538
    MOV dword ptr [ESP],EDX             ; 004f353e
    MOV EDX,EAX                         ; 004f3541
    FILD dword ptr [ESP]                ; 004f3543
    SHR EDX,0x8                         ; 004f3546
    FLD float ptr [0x005c8335]          ; 004f3549 | DAT_005c8335
    FXCH                                ; 004f354f
    FMUL ST1                            ; 004f3551
    AND EDX,0xff                        ; 004f3553
    MOV dword ptr [ESP],EDX             ; 004f3559
    MOV EDX,EAX                         ; 004f355c
    FILD dword ptr [ESP]                ; 004f355e
    AND EDX,0xff                        ; 004f3561
    FMUL ST2                            ; 004f3567
    MOV dword ptr [ESP],EDX             ; 004f3569
    FILD dword ptr [ESP]                ; 004f356c
    FMULP ST3                           ; 004f356f
    FXCH ST3                            ; 004f3571
    CALL FUN_005a3120                   ; 004f3573
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 004f3578
    FSTP float ptr [0x01d7a6b8]         ; 004f357b | DAT_01d7a6b8
    MOV EDX,dword ptr [ESP]             ; 004f3581
    AND EAX,0xffffff                    ; 004f3584
    SHL EDX,0x18                        ; 004f3589
    FXCH                                ; 004f358c
    FSTP float ptr [0x01d7a6bc]         ; 004f358e | DAT_01d7a6bc
    OR EAX,EDX                          ; 004f3594
    FSTP float ptr [0x01d7a6c0]         ; 004f3596 | DAT_01d7a6c0
    MOV [0x01d7a6c4],EAX                ; 004f359c | DAT_01d7a6c4
    ADD ESP,0x4                         ; 004f35a1
    RET                                 ; 004f35a4

