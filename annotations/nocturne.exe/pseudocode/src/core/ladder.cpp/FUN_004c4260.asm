; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ladder_cpp_FUN_004c4260(void)
;
;
; Called Functions:
;   core_ladder.cpp_CLadder_ctor_FUN_004c4290
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2f8                          ; 004c4260
        ;   Label: core_ladder.cpp_FUN_004c4260
    CALL crt_unknown.c_FUN_0056497c     ; 004c4265
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004c426a
    TEST EAX,EAX                        ; 004c426d
    JNZ 0x004c4272                      ; 004c426f
        ;   XREF to: 004c4272 (CONDITIONAL_JUMP)  ; LAB_004c4272
    RET                                 ; 004c4271
    PUSH EAX                            ; 004c4272
        ;   Label: LAB_004c4272
    CALL core_ladder.cpp_CLadder_ctor_FUN_004c4290 ; 004c4273
        ;   XREF to: 004c4290 (UNCONDITIONAL_CALL)  ; undefined core_ladder.cpp_CLadder_ctor_FUN_004c4290()
    ADD ESP,0x4                         ; 004c4278
    RET                                 ; 004c427b

