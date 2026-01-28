; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMansionPuzzleCircle * __cdecl core_manpuz_cpp_factoryFunc_FUN_005088e0(void)
;
;
; XREF[1]:
;   core_manpuz.cpp_staticInit_FUN_00508890 at 0050889c
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_0063568e
;
; Called Functions:
;   core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00508920
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0xeb                           ; 005088e0
        ;   Label: core_manpuz.cpp_factoryFunc_FUN_005088e0
    PUSH 0x63568e                       ; 005088e5 | = "..\\core\\manpuz.cpp"
    PUSH 0x1514                         ; 005088ea
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005088ef
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005088f4
    TEST EAX,EAX                        ; 005088f7
    JNZ 0x005088fc                      ; 005088f9
        ;   XREF to: 005088fc (CONDITIONAL_JUMP)  ; LAB_005088fc
    RET                                 ; 005088fb
    PUSH EAX                            ; 005088fc
        ;   Label: LAB_005088fc
    CALL core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00508920 ; 005088fd
        ;   XREF to: 00508920 (UNCONDITIONAL_CALL)  ; CMansionPuzzleCircle * core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00508920(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x4                         ; 00508902
    RET                                 ; 00508905

