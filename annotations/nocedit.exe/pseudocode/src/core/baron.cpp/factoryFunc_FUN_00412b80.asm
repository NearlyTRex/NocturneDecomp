; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBaron * __cdecl core_baron_cpp_factoryFunc_FUN_00412b80(void)
;
;
; XREF[1]:
;   core_baron.cpp_staticInit_FUN_00412b20 at 00412b2c
;
; Referenced Globals:
;   TerminatedCString s_core_baron_cpp_00614ec5
;
; Called Functions:
;   core_baron.cpp_CBaron_ctor_FUN_00412bc0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x52                           ; 00412b80
        ;   Label: core_baron.cpp_factoryFunc_FUN_00412b80
    PUSH 0x614ec5                       ; 00412b82 | = "..\\core\\baron.cpp"
    PUSH 0x1fcd4                        ; 00412b87
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00412b8c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00412b91
    TEST EAX,EAX                        ; 00412b94
    JNZ 0x00412b99                      ; 00412b96
        ;   XREF to: 00412b99 (CONDITIONAL_JUMP)  ; LAB_00412b99
    RET                                 ; 00412b98
    PUSH EAX                            ; 00412b99
        ;   Label: LAB_00412b99
    CALL core_baron.cpp_CBaron_ctor_FUN_00412bc0 ; 00412b9a
        ;   XREF to: 00412bc0 (UNCONDITIONAL_CALL)  ; CBaron * core_baron.cpp_CBaron_ctor_FUN_00412bc0(CBaron * this_ptr)
    ADD ESP,0x4                         ; 00412b9f
    RET                                 ; 00412ba2

