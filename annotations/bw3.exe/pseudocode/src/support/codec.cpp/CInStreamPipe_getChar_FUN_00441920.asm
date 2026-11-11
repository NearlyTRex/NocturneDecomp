; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_CInStreamPipe_getChar_FUN_00441920(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00441c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441920
        ;   Label: support_codec.cpp_CInStreamPipe_getChar_FUN_00441920
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441921
    CMP dword ptr [EBX + 0x10],0x0      ; 00441925
    JZ 0x0044194e                       ; 00441929
        ;   XREF to: 0044194e (CONDITIONAL_JUMP)  ; LAB_0044194e
    MOV ECX,dword ptr [EBX + 0x18]      ; 0044192b
    CMP ECX,dword ptr [EBX + 0x1c]      ; 0044192e
    JLE 0x00441955                      ; 00441931
        ;   XREF to: 00441955 (CONDITIONAL_JUMP)  ; LAB_00441955
    PUSH EDI                            ; 00441933
        ;   Label: LAB_00441933
    PUSH ESI                            ; 00441934
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00441935
    MOV EAX,dword ptr [EBX + 0x10]      ; 00441938
    ADD EAX,ESI                         ; 0044193b
    MOV AL,byte ptr [EAX]               ; 0044193d
    LEA EDI,[ESI + 0x1]                 ; 0044193f
    AND EAX,0xff                        ; 00441942
    MOV dword ptr [EBX + 0x1c],EDI      ; 00441947
    POP ESI                             ; 0044194a
    POP EDI                             ; 0044194b
    POP EBX                             ; 0044194c
    RET                                 ; 0044194d
    MOV EAX,0xfffffffe                  ; 0044194e
        ;   Label: LAB_0044194e
    POP EBX                             ; 00441953
    RET                                 ; 00441954
    PUSH EBX                            ; 00441955
        ;   Label: LAB_00441955
    CALL support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00441c80 ; 00441956
        ;   XREF to: 00441c80 (UNCONDITIONAL_CALL)  ; undefined4 support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00441c80(CInStreamPipe * this_ptr)
    ADD ESP,0x4                         ; 0044195b
    TEST EAX,EAX                        ; 0044195e
    JGE 0x00441933                      ; 00441960
        ;   XREF to: 00441933 (CONDITIONAL_JUMP)  ; LAB_00441933
    POP EBX                             ; 00441962
    RET                                 ; 00441963

