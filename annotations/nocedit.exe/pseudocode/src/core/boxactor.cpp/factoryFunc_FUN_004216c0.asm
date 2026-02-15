; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoxActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_004216c0(void)
;
;
; XREF[1]:
;   core_boxactor.cpp_staticInit_FUN_00421650 at 0042165c
;
; Referenced Globals:
;   TerminatedCString s_core_boxactor_cpp_0061661b
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x39                           ; 004216c0
        ;   Label: core_boxactor.cpp_factoryFunc_FUN_004216c0
    PUSH 0x61661b                       ; 004216c2 | = "..\\core\\boxactor.cpp"
    PUSH 0x66c                          ; 004216c7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004216cc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004216d1
    TEST EAX,EAX                        ; 004216d4
    JNZ 0x004216d9                      ; 004216d6
        ;   XREF to: 004216d9 (CONDITIONAL_JUMP)  ; LAB_004216d9
    RET                                 ; 004216d8
    PUSH EAX                            ; 004216d9
        ;   Label: LAB_004216d9
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 ; 004216da
        ;   XREF to: 00421700 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_00421700(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 004216df
    RET                                 ; 004216e2

