; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setColor_FUN_004f3520(uint rgb)
;
; Parameters:
; uint             Stack[0x4]:4   rgb
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[16]:
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0 at 004844c9
;   shape_edittool.cpp_FUN_0047b770 at 0047b7b7
;   shape_edittool.cpp_FUN_0047b7c0 at 0047b852
;   shape_edittool.cpp_FUN_0047b8e0 at 0047b948
;   shape_edittool.cpp_FUN_0047c050 at 0047c242
;   shape_edittool.cpp_FUN_0047ee50 at 0047efe7
;   shape_edittool.cpp_FUN_0047fa80 at 0047fbb3
;   shape_edittool.cpp_FUN_00480200 at 004802bb
;   shape_edittool.cpp_FUN_00480410 at 00480527
;   shape_edittool.cpp_FUN_00480f00 at 00480f93
;   ... and 6 more
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
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004f3520
        ;   Label: engine_mini3d.cpp_setColor_FUN_004f3520
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
    CALL crt_math.c_round_FUN_005a3120  ; 004f3573
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
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

