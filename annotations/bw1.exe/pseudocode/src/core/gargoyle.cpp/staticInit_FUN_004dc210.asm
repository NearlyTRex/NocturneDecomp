; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_staticInit_FUN_004dc210(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 004dc210
        ;   Label: core_gargoyle.cpp_staticInit_FUN_004dc210
    PUSH 0x2                            ; 004dc215
    PUSH 0x61dc00                       ; 004dc217
    PUSH 0x4dc240                       ; 004dc21c
    PUSH 0x5e37bc                       ; 004dc221
    PUSH 0x1cd0ccc                      ; 004dc226
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004dc22b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004dc230
    RET                                 ; 004dc233

