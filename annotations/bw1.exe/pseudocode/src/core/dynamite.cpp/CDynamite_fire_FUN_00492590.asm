; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_00492590(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createToss_FUN_004b6e60
;   core_weapon.cpp_CWeapon_fire_FUN_005adde0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492590
        ;   Label: core_dynamite.cpp_CDynamite_fire_FUN_00492590
    MOV EBX,dword ptr [ESP + 0x8]       ; 00492591
    PUSH EBX                            ; 00492595
    CALL core_weapon.cpp_CWeapon_fire_FUN_005adde0 ; 00492596
        ;   XREF to: 005adde0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005adde0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0049259b
    TEST EAX,EAX                        ; 0049259e
    JNZ 0x004925a4                      ; 004925a0
        ;   XREF to: 004925a4 (CONDITIONAL_JUMP)  ; LAB_004925a4
    POP EBX                             ; 004925a2
    RET                                 ; 004925a3
    PUSH ESI                            ; 004925a4
        ;   Label: LAB_004925a4
    MOV EDX,dword ptr [EBX + 0x588]     ; 004925a5
    PUSH EDX                            ; 004925ab
    LEA ESI,[EBX + 0x57c]               ; 004925ac
    PUSH dword ptr [EBX + 0x578]        ; 004925b2
    PUSH ESI                            ; 004925b8
    LEA EAX,[EBX + 0x30]                ; 004925b9
    PUSH EAX                            ; 004925bc
    LEA EAX,[EBX + 0x20]                ; 004925bd
    PUSH EAX                            ; 004925c0
    MOV ECX,dword ptr [0x0061c010]      ; 004925c1 | DAT_0061c010
    PUSH ECX                            ; 004925c7
    CALL core_fire.cpp_CFireEffect_createToss_FUN_004b6e60 ; 004925c8
        ;   XREF to: 004b6e60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createToss_FUN_004b6e60(CFireEffect * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * velocity, ...)
    MOV dword ptr [EBX + 0x588],0x0     ; 004925cd
    MOV dword ptr [EBX + 0x578],0xbf800000 ; 004925d7
    MOV EAX,0x1                         ; 004925e1
    MOV dword ptr [ESI + 0x8],0x0       ; 004925e6
    ADD ESP,0x18                        ; 004925ed
    MOV EDX,dword ptr [ESI + 0x8]       ; 004925f0
    MOV dword ptr [ESI + 0x4],EDX       ; 004925f3
    MOV EDX,dword ptr [ESI + 0x4]       ; 004925f6
    MOV dword ptr [ESI],EDX             ; 004925f9
    POP ESI                             ; 004925fb
    POP EBX                             ; 004925fc
    RET                                 ; 004925fd

