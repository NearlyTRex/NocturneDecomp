; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tommygun_cpp_staticInit_FUN_0056b310(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 0056b310
        ;   Label: core_tommygun.cpp_staticInit_FUN_0056b310
    PUSH 0x1                            ; 0056b315
    PUSH 0x606910                       ; 0056b317
    PUSH 0x56b340                       ; 0056b31c
    PUSH 0x5d643f                       ; 0056b321
    PUSH 0x2cfd75c                      ; 0056b326
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0056b32b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0056b330
    RET                                 ; 0056b333

