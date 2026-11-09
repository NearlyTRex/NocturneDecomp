; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trash_cpp_staticInit_FUN_0059a190(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 0059a190
        ;   Label: core_trash.cpp_staticInit_FUN_0059a190
    PUSH 0x1                            ; 0059a195
    PUSH 0x625a70                       ; 0059a197
    PUSH 0x59a1c0                       ; 0059a19c
    PUSH 0x5f8020                       ; 0059a1a1
    PUSH 0x2c8add0                      ; 0059a1a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0059a1ab
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0059a1b0
    RET                                 ; 0059a1b3

