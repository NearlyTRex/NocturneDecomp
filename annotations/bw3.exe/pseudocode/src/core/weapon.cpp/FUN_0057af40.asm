; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_FUN_0057af40(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_bindevil.cpp_FUN_0040f900 at 0040f905
;   core_blundrbs.cpp_FUN_00411810 at 00411815
;   core_burncrss.cpp_FUN_004253d0 at 004253d5
;   core_disease.cpp_FUN_0045c0d0 at 0045c0d5
;   core_exorcism.cpp_FUN_0048b690 at 0048b696
;   core_firestff.cpp_FUN_004a5870 at 004a5875
;   core_flintlck.cpp_FUN_004af5b0 at 004af5b5
;   core_heal.cpp_FUN_004d1c80 at 004d1c85
;   core_holycrss.cpp_FUN_004d52e0 at 004d52e5
;   core_storm.cpp_FUN_00568c10 at 00568c16
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;   core_weapon.cpp_FUN_0057ba10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057af40
        ;   Label: core_weapon.cpp_FUN_0057af40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057af41
    PUSH EBX                            ; 0057af45
    CALL core_actor.cpp_FUN_00408890    ; 0057af46
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057af4b
    LEA EAX,[EBX + 0x158]               ; 0057af4e
    PUSH EAX                            ; 0057af54
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0057af55
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057af5a
    PUSH EBX                            ; 0057af5d
    CALL core_weapon.cpp_FUN_0057ba10   ; 0057af5e
        ;   XREF to: 0057ba10 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_0057ba10()
    ADD ESP,0x4                         ; 0057af63
    MOV dword ptr [EBX + 0x584],0x0     ; 0057af66
    POP EBX                             ; 0057af70
    RET                                 ; 0057af71

