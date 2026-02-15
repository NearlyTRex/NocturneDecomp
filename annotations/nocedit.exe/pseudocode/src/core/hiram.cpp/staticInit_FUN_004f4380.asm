; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_staticInit_FUN_004f4380(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHiram_0062edcf
;   int g_CHiramClassVersion = 0x1
;   CDemonActorType g_CHiramClassInfo
;   CDemonActorType g_CNPCClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2fd8ce0                      ; 004f4380 | g_CNPCClassInfo
        ;   Label: core_hiram.cpp_staticInit_FUN_004f4380
    PUSH 0x1                            ; 004f4385
    PUSH 0x67cc3c                       ; 004f4387 | g_CHiramClassVersion
    PUSH 0x4f43b0                       ; 004f438c
    PUSH 0x62edcf                       ; 004f4391 | = "CHiram"
    PUSH 0x2db884c                      ; 004f4396 | g_CHiramClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004f439b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f43a0
    RET                                 ; 004f43a3

