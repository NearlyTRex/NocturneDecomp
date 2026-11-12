; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl support_trstream_cpp_CInStreamFile_isOpen_FUN_005a0d70(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   engine_pod.cpp_FUN_0053b250 at 0053b665
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0 at 005703ef
;   sound_sndmain.cpp_FUN_00570460 at 00570975
;   support_codec.cpp_FUN_00442e10 at 00442e2f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a0d70
        ;   Label: support_trstream.cpp_CInStreamFile_isOpen_FUN_005a0d70
    CMP dword ptr [EAX + 0x4],0x0       ; 005a0d74
    SETNZ AL                            ; 005a0d78
    AND EAX,0xff                        ; 005a0d7b
    RET                                 ; 005a0d80

