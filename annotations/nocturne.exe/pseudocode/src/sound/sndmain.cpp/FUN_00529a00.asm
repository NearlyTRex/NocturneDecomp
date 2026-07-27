; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_00529a00(void)
;
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00529a00
        ;   Label: sound_sndmain.cpp_FUN_00529a00
    PUSH EDX                            ; 00529a04
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 00529a05
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    ADD ESP,0x4                         ; 00529a0a
    MOV EDX,dword ptr [ESP + 0x4]       ; 00529a0d
    IMUL EAX,dword ptr [EDX + 0x138]    ; 00529a11
    RET                                 ; 00529a18

