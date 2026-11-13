; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_sleep_FUN_0058fd90(double seconds)
;
; Parameters:
; double           Stack[0x4]:8   seconds
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[6]:
;   sound_sndmain.cpp_audioThreadProc_FUN_00553180 at 005531be
;   sound_sndmain.cpp_killSoundThread_FUN_00553270 at 00553299
;   sound_sndmain.cpp_startSoundThread_FUN_005531d0 at 0055324d
;   support_trisock.cpp_FUN_0057a480 at 0057a5d1
;   support_trisock.cpp_FUN_0057a7c0 at 0057a7f8
;   support_trisock.cpp_FUN_0057a840 at 0057a8d2
;
; Referenced Globals:
;   void* PTR_Sleep_005c8644 = 001c91f4
;   undefined4 DAT_005eeaa2
;
; Called Functions:
;   crt_math.c_ceil_FUN_005bae37
;   crt_math.c_round_FUN_005b7ff0
;   Sleep
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0058fd90
        ;   Label: wincore_winrun.cpp_sleep_FUN_0058fd90
    FLDZ                                ; 0058fd93
    FCOMP double ptr [ESP + 0xc]        ; 0058fd95
    FNSTSW AX                           ; 0058fd99
    SAHF                                ; 0058fd9b
    JC 0x0058fdab                       ; 0058fd9c
        ;   XREF to: 0058fdab (CONDITIONAL_JUMP)  ; LAB_0058fdab
    PUSH 0x0                            ; 0058fd9e
    CALL dword ptr CS:[0x5c8644]        ; 0058fda0 | PTR_Sleep_005c8644
    ADD ESP,0x8                         ; 0058fda7
    RET                                 ; 0058fdaa
    FLD double ptr [ESP + 0xc]          ; 0058fdab
        ;   Label: LAB_0058fdab
    FMUL double ptr [0x005eeaa2]        ; 0058fdaf | DAT_005eeaa2
    SUB ESP,0x8                         ; 0058fdb5
    FSTP double ptr [ESP]               ; 0058fdb8
    CALL crt_math.c_ceil_FUN_005bae37   ; 0058fdbb
        ;   XREF to: 005bae37 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_005bae37(double value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0058fdc0
    MOV dword ptr [ESP + 0xc],EDX       ; 0058fdc4
    FLD double ptr [ESP + 0x8]          ; 0058fdc8
    ADD ESP,0x8                         ; 0058fdcc
    CALL crt_math.c_round_FUN_005b7ff0  ; 0058fdcf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [ESP]               ; 0058fdd4
    MOV EAX,dword ptr [ESP]             ; 0058fdd7
    PUSH EAX                            ; 0058fdda
    CALL dword ptr CS:[0x5c8644]        ; 0058fddb | PTR_Sleep_005c8644
    ADD ESP,0x8                         ; 0058fde2
    RET                                 ; 0058fde5

