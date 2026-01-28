; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDynamite * __cdecl core_dynamite_cpp_factoryFunc_FUN_0049cd80(void)
;
;
; XREF[1]:
;   core_dynamite.cpp_staticInit_FUN_0049cd40 at 0049cd4c
;
; Referenced Globals:
;   TerminatedCString s_core_dynamite_cpp_00622e6c
;
; Called Functions:
;   core_dynamite.cpp_CDynamite_ctor_FUN_0049cdc0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x21                           ; 0049cd80
        ;   Label: core_dynamite.cpp_factoryFunc_FUN_0049cd80
    PUSH 0x622e6c                       ; 0049cd82 | = "..\\core\\dynamite.cpp"
    PUSH 0x58c                          ; 0049cd87
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0049cd8c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0049cd91
    TEST EAX,EAX                        ; 0049cd94
    JNZ 0x0049cd99                      ; 0049cd96
        ;   XREF to: 0049cd99 (CONDITIONAL_JUMP)  ; LAB_0049cd99
    RET                                 ; 0049cd98
    PUSH EAX                            ; 0049cd99
        ;   Label: LAB_0049cd99
    CALL core_dynamite.cpp_CDynamite_ctor_FUN_0049cdc0 ; 0049cd9a
        ;   XREF to: 0049cdc0 (UNCONDITIONAL_CALL)  ; CDynamite * core_dynamite.cpp_CDynamite_ctor_FUN_0049cdc0(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 0049cd9f
    RET                                 ; 0049cda2

