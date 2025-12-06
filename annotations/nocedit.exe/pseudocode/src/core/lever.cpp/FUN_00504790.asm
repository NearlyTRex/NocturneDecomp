; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_lever.cpp_FUN_00504790()
;
;
; XREF[1]:
;   core_lever.cpp_staticInit_FUN_00504760 at 0050476c
;
; Referenced Globals:
;   TerminatedCString s_core_lever_cpp_0063105f
;
; Called Functions:
;   core_lever.cpp_FUN_005047d0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x29                           ; 00504790
        ;   Label: core_lever.cpp_FUN_00504790
    PUSH 0x63105f                       ; 00504792 | = "..\\core\\lever.cpp" | s_core_lever_cpp_0063105f = ..\core\lever.cpp
    PUSH 0x814                          ; 00504797
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0050479c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005047a1
    TEST EAX,EAX                        ; 005047a4
    JNZ 0x005047a9                      ; 005047a6 | LAB_005047a9
        ;   XREF to: 005047a9 (CONDITIONAL_JUMP)
    RET                                 ; 005047a8
    PUSH EAX                            ; 005047a9
        ;   Label: LAB_005047a9
    CALL core_lever.cpp_FUN_005047d0    ; 005047aa | CLever * core_lever.cpp_FUN_005047d0(CLever * this_ptr)
        ;   XREF to: 005047d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005047af
    RET                                 ; 005047b2

