; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CActorDestination * __cdecl core_dest_cpp_factoryFunc_FUN_0046f8c0(void)
;
;
; XREF[1]:
;   core_dest.cpp_staticInit_FUN_0046f890 at 0046f89c
;
; Referenced Globals:
;   TerminatedCString s_core_dest_cpp_0061e38c
;
; Called Functions:
;   core_dest.cpp_CActorDestination_ctor_FUN_0046f900
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x29                           ; 0046f8c0
        ;   Label: core_dest.cpp_factoryFunc_FUN_0046f8c0
    PUSH 0x61e38c                       ; 0046f8c2 | = "..\\core\\dest.cpp"
    PUSH 0x1f4                          ; 0046f8c7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 0046f8cc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046f8d1
    TEST EAX,EAX                        ; 0046f8d4
    JNZ 0x0046f8d9                      ; 0046f8d6
        ;   XREF to: 0046f8d9 (CONDITIONAL_JUMP)  ; LAB_0046f8d9
    RET                                 ; 0046f8d8
    PUSH EAX                            ; 0046f8d9
        ;   Label: LAB_0046f8d9
    CALL core_dest.cpp_CActorDestination_ctor_FUN_0046f900 ; 0046f8da
        ;   XREF to: 0046f900 (UNCONDITIONAL_CALL)  ; CActorDestination * core_dest.cpp_CActorDestination_ctor_FUN_0046f900(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 0046f8df
    RET                                 ; 0046f8e2

