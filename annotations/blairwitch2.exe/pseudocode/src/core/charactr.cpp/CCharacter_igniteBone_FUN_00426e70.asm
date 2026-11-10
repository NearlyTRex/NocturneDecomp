; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)
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
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00412760 at 004127f8
;   core_batman.cpp_CBatman_processDamage_FUN_00414290 at 00414328
;   core_bride.cpp_CBride_processDamage_FUN_0041ead0 at 0041eb57
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 at 0042806e
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00464f60 at 00464fe9
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 004873c7
;   core_fire.cpp_CGunFlame_init_FUN_00499fe0 at 0049a135
;   core_flame.cpp_CFlame_process_FUN_0049f2e0 at 0049f5d4
;
; Referenced Globals:
;   undefined4 s_KCHero_005ccda9+1
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_00425bb0
;   core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_00548250
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426e70
        ;   Label: core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70
    PUSH ESI                            ; 00426e71
    PUSH EDI                            ; 00426e72
    PUSH EBP                            ; 00426e73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00426e74
    CMP dword ptr [EBX + 0x3564],0x32   ; 00426e78
    JGE 0x00426e99                      ; 00426e7f
        ;   XREF to: 00426e99 (CONDITIONAL_JUMP)  ; LAB_00426e99
    CMP dword ptr [ESP + 0x28],0x0      ; 00426e81
    JZ 0x00426e9e                       ; 00426e86
        ;   XREF to: 00426e9e (CONDITIONAL_JUMP)  ; LAB_00426e9e
    LEA EDX,[EBX + 0x2b4]               ; 00426e88
        ;   Label: LAB_00426e88
    LEA EAX,[EBX + 0x2514]              ; 00426e8e
    CMP byte ptr [EAX],0x0              ; 00426e94
    JNZ 0x00426eb2                      ; 00426e97
        ;   XREF to: 00426eb2 (CONDITIONAL_JUMP)  ; LAB_00426eb2
    POP EBP                             ; 00426e99
        ;   Label: LAB_00426e99
    POP EDI                             ; 00426e9a
    POP ESI                             ; 00426e9b
    POP EBX                             ; 00426e9c
    RET                                 ; 00426e9d
    PUSH 0x5ccdaa                       ; 00426e9e | s_KCHero_005ccda9+1
        ;   Label: LAB_00426e9e
    PUSH EBX                            ; 00426ea3
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 00426ea4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00426ea9
    TEST EAX,EAX                        ; 00426eac
    JNZ 0x00426e99                      ; 00426eae
        ;   XREF to: 00426e99 (CONDITIONAL_JUMP)  ; LAB_00426e99
    JMP 0x00426e88                      ; 00426eb0
        ;   XREF to: 00426e88 (UNCONDITIONAL_JUMP)  ; LAB_00426e88
    MOV ESI,dword ptr [ESP + 0x18]      ; 00426eb2
        ;   Label: LAB_00426eb2
    PUSH ESI                            ; 00426eb6
    PUSH EDX                            ; 00426eb7
    CALL core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_00548250 ; 00426eb8
        ;   XREF to: 00548250 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_00548250(CDeformableModelInstance * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00426ebd
    MOV ECX,EAX                         ; 00426ec0
    MOV EDI,dword ptr [EBX + 0x3564]    ; 00426ec2
    XOR EAX,EAX                         ; 00426ec8
    TEST EDI,EDI                        ; 00426eca
    JLE 0x00426ee6                      ; 00426ecc
        ;   XREF to: 00426ee6 (CONDITIONAL_JUMP)  ; LAB_00426ee6
    MOV EDX,EBX                         ; 00426ece
    CMP ECX,dword ptr [EDX + 0x3574]    ; 00426ed0
        ;   Label: LAB_00426ed0
    JZ 0x00426e99                       ; 00426ed6
        ;   XREF to: 00426e99 (CONDITIONAL_JUMP)  ; LAB_00426e99
    INC EAX                             ; 00426ed8
    MOV EBP,dword ptr [EBX + 0x3564]    ; 00426ed9
    ADD EDX,0x18                        ; 00426edf
    CMP EAX,EBP                         ; 00426ee2
    JL 0x00426ed0                       ; 00426ee4
        ;   XREF to: 00426ed0 (CONDITIONAL_JUMP)  ; LAB_00426ed0
    MOV EAX,dword ptr [ESP + 0x20]      ; 00426ee6
        ;   Label: LAB_00426ee6
    MOV dword ptr [EBX + 0x3568],EAX    ; 00426eea
    MOV EAX,dword ptr [ESP + 0x24]      ; 00426ef0
    PUSH ECX                            ; 00426ef4
    MOV dword ptr [EBX + 0x356c],EAX    ; 00426ef5
    LEA EAX,[EBX + 0x2b4]               ; 00426efb
    PUSH EAX                            ; 00426f01
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00426f02
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00426f07
    PUSH EAX                            ; 00426f0a
    PUSH EBX                            ; 00426f0b
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_00425bb0 ; 00426f0c
        ;   XREF to: 00425bb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_00425bb0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 00426f11
    MOV dword ptr [EBX + 0xfc],0x1      ; 00426f14
    POP EBP                             ; 00426f1e
    POP EDI                             ; 00426f1f
    POP ESI                             ; 00426f20
    POP EBX                             ; 00426f21
    RET                                 ; 00426f22

