; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_00419950(void)
;
;
; Called Functions:
;   core_boneguy.cpp_CSkeletonIndian_ctor_FUN_00419980
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd698                         ; 00419950
        ;   Label: core_boneguy.cpp_FUN_00419950
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00419955
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0041995a
    TEST EAX,EAX                        ; 0041995d
    JNZ 0x00419962                      ; 0041995f
        ;   XREF to: 00419962 (CONDITIONAL_JUMP)  ; LAB_00419962
    RET                                 ; 00419961
    PUSH EAX                            ; 00419962
        ;   Label: LAB_00419962
    CALL core_boneguy.cpp_CSkeletonIndian_ctor_FUN_00419980 ; 00419963
        ;   XREF to: 00419980 (UNCONDITIONAL_CALL)  ; CSkeletonIndian * core_boneguy.cpp_CSkeletonIndian_ctor_FUN_00419980(CSkeletonIndian * this_ptr)
    ADD ESP,0x4                         ; 00419968
    RET                                 ; 0041996b

