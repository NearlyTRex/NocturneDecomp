; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vessel.cpp_FUN_005e8e20()
;
;
; XREF[1]:
;   core_vessel.cpp_staticInit_FUN_005e8df0 at 005e8dfc
;
; Referenced Globals:
;   TerminatedCString s_core_vessel_cpp_00656fee
;
; Called Functions:
;   core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x26                           ; 005e8e20
        ;   Label: core_vessel.cpp_FUN_005e8e20
    PUSH 0x656fee                       ; 005e8e22 | = "..\\core\\vessel.cpp"
    PUSH 0x7f4                          ; 005e8e27
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005e8e2c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005e8e31
    TEST EAX,EAX                        ; 005e8e34
    JNZ 0x005e8e39                      ; 005e8e36
        ;   XREF to: 005e8e39 (CONDITIONAL_JUMP)  ; LAB_005e8e39
    RET                                 ; 005e8e38
    PUSH EAX                            ; 005e8e39
        ;   Label: LAB_005e8e39
    CALL core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60 ; 005e8e3a
        ;   XREF to: 005e8e60 (UNCONDITIONAL_CALL)  ; CCryptVessel * core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60(CCryptVessel * this_ptr)
    ADD ESP,0x4                         ; 005e8e3f
    RET                                 ; 005e8e42

