; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_staticInit_FUN_005e9da0(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_CWaterDestructorNode
;   CWater g_CWaterInstance
;
; Called Functions:
;   core_water.cpp_CWater_ctor_FUN_005e9e10
;   crt_stdlib.c__atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x3f875e0                      ; 005e9da0 | g_CWaterInstance
        ;   Label: core_water.cpp_staticInit_FUN_005e9da0
    CALL core_water.cpp_CWater_ctor_FUN_005e9e10 ; 005e9da5
        ;   XREF to: 005e9e10 (UNCONDITIONAL_CALL)  ; CWater * core_water.cpp_CWater_ctor_FUN_005e9e10(CWater * this_ptr)
    ADD ESP,0x4                         ; 005e9daa
    PUSH 0x6844e0                       ; 005e9dad | g_CWaterDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 005e9db2
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005e9db7
    RET                                 ; 005e9dba

