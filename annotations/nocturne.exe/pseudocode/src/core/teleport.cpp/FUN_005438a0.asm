; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_FUN_005438a0(void)
;
;
; Called Functions:
;   core_teleport.cpp_FUN_005438d0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x160                          ; 005438a0
        ;   Label: core_teleport.cpp_FUN_005438a0
    CALL crt_unknown.c_FUN_0056497c     ; 005438a5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 005438aa
    TEST EAX,EAX                        ; 005438ad
    JNZ 0x005438b2                      ; 005438af
        ;   XREF to: 005438b2 (CONDITIONAL_JUMP)  ; LAB_005438b2
    RET                                 ; 005438b1
    PUSH EAX                            ; 005438b2
        ;   Label: LAB_005438b2
    CALL core_teleport.cpp_FUN_005438d0 ; 005438b3
        ;   XREF to: 005438d0 (UNCONDITIONAL_CALL)  ; undefined core_teleport.cpp_FUN_005438d0()
    ADD ESP,0x4                         ; 005438b8
    RET                                 ; 005438bb

