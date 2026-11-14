; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_staticInit_FUN_00562540(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00562540
        ;   Label: core_simbox.cpp_staticInit_FUN_00562540
    PUSH 0x3                            ; 00562545
    PUSH 0x623210                       ; 00562547
    PUSH 0x562570                       ; 0056254c
    PUSH 0x5f1a4b                       ; 00562551
    PUSH 0x269cce0                      ; 00562556
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0056255b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00562560
    RET                                 ; 00562563

