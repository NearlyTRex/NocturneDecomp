; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_staticInit_FUN_004a0660(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004a0660
        ;   Label: core_flamecan.cpp_staticInit_FUN_004a0660
    PUSH 0x1                            ; 004a0665
    PUSH 0x615ec4                       ; 004a0667
    PUSH 0x4a0690                       ; 004a066c
    PUSH 0x5d5935                       ; 004a0671
    PUSH 0x1cab6c0                      ; 004a0676
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004a067b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a0680
    RET                                 ; 004a0683

