; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStream * __cdecl support_trstream_cpp_CInStream_ctor_FUN_00572530(CInStream *this_ptr)
;
; Parameters:
; CInStream *      Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   support_codec.cpp_CInStreamPipe_ctor_FUN_004417f0 at 004417f5
;   support_trstream.cpp_CInStreamFile_copy_FUN_00573a10 at 00573a15
;   support_trstream.cpp_CInStreamFile_ctorOpenInDirectory_FUN_00573990 at 00573998
;   support_trstream.cpp_CInStreamFile_ctorOpen_FUN_00573920 at 00573927
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 at 005738c5
;   support_trstream.cpp_CInStreamMemory_copy_FUN_005741a0 at 005741a5
;   support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_00574150 at 00574157
;   support_trstream.cpp_CInStreamMemory_ctor_FUN_00574120 at 00574125
;
; Referenced Globals:
;   undefined1* PTR_support_trstream.cpp_CInStream_dtor_FUN_00572540_005e5a54 = 00572540
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00572530
        ;   Label: support_trstream.cpp_CInStream_ctor_FUN_00572530
    MOV dword ptr [EAX],0x5e5a54        ; 00572534 | PTR_support_trstream.cpp_CInStream_dtor_FUN_00572540_005e5a54
    RET                                 ; 0057253a

