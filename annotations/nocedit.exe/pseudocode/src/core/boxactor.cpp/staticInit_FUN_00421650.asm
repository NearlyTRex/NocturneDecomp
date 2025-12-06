; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_boxactor.cpp_staticInit_FUN_00421650(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBoxActor_006165ff
;   TerminatedCString s_CLightActor_00616609
;   WatcomTypeInfo g_CDemonFilterTypeInfo
;   WatcomStaticDestructorNode DAT_0066e5cc
;   int g_CBoxActorClassVersion = 0xf
;   int g_CLightActorClassVersion = 0x2
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CBoxActorClassInfo
;   CDemonFilter[8] CDemonFilter_ARRAY_008229ec
;   CDemonActorType g_CLightActorClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 00421650 | CDemonActorType g_CDemonActorClassInfo
        ;   Label: core_boxactor.cpp_staticInit_FUN_00421650
    PUSH 0xf                            ; 00421655
    PUSH 0x66e604                       ; 00421657 | int g_CBoxActorClassVersion
    PUSH 0x4216c0                       ; 0042165c
    PUSH 0x6165ff                       ; 00421661 | = "CBoxActor" | s_CBoxActor_006165ff = CBoxActor
    PUSH 0x8229b0                       ; 00421666 | CDemonActorType g_CBoxActorClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0042166b | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00421670
    PUSH 0x65b390                       ; 00421673 | WatcomTypeInfo g_CDemonFilterTypeInfo
    PUSH 0x8                            ; 00421678
    PUSH 0x8229ec                       ; 0042167a | CDemonFilter[8] CDemonFilter_ARRAY_008229ec
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0042167f | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00421684
    PUSH 0x66e5cc                       ; 00421687 | WatcomStaticDestructorNode DAT_0066e5cc
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0042168c | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00421691
    PUSH 0x8229b0                       ; 00421694 | CDemonActorType g_CBoxActorClassInfo
    PUSH 0x2                            ; 00421699
    PUSH 0x66e608                       ; 0042169b | int g_CLightActorClassVersion
    PUSH 0x422950                       ; 004216a0
    PUSH 0x616609                       ; 004216a5 | = "CLightActor" | s_CLightActor_00616609 = CLightActor
    PUSH 0x822c4c                       ; 004216aa | CDemonActorType g_CLightActorClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004216af | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004216b4
    RET                                 ; 004216b7

