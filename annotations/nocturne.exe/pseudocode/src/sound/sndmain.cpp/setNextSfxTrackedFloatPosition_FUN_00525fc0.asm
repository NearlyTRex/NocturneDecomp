; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(CVector3f *position_source_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position_source_ptr
;
; XREF[7]:
;   core_dracbrid.cpp_CDraculaBride_startFreakySound_FUN_0045ab40 at 0045afb3
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 at 00494e62
;   core_lightgun.cpp_CLightGun_process_FUN_004c79a0 at 004c7c11
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0 at 004cb6f7
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740 at 004cb7ad
;   core_sound.cpp_playSfxInternal_FUN_0052d120 at 0052d316
;   core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0 at 0054f7af
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00525fc0 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00525fc6
    SUB EAX,EDX                         ; 00525fcd
    SHL EAX,0x2                         ; 00525fcf
    MOV EDX,EAX                         ; 00525fd2
    SHL EAX,0x3                         ; 00525fd4
    ADD EAX,EDX                         ; 00525fd7
    MOV dword ptr [EAX + 0x2dc1b98],0x1 ; 00525fd9
    MOV EDX,dword ptr [ESP + 0x4]       ; 00525fe3
    MOV dword ptr [EAX + 0x2dc1b94],EDX ; 00525fe7
    RET                                 ; 00525fed

