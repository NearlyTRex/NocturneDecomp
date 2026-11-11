; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_CInStreamPipe_peekChar_FUN_004419a0(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00441c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004419a0
        ;   Label: support_codec.cpp_CInStreamPipe_peekChar_FUN_004419a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004419a1
    CMP dword ptr [EBX + 0x10],0x0      ; 004419a5
    JZ 0x004419c6                       ; 004419a9
        ;   XREF to: 004419c6 (CONDITIONAL_JUMP)  ; LAB_004419c6
    MOV ECX,dword ptr [EBX + 0x18]      ; 004419ab
    CMP ECX,dword ptr [EBX + 0x1c]      ; 004419ae
    JLE 0x004419cd                      ; 004419b1
        ;   XREF to: 004419cd (CONDITIONAL_JUMP)  ; LAB_004419cd
    PUSH ESI                            ; 004419b3
        ;   Label: LAB_004419b3
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004419b4
    MOV EAX,dword ptr [EBX + 0x10]      ; 004419b7
    ADD EAX,ESI                         ; 004419ba
    MOV AL,byte ptr [EAX]               ; 004419bc
    AND EAX,0xff                        ; 004419be
    POP ESI                             ; 004419c3
    POP EBX                             ; 004419c4
    RET                                 ; 004419c5
    MOV EAX,0xfffffffe                  ; 004419c6
        ;   Label: LAB_004419c6
    POP EBX                             ; 004419cb
    RET                                 ; 004419cc
    PUSH EBX                            ; 004419cd
        ;   Label: LAB_004419cd
    CALL support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00441c80 ; 004419ce
        ;   XREF to: 00441c80 (UNCONDITIONAL_CALL)  ; undefined4 support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00441c80(CInStreamPipe * this_ptr)
    ADD ESP,0x4                         ; 004419d3
    TEST EAX,EAX                        ; 004419d6
    JGE 0x004419b3                      ; 004419d8
        ;   XREF to: 004419b3 (CONDITIONAL_JUMP)  ; LAB_004419b3
    POP EBX                             ; 004419da
    RET                                 ; 004419db

