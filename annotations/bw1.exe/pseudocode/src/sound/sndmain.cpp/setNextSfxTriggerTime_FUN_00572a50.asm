; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00572a50(double trigger_time,int trigger_id)
;
; Parameters:
; double           Stack[0x4]:8   trigger_time
; int              Stack[0xc]:4   trigger_id
;
; XREF[6]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041c1e7
;   core_boxactor.cpp_CBoxActor_process_FUN_00422000 at 0042226f
;   core_drone.cpp_CDrone_process_FUN_00485d70 at 00486427
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004aa550 at 004aa596
;   core_flame.cpp_CFlame_process_FUN_004b7b90 at 004b7f3a
;   core_tommygun.cpp_CTommyGun_process_FUN_00598d50 at 00598f30
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572a50 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00572a50
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572a56
    SUB EAX,EDX                         ; 00572a5d
    SHL EAX,0x5                         ; 00572a5f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572a62
    MOV dword ptr [EAX + 0x2c78d40],EDX ; 00572a66
    MOV EDX,dword ptr [ESP + 0x8]       ; 00572a6c
    MOV dword ptr [EAX + 0x2c78d44],EDX ; 00572a70
    MOV EDX,dword ptr [ESP + 0xc]       ; 00572a76
    MOV dword ptr [EAX + 0x2c78d48],EDX ; 00572a7a
    RET                                 ; 00572a80

