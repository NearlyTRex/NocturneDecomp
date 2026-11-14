; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_staticInit_FUN_004d4930(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1cedf18                      ; 004d4930
        ;   Label: core_icepick.cpp_staticInit_FUN_004d4930
    PUSH 0x1                            ; 004d4935
    PUSH 0x617b14                       ; 004d4937
    PUSH 0x4d4960                       ; 004d493c
    PUSH 0x5da6ee                       ; 004d4941
    PUSH 0x1cee0fc                      ; 004d4946
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004d494b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d4950
    RET                                 ; 004d4953

