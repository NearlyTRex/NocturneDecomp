; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00572880(CVector3f *velocity_source_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   velocity_source_ptr
;
; XREF[4]:
;   core_dracbrid.cpp_FUN_0047d920 at 0047dd99
;   core_sound.cpp_FUN_0057c57e at 0057c9c2
;   core_sound.cpp_FUN_0057ce10 at 0057d3bc
;   core_vehicle.cpp_CVehicle_playTrackedSound_FUN_005a89c0 at 005a89de
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572880 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_FUN_00572880
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572886
    SUB EAX,EDX                         ; 0057288d
    SHL EAX,0x5                         ; 0057288f
    MOV dword ptr [EAX + 0x2c78d24],0x1 ; 00572892
    MOV EDX,dword ptr [ESP + 0x4]       ; 0057289c
    MOV dword ptr [EAX + 0x2c78d20],EDX ; 005728a0
    RET                                 ; 005728a6

