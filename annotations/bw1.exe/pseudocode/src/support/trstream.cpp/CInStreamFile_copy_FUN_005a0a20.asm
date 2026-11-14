; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_copy_FUN_005a0a20(CInStreamFile *this_ptr,CInStreamFile *other)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; CInStreamFile *  Stack[0x8]:4   other
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_0059f540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a0a20
        ;   Label: support_trstream.cpp_CInStreamFile_copy_FUN_005a0a20
    PUSH EDX                            ; 005a0a24
    CALL support_trstream.cpp_CInStream_ctor_FUN_0059f540 ; 005a0a25
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_0059f540(CInStream * this_ptr)
    ADD ESP,0x4                         ; 005a0a2a
    MOV dword ptr [EAX],0x607384        ; 005a0a2d
    RET                                 ; 005a0a33

