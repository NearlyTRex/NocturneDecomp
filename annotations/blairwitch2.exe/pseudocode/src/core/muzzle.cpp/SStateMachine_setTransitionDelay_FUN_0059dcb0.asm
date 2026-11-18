; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_muzzle_cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0(SStateMachine *this_ptr,float delay)
;
; Parameters:
; SStateMachine *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delay
;
; XREF[12]:
;   core_confedrt.cpp_CConfederate_processMeleeAttackState_FUN_005a1180 at 005a126d
;   core_confzomb.cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130 at 005a21f5
;   core_confzomb.cpp_CConfederateZombie_processRangeAttackState_FUN_005a1f40 at 005a1ffe
;   core_fforest.cpp_CTwigZombie_processMeleeAttackState_FUN_005a2ac0 at 005a2d88
;   core_ghostchi.cpp_CGhostChild_processMeleeAttackState_FUN_005a9580 at 005a966d
;   core_ghostchi.cpp_CGhostChild_processSleepState_FUN_005a9770 at 005a985d
;   core_hellhag.cpp_CHag_processHagAlertState_FUN_005aaa80 at 005aab11
;   core_hellhag.cpp_CHag_processMeleeAttackState_FUN_005aab50 at 005aac08
;   core_schngeis.cpp_CSchnellGeist_processMeleeAttackState_FUN_005a3280 at 005a333b
;   core_union.cpp_CUnion_processMeleeAttackState_FUN_005a4fe0 at 005a50cd
;   ... and 2 more
;
; Called Functions:
;   core_muzzle.cpp_SStateMachine_isTransitionPending_FUN_0059dce0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059dcb0
        ;   Label: core_muzzle.cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0
    PUSH EDX                            ; 0059dcb4
    CALL core_muzzle.cpp_SStateMachine_isTransitionPending_FUN_0059dce0 ; 0059dcb5
        ;   XREF to: 0059dce0 (UNCONDITIONAL_CALL)  ; int core_muzzle.cpp_SStateMachine_isTransitionPending_FUN_0059dce0(SStateMachine * this_ptr)
    ADD ESP,0x4                         ; 0059dcba
    TEST EAX,EAX                        ; 0059dcbd
    JZ 0x0059dcc2                       ; 0059dcbf
        ;   XREF to: 0059dcc2 (CONDITIONAL_JUMP)  ; LAB_0059dcc2
    RET                                 ; 0059dcc1
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059dcc2
        ;   Label: LAB_0059dcc2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059dcc6
    MOV dword ptr [EDX + 0x848],EAX     ; 0059dcca
    RET                                 ; 0059dcd0

