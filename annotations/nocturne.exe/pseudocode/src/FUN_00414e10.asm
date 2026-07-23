; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00414e10(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_00578d6d
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x578d6d                       ; 00414e10 | = "CHero"
        ;   Label: FUN_00414e10
    MOV EDX,dword ptr [ESP + 0xc]       ; 00414e15
    PUSH EDX                            ; 00414e19
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00414e1a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 00414e1f
    TEST EAX,EAX                        ; 00414e22
    JZ 0x00414e2b                       ; 00414e24
        ;   XREF to: 00414e2b (CONDITIONAL_JUMP)  ; LAB_00414e2b
    MOV EAX,0x2                         ; 00414e26
    RET                                 ; 00414e2b
        ;   Label: LAB_00414e2b

