; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_staticInit_FUN_004d6590(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 004d6590
        ;   Label: core_imp.cpp_staticInit_FUN_004d6590
    PUSH 0x1                            ; 004d6595
    PUSH 0x617b28                       ; 004d6597
    PUSH 0x4d65c0                       ; 004d659c
    PUSH 0x5da929                       ; 004d65a1
    PUSH 0x1cee168                      ; 004d65a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004d65ab
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d65b0
    RET                                 ; 004d65b3

