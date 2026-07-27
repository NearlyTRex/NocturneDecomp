; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004b48d0(int param_1)
;
;
; XREF[9]:
;   core_baron.cpp_CBaron_setup_FUN_004102c0 at 004102c7
;   core_colonel.cpp_FUN_00439da0 at 00439da7
;   core_gabriela.cpp_CGabriella_setup_FUN_004957c0 at 004957c8
;   core_haystack.cpp_FUN_004b3110 at 004b3117
;   core_icepick.cpp_CIcePick_setup_FUN_004b9db0 at 004b9db7
;   core_moloch.cpp_CMoloch_setup_FUN_004dda70 at 004ddaf9
;   core_scat.cpp_CScat_setup_FUN_004fbcc0 at 004fbcc7
;   core_stranger.cpp_FUN_00535450 at 0053545b
;   core_svetlana.cpp_CSvetlana_setup_FUN_00541a40 at 00541a71
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_00424260
;   core_inv.cpp_CInventory_setupItems_FUN_004c1510
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b48d0
        ;   Label: core_hero.cpp_FUN_004b48d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b48d1
    LEA EAX,[EBX + 0x150]               ; 004b48d5
    PUSH EAX                            ; 004b48db
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004b48dc
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 004b48e1
    PUSH EBX                            ; 004b48e4
    CALL core_charactr.cpp_CCharacter_setup_FUN_00424260 ; 004b48e5
        ;   XREF to: 00424260 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_setup_FUN_00424260()
    ADD ESP,0x4                         ; 004b48ea
    ADD EBX,0x1f5a0                     ; 004b48ed
    PUSH EBX                            ; 004b48f3
    MOV dword ptr [EBX + 0xfffec6ec],0x0 ; 004b48f4
    CALL core_inv.cpp_CInventory_setupItems_FUN_004c1510 ; 004b48fe
        ;   XREF to: 004c1510 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_setupItems_FUN_004c1510()
    ADD ESP,0x4                         ; 004b4903
    POP EBX                             ; 004b4906
    RET                                 ; 004b4907

