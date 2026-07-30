; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_factoryFunc_FUN_004c80c0(void)
;
;
; Called Functions:
;   core_litecone.cpp_CLightCone_ctor_FUN_004c80f0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x224                          ; 004c80c0
        ;   Label: core_litecone.cpp_factoryFunc_FUN_004c80c0
    CALL crt_unknown.c_FUN_0056497c     ; 004c80c5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004c80ca
    TEST EAX,EAX                        ; 004c80cd
    JNZ 0x004c80d2                      ; 004c80cf
        ;   XREF to: 004c80d2 (CONDITIONAL_JUMP)  ; LAB_004c80d2
    RET                                 ; 004c80d1
    PUSH EAX                            ; 004c80d2
        ;   Label: LAB_004c80d2
    CALL core_litecone.cpp_CLightCone_ctor_FUN_004c80f0 ; 004c80d3
        ;   XREF to: 004c80f0 (UNCONDITIONAL_CALL)  ; CLightCone * core_litecone.cpp_CLightCone_ctor_FUN_004c80f0(CLightCone * this_ptr)
    ADD ESP,0x4                         ; 004c80d8
    RET                                 ; 004c80db

