; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyActor * __cdecl core_keyactor_cpp_factoryFunc_FUN_00501650(CKeyActor *__return_storage_ptr__)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   __return_storage_ptr__
;
; XREF[1]:
;   core_keyactor.cpp_staticInit_FUN_00501620 at 0050162c
;
; Referenced Globals:
;   TerminatedCString s_core_keyactor_cpp_00630c1f
;
; Called Functions:
;   core_keyactor.cpp_CKeyActor_ctor_FUN_00501690
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x24                           ; 00501650
        ;   Label: core_keyactor.cpp_factoryFunc_FUN_00501650
    PUSH 0x630c1f                       ; 00501652 | = "..\\core\\keyactor.cpp"
    PUSH 0x31c                          ; 00501657
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 0050165c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00501661
    TEST EAX,EAX                        ; 00501664
    JNZ 0x00501669                      ; 00501666
        ;   XREF to: 00501669 (CONDITIONAL_JUMP)  ; LAB_00501669
    RET                                 ; 00501668
    PUSH EAX                            ; 00501669
        ;   Label: LAB_00501669
    CALL core_keyactor.cpp_CKeyActor_ctor_FUN_00501690 ; 0050166a
        ;   XREF to: 00501690 (UNCONDITIONAL_CALL)  ; CKeyActor * core_keyactor.cpp_CKeyActor_ctor_FUN_00501690(CKeyActor * this_ptr)
    ADD ESP,0x4                         ; 0050166f
    RET                                 ; 00501672

