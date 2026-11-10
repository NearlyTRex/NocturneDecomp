; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_004199f0(void)
;
;
; Called Functions:
;   core_boneguy.cpp_CSkeletonDemon_ctor_FUN_00419a20
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd698                         ; 004199f0
        ;   Label: core_boneguy.cpp_FUN_004199f0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004199f5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004199fa
    TEST EAX,EAX                        ; 004199fd
    JNZ 0x00419a02                      ; 004199ff
        ;   XREF to: 00419a02 (CONDITIONAL_JUMP)  ; LAB_00419a02
    RET                                 ; 00419a01
    PUSH EAX                            ; 00419a02
        ;   Label: LAB_00419a02
    CALL core_boneguy.cpp_CSkeletonDemon_ctor_FUN_00419a20 ; 00419a03
        ;   XREF to: 00419a20 (UNCONDITIONAL_CALL)  ; CSkeletonDemon * core_boneguy.cpp_CSkeletonDemon_ctor_FUN_00419a20(CSkeletonDemon * this_ptr)
    ADD ESP,0x4                         ; 00419a08
    RET                                 ; 00419a0b

