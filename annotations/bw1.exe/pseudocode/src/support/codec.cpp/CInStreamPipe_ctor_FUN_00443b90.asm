; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_00443b90(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   unkaddr_0059f520.cpp_FUN_0059f540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443b90
        ;   Label: support_codec.cpp_CInStreamPipe_ctor_FUN_00443b90
    PUSH EDX                            ; 00443b94
    CALL unkaddr_0059f520.cpp_FUN_0059f540 ; 00443b95
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_0059f540()
    MOV dword ptr [EAX],0x5fda74        ; 00443b9a
    MOV dword ptr [EAX + 0x4],0x0       ; 00443ba0
    MOV dword ptr [EAX + 0x8],0x0       ; 00443ba7
    MOV dword ptr [EAX + 0xc],0x0       ; 00443bae
    MOV dword ptr [EAX + 0x10],0x0      ; 00443bb5
    MOV dword ptr [EAX + 0x14],0x0      ; 00443bbc
    MOV dword ptr [EAX + 0x18],0x0      ; 00443bc3
    MOV dword ptr [EAX + 0x1c],0x0      ; 00443bca
    ADD ESP,0x4                         ; 00443bd1
    MOV dword ptr [EAX + 0x20],0x0      ; 00443bd4
    RET                                 ; 00443bdb

