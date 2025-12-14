; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_colonel.cpp_FUN_0043f7a0()
;
;
; XREF[1]:
;   core_colonel.cpp_staticInit_FUN_0043f770 at 0043f77c
;
; Referenced Globals:
;   TerminatedCString s_core_colonel_cpp_00618b7a
;
; Called Functions:
;   core_colonel.cpp_CColonel_ctor_FUN_0043f7e0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x7e                           ; 0043f7a0
        ;   Label: core_colonel.cpp_FUN_0043f7a0
    PUSH 0x618b7a                       ; 0043f7a2 | = "..\\core\\colonel.cpp"
    PUSH 0x1fbec                        ; 0043f7a7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0043f7ac
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0043f7b1
    TEST EAX,EAX                        ; 0043f7b4
    JNZ 0x0043f7b9                      ; 0043f7b6
        ;   XREF to: 0043f7b9 (CONDITIONAL_JUMP)  ; LAB_0043f7b9
    RET                                 ; 0043f7b8
    PUSH EAX                            ; 0043f7b9
        ;   Label: LAB_0043f7b9
    CALL core_colonel.cpp_CColonel_ctor_FUN_0043f7e0 ; 0043f7ba
        ;   XREF to: 0043f7e0 (UNCONDITIONAL_CALL)  ; CColonel * core_colonel.cpp_CColonel_ctor_FUN_0043f7e0(CColonel * this_ptr)
    ADD ESP,0x4                         ; 0043f7bf
    RET                                 ; 0043f7c2

