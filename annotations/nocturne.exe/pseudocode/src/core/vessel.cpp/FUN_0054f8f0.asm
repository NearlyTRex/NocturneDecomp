; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_FUN_0054f8f0(void)
;
;
; Called Functions:
;   core_vessel.cpp_CCryptVessel_ctor_FUN_0054f920
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x7e4                          ; 0054f8f0
        ;   Label: core_vessel.cpp_FUN_0054f8f0
    CALL crt_unknown.c_FUN_0056497c     ; 0054f8f5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0054f8fa
    TEST EAX,EAX                        ; 0054f8fd
    JNZ 0x0054f902                      ; 0054f8ff
        ;   XREF to: 0054f902 (CONDITIONAL_JUMP)  ; LAB_0054f902
    RET                                 ; 0054f901
    PUSH EAX                            ; 0054f902
        ;   Label: LAB_0054f902
    CALL core_vessel.cpp_CCryptVessel_ctor_FUN_0054f920 ; 0054f903
        ;   XREF to: 0054f920 (UNCONDITIONAL_CALL)  ; undefined core_vessel.cpp_CCryptVessel_ctor_FUN_0054f920()
    ADD ESP,0x4                         ; 0054f908
    RET                                 ; 0054f90b

