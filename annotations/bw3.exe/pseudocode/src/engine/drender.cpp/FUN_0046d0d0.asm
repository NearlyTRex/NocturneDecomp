; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046d0d0(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533baf
;
; Referenced Globals:
;   undefined4 DAT_005bc54b
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_light.cpp_setAmbientLightLevel_FUN_004e0b10
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046d0d0
        ;   Label: engine_drender.cpp_FUN_0046d0d0
    FLD float ptr [ESP + 0xc]           ; 0046d0d3
    FMUL double ptr [0x005bc54b]        ; 0046d0d7 | DAT_005bc54b
    CALL crt_math.c_round_FUN_005a3120  ; 0046d0dd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 0046d0e2
    MOV EDX,dword ptr [ESP]             ; 0046d0e5
    PUSH EDX                            ; 0046d0e8
    CALL engine_light.cpp_setAmbientLightLevel_FUN_004e0b10 ; 0046d0e9
        ;   XREF to: 004e0b10 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setAmbientLightLevel_FUN_004e0b10(int light_level)
    ADD ESP,0x4                         ; 0046d0ee
    ADD ESP,0x4                         ; 0046d0f1
    RET                                 ; 0046d0f4

