; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_dtor_FUN_0054d810(CSfxSample *this_ptr,uint flags)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d810
        ;   Label: sound_sndmain.cpp_CSfxSample_dtor_FUN_0054d810
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054d811
    PUSH EBX                            ; 0054d815
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 0054d816
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054d81b
    PUSH 0x0                            ; 0054d81e
    ADD EBX,0x17c                       ; 0054d820
    PUSH EBX                            ; 0054d826
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 0054d827
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054d82c
    SUB EAX,0x17c                       ; 0054d82f
    POP EBX                             ; 0054d834
    RET                                 ; 0054d835

