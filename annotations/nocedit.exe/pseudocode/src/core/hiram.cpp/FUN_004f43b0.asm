; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hiram.cpp_FUN_004f43b0()
;
;
; XREF[1]:
;   core_hiram.cpp_staticInit_FUN_004f4380 at 004f438c
;
; Referenced Globals:
;   TerminatedCString s_core_hiram_cpp_0062edd6
;
; Called Functions:
;   core_hiram.cpp_FUN_004f43f0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2c                           ; 004f43b0
        ;   Label: core_hiram.cpp_FUN_004f43b0
    PUSH 0x62edd6                       ; 004f43b2 | = "..\\core\\hiram.cpp" | s_core_hiram_cpp_0062edd6 = ..\core\hiram.cpp
    PUSH 0x1f76c                        ; 004f43b7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004f43bc | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f43c1
    TEST EAX,EAX                        ; 004f43c4
    JNZ 0x004f43c9                      ; 004f43c6 | LAB_004f43c9
        ;   XREF to: 004f43c9 (CONDITIONAL_JUMP)
    RET                                 ; 004f43c8
    PUSH EAX                            ; 004f43c9
        ;   Label: LAB_004f43c9
    CALL core_hiram.cpp_FUN_004f43f0    ; 004f43ca | CHiram * core_hiram.cpp_FUN_004f43f0(CHiram * this_ptr)
        ;   XREF to: 004f43f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f43cf
    RET                                 ; 004f43d2

