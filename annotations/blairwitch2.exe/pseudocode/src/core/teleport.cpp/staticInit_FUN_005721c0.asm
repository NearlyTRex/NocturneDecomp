; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_teleport_cpp_staticInit_FUN_005721c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 005721c0
        ;   Label: core_teleport.cpp_staticInit_FUN_005721c0
    PUSH 0x1                            ; 005721c5
    PUSH 0x61e36c                       ; 005721c7
    PUSH 0x572210                       ; 005721cc
    PUSH 0x5ec432                       ; 005721d1
    PUSH 0x264c038                      ; 005721d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005721db
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005721e0
    PUSH 0x7bbff8                       ; 005721e3
    PUSH 0x1                            ; 005721e8
    PUSH 0x61e370                       ; 005721ea
    PUSH 0x5722c0                       ; 005721ef
    PUSH 0x5ec440                       ; 005721f4
    PUSH 0x264c074                      ; 005721f9
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005721fe
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00572203
    RET                                 ; 00572206

