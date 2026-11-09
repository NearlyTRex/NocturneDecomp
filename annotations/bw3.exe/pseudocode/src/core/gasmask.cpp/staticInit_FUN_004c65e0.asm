; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gasmask_cpp_staticInit_FUN_004c65e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004c65e0
        ;   Label: core_gasmask.cpp_staticInit_FUN_004c65e0
    PUSH 0x1                            ; 004c65e5
    PUSH 0x5fec98                       ; 004c65e7
    PUSH 0x4c6610                       ; 004c65ec
    PUSH 0x5c4028                       ; 004c65f1
    PUSH 0x1d22d10                      ; 004c65f6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004c65fb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c6600
    RET                                 ; 004c6603

