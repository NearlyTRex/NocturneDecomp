; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_marquee.cpp_FUN_0050bb20()
;
;
; XREF[1]:
;   core_marquee.cpp_staticInit_FUN_0050baf0 at 0050bafc
;
; Referenced Globals:
;   TerminatedCString s_core_marquee_cpp_006359a3
;
; Called Functions:
;   core_marquee.cpp_FUN_0050bb60
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x22                           ; 0050bb20
        ;   Label: core_marquee.cpp_FUN_0050bb20
    PUSH 0x6359a3                       ; 0050bb22 | = "..\\core\\marquee.cpp"
    PUSH 0x1bc                          ; 0050bb27
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0050bb2c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050bb31
    TEST EAX,EAX                        ; 0050bb34
    JNZ 0x0050bb39                      ; 0050bb36
        ;   XREF to: 0050bb39 (CONDITIONAL_JUMP)  ; LAB_0050bb39
    RET                                 ; 0050bb38
    PUSH EAX                            ; 0050bb39
        ;   Label: LAB_0050bb39
    CALL core_marquee.cpp_FUN_0050bb60  ; 0050bb3a
        ;   XREF to: 0050bb60 (UNCONDITIONAL_CALL)  ; CMarquee * core_marquee.cpp_FUN_0050bb60(CMarquee * this_ptr)
    ADD ESP,0x4                         ; 0050bb3f
    RET                                 ; 0050bb42

