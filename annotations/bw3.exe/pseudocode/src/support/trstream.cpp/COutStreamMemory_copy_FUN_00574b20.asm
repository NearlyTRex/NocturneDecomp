; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_copy_FUN_00574b20(COutStreamMemory *this_ptr,COutStreamMemory *other)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; COutStreamMemory * Stack[0x8]:4   other
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574b20
        ;   Label: support_trstream.cpp_COutStreamMemory_copy_FUN_00574b20
    PUSH EDX                            ; 00574b24
    CALL support_trstream.cpp_COutStream_dtor_FUN_005744a0 ; 00574b25
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005744a0(COutStream * this_ptr, uint flags)
    ADD ESP,0x4                         ; 00574b2a
    MOV dword ptr [EAX],0x5e5b54        ; 00574b2d
    RET                                 ; 00574b33

