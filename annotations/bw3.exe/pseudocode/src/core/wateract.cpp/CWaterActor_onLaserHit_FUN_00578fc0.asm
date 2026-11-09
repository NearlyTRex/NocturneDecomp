; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_00578fc0(CWaterActor *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Called Functions:
;   core_actor.cpp_FUN_004096c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578fc0
        ;   Label: core_wateract.cpp_CWaterActor_onLaserHit_FUN_00578fc0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00578fc1
    PUSH EBX                            ; 00578fc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00578fc6
    PUSH EDX                            ; 00578fca
    CALL core_actor.cpp_FUN_004096c0    ; 00578fcb
        ;   XREF to: 004096c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004096c0()
    MOV dword ptr [EBX + 0x50],0x3e99999a ; 00578fd0
    ADD ESP,0x8                         ; 00578fd7
    MOV dword ptr [EBX + 0x48],0x3f4ccccd ; 00578fda
    POP EBX                             ; 00578fe1
    RET                                 ; 00578fe2

