; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lightpis_cpp_staticInit_FUN_005015b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 005015b0
        ;   Label: core_lightpis.cpp_staticInit_FUN_005015b0
    PUSH 0x1                            ; 005015b5
    PUSH 0x61f338                       ; 005015b7
    PUSH 0x5015e0                       ; 005015bc
    PUSH 0x5e6f1a                       ; 005015c1
    PUSH 0x1d1c280                      ; 005015c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005015cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005015d0
    RET                                 ; 005015d3

