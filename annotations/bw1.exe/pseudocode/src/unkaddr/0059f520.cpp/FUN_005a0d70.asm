; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkaddr_0059f520_cpp_FUN_005a0d70(int param_1)
;
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
        ;   Label: unkaddr_0059f520.cpp_FUN_005a0d70
    CMP dword ptr [EAX + 0x4],0x0       ; 005a0d74
    SETNZ AL                            ; 005a0d78
    AND EAX,0xff                        ; 005a0d7b
    RET                                 ; 005a0d80

