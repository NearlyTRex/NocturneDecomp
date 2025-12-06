; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_haystack.cpp_staticInit_FUN_004f0ba0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHaystack_0062e7db
;   int g_CHaystackClassVersion = 0x1
;   CDemonActorType g_CHaystackClassInfo
;   CDemonActorType g_CHeroClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2db87d4                      ; 004f0ba0 | CDemonActorType g_CHeroClassInfo
        ;   Label: core_haystack.cpp_staticInit_FUN_004f0ba0
    PUSH 0x1                            ; 004f0ba5
    PUSH 0x67cbec                       ; 004f0ba7 | int g_CHaystackClassVersion
    PUSH 0x4f0bd0                       ; 004f0bac
    PUSH 0x62e7db                       ; 004f0bb1 | = "CHaystack" | s_CHaystack_0062e7db = CHaystack
    PUSH 0x2db8744                      ; 004f0bb6 | CDemonActorType g_CHaystackClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f0bbb | CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004f0bc0
    RET                                 ; 004f0bc3

