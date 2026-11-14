; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl support_trstream_cpp_CInStreamFile_isOpen_FUN_00573d60(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   engine_pod.cpp_FUN_00512fb0 at 005133c5
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00553960 at 00553e75
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0 at 005538ef
;   support_codec.cpp_FUN_00440a70 at 00440a8f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00573d60
        ;   Label: support_trstream.cpp_CInStreamFile_isOpen_FUN_00573d60
    CMP dword ptr [EAX + 0x4],0x0       ; 00573d64
    SETNZ AL                            ; 00573d68
    AND EAX,0xff                        ; 00573d6b
    RET                                 ; 00573d70

