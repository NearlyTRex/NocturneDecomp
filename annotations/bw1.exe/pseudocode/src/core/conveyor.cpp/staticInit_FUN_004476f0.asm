; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_conveyor_cpp_staticInit_FUN_004476f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1e7d3e4                      ; 004476f0
        ;   Label: core_conveyor.cpp_staticInit_FUN_004476f0
    PUSH 0x2                            ; 004476f5
    PUSH 0x611160                       ; 004476f7
    PUSH 0x447720                       ; 004476fc
    PUSH 0x5d70ee                       ; 00447701
    PUSH 0x7dc628                       ; 00447706
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0044770b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00447710
    RET                                 ; 00447713

