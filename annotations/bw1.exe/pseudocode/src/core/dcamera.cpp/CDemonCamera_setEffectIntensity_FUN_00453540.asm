; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera *this_ptr,float intensity)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   intensity
;
; XREF[6]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d49df
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054ed29
;   core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0 at 0055591d
;   core_setutil.cpp_C3DSCamera_apply_FUN_0055c5f0 at 0055c665
;   core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580 at 005ae7fd
;   core_weather.cpp_CWeather_update_FUN_005ae190 at 005ae407
;
; Referenced Globals:
;   undefined4 DAT_005d78ff
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00453540
        ;   Label: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540
    FMUL double ptr [0x005d78ff]        ; 00453544 | DAT_005d78ff
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045354a
    CALL crt_math.c_round_FUN_005c03a0  ; 0045354e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EAX + 0x11e8]      ; 00453553
    RET                                 ; 00453559

