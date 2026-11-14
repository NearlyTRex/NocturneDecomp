; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStream * __cdecl support_trstream_cpp_COutStream_dtor_FUN_005a14b0(COutStream *this_ptr,uint flags)
;
; Parameters:
; COutStream *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[10]:
;   support_trstream.cpp_COutStreamDebug_ctor_FUN_005a1e10 at 005a1e15
;   support_trstream.cpp_COutStreamDebug_dtor_FUN_005a1e30 at 005a1e45
;   support_trstream.cpp_COutStreamFile_copy_FUN_005a1830 at 005a1835
;   support_trstream.cpp_COutStreamFile_ctorOpen_FUN_005a17f0 at 005a17f7
;   support_trstream.cpp_COutStreamFile_ctor_FUN_005a17d0 at 005a17d5
;   support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860 at 005a187e
;   support_trstream.cpp_COutStreamMemory_copy_FUN_005a1b30 at 005a1b35
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0 at 005a1ad7
;   support_trstream.cpp_COutStreamMemory_ctor_FUN_005a1a90 at 005a1a95
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60 at 005a1b7e
;
; Referenced Globals:
;   undefined1* PTR_support_trstream.cpp_COutStream_dtor_FUN_005a14b0_00607404 = 005a14b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a14b0
        ;   Label: support_trstream.cpp_COutStream_dtor_FUN_005a14b0
    MOV dword ptr [EAX],0x607404        ; 005a14b4 | PTR_support_trstream.cpp_COutStream_dtor_FUN_005a14b0_00607404
    RET                                 ; 005a14ba

