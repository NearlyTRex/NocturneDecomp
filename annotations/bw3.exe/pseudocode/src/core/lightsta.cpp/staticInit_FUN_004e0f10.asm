; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightsta_cpp_staticInit_FUN_004e0f10(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004e0f10
        ;   Label: core_lightsta.cpp_staticInit_FUN_004e0f10
    PUSH 0x1                            ; 004e0f15
    PUSH 0x6002d4                       ; 004e0f17
    PUSH 0x4e0f40                       ; 004e0f1c
    PUSH 0x5c69ba                       ; 004e0f21
    PUSH 0x1d70c5c                      ; 004e0f26
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004e0f2b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e0f30
    RET                                 ; 004e0f33

