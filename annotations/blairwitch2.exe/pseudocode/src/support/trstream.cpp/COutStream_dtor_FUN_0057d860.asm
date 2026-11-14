; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStream * __cdecl support_trstream_cpp_COutStream_dtor_FUN_0057d860(COutStream *this_ptr,uint flags)
;
; Parameters:
; COutStream *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[10]:
;   support_trstream.cpp_COutStreamDebug_ctor_FUN_0057e1c0 at 0057e1c5
;   support_trstream.cpp_COutStreamDebug_dtor_FUN_0057e1e0 at 0057e1f5
;   support_trstream.cpp_COutStreamFile_copy_FUN_0057dbe0 at 0057dbe5
;   support_trstream.cpp_COutStreamFile_ctorOpen_FUN_0057dba0 at 0057dba7
;   support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80 at 0057db85
;   support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 at 0057dc2e
;   support_trstream.cpp_COutStreamMemory_copy_FUN_0057dee0 at 0057dee5
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_0057de80 at 0057de87
;   support_trstream.cpp_COutStreamMemory_ctor_FUN_0057de40 at 0057de45
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10 at 0057df2e
;
; Referenced Globals:
;   undefined1* PTR_support_trstream.cpp_COutStream_dtor_FUN_0057d860_005fd464 = 0057d860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d860
        ;   Label: support_trstream.cpp_COutStream_dtor_FUN_0057d860
    MOV dword ptr [EAX],0x5fd464        ; 0057d864 | PTR_support_trstream.cpp_COutStream_dtor_FUN_0057d860_005fd464
    RET                                 ; 0057d86a

