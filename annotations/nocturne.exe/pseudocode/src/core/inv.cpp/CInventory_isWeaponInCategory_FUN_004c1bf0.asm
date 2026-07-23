; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004c2470 at 004c2672
;   core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 at 004c08ec
;
; Referenced Globals:
;   TerminatedCString s_CGun_00587411
;   string s_CShotgun_00587416
;   string s_CCrossbow_0058741f
;   string s_CTommyGun_00587429
;   string s_CElephantGun_00587433
;   string s_CFlameThrower_00587440
;   string s_CLightGun_0058744e
;   string s_CMelee_00587458
;   string s_CDynamite_0058745f
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1bf0
        ;   Label: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
    PUSH ESI                            ; 004c1bf1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c1bf2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c1bf6
    CMP ESI,0x5                         ; 004c1bfa
    JZ 0x004c1c28                       ; 004c1bfd
        ;   XREF to: 004c1c28 (CONDITIONAL_JUMP)  ; LAB_004c1c28
    TEST ESI,ESI                        ; 004c1bff
    JZ 0x004c1c30                       ; 004c1c01
        ;   XREF to: 004c1c30 (CONDITIONAL_JUMP)  ; LAB_004c1c30
    CMP ESI,0x1                         ; 004c1c03
        ;   Label: LAB_004c1c03
    JZ 0x004c1c4a                       ; 004c1c06
        ;   XREF to: 004c1c4a (CONDITIONAL_JUMP)  ; LAB_004c1c4a
    CMP ESI,0x2                         ; 004c1c08
    JZ 0x004c1ca6                       ; 004c1c0b
        ;   XREF to: 004c1ca6 (CONDITIONAL_JUMP)  ; LAB_004c1ca6
    CMP ESI,0x3                         ; 004c1c11
        ;   Label: LAB_004c1c11
    JZ 0x004c1cde                       ; 004c1c14
        ;   XREF to: 004c1cde (CONDITIONAL_JUMP)  ; LAB_004c1cde
    CMP ESI,0x4                         ; 004c1c1a
        ;   Label: LAB_004c1c1a
    JZ 0x004c1cfc                       ; 004c1c1d
        ;   XREF to: 004c1cfc (CONDITIONAL_JUMP)  ; LAB_004c1cfc
    XOR EAX,EAX                         ; 004c1c23
        ;   Label: LAB_004c1c23
    POP ESI                             ; 004c1c25
        ;   Label: LAB_004c1c25
    POP EBX                             ; 004c1c26
    RET                                 ; 004c1c27
    MOV EAX,0x1                         ; 004c1c28
        ;   Label: LAB_004c1c28
    POP ESI                             ; 004c1c2d
    POP EBX                             ; 004c1c2e
    RET                                 ; 004c1c2f
    PUSH 0x587411                       ; 004c1c30 | = "CGun"
        ;   Label: LAB_004c1c30
    PUSH EBX                            ; 004c1c35
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1c36
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1c3b
    TEST EAX,EAX                        ; 004c1c3e
    JZ 0x004c1c03                       ; 004c1c40
        ;   XREF to: 004c1c03 (CONDITIONAL_JUMP)  ; LAB_004c1c03
    MOV EAX,0x1                         ; 004c1c42
    POP ESI                             ; 004c1c47
    POP EBX                             ; 004c1c48
    RET                                 ; 004c1c49
    PUSH 0x587416                       ; 004c1c4a | = "CShotgun"
        ;   Label: LAB_004c1c4a
    PUSH EBX                            ; 004c1c4f
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1c50
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1c55
    TEST EAX,EAX                        ; 004c1c58
    JZ 0x004c1c61                       ; 004c1c5a
        ;   XREF to: 004c1c61 (CONDITIONAL_JUMP)  ; LAB_004c1c61
    MOV EAX,ESI                         ; 004c1c5c
    POP ESI                             ; 004c1c5e
    POP EBX                             ; 004c1c5f
    RET                                 ; 004c1c60
    PUSH 0x58741f                       ; 004c1c61 | = "CCrossbow"
        ;   Label: LAB_004c1c61
    PUSH EBX                            ; 004c1c66
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1c67
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1c6c
    TEST EAX,EAX                        ; 004c1c6f
    JZ 0x004c1c78                       ; 004c1c71
        ;   XREF to: 004c1c78 (CONDITIONAL_JUMP)  ; LAB_004c1c78
    MOV EAX,ESI                         ; 004c1c73
    POP ESI                             ; 004c1c75
    POP EBX                             ; 004c1c76
    RET                                 ; 004c1c77
    PUSH 0x587429                       ; 004c1c78 | = "CTommyGun"
        ;   Label: LAB_004c1c78
    PUSH EBX                            ; 004c1c7d
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1c7e
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1c83
    TEST EAX,EAX                        ; 004c1c86
    JZ 0x004c1c8f                       ; 004c1c88
        ;   XREF to: 004c1c8f (CONDITIONAL_JUMP)  ; LAB_004c1c8f
    MOV EAX,ESI                         ; 004c1c8a
    POP ESI                             ; 004c1c8c
    POP EBX                             ; 004c1c8d
    RET                                 ; 004c1c8e
    PUSH 0x587433                       ; 004c1c8f | = "CElephantGun"
        ;   Label: LAB_004c1c8f
    PUSH EBX                            ; 004c1c94
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1c95
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1c9a
    TEST EAX,EAX                        ; 004c1c9d
    JZ 0x004c1c25                       ; 004c1c9f
        ;   XREF to: 004c1c25 (CONDITIONAL_JUMP)  ; LAB_004c1c25
    MOV EAX,ESI                         ; 004c1ca1
    POP ESI                             ; 004c1ca3
    POP EBX                             ; 004c1ca4
    RET                                 ; 004c1ca5
    PUSH 0x587440                       ; 004c1ca6 | = "CFlameThrower"
        ;   Label: LAB_004c1ca6
    PUSH EBX                            ; 004c1cab
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1cac
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1cb1
    TEST EAX,EAX                        ; 004c1cb4
    JZ 0x004c1cc0                       ; 004c1cb6
        ;   XREF to: 004c1cc0 (CONDITIONAL_JUMP)  ; LAB_004c1cc0
    MOV EAX,0x1                         ; 004c1cb8
    POP ESI                             ; 004c1cbd
    POP EBX                             ; 004c1cbe
    RET                                 ; 004c1cbf
    PUSH 0x58744e                       ; 004c1cc0 | = "CLightGun"
        ;   Label: LAB_004c1cc0
    PUSH EBX                            ; 004c1cc5
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1cc6
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1ccb
    TEST EAX,EAX                        ; 004c1cce
    JZ 0x004c1c11                       ; 004c1cd0
        ;   XREF to: 004c1c11 (CONDITIONAL_JUMP)  ; LAB_004c1c11
    MOV EAX,0x1                         ; 004c1cd6
    POP ESI                             ; 004c1cdb
    POP EBX                             ; 004c1cdc
    RET                                 ; 004c1cdd
    PUSH 0x587458                       ; 004c1cde | = "CMelee"
        ;   Label: LAB_004c1cde
    PUSH EBX                            ; 004c1ce3
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1ce4
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1ce9
    TEST EAX,EAX                        ; 004c1cec
    JZ 0x004c1c1a                       ; 004c1cee
        ;   XREF to: 004c1c1a (CONDITIONAL_JUMP)  ; LAB_004c1c1a
    MOV EAX,0x1                         ; 004c1cf4
    POP ESI                             ; 004c1cf9
    POP EBX                             ; 004c1cfa
    RET                                 ; 004c1cfb
    PUSH 0x58745f                       ; 004c1cfc | = "CDynamite"
        ;   Label: LAB_004c1cfc
    PUSH EBX                            ; 004c1d01
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1d02
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1d07
    TEST EAX,EAX                        ; 004c1d0a
    JZ 0x004c1c23                       ; 004c1d0c
        ;   XREF to: 004c1c23 (CONDITIONAL_JUMP)  ; LAB_004c1c23
    MOV EAX,0x1                         ; 004c1d12
    POP ESI                             ; 004c1d17
    POP EBX                             ; 004c1d18
    RET                                 ; 004c1d19

