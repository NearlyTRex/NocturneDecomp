; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_yow_cpp_staticInit_FUN_005862e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 005862e0
        ;   Label: core_yow.cpp_staticInit_FUN_005862e0
    PUSH 0x1                            ; 005862e5
    PUSH 0x607294                       ; 005862e7
    PUSH 0x586310                       ; 005862ec
    PUSH 0x5d81ef                       ; 005862f1
    PUSH 0x2d22fbc                      ; 005862f6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 005862fb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00586300
    RET                                 ; 00586303

