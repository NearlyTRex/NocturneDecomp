; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; XREF[24]:
;   core_armour.cpp_CArmour_processDamage_FUN_00412400 at 0041242f
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00416030 at 00416203
;   core_batman.cpp_CBatman_processDamage_FUN_004179a0 at 00417b73
;   core_beast.cpp_CBeast_processDamage_FUN_00418380 at 00418391
;   core_biggs.cpp_CBiggs_processDamage_FUN_00418b50 at 00418bf8
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d4d0 at 0041d519
;   core_bride.cpp_CBride_processDamage_FUN_00424830 at 00424957
;   core_bugs.cpp_CBugs_processDamage_FUN_00425640 at 00425651
;   core_cow.cpp_CZombieCow_processDamage_FUN_00444b40 at 00444be8
;   core_dog.cpp_CZombieDog_processDamage_FUN_0047f820 at 0047f8c4
;   ... and 14 more
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9f10
        ;   Label: core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
    PUSH ESI                            ; 004a9f11
    PUSH EBP                            ; 004a9f12
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a9f13
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a9f17
    PUSH EBX                            ; 004a9f1b
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a9f1c
    CALL dword ptr [EAX + 0x10c]        ; 004a9f22
    ADD ESP,0x4                         ; 004a9f28
    PUSH ESI                            ; 004a9f2b
    PUSH EBX                            ; 004a9f2c
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 004a9f2d
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    FLD float ptr [ESI + 0x4]           ; 004a9f32
    FLDZ                                ; 004a9f35
    ADD ESP,0x8                         ; 004a9f37
    FCOMPP                              ; 004a9f3a
    FNSTSW AX                           ; 004a9f3c
    SAHF                                ; 004a9f3e
    JC 0x004a9f45                       ; 004a9f3f
        ;   XREF to: 004a9f45 (CONDITIONAL_JUMP)  ; LAB_004a9f45
    POP EBP                             ; 004a9f41
        ;   Label: LAB_004a9f41
    POP ESI                             ; 004a9f42
    POP EBX                             ; 004a9f43
    RET                                 ; 004a9f44
    MOV EDX,dword ptr [0x00823c4c]      ; 004a9f45 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_004a9f45
    PUSH EDX                            ; 004a9f4b
    MOV ECX,dword ptr [ESI + 0x38]      ; 004a9f4c
    PUSH ECX                            ; 004a9f4f
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004a9f50
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a9f55
    MOV EDX,EAX                         ; 004a9f58
    TEST EAX,EAX                        ; 004a9f5a
    JNZ 0x004a9f75                      ; 004a9f5c
        ;   XREF to: 004a9f75 (CONDITIONAL_JUMP)  ; LAB_004a9f75
    PUSH EDI                            ; 004a9f5e
    MOV EDI,dword ptr [0x00823c4c]      ; 004a9f5f | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 004a9f65
    MOV EBP,dword ptr [ESI + 0x34]      ; 004a9f66
    PUSH EBP                            ; 004a9f69
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004a9f6a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a9f6f
    MOV EDX,EAX                         ; 004a9f72
    POP EDI                             ; 004a9f74
    TEST EDX,EDX                        ; 004a9f75
        ;   Label: LAB_004a9f75
    JZ 0x004a9f41                       ; 004a9f77
        ;   XREF to: 004a9f41 (CONDITIONAL_JUMP)  ; LAB_004a9f41
    MOV dword ptr [EBX + 0xbe40],0x41700000 ; 004a9f79
    MOV dword ptr [EBX + 0xbe30],0x1    ; 004a9f83
    MOV dword ptr [EBX + 0xbe3c],EDX    ; 004a9f8d
    POP EBP                             ; 004a9f93
    POP ESI                             ; 004a9f94
    POP EBX                             ; 004a9f95
    RET                                 ; 004a9f96

