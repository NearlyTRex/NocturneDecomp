; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStream * __cdecl support_trstream_cpp_CInStream_copy_FUN_00572550(CInStream *this_ptr)
;
; Parameters:
; CInStream *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00572550
        ;   Label: support_trstream.cpp_CInStream_copy_FUN_00572550
    MOV dword ptr [EAX],0x5e5a54        ; 00572554
    RET                                 ; 0057255a

