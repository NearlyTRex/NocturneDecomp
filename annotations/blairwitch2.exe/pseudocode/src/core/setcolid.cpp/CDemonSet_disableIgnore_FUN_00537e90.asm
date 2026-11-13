; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00537e90(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004b1e00 at 004b1ec7
;   core_sound.cpp_CSound_process_FUN_0055a3c0 at 0055a6b8
;   core_sound.cpp_FUN_00559b50 at 00559bb2
;   core_weather.cpp_CWeather_setOriginAndRotation_FUN_0058b4f0 at 0058b62f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537e90
        ;   Label: core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00537e90
    MOV dword ptr [EAX + 0x15f6a8],0xffffffff ; 00537e94
    RET                                 ; 00537e9e

