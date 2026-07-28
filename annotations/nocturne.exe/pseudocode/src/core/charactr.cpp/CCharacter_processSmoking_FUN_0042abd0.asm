; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   core_npc.cpp_CNPC_process_FUN_004eea20 at 004eea4a
;   core_stranger.cpp_FUN_00535900 at 00535a4e
;   core_svetlana.cpp_FUN_00541d00 at 00541d6b
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_0057a472
;   TerminatedCString s_Bip01_head_0057a47d
;   double DOUBLE_0057a48a = 32
;   float FLOAT_0057a492 = 0.2000000
;   float FLOAT_0057a496 = 1.5
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fb1b10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00511b50
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042abd0
        ;   Label: core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0
    PUSH ESI                            ; 0042abd1
    PUSH EDI                            ; 0042abd2
    PUSH EBP                            ; 0042abd3
    MOV EBP,ESP                         ; 0042abd4
    SUB ESP,0x60                        ; 0042abd6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042abd9
    CMP dword ptr [EBX + 0x2618],0x0    ; 0042abdc
    JZ 0x0042abfb                       ; 0042abe3
        ;   XREF to: 0042abfb (CONDITIONAL_JUMP)  ; LAB_0042abfb
    MOV EAX,[0x005be368]                ; 0042abe5 | DAT_005be368
    FLD float ptr [EAX + 0x15a88c]      ; 0042abea | DAT_01fb1b10
    FCOMP double ptr [0x0057a48a]       ; 0042abf0 | DOUBLE_0057a48a
    FNSTSW AX                           ; 0042abf6
    SAHF                                ; 0042abf8
    JC 0x0042ac02                       ; 0042abf9
        ;   XREF to: 0042ac02 (CONDITIONAL_JUMP)  ; LAB_0042ac02
    MOV ESP,EBP                         ; 0042abfb
        ;   Label: LAB_0042abfb
    POP EBP                             ; 0042abfd
    POP EDI                             ; 0042abfe
    POP ESI                             ; 0042abff
    POP EBX                             ; 0042ac00
    RET                                 ; 0042ac01
    LEA ESI,[EBX + 0x150]               ; 0042ac02
        ;   Label: LAB_0042ac02
    PUSH ESI                            ; 0042ac08
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0042ac09
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0042ac0e
    ADD ESP,0x4                         ; 0042ac11
    TEST EAX,EAX                        ; 0042ac14
    JNZ 0x0042abfb                      ; 0042ac16
        ;   XREF to: 0042abfb (CONDITIONAL_JUMP)  ; LAB_0042abfb
    CMP dword ptr [EBX + 0x2c50],0x0    ; 0042ac18
    JZ 0x0042acf0                       ; 0042ac1f
        ;   XREF to: 0042acf0 (CONDITIONAL_JUMP)  ; LAB_0042acf0
    FLD float ptr [EBX + 0x2c4c]        ; 0042ac25
        ;   Label: LAB_0042ac25
    FSUB float ptr [EBP + 0x18]         ; 0042ac2b
    FST float ptr [EBX + 0x2c4c]        ; 0042ac2e
    FLDZ                                ; 0042ac34
    FCOMPP                              ; 0042ac36
    FNSTSW AX                           ; 0042ac38
    SAHF                                ; 0042ac3a
    JBE 0x0042abfb                      ; 0042ac3b
        ;   XREF to: 0042abfb (CONDITIONAL_JUMP)  ; LAB_0042abfb
    FLD float ptr [EBX + 0x2c4c]        ; 0042ac3d
    LEA EAX,[EBX + 0x150]               ; 0042ac43
    FADD float ptr [0x0057a496]         ; 0042ac49 | FLOAT_0057a496
    PUSH EAX                            ; 0042ac4f
    FSTP float ptr [EBX + 0x2c4c]       ; 0042ac50
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0042ac56
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ac5b
    PUSH 0x0                            ; 0042ac5e
    PUSH 0x57a47d                       ; 0042ac60 | = "Bip01 head"
    PUSH EAX                            ; 0042ac65
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0042ac66
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0042ac6b
    CMP EAX,-0x1                        ; 0042ac6e
    JZ 0x0042abfb                       ; 0042ac71
        ;   XREF to: 0042abfb (CONDITIONAL_JUMP)  ; LAB_0042abfb
    MOV ESI,EAX                         ; 0042ac73
    SHL EAX,0x2                         ; 0042ac75
    SUB EAX,ESI                         ; 0042ac78
    SHL EAX,0x4                         ; 0042ac7a
    LEA ESI,[EBX + 0xfd0]               ; 0042ac7d
    MOV ECX,0x3e4ccccd                  ; 0042ac83
    ADD EAX,ESI                         ; 0042ac88
    XOR EDX,EDX                         ; 0042ac8a
    PUSH EAX                            ; 0042ac8c
    LEA EAX,[EBP + -0x30]               ; 0042ac8d
    MOV dword ptr [EBP + -0x30],EDX     ; 0042ac90
    PUSH EAX                            ; 0042ac93
    LEA EAX,[EBP + -0x60]               ; 0042ac94
    MOV ESI,0x3f000000                  ; 0042ac97
    PUSH EAX                            ; 0042ac9c
    MOV dword ptr [EBP + -0x2c],ECX     ; 0042ac9d
    MOV dword ptr [EBP + -0x28],ESI     ; 0042aca0
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0042aca3
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042aca8
    PUSH EAX                            ; 0042acab
    LEA EAX,[EBP + -0x18]               ; 0042acac
    PUSH EAX                            ; 0042acaf
    PUSH EBX                            ; 0042acb0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0042acb1
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042acb6
    LEA EAX,[EBP + -0x18]               ; 0042acb9
    PUSH EAX                            ; 0042acbc
    MOV EDI,dword ptr [0x005be368]      ; 0042acbd | DAT_005be368
    PUSH EDI                            ; 0042acc3 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00511b50 ; 0042acc4
        ;   XREF to: 00511b50 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00511b50(CDemonSet * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0042acc9
    TEST EAX,EAX                        ; 0042accc
    JNZ 0x0042abfb                      ; 0042acce
        ;   XREF to: 0042abfb (CONDITIONAL_JUMP)  ; LAB_0042abfb
    CMP dword ptr [EBX + 0x2c50],0x0    ; 0042acd4
    SETZ AL                             ; 0042acdb
    AND EAX,0xff                        ; 0042acde
    MOV dword ptr [EBX + 0x2c50],EAX    ; 0042ace3
    MOV ESP,EBP                         ; 0042ace9
    POP EBP                             ; 0042aceb
    POP EDI                             ; 0042acec
    POP ESI                             ; 0042aced
    POP EBX                             ; 0042acee
    RET                                 ; 0042acef
    FLD float ptr [EBX + 0x2c48]        ; 0042acf0
        ;   Label: LAB_0042acf0
    FSUB float ptr [EBP + 0x18]         ; 0042acf6
    FST float ptr [EBX + 0x2c48]        ; 0042acf9
    FLDZ                                ; 0042acff
    FCOMPP                              ; 0042ad01
    FNSTSW AX                           ; 0042ad03
    SAHF                                ; 0042ad05
    JBE 0x0042ac25                      ; 0042ad06
        ;   XREF to: 0042ac25 (CONDITIONAL_JUMP)  ; LAB_0042ac25
    FLD float ptr [EBX + 0x2c48]        ; 0042ad0c
    FADD float ptr [0x0057a492]         ; 0042ad12 | FLOAT_0057a492
    MOV EAX,0xbf000000                  ; 0042ad18
    FSTP float ptr [EBX + 0x2c48]       ; 0042ad1d
    MOV dword ptr [EBP + -0x38],EAX     ; 0042ad23
    LEA EAX,[EBP + -0x3c]               ; 0042ad26
    PUSH EAX                            ; 0042ad29
    LEA EAX,[EBP + -0xc]                ; 0042ad2a
    PUSH EAX                            ; 0042ad2d
    MOV EDX,0x3f800000                  ; 0042ad2e
    XOR EDI,EDI                         ; 0042ad33
    PUSH EBX                            ; 0042ad35
    MOV dword ptr [EBP + -0x3c],EDI     ; 0042ad36
    MOV dword ptr [EBP + -0x34],EDX     ; 0042ad39
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0042ad3c
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 0042ad41
    PUSH ESI                            ; 0042ad44
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0042ad45
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ad4a
    PUSH EDI                            ; 0042ad4d
    PUSH 0x57a472                       ; 0042ad4e | = "Bip01 head"
    PUSH EAX                            ; 0042ad53
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0042ad54
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0042ad59
    CMP EAX,-0x1                        ; 0042ad5c
    JZ 0x0042ac25                       ; 0042ad5f
        ;   XREF to: 0042ac25 (CONDITIONAL_JUMP)  ; LAB_0042ac25
    MOV ESI,EAX                         ; 0042ad65
    SHL EAX,0x2                         ; 0042ad67
    SUB EAX,ESI                         ; 0042ad6a
    SHL EAX,0x4                         ; 0042ad6c
    LEA ESI,[EBX + 0xfd0]               ; 0042ad6f
    MOV EDI,0x3f000000                  ; 0042ad75
    ADD EAX,ESI                         ; 0042ad7a
    XOR ECX,ECX                         ; 0042ad7c
    PUSH EAX                            ; 0042ad7e
    LEA EAX,[EBP + -0x54]               ; 0042ad7f
    MOV dword ptr [EBP + -0x54],ECX     ; 0042ad82
    PUSH EAX                            ; 0042ad85
    LEA EAX,[EBP + -0x48]               ; 0042ad86
    MOV ESI,0x3e4ccccd                  ; 0042ad89
    PUSH EAX                            ; 0042ad8e
    MOV dword ptr [EBP + -0x4c],EDI     ; 0042ad8f
    MOV dword ptr [EBP + -0x50],ESI     ; 0042ad92
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0042ad95
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042ad9a
    PUSH EAX                            ; 0042ad9d
    LEA EAX,[EBP + -0x24]               ; 0042ad9e
    PUSH EAX                            ; 0042ada1
    PUSH EBX                            ; 0042ada2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0042ada3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042ada8
    PUSH 0x8000                         ; 0042adab
    LEA EAX,[EBP + -0xc]                ; 0042adb0
    PUSH EAX                            ; 0042adb3
    LEA EAX,[EBP + -0x24]               ; 0042adb4
    PUSH 0x3f000000                     ; 0042adb7
    PUSH EAX                            ; 0042adbc
    MOV EAX,[0x005b80f0]                ; 0042adbd | DAT_005b80f0
    PUSH EAX                            ; 0042adc2
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 0042adc3
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0042adc8
    JMP 0x0042ac25                      ; 0042adcb
        ;   XREF to: 0042ac25 (UNCONDITIONAL_JUMP)  ; LAB_0042ac25

