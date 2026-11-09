; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dest_cpp_staticInit_FUN_004590e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004590e0
        ;   Label: core_dest.cpp_staticInit_FUN_004590e0
    PUSH 0x4                            ; 004590e5
    PUSH 0x5f187c                       ; 004590e7
    PUSH 0x459110                       ; 004590ec
    PUSH 0x5ba994                       ; 004590f1
    PUSH 0x1548bc4                      ; 004590f6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004590fb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00459100
    RET                                 ; 00459103

