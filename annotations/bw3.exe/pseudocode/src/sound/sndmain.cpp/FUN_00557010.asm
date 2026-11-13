; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00557010(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf28b8
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00557010
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
        ;   Label: sound_sndmain.cpp_FUN_00557010
    MOV EAX,dword ptr [ESP + 0x4]       ; 00557015
    MOV [0x02cf28b8],EAX                ; 00557019 | DAT_02cf28b8
    JMP 0x00556fd0                      ; 0055701e
        ;   XREF to: 00556fd0 (UNCONDITIONAL_JUMP)

