; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shovel_cpp_staticInit_FUN_005623b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 005623b0
        ;   Label: core_shovel.cpp_staticInit_FUN_005623b0
    PUSH 0x1                            ; 005623b5
    PUSH 0x6231fc                       ; 005623b7
    PUSH 0x5623e0                       ; 005623bc
    PUSH 0x5f1a0b                       ; 005623c1
    PUSH 0x269cca4                      ; 005623c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005623cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005623d0
    RET                                 ; 005623d3

