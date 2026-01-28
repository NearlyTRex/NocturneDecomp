; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CZombie * __cdecl core_zombie_cpp_factoryFunc_FUN_005f8fa0(void)
;
;
; XREF[1]:
;   core_zombie.cpp_staticInit_FUN_005f8c90 at 005f8c9c
;
; Referenced Globals:
;   TerminatedCString s_core_zombie_cpp_00658475
;
; Called Functions:
;   core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0xc8                           ; 005f8fa0
        ;   Label: core_zombie.cpp_factoryFunc_FUN_005f8fa0
    PUSH 0x658475                       ; 005f8fa5 | = "..\\core\\zombie.cpp"
    PUSH 0xbfac                         ; 005f8faa
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005f8faf
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005f8fb4
    TEST EAX,EAX                        ; 005f8fb7
    JNZ 0x005f8fbc                      ; 005f8fb9
        ;   XREF to: 005f8fbc (CONDITIONAL_JUMP)  ; LAB_005f8fbc
    RET                                 ; 005f8fbb
    PUSH EAX                            ; 005f8fbc
        ;   Label: LAB_005f8fbc
    CALL core_zombie.cpp_CZombie_ctor_FUN_005f8fe0 ; 005f8fbd
        ;   XREF to: 005f8fe0 (UNCONDITIONAL_CALL)  ; CZombie * core_zombie.cpp_CZombie_ctor_FUN_005f8fe0(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005f8fc2
    RET                                 ; 005f8fc5

