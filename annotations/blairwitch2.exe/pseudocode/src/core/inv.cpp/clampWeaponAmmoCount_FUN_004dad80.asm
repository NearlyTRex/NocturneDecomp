; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004dad80(CDemonActor *actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; Referenced Globals:
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02653574]      ; 004dad80 | g_CTommyGunClassInfo.name_hash
        ;   Label: core_inv.cpp_clampWeaponAmmoCount_FUN_004dad80
    PUSH EDX                            ; 004dad86
    MOV ECX,dword ptr [ESP + 0x8]       ; 004dad87
    PUSH ECX                            ; 004dad8b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dad8c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dad91
    TEST EAX,EAX                        ; 004dad94
    JZ 0x004dada4                       ; 004dad96
        ;   XREF to: 004dada4 (CONDITIONAL_JUMP)  ; LAB_004dada4
    CMP dword ptr [EAX + 0x6c4],0xc8    ; 004dad98
    JG 0x004dada5                       ; 004dada2
        ;   XREF to: 004dada5 (CONDITIONAL_JUMP)  ; LAB_004dada5
    RET                                 ; 004dada4
        ;   Label: LAB_004dada4
    MOV dword ptr [EAX + 0x6c4],0xc8    ; 004dada5
        ;   Label: LAB_004dada5
    RET                                 ; 004dadaf

