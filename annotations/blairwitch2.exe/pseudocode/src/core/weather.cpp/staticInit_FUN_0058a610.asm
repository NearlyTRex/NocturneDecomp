; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_staticInit_FUN_0058a610(void)
;
;
; Called Functions:
;   core_weather.cpp_CWeather_ctor_FUN_0058a640
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x2661f80                      ; 0058a610
        ;   Label: core_weather.cpp_staticInit_FUN_0058a610
    CALL core_weather.cpp_CWeather_ctor_FUN_0058a640 ; 0058a615
        ;   XREF to: 0058a640 (UNCONDITIONAL_CALL)  ; CWeather * core_weather.cpp_CWeather_ctor_FUN_0058a640(CWeather * this_ptr)
    ADD ESP,0x4                         ; 0058a61a
    PUSH 0x5f22b0                       ; 0058a61d
    PUSH 0xc8                           ; 0058a622
    PUSH 0x2661fb8                      ; 0058a627
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0058a62c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 0058a631
    RET                                 ; 0058a634

