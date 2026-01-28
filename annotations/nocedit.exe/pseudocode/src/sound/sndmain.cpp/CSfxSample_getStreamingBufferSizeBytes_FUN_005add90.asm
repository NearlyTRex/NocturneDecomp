; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_005add90(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005add90
        ;   Label: sound_sndmain.cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_005add90
    PUSH EDX                            ; 005add94
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005add95
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005add9a
    MOV EDX,dword ptr [ESP + 0x4]       ; 005add9d
    IMUL EAX,dword ptr [EDX + 0x160]    ; 005adda1
    RET                                 ; 005adda8

