; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_004839f0(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e3ef
;
; Referenced Globals:
;   undefined4 DAT_005db3b4
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_light.cpp_setAmbientLightLevel_FUN_004ffa50
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004839f0
        ;   Label: engine_matrix.c_FUN_004839f0
    FLD float ptr [ESP + 0xc]           ; 004839f3
    FMUL double ptr [0x005db3b4]        ; 004839f7 | DAT_005db3b4
    CALL crt_math.c_round_FUN_005c03a0  ; 004839fd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 00483a02
    MOV EDX,dword ptr [ESP]             ; 00483a05
    PUSH EDX                            ; 00483a08
    CALL engine_light.cpp_setAmbientLightLevel_FUN_004ffa50 ; 00483a09
        ;   XREF to: 004ffa50 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setAmbientLightLevel_FUN_004ffa50(int light_level)
    ADD ESP,0x4                         ; 00483a0e
    ADD ESP,0x4                         ; 00483a11
    RET                                 ; 00483a14

