; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cow.cpp_FUN_00444100()
;
;
; XREF[1]:
;   core_cow.cpp_staticInit_FUN_004440d0 at 004440dc
;
; Referenced Globals:
;   TerminatedCString s_core_cow_cpp_00619460
;
; Called Functions:
;   core_cow.cpp_FUN_00444140
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x36                           ; 00444100
        ;   Label: core_cow.cpp_FUN_00444100
    PUSH 0x619460                       ; 00444102 | = "..\\core\\cow.cpp"
    PUSH 0xbef0                         ; 00444107
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0044410c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00444111
    TEST EAX,EAX                        ; 00444114
    JNZ 0x00444119                      ; 00444116
        ;   XREF to: 00444119 (CONDITIONAL_JUMP)  ; LAB_00444119
    RET                                 ; 00444118
    PUSH EAX                            ; 00444119
        ;   Label: LAB_00444119
    CALL core_cow.cpp_FUN_00444140      ; 0044411a
        ;   XREF to: 00444140 (UNCONDITIONAL_CALL)  ; CZombieCow * core_cow.cpp_FUN_00444140(CZombieCow * this_ptr)
    ADD ESP,0x4                         ; 0044411f
    RET                                 ; 00444122

