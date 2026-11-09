; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(CDemonSet *this_ptr,float peak,float attack,float sustain,float decay)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   peak
; float            Stack[0xc]:4   attack
; float            Stack[0x10]:4   sustain
; float            Stack[0x14]:4   decay
;
; XREF[8]:
;   core_baal.cpp_FUN_005968a0 at 00596cd2
;   core_drip.cpp_FUN_0046ecf0 at 0046ee9e
;   core_event.cpp_FUN_0048c2e0 at 00490add
;   core_fire.cpp_FUN_00499eb0 at 00499f22
;   core_fire.cpp_FUN_0049c730 at 0049c77c
;   core_fire.cpp_FUN_004a3bd0 at 004a3c41
;   core_fire.cpp_FUN_004a3c50 at 004a3cd7
;   core_hino.cpp_FUN_0059b960 at 0059c0cc
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00450d70
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0x14]         ; 0053b440
        ;   Label: core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440
    PUSH dword ptr [ESP + 0x14]         ; 0053b444
    PUSH dword ptr [ESP + 0x14]         ; 0053b448
    PUSH dword ptr [ESP + 0x14]         ; 0053b44c
    PUSH 0x2038f4c                      ; 0053b450
    CALL core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00450d70 ; 0053b455
        ;   XREF to: 00450d70 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00450d70(CDemonCamera * this_ptr, float peak_intensity, float attack_time, float sustain_duration, ...)
    ADD ESP,0x14                        ; 0053b45a
    RET                                 ; 0053b45d

