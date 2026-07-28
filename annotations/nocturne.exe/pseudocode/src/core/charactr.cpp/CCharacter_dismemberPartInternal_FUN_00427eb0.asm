; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CBodyPart *      Stack[0x8]:4   body_part
; int              Stack[0xc]:4   part_index
; int              Stack[0x10]:4   render_in_background
; Local Variables:
; undefined        Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[14]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0 at 00412f48
;   core_batman.cpp_CBatman_processDismemberment_FUN_004145f0 at 004146d5
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0 at 0041a21b
;   core_bride.cpp_CBride_processDismemberment_FUN_00420a10 at 00420ae7
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 at 00427e94
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_0043c360 at 0043c41a
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0045a1a0 at 0045a1f3
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004a8330 at 004a8405
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190 at 004ab270
;   core_imp.cpp_CImp_processDismemberment_FUN_004bca20 at 004bcb05
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_0076595c
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_00417ac0
;   core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427eb0
        ;   Label: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
    PUSH ESI                            ; 00427eb1
    PUSH EDI                            ; 00427eb2
    PUSH EBP                            ; 00427eb3
    MOV EBP,ESP                         ; 00427eb4
    SUB ESP,0x8c                        ; 00427eb6
    SUB EBP,0x72                        ; 00427ebc
    MOV EAX,dword ptr [EBP + 0x86]      ; 00427ebf
    MOV EBX,dword ptr [EBP + 0x86]      ; 00427ec5
    MOV DL,byte ptr [EAX + 0x23b0]      ; 00427ecb
    ADD EBX,0x150                       ; 00427ed1
    TEST DL,DL                          ; 00427ed7
    JZ 0x00427ef5                       ; 00427ed9
        ;   XREF to: 00427ef5 (CONDITIONAL_JUMP)  ; LAB_00427ef5
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00427edb
    MOV EDX,dword ptr [EBP + 0x86]      ; 00427ee1
    SHL EAX,0x2                         ; 00427ee7
    ADD EAX,EDX                         ; 00427eea
    CMP dword ptr [EAX + 0x2290],0x0    ; 00427eec
    JNZ 0x00427efd                      ; 00427ef3
        ;   XREF to: 00427efd (CONDITIONAL_JUMP)  ; LAB_00427efd
    LEA ESP,[EBP + 0x72]                ; 00427ef5
        ;   Label: LAB_00427ef5
    POP EBP                             ; 00427ef8
    POP EDI                             ; 00427ef9
    POP ESI                             ; 00427efa
    POP EBX                             ; 00427efb
    RET                                 ; 00427efc
    MOV ESI,dword ptr [EBP + 0x8e]      ; 00427efd
        ;   Label: LAB_00427efd
    PUSH ESI                            ; 00427f03
    MOV EDI,dword ptr [EBP + 0x8a]      ; 00427f04
    PUSH EDI                            ; 00427f0a
    PUSH EBX                            ; 00427f0b
    CALL core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0 ; 00427f0c
        ;   XREF to: 0051e8c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0()
    XOR EAX,EAX                         ; 00427f11
    MOV dword ptr [EBP + 0x6e],EAX      ; 00427f13
    MOV EAX,dword ptr [EBP + 0x86]      ; 00427f16
    MOV EDX,dword ptr [EAX + 0x2dec]    ; 00427f1c
    ADD ESP,0xc                         ; 00427f22
    TEST EDX,EDX                        ; 00427f25
    JLE 0x00427f65                      ; 00427f27
        ;   XREF to: 00427f65 (CONDITIONAL_JUMP)  ; LAB_00427f65
    MOV EBX,dword ptr [EBP + 0x86]      ; 00427f29
    ADD EAX,0xfd0                       ; 00427f2f
    ADD EBX,0x2df0                      ; 00427f34
    MOV dword ptr [EBP + 0x6a],EAX      ; 00427f3a
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00427f3d
        ;   Label: LAB_00427f3d
    CMP ECX,dword ptr [EBX]             ; 00427f43
    JZ 0x00427ffd                       ; 00427f45
        ;   XREF to: 00427ffd (CONDITIONAL_JUMP)  ; LAB_00427ffd
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00427f4b
        ;   Label: LAB_00427f4b
    MOV ESI,dword ptr [EBP + 0x86]      ; 00427f4e
    ADD EBX,0x38                        ; 00427f54
    INC ECX                             ; 00427f57
    MOV EDI,dword ptr [ESI + 0x2dec]    ; 00427f58
    MOV dword ptr [EBP + 0x6e],ECX      ; 00427f5e
    CMP ECX,EDI                         ; 00427f61
    JL 0x00427f3d                       ; 00427f63
        ;   XREF to: 00427f3d (CONDITIONAL_JUMP)  ; LAB_00427f3d
    MOV EAX,dword ptr [EBP + 0x86]      ; 00427f65
        ;   Label: LAB_00427f65
    MOV EDX,dword ptr [EAX + 0x2f08]    ; 00427f6b
    XOR ESI,ESI                         ; 00427f71
    TEST EDX,EDX                        ; 00427f73
    JLE 0x00427fa5                      ; 00427f75
        ;   XREF to: 00427fa5 (CONDITIONAL_JUMP)  ; LAB_00427fa5
    LEA EDI,[EAX + 0xfd0]               ; 00427f77
    LEA EBX,[EAX + 0x2f14]              ; 00427f7d
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00427f83
        ;   Label: LAB_00427f83
    CMP ECX,dword ptr [EBX]             ; 00427f89
    JZ 0x00428061                       ; 00427f8b
        ;   XREF to: 00428061 (CONDITIONAL_JUMP)  ; LAB_00428061
    MOV EAX,dword ptr [EBP + 0x86]      ; 00427f91
        ;   Label: LAB_00427f91
    INC ESI                             ; 00427f97
    MOV EDX,dword ptr [EAX + 0x2f08]    ; 00427f98
    ADD EBX,0x18                        ; 00427f9e
    CMP ESI,EDX                         ; 00427fa1
    JL 0x00427f83                       ; 00427fa3
        ;   XREF to: 00427f83 (CONDITIONAL_JUMP)  ; LAB_00427f83
    MOV ESI,dword ptr [EBP + 0x86]      ; 00427fa5
        ;   Label: LAB_00427fa5
    MOV EDI,dword ptr [EBP + 0x8e]      ; 00427fab
    XOR EBX,EBX                         ; 00427fb1
    CMP EDI,dword ptr [ESI + 0x24a8]    ; 00427fb3
        ;   Label: LAB_00427fb3
    JNZ 0x00427fda                      ; 00427fb9
        ;   XREF to: 00427fda (CONDITIONAL_JUMP)  ; LAB_00427fda
    PUSH 0x0                            ; 00427fbb
    MOV EAX,dword ptr [EBP + 0x86]      ; 00427fbd
    PUSH EBX                            ; 00427fc3
    MOV EDX,dword ptr [EBP + 0x86]      ; 00427fc4
    MOV EAX,dword ptr [EAX + 0x14c]     ; 00427fca
    PUSH EDX                            ; 00427fd0
    CALL dword ptr [EAX + 0x120]        ; 00427fd1
    ADD ESP,0xc                         ; 00427fd7
    INC EBX                             ; 00427fda
        ;   Label: LAB_00427fda
    ADD ESI,0x44                        ; 00427fdb
    CMP EBX,0x2                         ; 00427fde
    JL 0x00427fb3                       ; 00427fe1
        ;   XREF to: 00427fb3 (CONDITIONAL_JUMP)  ; LAB_00427fb3
    MOV EAX,dword ptr [EBP + 0x8a]      ; 00427fe3
    MOV EBX,dword ptr [EBP + 0x92]      ; 00427fe9
    MOV dword ptr [EAX + 0x150],EBX     ; 00427fef
    LEA ESP,[EBP + 0x72]                ; 00427ff5
    POP EBP                             ; 00427ff8
    POP EDI                             ; 00427ff9
    POP ESI                             ; 00427ffa
    POP EBX                             ; 00427ffb
    RET                                 ; 00427ffc
    IMUL EAX,dword ptr [EBX + 0x4],0x30 ; 00427ffd
        ;   Label: LAB_00427ffd
    ADD EAX,dword ptr [EBP + 0x6a]      ; 00428001
    PUSH EAX                            ; 00428004
    LEA EAX,[EBX + 0x8]                 ; 00428005
    PUSH EAX                            ; 00428008
    LEA ESI,[EBP + 0x16]                ; 00428009
    LEA EDI,[EBP + -0x1a]               ; 0042800c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0042800f
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 00428014
    LEA EAX,[EBP + 0x46]                ; 00428017
    MOV ECX,0xc                         ; 0042801a
    PUSH EAX                            ; 0042801f
    LEA EAX,[EBP + -0x1a]               ; 00428020
    LEA ESI,[EBP + 0x16]                ; 00428023
    PUSH EAX                            ; 00428026
    MOVSD.REP ES:EDI,ESI                ; 00428027
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 00428029
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0042802e
    PUSH EAX                            ; 00428031
    MOV EAX,dword ptr [EBP + -0xe]      ; 00428032
    MOV dword ptr [EBP + 0x52],EAX      ; 00428035
    MOV EAX,dword ptr [EBP + 0x2]       ; 00428038
    MOV dword ptr [EBP + 0x56],EAX      ; 0042803b
    MOV EAX,dword ptr [EBP + 0x12]      ; 0042803e
    MOV dword ptr [EBP + 0x5a],EAX      ; 00428041
    LEA EAX,[EBP + 0x52]                ; 00428044
    PUSH EAX                            ; 00428047
    PUSH 0x76595c                       ; 00428048 | DAT_0076595c
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0042804d
    PUSH EAX                            ; 00428053
    CALL core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_00417ac0 ; 00428054
        ;   XREF to: 00417ac0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_00417ac0(CBodyPart * this_ptr, char * model_name, CVector3f * scale, CVector3f * position)
    ADD ESP,0x10                        ; 00428059
    JMP 0x00427f4b                      ; 0042805c
        ;   XREF to: 00427f4b (UNCONDITIONAL_JUMP)  ; LAB_00427f4b
    MOV EAX,dword ptr [EBX + 0x4]       ; 00428061
        ;   Label: LAB_00428061
    TEST EAX,EAX                        ; 00428064
    JL 0x00427f91                       ; 00428066
        ;   XREF to: 00427f91 (CONDITIONAL_JUMP)  ; LAB_00427f91
    IMUL EAX,EAX,0x30                   ; 0042806c
    ADD EAX,EDI                         ; 0042806f
    PUSH EAX                            ; 00428071
    LEA EAX,[EBX + 0x8]                 ; 00428072
    PUSH EAX                            ; 00428075
    LEA EAX,[EBP + 0x5e]                ; 00428076
    PUSH EAX                            ; 00428079
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0042807a
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042807f
    LEA EAX,[EBP + 0x5e]                ; 00428082
    PUSH EAX                            ; 00428085
    MOV ECX,dword ptr [EBP + 0x8a]      ; 00428086
    PUSH ECX                            ; 0042808c
    CALL core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40 ; 0042808d
        ;   XREF to: 00417b40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40(CBodyPart * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00428092
    JMP 0x00427f91                      ; 00428095
        ;   XREF to: 00427f91 (UNCONDITIONAL_JUMP)  ; LAB_00427f91

