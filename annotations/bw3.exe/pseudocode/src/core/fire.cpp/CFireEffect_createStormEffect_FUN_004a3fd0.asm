; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createStormEffect_FUN_004a3fd0(CFireEffect *this_ptr,CVector3f position)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f        Stack[0x8]:12   position
;
; XREF[1]:
;   core_fire.cpp_CToss_process_FUN_0049d090 at 0049d47a
;
; Referenced Globals:
;   undefined4 DAT_01d0ce7c
;
; Called Functions:
;   core_fire.cpp_CStormEffect_activate_FUN_004a0480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3fd0
        ;   Label: core_fire.cpp_CFireEffect_createStormEffect_FUN_004a3fd0
    PUSH ESI                            ; 004a3fd1
    PUSH EBP                            ; 004a3fd2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a3fd3
    PUSH EDX                            ; 004a3fd7
    MOV EDX,dword ptr [0x01d0ce7c]      ; 004a3fd8 | DAT_01d0ce7c
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a3fde
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a3fe2
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a3fe9
    SUB EAX,EDX                         ; 004a3fed
    PUSH ECX                            ; 004a3fef
    SHL EAX,0x2                         ; 004a3ff0
    PUSH EBX                            ; 004a3ff3
    ADD EAX,0x1d0ce80                   ; 004a3ff4
    PUSH EAX                            ; 004a3ff9
    CALL core_fire.cpp_CStormEffect_activate_FUN_004a0480 ; 004a3ffa
        ;   XREF to: 004a0480 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStormEffect_activate_FUN_004a0480(CStormEffect * this_ptr, CVector3f position)
    MOV ESI,dword ptr [0x01d0ce7c]      ; 004a3fff | DAT_01d0ce7c
    INC ESI                             ; 004a4005
    ADD ESP,0x10                        ; 004a4006
    MOV dword ptr [0x01d0ce7c],ESI      ; 004a4009 | DAT_01d0ce7c
    CMP ESI,0x4                         ; 004a400f
    JGE 0x004a4018                      ; 004a4012
        ;   XREF to: 004a4018 (CONDITIONAL_JUMP)  ; LAB_004a4018
    POP EBP                             ; 004a4014
    POP ESI                             ; 004a4015
    POP EBX                             ; 004a4016
    RET                                 ; 004a4017
    XOR EBP,EBP                         ; 004a4018
        ;   Label: LAB_004a4018
    MOV dword ptr [0x01d0ce7c],EBP      ; 004a401a | DAT_01d0ce7c
    POP EBP                             ; 004a4020
    POP ESI                             ; 004a4021
    POP EBX                             ; 004a4022
    RET                                 ; 004a4023

