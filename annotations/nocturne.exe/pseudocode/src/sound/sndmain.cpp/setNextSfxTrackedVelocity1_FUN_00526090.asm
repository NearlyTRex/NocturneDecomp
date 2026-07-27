; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090(undefined4 param_1)
;
;
; XREF[4]:
;   core_dracbrid.cpp_FUN_0045ab40 at 0045afbf
;   core_sound.cpp_FUN_0052d790 at 0052dbaa
;   core_sound.cpp_FUN_0052dff0 at 0052e744
;   core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0 at 0054f7be
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00526090 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526096
    SUB EAX,EDX                         ; 0052609d
    SHL EAX,0x2                         ; 0052609f
    MOV EDX,EAX                         ; 005260a2
    SHL EAX,0x3                         ; 005260a4
    ADD EAX,EDX                         ; 005260a7
    MOV dword ptr [EAX + 0x2dc1bb8],0x1 ; 005260a9
    MOV EDX,dword ptr [ESP + 0x4]       ; 005260b3
    MOV dword ptr [EAX + 0x2dc1bb4],EDX ; 005260b7
    RET                                 ; 005260bd

