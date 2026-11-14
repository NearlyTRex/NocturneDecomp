; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; int              Stack[0xc]:4   fire_type
; int              Stack[0x10]:4   flame_type
; float            Stack[0x14]:4   flame_scale
; int              Stack[0x18]:4   include_hero
;
; XREF[8]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_004123d0 at 00412468
;   core_batman.cpp_CBatman_processDamage_FUN_00413f90 at 00414028
;   core_bride.cpp_CBride_processDamage_FUN_00424b10 at 00424b97
;   core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 at 00431a9e
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0047d480 at 0047d509
;   core_emitter.cpp_CEmitter_process_FUN_0049f310 at 0049fa27
;   core_fire.cpp_CGunFlame_init_FUN_004b2980 at 004b2ad5
;   core_flame.cpp_CFlame_process_FUN_004b7b90 at 004b7e84
;
; Referenced Globals:
;   TerminatedCString s_CHero_005d5a3b
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0
;   core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0056a8f0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004308a0
        ;   Label: core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0
    PUSH ESI                            ; 004308a1
    PUSH EDI                            ; 004308a2
    PUSH EBP                            ; 004308a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004308a4
    CMP dword ptr [EBX + 0x3120],0x32   ; 004308a8
    JGE 0x004308c9                      ; 004308af
        ;   XREF to: 004308c9 (CONDITIONAL_JUMP)  ; LAB_004308c9
    CMP dword ptr [ESP + 0x28],0x0      ; 004308b1
    JZ 0x004308ce                       ; 004308b6
        ;   XREF to: 004308ce (CONDITIONAL_JUMP)  ; LAB_004308ce
    LEA EDX,[EBX + 0x158]               ; 004308b8
        ;   Label: LAB_004308b8
    LEA EAX,[EBX + 0x24a8]              ; 004308be
    CMP byte ptr [EAX],0x0              ; 004308c4
    JNZ 0x004308e2                      ; 004308c7
        ;   XREF to: 004308e2 (CONDITIONAL_JUMP)  ; LAB_004308e2
    POP EBP                             ; 004308c9
        ;   Label: LAB_004308c9
    POP EDI                             ; 004308ca
    POP ESI                             ; 004308cb
    POP EBX                             ; 004308cc
    RET                                 ; 004308cd
    PUSH 0x5d5a3b                       ; 004308ce | = "CHero"
        ;   Label: LAB_004308ce
    PUSH EBX                            ; 004308d3
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004308d4
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004308d9
    TEST EAX,EAX                        ; 004308dc
    JNZ 0x004308c9                      ; 004308de
        ;   XREF to: 004308c9 (CONDITIONAL_JUMP)  ; LAB_004308c9
    JMP 0x004308b8                      ; 004308e0
        ;   XREF to: 004308b8 (UNCONDITIONAL_JUMP)  ; LAB_004308b8
    MOV ESI,dword ptr [ESP + 0x18]      ; 004308e2
        ;   Label: LAB_004308e2
    PUSH ESI                            ; 004308e6
    PUSH EDX                            ; 004308e7
    CALL core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0056a8f0 ; 004308e8
        ;   XREF to: 0056a8f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0056a8f0(CDeformableModelInstance * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 004308ed
    MOV ECX,EAX                         ; 004308f0
    MOV EDI,dword ptr [EBX + 0x3120]    ; 004308f2
    XOR EAX,EAX                         ; 004308f8
    TEST EDI,EDI                        ; 004308fa
    JLE 0x00430916                      ; 004308fc
        ;   XREF to: 00430916 (CONDITIONAL_JUMP)  ; LAB_00430916
    MOV EDX,EBX                         ; 004308fe
    CMP ECX,dword ptr [EDX + 0x3130]    ; 00430900
        ;   Label: LAB_00430900
    JZ 0x004308c9                       ; 00430906
        ;   XREF to: 004308c9 (CONDITIONAL_JUMP)  ; LAB_004308c9
    INC EAX                             ; 00430908
    MOV EBP,dword ptr [EBX + 0x3120]    ; 00430909
    ADD EDX,0x18                        ; 0043090f
    CMP EAX,EBP                         ; 00430912
    JL 0x00430900                       ; 00430914
        ;   XREF to: 00430900 (CONDITIONAL_JUMP)  ; LAB_00430900
    MOV EAX,dword ptr [ESP + 0x20]      ; 00430916
        ;   Label: LAB_00430916
    MOV dword ptr [EBX + 0x3124],EAX    ; 0043091a
    MOV EAX,dword ptr [ESP + 0x24]      ; 00430920
    PUSH ECX                            ; 00430924
    MOV dword ptr [EBX + 0x3128],EAX    ; 00430925
    LEA EAX,[EBX + 0x158]               ; 0043092b
    PUSH EAX                            ; 00430931
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00430932
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00430937
    PUSH EAX                            ; 0043093a
    PUSH EBX                            ; 0043093b
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0 ; 0043093c
        ;   XREF to: 0042f4d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 00430941
    MOV dword ptr [EBX + 0xfc],0x1      ; 00430944
    POP EBP                             ; 0043094e
    POP EDI                             ; 0043094f
    POP ESI                             ; 00430950
    POP EBX                             ; 00430951
    RET                                 ; 00430952

