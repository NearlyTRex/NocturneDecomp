; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hiram_cpp_FUN_004b65e0(void)
;
;
; Called Functions:
;   core_hiram.cpp_FUN_004b6610
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1f5d4                        ; 004b65e0
        ;   Label: core_hiram.cpp_FUN_004b65e0
    CALL crt_unknown.c_FUN_0056497c     ; 004b65e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004b65ea
    TEST EAX,EAX                        ; 004b65ed
    JNZ 0x004b65f2                      ; 004b65ef
        ;   XREF to: 004b65f2 (CONDITIONAL_JUMP)  ; LAB_004b65f2
    RET                                 ; 004b65f1
    PUSH EAX                            ; 004b65f2
        ;   Label: LAB_004b65f2
    CALL core_hiram.cpp_FUN_004b6610    ; 004b65f3
        ;   XREF to: 004b6610 (UNCONDITIONAL_CALL)  ; undefined core_hiram.cpp_FUN_004b6610()
    ADD ESP,0x4                         ; 004b65f8
    RET                                 ; 004b65fb

