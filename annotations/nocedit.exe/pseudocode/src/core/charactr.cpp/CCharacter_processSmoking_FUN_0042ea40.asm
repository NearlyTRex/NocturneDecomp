; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   core_npc.cpp_CNPC_process_FUN_005448b0 at 005448da
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bbaae
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d8c0b
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_006175ca
;   TerminatedCString s_Bip01_head_006175d5
;   double DOUBLE_006175e2 = 32
;   float FLOAT_006175ea = 0.2000000
;   float FLOAT_006175ee = 1.5
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CFireEffect g_CFireEffectInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0326eeec
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_setcolid.cpp_CDemonSet_FUN_00574580
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ea40
        ;   Label: core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40
    PUSH ESI                            ; 0042ea41
    PUSH EDI                            ; 0042ea42
    PUSH EBP                            ; 0042ea43
    MOV EBP,ESP                         ; 0042ea44
    SUB ESP,0x60                        ; 0042ea46
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042ea49
    CMP dword ptr [EBX + 0x2620],0x0    ; 0042ea4c
    JZ 0x0042ea6b                       ; 0042ea53
        ;   XREF to: 0042ea6b (CONDITIONAL_JUMP)  ; LAB_0042ea6b
    MOV EAX,[0x006810c8]                ; 0042ea55 | g_CDemonSetPtr
    FLD float ptr [EAX + 0x15ac74]      ; 0042ea5a | DAT_0326eeec
    FCOMP double ptr [0x006175e2]       ; 0042ea60 | DOUBLE_006175e2
    FNSTSW AX                           ; 0042ea66
    SAHF                                ; 0042ea68
    JC 0x0042ea72                       ; 0042ea69
        ;   XREF to: 0042ea72 (CONDITIONAL_JUMP)  ; LAB_0042ea72
    MOV ESP,EBP                         ; 0042ea6b
        ;   Label: LAB_0042ea6b
    POP EBP                             ; 0042ea6d
    POP EDI                             ; 0042ea6e
    POP ESI                             ; 0042ea6f
    POP EBX                             ; 0042ea70
    RET                                 ; 0042ea71
    LEA ESI,[EBX + 0x158]               ; 0042ea72
        ;   Label: LAB_0042ea72
    PUSH ESI                            ; 0042ea78
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0042ea79
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0042ea7e
    ADD ESP,0x4                         ; 0042ea81
    TEST EAX,EAX                        ; 0042ea84
    JNZ 0x0042ea6b                      ; 0042ea86
        ;   XREF to: 0042ea6b (CONDITIONAL_JUMP)  ; LAB_0042ea6b
    CMP dword ptr [EBX + 0x2c58],0x0    ; 0042ea88
    JZ 0x0042eb60                       ; 0042ea8f
        ;   XREF to: 0042eb60 (CONDITIONAL_JUMP)  ; LAB_0042eb60
    FLD float ptr [EBX + 0x2c54]        ; 0042ea95
        ;   Label: LAB_0042ea95
    FSUB float ptr [EBP + 0x18]         ; 0042ea9b
    FST float ptr [EBX + 0x2c54]        ; 0042ea9e
    FLDZ                                ; 0042eaa4
    FCOMPP                              ; 0042eaa6
    FNSTSW AX                           ; 0042eaa8
    SAHF                                ; 0042eaaa
    JBE 0x0042ea6b                      ; 0042eaab
        ;   XREF to: 0042ea6b (CONDITIONAL_JUMP)  ; LAB_0042ea6b
    FLD float ptr [EBX + 0x2c54]        ; 0042eaad
    LEA EAX,[EBX + 0x158]               ; 0042eab3
    FADD float ptr [0x006175ee]         ; 0042eab9 | FLOAT_006175ee
    PUSH EAX                            ; 0042eabf
    FSTP float ptr [EBX + 0x2c54]       ; 0042eac0
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042eac6
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042eacb
    PUSH 0x0                            ; 0042eace
    PUSH 0x6175d5                       ; 0042ead0 | = "Bip01 head"
    PUSH EAX                            ; 0042ead5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0042ead6
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0042eadb
    CMP EAX,-0x1                        ; 0042eade
    JZ 0x0042ea6b                       ; 0042eae1
        ;   XREF to: 0042ea6b (CONDITIONAL_JUMP)  ; LAB_0042ea6b
    MOV ESI,EAX                         ; 0042eae3
    SHL EAX,0x2                         ; 0042eae5
    SUB EAX,ESI                         ; 0042eae8
    SHL EAX,0x4                         ; 0042eaea
    LEA ESI,[EBX + 0xfd8]               ; 0042eaed
    MOV ECX,0x3e4ccccd                  ; 0042eaf3
    ADD EAX,ESI                         ; 0042eaf8
    XOR EDX,EDX                         ; 0042eafa
    PUSH EAX                            ; 0042eafc
    LEA EAX,[EBP + -0x30]               ; 0042eafd
    MOV dword ptr [EBP + -0x30],EDX     ; 0042eb00
    PUSH EAX                            ; 0042eb03
    LEA EAX,[EBP + -0x60]               ; 0042eb04
    MOV ESI,0x3f000000                  ; 0042eb07
    PUSH EAX                            ; 0042eb0c
    MOV dword ptr [EBP + -0x2c],ECX     ; 0042eb0d
    MOV dword ptr [EBP + -0x28],ESI     ; 0042eb10
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0042eb13
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042eb18
    PUSH EAX                            ; 0042eb1b
    LEA EAX,[EBP + -0x18]               ; 0042eb1c
    PUSH EAX                            ; 0042eb1f
    PUSH EBX                            ; 0042eb20
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042eb21
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042eb26
    LEA EAX,[EBP + -0x18]               ; 0042eb29
    PUSH EAX                            ; 0042eb2c
    MOV EDI,dword ptr [0x006810c8]      ; 0042eb2d | g_CDemonSetPtr
    PUSH EDI                            ; 0042eb33 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_00574580 ; 0042eb34
        ;   XREF to: 00574580 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_FUN_00574580(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0042eb39
    TEST EAX,EAX                        ; 0042eb3c
    JNZ 0x0042ea6b                      ; 0042eb3e
        ;   XREF to: 0042ea6b (CONDITIONAL_JUMP)  ; LAB_0042ea6b
    CMP dword ptr [EBX + 0x2c58],0x0    ; 0042eb44
    SETZ AL                             ; 0042eb4b
    AND EAX,0xff                        ; 0042eb4e
    MOV dword ptr [EBX + 0x2c58],EAX    ; 0042eb53
    MOV ESP,EBP                         ; 0042eb59
    POP EBP                             ; 0042eb5b
    POP EDI                             ; 0042eb5c
    POP ESI                             ; 0042eb5d
    POP EBX                             ; 0042eb5e
    RET                                 ; 0042eb5f
    FLD float ptr [EBX + 0x2c50]        ; 0042eb60
        ;   Label: LAB_0042eb60
    FSUB float ptr [EBP + 0x18]         ; 0042eb66
    FST float ptr [EBX + 0x2c50]        ; 0042eb69
    FLDZ                                ; 0042eb6f
    FCOMPP                              ; 0042eb71
    FNSTSW AX                           ; 0042eb73
    SAHF                                ; 0042eb75
    JBE 0x0042ea95                      ; 0042eb76
        ;   XREF to: 0042ea95 (CONDITIONAL_JUMP)  ; LAB_0042ea95
    FLD float ptr [EBX + 0x2c50]        ; 0042eb7c
    FADD float ptr [0x006175ea]         ; 0042eb82 | FLOAT_006175ea
    MOV EAX,0xbf000000                  ; 0042eb88
    FSTP float ptr [EBX + 0x2c50]       ; 0042eb8d
    MOV dword ptr [EBP + -0x38],EAX     ; 0042eb93
    LEA EAX,[EBP + -0x3c]               ; 0042eb96
    PUSH EAX                            ; 0042eb99
    LEA EAX,[EBP + -0xc]                ; 0042eb9a
    PUSH EAX                            ; 0042eb9d
    MOV EDX,0x3f800000                  ; 0042eb9e
    XOR EDI,EDI                         ; 0042eba3
    PUSH EBX                            ; 0042eba5
    MOV dword ptr [EBP + -0x3c],EDI     ; 0042eba6
    MOV dword ptr [EBP + -0x34],EDX     ; 0042eba9
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0042ebac
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0042ebb1
    PUSH ESI                            ; 0042ebb4
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042ebb5
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ebba
    PUSH EDI                            ; 0042ebbd
    PUSH 0x6175ca                       ; 0042ebbe | = "Bip01 head"
    PUSH EAX                            ; 0042ebc3
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0042ebc4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0042ebc9
    CMP EAX,-0x1                        ; 0042ebcc
    JZ 0x0042ea95                       ; 0042ebcf
        ;   XREF to: 0042ea95 (CONDITIONAL_JUMP)  ; LAB_0042ea95
    MOV ESI,EAX                         ; 0042ebd5
    SHL EAX,0x2                         ; 0042ebd7
    SUB EAX,ESI                         ; 0042ebda
    SHL EAX,0x4                         ; 0042ebdc
    LEA ESI,[EBX + 0xfd8]               ; 0042ebdf
    MOV EDI,0x3f000000                  ; 0042ebe5
    ADD EAX,ESI                         ; 0042ebea
    XOR ECX,ECX                         ; 0042ebec
    PUSH EAX                            ; 0042ebee
    LEA EAX,[EBP + -0x54]               ; 0042ebef
    MOV dword ptr [EBP + -0x54],ECX     ; 0042ebf2
    PUSH EAX                            ; 0042ebf5
    LEA EAX,[EBP + -0x48]               ; 0042ebf6
    MOV ESI,0x3e4ccccd                  ; 0042ebf9
    PUSH EAX                            ; 0042ebfe
    MOV dword ptr [EBP + -0x4c],EDI     ; 0042ebff
    MOV dword ptr [EBP + -0x50],ESI     ; 0042ec02
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0042ec05
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042ec0a
    PUSH EAX                            ; 0042ec0d
    LEA EAX,[EBP + -0x24]               ; 0042ec0e
    PUSH EAX                            ; 0042ec11
    PUSH EBX                            ; 0042ec12
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042ec13
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042ec18
    PUSH 0x8000                         ; 0042ec1b
    LEA EAX,[EBP + -0xc]                ; 0042ec20
    PUSH EAX                            ; 0042ec23
    LEA EAX,[EBP + -0x24]               ; 0042ec24
    PUSH 0x3f000000                     ; 0042ec27
    PUSH EAX                            ; 0042ec2c
    MOV EAX,[0x0067a3d0]                ; 0042ec2d | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 0042ec32 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 0042ec33
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0042ec38
    JMP 0x0042ea95                      ; 0042ec3b
        ;   XREF to: 0042ea95 (UNCONDITIONAL_JUMP)  ; LAB_0042ea95

