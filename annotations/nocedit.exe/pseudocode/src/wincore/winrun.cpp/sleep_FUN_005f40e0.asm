; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)
;
; Parameters:
; double           Stack[0x4]:8   seconds
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[6]:
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4ca6
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbe0a
;   sound_sndmain.cpp_audioThreadProc_FUN_005abba0 at 005abbdf
;   sound_sndmain.cpp_killSoundThread_FUN_005abcb0 at 005abcd9
;   sound_sndmain.cpp_startSoundThread_FUN_005abc00 at 005abc8c
;   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 at 005ad5ac
;
; Referenced Globals:
;   Sleep* Sleep = 00212228
;   double g_SecondsToMillisecondsMultiplier = 1000
;
; Called Functions:
;   crt_math.c_ceil_FUN_006001b2
;   crt_math.c_round_FUN_005fe6b0
;   Sleep
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005f40e0
        ;   Label: wincore_winrun.cpp_sleep_FUN_005f40e0
    FLDZ                                ; 005f40e3
    FCOMP double ptr [ESP + 0xc]        ; 005f40e5
    FNSTSW AX                           ; 005f40e9
    SAHF                                ; 005f40eb
    JC 0x005f40fb                       ; 005f40ec
        ;   XREF to: 005f40fb (CONDITIONAL_JUMP)  ; LAB_005f40fb
    PUSH 0x0                            ; 005f40ee
    CALL dword ptr CS:[0x611644]        ; 005f40f0 | Sleep
    ADD ESP,0x8                         ; 005f40f7
    RET                                 ; 005f40fa
    FLD double ptr [ESP + 0xc]          ; 005f40fb
        ;   Label: LAB_005f40fb
    FMUL double ptr [0x00658184]        ; 005f40ff | g_SecondsToMillisecondsMultiplier
    SUB ESP,0x8                         ; 005f4105
    FSTP double ptr [ESP]               ; 005f4108
    CALL crt_math.c_ceil_FUN_006001b2   ; 005f410b
        ;   XREF to: 006001b2 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_006001b2(double value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005f4110
    MOV dword ptr [ESP + 0xc],EDX       ; 005f4114
    FLD double ptr [ESP + 0x8]          ; 005f4118
    ADD ESP,0x8                         ; 005f411c
    CALL crt_math.c_round_FUN_005fe6b0  ; 005f411f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [ESP]               ; 005f4124
    MOV EAX,dword ptr [ESP]             ; 005f4127
    PUSH EAX                            ; 005f412a
    CALL dword ptr CS:[0x611644]        ; 005f412b | Sleep
    ADD ESP,0x8                         ; 005f4132
    RET                                 ; 005f4135

