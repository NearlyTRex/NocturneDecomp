; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHostage * __cdecl core_hostage_cpp_factoryFunc_FUN_004f4800(void)
;
;
; XREF[1]:
;   core_hostage.cpp_staticInit_FUN_004f47d0 at 004f47dc
;
; Referenced Globals:
;   TerminatedCString s_core_hostage_cpp_0062ee1b
;
; Called Functions:
;   core_hostage.cpp_CHostage_ctor_FUN_004f4840
;   shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x59                           ; 004f4800
        ;   Label: core_hostage.cpp_factoryFunc_FUN_004f4800
    PUSH 0x62ee1b                       ; 004f4802 | = "..\\core\\hostage.cpp"
    PUSH 0x1faf0                        ; 004f4807
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0 ; 004f480c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004f4811
    TEST EAX,EAX                        ; 004f4814
    JNZ 0x004f4819                      ; 004f4816
        ;   XREF to: 004f4819 (CONDITIONAL_JUMP)  ; LAB_004f4819
    RET                                 ; 004f4818
    PUSH EAX                            ; 004f4819
        ;   Label: LAB_004f4819
    CALL core_hostage.cpp_CHostage_ctor_FUN_004f4840 ; 004f481a
        ;   XREF to: 004f4840 (UNCONDITIONAL_CALL)  ; CHostage * core_hostage.cpp_CHostage_ctor_FUN_004f4840(CHostage * this_ptr)
    ADD ESP,0x4                         ; 004f481f
    RET                                 ; 004f4822

