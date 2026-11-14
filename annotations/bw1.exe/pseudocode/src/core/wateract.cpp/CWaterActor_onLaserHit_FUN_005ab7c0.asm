; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_005ab7c0(CWaterActor *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab7c0
        ;   Label: core_wateract.cpp_CWaterActor_onLaserHit_FUN_005ab7c0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ab7c1
    PUSH EBX                            ; 005ab7c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ab7c6
    PUSH EDX                            ; 005ab7ca
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680 ; 005ab7cb
        ;   XREF to: 00409680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680(CDemonActor * this_ptr, SLaserInfo * laser_info)
    MOV dword ptr [EBX + 0x50],0x3e99999a ; 005ab7d0
    ADD ESP,0x8                         ; 005ab7d7
    MOV dword ptr [EBX + 0x48],0x3f4ccccd ; 005ab7da
    POP EBX                             ; 005ab7e1
    RET                                 ; 005ab7e2

