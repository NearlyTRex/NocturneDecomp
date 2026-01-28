; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHotDemon * __cdecl core_hotdemon_cpp_factoryFunc_FUN_004f6c60(void)
;
;
; XREF[1]:
;   core_hotdemon.cpp_staticInit_FUN_004f6c30 at 004f6c3c
;
; Referenced Globals:
;   TerminatedCString s_core_hotdemon_cpp_0062f342
;
; Called Functions:
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x54                           ; 004f6c60
        ;   Label: core_hotdemon.cpp_factoryFunc_FUN_004f6c60
    PUSH 0x62f342                       ; 004f6c62 | = "..\\core\\hotdemon.cpp"
    PUSH 0xbef0                         ; 004f6c67
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004f6c6c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004f6c71
    TEST EAX,EAX                        ; 004f6c74
    JNZ 0x004f6c79                      ; 004f6c76
        ;   XREF to: 004f6c79 (CONDITIONAL_JUMP)  ; LAB_004f6c79
    RET                                 ; 004f6c78
    PUSH EAX                            ; 004f6c79
        ;   Label: LAB_004f6c79
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0 ; 004f6c7a
        ;   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 004f6c7f
    RET                                 ; 004f6c82

