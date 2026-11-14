; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_copy_FUN_005a11b0(CInStreamMemory *this_ptr,CInStreamMemory *other)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; CInStreamMemory * Stack[0x8]:4   other
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_0059f540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a11b0
        ;   Label: support_trstream.cpp_CInStreamMemory_copy_FUN_005a11b0
    PUSH EDX                            ; 005a11b4
    CALL support_trstream.cpp_CInStream_ctor_FUN_0059f540 ; 005a11b5
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_0059f540(CInStream * this_ptr)
    ADD ESP,0x4                         ; 005a11ba
    MOV dword ptr [EAX],0x6073c4        ; 005a11bd
    RET                                 ; 005a11c3

