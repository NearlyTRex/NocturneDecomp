; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810(CCharacter *this_ptr,int part_index,int bone_index,float chance)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; int              Stack[0xc]:4   bone_index
; float            Stack[0x10]:4   chance
; Local Variables:
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_bride.cpp_CBride_process_FUN_00423a30 at 00424541
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e813c
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005fa015
;
; Referenced Globals:
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_gore.cpp_CGore_FUN_004edaa0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b810
        ;   Label: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
    SUB ESP,0x24                        ; 0042b811
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0042b814
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042b818
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042b81c
    JZ 0x0042b82b                       ; 0042b824
        ;   XREF to: 0042b82b (CONDITIONAL_JUMP)  ; LAB_0042b82b
    ADD ESP,0x24                        ; 0042b826
        ;   Label: LAB_0042b826
    POP EBX                             ; 0042b829
    RET                                 ; 0042b82a
    PUSH dword ptr [ESP + 0x38]         ; 0042b82b
        ;   Label: LAB_0042b82b
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0042b82f
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0042b834
    TEST EAX,EAX                        ; 0042b837
    JZ 0x0042b826                       ; 0042b839
        ;   XREF to: 0042b826 (CONDITIONAL_JUMP)  ; LAB_0042b826
    PUSH EDI                            ; 0042b83b
    PUSH ESI                            ; 0042b83c
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0042b83d
    PUSH ECX                            ; 0042b841
    LEA EAX,[ESP + 0x18]                ; 0042b842
    PUSH EAX                            ; 0042b846
    LEA EAX,[EBX + 0x158]               ; 0042b847
    PUSH EAX                            ; 0042b84d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0042b84e
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0042b853
    PUSH EAX                            ; 0042b856
    LEA EAX,[ESP + 0xc]                 ; 0042b857
    PUSH EAX                            ; 0042b85b
    PUSH EBX                            ; 0042b85c
    XOR ESI,ESI                         ; 0042b85d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042b85f
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042b864
    MOV EDI,0x40e00000                  ; 0042b867
    MOV dword ptr [ESP + 0x20],ESI      ; 0042b86c
    MOV dword ptr [ESP + 0x24],EDI      ; 0042b870
    MOV dword ptr [ESP + 0x28],ESI      ; 0042b874
    MOV EAX,dword ptr [EBX + 0x2610]    ; 0042b878
    PUSH EAX                            ; 0042b87e
    LEA EAX,[ESP + 0x24]                ; 0042b87f
    PUSH EAX                            ; 0042b883
    LEA EAX,[ESP + 0x10]                ; 0042b884
    PUSH EAX                            ; 0042b888
    MOV EDX,dword ptr [0x0067b9a0]      ; 0042b889 | g_CGoreInstance | g_CGorePtr
    PUSH EDX                            ; 0042b88f | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004edaa0 ; 0042b890
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004edaa0(CGore * this_ptr)
    ADD ESP,0x10                        ; 0042b895
    POP ESI                             ; 0042b898
    POP EDI                             ; 0042b899
    ADD ESP,0x24                        ; 0042b89a
    POP EBX                             ; 0042b89d
    RET                                 ; 0042b89e

