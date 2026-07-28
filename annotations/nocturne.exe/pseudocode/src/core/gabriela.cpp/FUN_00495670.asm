; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_00495670(void)
;
;
; Called Functions:
;   core_gabriela.cpp_CGabriella_ctor_FUN_004956a0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x5a5b0                        ; 00495670
        ;   Label: core_gabriela.cpp_FUN_00495670
    CALL crt_unknown.c_FUN_0056497c     ; 00495675
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0049567a
    TEST EAX,EAX                        ; 0049567d
    JNZ 0x00495682                      ; 0049567f
        ;   XREF to: 00495682 (CONDITIONAL_JUMP)  ; LAB_00495682
    RET                                 ; 00495681
    PUSH EAX                            ; 00495682
        ;   Label: LAB_00495682
    CALL core_gabriela.cpp_CGabriella_ctor_FUN_004956a0 ; 00495683
        ;   XREF to: 004956a0 (UNCONDITIONAL_CALL)  ; CGabriella * core_gabriela.cpp_CGabriella_ctor_FUN_004956a0(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 00495688
    RET                                 ; 0049568b

