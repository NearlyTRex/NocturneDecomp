; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time,int trigger_id)
;
; Parameters:
; double           Stack[0x4]:8   trigger_time
; int              Stack[0xc]:4   trigger_id
;
; XREF[8]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418d67
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090 at 0041c2ff
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 00437598
;   core_drone.cpp_CDrone_process_FUN_0046d870 at 0046df27
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0 at 00491c26
;   core_flame.cpp_CFlame_process_FUN_0049f2e0 at 0049f68a
;   core_hag.cpp_FUN_005ab260 at 005ab46b
;   core_tommygun.cpp_CTommyGun_process_FUN_00576130 at 00576310
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 005503e0 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005503e6
    SUB EAX,EDX                         ; 005503ed
    SHL EAX,0x5                         ; 005503ef
    MOV EDX,dword ptr [ESP + 0x4]       ; 005503f2
    MOV dword ptr [EAX + 0x2641670],EDX ; 005503f6
    MOV EDX,dword ptr [ESP + 0x8]       ; 005503fc
    MOV dword ptr [EAX + 0x2641674],EDX ; 00550400
    MOV EDX,dword ptr [ESP + 0xc]       ; 00550406
    MOV dword ptr [EAX + 0x2641678],EDX ; 0055040a
    RET                                 ; 00550410

