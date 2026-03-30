; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004a6fa0(void)
;
;
; XREF[1]:
;   core_elephant.cpp_staticInit_FUN_004a6f70 at 004a6f7c
;
; Referenced Globals:
;   TerminatedCString s_core_elephant_cpp_00623faf
;
; Called Functions:
;   core_elephant.cpp_CElephantGun_ctor_FUN_004a6fe0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2e                           ; 004a6fa0
        ;   Label: core_elephant.cpp_factoryFunc_FUN_004a6fa0
    PUSH 0x623faf                       ; 004a6fa2 | = "..\\core\\elephant.cpp"
    PUSH 0x584                          ; 004a6fa7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 004a6fac
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004a6fb1
    TEST EAX,EAX                        ; 004a6fb4
    JNZ 0x004a6fb9                      ; 004a6fb6
        ;   XREF to: 004a6fb9 (CONDITIONAL_JUMP)  ; LAB_004a6fb9
    RET                                 ; 004a6fb8
    PUSH EAX                            ; 004a6fb9
        ;   Label: LAB_004a6fb9
    CALL core_elephant.cpp_CElephantGun_ctor_FUN_004a6fe0 ; 004a6fba
        ;   XREF to: 004a6fe0 (UNCONDITIONAL_CALL)  ; CElephantGun * core_elephant.cpp_CElephantGun_ctor_FUN_004a6fe0(CElephantGun * this_ptr)
    ADD ESP,0x4                         ; 004a6fbf
    RET                                 ; 004a6fc2

