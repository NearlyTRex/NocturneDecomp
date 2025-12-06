; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_mimic.cpp_FUN_0051f190()
;
;
; XREF[1]:
;   core_mimic.cpp_staticInit_FUN_0051f100 at 0051f10c
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_00638542
;
; Called Functions:
;   core_mimic.cpp_FUN_0051f1d0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x77                           ; 0051f190
        ;   Label: core_mimic.cpp_FUN_0051f190
    PUSH 0x638542                       ; 0051f192 | = "..\\core\\mimic.cpp" | s_core_mimic_cpp_00638542 = ..\core\mimic.cpp
    PUSH 0x4ca58                        ; 0051f197
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0051f19c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051f1a1
    TEST EAX,EAX                        ; 0051f1a4
    JNZ 0x0051f1a9                      ; 0051f1a6 | LAB_0051f1a9
        ;   XREF to: 0051f1a9 (CONDITIONAL_JUMP)
    RET                                 ; 0051f1a8
    PUSH EAX                            ; 0051f1a9
        ;   Label: LAB_0051f1a9
    CALL core_mimic.cpp_FUN_0051f1d0    ; 0051f1aa | CMimic * core_mimic.cpp_FUN_0051f1d0(CMimic * this_ptr)
        ;   XREF to: 0051f1d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051f1af
    RET                                 ; 0051f1b2

