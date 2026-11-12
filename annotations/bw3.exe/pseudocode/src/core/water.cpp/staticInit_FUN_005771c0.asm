; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_water_cpp_staticInit_FUN_005771c0(void)
;
;
; Called Functions:
;   core_water.cpp_CWater_ctor_FUN_00577230
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x2cfd950                      ; 005771c0
        ;   Label: core_water.cpp_staticInit_FUN_005771c0
    CALL core_water.cpp_CWater_ctor_FUN_00577230 ; 005771c5
        ;   XREF to: 00577230 (UNCONDITIONAL_CALL)  ; CWater * core_water.cpp_CWater_ctor_FUN_00577230(CWater * this_ptr)
    ADD ESP,0x4                         ; 005771ca
    PUSH 0x606b10                       ; 005771cd
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005771d2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005771d7
    RET                                 ; 005771da

