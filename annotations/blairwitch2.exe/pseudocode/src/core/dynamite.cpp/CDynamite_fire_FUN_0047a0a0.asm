; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0047a0a0(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createToss_FUN_0049e560
;   core_weapon.cpp_CWeapon_fire_FUN_0058a290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a0a0
        ;   Label: core_dynamite.cpp_CDynamite_fire_FUN_0047a0a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047a0a1
    PUSH EBX                            ; 0047a0a5
    CALL core_weapon.cpp_CWeapon_fire_FUN_0058a290 ; 0047a0a6
        ;   XREF to: 0058a290 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0058a290(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0047a0ab
    TEST EAX,EAX                        ; 0047a0ae
    JNZ 0x0047a0b4                      ; 0047a0b0
        ;   XREF to: 0047a0b4 (CONDITIONAL_JUMP)  ; LAB_0047a0b4
    POP EBX                             ; 0047a0b2
    RET                                 ; 0047a0b3
    PUSH ESI                            ; 0047a0b4
        ;   Label: LAB_0047a0b4
    MOV EDX,dword ptr [EBX + 0x6e4]     ; 0047a0b5
    PUSH EDX                            ; 0047a0bb
    LEA ESI,[EBX + 0x6d8]               ; 0047a0bc
    PUSH dword ptr [EBX + 0x6d4]        ; 0047a0c2
    PUSH ESI                            ; 0047a0c8
    LEA EAX,[EBX + 0x30]                ; 0047a0c9
    PUSH EAX                            ; 0047a0cc
    LEA EAX,[EBX + 0x20]                ; 0047a0cd
    PUSH EAX                            ; 0047a0d0
    MOV ECX,dword ptr [0x00614d30]      ; 0047a0d1 | DAT_00614d30
    PUSH ECX                            ; 0047a0d7
    CALL core_fire.cpp_CFireEffect_createToss_FUN_0049e560 ; 0047a0d8
        ;   XREF to: 0049e560 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createToss_FUN_0049e560(CFireEffect * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * velocity, ...)
    MOV dword ptr [EBX + 0x6e4],0x0     ; 0047a0dd
    MOV dword ptr [EBX + 0x6d4],0xbf800000 ; 0047a0e7
    MOV EAX,0x1                         ; 0047a0f1
    MOV dword ptr [ESI + 0x8],0x0       ; 0047a0f6
    ADD ESP,0x18                        ; 0047a0fd
    MOV EDX,dword ptr [ESI + 0x8]       ; 0047a100
    MOV dword ptr [ESI + 0x4],EDX       ; 0047a103
    MOV EDX,dword ptr [ESI + 0x4]       ; 0047a106
    MOV dword ptr [ESI],EDX             ; 0047a109
    POP ESI                             ; 0047a10b
    POP EBX                             ; 0047a10c
    RET                                 ; 0047a10d

