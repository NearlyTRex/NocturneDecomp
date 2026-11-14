; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_00534800(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   peak
; float            Stack[0xc]:4   attack
; float            Stack[0x10]:4   sustain
; float            Stack[0x14]:4   decay
;
; XREF[6]:
;   core_drip.cpp_CDrip_process_FUN_0046d110 at 0046d2be
;   core_event.cpp_FUN_00489670 at 0048d871
;   core_fire.cpp_CExplosion_activate_FUN_00498d30 at 00498d77
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760 at 0049e7da
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_0049e6e0 at 0049e756
;   core_fire.cpp_CFireball_onCollision_FUN_004964c0 at 00496532
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00443570
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0x14]         ; 00534800
        ;   Label: core_set.cpp_CDemonSet_initCameraShake_FUN_00534800
    PUSH dword ptr [ESP + 0x14]         ; 00534804
    PUSH dword ptr [ESP + 0x14]         ; 00534808
    PUSH dword ptr [ESP + 0x14]         ; 0053480c
    PUSH 0x1fc7838                      ; 00534810
    CALL core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00443570 ; 00534815
        ;   XREF to: 00443570 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00443570(CDemonCamera * this_ptr, float peak_intensity, float attack_time, float sustain_duration, ...)
    ADD ESP,0x14                        ; 0053481a
    RET                                 ; 0053481d

