; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_imp.cpp_FUN_004f9860()
;
;
; XREF[1]:
;   core_imp.cpp_staticInit_FUN_004f9830 at 004f983c
;
; Referenced Globals:
;   TerminatedCString s_core_imp_cpp_0062f823
;
; Called Functions:
;   core_imp.cpp_FUN_004f98a0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x59                           ; 004f9860
        ;   Label: core_imp.cpp_FUN_004f9860
    PUSH 0x62f823                       ; 004f9862 | = "..\\core\\imp.cpp" | s_core_imp_cpp_0062f823 = ..\core\imp.cpp
    PUSH 0xbef4                         ; 004f9867
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004f986c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f9871
    TEST EAX,EAX                        ; 004f9874
    JNZ 0x004f9879                      ; 004f9876 | LAB_004f9879
        ;   XREF to: 004f9879 (CONDITIONAL_JUMP)
    RET                                 ; 004f9878
    PUSH EAX                            ; 004f9879
        ;   Label: LAB_004f9879
    CALL core_imp.cpp_FUN_004f98a0      ; 004f987a | CImp * core_imp.cpp_FUN_004f98a0(CImp * this_ptr)
        ;   XREF to: 004f98a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f987f
    RET                                 ; 004f9882

