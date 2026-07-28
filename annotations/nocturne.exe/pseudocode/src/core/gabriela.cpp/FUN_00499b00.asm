; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_00499b00(CDemonActor *param_1,float param_2,float *param_3,undefined4 param_4,int param_5,CVector3f *param_6)
;
; Local Variables:
; undefined4       Stack[-0x1b48]:4  local_1b48
; undefined        Stack[-0x1b44]:1  local_1b44
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004998c0 at 004999f7
;
; Referenced Globals:
;   float FLOAT_00582286 = -0.3000000
;   double DOUBLE_0058228a = 0.5
;   float FLOAT_0059dcb8 = 0.05000000
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499b00
        ;   Label: core_gabriela.cpp_FUN_00499b00
    PUSH ESI                            ; 00499b01
    PUSH EDI                            ; 00499b02
    PUSH EBP                            ; 00499b03
    MOV EBP,ESP                         ; 00499b04
    SUB ESP,0x1b38                      ; 00499b06
    AND ESP,0xfffffff8                  ; 00499b0c
    LEA EAX,[ESP + 0x4]                 ; 00499b0f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00499b13
    PUSH EAX                            ; 00499b16
    ADD EBX,0x150                       ; 00499b17
    PUSH EBX                            ; 00499b1d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90 ; 00499b1e
        ;   XREF to: 0051ed90 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00499b23
    MOV EDX,dword ptr [EBP + 0x24]      ; 00499b26
    PUSH EDX                            ; 00499b29
    LEA EAX,[ESP + 0x1b1c]              ; 00499b2a
    PUSH EAX                            ; 00499b31
    PUSH EBX                            ; 00499b32
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00499b33
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00499b38
    LEA EAX,[ESP + 0x1b18]              ; 00499b3b
    FLD float ptr [ESP + 0x1b1c]        ; 00499b42
    PUSH EAX                            ; 00499b49
    LEA EAX,[ESP + 0x1b28]              ; 00499b4a
    MOV ECX,dword ptr [EBP + 0x14]      ; 00499b51
    PUSH EAX                            ; 00499b54
    FADD float ptr [0x00582286]         ; 00499b55 | FLOAT_00582286
    PUSH ECX                            ; 00499b5b
    FSTP float ptr [ESP + 0x1b28]       ; 00499b5c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00499b63
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00499b68
    FLD float ptr [EBP + 0x18]          ; 00499b6b
    FDIV float ptr [0x0059dcb8]         ; 00499b6e | FLOAT_0059dcb8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00499b74
    MOV EAX,dword ptr [EAX]             ; 00499b77
    MOV dword ptr [ESP + 0x1b30],EAX    ; 00499b79
    FADD float ptr [ESP + 0x1b30]       ; 00499b80
    FST float ptr [ESP]                 ; 00499b87
    FLD1                                ; 00499b8a
    FCOMPP                              ; 00499b8c
    FNSTSW AX                           ; 00499b8e
    SAHF                                ; 00499b90
    JC 0x00499c8a                       ; 00499b91
        ;   XREF to: 00499c8a (CONDITIONAL_JUMP)  ; LAB_00499c8a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00499b97
        ;   Label: LAB_00499b97
    ADD EAX,0x150                       ; 00499b9a
    XOR EBX,EBX                         ; 00499b9f
    MOV dword ptr [ESP + 0x1b34],EAX    ; 00499ba1
    LEA EAX,[ESP + 0x4]                 ; 00499ba8
        ;   Label: LAB_00499ba8
    PUSH EAX                            ; 00499bac
    MOV ESI,dword ptr [ESP + 0x1b38]    ; 00499bad
    PUSH ESI                            ; 00499bb4
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60 ; 00499bb5
        ;   XREF to: 0051ee60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00499bba
    PUSH 0x51b650                       ; 00499bbd
    MOV EDI,dword ptr [EBP + 0x24]      ; 00499bc2
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00499bc5
    PUSH EDI                            ; 00499bc8
    PUSH dword ptr [EAX]                ; 00499bc9
    PUSH 0x0                            ; 00499bcb
    PUSH 0x0                            ; 00499bcd
    PUSH ESI                            ; 00499bcf
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 00499bd0
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0()
    ADD ESP,0x18                        ; 00499bd5
    MOV EDX,dword ptr [EBP + 0x20]      ; 00499bd8
    PUSH EDX                            ; 00499bdb
    PUSH ESI                            ; 00499bdc
    LEA ESI,[ESP + 0x1ad8]              ; 00499bdd
    LEA EDI,[ESP + 0x1aa8]              ; 00499be4
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0 ; 00499beb
        ;   XREF to: 0051d0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0()
    MOV ECX,0xc                         ; 00499bf0
    LEA ESI,[ESP + 0x1ad8]              ; 00499bf5
    ADD ESP,0x8                         ; 00499bfc
    LEA EAX,[ESP + 0x1aa0]              ; 00499bff
    MOVSD.REP ES:EDI,ESI                ; 00499c06
    PUSH EAX                            ; 00499c08
    MOV ESI,dword ptr [EBP + 0x28]      ; 00499c09
    PUSH ESI                            ; 00499c0c
    LEA EAX,[ESP + 0x1b08]              ; 00499c0d
    PUSH EAX                            ; 00499c14
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00499c15
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00499c1a
    PUSH EAX                            ; 00499c1d
    LEA EAX,[ESP + 0x1b10]              ; 00499c1e
    PUSH EAX                            ; 00499c25
    MOV EDI,dword ptr [EBP + 0x14]      ; 00499c26
    PUSH EDI                            ; 00499c29
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00499c2a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00499c2f
    LEA EAX,[ESP + 0x1b0c]              ; 00499c32
    PUSH EAX                            ; 00499c39
    LEA EAX,[ESP + 0x1b28]              ; 00499c3a
    PUSH EAX                            ; 00499c41
    MOV EAX,[0x005be368]                ; 00499c42 | DAT_005be368
    PUSH EAX                            ; 00499c47 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30 ; 00499c48
        ;   XREF to: 0050fa30 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 00499c4d
    TEST EAX,EAX                        ; 00499c50
    JZ 0x00499c96                       ; 00499c52
        ;   XREF to: 00499c96 (CONDITIONAL_JUMP)  ; LAB_00499c96
    TEST EBX,EBX                        ; 00499c54
    JZ 0x00499c64                       ; 00499c56
        ;   XREF to: 00499c64 (CONDITIONAL_JUMP)  ; LAB_00499c64
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00499c58
    MOV EAX,dword ptr [EAX]             ; 00499c5b
    MOV dword ptr [ESP + 0x1b30],EAX    ; 00499c5d
    FLD float ptr [ESP + 0x1b30]        ; 00499c64
        ;   Label: LAB_00499c64
    FADD float ptr [ESP]                ; 00499c6b
    FMUL double ptr [0x0058228a]        ; 00499c6e | DOUBLE_0058228a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00499c74
    INC EBX                             ; 00499c77
    FSTP float ptr [EAX]                ; 00499c78
    CMP EBX,0x7                         ; 00499c7a
    JL 0x00499ba8                       ; 00499c7d
        ;   XREF to: 00499ba8 (CONDITIONAL_JUMP)  ; LAB_00499ba8
    MOV ESP,EBP                         ; 00499c83
    POP EBP                             ; 00499c85
    POP EDI                             ; 00499c86
    POP ESI                             ; 00499c87
    POP EBX                             ; 00499c88
    RET                                 ; 00499c89
    MOV dword ptr [ESP],0x3f800000      ; 00499c8a
        ;   Label: LAB_00499c8a
    JMP 0x00499b97                      ; 00499c91
        ;   XREF to: 00499b97 (UNCONDITIONAL_JUMP)  ; LAB_00499b97
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00499c96
        ;   Label: LAB_00499c96
    MOV EAX,dword ptr [EAX]             ; 00499c99
    MOV dword ptr [ESP],EAX             ; 00499c9b
    JMP 0x00499c64                      ; 00499c9e
        ;   XREF to: 00499c64 (UNCONDITIONAL_JUMP)  ; LAB_00499c64

