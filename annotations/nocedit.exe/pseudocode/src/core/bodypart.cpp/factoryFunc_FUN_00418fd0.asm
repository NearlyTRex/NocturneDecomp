; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBodyPart * __cdecl core_bodypart_cpp_factoryFunc_FUN_00418fd0(void)
;
;
; XREF[1]:
;   core_bodypart.cpp_staticInit_FUN_00418de0 at 00418dec
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_00615bc4
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x7c                           ; 00418fd0
        ;   Label: core_bodypart.cpp_factoryFunc_FUN_00418fd0
    PUSH 0x615bc4                       ; 00418fd2 | = "..\\core\\bodypart.cpp"
    PUSH 0xf30                          ; 00418fd7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00418fdc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00418fe1
    TEST EAX,EAX                        ; 00418fe4
    JNZ 0x00418fe9                      ; 00418fe6
        ;   XREF to: 00418fe9 (CONDITIONAL_JUMP)  ; LAB_00418fe9
    RET                                 ; 00418fe8
    PUSH EAX                            ; 00418fe9
        ;   Label: LAB_00418fe9
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00419010 ; 00418fea
        ;   XREF to: 00419010 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00419010(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00418fef
    RET                                 ; 00418ff2

