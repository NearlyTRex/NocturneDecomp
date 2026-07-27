; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_marquee_cpp_FUN_004cc0b0(void)
;
;
; Called Functions:
;   core_marquee.cpp_CMarquee_ctor_FUN_004cc0e0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1b4                          ; 004cc0b0
        ;   Label: core_marquee.cpp_FUN_004cc0b0
    CALL crt_unknown.c_FUN_0056497c     ; 004cc0b5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004cc0ba
    TEST EAX,EAX                        ; 004cc0bd
    JNZ 0x004cc0c2                      ; 004cc0bf
        ;   XREF to: 004cc0c2 (CONDITIONAL_JUMP)  ; LAB_004cc0c2
    RET                                 ; 004cc0c1
    PUSH EAX                            ; 004cc0c2
        ;   Label: LAB_004cc0c2
    CALL core_marquee.cpp_CMarquee_ctor_FUN_004cc0e0 ; 004cc0c3
        ;   XREF to: 004cc0e0 (UNCONDITIONAL_CALL)  ; undefined core_marquee.cpp_CMarquee_ctor_FUN_004cc0e0()
    ADD ESP,0x4                         ; 004cc0c8
    RET                                 ; 004cc0cb

