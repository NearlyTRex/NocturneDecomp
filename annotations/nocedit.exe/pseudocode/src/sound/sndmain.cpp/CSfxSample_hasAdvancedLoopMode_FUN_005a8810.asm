; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_hasAdvancedLoopMode_FUN_005a8810(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8810
        ;   Label: sound_sndmain.cpp_CSfxSample_hasAdvancedLoopMode_FUN_005a8810
    PUSH EDX                            ; 005a8814
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0 ; 005a8815
        ;   XREF to: 005a87d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a881a
    CMP EAX,0x1                         ; 005a881d
    SETG AL                             ; 005a8820
    AND EAX,0xff                        ; 005a8823
    RET                                 ; 005a8828

