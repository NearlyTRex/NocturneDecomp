; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(int param_1)
;
;
; XREF[4]:
;   FUN_004998c0 at 0049997b
;   FUN_0052d790 at 0052d7e6
;   FUN_0052dff0 at 0052e2dc
;   core_weather.cpp_CWeather_setOriginAndRotation_FUN_005557d0 at 0055590f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005117e0
        ;   Label: core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0
    MOV dword ptr [EAX + 0x15f2ac],0xffffffff ; 005117e4
    RET                                 ; 005117ee

