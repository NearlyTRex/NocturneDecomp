; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHaystack * __cdecl core_haystack_cpp_factoryFunc_FUN_004f0bd0(void)
;
;
; XREF[1]:
;   core_haystack.cpp_staticInit_FUN_004f0ba0 at 004f0bac
;
; Referenced Globals:
;   TerminatedCString s_core_haystack_cpp_0062e7e5
;
; Called Functions:
;   core_haystack.cpp_CHaystack_ctor_FUN_004f0c10
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x5c                           ; 004f0bd0
        ;   Label: core_haystack.cpp_factoryFunc_FUN_004f0bd0
    PUSH 0x62e7e5                       ; 004f0bd2 | = "..\\core\\haystack.cpp"
    PUSH 0x1fbec                        ; 004f0bd7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 004f0bdc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004f0be1
    TEST EAX,EAX                        ; 004f0be4
    JNZ 0x004f0be9                      ; 004f0be6
        ;   XREF to: 004f0be9 (CONDITIONAL_JUMP)  ; LAB_004f0be9
    RET                                 ; 004f0be8
    PUSH EAX                            ; 004f0be9
        ;   Label: LAB_004f0be9
    CALL core_haystack.cpp_CHaystack_ctor_FUN_004f0c10 ; 004f0bea
        ;   XREF to: 004f0c10 (UNCONDITIONAL_CALL)  ; CHaystack * core_haystack.cpp_CHaystack_ctor_FUN_004f0c10(CHaystack * this_ptr)
    ADD ESP,0x4                         ; 004f0bef
    RET                                 ; 004f0bf2

