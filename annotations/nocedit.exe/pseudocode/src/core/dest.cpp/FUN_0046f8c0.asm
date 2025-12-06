; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dest.cpp_FUN_0046f8c0()
;
;
; XREF[1]:
;   core_dest.cpp_staticInit_FUN_0046f890 at 0046f89c
;
; Referenced Globals:
;   TerminatedCString s_core_dest_cpp_0061e38c
;
; Called Functions:
;   core_dest.cpp_FUN_0046f900
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x29                           ; 0046f8c0
        ;   Label: core_dest.cpp_FUN_0046f8c0
    PUSH 0x61e38c                       ; 0046f8c2 | = "..\\core\\dest.cpp" | s_core_dest_cpp_0061e38c = ..\core\dest.cpp
    PUSH 0x1f4                          ; 0046f8c7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0046f8cc | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046f8d1
    TEST EAX,EAX                        ; 0046f8d4
    JNZ 0x0046f8d9                      ; 0046f8d6 | LAB_0046f8d9
        ;   XREF to: 0046f8d9 (CONDITIONAL_JUMP)
    RET                                 ; 0046f8d8
    PUSH EAX                            ; 0046f8d9
        ;   Label: LAB_0046f8d9
    CALL core_dest.cpp_FUN_0046f900     ; 0046f8da | CActorDestination * core_dest.cpp_FUN_0046f900(CActorDestination * this_ptr)
        ;   XREF to: 0046f900 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046f8df
    RET                                 ; 0046f8e2

