; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_staticInit_FUN_0041eef0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 0041eef0
        ;   Label: core_bugs.cpp_staticInit_FUN_0041eef0
    PUSH 0x1                            ; 0041eef5
    PUSH 0x6099b4                       ; 0041eef7
    PUSH 0x41ef20                       ; 0041eefc
    PUSH 0x5cc901                       ; 0041ef01
    PUSH 0x7bda38                       ; 0041ef06
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0041ef0b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0041ef10
    RET                                 ; 0041ef13

