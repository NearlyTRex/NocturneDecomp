; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70(CInventory * this_ptr, CDemonActor * weapon_actor, int weapon_category)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   weapon_actor
; int              Stack[0xc]:4   weapon_category
;
; XREF[2]:
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00501282
;   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 at 004febac
;
; Referenced Globals:
;   TerminatedCString s_CGun_00630ab2
;   TerminatedCString s_CShotgun_00630ab7
;   TerminatedCString s_CCrossbow_00630ac0
;   TerminatedCString s_CTommyGun_00630aca
;   TerminatedCString s_CElephantGun_00630ad4
;   TerminatedCString s_CFlameThrower_00630ae1
;   TerminatedCString s_CLightGun_00630aef
;   TerminatedCString s_CMelee_00630af9
;   TerminatedCString s_CDynamite_00630b00
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffe70
        ;   Label: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
    PUSH ESI                            ; 004ffe71
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ffe72
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ffe76
    CMP ESI,0x5                         ; 004ffe7a
    JZ 0x004ffea8                       ; 004ffe7d | LAB_004ffea8
        ;   XREF to: 004ffea8 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 004ffe7f
    JZ 0x004ffeb0                       ; 004ffe81 | LAB_004ffeb0
        ;   XREF to: 004ffeb0 (CONDITIONAL_JUMP)
    CMP ESI,0x1                         ; 004ffe83
        ;   Label: LAB_004ffe83
    JZ 0x004ffeca                       ; 004ffe86 | LAB_004ffeca
        ;   XREF to: 004ffeca (CONDITIONAL_JUMP)
    CMP ESI,0x2                         ; 004ffe88
    JZ 0x004fff26                       ; 004ffe8b | LAB_004fff26
        ;   XREF to: 004fff26 (CONDITIONAL_JUMP)
    CMP ESI,0x3                         ; 004ffe91
        ;   Label: LAB_004ffe91
    JZ 0x004fff5e                       ; 004ffe94 | LAB_004fff5e
        ;   XREF to: 004fff5e (CONDITIONAL_JUMP)
    CMP ESI,0x4                         ; 004ffe9a
        ;   Label: LAB_004ffe9a
    JZ 0x004fff7c                       ; 004ffe9d | LAB_004fff7c
        ;   XREF to: 004fff7c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004ffea3
        ;   Label: LAB_004ffea3
    POP ESI                             ; 004ffea5
        ;   Label: LAB_004ffea5
    POP EBX                             ; 004ffea6
    RET                                 ; 004ffea7
    MOV EAX,0x1                         ; 004ffea8
        ;   Label: LAB_004ffea8
    POP ESI                             ; 004ffead
    POP EBX                             ; 004ffeae
    RET                                 ; 004ffeaf
    PUSH 0x630ab2                       ; 004ffeb0 | = "CGun" | s_CGun_00630ab2 = CGun
        ;   Label: LAB_004ffeb0
    PUSH EBX                            ; 004ffeb5
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ffeb6 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004ffebb
    TEST EAX,EAX                        ; 004ffebe
    JZ 0x004ffe83                       ; 004ffec0 | LAB_004ffe83
        ;   XREF to: 004ffe83 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004ffec2
    POP ESI                             ; 004ffec7
    POP EBX                             ; 004ffec8
    RET                                 ; 004ffec9
    PUSH 0x630ab7                       ; 004ffeca | = "CShotgun" | s_CShotgun_00630ab7 = CShotgun
        ;   Label: LAB_004ffeca
    PUSH EBX                            ; 004ffecf
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ffed0 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004ffed5
    TEST EAX,EAX                        ; 004ffed8
    JZ 0x004ffee1                       ; 004ffeda | LAB_004ffee1
        ;   XREF to: 004ffee1 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 004ffedc
    POP ESI                             ; 004ffede
    POP EBX                             ; 004ffedf
    RET                                 ; 004ffee0
    PUSH 0x630ac0                       ; 004ffee1 | = "CCrossbow" | s_CCrossbow_00630ac0 = CCrossbow
        ;   Label: LAB_004ffee1
    PUSH EBX                            ; 004ffee6
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ffee7 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004ffeec
    TEST EAX,EAX                        ; 004ffeef
    JZ 0x004ffef8                       ; 004ffef1 | LAB_004ffef8
        ;   XREF to: 004ffef8 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 004ffef3
    POP ESI                             ; 004ffef5
    POP EBX                             ; 004ffef6
    RET                                 ; 004ffef7
    PUSH 0x630aca                       ; 004ffef8 | = "CTommyGun" | s_CTommyGun_00630aca = CTommyGun
        ;   Label: LAB_004ffef8
    PUSH EBX                            ; 004ffefd
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ffefe | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fff03
    TEST EAX,EAX                        ; 004fff06
    JZ 0x004fff0f                       ; 004fff08 | LAB_004fff0f
        ;   XREF to: 004fff0f (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 004fff0a
    POP ESI                             ; 004fff0c
    POP EBX                             ; 004fff0d
    RET                                 ; 004fff0e
    PUSH 0x630ad4                       ; 004fff0f | = "CElephantGun" | s_CElephantGun_00630ad4 = CElephantGun
        ;   Label: LAB_004fff0f
    PUSH EBX                            ; 004fff14
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fff15 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fff1a
    TEST EAX,EAX                        ; 004fff1d
    JZ 0x004ffea5                       ; 004fff1f | LAB_004ffea5
        ;   XREF to: 004ffea5 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 004fff21
    POP ESI                             ; 004fff23
    POP EBX                             ; 004fff24
    RET                                 ; 004fff25
    PUSH 0x630ae1                       ; 004fff26 | = "CFlameThrower" | s_CFlameThrower_00630ae1 = CFlameThrower
        ;   Label: LAB_004fff26
    PUSH EBX                            ; 004fff2b
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fff2c | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fff31
    TEST EAX,EAX                        ; 004fff34
    JZ 0x004fff40                       ; 004fff36 | LAB_004fff40
        ;   XREF to: 004fff40 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004fff38
    POP ESI                             ; 004fff3d
    POP EBX                             ; 004fff3e
    RET                                 ; 004fff3f
    PUSH 0x630aef                       ; 004fff40 | = "CLightGun" | s_CLightGun_00630aef = CLightGun
        ;   Label: LAB_004fff40
    PUSH EBX                            ; 004fff45
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fff46 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fff4b
    TEST EAX,EAX                        ; 004fff4e
    JZ 0x004ffe91                       ; 004fff50 | LAB_004ffe91
        ;   XREF to: 004ffe91 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004fff56
    POP ESI                             ; 004fff5b
    POP EBX                             ; 004fff5c
    RET                                 ; 004fff5d
    PUSH 0x630af9                       ; 004fff5e | = "CMelee" | s_CMelee_00630af9 = CMelee
        ;   Label: LAB_004fff5e
    PUSH EBX                            ; 004fff63
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fff64 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fff69
    TEST EAX,EAX                        ; 004fff6c
    JZ 0x004ffe9a                       ; 004fff6e | LAB_004ffe9a
        ;   XREF to: 004ffe9a (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004fff74
    POP ESI                             ; 004fff79
    POP EBX                             ; 004fff7a
    RET                                 ; 004fff7b
    PUSH 0x630b00                       ; 004fff7c | = "CDynamite" | s_CDynamite_00630b00 = CDynamite
        ;   Label: LAB_004fff7c
    PUSH EBX                            ; 004fff81
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fff82 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fff87
    TEST EAX,EAX                        ; 004fff8a
    JZ 0x004ffea3                       ; 004fff8c | LAB_004ffea3
        ;   XREF to: 004ffea3 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004fff92
    POP ESI                             ; 004fff97
    POP EBX                             ; 004fff98
    RET                                 ; 004fff99

