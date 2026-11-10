; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_005727e0(CVector3f *position_source_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position_source_ptr
;
; XREF[8]:
;   core_dracbrid.cpp_FUN_0047d920 at 0047dd8d
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 at 004c5a22
;   core_lightgun.cpp_CLightGun_process_FUN_00500d20 at 00500ed7
;   core_lightpis.cpp_CLightPis_process_FUN_00502480 at 00502637
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0 at 00506017
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060 at 005060cd
;   core_sound.cpp_playSfxInternal_FUN_0057bef0 at 0057c0e6
;   core_vehicle.cpp_CVehicle_playTrackedSound_FUN_005a89c0 at 005a89cf
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 005727e0 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_FUN_005727e0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005727e6
    SUB EAX,EDX                         ; 005727ed
    SHL EAX,0x5                         ; 005727ef
    MOV dword ptr [EAX + 0x2c78d10],0x1 ; 005727f2
    MOV EDX,dword ptr [ESP + 0x4]       ; 005727fc
    MOV dword ptr [EAX + 0x2c78d0c],EDX ; 00572800
    RET                                 ; 00572806

