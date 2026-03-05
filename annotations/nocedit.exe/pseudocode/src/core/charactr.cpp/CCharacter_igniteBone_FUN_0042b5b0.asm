; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0(CCharacter *this_ptr,CVector3f *position,int fire_type,float spread_rate,int allow_hero,int include_hero)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; int              Stack[0xc]:4   fire_type
; float            Stack[0x10]:4   spread_rate
; int              Stack[0x14]:4   allow_hero
; int              Stack[0x18]:4   include_hero
;
; XREF[8]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00416030 at 004160ac
;   core_batman.cpp_CBatman_processDamage_FUN_004179a0 at 00417a1c
;   core_bride.cpp_CBride_processDamage_FUN_00424830 at 00424899
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 at 0042c453
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00486070 at 004860d4
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a8526
;   core_fire.cpp_CGunFlame_init_FUN_004c4c00 at 004c4d2e
;   core_flame.cpp_CFlame_process_FUN_004c9c00 at 004c9ebd
;
; Referenced Globals:
;   TerminatedCString s_CHero_0061713e
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520
;   core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b5b0
        ;   Label: core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0
    PUSH ESI                            ; 0042b5b1
    PUSH EDI                            ; 0042b5b2
    PUSH EBP                            ; 0042b5b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0042b5b4
    CMP dword ptr [EBX + 0x2f10],0x32   ; 0042b5b8
    JGE 0x0042b5d9                      ; 0042b5bf
        ;   XREF to: 0042b5d9 (CONDITIONAL_JUMP)  ; LAB_0042b5d9
    CMP dword ptr [ESP + 0x28],0x0      ; 0042b5c1
    JZ 0x0042b5de                       ; 0042b5c6
        ;   XREF to: 0042b5de (CONDITIONAL_JUMP)  ; LAB_0042b5de
    LEA EDX,[EBX + 0x158]               ; 0042b5c8
        ;   Label: LAB_0042b5c8
    LEA EAX,[EBX + 0x23b8]              ; 0042b5ce
    CMP byte ptr [EAX],0x0              ; 0042b5d4
    JNZ 0x0042b5f2                      ; 0042b5d7
        ;   XREF to: 0042b5f2 (CONDITIONAL_JUMP)  ; LAB_0042b5f2
    POP EBP                             ; 0042b5d9
        ;   Label: LAB_0042b5d9
    POP EDI                             ; 0042b5da
    POP ESI                             ; 0042b5db
    POP EBX                             ; 0042b5dc
    RET                                 ; 0042b5dd
    PUSH 0x61713e                       ; 0042b5de | = "CHero"
        ;   Label: LAB_0042b5de
    PUSH EBX                            ; 0042b5e3
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0042b5e4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0042b5e9
    TEST EAX,EAX                        ; 0042b5ec
    JNZ 0x0042b5d9                      ; 0042b5ee
        ;   XREF to: 0042b5d9 (CONDITIONAL_JUMP)  ; LAB_0042b5d9
    JMP 0x0042b5c8                      ; 0042b5f0
        ;   XREF to: 0042b5c8 (UNCONDITIONAL_JUMP)  ; LAB_0042b5c8
    MOV ESI,dword ptr [ESP + 0x18]      ; 0042b5f2
        ;   Label: LAB_0042b5f2
    PUSH ESI                            ; 0042b5f6
    PUSH EDX                            ; 0042b5f7
    CALL core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160 ; 0042b5f8
        ;   XREF to: 005a1160 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160(CDeformableModelInstance * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0042b5fd
    MOV ECX,EAX                         ; 0042b600
    MOV EDI,dword ptr [EBX + 0x2f10]    ; 0042b602
    XOR EAX,EAX                         ; 0042b608
    TEST EDI,EDI                        ; 0042b60a
    JLE 0x0042b626                      ; 0042b60c
        ;   XREF to: 0042b626 (CONDITIONAL_JUMP)  ; LAB_0042b626
    MOV EDX,EBX                         ; 0042b60e
    CMP ECX,dword ptr [EDX + 0x2f20]    ; 0042b610
        ;   Label: LAB_0042b610
    JZ 0x0042b5d9                       ; 0042b616
        ;   XREF to: 0042b5d9 (CONDITIONAL_JUMP)  ; LAB_0042b5d9
    INC EAX                             ; 0042b618
    MOV EBP,dword ptr [EBX + 0x2f10]    ; 0042b619
    ADD EDX,0x18                        ; 0042b61f
    CMP EAX,EBP                         ; 0042b622
    JL 0x0042b610                       ; 0042b624
        ;   XREF to: 0042b610 (CONDITIONAL_JUMP)  ; LAB_0042b610
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042b626
        ;   Label: LAB_0042b626
    MOV dword ptr [EBX + 0x2f14],EAX    ; 0042b62a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042b630
    PUSH ECX                            ; 0042b634
    MOV dword ptr [EBX + 0x2f18],EAX    ; 0042b635
    LEA EAX,[EBX + 0x158]               ; 0042b63b
    PUSH EAX                            ; 0042b641
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042b642
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042b647
    PUSH EAX                            ; 0042b64a
    PUSH EBX                            ; 0042b64b
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520 ; 0042b64c
        ;   XREF to: 0042a520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 0042b651
    MOV dword ptr [EBX + 0xfc],0x1      ; 0042b654
    POP EBP                             ; 0042b65e
    POP EDI                             ; 0042b65f
    POP ESI                             ; 0042b660
    POP EBX                             ; 0042b661
    RET                                 ; 0042b662

