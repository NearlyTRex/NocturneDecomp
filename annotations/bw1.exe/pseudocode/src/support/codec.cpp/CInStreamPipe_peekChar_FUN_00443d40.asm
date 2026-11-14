; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_CInStreamPipe_peekChar_FUN_00443d40(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00444020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443d40
        ;   Label: support_codec.cpp_CInStreamPipe_peekChar_FUN_00443d40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00443d41
    CMP dword ptr [EBX + 0x10],0x0      ; 00443d45
    JZ 0x00443d66                       ; 00443d49
        ;   XREF to: 00443d66 (CONDITIONAL_JUMP)  ; LAB_00443d66
    MOV ECX,dword ptr [EBX + 0x18]      ; 00443d4b
    CMP ECX,dword ptr [EBX + 0x1c]      ; 00443d4e
    JLE 0x00443d6d                      ; 00443d51
        ;   XREF to: 00443d6d (CONDITIONAL_JUMP)  ; LAB_00443d6d
    PUSH ESI                            ; 00443d53
        ;   Label: LAB_00443d53
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00443d54
    MOV EAX,dword ptr [EBX + 0x10]      ; 00443d57
    ADD EAX,ESI                         ; 00443d5a
    MOV AL,byte ptr [EAX]               ; 00443d5c
    AND EAX,0xff                        ; 00443d5e
    POP ESI                             ; 00443d63
    POP EBX                             ; 00443d64
    RET                                 ; 00443d65
    MOV EAX,0xfffffffe                  ; 00443d66
        ;   Label: LAB_00443d66
    POP EBX                             ; 00443d6b
    RET                                 ; 00443d6c
    PUSH EBX                            ; 00443d6d
        ;   Label: LAB_00443d6d
    CALL support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00444020 ; 00443d6e
        ;   XREF to: 00444020 (UNCONDITIONAL_CALL)  ; undefined4 support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00444020(CInStreamPipe * this_ptr)
    ADD ESP,0x4                         ; 00443d73
    TEST EAX,EAX                        ; 00443d76
    JGE 0x00443d53                      ; 00443d78
        ;   XREF to: 00443d53 (CONDITIONAL_JUMP)  ; LAB_00443d53
    POP EBX                             ; 00443d7a
    RET                                 ; 00443d7b

