; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_004417f0(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_trstream.cpp_FUN_00572530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004417f0
        ;   Label: support_codec.cpp_CInStreamPipe_ctor_FUN_004417f0
    PUSH EDX                            ; 004417f4
    CALL support_trstream.cpp_FUN_00572530 ; 004417f5
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00572530()
    MOV dword ptr [EAX],0x5dd554        ; 004417fa
    MOV dword ptr [EAX + 0x4],0x0       ; 00441800
    MOV dword ptr [EAX + 0x8],0x0       ; 00441807
    MOV dword ptr [EAX + 0xc],0x0       ; 0044180e
    MOV dword ptr [EAX + 0x10],0x0      ; 00441815
    MOV dword ptr [EAX + 0x14],0x0      ; 0044181c
    MOV dword ptr [EAX + 0x18],0x0      ; 00441823
    MOV dword ptr [EAX + 0x1c],0x0      ; 0044182a
    ADD ESP,0x4                         ; 00441831
    MOV dword ptr [EAX + 0x20],0x0      ; 00441834
    RET                                 ; 0044183b

