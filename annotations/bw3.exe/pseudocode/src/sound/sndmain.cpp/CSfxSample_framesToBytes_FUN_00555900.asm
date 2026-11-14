; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00555900(CSfxSample *this_ptr,int frame_count)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_count
;
; XREF[6]:
;   sound_sndmain.cpp_CSfxSample_lock_FUN_00553660 at 005536eb
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00553960 at 00553d6e
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0 at 00553905
;   sound_sndmain.cpp_createUserSample_FUN_00557260 at 0055733e
;   sound_sndmain.cpp_getSfxSample_FUN_00551d20 at 00551f1d
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_00552350 at 00552549
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00555900
        ;   Label: sound_sndmain.cpp_CSfxSample_framesToBytes_FUN_00555900
    MOV EDX,dword ptr [ESP + 0x8]       ; 00555904
    IMUL EDX,dword ptr [EAX + 0x104]    ; 00555908
    IMUL EDX,dword ptr [EAX + 0x108]    ; 0055590f
    ADD EDX,0x7                         ; 00555916
    MOV EAX,EDX                         ; 00555919
    SAR EDX,0x1f                        ; 0055591b
    SHL EDX,0x3                         ; 0055591e
    SBB EAX,EDX                         ; 00555921
    SAR EAX,0x3                         ; 00555923
    RET                                 ; 00555926

