; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 core_actor_cpp_FUN_00409680(undefined4 param_1,int param_2)
;
;
; XREF[6]:
;   core_charactr.cpp_FUN_00431160 at 0043116b
;   core_glass.cpp_CGlass_onLaserHit_FUN_004e38f0 at 004e3901
;   core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_00504ba0 at 00504bb4
;   core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_005065f0 at 005065fb
;   core_trigger.cpp_CTrigger_onLaserHit_FUN_0059bd80 at 0059bd8c
;   core_wateract.cpp_CWaterActor_onLaserHit_FUN_005ab7c0 at 005ab7cb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00409680
        ;   Label: core_actor.cpp_FUN_00409680
    MOV dword ptr [EAX + 0x48],0x0      ; 00409684
    MOV dword ptr [EAX + 0x50],0x0      ; 0040968b
    MOV EDX,dword ptr [EAX + 0x44]      ; 00409692
    MOV dword ptr [EAX + 0x4c],EDX      ; 00409695
    LEA EAX,[EAX]                       ; 00409698
    MOV EDX,EDX                         ; 0040969e

