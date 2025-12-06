; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_keyactor.cpp_FUN_00501900()
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_00630c77
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH 0x630c77                       ; 00501900 | = "CHero" | s_CHero_00630c77 = CHero
        ;   Label: core_keyactor.cpp_FUN_00501900
    MOV EDX,dword ptr [ESP + 0xc]       ; 00501905
    PUSH EDX                            ; 00501909
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0050190a | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050190f
    TEST EAX,EAX                        ; 00501912
    JZ 0x0050191b                       ; 00501914 | LAB_0050191b
        ;   XREF to: 0050191b (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 00501916
    RET                                 ; 0050191b
        ;   Label: LAB_0050191b

