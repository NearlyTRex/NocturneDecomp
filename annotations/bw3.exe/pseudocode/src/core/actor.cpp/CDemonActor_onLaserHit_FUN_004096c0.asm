; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_004096c0(CDemonActor *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_onLaserHit_FUN_004304e0 at 004304eb
;   core_glass.cpp_CGlass_onLaserHit_FUN_004cc480 at 004cc491
;   core_trigger.cpp_CTrigger_onLaserHit_FUN_0056ed70 at 0056ed7c
;   core_wateract.cpp_CWaterActor_onLaserHit_FUN_00578fc0 at 00578fcb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004096c0
        ;   Label: core_actor.cpp_CDemonActor_onLaserHit_FUN_004096c0
    MOV dword ptr [EAX + 0x48],0x0      ; 004096c4
    MOV dword ptr [EAX + 0x50],0x0      ; 004096cb
    MOV EDX,dword ptr [EAX + 0x44]      ; 004096d2
    MOV dword ptr [EAX + 0x4c],EDX      ; 004096d5
    LEA EAX,[EAX]                       ; 004096d8
    MOV EDX,EDX                         ; 004096de

