; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_marquee_cpp_staticInit_FUN_0050baf0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMarquee_0063599a
;   int g_CMarqueeClassVersion = 0x1
;   CDemonActorType g_CDemonActorClassInfo
;   CDemonActorType g_CMarqueeClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x821ff8                       ; 0050baf0 | g_CDemonActorClassInfo
        ;   Label: core_marquee.cpp_staticInit_FUN_0050baf0
    PUSH 0x1                            ; 0050baf5
    PUSH 0x67d14c                       ; 0050baf7 | g_CMarqueeClassVersion
    PUSH 0x50bb20                       ; 0050bafc
    PUSH 0x63599a                       ; 0050bb01 | = "CMarquee"
    PUSH 0x2f0cb20                      ; 0050bb06 | g_CMarqueeClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0050bb0b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0050bb10
    RET                                 ; 0050bb13

