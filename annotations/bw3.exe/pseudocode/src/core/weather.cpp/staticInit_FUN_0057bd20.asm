; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weather_cpp_staticInit_FUN_0057bd20(void)
;
;
; Called Functions:
;   core_weather.cpp_FUN_0057bd80
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x2d0c1a0                      ; 0057bd20
        ;   Label: core_weather.cpp_staticInit_FUN_0057bd20
    CALL core_weather.cpp_FUN_0057bd80  ; 0057bd25
        ;   XREF to: 0057bd80 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057bd80()
    ADD ESP,0x4                         ; 0057bd2a
    PUSH 0x5db0f0                       ; 0057bd2d
    PUSH 0x7d0                          ; 0057bd32
    PUSH 0x2d0c208                      ; 0057bd37
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0057bd3c
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057bd41
    PUSH 0x5db0f0                       ; 0057bd44
    PUSH 0x7d0                          ; 0057bd49
    PUSH 0x2d11fc8                      ; 0057bd4e
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0057bd53
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057bd58
    PUSH 0x5db0f0                       ; 0057bd5b
    PUSH 0x7d0                          ; 0057bd60
    PUSH 0x2d17d88                      ; 0057bd65
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0057bd6a
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057bd6f
    RET                                 ; 0057bd72

