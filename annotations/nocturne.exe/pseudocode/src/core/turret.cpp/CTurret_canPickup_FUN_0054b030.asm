; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_canPickup_FUN_0054b030(CTurret *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.big_hat_cheat
;
; Called Functions:
;   core_weapon.cpp_CWeapon_canPickup_FUN_00554260
;
; *****************************************************************************

section .text

    MOV EAX,[0x005b9354]                ; 0054b030 | g_CGame_PTR_005b9354
        ;   Label: core_turret.cpp_CTurret_canPickup_FUN_0054b030
    CMP dword ptr [EAX + 0x204],0x0     ; 0054b035 | g_CGame_01c775ec.big_hat_cheat
    JNZ 0x0054b041                      ; 0054b03c
        ;   XREF to: 0054b041 (CONDITIONAL_JUMP)  ; LAB_0054b041
    XOR EAX,EAX                         ; 0054b03e
    RET                                 ; 0054b040
    PUSH EBX                            ; 0054b041
        ;   Label: LAB_0054b041
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054b042
    PUSH ECX                            ; 0054b046
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054b047
    PUSH EBX                            ; 0054b04b
    CALL core_weapon.cpp_CWeapon_canPickup_FUN_00554260 ; 0054b04c
        ;   XREF to: 00554260 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_canPickup_FUN_00554260(CWeapon * this_ptr, CDemonActor * picker)
    ADD ESP,0x8                         ; 0054b051
    POP EBX                             ; 0054b054
    RET                                 ; 0054b055

