; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tentacle_cpp_staticInit_FUN_005951a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 005951a0
        ;   Label: core_tentacle.cpp_staticInit_FUN_005951a0
    PUSH 0x2                            ; 005951a5
    PUSH 0x6259f0                       ; 005951a7
    PUSH 0x5951d0                       ; 005951ac
    PUSH 0x5f76ce                       ; 005951b1
    PUSH 0x2c83890                      ; 005951b6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005951bb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005951c0
    RET                                 ; 005951c3

