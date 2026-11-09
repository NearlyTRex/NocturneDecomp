; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera *this_ptr,float intensity)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   intensity
;
; XREF[7]:
;   core_game.cpp_FUN_004bb100 at 004bcb7d
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 005344e9
;   core_set.cpp_FUN_0053b280 at 0053b2ad
;   core_setutil.cpp_C3DSCamera_apply_FUN_00541fb0 at 00542025
;   core_weather.cpp_FUN_0057bda0 at 0057c10d
;   core_weather.cpp_FUN_0057c2e0 at 0057c601
;   core_weather.cpp_FUN_0057d050 at 0057d073
;
; Referenced Globals:
;   undefined4 DAT_005b9f66
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0044f680
        ;   Label: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
    FMUL double ptr [0x005b9f66]        ; 0044f684 | DAT_005b9f66
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044f68a
    CALL crt_math.c_round_FUN_005a3120  ; 0044f68e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX + 0x11e8]      ; 0044f693
    RET                                 ; 0044f699

