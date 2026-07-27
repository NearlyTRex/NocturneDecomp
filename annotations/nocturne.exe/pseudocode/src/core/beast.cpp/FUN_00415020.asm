; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_beast_cpp_FUN_00415020(void)
;
;
; Called Functions:
;   core_beast.cpp_FUN_00415050
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd24                         ; 00415020
        ;   Label: core_beast.cpp_FUN_00415020
    CALL crt_unknown.c_FUN_0056497c     ; 00415025
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0041502a
    TEST EAX,EAX                        ; 0041502d
    JNZ 0x00415032                      ; 0041502f
        ;   XREF to: 00415032 (CONDITIONAL_JUMP)  ; LAB_00415032
    RET                                 ; 00415031
    PUSH EAX                            ; 00415032
        ;   Label: LAB_00415032
    CALL core_beast.cpp_FUN_00415050    ; 00415033
        ;   XREF to: 00415050 (UNCONDITIONAL_CALL)  ; undefined core_beast.cpp_FUN_00415050()
    ADD ESP,0x4                         ; 00415038
    RET                                 ; 0041503b

