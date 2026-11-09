; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_staticInit_FUN_0045e210(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 0045e210
        ;   Label: core_dog.cpp_staticInit_FUN_0045e210
    PUSH 0x2                            ; 0045e215
    PUSH 0x60b1fc                       ; 0045e217
    PUSH 0x45e240                       ; 0045e21c
    PUSH 0x5d087c                       ; 0045e221
    PUSH 0x1b4d2f4                      ; 0045e226
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0045e22b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0045e230
    RET                                 ; 0045e233

