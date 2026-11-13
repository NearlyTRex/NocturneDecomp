; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_staticInit_FUN_00420e40(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00420e40
        ;   Label: core_bugs.cpp_staticInit_FUN_00420e40
    PUSH 0x2                            ; 00420e45
    PUSH 0x5f0e7c                       ; 00420e47
    PUSH 0x420e70                       ; 00420e4c
    PUSH 0x5b76f9                       ; 00420e51
    PUSH 0x7e29dc                       ; 00420e56
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00420e5b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00420e60
    RET                                 ; 00420e63

