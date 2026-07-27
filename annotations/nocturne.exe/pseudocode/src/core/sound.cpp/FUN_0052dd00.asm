; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_sound_cpp_FUN_0052dd00(undefined4 *param_1)
;
;
; XREF[1]:
;   core_sound.cpp_staticInit_FUN_0052c8c0 at 0052c8c5
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005273d0
;   sound_sndmain.cpp_FUN_00527d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dd00
        ;   Label: core_sound.cpp_FUN_0052dd00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052dd01
    PUSH 0x3                            ; 0052dd05
    MOV dword ptr [EBX],0x1400          ; 0052dd07
    CALL sound_sndmain.cpp_FUN_005273d0 ; 0052dd0d
        ;   XREF to: 005273d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005273d0()
    ADD ESP,0x4                         ; 0052dd12
    CALL sound_sndmain.cpp_FUN_00527d80 ; 0052dd15
        ;   XREF to: 00527d80 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00527d80()
    MOV EAX,EBX                         ; 0052dd1a
    POP EBX                             ; 0052dd1c
    RET                                 ; 0052dd1d

