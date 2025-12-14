; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_biggs.cpp_constructor_FUN_00418580()
;
;
; XREF[1]:
;   core_biggs.cpp_staticInit_FUN_00418550 at 0041855c
;
; Referenced Globals:
;   TerminatedCString s_core_biggs_cpp_00615aa8
;
; Called Functions:
;   core_biggs.cpp_CBiggs_ctor_FUN_004185c0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x52                           ; 00418580
        ;   Label: core_biggs.cpp_constructor_FUN_00418580
    PUSH 0x615aa8                       ; 00418582 | = "..\\core\\biggs.cpp"
    PUSH 0xccd0                         ; 00418587
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0041858c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00418591
    TEST EAX,EAX                        ; 00418594
    JNZ 0x00418599                      ; 00418596
        ;   XREF to: 00418599 (CONDITIONAL_JUMP)  ; LAB_00418599
    RET                                 ; 00418598
    PUSH EAX                            ; 00418599
        ;   Label: LAB_00418599
    CALL core_biggs.cpp_CBiggs_ctor_FUN_004185c0 ; 0041859a
        ;   XREF to: 004185c0 (UNCONDITIONAL_CALL)  ; CBiggs * core_biggs.cpp_CBiggs_ctor_FUN_004185c0(CBiggs * this_ptr)
    ADD ESP,0x4                         ; 0041859f
    RET                                 ; 004185a2

