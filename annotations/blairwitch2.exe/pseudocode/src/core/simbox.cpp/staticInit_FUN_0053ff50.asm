; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_staticInit_FUN_0053ff50(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0053ff50
        ;   Label: core_simbox.cpp_staticInit_FUN_0053ff50
    PUSH 0x3                            ; 0053ff55
    PUSH 0x61bbc0                       ; 0053ff57
    PUSH 0x53ff80                       ; 0053ff5c
    PUSH 0x5e6879                       ; 0053ff61
    PUSH 0x20b1a18                      ; 0053ff66
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0053ff6b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0053ff70
    RET                                 ; 0053ff73

