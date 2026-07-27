; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_004182a0(void)
;
;
; Called Functions:
;   core_boneguy.cpp_FUN_00418630
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xc34c                         ; 004182a0
        ;   Label: core_boneguy.cpp_FUN_004182a0
    CALL crt_unknown.c_FUN_0056497c     ; 004182a5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004182aa
    TEST EAX,EAX                        ; 004182ad
    JNZ 0x004182b2                      ; 004182af
        ;   XREF to: 004182b2 (CONDITIONAL_JUMP)  ; LAB_004182b2
    RET                                 ; 004182b1
    PUSH EAX                            ; 004182b2
        ;   Label: LAB_004182b2
    CALL core_boneguy.cpp_FUN_00418630  ; 004182b3
        ;   XREF to: 00418630 (UNCONDITIONAL_CALL)  ; undefined core_boneguy.cpp_FUN_00418630()
    ADD ESP,0x4                         ; 004182b8
    RET                                 ; 004182bb

