; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_staticInit_FUN_005a9970(void)
;
;
; Called Functions:
;   core_water.cpp_CWater_ctor_FUN_005a99e0
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x2c8afb0                      ; 005a9970
        ;   Label: core_water.cpp_staticInit_FUN_005a9970
    CALL core_water.cpp_CWater_ctor_FUN_005a99e0 ; 005a9975
        ;   XREF to: 005a99e0 (UNCONDITIONAL_CALL)  ; CWater * core_water.cpp_CWater_ctor_FUN_005a99e0(CWater * this_ptr)
    ADD ESP,0x4                         ; 005a997a
    PUSH 0x625c80                       ; 005a997d
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 005a9982
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005a9987
    RET                                 ; 005a998a

