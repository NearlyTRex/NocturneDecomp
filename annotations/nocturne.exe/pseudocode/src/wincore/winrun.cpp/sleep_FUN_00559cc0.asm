; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_sleep_FUN_00559cc0(double param_1)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   sound_sndmain.cpp_killSoundThread_FUN_00528780 at 005287a9
;   sound_sndmain.cpp_startSoundThread_FUN_005286d0 at 0052875c
;
; Referenced Globals:
;   void* PTR_Sleep_005755b8 = 00176066
;   undefined4 DAT_00598149
;
; Called Functions:
;   crt_math.c_ceil_FUN_00567121
;   crt_math.c_round_FUN_00563a30
;   Sleep
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00559cc0
        ;   Label: wincore_winrun.cpp_sleep_FUN_00559cc0
    FLDZ                                ; 00559cc3
    FCOMP double ptr [ESP + 0xc]        ; 00559cc5
    FNSTSW AX                           ; 00559cc9
    SAHF                                ; 00559ccb
    JC 0x00559cdb                       ; 00559ccc
        ;   XREF to: 00559cdb (CONDITIONAL_JUMP)  ; LAB_00559cdb
    PUSH 0x0                            ; 00559cce
    CALL dword ptr CS:[0x5755b8]        ; 00559cd0 | PTR_Sleep_005755b8
    ADD ESP,0x8                         ; 00559cd7
    RET                                 ; 00559cda
    FLD double ptr [ESP + 0xc]          ; 00559cdb
        ;   Label: LAB_00559cdb
    FMUL double ptr [0x00598149]        ; 00559cdf | DAT_00598149
    SUB ESP,0x8                         ; 00559ce5
    FSTP double ptr [ESP]               ; 00559ce8
    CALL crt_math.c_ceil_FUN_00567121   ; 00559ceb
        ;   XREF to: 00567121 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_ceil_FUN_00567121()
    MOV dword ptr [ESP + 0x8],EAX       ; 00559cf0
    MOV dword ptr [ESP + 0xc],EDX       ; 00559cf4
    FLD double ptr [ESP + 0x8]          ; 00559cf8
    ADD ESP,0x8                         ; 00559cfc
    CALL crt_math.c_round_FUN_00563a30  ; 00559cff
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP qword ptr [ESP]               ; 00559d04
    MOV EAX,dword ptr [ESP]             ; 00559d07
    PUSH EAX                            ; 00559d0a
    CALL dword ptr CS:[0x5755b8]        ; 00559d0b | PTR_Sleep_005755b8
    ADD ESP,0x8                         ; 00559d12
    RET                                 ; 00559d15

