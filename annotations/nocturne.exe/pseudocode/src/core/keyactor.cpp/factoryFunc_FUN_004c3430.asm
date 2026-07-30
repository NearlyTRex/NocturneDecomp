; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyActor * __cdecl core_keyactor_cpp_factoryFunc_FUN_004c3430(void)
;
;
; Called Functions:
;   core_keyactor.cpp_FUN_004c3460
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x314                          ; 004c3430
        ;   Label: core_keyactor.cpp_factoryFunc_FUN_004c3430
    CALL crt_unknown.c_FUN_0056497c     ; 004c3435
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004c343a
    TEST EAX,EAX                        ; 004c343d
    JNZ 0x004c3442                      ; 004c343f
        ;   XREF to: 004c3442 (CONDITIONAL_JUMP)  ; LAB_004c3442
    RET                                 ; 004c3441
    PUSH EAX                            ; 004c3442
        ;   Label: LAB_004c3442
    CALL core_keyactor.cpp_FUN_004c3460 ; 004c3443
        ;   XREF to: 004c3460 (UNCONDITIONAL_CALL)  ; undefined core_keyactor.cpp_FUN_004c3460()
    ADD ESP,0x4                         ; 004c3448
    RET                                 ; 004c344b

