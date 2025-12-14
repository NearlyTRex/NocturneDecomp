; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_curtain.cpp_FUN_00449660()
;
;
; XREF[1]:
;   core_curtain.cpp_staticInit_FUN_00449610 at 00449644
;
; Referenced Globals:
;   TerminatedCString s_core_curtain_cpp_00619bc3
;
; Called Functions:
;   core_curtain.cpp_FUN_004496a0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x36                           ; 00449660
        ;   Label: core_curtain.cpp_FUN_00449660
    PUSH 0x619bc3                       ; 00449662 | = "..\\core\\curtain.cpp"
    PUSH 0x65b38                        ; 00449667
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0044966c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00449671
    TEST EAX,EAX                        ; 00449674
    JNZ 0x00449679                      ; 00449676
        ;   XREF to: 00449679 (CONDITIONAL_JUMP)  ; LAB_00449679
    RET                                 ; 00449678
    PUSH EAX                            ; 00449679
        ;   Label: LAB_00449679
    CALL core_curtain.cpp_FUN_004496a0  ; 0044967a
        ;   XREF to: 004496a0 (UNCONDITIONAL_CALL)  ; CCurtain * core_curtain.cpp_FUN_004496a0(CCurtain * this_ptr)
    ADD ESP,0x4                         ; 0044967f
    RET                                 ; 00449682

