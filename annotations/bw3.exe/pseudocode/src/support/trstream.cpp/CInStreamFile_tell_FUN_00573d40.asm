; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamFile_tell_FUN_00573d40(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_pod.cpp_FUN_00512fb0 at 005138bb
;   sound_sndmain.cpp_getSampleInfo_FUN_00557570 at 0055767a
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_00552350 at 005525ec
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00573d40
        ;   Label: support_trstream.cpp_CInStreamFile_tell_FUN_00573d40
    CMP dword ptr [EAX + 0x4],0x0       ; 00573d44
    JNZ 0x00573d50                      ; 00573d48
        ;   XREF to: 00573d50 (CONDITIONAL_JUMP)  ; LAB_00573d50
    MOV EAX,0xffffffff                  ; 00573d4a
    RET                                 ; 00573d4f
    MOV EAX,dword ptr [EAX + 0x10]      ; 00573d50
        ;   Label: LAB_00573d50
    RET                                 ; 00573d53

