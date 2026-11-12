; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crossbow_cpp_staticInit_FUN_0043a460(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 0043a460
        ;   Label: core_crossbow.cpp_staticInit_FUN_0043a460
    PUSH 0x1                            ; 0043a465
    PUSH 0x609f70                       ; 0043a467
    PUSH 0x43a490                       ; 0043a46c
    PUSH 0x5ce206                       ; 0043a471
    PUSH 0x7c2674                       ; 0043a476
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0043a47b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0043a480
    RET                                 ; 0043a483

