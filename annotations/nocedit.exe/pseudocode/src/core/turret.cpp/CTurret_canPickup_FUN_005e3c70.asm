; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_canPickup_FUN_005e3c70(CTurret *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 DAT_02d81ca0
;
; Called Functions:
;   core_weapon.cpp_CWeapon_canPickup_FUN_005ee340
;
; *****************************************************************************

section .text

    MOV EAX,[0x0067b654]                ; 005e3c70 | g_CGameInstance | g_CGamePtr
        ;   Label: core_turret.cpp_CTurret_canPickup_FUN_005e3c70
    CMP dword ptr [EAX + 0x204],0x0     ; 005e3c75 | DAT_02d81ca0
    JNZ 0x005e3c81                      ; 005e3c7c
        ;   XREF to: 005e3c81 (CONDITIONAL_JUMP)  ; LAB_005e3c81
    XOR EAX,EAX                         ; 005e3c7e
    RET                                 ; 005e3c80
    PUSH EBX                            ; 005e3c81
        ;   Label: LAB_005e3c81
    MOV ECX,dword ptr [ESP + 0xc]       ; 005e3c82
    PUSH ECX                            ; 005e3c86
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e3c87
    PUSH EBX                            ; 005e3c8b
    CALL core_weapon.cpp_CWeapon_canPickup_FUN_005ee340 ; 005e3c8c
        ;   XREF to: 005ee340 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_canPickup_FUN_005ee340(CWeapon * this_ptr, CDemonActor * picker)
    ADD ESP,0x8                         ; 005e3c91
    POP EBX                             ; 005e3c94
    RET                                 ; 005e3c95

