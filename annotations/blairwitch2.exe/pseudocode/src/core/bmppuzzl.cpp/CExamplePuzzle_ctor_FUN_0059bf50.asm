; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExamplePuzzle * __cdecl core_bmppuzzl_cpp_CExamplePuzzle_ctor_FUN_0059bf50(CExamplePuzzle *this_ptr)
;
; Parameters:
; CExamplePuzzle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_bmppuzzl.cpp_CPuzzle_ctor_FUN_0059ab30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059bf50
        ;   Label: core_bmppuzzl.cpp_CExamplePuzzle_ctor_FUN_0059bf50
    PUSH EDX                            ; 0059bf54
    CALL core_bmppuzzl.cpp_CPuzzle_ctor_FUN_0059ab30 ; 0059bf55
        ;   XREF to: 0059ab30 (UNCONDITIONAL_CALL)  ; CPuzzle * core_bmppuzzl.cpp_CPuzzle_ctor_FUN_0059ab30(CPuzzle * this_ptr)
    ADD ESP,0x4                         ; 0059bf5a
    MOV dword ptr [EAX],0x5fe584        ; 0059bf5d
    RET                                 ; 0059bf63

