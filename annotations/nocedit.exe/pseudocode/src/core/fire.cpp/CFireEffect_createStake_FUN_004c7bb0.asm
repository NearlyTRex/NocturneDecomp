; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0 (CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles, CVector3f *surface_normal,int material_type)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_position
; CVector3f *      Stack[0xc]:4   orientation_angles
; CVector3f *      Stack[0x10]:4   surface_normal
; int              Stack[0x14]:4   material_type
; Local Variables:
; undefined1       Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_crossbow.cpp_CCrossbow_FUN_00448f20 at 0044952e
;
; Referenced Globals:
;   void* switchdataD_004c7b78 = 004c7bd1
;   TerminatedCString s_a_wood_wav_0062a053
;   CSound* g_CSoundPtr = 03f6af64
;   int g_StakeActiveCount
;   int g_StakeAllocIndex
;   CStake[256] g_StakePool
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_fire.cpp_CStake_init_FUN_004bfe20
;   core_fire.cpp_CStake_spawn_FUN_004bfe90
;   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7bb0
        ;   Label: core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0
    PUSH ESI                            ; 004c7bb1
    PUSH EDI                            ; 004c7bb2
    PUSH EBP                            ; 004c7bb3
    SUB ESP,0x4c                        ; 004c7bb4
    MOV ESI,dword ptr [ESP + 0x64]      ; 004c7bb7
    MOV EDI,dword ptr [ESP + 0x68]      ; 004c7bbb
    MOV EAX,dword ptr [ESP + 0x70]      ; 004c7bbf
    XOR EBX,EBX                         ; 004c7bc3
    CMP EAX,0xa                         ; 004c7bc5
    JA 0x004c7bd6                       ; 004c7bc8
        ;   XREF to: 004c7bd6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4c7b78]  ; 004c7bca | caseD_5 | caseD_6 | caseD_9
        ;   Label: switchD
    MOV EBX,0x1                         ; 004c7bd1
        ;   Label: caseD_8
    PUSH EDI                            ; 004c7bd6
        ;   Label: default
    LEA EAX,[ESP + 0x4]                 ; 004c7bd7
    PUSH EAX                            ; 004c7bdb
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 004c7bdc
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c7be1
    LEA EAX,[ESP + 0x28]                ; 004c7be4
    MOV EBP,0x3f333333                  ; 004c7be8
    PUSH EAX                            ; 004c7bed
    LEA EAX,[ESP + 0x38]                ; 004c7bee
    XOR EDX,EDX                         ; 004c7bf2
    PUSH EAX                            ; 004c7bf4
    LEA EAX,[ESP + 0x8]                 ; 004c7bf5
    MOV dword ptr [ESP + 0x30],EDX      ; 004c7bf9
    PUSH EAX                            ; 004c7bfd
    MOV dword ptr [ESP + 0x38],EDX      ; 004c7bfe
    MOV dword ptr [ESP + 0x3c],EBP      ; 004c7c02
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004c7c06
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 004c7c0b
    FSUB float ptr [EAX]                ; 004c7c0d
    ADD ESP,0xc                         ; 004c7c0f
    FSTP float ptr [ESP + 0x40]         ; 004c7c12
    FLD float ptr [ESI + 0x4]           ; 004c7c16
    FSUB float ptr [EAX + 0x4]          ; 004c7c19
    FSTP float ptr [ESP + 0x44]         ; 004c7c1c
    FLD float ptr [ESI + 0x8]           ; 004c7c20
    FSUB float ptr [EAX + 0x8]          ; 004c7c23
    FSTP float ptr [ESP + 0x48]         ; 004c7c26
    TEST EBX,EBX                        ; 004c7c2a
    JZ 0x004c7c98                       ; 004c7c2c
        ;   XREF to: 004c7c98 (CONDITIONAL_JUMP)  ; LAB_004c7c98
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004c7c2e
    PUSH ECX                            ; 004c7c32
    PUSH EDI                            ; 004c7c33
    LEA EAX,[ESP + 0x48]                ; 004c7c34
    MOV EDX,dword ptr [0x02d2ddf8]      ; 004c7c38 | g_StakeAllocIndex
    PUSH EAX                            ; 004c7c3e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c7c3f
    ADD EAX,EDX                         ; 004c7c46
    SHL EAX,0x2                         ; 004c7c48
    SUB EAX,EDX                         ; 004c7c4b
    SHL EAX,0x5                         ; 004c7c4d
    ADD EAX,0x2d2ddfc                   ; 004c7c50 | g_StakePool
    PUSH EAX                            ; 004c7c55
    CALL core_fire.cpp_CStake_spawn_FUN_004bfe90 ; 004c7c56
        ;   XREF to: 004bfe90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_spawn_FUN_004bfe90(CStake * this_ptr, float spawn_scale, CVector3f * orientation_angles, CVector3f * launch_direction, ...)
    ADD ESP,0x10                        ; 004c7c5b
    MOV EBX,dword ptr [0x02d2ddf8]      ; 004c7c5e | g_StakeAllocIndex
        ;   Label: LAB_004c7c5e
    INC EBX                             ; 004c7c64
    MOV dword ptr [0x02d2ddf8],EBX      ; 004c7c65 | g_StakeAllocIndex
    CMP EBX,0x100                       ; 004c7c6b
    JL 0x004c7c7b                       ; 004c7c71
        ;   XREF to: 004c7c7b (CONDITIONAL_JUMP)  ; LAB_004c7c7b
    XOR EDI,EDI                         ; 004c7c73
    MOV dword ptr [0x02d2ddf8],EDI      ; 004c7c75 | g_StakeAllocIndex
    MOV EBP,dword ptr [0x02d2ddf4]      ; 004c7c7b | g_StakeActiveCount
        ;   Label: LAB_004c7c7b
    CMP EBP,0x100                       ; 004c7c81
    JL 0x004c7ceb                       ; 004c7c87
        ;   XREF to: 004c7ceb (CONDITIONAL_JUMP)  ; LAB_004c7ceb
    ADD ESP,0x4c                        ; 004c7c89
        ;   Label: caseD_6
    POP EBP                             ; 004c7c8c
    POP EDI                             ; 004c7c8d
    POP ESI                             ; 004c7c8e
    POP EBX                             ; 004c7c8f
    RET                                 ; 004c7c90
    XOR EBX,EBX                         ; 004c7c91
        ;   Label: caseD_a
    JMP 0x004c7bd6                      ; 004c7c93
        ;   XREF to: 004c7bd6 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x40]                ; 004c7c98
        ;   Label: LAB_004c7c98
    PUSH 0x3e6b851f                     ; 004c7c9c
    PUSH EAX                            ; 004c7ca1
    PUSH 0x62a053                       ; 004c7ca2 | = "a-wood?.wav"
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004c7ca7
    PUSH EAX                            ; 004c7cab
    MOV EDX,dword ptr [0x00681ef8]      ; 004c7cac | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 004c7cb2 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0 ; 004c7cb3
        ;   XREF to: 005b3ae0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004c7cb8
    PUSH EDI                            ; 004c7cbb
    LEA EAX,[ESP + 0x44]                ; 004c7cbc
    MOV EDX,dword ptr [0x02d2ddf8]      ; 004c7cc0 | g_StakeAllocIndex
    PUSH EAX                            ; 004c7cc6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c7cc7
    ADD EAX,EDX                         ; 004c7cce
    SHL EAX,0x2                         ; 004c7cd0
    SUB EAX,EDX                         ; 004c7cd3
    SHL EAX,0x5                         ; 004c7cd5
    ADD EAX,0x2d2ddfc                   ; 004c7cd8 | g_StakePool
    PUSH EAX                            ; 004c7cdd
    CALL core_fire.cpp_CStake_init_FUN_004bfe20 ; 004c7cde
        ;   XREF to: 004bfe20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_init_FUN_004bfe20(CStake * this_ptr, CVector3f * position, CVector3f * orientation)
    ADD ESP,0xc                         ; 004c7ce3
    JMP 0x004c7c5e                      ; 004c7ce6
        ;   XREF to: 004c7c5e (UNCONDITIONAL_JUMP)  ; LAB_004c7c5e
    LEA EAX,[EBP + 0x1]                 ; 004c7ceb
        ;   Label: LAB_004c7ceb
    MOV [0x02d2ddf4],EAX                ; 004c7cee | g_StakeActiveCount
    ADD ESP,0x4c                        ; 004c7cf3
    POP EBP                             ; 004c7cf6
    POP EDI                             ; 004c7cf7
    POP ESI                             ; 004c7cf8
    POP EBX                             ; 004c7cf9
    RET                                 ; 004c7cfa

