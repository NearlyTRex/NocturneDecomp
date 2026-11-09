; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_staticInit_FUN_004a03e0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c6344                       ; 004a03e0
        ;   Label: core_enemy.cpp_staticInit_FUN_004a03e0
    PUSH 0xa                            ; 004a03e5
    PUSH 0x61b480                       ; 004a03e7
    PUSH 0x0                            ; 004a03ec
    PUSH 0x5dcaba                       ; 004a03ee
    PUSH 0x1c3f668                      ; 004a03f3
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004a03f8
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a03fd
    RET                                 ; 004a0400

