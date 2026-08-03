; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_0040ab10(CDemonActor *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; XREF[5]:
;   core_glass.cpp_CGlass_onLaserHit_FUN_004add80 at 004add91
;   core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300 at 004ca314
;   core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004cbcb0 at 004cbcbb
;   core_trigger.cpp_CTrigger_onLaserHit_FUN_00548530 at 0054853c
;   core_wateract.cpp_CWaterActor_onLaserHit_FUN_005522a0 at 005522ab
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ab10
        ;   Label: core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10
    MOV dword ptr [EAX + 0x48],0x0      ; 0040ab14
    MOV dword ptr [EAX + 0x50],0x0      ; 0040ab1b
    MOV EDX,dword ptr [EAX + 0x44]      ; 0040ab22
    MOV dword ptr [EAX + 0x4c],EDX      ; 0040ab25
    LEA EAX,[EAX]                       ; 0040ab28
    MOV EDX,EDX                         ; 0040ab2e

