; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_CDemonSet_FUN_00570fa0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_drip.cpp_FUN_0048e2a0 at 0048e438
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ad3c4
;   core_fire.cpp_CExplosion_FUN_004c3970 at 004c39b6
;   core_fire.cpp_CFireEffect_FUN_004c8f50 at 004c8fc6
;   core_fire.cpp_CFireEffect_FUN_004c8fd0 at 004c904a
;   core_fire.cpp_CFireball_onCollision_FUN_004c1690 at 004c1702
;
; Referenced Globals:
;   CDemonCamera g_CDemonCameraInstance
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0x14]         ; 00570fa0
        ;   Label: core_set.cpp_CDemonSet_FUN_00570fa0
    PUSH dword ptr [ESP + 0x14]         ; 00570fa4
    PUSH dword ptr [ESP + 0x14]         ; 00570fa8
    PUSH dword ptr [ESP + 0x14]         ; 00570fac
    PUSH 0x32758e4                      ; 00570fb0 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0 ; 00570fb5
        ;   XREF to: 00453fc0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0(CDemonCamera * this_ptr, float peak_intensity, float attack_time, float sustain_duration, ...)
    ADD ESP,0x14                        ; 00570fba
    RET                                 ; 00570fbd

