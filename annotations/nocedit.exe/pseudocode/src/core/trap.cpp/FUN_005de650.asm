; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_trap.cpp_FUN_005de650()
;
;
; XREF[1]:
;   core_trap.cpp_staticInit_FUN_005de620 at 005de62c
;
; Referenced Globals:
;   TerminatedCString s_core_trap_cpp_0065551b
;
; Called Functions:
;   core_trap.cpp_CTrap_ctor_FUN_005de690
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x20                           ; 005de650
        ;   Label: core_trap.cpp_FUN_005de650
    PUSH 0x65551b                       ; 005de652 | = "..\\core\\trap.cpp" | s_core_trap_cpp_0065551b = ..\core\trap.cpp
    PUSH 0x2dc                          ; 005de657
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005de65c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005de661
    TEST EAX,EAX                        ; 005de664
    JNZ 0x005de669                      ; 005de666 | LAB_005de669
        ;   XREF to: 005de669 (CONDITIONAL_JUMP)
    RET                                 ; 005de668
    PUSH EAX                            ; 005de669
        ;   Label: LAB_005de669
    CALL core_trap.cpp_CTrap_ctor_FUN_005de690 ; 005de66a | CTrap * core_trap.cpp_CTrap_ctor_FUN_005de690(CTrap * this_ptr)
        ;   XREF to: 005de690 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005de66f
    RET                                 ; 005de672

