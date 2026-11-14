; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0046b4f0(CDemonRenderer *this_ptr,float intensity)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   intensity
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 at 0052d10f
;
; Referenced Globals:
;   undefined4 DAT_005d15bb
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_light.cpp_setAmbientLightLevel_FUN_004e25c0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046b4f0
        ;   Label: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0046b4f0
    FLD float ptr [ESP + 0xc]           ; 0046b4f3
    FMUL double ptr [0x005d15bb]        ; 0046b4f7 | DAT_005d15bb
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b4fd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0046b502
    MOV EDX,dword ptr [ESP]             ; 0046b505
    PUSH EDX                            ; 0046b508
    CALL engine_light.cpp_setAmbientLightLevel_FUN_004e25c0 ; 0046b509
        ;   XREF to: 004e25c0 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setAmbientLightLevel_FUN_004e25c0(int light_level)
    ADD ESP,0x4                         ; 0046b50e
    ADD ESP,0x4                         ; 0046b511
    RET                                 ; 0046b514

