; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_sleep_FUN_00581a40(double seconds)
;
; Parameters:
; double           Stack[0x4]:8   seconds
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[7]:
;   sound_sndmain.cpp_audioThreadProc_FUN_00558d20 at 00558d5e
;   sound_sndmain.cpp_killSoundThread_FUN_00558e10 at 00558e39
;   sound_sndmain.cpp_startSoundThread_FUN_00558d70 at 00558ded
;   support_trisock.cpp_FUN_00570ae0 at 00570c31
;   support_trisock.cpp_FUN_00570e20 at 00570e58
;   support_trisock.cpp_FUN_00570ea0 at 00570f22
;   support_trisock.cpp_FUN_00571f10 at 00571f94
;
; Referenced Globals:
;   void* PTR_Sleep_005b3658 = 001b4236
;   undefined4 DAT_005d7e9b
;
; Called Functions:
;   crt_math.c_ceil_FUN_005a6067
;   crt_math.c_round_FUN_005a3120
;   Sleep
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00581a40
        ;   Label: wincore_winrun.cpp_sleep_FUN_00581a40
    FLDZ                                ; 00581a43
    FCOMP double ptr [ESP + 0xc]        ; 00581a45
    FNSTSW AX                           ; 00581a49
    SAHF                                ; 00581a4b
    JC 0x00581a5b                       ; 00581a4c
        ;   XREF to: 00581a5b (CONDITIONAL_JUMP)  ; LAB_00581a5b
    PUSH 0x0                            ; 00581a4e
    CALL dword ptr CS:[0x5b3658]        ; 00581a50 | PTR_Sleep_005b3658
    ADD ESP,0x8                         ; 00581a57
    RET                                 ; 00581a5a
    FLD double ptr [ESP + 0xc]          ; 00581a5b
        ;   Label: LAB_00581a5b
    FMUL double ptr [0x005d7e9b]        ; 00581a5f | DAT_005d7e9b
    SUB ESP,0x8                         ; 00581a65
    FSTP double ptr [ESP]               ; 00581a68
    CALL crt_math.c_ceil_FUN_005a6067   ; 00581a6b
        ;   XREF to: 005a6067 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_005a6067(double value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00581a70
    MOV dword ptr [ESP + 0xc],EDX       ; 00581a74
    FLD double ptr [ESP + 0x8]          ; 00581a78
    ADD ESP,0x8                         ; 00581a7c
    CALL crt_math.c_round_FUN_005a3120  ; 00581a7f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [ESP]               ; 00581a84
    MOV EAX,dword ptr [ESP]             ; 00581a87
    PUSH EAX                            ; 00581a8a
    CALL dword ptr CS:[0x5b3658]        ; 00581a8b | PTR_Sleep_005b3658
    ADD ESP,0x8                         ; 00581a92
    RET                                 ; 00581a95

