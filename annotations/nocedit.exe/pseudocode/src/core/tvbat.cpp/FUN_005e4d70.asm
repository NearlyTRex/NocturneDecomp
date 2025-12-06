; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_tvbat.cpp_FUN_005e4d70()
;
;
; XREF[1]:
;   core_vampboss.cpp_VoicuSummonWavFile_FUN_005e7320 at 005e7373
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e4d70
        ;   Label: core_tvbat.cpp_FUN_005e4d70
    MOV dword ptr [EAX + 0xc068],0x40400000 ; 005e4d74
    RET                                 ; 005e4d7e

