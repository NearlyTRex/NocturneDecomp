; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_staticInit_FUN_004d0ed0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1d65404                      ; 004d0ed0
        ;   Label: core_hiram.cpp_staticInit_FUN_004d0ed0
    PUSH 0x1                            ; 004d0ed5
    PUSH 0x617aa8                       ; 004d0ed7
    PUSH 0x4d0f00                       ; 004d0edc
    PUSH 0x5da0d8                       ; 004d0ee1
    PUSH 0x1cedf90                      ; 004d0ee6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004d0eeb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d0ef0
    RET                                 ; 004d0ef3

