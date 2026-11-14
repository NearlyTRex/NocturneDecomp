; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStream_seek_FUN_00574380(COutStream *this_ptr,int offset,int origin)
;
; Parameters:
; COutStream *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
; int              Stack[0xc]:4   origin
;
; XREF[1]:
;   support_trstream.cpp_CInStreamMemory_seek_FUN_00574350 at 0057436d
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00574380
        ;   Label: support_trstream.cpp_COutStream_seek_FUN_00574380
    RET                                 ; 00574382

