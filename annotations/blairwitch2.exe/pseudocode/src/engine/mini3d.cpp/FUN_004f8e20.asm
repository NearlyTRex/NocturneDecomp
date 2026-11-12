; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f8e20(uint param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[15]:
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004831d0 at 004832c9
;   shape_edittool.cpp_FUN_0047a71e at 0047a767
;   shape_edittool.cpp_FUN_0047a770 at 0047a802
;   shape_edittool.cpp_FUN_0047a890 at 0047a8f8
;   shape_edittool.cpp_FUN_0047afb0 at 0047b174
;   shape_edittool.cpp_FUN_0047dc40 at 0047ddd7
;   shape_edittool.cpp_FUN_0047e870 at 0047e9a3
;   shape_edittool.cpp_FUN_0047eff0 at 0047f0ab
;   shape_edittool.cpp_FUN_0047f210 at 0047f327
;   shape_edittool.cpp_FUN_0047fd00 at 0047fd93
;   ... and 5 more
;
; Referenced Globals:
;   undefined4 DAT_005ddfec
;   undefined4 DAT_005ddff0
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d0d2d8
;   undefined4 DAT_01d0d2dc
;   undefined4 DAT_01d0d2e0
;   undefined4 DAT_01d0d2e4
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004f8e20
        ;   Label: engine_mini3d.cpp_FUN_004f8e20
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f8e23
    MOV EDX,EAX                         ; 004f8e27
    FLD float ptr [0x01d09860]          ; 004f8e29 | DAT_01d09860
    SHR EDX,0x10                        ; 004f8e2f
    FMUL float ptr [0x005ddff0]         ; 004f8e32 | DAT_005ddff0
    AND EDX,0xff                        ; 004f8e38
    MOV dword ptr [ESP],EDX             ; 004f8e3e
    MOV EDX,EAX                         ; 004f8e41
    FILD dword ptr [ESP]                ; 004f8e43
    SHR EDX,0x8                         ; 004f8e46
    FLD float ptr [0x005ddfec]          ; 004f8e49 | DAT_005ddfec
    FXCH                                ; 004f8e4f
    FMUL ST1                            ; 004f8e51
    AND EDX,0xff                        ; 004f8e53
    MOV dword ptr [ESP],EDX             ; 004f8e59
    MOV EDX,EAX                         ; 004f8e5c
    FILD dword ptr [ESP]                ; 004f8e5e
    AND EDX,0xff                        ; 004f8e61
    FMUL ST2                            ; 004f8e67
    MOV dword ptr [ESP],EDX             ; 004f8e69
    FILD dword ptr [ESP]                ; 004f8e6c
    FMULP ST3                           ; 004f8e6f
    FXCH ST3                            ; 004f8e71
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f8e73
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 004f8e78
    FSTP float ptr [0x01d0d2d8]         ; 004f8e7b | DAT_01d0d2d8
    MOV EDX,dword ptr [ESP]             ; 004f8e81
    AND EAX,0xffffff                    ; 004f8e84
    SHL EDX,0x18                        ; 004f8e89
    FXCH                                ; 004f8e8c
    FSTP float ptr [0x01d0d2dc]         ; 004f8e8e | DAT_01d0d2dc
    OR EAX,EDX                          ; 004f8e94
    FSTP float ptr [0x01d0d2e0]         ; 004f8e96 | DAT_01d0d2e0
    MOV [0x01d0d2e4],EAX                ; 004f8e9c | DAT_01d0d2e4
    ADD ESP,0x4                         ; 004f8ea1
    RET                                 ; 004f8ea4

