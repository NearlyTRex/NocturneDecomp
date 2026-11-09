; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042c7a0(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_skeleton.cpp_FUN_0056b8c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042c7a0
        ;   Label: core_charactr.cpp_FUN_0042c7a0
    PUSH EDX                            ; 0042c7a4
    CALL core_actor.cpp_FUN_00408890    ; 0042c7a5
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408890()
    ADD ESP,0x4                         ; 0042c7aa
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042c7ad
    MOV DL,byte ptr [EAX + 0x24a8]      ; 0042c7b1
    ADD EAX,0x24a8                      ; 0042c7b7
    TEST DL,DL                          ; 0042c7bc
    JNZ 0x0042c7c1                      ; 0042c7be
        ;   XREF to: 0042c7c1 (CONDITIONAL_JUMP)  ; LAB_0042c7c1
    RET                                 ; 0042c7c0
    PUSH EAX                            ; 0042c7c1
        ;   Label: LAB_0042c7c1
    CALL core_skeleton.cpp_FUN_0056b8c0 ; 0042c7c2
        ;   XREF to: 0056b8c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0056b8c0()
    ADD ESP,0x4                         ; 0042c7c7
    RET                                 ; 0042c7ca

