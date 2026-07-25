; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b44b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x765a60                       ; 004b44b0
        ;   Label: FUN_004b44b0
    PUSH 0xc                            ; 004b44b5
    PUSH 0x5ba940                       ; 004b44b7
    PUSH 0x0                            ; 004b44bc
    PUSH 0x585683                       ; 004b44be
    PUSH 0x1cae0ec                      ; 004b44c3
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b44c8
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b44cd
    PUSH 0x763e48                       ; 004b44d0
    PUSH 0x1                            ; 004b44d5
    PUSH 0x5ba944                       ; 004b44d7
    PUSH 0x4b5f60                       ; 004b44dc
    PUSH 0x585689                       ; 004b44e1
    PUSH 0x1cae128                      ; 004b44e6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b44eb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b44f0
    RET                                 ; 004b44f3

