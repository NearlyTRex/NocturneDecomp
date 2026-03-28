; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_factoryFunc_FUN_004cbd20(void)
;
;
; XREF[1]:
;   core_flies.cpp_staticInit_FUN_004cbcf0 at 004cbcfc
;
; Referenced Globals:
;   TerminatedCString s_core_flies_cpp_0062a3dd
;
; Called Functions:
;   core_flies.cpp_CFlies_ctor_FUN_004cbd60
;   shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x19                           ; 004cbd20
        ;   Label: core_flies.cpp_factoryFunc_FUN_004cbd20
    PUSH 0x62a3dd                       ; 004cbd22 | = "..\\core\\flies.cpp"
    PUSH 0x2a20                         ; 004cbd27
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0 ; 004cbd2c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004cbd31
    TEST EAX,EAX                        ; 004cbd34
    JNZ 0x004cbd39                      ; 004cbd36
        ;   XREF to: 004cbd39 (CONDITIONAL_JUMP)  ; LAB_004cbd39
    RET                                 ; 004cbd38
    PUSH EAX                            ; 004cbd39
        ;   Label: LAB_004cbd39
    CALL core_flies.cpp_CFlies_ctor_FUN_004cbd60 ; 004cbd3a
        ;   XREF to: 004cbd60 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_CFlies_ctor_FUN_004cbd60(CFlies * this_ptr)
    ADD ESP,0x4                         ; 004cbd3f
    RET                                 ; 004cbd42

