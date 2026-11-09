; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_burncrss_cpp_staticInit_FUN_004243d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004243d0
        ;   Label: core_burncrss.cpp_staticInit_FUN_004243d0
    PUSH 0x1                            ; 004243d5
    PUSH 0x5f0ebc                       ; 004243d7
    PUSH 0x424400                       ; 004243dc
    PUSH 0x5b78ce                       ; 004243e1
    PUSH 0x7e2a18                       ; 004243e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004243eb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004243f0
    RET                                 ; 004243f3

