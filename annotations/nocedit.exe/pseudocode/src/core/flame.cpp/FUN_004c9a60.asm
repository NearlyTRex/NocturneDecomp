; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flame.cpp_FUN_004c9a60()
;
;
; XREF[1]:
;   core_flame.cpp_staticInit_FUN_004c9a30 at 004c9a3c
;
; Referenced Globals:
;   TerminatedCString s_core_flame_cpp_0062a0dd
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_004c9aa0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x75                           ; 004c9a60
        ;   Label: core_flame.cpp_FUN_004c9a60
    PUSH 0x62a0dd                       ; 004c9a62 | = "..\\core\\flame.cpp" | s_core_flame_cpp_0062a0dd = ..\core\flame.cpp
    PUSH 0x2a4                          ; 004c9a67
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004c9a6c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004c9a71
    TEST EAX,EAX                        ; 004c9a74
    JNZ 0x004c9a79                      ; 004c9a76 | LAB_004c9a79
        ;   XREF to: 004c9a79 (CONDITIONAL_JUMP)
    RET                                 ; 004c9a78
    PUSH EAX                            ; 004c9a79
        ;   Label: LAB_004c9a79
    CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0 ; 004c9a7a | CFlame * core_flame.cpp_CFlame_ctor_FUN_004c9aa0(CFlame * this_ptr)
        ;   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c9a7f
    RET                                 ; 004c9a82

