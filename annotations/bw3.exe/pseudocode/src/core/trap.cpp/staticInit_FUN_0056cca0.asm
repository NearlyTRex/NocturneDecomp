; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trap_cpp_staticInit_FUN_0056cca0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTrap_005d6561
;   int g_CTrapClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CTrapClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0056cca0 | g_CDemonActorClassInfo
        ;   Label: core_trap.cpp_staticInit_FUN_0056cca0
    PUSH 0x1                            ; 0056cca5
    PUSH 0x60693c                       ; 0056cca7 | g_CTrapClassVersion
    PUSH 0x56ccd0                       ; 0056ccac
    PUSH 0x5d6561                       ; 0056ccb1 | = "CTrap"
    PUSH 0x2cfd7e4                      ; 0056ccb6 | g_CTrapClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0056ccbb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0056ccc0
    RET                                 ; 0056ccc3

