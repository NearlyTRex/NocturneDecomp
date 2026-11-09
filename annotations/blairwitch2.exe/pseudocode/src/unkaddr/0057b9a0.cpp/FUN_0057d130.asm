; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkaddr_0057b9a0_cpp_FUN_0057d130(int param_1)
;
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50 at 0054dd7f
;   sound_sndmain.cpp_FUN_0054ddf0 at 0054e305
;   support_codec.cpp_FUN_004340f0 at 0043410d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d130
        ;   Label: unkaddr_0057b9a0.cpp_FUN_0057d130
    CMP dword ptr [EAX + 0x4],0x0       ; 0057d134
    SETNZ AL                            ; 0057d138
    AND EAX,0xff                        ; 0057d13b
    RET                                 ; 0057d140

