; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005592b0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_gabriela.cpp_FUN_004cad20 at 004cade7
;   core_sound.cpp_FUN_0057c57e at 0057c5e2
;   core_sound.cpp_FUN_0057ce10 at 0057d4f0
;   core_weather.cpp_CWeather_setOriginAndRotation_FUN_005af040 at 005af17f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005592b0
        ;   Label: core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0
    MOV dword ptr [EAX + 0x15f6ac],0xffffffff ; 005592b4
    RET                                 ; 005592be

