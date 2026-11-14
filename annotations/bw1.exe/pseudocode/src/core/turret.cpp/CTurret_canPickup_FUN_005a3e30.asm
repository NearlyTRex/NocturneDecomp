; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_canPickup_FUN_005a3e30(CTurret *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;
; Called Functions:
;   core_weapon.cpp_CWeapon_canPickup_FUN_005ad9a0
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061d95c]                ; 005a3e30 | g_CGamePtr
        ;   Label: core_turret.cpp_CTurret_canPickup_FUN_005a3e30
    CMP dword ptr [EAX + 0x220],0x0     ; 005a3e35
    JNZ 0x005a3e41                      ; 005a3e3c
        ;   XREF to: 005a3e41 (CONDITIONAL_JUMP)  ; LAB_005a3e41
    XOR EAX,EAX                         ; 005a3e3e
    RET                                 ; 005a3e40
    PUSH EBX                            ; 005a3e41
        ;   Label: LAB_005a3e41
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a3e42
    PUSH ECX                            ; 005a3e46
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3e47
    PUSH EBX                            ; 005a3e4b
    CALL core_weapon.cpp_CWeapon_canPickup_FUN_005ad9a0 ; 005a3e4c
        ;   XREF to: 005ad9a0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_canPickup_FUN_005ad9a0(CWeapon * this_ptr, CDemonActor * picker)
    ADD ESP,0x8                         ; 005a3e51
    POP EBX                             ; 005a3e54
    RET                                 ; 005a3e55

