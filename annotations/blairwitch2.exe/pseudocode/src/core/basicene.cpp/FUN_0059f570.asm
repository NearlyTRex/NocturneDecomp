; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicene_cpp_FUN_0059f570(int param_1)
;
;
; XREF[9]:
;   core_basicene.cpp_FUN_0059ed50 at 0059edb8
;   core_confzomb.cpp_CConfederateZombie_processDeathState_FUN_005a1ed0 at 005a1f2e
;   core_confzomb.cpp_FUN_005a2240 at 005a23cb
;   core_ghostchi.cpp_CGhostChild_processDeathState_FUN_005a9980 at 005a99de
;   core_ghostchi.cpp_CGhostChild_processSleepState_FUN_005a9770 at 005a97ce
;   core_script.cpp_FUN_00522350 at 00527abd
;   core_unionzom.cpp_CUnionZombie_processDeathState_FUN_005a4080 at 005a40de
;   core_unionzom.cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0 at 005a4136
;   core_unionzom.cpp_FUN_005a4330 at 005a444f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059f570
        ;   Label: core_basicene.cpp_FUN_0059f570
    MOV dword ptr [EAX + 0x113b8],0x0   ; 0059f574
    MOV dword ptr [EAX + 0xfc],0x1      ; 0059f57e
    FLD float ptr [EAX + 0x113bc]       ; 0059f588
    MOV EDX,dword ptr [EAX + 0x113c8]   ; 0059f58e
    MOV dword ptr [EAX + 0x113cc],EDX   ; 0059f594
    FSTP float ptr [EAX + 0x113c4]      ; 0059f59a
    MOV dword ptr [EAX + 0x113b8],0x1   ; 0059f5a0
    RET                                 ; 0059f5aa

