; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_staticInit_FUN_004b8f10(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004b8f10
        ;   Label: core_flamecan.cpp_staticInit_FUN_004b8f10
    PUSH 0x1                            ; 004b8f15
    PUSH 0x61d184                       ; 004b8f17
    PUSH 0x4b8f40                       ; 004b8f1c
    PUSH 0x5df777                       ; 004b8f21
    PUSH 0x1cc414c                      ; 004b8f26
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004b8f2b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b8f30
    RET                                 ; 004b8f33

