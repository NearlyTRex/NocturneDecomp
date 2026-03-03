; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_getWeaponHoldType_FUN_005bafa0(CWeapon *weapon)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   weapon
;
; Referenced Globals:
;   undefined4 caseD_3
;   void* switchdataD_005baf70 = 005bafba
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005bafa0
        ;   Label: core_stranger.cpp_getWeaponHoldType_FUN_005bafa0
    TEST EAX,EAX                        ; 005bafa4
    JZ 0x005baf3d                       ; 005bafa6
        ;   XREF to: 005baf3d (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 005bafa8
    CMP EAX,0x8                         ; 005bafae
    JA 0x005baf3d                       ; 005bafb1
        ;   XREF to: 005baf3d (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x5baf70]  ; 005bafb3 | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 005bafba
        ;   Label: caseD_0
    RET                                 ; 005bafbf
    MOV EAX,0x4                         ; 005bafc0
        ;   Label: caseD_1
    RET                                 ; 005bafc5
    MOV EAX,0x7                         ; 005bafc6
        ;   Label: caseD_4
    RET                                 ; 005bafcb
    MOV EAX,0x5                         ; 005bafcc
        ;   Label: caseD_2
    RET                                 ; 005bafd1
    MOV EAX,0x8                         ; 005bafd2
        ;   Label: caseD_7
    RET                                 ; 005bafd7

