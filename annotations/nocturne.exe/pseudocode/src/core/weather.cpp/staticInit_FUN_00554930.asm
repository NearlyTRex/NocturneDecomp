; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_staticInit_FUN_00554930(void)
;
;
; Called Functions:
;   core_weather.cpp_CWeather_ctor_FUN_00554960
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH 0x2ddf9f0                      ; 00554930
        ;   Label: core_weather.cpp_staticInit_FUN_00554930
    CALL core_weather.cpp_CWeather_ctor_FUN_00554960 ; 00554935
        ;   XREF to: 00554960 (UNCONDITIONAL_CALL)  ; CWeather * core_weather.cpp_CWeather_ctor_FUN_00554960(CWeather * this_ptr)
    ADD ESP,0x4                         ; 0055493a
    PUSH 0x5993b0                       ; 0055493d
    PUSH 0xc8                           ; 00554942
    PUSH 0x2ddfa28                      ; 00554947
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0055494c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00554951
    RET                                 ; 00554954

