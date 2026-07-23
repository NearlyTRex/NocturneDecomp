; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_archive_FUN_00554170(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[2]:
;   core_melee.cpp_CMelee_archive_FUN_004cedb0 at 004cedb6
;   core_turret.cpp_CTurret_archive_FUN_0054a000 at 0054a006
;
; Referenced Globals:
;   TerminatedCString s_modelName_00597ba1
;   TerminatedCString s_carriedByActor_00597bab
;   TerminatedCString s_weaponState_00597bba
;   TerminatedCString s_ammoCount_00597bc6
;   TerminatedCString s_ammoType_00597bd0
;   TerminatedCString s_descriptiveName_00597bd9
;   TerminatedCString s_simTimer_00597be9
;   undefined4 DAT_005c1590
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveLocalizedString_FUN_0040c7f0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554170
        ;   Label: core_weapon.cpp_CWeapon_archive_FUN_00554170
    SUB ESP,0x100                       ; 00554171
    MOV EBX,dword ptr [ESP + 0x108]     ; 00554177
    PUSH EBX                            ; 0055417e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0055417f
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 00554184
    PUSH 0x597ba1                       ; 00554187 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 0055418c
    PUSH EAX                            ; 00554192
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 00554193
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    MOV EDX,dword ptr [0x005c1590]      ; 00554198 | DAT_005c1590
    ADD ESP,0x8                         ; 0055419e
    CMP EDX,0x3                         ; 005541a1
    JGE 0x00554217                      ; 005541a4
        ;   XREF to: 00554217 (CONDITIONAL_JUMP)  ; LAB_00554217
    CMP dword ptr [0x005c1590],0x4      ; 005541a6 | DAT_005c1590
        ;   Label: LAB_005541a6
    JL 0x005541eb                       ; 005541ad
        ;   XREF to: 005541eb (CONDITIONAL_JUMP)  ; LAB_005541eb
    PUSH 0x597bba                       ; 005541af | = "weaponState"
    LEA EAX,[EBX + 0x2cc]               ; 005541b4
    PUSH EAX                            ; 005541ba
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 005541bb
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 005541c0
    PUSH 0x597bc6                       ; 005541c3 | = "ammoCount"
    LEA EAX,[EBX + 0x560]               ; 005541c8
    PUSH EAX                            ; 005541ce
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 005541cf
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 005541d4
    PUSH 0x597bd0                       ; 005541d7 | = "ammoType"
    LEA EAX,[EBX + 0x564]               ; 005541dc
    PUSH EAX                            ; 005541e2
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 005541e3
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 005541e8
    CMP dword ptr [0x005c1590],0x5      ; 005541eb | DAT_005c1590
        ;   Label: LAB_005541eb
    JNZ 0x00554206                      ; 005541f2
        ;   XREF to: 00554206 (CONDITIONAL_JUMP)  ; LAB_00554206
    PUSH 0x597bd9                       ; 005541f4 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 005541f9
    PUSH EAX                            ; 005541fd
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040c7f0 ; 005541fe
        ;   XREF to: 0040c7f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveLocalizedString_FUN_0040c7f0()
    ADD ESP,0x8                         ; 00554203
    CMP dword ptr [0x005c1590],0x7      ; 00554206 | DAT_005c1590
        ;   Label: LAB_00554206
    JGE 0x00554230                      ; 0055420d
        ;   XREF to: 00554230 (CONDITIONAL_JUMP)  ; LAB_00554230
    ADD ESP,0x100                       ; 0055420f
    POP EBX                             ; 00554215
    RET                                 ; 00554216
    PUSH 0x597bab                       ; 00554217 | = "carriedByActor"
        ;   Label: LAB_00554217
    LEA EAX,[EBX + 0x2fc]               ; 0055421c
    PUSH EAX                            ; 00554222
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00554223
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00554228
    JMP 0x005541a6                      ; 0055422b
        ;   XREF to: 005541a6 (UNCONDITIONAL_JUMP)  ; LAB_005541a6
    PUSH 0x597be9                       ; 00554230 | = "simTimer"
        ;   Label: LAB_00554230
    ADD EBX,0x568                       ; 00554235
    PUSH EBX                            ; 0055423b
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0055423c
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00554241
    ADD ESP,0x100                       ; 00554244
    POP EBX                             ; 0055424a
    RET                                 ; 0055424b

