; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTrash * __cdecl core_trash_cpp_factoryFunc_FUN_005deb30(void)
;
;
; XREF[1]:
;   core_trash.cpp_staticInit_FUN_005deb00 at 005deb0c
;
; Referenced Globals:
;   TerminatedCString s_core_trash_cpp_0065556d
;
; Called Functions:
;   core_trash.cpp_CTrash_ctor_FUN_005deb70
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x43                           ; 005deb30
        ;   Label: core_trash.cpp_factoryFunc_FUN_005deb30
    PUSH 0x65556d                       ; 005deb32 | = "..\\core\\trash.cpp"
    PUSH 0x328                          ; 005deb37
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005deb3c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005deb41
    TEST EAX,EAX                        ; 005deb44
    JNZ 0x005deb49                      ; 005deb46
        ;   XREF to: 005deb49 (CONDITIONAL_JUMP)  ; LAB_005deb49
    RET                                 ; 005deb48
    PUSH EAX                            ; 005deb49
        ;   Label: LAB_005deb49
    CALL core_trash.cpp_CTrash_ctor_FUN_005deb70 ; 005deb4a
        ;   XREF to: 005deb70 (UNCONDITIONAL_CALL)  ; CTrash * core_trash.cpp_CTrash_ctor_FUN_005deb70(CTrash * this_ptr)
    ADD ESP,0x4                         ; 005deb4f
    RET                                 ; 005deb52

