; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dest_cpp_FUN_0044b770(void)
;
;
; Called Functions:
;   core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1ec                          ; 0044b770
        ;   Label: core_dest.cpp_FUN_0044b770
    CALL crt_unknown.c_FUN_0056497c     ; 0044b775
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0044b77a
    TEST EAX,EAX                        ; 0044b77d
    JNZ 0x0044b782                      ; 0044b77f
        ;   XREF to: 0044b782 (CONDITIONAL_JUMP)  ; LAB_0044b782
    RET                                 ; 0044b781
    PUSH EAX                            ; 0044b782
        ;   Label: LAB_0044b782
    CALL core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0 ; 0044b783
        ;   XREF to: 0044b7a0 (UNCONDITIONAL_CALL)  ; undefined core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0()
    ADD ESP,0x4                         ; 0044b788
    RET                                 ; 0044b78b

