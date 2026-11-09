; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExamplePuzzle * unkafter_superopt_cpp_CExamplePuzzle_dtor_FUN_0059bf70(CExamplePuzzle *this_ptr,uint flags)
;
; Parameters:
; CExamplePuzzle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059aa80.cpp_FUN_0059ab50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059bf70
        ;   Label: unkafter_superopt.cpp_CExamplePuzzle_dtor_FUN_0059bf70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059bf71
    TEST byte ptr [ESP + 0xc],0x4       ; 0059bf75
    JNZ 0x0059bf96                      ; 0059bf7a
        ;   XREF to: 0059bf96 (CONDITIONAL_JUMP)  ; LAB_0059bf96
    PUSH 0x1                            ; 0059bf7c
    PUSH EBX                            ; 0059bf7e
    CALL unkaddr_0059aa80.cpp_FUN_0059ab50 ; 0059bf7f
        ;   XREF to: 0059ab50 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059aa80.cpp_FUN_0059ab50()
    ADD ESP,0x8                         ; 0059bf84
    MOV DL,byte ptr [ESP + 0xc]         ; 0059bf87
    MOV EBX,EAX                         ; 0059bf8b
    TEST DL,0x2                         ; 0059bf8d
    JNZ 0x0059bfb1                      ; 0059bf90
        ;   XREF to: 0059bfb1 (CONDITIONAL_JUMP)  ; LAB_0059bfb1
    MOV EAX,EBX                         ; 0059bf92
    POP EBX                             ; 0059bf94
    RET                                 ; 0059bf95
    PUSH 0x5fe5b0                       ; 0059bf96
        ;   Label: LAB_0059bf96
    PUSH EBX                            ; 0059bf9b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0059bf9c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0059bfa1
    PUSH EAX                            ; 0059bfa4
    CALL crt_unknown.c_FUN_005b7fce     ; 0059bfa5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0059bfaa
    MOV EAX,EBX                         ; 0059bfad
    POP EBX                             ; 0059bfaf
    RET                                 ; 0059bfb0
    PUSH EAX                            ; 0059bfb1
        ;   Label: LAB_0059bfb1
    CALL crt_unknown.c_FUN_005b7fdc     ; 0059bfb2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0059bfb7
    MOV EAX,EBX                         ; 0059bfba
    POP EBX                             ; 0059bfbc
    RET                                 ; 0059bfbd

