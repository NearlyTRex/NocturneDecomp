; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_CInStreamPipe_getChar_FUN_00434fa0(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00435300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434fa0
        ;   Label: support_codec.cpp_CInStreamPipe_getChar_FUN_00434fa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00434fa1
    CMP dword ptr [EBX + 0x10],0x0      ; 00434fa5
    JZ 0x00434fce                       ; 00434fa9
        ;   XREF to: 00434fce (CONDITIONAL_JUMP)  ; LAB_00434fce
    MOV ECX,dword ptr [EBX + 0x18]      ; 00434fab
    CMP ECX,dword ptr [EBX + 0x1c]      ; 00434fae
    JLE 0x00434fd5                      ; 00434fb1
        ;   XREF to: 00434fd5 (CONDITIONAL_JUMP)  ; LAB_00434fd5
    PUSH EDI                            ; 00434fb3
        ;   Label: LAB_00434fb3
    PUSH ESI                            ; 00434fb4
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00434fb5
    MOV EAX,dword ptr [EBX + 0x10]      ; 00434fb8
    ADD EAX,ESI                         ; 00434fbb
    MOV AL,byte ptr [EAX]               ; 00434fbd
    LEA EDI,[ESI + 0x1]                 ; 00434fbf
    AND EAX,0xff                        ; 00434fc2
    MOV dword ptr [EBX + 0x1c],EDI      ; 00434fc7
    POP ESI                             ; 00434fca
    POP EDI                             ; 00434fcb
    POP EBX                             ; 00434fcc
    RET                                 ; 00434fcd
    MOV EAX,0xfffffffe                  ; 00434fce
        ;   Label: LAB_00434fce
    POP EBX                             ; 00434fd3
    RET                                 ; 00434fd4
    PUSH EBX                            ; 00434fd5
        ;   Label: LAB_00434fd5
    CALL support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00435300 ; 00434fd6
        ;   XREF to: 00435300 (UNCONDITIONAL_CALL)  ; undefined4 support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00435300(CInStreamPipe * this_ptr)
    ADD ESP,0x4                         ; 00434fdb
    TEST EAX,EAX                        ; 00434fde
    JGE 0x00434fb3                      ; 00434fe0
        ;   XREF to: 00434fb3 (CONDITIONAL_JUMP)  ; LAB_00434fb3
    POP EBX                             ; 00434fe2
    RET                                 ; 00434fe3

