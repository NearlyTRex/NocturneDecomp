; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_0050eb50(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attack_flags
; SDamageInfo *    Stack[0xc]:4   damage_info
; CDemonActor *    Stack[0x10]:4   victim
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_0050ebe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050eb50
        ;   Label: core_melee.cpp_CMelee_playAttackHitEffects_FUN_0050eb50
    PUSH EDI                            ; 0050eb51
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050eb52
    MOV EDX,dword ptr [0x00823c4c]      ; 0050eb56 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0050eb5c
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050eb5d
    PUSH ECX                            ; 0050eb61
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0050eb62
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0050eb67
    TEST EAX,EAX                        ; 0050eb6a
    JNZ 0x0050eb78                      ; 0050eb6c
        ;   XREF to: 0050eb78 (CONDITIONAL_JUMP)  ; LAB_0050eb78
    CMP dword ptr [ESP + 0x18],0x0      ; 0050eb6e
    JNZ 0x0050ebbf                      ; 0050eb73
        ;   XREF to: 0050ebbf (CONDITIONAL_JUMP)  ; LAB_0050ebbf
    POP EDI                             ; 0050eb75
    POP EBX                             ; 0050eb76
    RET                                 ; 0050eb77
    MOV EDI,dword ptr [EAX + 0x2610]    ; 0050eb78
        ;   Label: LAB_0050eb78
    PUSH EDI                            ; 0050eb7e
    PUSH 0x14                           ; 0050eb7f
    PUSH EBX                            ; 0050eb81
    CALL core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_0050ebe0 ; 0050eb82
        ;   XREF to: 0050ebe0 (UNCONDITIONAL_CALL)  ; void core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_0050ebe0(CMelee * this_ptr, int blood_spurt_count, int blood_gore_type)
    ADD ESP,0xc                         ; 0050eb87
    CMP dword ptr [ESP + 0x10],0x1      ; 0050eb8a
    JNZ 0x0050eba8                      ; 0050eb8f
        ;   XREF to: 0050eba8 (CONDITIONAL_JUMP)  ; LAB_0050eba8
    LEA EAX,[EBX + 0x5a0]               ; 0050eb91
    PUSH EAX                            ; 0050eb97
    MOV EDX,dword ptr [EBX + 0x154]     ; 0050eb98
    PUSH EBX                            ; 0050eb9e
    CALL dword ptr [EDX + 0x24]         ; 0050eb9f
    ADD ESP,0x8                         ; 0050eba2
    POP EDI                             ; 0050eba5
    POP EBX                             ; 0050eba6
    RET                                 ; 0050eba7
    LEA EDX,[EBX + 0x604]               ; 0050eba8
        ;   Label: LAB_0050eba8
    PUSH EDX                            ; 0050ebae
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050ebaf
    PUSH EBX                            ; 0050ebb5
    CALL dword ptr [EAX + 0x24]         ; 0050ebb6
    ADD ESP,0x8                         ; 0050ebb9
    POP EDI                             ; 0050ebbc
    POP EBX                             ; 0050ebbd
    RET                                 ; 0050ebbe
    LEA EDX,[EBX + 0x668]               ; 0050ebbf
        ;   Label: LAB_0050ebbf
    PUSH EDX                            ; 0050ebc5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050ebc6
    PUSH EBX                            ; 0050ebcc
    CALL dword ptr [EAX + 0x24]         ; 0050ebcd
    ADD ESP,0x8                         ; 0050ebd0
    POP EDI                             ; 0050ebd3
    POP EBX                             ; 0050ebd4
    RET                                 ; 0050ebd5

