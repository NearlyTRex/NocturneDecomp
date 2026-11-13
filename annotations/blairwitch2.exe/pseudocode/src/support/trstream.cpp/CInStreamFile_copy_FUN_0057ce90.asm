; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_copy_FUN_0057ce90(CInStreamFile *this_ptr,CInStreamFile *other)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; CInStreamFile *  Stack[0x8]:4   other
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_0057b9c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057ce90
        ;   Label: support_trstream.cpp_CInStreamFile_copy_FUN_0057ce90
    PUSH EDX                            ; 0057ce94
    CALL support_trstream.cpp_CInStream_ctor_FUN_0057b9c0 ; 0057ce95
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_0057b9c0(CInStream * this_ptr)
    ADD ESP,0x4                         ; 0057ce9a
    MOV dword ptr [EAX],0x5fd3e4        ; 0057ce9d
    RET                                 ; 0057cea3

