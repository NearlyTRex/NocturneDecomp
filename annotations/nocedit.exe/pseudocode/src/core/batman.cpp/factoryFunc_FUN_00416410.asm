; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBatman * __cdecl core_batman_cpp_factoryFunc_FUN_00416410(void)
;
;
; XREF[1]:
;   core_batman.cpp_staticInit_FUN_004163e0 at 004163ec
;
; Referenced Globals:
;   TerminatedCString s_core_batman_cpp_006156cd
;
; Called Functions:
;   core_batman.cpp_CBatman_ctor_FUN_00416450
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x58                           ; 00416410
        ;   Label: core_batman.cpp_factoryFunc_FUN_00416410
    PUSH 0x6156cd                       ; 00416412 | = "..\\core\\batman.cpp"
    PUSH 0xbf78                         ; 00416417
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 0041641c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00416421
    TEST EAX,EAX                        ; 00416424
    JNZ 0x00416429                      ; 00416426
        ;   XREF to: 00416429 (CONDITIONAL_JUMP)  ; LAB_00416429
    RET                                 ; 00416428
    PUSH EAX                            ; 00416429
        ;   Label: LAB_00416429
    CALL core_batman.cpp_CBatman_ctor_FUN_00416450 ; 0041642a
        ;   XREF to: 00416450 (UNCONDITIONAL_CALL)  ; CBatman * core_batman.cpp_CBatman_ctor_FUN_00416450(CBatman * this_ptr)
    ADD ESP,0x4                         ; 0041642f
    RET                                 ; 00416432

