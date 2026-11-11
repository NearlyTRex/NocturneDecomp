; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl unkaddr_0059f520_cpp_CInStreamFile_peekChar_FUN_005a0b70(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0b70
        ;   Label: unkaddr_0059f520.cpp_CInStreamFile_peekChar_FUN_005a0b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a0b71
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a0b75
    PUSH EDX                            ; 005a0b78
    PUSH EBX                            ; 005a0b79
    CALL unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0 ; 005a0b7a
        ;   XREF to: 005a0ba0 (UNCONDITIONAL_CALL)  ; uint unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a0b7f
    MOV EDX,EAX                         ; 005a0b82
    TEST EAX,EAX                        ; 005a0b84
    JL 0x005a0b98                       ; 005a0b86
        ;   XREF to: 005a0b98 (CONDITIONAL_JUMP)  ; LAB_005a0b98
    CMP dword ptr [EBX + 0x28],0x0      ; 005a0b88
    JNZ 0x005a0b9a                      ; 005a0b8c
        ;   XREF to: 005a0b9a (CONDITIONAL_JUMP)  ; LAB_005a0b9a
    CMP EAX,0xd                         ; 005a0b8e
    JNZ 0x005a0b9a                      ; 005a0b91
        ;   XREF to: 005a0b9a (CONDITIONAL_JUMP)  ; LAB_005a0b9a
    MOV EAX,0xa                         ; 005a0b93
    POP EBX                             ; 005a0b98
        ;   Label: LAB_005a0b98
    RET                                 ; 005a0b99
    MOV EAX,EDX                         ; 005a0b9a
        ;   Label: LAB_005a0b9a
    POP EBX                             ; 005a0b9c
    RET                                 ; 005a0b9d

