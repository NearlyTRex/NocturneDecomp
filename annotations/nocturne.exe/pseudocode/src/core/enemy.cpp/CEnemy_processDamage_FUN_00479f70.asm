; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(CEnemy *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; XREF[24]:
;   core_armour.cpp_FUN_0040fbc0 at 0040fbef
;   core_batcreat.cpp_FUN_00413040 at 00413157
;   core_batman.cpp_FUN_00414930 at 00414a47
;   core_beast.cpp_FUN_004151b0 at 004151c1
;   core_biggs.cpp_CBiggs_processDamage_FUN_00415900 at 0041596a
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419f40 at 00419f89
;   core_bride.cpp_CBride_processDamage_FUN_00420c40 at 00420d67
;   core_bugs.cpp_FUN_004219d0 at 004219e1
;   core_cow.cpp_CZombieCow_processDamage_FUN_0043c5e0 at 0043c63c
;   core_dog.cpp_CZombieDog_processDamage_FUN_00454e30 at 00454e85
;   ... and 14 more
;
; Referenced Globals:
;   undefined4 g_CCharacterActorType_00765a60.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479f70
        ;   Label: core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
    PUSH ESI                            ; 00479f71
    PUSH EBP                            ; 00479f72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00479f73
    MOV ESI,dword ptr [ESP + 0x14]      ; 00479f77
    PUSH EBX                            ; 00479f7b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00479f7c
    CALL dword ptr [EAX + 0xf0]         ; 00479f82
    ADD ESP,0x4                         ; 00479f88
    PUSH ESI                            ; 00479f8b
    PUSH EBX                            ; 00479f8c
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 00479f8d
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00428510(CCharacter * this_ptr, SDamageInfo * damage_info)
    FLD float ptr [ESI + 0x4]           ; 00479f92
    FLDZ                                ; 00479f95
    ADD ESP,0x8                         ; 00479f97
    FCOMPP                              ; 00479f9a
    FNSTSW AX                           ; 00479f9c
    SAHF                                ; 00479f9e
    JC 0x00479fa5                       ; 00479f9f
        ;   XREF to: 00479fa5 (CONDITIONAL_JUMP)  ; LAB_00479fa5
    POP EBP                             ; 00479fa1
        ;   Label: LAB_00479fa1
    POP ESI                             ; 00479fa2
    POP EBX                             ; 00479fa3
    RET                                 ; 00479fa4
    MOV EDX,dword ptr [0x00765a98]      ; 00479fa5 | g_CCharacterActorType_00765a60.name_hash
        ;   Label: LAB_00479fa5
    PUSH EDX                            ; 00479fab
    MOV ECX,dword ptr [ESI + 0x38]      ; 00479fac
    PUSH ECX                            ; 00479faf
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00479fb0
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00479fb5
    MOV EDX,EAX                         ; 00479fb8
    TEST EAX,EAX                        ; 00479fba
    JNZ 0x00479fd5                      ; 00479fbc
        ;   XREF to: 00479fd5 (CONDITIONAL_JUMP)  ; LAB_00479fd5
    PUSH EDI                            ; 00479fbe
    MOV EDI,dword ptr [0x00765a98]      ; 00479fbf | g_CCharacterActorType_00765a60.name_hash
    PUSH EDI                            ; 00479fc5
    MOV EBP,dword ptr [ESI + 0x34]      ; 00479fc6
    PUSH EBP                            ; 00479fc9
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00479fca
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00479fcf
    MOV EDX,EAX                         ; 00479fd2
    POP EDI                             ; 00479fd4
    TEST EDX,EDX                        ; 00479fd5
        ;   Label: LAB_00479fd5
    JZ 0x00479fa1                       ; 00479fd7
        ;   XREF to: 00479fa1 (CONDITIONAL_JUMP)  ; LAB_00479fa1
    MOV dword ptr [EBX + 0xbca8],0x41700000 ; 00479fd9
    MOV dword ptr [EBX + 0xbc98],0x1    ; 00479fe3
    MOV dword ptr [EBX + 0xbca4],EDX    ; 00479fed
    POP EBP                             ; 00479ff3
    POP ESI                             ; 00479ff4
    POP EBX                             ; 00479ff5
    RET                                 ; 00479ff6

