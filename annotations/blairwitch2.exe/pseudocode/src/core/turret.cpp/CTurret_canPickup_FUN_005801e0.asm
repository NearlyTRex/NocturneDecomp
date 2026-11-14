; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_canPickup_FUN_005801e0(CTurret *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;
; Called Functions:
;   core_weapon.cpp_CWeapon_canPickup_FUN_00589e50
;
; *****************************************************************************

section .text

    MOV EAX,[0x00616494]                ; 005801e0 | g_CGamePtr
        ;   Label: core_turret.cpp_CTurret_canPickup_FUN_005801e0
    CMP dword ptr [EAX + 0x220],0x0     ; 005801e5
    JNZ 0x005801f1                      ; 005801ec
        ;   XREF to: 005801f1 (CONDITIONAL_JUMP)  ; LAB_005801f1
    XOR EAX,EAX                         ; 005801ee
    RET                                 ; 005801f0
    PUSH EBX                            ; 005801f1
        ;   Label: LAB_005801f1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005801f2
    PUSH ECX                            ; 005801f6
    MOV EBX,dword ptr [ESP + 0xc]       ; 005801f7
    PUSH EBX                            ; 005801fb
    CALL core_weapon.cpp_CWeapon_canPickup_FUN_00589e50 ; 005801fc
        ;   XREF to: 00589e50 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_canPickup_FUN_00589e50(CWeapon * this_ptr, CDemonActor * picker)
    ADD ESP,0x8                         ; 00580201
    POP EBX                             ; 00580204
    RET                                 ; 00580205

