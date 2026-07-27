; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tentacle_cpp_FUN_00543b30(void)
;
;
; Called Functions:
;   core_tentacle.cpp_FUN_00543b60
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd94                         ; 00543b30
        ;   Label: core_tentacle.cpp_FUN_00543b30
    CALL crt_unknown.c_FUN_0056497c     ; 00543b35
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00543b3a
    TEST EAX,EAX                        ; 00543b3d
    JNZ 0x00543b42                      ; 00543b3f
        ;   XREF to: 00543b42 (CONDITIONAL_JUMP)  ; LAB_00543b42
    RET                                 ; 00543b41
    PUSH EAX                            ; 00543b42
        ;   Label: LAB_00543b42
    CALL core_tentacle.cpp_FUN_00543b60 ; 00543b43
        ;   XREF to: 00543b60 (UNCONDITIONAL_CALL)  ; undefined core_tentacle.cpp_FUN_00543b60()
    ADD ESP,0x4                         ; 00543b48
    RET                                 ; 00543b4b

