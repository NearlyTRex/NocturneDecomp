; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(int param_1,float param_2)
;
;
; XREF[6]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a284a
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 00508589
;   core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0 at 0050e4f8
;   core_setutil.cpp_FUN_005148b0 at 0051491f
;   core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40 at 00554f8e
;   core_weather.cpp_CWeather_update_FUN_00554980 at 00554bec
;
; Referenced Globals:
;   double DOUBLE_0057b9eb = 65535
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00446740
        ;   Label: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740
    FMUL double ptr [0x0057b9eb]        ; 00446744 | DOUBLE_0057b9eb
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044674a
    CALL crt_math.c_round_FUN_00563a30  ; 0044674e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EAX + 0x11e8]      ; 00446753
    RET                                 ; 00446759

