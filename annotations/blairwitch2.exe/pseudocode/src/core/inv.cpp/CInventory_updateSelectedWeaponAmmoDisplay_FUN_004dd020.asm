; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(CInventory *this_ptr,int ammo_type)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ammo_type
;
; XREF[3]:
;   core_inv.cpp_CInventory_load_FUN_004dc4b0 at 004dc713
;   core_inv.cpp_FUN_004db9d0 at 004dbb3c
;   core_inv.cpp_FUN_004dbc60 at 004dbd63
;
; Called Functions:
;   core_actor.cpp_FUN_00408a50
;   core_ammo.cpp_FUN_0040e240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd020
        ;   Label: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dd021
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dd025
    SHL EAX,0x2                         ; 004dd02b
    ADD EAX,EBX                         ; 004dd02e
    MOV EDX,dword ptr [EAX + 0x610]     ; 004dd030
    TEST EDX,EDX                        ; 004dd036
    JNZ 0x004dd03c                      ; 004dd038
        ;   XREF to: 004dd03c (CONDITIONAL_JUMP)  ; LAB_004dd03c
    POP EBX                             ; 004dd03a
    RET                                 ; 004dd03b
    PUSH ESI                            ; 004dd03c
        ;   Label: LAB_004dd03c
    MOV EAX,EDX                         ; 004dd03d
    MOV EDX,dword ptr [EBX + 0x464]     ; 004dd03f
    MOV EAX,dword ptr [EAX + 0x6c4]     ; 004dd045
    MOV dword ptr [EDX + 0x470],EAX     ; 004dd04b
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dd051
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004dd057
    MOV EDX,dword ptr [EBX + 0x464]     ; 004dd05e
    MOV EAX,dword ptr [EAX + 0x6c8]     ; 004dd064
    MOV dword ptr [EDX + 0x474],EAX     ; 004dd06a
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dd070
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004dd076
    PUSH ECX                            ; 004dd07d
    CALL core_actor.cpp_FUN_00408a50    ; 004dd07e
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004dd083
    PUSH EAX                            ; 004dd086
    MOV ESI,dword ptr [EBX + 0x464]     ; 004dd087
    PUSH ESI                            ; 004dd08d
    CALL core_ammo.cpp_FUN_0040e240     ; 004dd08e
        ;   XREF to: 0040e240 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_FUN_0040e240(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004dd093
    POP ESI                             ; 004dd096
    POP EBX                             ; 004dd097
    RET                                 ; 004dd098

