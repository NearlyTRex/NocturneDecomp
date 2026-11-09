; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_sleep_FUN_005b3860(double seconds)
;
; Parameters:
; double           Stack[0x4]:8   seconds
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[7]:
;   sound_sndmain.cpp_FUN_00575bb0 at 00575bee
;   sound_sndmain.cpp_FUN_00575c00 at 00575c7d
;   sound_sndmain.cpp_killSoundThread_FUN_00575ca0 at 00575cc9
;   support_trisock.cpp_FUN_0059daec at 0059dc41
;   support_trisock.cpp_FUN_0059de30 at 0059de68
;   support_trisock.cpp_FUN_0059df10 at 0059df32
;   unkafter_trisock.cpp_FUN_0059ef20 at 0059efa4
;
; Referenced Globals:
;   void* PTR_Sleep_005d0658 = 001d1230
;   undefined4 DAT_005f9e7a
;
; Called Functions:
;   crt_math.c_ceil_FUN_005c31f7
;   crt_math.c_round_FUN_005c03a0
;   Sleep
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005b3860
        ;   Label: wincore_winrun.cpp_sleep_FUN_005b3860
    FLDZ                                ; 005b3863
    FCOMP double ptr [ESP + 0xc]        ; 005b3865
    FNSTSW AX                           ; 005b3869
    SAHF                                ; 005b386b
    JC 0x005b387b                       ; 005b386c
        ;   XREF to: 005b387b (CONDITIONAL_JUMP)  ; LAB_005b387b
    PUSH 0x0                            ; 005b386e
    CALL dword ptr CS:[0x5d0658]        ; 005b3870 | PTR_Sleep_005d0658
    ADD ESP,0x8                         ; 005b3877
    RET                                 ; 005b387a
    FLD double ptr [ESP + 0xc]          ; 005b387b
        ;   Label: LAB_005b387b
    FMUL double ptr [0x005f9e7a]        ; 005b387f | DAT_005f9e7a
    SUB ESP,0x8                         ; 005b3885
    FSTP double ptr [ESP]               ; 005b3888
    CALL crt_math.c_ceil_FUN_005c31f7   ; 005b388b
        ;   XREF to: 005c31f7 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_005c31f7(double value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005b3890
    MOV dword ptr [ESP + 0xc],EDX       ; 005b3894
    FLD double ptr [ESP + 0x8]          ; 005b3898
    ADD ESP,0x8                         ; 005b389c
    CALL crt_math.c_round_FUN_005c03a0  ; 005b389f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [ESP]               ; 005b38a4
    MOV EAX,dword ptr [ESP]             ; 005b38a7
    PUSH EAX                            ; 005b38aa
    CALL dword ptr CS:[0x5d0658]        ; 005b38ab | PTR_Sleep_005d0658
    ADD ESP,0x8                         ; 005b38b2
    RET                                 ; 005b38b5

