; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004f7660(CDemonActor *actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; Referenced Globals:
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c8ad44]      ; 004f7660 | g_CTommyGunClassInfo.name_hash
        ;   Label: core_inv.cpp_clampWeaponAmmoCount_FUN_004f7660
    PUSH EDX                            ; 004f7666
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f7667
    PUSH ECX                            ; 004f766b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f766c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004f7671
    TEST EAX,EAX                        ; 004f7674
    JZ 0x004f7684                       ; 004f7676
        ;   XREF to: 004f7684 (CONDITIONAL_JUMP)  ; LAB_004f7684
    CMP dword ptr [EAX + 0x568],0xc8    ; 004f7678
    JG 0x004f7685                       ; 004f7682
        ;   XREF to: 004f7685 (CONDITIONAL_JUMP)  ; LAB_004f7685
    RET                                 ; 004f7684
        ;   Label: LAB_004f7684
    MOV dword ptr [EAX + 0x568],0xc8    ; 004f7685
        ;   Label: LAB_004f7685
    RET                                 ; 004f768f

