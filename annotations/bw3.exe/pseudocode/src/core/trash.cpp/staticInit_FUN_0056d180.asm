; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_staticInit_FUN_0056d180(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0056d180
        ;   Label: core_trash.cpp_staticInit_FUN_0056d180
    PUSH 0x1                            ; 0056d185
    PUSH 0x606950                       ; 0056d187
    PUSH 0x56d1b0                       ; 0056d18c
    PUSH 0x5d658f                       ; 0056d191
    PUSH 0x2cfd820                      ; 0056d196
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0056d19b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0056d1a0
    RET                                 ; 0056d1a3

