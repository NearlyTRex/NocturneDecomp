; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_staticInit_FUN_00477210(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00477210
        ;   Label: core_door.cpp_staticInit_FUN_00477210
    PUSH 0xd                            ; 00477215
    PUSH 0x6124f4                       ; 00477217
    PUSH 0x477240                       ; 0047721c
    PUSH 0x5da74c                       ; 00477221
    PUSH 0x1b688f0                      ; 00477226
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0047722b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00477230
    RET                                 ; 00477233

