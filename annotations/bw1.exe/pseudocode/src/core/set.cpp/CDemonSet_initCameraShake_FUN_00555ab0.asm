; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   peak
; float            Stack[0xc]:4   attack
; float            Stack[0x10]:4   sustain
; float            Stack[0x14]:4   decay
;
; XREF[6]:
;   core_drip.cpp_CDrip_process_FUN_00485610 at 004857be
;   core_event.cpp_FUN_004a1d00 at 004a6130
;   core_fire.cpp_CExplosion_activate_FUN_004b16d0 at 004b1717
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060 at 004b70da
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0 at 004b7056
;   core_fire.cpp_CFireball_onCollision_FUN_004aee60 at 004aeed2
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00454c20
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0x14]         ; 00555ab0
        ;   Label: core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0
    PUSH dword ptr [ESP + 0x14]         ; 00555ab4
    PUSH dword ptr [ESP + 0x14]         ; 00555ab8
    PUSH dword ptr [ESP + 0x14]         ; 00555abc
    PUSH 0x1fe37ec                      ; 00555ac0
    CALL core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00454c20 ; 00555ac5
        ;   XREF to: 00454c20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00454c20(CDemonCamera * this_ptr, float peak_intensity, float attack_time, float sustain_duration, ...)
    ADD ESP,0x14                        ; 00555aca
    RET                                 ; 00555acd

