; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_tvbat.cpp_FUN_005e3e80()
;
;
; XREF[1]:
;   core_tvbat.cpp_staticInit_FUN_005e3e50 at 005e3e5c
;
; Referenced Globals:
;   TerminatedCString s_core_tvbat_cpp_00656889
;
; Called Functions:
;   core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x39                           ; 005e3e80
        ;   Label: core_tvbat.cpp_FUN_005e3e80
    PUSH 0x656889                       ; 005e3e82 | = "..\\core\\tvbat.cpp"
    PUSH 0xc0f4                         ; 005e3e87
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005e3e8c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005e3e91
    TEST EAX,EAX                        ; 005e3e94
    JNZ 0x005e3e99                      ; 005e3e96
        ;   XREF to: 005e3e99 (CONDITIONAL_JUMP)  ; LAB_005e3e99
    RET                                 ; 005e3e98
    PUSH EAX                            ; 005e3e99
        ;   Label: LAB_005e3e99
    CALL core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0 ; 005e3e9a
        ;   XREF to: 005e3ef0 (UNCONDITIONAL_CALL)  ; CTVBat * core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat * this_ptr)
    ADD ESP,0x4                         ; 005e3e9f
    RET                                 ; 005e3ea2

