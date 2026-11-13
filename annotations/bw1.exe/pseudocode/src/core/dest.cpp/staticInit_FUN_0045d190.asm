; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_staticInit_FUN_0045d190(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 0045d190
        ;   Label: core_dest.cpp_staticInit_FUN_0045d190
    PUSH 0x4                            ; 0045d195
    PUSH 0x6112c8                       ; 0045d197
    PUSH 0x45d1c0                       ; 0045d19c
    PUSH 0x5d833b                       ; 0045d1a1
    PUSH 0x152c360                      ; 0045d1a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0045d1ab
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0045d1b0
    RET                                 ; 0045d1b3

