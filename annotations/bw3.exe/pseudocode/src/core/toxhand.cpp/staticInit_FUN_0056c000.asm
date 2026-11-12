; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_toxhand_cpp_staticInit_FUN_0056c000(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 0056c000
        ;   Label: core_toxhand.cpp_staticInit_FUN_0056c000
    PUSH 0x1                            ; 0056c005
    PUSH 0x606928                       ; 0056c007
    PUSH 0x56c030                       ; 0056c00c
    PUSH 0x5d64bb                       ; 0056c011
    PUSH 0x2cfd7a8                      ; 0056c016
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0056c01b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0056c020
    RET                                 ; 0056c023

