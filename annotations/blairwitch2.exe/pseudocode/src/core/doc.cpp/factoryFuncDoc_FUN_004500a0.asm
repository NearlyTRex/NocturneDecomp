; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_factoryFuncDoc_FUN_004500a0(void)
;
;
; Called Functions:
;   core_doc.cpp_CDoc_ctor_FUN_004500d0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x26188                        ; 004500a0
        ;   Label: core_doc.cpp_factoryFuncDoc_FUN_004500a0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004500a5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004500aa
    TEST EAX,EAX                        ; 004500ad
    JNZ 0x004500b2                      ; 004500af
        ;   XREF to: 004500b2 (CONDITIONAL_JUMP)  ; LAB_004500b2
    RET                                 ; 004500b1
    PUSH EAX                            ; 004500b2
        ;   Label: LAB_004500b2
    CALL core_doc.cpp_CDoc_ctor_FUN_004500d0 ; 004500b3
        ;   XREF to: 004500d0 (UNCONDITIONAL_CALL)  ; CDoc * core_doc.cpp_CDoc_ctor_FUN_004500d0(CDoc * this_ptr)
    ADD ESP,0x4                         ; 004500b8
    RET                                 ; 004500bb

