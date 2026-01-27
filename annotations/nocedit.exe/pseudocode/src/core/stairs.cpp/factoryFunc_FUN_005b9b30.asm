; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CStairs * core_stairs.cpp_factoryFunc_FUN_005b9b30(void)
;
;
; XREF[1]:
;   core_stairs.cpp_staticInit_FUN_005b9b00 at 005b9b0c
;
; Referenced Globals:
;   TerminatedCString s_core_stairs_cpp_00653042
;
; Called Functions:
;   core_stairs.cpp_CStairs_ctor_FUN_005b9b70
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x6f                           ; 005b9b30
        ;   Label: core_stairs.cpp_factoryFunc_FUN_005b9b30
    PUSH 0x653042                       ; 005b9b32 | = "..\\core\\stairs.cpp"
    PUSH 0xa34                          ; 005b9b37
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005b9b3c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005b9b41
    TEST EAX,EAX                        ; 005b9b44
    JNZ 0x005b9b49                      ; 005b9b46
        ;   XREF to: 005b9b49 (CONDITIONAL_JUMP)  ; LAB_005b9b49
    RET                                 ; 005b9b48
    PUSH EAX                            ; 005b9b49
        ;   Label: LAB_005b9b49
    CALL core_stairs.cpp_CStairs_ctor_FUN_005b9b70 ; 005b9b4a
        ;   XREF to: 005b9b70 (UNCONDITIONAL_CALL)  ; CStairs * core_stairs.cpp_CStairs_ctor_FUN_005b9b70(CStairs * this_ptr)
    ADD ESP,0x4                         ; 005b9b4f
    RET                                 ; 005b9b52

