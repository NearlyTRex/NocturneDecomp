; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStream_seek_FUN_005a1390(COutStream *this_ptr,int offset,int origin)
;
; Parameters:
; COutStream *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
; int              Stack[0xc]:4   origin
;
; XREF[1]:
;   support_trstream.cpp_CInStreamMemory_seek_FUN_005a1360 at 005a137d
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 005a1390
        ;   Label: support_trstream.cpp_COutStream_seek_FUN_005a1390
    RET                                 ; 005a1392

