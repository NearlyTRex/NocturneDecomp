; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_00419a90(void)
;
;
; Called Functions:
;   crt_memory.c_operator_new_FUN_005a3cb2
;   unkafter_boneguy.cpp_CBaalSkel_ctor_FUN_00419ac0
;
; *****************************************************************************

section .text

    PUSH 0xd698                         ; 00419a90
        ;   Label: core_boneguy.cpp_FUN_00419a90
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00419a95
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00419a9a
    TEST EAX,EAX                        ; 00419a9d
    JNZ 0x00419aa2                      ; 00419a9f
        ;   XREF to: 00419aa2 (CONDITIONAL_JUMP)  ; LAB_00419aa2
    RET                                 ; 00419aa1
    PUSH EAX                            ; 00419aa2
        ;   Label: LAB_00419aa2
    CALL unkafter_boneguy.cpp_CBaalSkel_ctor_FUN_00419ac0 ; 00419aa3
        ;   XREF to: 00419ac0 (UNCONDITIONAL_CALL)  ; CBaalSkel * unkafter_boneguy.cpp_CBaalSkel_ctor_FUN_00419ac0(CBaalSkel * this_ptr)
    ADD ESP,0x4                         ; 00419aa8
    RET                                 ; 00419aab

