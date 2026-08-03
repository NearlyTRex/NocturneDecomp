; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_0048b070(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_position
; CVector3f *      Stack[0xc]:4   orientation_angles
; CVector3f *      Stack[0x10]:4   surface_normal
; int              Stack[0x14]:4   ground_type
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_crossbow.cpp_FUN_0043d1c0 at 0043d7fd
;
; Referenced Globals:
;   undefined1* switchdataD_0048b038 = 0048b091
;   TerminatedCString s_a_wood_wav_005814bc
;   CSound* g_CSound_PTR_005bed68 = 02dc9450
;   undefined4 DAT_01c23d48
;   undefined4 DAT_01c23d4c
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_fire.cpp_CStake_init_FUN_004832b0
;   core_fire.cpp_CStake_spawn_FUN_00483320
;   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b070
        ;   Label: core_fire.cpp_CFireEffect_createStake_FUN_0048b070
    PUSH ESI                            ; 0048b071
    PUSH EDI                            ; 0048b072
    PUSH EBP                            ; 0048b073
    SUB ESP,0x4c                        ; 0048b074
    MOV ESI,dword ptr [ESP + 0x64]      ; 0048b077
    MOV EDI,dword ptr [ESP + 0x68]      ; 0048b07b
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048b07f
    XOR EBX,EBX                         ; 0048b083
    CMP EAX,0xa                         ; 0048b085
    JA 0x0048b096                       ; 0048b088
        ;   XREF to: 0048b096 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x48b038]  ; 0048b08a | caseD_8 | caseD_a | caseD_6
        ;   Label: switchD
    MOV EBX,0x1                         ; 0048b091
        ;   Label: caseD_0
    PUSH EDI                            ; 0048b096
        ;   Label: default
    LEA EAX,[ESP + 0x4]                 ; 0048b097
    PUSH EAX                            ; 0048b09b
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0048b09c
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0048b0a1
    LEA EAX,[ESP + 0x28]                ; 0048b0a4
    MOV EBP,0x3f333333                  ; 0048b0a8
    PUSH EAX                            ; 0048b0ad
    LEA EAX,[ESP + 0x38]                ; 0048b0ae
    XOR EDX,EDX                         ; 0048b0b2
    PUSH EAX                            ; 0048b0b4
    LEA EAX,[ESP + 0x8]                 ; 0048b0b5
    MOV dword ptr [ESP + 0x30],EDX      ; 0048b0b9
    PUSH EAX                            ; 0048b0bd
    MOV dword ptr [ESP + 0x38],EDX      ; 0048b0be
    MOV dword ptr [ESP + 0x3c],EBP      ; 0048b0c2
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0048b0c6
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 0048b0cb
    FSUB float ptr [EAX]                ; 0048b0cd
    ADD ESP,0xc                         ; 0048b0cf
    FSTP float ptr [ESP + 0x40]         ; 0048b0d2
    FLD float ptr [ESI + 0x4]           ; 0048b0d6
    FSUB float ptr [EAX + 0x4]          ; 0048b0d9
    FSTP float ptr [ESP + 0x44]         ; 0048b0dc
    FLD float ptr [ESI + 0x8]           ; 0048b0e0
    FSUB float ptr [EAX + 0x8]          ; 0048b0e3
    FSTP float ptr [ESP + 0x48]         ; 0048b0e6
    TEST EBX,EBX                        ; 0048b0ea
    JZ 0x0048b158                       ; 0048b0ec
        ;   XREF to: 0048b158 (CONDITIONAL_JUMP)  ; LAB_0048b158
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0048b0ee
    PUSH ECX                            ; 0048b0f2
    PUSH EDI                            ; 0048b0f3
    LEA EAX,[ESP + 0x48]                ; 0048b0f4
    MOV EDX,dword ptr [0x01c23d4c]      ; 0048b0f8 | DAT_01c23d4c
    PUSH EAX                            ; 0048b0fe
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048b0ff
    ADD EAX,EDX                         ; 0048b106
    SHL EAX,0x2                         ; 0048b108
    SUB EAX,EDX                         ; 0048b10b
    SHL EAX,0x5                         ; 0048b10d
    ADD EAX,0x1c23d50                   ; 0048b110
    PUSH EAX                            ; 0048b115
    CALL core_fire.cpp_CStake_spawn_FUN_00483320 ; 0048b116
        ;   XREF to: 00483320 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_spawn_FUN_00483320(CStake * this_ptr, CVector3f * spawn_position, CVector3f * orientation_angles, CVector3f * surface_normal)
    ADD ESP,0x10                        ; 0048b11b
    MOV EBX,dword ptr [0x01c23d4c]      ; 0048b11e | DAT_01c23d4c
        ;   Label: LAB_0048b11e
    INC EBX                             ; 0048b124
    MOV dword ptr [0x01c23d4c],EBX      ; 0048b125 | DAT_01c23d4c
    CMP EBX,0x100                       ; 0048b12b
    JL 0x0048b13b                       ; 0048b131
        ;   XREF to: 0048b13b (CONDITIONAL_JUMP)  ; LAB_0048b13b
    XOR EDI,EDI                         ; 0048b133
    MOV dword ptr [0x01c23d4c],EDI      ; 0048b135 | DAT_01c23d4c
    MOV EBP,dword ptr [0x01c23d48]      ; 0048b13b | DAT_01c23d48
        ;   Label: LAB_0048b13b
    CMP EBP,0x100                       ; 0048b141
    JL 0x0048b1ab                       ; 0048b147
        ;   XREF to: 0048b1ab (CONDITIONAL_JUMP)  ; LAB_0048b1ab
    ADD ESP,0x4c                        ; 0048b149
        ;   Label: caseD_6
    POP EBP                             ; 0048b14c
    POP EDI                             ; 0048b14d
    POP ESI                             ; 0048b14e
    POP EBX                             ; 0048b14f
    RET                                 ; 0048b150
    XOR EBX,EBX                         ; 0048b151
        ;   Label: caseD_3
    JMP 0x0048b096                      ; 0048b153
        ;   XREF to: 0048b096 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x40]                ; 0048b158
        ;   Label: LAB_0048b158
    PUSH 0x3e6b851f                     ; 0048b15c
    PUSH EAX                            ; 0048b161
    PUSH 0x5814bc                       ; 0048b162 | = "a-wood?.wav"
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048b167
    PUSH EAX                            ; 0048b16b
    MOV EDX,dword ptr [0x005bed68]      ; 0048b16c | g_CSound_PTR_005bed68
    PUSH EDX                            ; 0048b172
    CALL core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00 ; 0048b173
        ;   XREF to: 0052eb00 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 0048b178
    PUSH EDI                            ; 0048b17b
    LEA EAX,[ESP + 0x44]                ; 0048b17c
    MOV EDX,dword ptr [0x01c23d4c]      ; 0048b180 | DAT_01c23d4c
    PUSH EAX                            ; 0048b186
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048b187
    ADD EAX,EDX                         ; 0048b18e
    SHL EAX,0x2                         ; 0048b190
    SUB EAX,EDX                         ; 0048b193
    SHL EAX,0x5                         ; 0048b195
    ADD EAX,0x1c23d50                   ; 0048b198
    PUSH EAX                            ; 0048b19d
    CALL core_fire.cpp_CStake_init_FUN_004832b0 ; 0048b19e
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_init_FUN_004832b0(CStake * this_ptr, CVector3f * position, CVector3f * orientation)
    ADD ESP,0xc                         ; 0048b1a3
    JMP 0x0048b11e                      ; 0048b1a6
        ;   XREF to: 0048b11e (UNCONDITIONAL_JUMP)  ; LAB_0048b11e
    LEA EAX,[EBP + 0x1]                 ; 0048b1ab
        ;   Label: LAB_0048b1ab
    MOV [0x01c23d48],EAX                ; 0048b1ae | DAT_01c23d48
    ADD ESP,0x4c                        ; 0048b1b3
    POP EBP                             ; 0048b1b6
    POP EDI                             ; 0048b1b7
    POP ESI                             ; 0048b1b8
    POP EBX                             ; 0048b1b9
    RET                                 ; 0048b1ba

