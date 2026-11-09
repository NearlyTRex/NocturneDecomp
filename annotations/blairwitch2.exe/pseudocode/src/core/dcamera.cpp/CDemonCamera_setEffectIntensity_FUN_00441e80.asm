; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera *this_ptr,float intensity)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   intensity
;
; XREF[6]:
;   core_game.cpp_FUN_004b90d0 at 004ba7af
;   core_set.cpp_FUN_0052d980 at 0052da4e
;   core_set.cpp_FUN_00534640 at 0053466d
;   core_setutil.cpp_C3DSCamera_apply_FUN_0053ad20 at 0053ad95
;   core_weather.cpp_FUN_0058a660 at 0058a8d7
;   core_weather.cpp_FUN_0058aa30 at 0058acae
;
; Referenced Globals:
;   undefined4 DAT_005ce636
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00441e80
        ;   Label: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
    FMUL double ptr [0x005ce636]        ; 00441e84 | DAT_005ce636
    MOV EAX,dword ptr [ESP + 0x4]       ; 00441e8a
    CALL crt_math.c_round_FUN_005b7ff0  ; 00441e8e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EAX + 0x11e8]      ; 00441e93
    RET                                 ; 00441e99

