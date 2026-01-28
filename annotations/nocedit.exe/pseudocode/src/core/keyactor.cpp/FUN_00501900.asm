; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_keyactor_cpp_FUN_00501900(void)
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

    PUSH 0x630c77                       ; 00501900 | = "CHero"
        ;   Label: core_keyactor.cpp_FUN_00501900
    MOV EDX,dword ptr [ESP + 0xc]       ; 00501905
    PUSH EDX                            ; 00501909
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0050190a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0050190f
    TEST EAX,EAX                        ; 00501912
    JZ 0x0050191b                       ; 00501914
        ;   XREF to: 0050191b (CONDITIONAL_JUMP)  ; LAB_0050191b
    MOV EAX,0x2                         ; 00501916
    RET                                 ; 0050191b
        ;   Label: LAB_0050191b

