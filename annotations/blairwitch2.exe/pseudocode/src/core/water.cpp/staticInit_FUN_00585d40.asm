; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_water_cpp_staticInit_FUN_00585d40(void)
;
;
; Called Functions:
;   core_water.cpp_CWater_ctor_FUN_00585db0
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x2653790                      ; 00585d40
        ;   Label: core_water.cpp_staticInit_FUN_00585d40
    CALL core_water.cpp_CWater_ctor_FUN_00585db0 ; 00585d45
        ;   XREF to: 00585db0 (UNCONDITIONAL_CALL)  ; CWater * core_water.cpp_CWater_ctor_FUN_00585db0(CWater * this_ptr)
    ADD ESP,0x4                         ; 00585d4a
    PUSH 0x61e510                       ; 00585d4d
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00585d52
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 00585d57
    RET                                 ; 00585d5a

