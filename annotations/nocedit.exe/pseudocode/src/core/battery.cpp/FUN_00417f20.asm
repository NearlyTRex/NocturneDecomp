; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_battery.cpp_FUN_00417f20()
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_006159e6
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH 0x6159e6                       ; 00417f20 | = "CHero" | s_CHero_006159e6 = CHero
        ;   Label: core_battery.cpp_FUN_00417f20
    MOV EDX,dword ptr [ESP + 0xc]       ; 00417f25
    PUSH EDX                            ; 00417f29
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00417f2a | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00417f2f
    TEST EAX,EAX                        ; 00417f32
    JZ 0x00417f3b                       ; 00417f34 | LAB_00417f3b
        ;   XREF to: 00417f3b (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 00417f36
    RET                                 ; 00417f3b
        ;   Label: LAB_00417f3b

