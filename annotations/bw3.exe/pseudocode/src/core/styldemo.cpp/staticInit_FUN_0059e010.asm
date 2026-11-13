; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_styldemo_cpp_staticInit_FUN_0059e010(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 0059e010
        ;   Label: core_styldemo.cpp_staticInit_FUN_0059e010
    PUSH 0x1                            ; 0059e015
    PUSH 0x60748c                       ; 0059e017
    PUSH 0x59e040                       ; 0059e01c
    PUSH 0x5d9f5e                       ; 0059e021
    PUSH 0x2d24d08                      ; 0059e026
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0059e02b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0059e030
    RET                                 ; 0059e033

