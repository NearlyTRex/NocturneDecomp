; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_copy_FUN_005a1830(COutStreamFile *this_ptr,COutStreamFile *other)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; COutStreamFile * Stack[0x8]:4   other
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_005a14b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1830
        ;   Label: support_trstream.cpp_COutStreamFile_copy_FUN_005a1830
    PUSH EDX                            ; 005a1834
    CALL support_trstream.cpp_COutStream_dtor_FUN_005a14b0 ; 005a1835
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005a14b0(COutStream * this_ptr, uint flags)
    ADD ESP,0x4                         ; 005a183a
    MOV dword ptr [EAX],0x607424        ; 005a183d
    RET                                 ; 005a1843

