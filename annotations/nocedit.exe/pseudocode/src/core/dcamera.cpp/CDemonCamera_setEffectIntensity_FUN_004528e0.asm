; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 (CDemonCamera *this_ptr,float intensity)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   intensity
;
; XREF[5]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004dfae4
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056aad9
;   core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20 at 00570e4d
;   core_setutil.cpp_C3DSCamera_apply_FUN_00585870 at 005858e5
;   core_weather.cpp_CWeather_FUN_005eeaf0 at 005eed5c
;
; Referenced Globals:
;   double g_CameraEffectIntensityScaleFactor = 65535
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004528e0
        ;   Label: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
    FMUL double ptr [0x0061a33a]        ; 004528e4 | g_CameraEffectIntensityScaleFactor
    MOV EAX,dword ptr [ESP + 0x4]       ; 004528ea
    CALL crt_math.c_round_FUN_005fe6b0  ; 004528ee
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0x11e8]      ; 004528f3
    RET                                 ; 004528f9

