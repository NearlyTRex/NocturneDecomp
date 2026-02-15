; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGrave * __cdecl core_grave_cpp_factoryFunc_FUN_004ee4d0(void)
;
;
; XREF[1]:
;   core_grave.cpp_staticInit_FUN_004ee4a0 at 004ee4ac
;
; Referenced Globals:
;   TerminatedCString s_core_grave_cpp_0062e46f
;
; Called Functions:
;   core_grave.cpp_CGrave_ctor_FUN_004ee510
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x26                           ; 004ee4d0
        ;   Label: core_grave.cpp_factoryFunc_FUN_004ee4d0
    PUSH 0x62e46f                       ; 004ee4d2 | = "..\\core\\grave.cpp"
    PUSH 0x3b0                          ; 004ee4d7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004ee4dc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004ee4e1
    TEST EAX,EAX                        ; 004ee4e4
    JNZ 0x004ee4e9                      ; 004ee4e6
        ;   XREF to: 004ee4e9 (CONDITIONAL_JUMP)  ; LAB_004ee4e9
    RET                                 ; 004ee4e8
    PUSH EAX                            ; 004ee4e9
        ;   Label: LAB_004ee4e9
    CALL core_grave.cpp_CGrave_ctor_FUN_004ee510 ; 004ee4ea
        ;   XREF to: 004ee510 (UNCONDITIONAL_CALL)  ; CGrave * core_grave.cpp_CGrave_ctor_FUN_004ee510(CGrave * this_ptr)
    ADD ESP,0x4                         ; 004ee4ef
    RET                                 ; 004ee4f2

