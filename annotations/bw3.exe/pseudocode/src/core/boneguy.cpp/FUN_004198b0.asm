; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_004198b0(void)
;
;
; Called Functions:
;   core_boneguy.cpp_CSkeletonForest_ctor_FUN_004198e0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd698                         ; 004198b0
        ;   Label: core_boneguy.cpp_FUN_004198b0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004198b5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004198ba
    TEST EAX,EAX                        ; 004198bd
    JNZ 0x004198c2                      ; 004198bf
        ;   XREF to: 004198c2 (CONDITIONAL_JUMP)  ; LAB_004198c2
    RET                                 ; 004198c1
    PUSH EAX                            ; 004198c2
        ;   Label: LAB_004198c2
    CALL core_boneguy.cpp_CSkeletonForest_ctor_FUN_004198e0 ; 004198c3
        ;   XREF to: 004198e0 (UNCONDITIONAL_CALL)  ; CSkeletonForest * core_boneguy.cpp_CSkeletonForest_ctor_FUN_004198e0(CSkeletonForest * this_ptr)
    ADD ESP,0x4                         ; 004198c8
    RET                                 ; 004198cb

