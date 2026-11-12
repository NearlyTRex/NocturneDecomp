; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; XREF[30]:
;   core_armour.cpp_CArmour_processDamage_FUN_0040ec40 at 0040ec7a
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_004123d0 at 0041250f
;   core_batman.cpp_CBatman_processDamage_FUN_00413f90 at 004140cf
;   core_beast.cpp_CBeast_processDamage_FUN_00414850 at 00414861
;   core_biggs.cpp_CBiggs_processDamage_FUN_00414fc0 at 0041504a
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d330 at 0041d379
;   core_bride.cpp_CBride_processDamage_FUN_00424b10 at 00424c79
;   core_bugs.cpp_CBugs_processDamage_FUN_00425940 at 00425958
;   core_carved.cpp_CCarved_processDamage_FUN_0042b850 at 0042b9a5
;   core_construc.cpp_CConstruct_processDamage_FUN_00447090 at 00447147
;   ... and 20 more
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005dcb90+2
;   undefined4 DAT_0061b4d0
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_charactr.cpp_CCharacter_processDamage_FUN_004319e0
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0f00
        ;   Label: core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
    PUSH ESI                            ; 004a0f01
    PUSH EDI                            ; 004a0f02
    PUSH EBP                            ; 004a0f03
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a0f04
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a0f08
    CMP dword ptr [EBX + 0x27b0],0x0    ; 004a0f0c
    JNZ 0x004a0f40                      ; 004a0f13
        ;   XREF to: 004a0f40 (CONDITIONAL_JUMP)  ; LAB_004a0f40
    PUSH EBX                            ; 004a0f15
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a0f16
    CALL dword ptr [EAX + 0xf8]         ; 004a0f1c
    ADD ESP,0x4                         ; 004a0f22
    PUSH ESI                            ; 004a0f25
    PUSH EBX                            ; 004a0f26
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 ; 004a0f27
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_004319e0(CCharacter * this_ptr, SDamageInfo * damage_info)
    FLD float ptr [ESI + 0x4]           ; 004a0f2c
    FLDZ                                ; 004a0f2f
    ADD ESP,0x8                         ; 004a0f31
    FCOMPP                              ; 004a0f34
    FNSTSW AX                           ; 004a0f36
    SAHF                                ; 004a0f38
    JC 0x004a0f59                       ; 004a0f39
        ;   XREF to: 004a0f59 (CONDITIONAL_JUMP)  ; LAB_004a0f59
    POP EBP                             ; 004a0f3b
        ;   Label: LAB_004a0f3b
    POP EDI                             ; 004a0f3c
    POP ESI                             ; 004a0f3d
    POP EBX                             ; 004a0f3e
    RET                                 ; 004a0f3f
    PUSH 0x5dcb92                       ; 004a0f40 | s_ShotInvulnerable_005dcb90+2
        ;   Label: LAB_004a0f40
    MOV EDX,dword ptr [0x0061b4d0]      ; 004a0f45 | DAT_0061b4d0
    PUSH EDX                            ; 004a0f4b
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004a0f4c
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004a0f51
    POP EBP                             ; 004a0f54
    POP EDI                             ; 004a0f55
    POP ESI                             ; 004a0f56
    POP EBX                             ; 004a0f57
    RET                                 ; 004a0f58
    MOV ECX,dword ptr [0x007c637c]      ; 004a0f59 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_004a0f59
    PUSH ECX                            ; 004a0f5f
    MOV EDI,dword ptr [ESI + 0x38]      ; 004a0f60
    PUSH EDI                            ; 004a0f63
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004a0f64
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004a0f69
    MOV EDX,EAX                         ; 004a0f6c
    TEST EAX,EAX                        ; 004a0f6e
    JNZ 0x004a0f87                      ; 004a0f70
        ;   XREF to: 004a0f87 (CONDITIONAL_JUMP)  ; LAB_004a0f87
    MOV EBP,dword ptr [0x007c637c]      ; 004a0f72 | g_CCharacterClassInfo.name_hash
    PUSH EBP                            ; 004a0f78
    MOV EAX,dword ptr [ESI + 0x34]      ; 004a0f79
    PUSH EAX                            ; 004a0f7c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004a0f7d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004a0f82
    MOV EDX,EAX                         ; 004a0f85
    TEST EDX,EDX                        ; 004a0f87
        ;   Label: LAB_004a0f87
    JZ 0x004a0f3b                       ; 004a0f89
        ;   XREF to: 004a0f3b (CONDITIONAL_JUMP)  ; LAB_004a0f3b
    MOV dword ptr [EBX + 0xc1ec],0x41700000 ; 004a0f8b
    MOV dword ptr [EBX + 0xc1dc],0x1    ; 004a0f95
    MOV dword ptr [EBX + 0xc1e8],EDX    ; 004a0f9f
    POP EBP                             ; 004a0fa5
    POP EDI                             ; 004a0fa6
    POP ESI                             ; 004a0fa7
    POP EBX                             ; 004a0fa8
    RET                                 ; 004a0fa9

