; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_00572400(int param_1,int param_2)
;
;
; XREF[6]:
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0 at 00570405
;   sound_sndmain.cpp_FUN_0056e830 at 0056ea2d
;   sound_sndmain.cpp_FUN_00570160 at 005701eb
;   sound_sndmain.cpp_FUN_00570460 at 0057086e
;   sound_sndmain.cpp_FUN_00574100 at 005741de
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 005732a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00572400
        ;   Label: sound_sndmain.cpp_FUN_00572400
    MOV EDX,dword ptr [ESP + 0x8]       ; 00572404
    IMUL EDX,dword ptr [EAX + 0x104]    ; 00572408
    IMUL EDX,dword ptr [EAX + 0x108]    ; 0057240f
    ADD EDX,0x7                         ; 00572416
    MOV EAX,EDX                         ; 00572419
    SAR EDX,0x1f                        ; 0057241b
    SHL EDX,0x3                         ; 0057241e
    SBB EAX,EDX                         ; 00572421
    SAR EAX,0x3                         ; 00572423
    RET                                 ; 00572426

