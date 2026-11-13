; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoc * __cdecl core_doc_cpp_factoryFuncDoc_FUN_00468c50(void)
;
;
; Called Functions:
;   core_doc.cpp_CDoc_ctor_FUN_00468c80
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x200e4                        ; 00468c50
        ;   Label: core_doc.cpp_factoryFuncDoc_FUN_00468c50
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00468c55
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 00468c5a
    TEST EAX,EAX                        ; 00468c5d
    JNZ 0x00468c62                      ; 00468c5f
        ;   XREF to: 00468c62 (CONDITIONAL_JUMP)  ; LAB_00468c62
    RET                                 ; 00468c61
    PUSH EAX                            ; 00468c62
        ;   Label: LAB_00468c62
    CALL core_doc.cpp_CDoc_ctor_FUN_00468c80 ; 00468c63
        ;   XREF to: 00468c80 (UNCONDITIONAL_CALL)  ; CDoc * core_doc.cpp_CDoc_ctor_FUN_00468c80(CDoc * this_ptr)
    ADD ESP,0x4                         ; 00468c68
    RET                                 ; 00468c6b

