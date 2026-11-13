; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_ctor_FUN_0057d4f0(CInStreamMemory *this_ptr)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_0057b9c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057d4f0
        ;   Label: support_trstream.cpp_CInStreamMemory_ctor_FUN_0057d4f0
    PUSH EDX                            ; 0057d4f4
    CALL support_trstream.cpp_CInStream_ctor_FUN_0057b9c0 ; 0057d4f5
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_0057b9c0(CInStream * this_ptr)
    MOV dword ptr [EAX],0x5fd424        ; 0057d4fa
    MOV dword ptr [EAX + 0x4],0x0       ; 0057d500
    MOV dword ptr [EAX + 0x8],0x0       ; 0057d507
    MOV dword ptr [EAX + 0xc],0x0       ; 0057d50e
    ADD ESP,0x4                         ; 0057d515
    MOV dword ptr [EAX + 0x10],0x0      ; 0057d518
    RET                                 ; 0057d51f

