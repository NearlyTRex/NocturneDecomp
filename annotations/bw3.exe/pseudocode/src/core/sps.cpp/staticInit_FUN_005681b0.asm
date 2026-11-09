; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sps_cpp_staticInit_FUN_005681b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 005681b0
        ;   Label: core_sps.cpp_staticInit_FUN_005681b0
    PUSH 0x1                            ; 005681b5
    PUSH 0x606864                       ; 005681b7
    PUSH 0x5681e0                       ; 005681bc
    PUSH 0x5d5c5e                       ; 005681c1
    PUSH 0x2cf61b4                      ; 005681c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 005681cb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005681d0
    RET                                 ; 005681d3

