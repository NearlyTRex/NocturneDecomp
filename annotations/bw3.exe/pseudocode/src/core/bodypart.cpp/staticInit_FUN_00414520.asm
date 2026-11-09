; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_staticInit_FUN_00414520(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00414520
        ;   Label: core_bodypart.cpp_staticInit_FUN_00414520
    PUSH 0x6                            ; 00414525
    PUSH 0x5f0d2c                       ; 00414527
    PUSH 0x414720                       ; 0041452c
    PUSH 0x5b6a1a                       ; 00414531
    PUSH 0x7e15e4                       ; 00414536
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0041453b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00414540
    RET                                 ; 00414543

