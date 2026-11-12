; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExamplePuzzle * core_bmppuzzl_cpp_CExamplePuzzle_ctor_FUN_0059bf50(CExamplePuzzle *this_ptr)
;
; Parameters:
; CExamplePuzzle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_zombie.cpp_FUN_0059ab30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059bf50
        ;   Label: core_bmppuzzl.cpp_CExamplePuzzle_ctor_FUN_0059bf50
    PUSH EDX                            ; 0059bf54
    CALL core_zombie.cpp_FUN_0059ab30   ; 0059bf55
        ;   XREF to: 0059ab30 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_FUN_0059ab30()
    ADD ESP,0x4                         ; 0059bf5a
    MOV dword ptr [EAX],0x5fe584        ; 0059bf5d
    RET                                 ; 0059bf63

