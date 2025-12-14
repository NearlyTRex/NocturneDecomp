; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_barrier.cpp_constructor_FUN_00414180()
;
;
; XREF[1]:
;   core_barrier.cpp_staticInit_FUN_00414150 at 0041415c
;
; Referenced Globals:
;   TerminatedCString s_core_barrier_cpp_00615148
;
; Called Functions:
;   core_barrier.cpp_CBarrier_ctor_FUN_004141c0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x26                           ; 00414180
        ;   Label: core_barrier.cpp_constructor_FUN_00414180
    PUSH 0x615148                       ; 00414182 | = "..\\core\\barrier.cpp"
    PUSH 0x230                          ; 00414187
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0041418c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00414191
    TEST EAX,EAX                        ; 00414194
    JNZ 0x00414199                      ; 00414196
        ;   XREF to: 00414199 (CONDITIONAL_JUMP)  ; LAB_00414199
    RET                                 ; 00414198
    PUSH EAX                            ; 00414199
        ;   Label: LAB_00414199
    CALL core_barrier.cpp_CBarrier_ctor_FUN_004141c0 ; 0041419a
        ;   XREF to: 004141c0 (UNCONDITIONAL_CALL)  ; CBarrier * core_barrier.cpp_CBarrier_ctor_FUN_004141c0(CBarrier * this_ptr)
    ADD ESP,0x4                         ; 0041419f
    RET                                 ; 004141a2

