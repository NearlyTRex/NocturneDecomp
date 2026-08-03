; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990(CCharacter *this_ptr,int part_index,int bone_index,float chance)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; int              Stack[0xc]:4   bone_index
; float            Stack[0x10]:4   chance
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_bride.cpp_CBride_process_FUN_0041fe40 at 00420951
;   core_ghoul.cpp_CGhoul_process_FUN_004a9270 at 004aadac
;   core_zombie.cpp_CZombie_process_FUN_0055ef50 at 0055faf5
;
; Referenced Globals:
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427990
        ;   Label: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427990
    SUB ESP,0x24                        ; 00427991
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00427994
    MOV EAX,dword ptr [ESP + 0x30]      ; 00427998
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 0042799c
    JZ 0x004279ab                       ; 004279a4
        ;   XREF to: 004279ab (CONDITIONAL_JUMP)  ; LAB_004279ab
    ADD ESP,0x24                        ; 004279a6
        ;   Label: LAB_004279a6
    POP EBX                             ; 004279a9
    RET                                 ; 004279aa
    PUSH dword ptr [ESP + 0x38]         ; 004279ab
        ;   Label: LAB_004279ab
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004279af
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004279b4
    TEST EAX,EAX                        ; 004279b7
    JZ 0x004279a6                       ; 004279b9
        ;   XREF to: 004279a6 (CONDITIONAL_JUMP)  ; LAB_004279a6
    PUSH EDI                            ; 004279bb
    PUSH ESI                            ; 004279bc
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004279bd
    PUSH ECX                            ; 004279c1
    LEA EAX,[ESP + 0x18]                ; 004279c2
    PUSH EAX                            ; 004279c6
    LEA EAX,[EBX + 0x150]               ; 004279c7
    PUSH EAX                            ; 004279cd
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004279ce
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004279d3
    PUSH EAX                            ; 004279d6
    LEA EAX,[ESP + 0xc]                 ; 004279d7
    PUSH EAX                            ; 004279db
    PUSH EBX                            ; 004279dc
    XOR ESI,ESI                         ; 004279dd
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004279df
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004279e4
    MOV EDI,0x40e00000                  ; 004279e7
    MOV dword ptr [ESP + 0x20],ESI      ; 004279ec
    MOV dword ptr [ESP + 0x24],EDI      ; 004279f0
    MOV dword ptr [ESP + 0x28],ESI      ; 004279f4
    MOV EAX,dword ptr [EBX + 0x2608]    ; 004279f8
    PUSH EAX                            ; 004279fe
    LEA EAX,[ESP + 0x24]                ; 004279ff
    PUSH EAX                            ; 00427a03
    LEA EAX,[ESP + 0x10]                ; 00427a04
    PUSH EAX                            ; 00427a08
    MOV EDX,dword ptr [0x005b96c4]      ; 00427a09 | g_CGore_PTR_005b96c4
    PUSH EDX                            ; 00427a0f
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0 ; 00427a10
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 00427a15
    POP ESI                             ; 00427a18
    POP EDI                             ; 00427a19
    ADD ESP,0x24                        ; 00427a1a
    POP EBX                             ; 00427a1d
    RET                                 ; 00427a1e

