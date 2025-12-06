; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_clampWeaponAmmoCount_FUN_004fd5d0(CDemonActor * actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; Referenced Globals:
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f873dc]      ; 004fd5d0 | g_CTommyGunClassInfo.name_hash
        ;   Label: core_inv.cpp_clampWeaponAmmoCount_FUN_004fd5d0
    PUSH EDX                            ; 004fd5d6
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fd5d7
    PUSH ECX                            ; 004fd5db
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fd5dc | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fd5e1
    TEST EAX,EAX                        ; 004fd5e4
    JZ 0x004fd5f4                       ; 004fd5e6 | LAB_004fd5f4
        ;   XREF to: 004fd5f4 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x568],0xc8    ; 004fd5e8
    JG 0x004fd5f5                       ; 004fd5f2 | LAB_004fd5f5
        ;   XREF to: 004fd5f5 (CONDITIONAL_JUMP)
    RET                                 ; 004fd5f4
        ;   Label: LAB_004fd5f4
    MOV dword ptr [EAX + 0x568],0xc8    ; 004fd5f5
        ;   Label: LAB_004fd5f5
    RET                                 ; 004fd5ff

