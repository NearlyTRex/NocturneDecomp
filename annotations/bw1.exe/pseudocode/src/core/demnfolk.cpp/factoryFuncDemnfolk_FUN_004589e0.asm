; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemnfolk * __cdecl core_demnfolk_cpp_factoryFuncDemnfolk_FUN_004589e0(void)
;
;
; Called Functions:
;   core_demnfolk.cpp_CDemnfolk_ctor_FUN_00458a10
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc370                         ; 004589e0
        ;   Label: core_demnfolk.cpp_factoryFuncDemnfolk_FUN_004589e0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004589e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004589ea
    TEST EAX,EAX                        ; 004589ed
    JNZ 0x004589f2                      ; 004589ef
        ;   XREF to: 004589f2 (CONDITIONAL_JUMP)  ; LAB_004589f2
    RET                                 ; 004589f1
    PUSH EAX                            ; 004589f2
        ;   Label: LAB_004589f2
    CALL core_demnfolk.cpp_CDemnfolk_ctor_FUN_00458a10 ; 004589f3
        ;   XREF to: 00458a10 (UNCONDITIONAL_CALL)  ; CDemnfolk * core_demnfolk.cpp_CDemnfolk_ctor_FUN_00458a10(CDemnfolk * this_ptr)
    ADD ESP,0x4                         ; 004589f8
    RET                                 ; 004589fb

