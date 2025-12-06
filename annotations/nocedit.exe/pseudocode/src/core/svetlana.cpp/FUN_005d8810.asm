; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_svetlana.cpp_FUN_005d8810()
;
;
; XREF[1]:
;   core_svetlana.cpp_staticInit_FUN_005d87e0 at 005d87ec
;
; Referenced Globals:
;   TerminatedCString s_core_svetlana_cpp_006548e4
;
; Called Functions:
;   core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x6e                           ; 005d8810
        ;   Label: core_svetlana.cpp_FUN_005d8810
    PUSH 0x6548e4                       ; 005d8812 | = "..\\core\\svetlana.cpp" | s_core_svetlana_cpp_006548e4 = ..\core\svetlana.cpp
    PUSH 0x9f8d8                        ; 005d8817
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005d881c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d8821
    TEST EAX,EAX                        ; 005d8824
    JNZ 0x005d8829                      ; 005d8826 | LAB_005d8829
        ;   XREF to: 005d8829 (CONDITIONAL_JUMP)
    RET                                 ; 005d8828
    PUSH EAX                            ; 005d8829
        ;   Label: LAB_005d8829
    CALL core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850 ; 005d882a | CSvetlana * core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana * this_ptr)
        ;   XREF to: 005d8850 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d882f
    RET                                 ; 005d8832

