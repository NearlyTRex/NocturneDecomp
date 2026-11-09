; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_staticInit_FUN_0040ede0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 0040ede0
        ;   Label: core_armour.cpp_staticInit_FUN_0040ede0
    PUSH 0x1                            ; 0040ede5
    PUSH 0x6097bc                       ; 0040ede7
    PUSH 0x40ee10                       ; 0040edec
    PUSH 0x5cb356                       ; 0040edf1
    PUSH 0x7bc420                       ; 0040edf6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0040edfb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040ee00
    RET                                 ; 0040ee03

