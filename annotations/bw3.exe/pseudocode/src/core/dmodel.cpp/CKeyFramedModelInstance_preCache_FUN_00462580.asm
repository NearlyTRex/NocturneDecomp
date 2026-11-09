; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[40]:
;   core_ammo.cpp_FUN_0040def0 at 0040defa
;   core_ammobox.cpp_FUN_0040e670 at 0040e67c
;   core_bat.cpp_CBat_setup_FUN_0040eeb0 at 0040eebf
;   core_battery.cpp_CBattery_setup_FUN_0040f500 at 0040f515
;   core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_004166d0 at 0041672e
;   core_boxactor.cpp_FUN_0041f130 at 0041f149
;   core_boxactor.cpp_FUN_004208d0 at 0042092e
;   core_bugs.cpp_FUN_00421060 at 004212cf
;   core_charactr.cpp_FUN_0042b0e0 at 0042b12e
;   core_crate.cpp_FUN_00445c30 at 00445c4a
;   ... and 30 more
;
; Called Functions:
;   core_dmodel.cpp_loadModel_FUN_00462420
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00462580
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
    ADD EAX,0x78                        ; 00462584
    PUSH EAX                            ; 00462587
    CALL core_dmodel.cpp_loadModel_FUN_00462420 ; 00462588
        ;   XREF to: 00462420 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_00462420()
    ADD ESP,0x4                         ; 0046258d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00462590
    MOV dword ptr [EDX + 0x178],EAX     ; 00462594
    RET                                 ; 0046259a

