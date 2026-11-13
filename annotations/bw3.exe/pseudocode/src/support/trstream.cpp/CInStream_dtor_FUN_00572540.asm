; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStream * __cdecl support_trstream_cpp_CInStream_dtor_FUN_00572540(CInStream *this_ptr,uint flags)
;
; Parameters:
; CInStream *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_dtor_FUN_004418c0 at 004418de
;   support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 at 00573a5e
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0 at 005741ee
;
; Referenced Globals:
;   undefined1* PTR_support_trstream.cpp_CInStream_dtor_FUN_00572540_005e5a54 = 00572540
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00572540
        ;   Label: support_trstream.cpp_CInStream_dtor_FUN_00572540
    MOV dword ptr [EAX],0x5e5a54        ; 00572544 | PTR_support_trstream.cpp_CInStream_dtor_FUN_00572540_005e5a54
    RET                                 ; 0057254a

