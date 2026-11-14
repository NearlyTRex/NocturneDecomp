; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004caff0(int param_1,float param_2,float *param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x1b78]:4  local_1b78
; undefined        Stack[-0x1b74]:1  local_1b74
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20 at 004caea5
;
; Referenced Globals:
;   undefined4 DAT_005e1230
;   undefined4 DAT_005e1234
;   undefined4 DAT_00600d68
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004caff0
        ;   Label: core_gabriela.cpp_FUN_004caff0
    PUSH ESI                            ; 004caff1
    PUSH EDI                            ; 004caff2
    PUSH EBP                            ; 004caff3
    MOV EBP,ESP                         ; 004caff4
    SUB ESP,0x1b68                      ; 004caff6
    AND ESP,0xfffffff8                  ; 004caffc
    LEA EAX,[ESP + 0x4]                 ; 004cafff
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cb003
    PUSH EAX                            ; 004cb006
    ADD EBX,0x158                       ; 004cb007
    PUSH EBX                            ; 004cb00d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0 ; 004cb00e
        ;   XREF to: 0056acc0 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 004cb013
    MOV EDX,dword ptr [EBP + 0x24]      ; 004cb016
    PUSH EDX                            ; 004cb019
    PUSH EBX                            ; 004cb01a
    LEA ESI,[ESP + 0x1b44]              ; 004cb01b
    LEA EDI,[ESP + 0x1b5c]              ; 004cb022
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004cb029
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x1b44]              ; 004cb02e
    ADD ESP,0x8                         ; 004cb035
    LEA EAX,[ESP + 0x1b54]              ; 004cb038
    MOV ECX,dword ptr [EBP + 0x14]      ; 004cb03f
    MOVSD ES:EDI,ESI                    ; 004cb042
    MOVSD ES:EDI,ESI                    ; 004cb043
    MOVSD ES:EDI,ESI                    ; 004cb044
    PUSH EAX                            ; 004cb045
    FLD float ptr [ESP + 0x1b5c]        ; 004cb046
    LEA ESI,[ESP + 0x1b34]              ; 004cb04d
    FADD float ptr [0x005e1230]         ; 004cb054 | DAT_005e1230
    PUSH ECX                            ; 004cb05a
    FSTP float ptr [ESP + 0x1b60]       ; 004cb05b
    CALL core_actor.cpp_FUN_00408b40    ; 004cb062
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004cb067
    FLD float ptr [EBP + 0x18]          ; 004cb06a
    FDIV float ptr [0x00600d68]         ; 004cb06d | DAT_00600d68
    LEA EDI,[ESP + 0x1b48]              ; 004cb073
    LEA ESI,[ESP + 0x1b30]              ; 004cb07a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004cb081
    MOVSD ES:EDI,ESI                    ; 004cb084
    MOVSD ES:EDI,ESI                    ; 004cb085
    MOVSD ES:EDI,ESI                    ; 004cb086
    MOV EAX,dword ptr [EAX]             ; 004cb087
    MOV dword ptr [ESP + 0x1b60],EAX    ; 004cb089
    FADD float ptr [ESP + 0x1b60]       ; 004cb090
    FST float ptr [ESP]                 ; 004cb097
    FLD1                                ; 004cb09a
    FCOMPP                              ; 004cb09c
    FNSTSW AX                           ; 004cb09e
    SAHF                                ; 004cb0a0
    JC 0x004cb1c1                       ; 004cb0a1
        ;   XREF to: 004cb1c1 (CONDITIONAL_JUMP)  ; LAB_004cb1c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cb0a7
        ;   Label: LAB_004cb0a7
    ADD EAX,0x158                       ; 004cb0aa
    XOR EBX,EBX                         ; 004cb0af
    MOV dword ptr [ESP + 0x1b64],EAX    ; 004cb0b1
    LEA EAX,[ESP + 0x4]                 ; 004cb0b8
        ;   Label: LAB_004cb0b8
    PUSH EAX                            ; 004cb0bc
    MOV ESI,dword ptr [ESP + 0x1b68]    ; 004cb0bd
    PUSH ESI                            ; 004cb0c4
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90 ; 004cb0c5
        ;   XREF to: 0056ad90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 004cb0ca
    PUSH 0x567360                       ; 004cb0cd
    MOV EDI,dword ptr [EBP + 0x24]      ; 004cb0d2
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004cb0d5
    PUSH EDI                            ; 004cb0d8
    PUSH dword ptr [EAX]                ; 004cb0d9
    PUSH 0x0                            ; 004cb0db
    PUSH 0x0                            ; 004cb0dd
    PUSH ESI                            ; 004cb0df
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100 ; 004cb0e0
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 004cb0e5
    MOV EDX,dword ptr [EBP + 0x20]      ; 004cb0e8
    PUSH EDX                            ; 004cb0eb
    PUSH ESI                            ; 004cb0ec
    LEA ESI,[ESP + 0x1ad8]              ; 004cb0ed
    LEA EDI,[ESP + 0x1aa8]              ; 004cb0f4
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30 ; 004cb0fb
        ;   XREF to: 00568e30 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 004cb100
    LEA ESI,[ESP + 0x1ad8]              ; 004cb105
    ADD ESP,0x8                         ; 004cb10c
    LEA EAX,[ESP + 0x1aa0]              ; 004cb10f
    MOVSD.REP ES:EDI,ESI                ; 004cb116
    PUSH EAX                            ; 004cb118
    MOV ESI,dword ptr [EBP + 0x28]      ; 004cb119
    PUSH ESI                            ; 004cb11c
    LEA ESI,[ESP + 0x1b20]              ; 004cb11d
    LEA EDI,[ESP + 0x1b14]              ; 004cb124
    CALL core_xform.cpp_FUN_005b5080    ; 004cb12b
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x1b20]              ; 004cb130
    ADD ESP,0x8                         ; 004cb137
    LEA EAX,[ESP + 0x1b0c]              ; 004cb13a
    MOVSD ES:EDI,ESI                    ; 004cb141
    MOVSD ES:EDI,ESI                    ; 004cb142
    MOVSD ES:EDI,ESI                    ; 004cb143
    PUSH EAX                            ; 004cb144
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cb145
    PUSH EDI                            ; 004cb148
    LEA ESI,[ESP + 0x1b2c]              ; 004cb149
    CALL core_actor.cpp_FUN_00408b40    ; 004cb150
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004cb155
    LEA EAX,[ESP + 0x1b00]              ; 004cb158
    PUSH EAX                            ; 004cb15f
    LEA EAX,[ESP + 0x1b4c]              ; 004cb160
    LEA EDI,[ESP + 0x1b04]              ; 004cb167
    PUSH EAX                            ; 004cb16e
    MOV EAX,[0x00622c18]                ; 004cb16f | g_CDemonSetPtr
    LEA ESI,[ESP + 0x1b2c]              ; 004cb174
    PUSH EAX                            ; 004cb17b | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004cb17c
    MOVSD ES:EDI,ESI                    ; 004cb17d
    MOVSD ES:EDI,ESI                    ; 004cb17e
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 ; 004cb17f
        ;   XREF to: 00557230 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 004cb184
    TEST EAX,EAX                        ; 004cb187
    JZ 0x004cb1cd                       ; 004cb189
        ;   XREF to: 004cb1cd (CONDITIONAL_JUMP)  ; LAB_004cb1cd
    TEST EBX,EBX                        ; 004cb18b
    JZ 0x004cb19b                       ; 004cb18d
        ;   XREF to: 004cb19b (CONDITIONAL_JUMP)  ; LAB_004cb19b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004cb18f
    MOV EAX,dword ptr [EAX]             ; 004cb192
    MOV dword ptr [ESP + 0x1b60],EAX    ; 004cb194
    FLD float ptr [ESP + 0x1b60]        ; 004cb19b
        ;   Label: LAB_004cb19b
    FADD float ptr [ESP]                ; 004cb1a2
    FMUL double ptr [0x005e1234]        ; 004cb1a5 | DAT_005e1234
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004cb1ab
    INC EBX                             ; 004cb1ae
    FSTP float ptr [EAX]                ; 004cb1af
    CMP EBX,0x7                         ; 004cb1b1
    JL 0x004cb0b8                       ; 004cb1b4
        ;   XREF to: 004cb0b8 (CONDITIONAL_JUMP)  ; LAB_004cb0b8
    MOV ESP,EBP                         ; 004cb1ba
    POP EBP                             ; 004cb1bc
    POP EDI                             ; 004cb1bd
    POP ESI                             ; 004cb1be
    POP EBX                             ; 004cb1bf
    RET                                 ; 004cb1c0
    MOV dword ptr [ESP],0x3f800000      ; 004cb1c1
        ;   Label: LAB_004cb1c1
    JMP 0x004cb0a7                      ; 004cb1c8
        ;   XREF to: 004cb0a7 (UNCONDITIONAL_JUMP)  ; LAB_004cb0a7
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004cb1cd
        ;   Label: LAB_004cb1cd
    MOV EAX,dword ptr [EAX]             ; 004cb1d0
    MOV dword ptr [ESP],EAX             ; 004cb1d2
    JMP 0x004cb19b                      ; 004cb1d5
        ;   XREF to: 004cb19b (UNCONDITIONAL_JUMP)  ; LAB_004cb19b

