; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGhoul * __cdecl core_ghoul_cpp_factoryFunc_FUN_004e5ff0(void)
;
;
; XREF[1]:
;   core_ghoul.cpp_staticInit_FUN_004e5f90 at 004e5fa9
;
; Referenced Globals:
;   TerminatedCString s_core_ghoul_cpp_0062dae9
;
; Called Functions:
;   core_ghoul.cpp_CGhoul_ctor_FUN_004e6030
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x9e                           ; 004e5ff0
        ;   Label: core_ghoul.cpp_factoryFunc_FUN_004e5ff0
    PUSH 0x62dae9                       ; 004e5ff5 | = "..\\core\\ghoul.cpp"
    PUSH 0xbf38                         ; 004e5ffa
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004e5fff
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004e6004
    TEST EAX,EAX                        ; 004e6007
    JNZ 0x004e600c                      ; 004e6009
        ;   XREF to: 004e600c (CONDITIONAL_JUMP)  ; LAB_004e600c
    RET                                 ; 004e600b
    PUSH EAX                            ; 004e600c
        ;   Label: LAB_004e600c
    CALL core_ghoul.cpp_CGhoul_ctor_FUN_004e6030 ; 004e600d
        ;   XREF to: 004e6030 (UNCONDITIONAL_CALL)  ; CGhoul * core_ghoul.cpp_CGhoul_ctor_FUN_004e6030(CGhoul * this_ptr)
    ADD ESP,0x4                         ; 004e6012
    RET                                 ; 004e6015

