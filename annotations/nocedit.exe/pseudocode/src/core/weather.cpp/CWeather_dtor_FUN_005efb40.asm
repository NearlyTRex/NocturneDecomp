; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWeather * __cdecl core_weather_cpp_CWeather_dtor_FUN_005efb40(CWeather *this_ptr,uint flags)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005efb40
        ;   Label: core_weather.cpp_CWeather_dtor_FUN_005efb40
    RET                                 ; 005efb44

