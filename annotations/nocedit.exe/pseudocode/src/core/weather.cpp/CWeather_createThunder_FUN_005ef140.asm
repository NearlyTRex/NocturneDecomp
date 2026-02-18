; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_createThunder_FUN_005ef140(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_weather.cpp_CWeather_update_FUN_005eeaf0 at 005eedd4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ef140
        ;   Label: core_weather.cpp_CWeather_createThunder_FUN_005ef140
    SUB ESP,0x4                         ; 005ef141
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ef144
    PUSH 0x41a00000                     ; 005ef148
    PUSH 0x41200000                     ; 005ef14d
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005ef152
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

