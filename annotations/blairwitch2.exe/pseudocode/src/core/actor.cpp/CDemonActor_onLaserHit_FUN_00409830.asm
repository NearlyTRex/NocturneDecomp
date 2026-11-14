; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_00409830(CDemonActor *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; XREF[6]:
;   core_charactr.cpp_CCharacter_onLaserHit_FUN_00427730 at 0042773b
;   core_glass.cpp_CGlass_onLaserHit_FUN_004c7180 at 004c7191
;   core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_004e5f00 at 004e5f14
;   core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004e7950 at 004e795b
;   core_trigger.cpp_CTrigger_onLaserHit_FUN_00578500 at 0057850c
;   core_wateract.cpp_CWaterActor_onLaserHit_FUN_00587b60 at 00587b6b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00409830
        ;   Label: core_actor.cpp_CDemonActor_onLaserHit_FUN_00409830
    MOV dword ptr [EAX + 0x48],0x0      ; 00409834
    MOV dword ptr [EAX + 0x50],0x0      ; 0040983b
    MOV EDX,dword ptr [EAX + 0x44]      ; 00409842
    MOV dword ptr [EAX + 0x4c],EDX      ; 00409845
    LEA EAX,[EAX]                       ; 00409848
    MOV EDX,EDX                         ; 0040984e

