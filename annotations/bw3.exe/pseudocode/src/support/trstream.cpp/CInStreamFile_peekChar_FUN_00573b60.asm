; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamFile_peekChar_FUN_00573b60(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_trstream.cpp_CInStreamFile_readByteAt_FUN_00573b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573b60
        ;   Label: support_trstream.cpp_CInStreamFile_peekChar_FUN_00573b60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573b61
    MOV EDX,dword ptr [EBX + 0x10]      ; 00573b65
    PUSH EDX                            ; 00573b68
    PUSH EBX                            ; 00573b69
    CALL support_trstream.cpp_CInStreamFile_readByteAt_FUN_00573b90 ; 00573b6a
        ;   XREF to: 00573b90 (UNCONDITIONAL_CALL)  ; uint support_trstream.cpp_CInStreamFile_readByteAt_FUN_00573b90(CInStreamFile * this_ptr, int param_2)
    ADD ESP,0x8                         ; 00573b6f
    MOV EDX,EAX                         ; 00573b72
    TEST EAX,EAX                        ; 00573b74
    JL 0x00573b88                       ; 00573b76
        ;   XREF to: 00573b88 (CONDITIONAL_JUMP)  ; LAB_00573b88
    CMP dword ptr [EBX + 0x28],0x0      ; 00573b78
    JNZ 0x00573b8a                      ; 00573b7c
        ;   XREF to: 00573b8a (CONDITIONAL_JUMP)  ; LAB_00573b8a
    CMP EAX,0xd                         ; 00573b7e
    JNZ 0x00573b8a                      ; 00573b81
        ;   XREF to: 00573b8a (CONDITIONAL_JUMP)  ; LAB_00573b8a
    MOV EAX,0xa                         ; 00573b83
    POP EBX                             ; 00573b88
        ;   Label: LAB_00573b88
    RET                                 ; 00573b89
    MOV EAX,EDX                         ; 00573b8a
        ;   Label: LAB_00573b8a
    POP EBX                             ; 00573b8c
    RET                                 ; 00573b8d

