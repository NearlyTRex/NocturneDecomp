; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_0054fd90(int param_1,int param_2)
;
;
; XREF[6]:
;   sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50 at 0054dd95
;   sound_sndmain.cpp_FUN_0054c1c0 at 0054c3bb
;   sound_sndmain.cpp_FUN_0054c7f0 at 0054c9e9
;   sound_sndmain.cpp_FUN_0054daf0 at 0054db7b
;   sound_sndmain.cpp_FUN_0054ddf0 at 0054e1fe
;   sound_sndmain.cpp_FUN_005516d0 at 005517ae
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054fd90
        ;   Label: sound_sndmain.cpp_FUN_0054fd90
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054fd94
    IMUL EDX,dword ptr [EAX + 0x104]    ; 0054fd98
    IMUL EDX,dword ptr [EAX + 0x108]    ; 0054fd9f
    ADD EDX,0x7                         ; 0054fda6
    MOV EAX,EDX                         ; 0054fda9
    SAR EDX,0x1f                        ; 0054fdab
    SHL EDX,0x3                         ; 0054fdae
    SBB EAX,EDX                         ; 0054fdb1
    SAR EAX,0x3                         ; 0054fdb3
    RET                                 ; 0054fdb6

