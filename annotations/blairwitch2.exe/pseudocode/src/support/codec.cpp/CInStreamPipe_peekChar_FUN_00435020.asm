; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_CInStreamPipe_peekChar_FUN_00435020(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00435300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435020
        ;   Label: support_codec.cpp_CInStreamPipe_peekChar_FUN_00435020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00435021
    CMP dword ptr [EBX + 0x10],0x0      ; 00435025
    JZ 0x00435046                       ; 00435029
        ;   XREF to: 00435046 (CONDITIONAL_JUMP)  ; LAB_00435046
    MOV ECX,dword ptr [EBX + 0x18]      ; 0043502b
    CMP ECX,dword ptr [EBX + 0x1c]      ; 0043502e
    JLE 0x0043504d                      ; 00435031
        ;   XREF to: 0043504d (CONDITIONAL_JUMP)  ; LAB_0043504d
    PUSH ESI                            ; 00435033
        ;   Label: LAB_00435033
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00435034
    MOV EAX,dword ptr [EBX + 0x10]      ; 00435037
    ADD EAX,ESI                         ; 0043503a
    MOV AL,byte ptr [EAX]               ; 0043503c
    AND EAX,0xff                        ; 0043503e
    POP ESI                             ; 00435043
    POP EBX                             ; 00435044
    RET                                 ; 00435045
    MOV EAX,0xfffffffe                  ; 00435046
        ;   Label: LAB_00435046
    POP EBX                             ; 0043504b
    RET                                 ; 0043504c
    PUSH EBX                            ; 0043504d
        ;   Label: LAB_0043504d
    CALL support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00435300 ; 0043504e
        ;   XREF to: 00435300 (UNCONDITIONAL_CALL)  ; undefined4 support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00435300(CInStreamPipe * this_ptr)
    ADD ESP,0x4                         ; 00435053
    TEST EAX,EAX                        ; 00435056
    JGE 0x00435033                      ; 00435058
        ;   XREF to: 00435033 (CONDITIONAL_JUMP)  ; LAB_00435033
    POP EBX                             ; 0043505a
    RET                                 ; 0043505b

