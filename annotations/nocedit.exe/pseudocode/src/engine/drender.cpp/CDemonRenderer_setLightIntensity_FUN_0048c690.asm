; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690(CDemonRenderer *this_ptr,float intensity)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   intensity
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a1bf
;
; Referenced Globals:
;   double g_LightIntensityScale = 65536
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_light.cpp_setAmbientLightLevel_FUN_00505490
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0048c690
        ;   Label: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
    FLD float ptr [ESP + 0xc]           ; 0048c693
    FMUL double ptr [0x0062204d]        ; 0048c697 | g_LightIntensityScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c69d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 0048c6a2
    MOV EDX,dword ptr [ESP]             ; 0048c6a5
    PUSH EDX                            ; 0048c6a8
    CALL engine_light.cpp_setAmbientLightLevel_FUN_00505490 ; 0048c6a9
        ;   XREF to: 00505490 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setAmbientLightLevel_FUN_00505490(int light_level)
    ADD ESP,0x4                         ; 0048c6ae
    ADD ESP,0x4                         ; 0048c6b1
    RET                                 ; 0048c6b4

