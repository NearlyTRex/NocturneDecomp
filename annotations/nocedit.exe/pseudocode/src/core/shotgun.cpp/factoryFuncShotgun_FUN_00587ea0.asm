; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShotgun * __cdecl core_shotgun_cpp_factoryFuncShotgun_FUN_00587ea0(void)
;
;
; XREF[1]:
;   core_shotgun.cpp_staticInit_FUN_00587e70 at 00587e7c
;
; Referenced Globals:
;   TerminatedCString s_core_shotgun_cpp_00649ae8
;
; Called Functions:
;   core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2e                           ; 00587ea0
        ;   Label: core_shotgun.cpp_factoryFuncShotgun_FUN_00587ea0
    PUSH 0x649ae8                       ; 00587ea2 | = "..\\core\\shotgun.cpp"
    PUSH 0x584                          ; 00587ea7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 00587eac
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00587eb1
    TEST EAX,EAX                        ; 00587eb4
    JNZ 0x00587eb9                      ; 00587eb6
        ;   XREF to: 00587eb9 (CONDITIONAL_JUMP)  ; LAB_00587eb9
    RET                                 ; 00587eb8
    PUSH EAX                            ; 00587eb9
        ;   Label: LAB_00587eb9
    CALL core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0 ; 00587eba
        ;   XREF to: 00587ee0 (UNCONDITIONAL_CALL)  ; CShotgun * core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0(CShotgun * this_ptr)
    ADD ESP,0x4                         ; 00587ebf
    RET                                 ; 00587ec2

