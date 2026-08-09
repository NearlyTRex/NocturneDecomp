; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrossbow * __cdecl core_crossbow_cpp_factoryFuncCrossbow_FUN_00448c30(void)
;
;
; XREF[1]:
;   core_crossbow.cpp_staticInit_FUN_00448c00 at 00448c0c
;
; Referenced Globals:
;   TerminatedCString s_core_crossbow_cpp_00619b64
;
; Called Functions:
;   core_crossbow.cpp_CCrossbow_ctor_FUN_00448c70
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2f                           ; 00448c30
        ;   Label: core_crossbow.cpp_factoryFuncCrossbow_FUN_00448c30
    PUSH 0x619b64                       ; 00448c32 | = "..\\core\\crossbow.cpp"
    PUSH 0x820                          ; 00448c37
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 00448c3c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00448c41
    TEST EAX,EAX                        ; 00448c44
    JNZ 0x00448c49                      ; 00448c46
        ;   XREF to: 00448c49 (CONDITIONAL_JUMP)  ; LAB_00448c49
    RET                                 ; 00448c48
    PUSH EAX                            ; 00448c49
        ;   Label: LAB_00448c49
    CALL core_crossbow.cpp_CCrossbow_ctor_FUN_00448c70 ; 00448c4a
        ;   XREF to: 00448c70 (UNCONDITIONAL_CALL)  ; CCrossbow * core_crossbow.cpp_CCrossbow_ctor_FUN_00448c70(CCrossbow * this_ptr)
    ADD ESP,0x4                         ; 00448c4f
    RET                                 ; 00448c52

