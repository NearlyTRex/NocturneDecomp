; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTentacle * __cdecl core_tentacle_cpp_factoryFunc_FUN_005daf20(void)
;
;
; XREF[1]:
;   core_tentacle.cpp_staticInit_FUN_005daef0 at 005daefc
;
; Referenced Globals:
;   TerminatedCString s_core_tentacle_cpp_00654d9e
;
; Called Functions:
;   core_tentacle.cpp_CTentacle_ctor_FUN_005daf60
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x67                           ; 005daf20
        ;   Label: core_tentacle.cpp_factoryFunc_FUN_005daf20
    PUSH 0x654d9e                       ; 005daf22 | = "..\\core\\tentacle.cpp"
    PUSH 0xbf2c                         ; 005daf27
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005daf2c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005daf31
    TEST EAX,EAX                        ; 005daf34
    JNZ 0x005daf39                      ; 005daf36
        ;   XREF to: 005daf39 (CONDITIONAL_JUMP)  ; LAB_005daf39
    RET                                 ; 005daf38
    PUSH EAX                            ; 005daf39
        ;   Label: LAB_005daf39
    CALL core_tentacle.cpp_CTentacle_ctor_FUN_005daf60 ; 005daf3a
        ;   XREF to: 005daf60 (UNCONDITIONAL_CALL)  ; CTentacle * core_tentacle.cpp_CTentacle_ctor_FUN_005daf60(CTentacle * this_ptr)
    ADD ESP,0x4                         ; 005daf3f
    RET                                 ; 005daf42

