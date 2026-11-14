; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210(CVector3f *velocity_source_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   velocity_source_ptr
;
; XREF[4]:
;   core_dracbrid.cpp_FUN_00465400 at 00465879
;   core_sound.cpp_CSound_process_FUN_0055a3c0 at 0055ab3d
;   core_sound.cpp_FUN_00559b50 at 00559f92
;   core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90 at 00584dae
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550210 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550216
    SUB EAX,EDX                         ; 0055021d
    SHL EAX,0x5                         ; 0055021f
    MOV dword ptr [EAX + 0x2641654],0x1 ; 00550222
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055022c
    MOV dword ptr [EAX + 0x2641650],EDX ; 00550230
    RET                                 ; 00550236

