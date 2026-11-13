; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hino_cpp_staticInit_FUN_0059b610(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 0059b610
        ;   Label: core_hino.cpp_staticInit_FUN_0059b610
    PUSH 0x1                            ; 0059b615
    PUSH 0x607464                       ; 0059b617
    PUSH 0x59b640                       ; 0059b61c
    PUSH 0x5d9bc4                       ; 0059b621
    PUSH 0x2d24c7c                      ; 0059b626
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0059b62b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0059b630
    RET                                 ; 0059b633

