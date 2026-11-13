; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_copy_FUN_00574820(COutStreamFile *this_ptr,COutStreamFile *other)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; COutStreamFile * Stack[0x8]:4   other
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574820
        ;   Label: support_trstream.cpp_COutStreamFile_copy_FUN_00574820
    PUSH EDX                            ; 00574824
    CALL support_trstream.cpp_COutStream_dtor_FUN_005744a0 ; 00574825
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005744a0(COutStream * this_ptr, uint flags)
    ADD ESP,0x4                         ; 0057482a
    MOV dword ptr [EAX],0x5e5b24        ; 0057482d
    RET                                 ; 00574833

