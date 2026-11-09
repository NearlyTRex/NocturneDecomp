; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_00587b60(CWaterActor *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Called Functions:
;   core_actor.cpp_FUN_00409830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587b60
        ;   Label: core_wateract.cpp_CWaterActor_onLaserHit_FUN_00587b60
    MOV EBX,dword ptr [ESP + 0xc]       ; 00587b61
    PUSH EBX                            ; 00587b65
    MOV EDX,dword ptr [ESP + 0xc]       ; 00587b66
    PUSH EDX                            ; 00587b6a
    CALL core_actor.cpp_FUN_00409830    ; 00587b6b
        ;   XREF to: 00409830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409830()
    MOV dword ptr [EBX + 0x50],0x3e99999a ; 00587b70
    ADD ESP,0x8                         ; 00587b77
    MOV dword ptr [EBX + 0x48],0x3f4ccccd ; 00587b7a
    POP EBX                             ; 00587b81
    RET                                 ; 00587b82

