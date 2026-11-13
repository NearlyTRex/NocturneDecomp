; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_00551570(float velocity_x,float velocity_y,float velocity_z)
;
; Parameters:
; float            Stack[0x4]:4   velocity_x
; float            Stack[0x8]:4   velocity_y
; float            Stack[0xc]:4   velocity_z
;
; XREF[3]:
;   core_sound.cpp_CSound_configure_FUN_0055ac50 at 0055ad33
;   core_sound.cpp_FUN_0055a1d0 at 0055a206
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0 at 0055243c
;
; Referenced Globals:
;   undefined4 DAT_026484b8
;   undefined4 DAT_02649024
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;   sound_sndmain.cpp_unlockSound_FUN_00551440
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00551570
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
        ;   Label: sound_sndmain.cpp_set3DListenerVelocity_FUN_00551570
    MOV EAX,[0x026484b8]                ; 00551575 | DAT_026484b8
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055157a
    MOV dword ptr [EAX*0x4 + 0x2648458],EDX ; 0055157e
    MOV EDX,dword ptr [ESP + 0x8]       ; 00551585
    MOV dword ptr [EAX*0x4 + 0x2648460],EDX ; 00551589
    MOV EDX,dword ptr [ESP + 0xc]       ; 00551590
    MOV dword ptr [EAX*0x4 + 0x2648468],EDX ; 00551594
    OR byte ptr [0x02649024],0x4        ; 0055159b | DAT_02649024
    JMP 0x00551440                      ; 005515a2
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)

