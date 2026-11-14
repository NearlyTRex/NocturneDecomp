; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStream * __cdecl support_trstream_cpp_COutStream_dtor_FUN_005744a0(COutStream *this_ptr,uint flags)
;
; Parameters:
; COutStream *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[10]:
;   support_trstream.cpp_COutStreamDebug_ctor_FUN_00574e00 at 00574e05
;   support_trstream.cpp_COutStreamDebug_dtor_FUN_00574e20 at 00574e35
;   support_trstream.cpp_COutStreamFile_copy_FUN_00574820 at 00574825
;   support_trstream.cpp_COutStreamFile_ctorOpen_FUN_005747e0 at 005747e7
;   support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0 at 005747c5
;   support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 at 0057486e
;   support_trstream.cpp_COutStreamMemory_copy_FUN_00574b20 at 00574b25
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_00574ac0 at 00574ac7
;   support_trstream.cpp_COutStreamMemory_ctor_FUN_00574a80 at 00574a85
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_00574b50 at 00574b6e
;
; Referenced Globals:
;   undefined1* PTR_support_trstream.cpp_COutStream_dtor_FUN_005744a0_005e5b04 = 005744a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005744a0
        ;   Label: support_trstream.cpp_COutStream_dtor_FUN_005744a0
    MOV dword ptr [EAX],0x5e5b04        ; 005744a4 | PTR_support_trstream.cpp_COutStream_dtor_FUN_005744a0_005e5b04
    RET                                 ; 005744aa

