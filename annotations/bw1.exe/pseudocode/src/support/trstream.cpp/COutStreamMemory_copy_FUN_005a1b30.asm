; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_copy_FUN_005a1b30(COutStreamMemory *this_ptr,COutStreamMemory *other)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; COutStreamMemory * Stack[0x8]:4   other
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_005a14b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1b30
        ;   Label: support_trstream.cpp_COutStreamMemory_copy_FUN_005a1b30
    PUSH EDX                            ; 005a1b34
    CALL support_trstream.cpp_COutStream_dtor_FUN_005a14b0 ; 005a1b35
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005a14b0(COutStream * this_ptr, uint flags)
    ADD ESP,0x4                         ; 005a1b3a
    MOV dword ptr [EAX],0x607454        ; 005a1b3d
    RET                                 ; 005a1b43

