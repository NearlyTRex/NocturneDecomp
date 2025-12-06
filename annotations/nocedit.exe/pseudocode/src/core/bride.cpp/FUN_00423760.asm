; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bride.cpp_FUN_00423760()
;
;
; XREF[1]:
;   core_bride.cpp_staticInit_FUN_00423700 at 00423719
;
; Referenced Globals:
;   TerminatedCString s_core_bride_cpp_00616aa4
;
; Called Functions:
;   core_bride.cpp_CBride_ctor_FUN_004237a0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x53                           ; 00423760
        ;   Label: core_bride.cpp_FUN_00423760
    PUSH 0x616aa4                       ; 00423762 | = "..\\core\\bride.cpp" | s_core_bride_cpp_00616aa4 = ..\core\bride.cpp
    PUSH 0xbeec                         ; 00423767
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0042376c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423771
    TEST EAX,EAX                        ; 00423774
    JNZ 0x00423779                      ; 00423776 | LAB_00423779
        ;   XREF to: 00423779 (CONDITIONAL_JUMP)
    RET                                 ; 00423778
    PUSH EAX                            ; 00423779
        ;   Label: LAB_00423779
    CALL core_bride.cpp_CBride_ctor_FUN_004237a0 ; 0042377a | CBride * core_bride.cpp_CBride_ctor_FUN_004237a0(CBride * this_ptr)
        ;   XREF to: 004237a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042377f
    RET                                 ; 00423782

