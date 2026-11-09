; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_staticInit_FUN_00476750(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00476750
        ;   Label: core_dog.cpp_staticInit_FUN_00476750
    PUSH 0x2                            ; 00476755
    PUSH 0x6124dc                       ; 00476757
    PUSH 0x476780                       ; 0047675c
    PUSH 0x5da678                       ; 00476761
    PUSH 0x1b688b0                      ; 00476766
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0047676b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00476770
    RET                                 ; 00476773

