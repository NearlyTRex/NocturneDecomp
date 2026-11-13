; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_staticInit_FUN_004a6a30(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004a6a30
        ;   Label: core_flies.cpp_staticInit_FUN_004a6a30
    PUSH 0x3                            ; 004a6a35
    PUSH 0x616374                       ; 004a6a37
    PUSH 0x4a6a60                       ; 004a6a3c
    PUSH 0x5d66a1                       ; 004a6a41
    PUSH 0x1caf5f0                      ; 004a6a46
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004a6a4b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a6a50
    RET                                 ; 004a6a53

