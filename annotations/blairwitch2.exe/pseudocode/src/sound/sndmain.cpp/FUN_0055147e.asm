; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_0055147e(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_026484b8
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0055147e
        ;   Label: sound_sndmain.cpp_FUN_0055147e
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00551480
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    MOV EAX,dword ptr [ESP + 0x4]       ; 00551485
    MOV [0x026484b8],EAX                ; 00551489 | DAT_026484b8
    JMP 0x00551440                      ; 0055148e
        ;   XREF to: 00551440 (UNCONDITIONAL_JUMP)

