; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_mission.cpp_CDemonMission_startMission_FUN_00524760 at 00524882
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 005391a2
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e2b3
;   core_platfrm.cpp_CPlatform_process_FUN_0054cc30 at 0054cdc1
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c176
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00575b20
        ;   Label: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
    FLD float ptr [EDX + 0x15aeb4]      ; 00575b24
    FLDZ                                ; 00575b2a
    FCOMPP                              ; 00575b2c
    FNSTSW AX                           ; 00575b2e
    SAHF                                ; 00575b30
    JC 0x00575b34                       ; 00575b31
        ;   XREF to: 00575b34 (CONDITIONAL_JUMP)  ; LAB_00575b34
    RET                                 ; 00575b33
    MOV dword ptr [EDX + 0x15aeb4],0x1e3ce508 ; 00575b34
        ;   Label: LAB_00575b34
    RET                                 ; 00575b3e

