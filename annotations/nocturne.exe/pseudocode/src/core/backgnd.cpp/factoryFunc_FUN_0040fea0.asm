; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBackgroundActor * __cdecl core_backgnd_cpp_factoryFunc_FUN_0040fea0(void)
;
;
; Called Functions:
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040fed0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2d4                          ; 0040fea0
        ;   Label: core_backgnd.cpp_factoryFunc_FUN_0040fea0
    CALL crt_unknown.c_FUN_0056497c     ; 0040fea5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0040feaa
    TEST EAX,EAX                        ; 0040fead
    JNZ 0x0040feb2                      ; 0040feaf
        ;   XREF to: 0040feb2 (CONDITIONAL_JUMP)  ; LAB_0040feb2
    RET                                 ; 0040feb1
    PUSH EAX                            ; 0040feb2
        ;   Label: LAB_0040feb2
    CALL core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040fed0 ; 0040feb3
        ;   XREF to: 0040fed0 (UNCONDITIONAL_CALL)  ; CBackgroundActor * core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040fed0(CBackgroundActor * this_ptr)
    ADD ESP,0x4                         ; 0040feb8
    RET                                 ; 0040febb

