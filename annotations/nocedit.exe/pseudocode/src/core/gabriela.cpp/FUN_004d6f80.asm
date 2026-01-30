; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gabriela_cpp_FUN_004d6f80(void)
;
; Local Variables:
; undefined4       Stack[-0x1b48]:4  local_1b48
; undefined1       Stack[-0x1b44]:1  local_1b44
; undefined1       Stack[-0xa8]:1  local_a8
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x48]:1  local_48
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004d6d40 at 004d6ee6
;
; Referenced Globals:
;   float FLOAT_0062b101 = -0.3000000
;   double DOUBLE_0062b105 = 0.5
;   float FLOAT_0065e7c8 = 0.05000000
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6f80
        ;   Label: core_gabriela.cpp_FUN_004d6f80
    PUSH ESI                            ; 004d6f81
    PUSH EDI                            ; 004d6f82
    PUSH EBP                            ; 004d6f83
    MOV EBP,ESP                         ; 004d6f84
    SUB ESP,0x1b38                      ; 004d6f86
    AND ESP,0xfffffff8                  ; 004d6f8c
    LEA EAX,[ESP + 0x4]                 ; 004d6f8f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d6f93
    PUSH EAX                            ; 004d6f96
    ADD EBX,0x158                       ; 004d6f97
    PUSH EBX                            ; 004d6f9d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510 ; 004d6f9e
        ;   XREF to: 005a1510 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance * this_ptr, SBoneTransformData * bone_transform)
    ADD ESP,0x8                         ; 004d6fa3
    MOV EDX,dword ptr [EBP + 0x24]      ; 004d6fa6
    PUSH EDX                            ; 004d6fa9
    LEA EAX,[ESP + 0x1b1c]              ; 004d6faa
    PUSH EAX                            ; 004d6fb1
    PUSH EBX                            ; 004d6fb2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004d6fb3
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004d6fb8
    LEA EAX,[ESP + 0x1b18]              ; 004d6fbb
    FLD float ptr [ESP + 0x1b1c]        ; 004d6fc2
    PUSH EAX                            ; 004d6fc9
    LEA EAX,[ESP + 0x1b28]              ; 004d6fca
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d6fd1
    PUSH EAX                            ; 004d6fd4
    FADD float ptr [0x0062b101]         ; 004d6fd5 | FLOAT_0062b101
    PUSH ECX                            ; 004d6fdb
    FSTP float ptr [ESP + 0x1b28]       ; 004d6fdc
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d6fe3
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d6fe8
    FLD float ptr [EBP + 0x18]          ; 004d6feb
    FDIV float ptr [0x0065e7c8]         ; 004d6fee | FLOAT_0065e7c8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004d6ff4
    MOV EAX,dword ptr [EAX]             ; 004d6ff7
    MOV dword ptr [ESP + 0x1b30],EAX    ; 004d6ff9
    FADD float ptr [ESP + 0x1b30]       ; 004d7000
    FST float ptr [ESP]                 ; 004d7007
    FLD1                                ; 004d700a
    FCOMPP                              ; 004d700c
    FNSTSW AX                           ; 004d700e
    SAHF                                ; 004d7010
    JC 0x004d710a                       ; 004d7011
        ;   XREF to: 004d710a (CONDITIONAL_JUMP)  ; LAB_004d710a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d7017
        ;   Label: LAB_004d7017
    ADD EAX,0x158                       ; 004d701a
    XOR EBX,EBX                         ; 004d701f
    MOV dword ptr [ESP + 0x1b34],EAX    ; 004d7021
    LEA EAX,[ESP + 0x4]                 ; 004d7028
        ;   Label: LAB_004d7028
    PUSH EAX                            ; 004d702c
    MOV ESI,dword ptr [ESP + 0x1b38]    ; 004d702d
    PUSH ESI                            ; 004d7034
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0 ; 004d7035
        ;   XREF to: 005a15e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance * this_ptr, SBoneTransformData * bone_transform)
    ADD ESP,0x8                         ; 004d703a
    PUSH 0x59ddb0                       ; 004d703d
    MOV EDI,dword ptr [EBP + 0x24]      ; 004d7042
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004d7045
    PUSH EDI                            ; 004d7048
    PUSH dword ptr [EAX]                ; 004d7049
    PUSH 0x0                            ; 004d704b
    PUSH 0x0                            ; 004d704d
    PUSH ESI                            ; 004d704f
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004d7050
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 004d7055
    MOV EDX,dword ptr [EBP + 0x20]      ; 004d7058
    PUSH EDX                            ; 004d705b
    PUSH ESI                            ; 004d705c
    LEA ESI,[ESP + 0x1ad8]              ; 004d705d
    LEA EDI,[ESP + 0x1aa8]              ; 004d7064
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 ; 004d706b
        ;   XREF to: 0059f820 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 004d7070
    LEA ESI,[ESP + 0x1ad8]              ; 004d7075
    ADD ESP,0x8                         ; 004d707c
    LEA EAX,[ESP + 0x1aa0]              ; 004d707f
    MOVSD.REP ES:EDI,ESI                ; 004d7086
    PUSH EAX                            ; 004d7088
    MOV ESI,dword ptr [EBP + 0x28]      ; 004d7089
    PUSH ESI                            ; 004d708c
    LEA EAX,[ESP + 0x1b08]              ; 004d708d
    PUSH EAX                            ; 004d7094
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004d7095
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004d709a
    PUSH EAX                            ; 004d709d
    LEA EAX,[ESP + 0x1b10]              ; 004d709e
    PUSH EAX                            ; 004d70a5
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d70a6
    PUSH EDI                            ; 004d70a9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d70aa
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d70af
    LEA EAX,[ESP + 0x1b0c]              ; 004d70b2
    PUSH EAX                            ; 004d70b9
    LEA EAX,[ESP + 0x1b28]              ; 004d70ba
    PUSH EAX                            ; 004d70c1
    MOV EAX,[0x006810c8]                ; 004d70c2 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004d70c7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 ; 004d70c8
        ;   XREF to: 00572460 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 004d70cd
    TEST EAX,EAX                        ; 004d70d0
    JZ 0x004d7116                       ; 004d70d2
        ;   XREF to: 004d7116 (CONDITIONAL_JUMP)  ; LAB_004d7116
    TEST EBX,EBX                        ; 004d70d4
    JZ 0x004d70e4                       ; 004d70d6
        ;   XREF to: 004d70e4 (CONDITIONAL_JUMP)  ; LAB_004d70e4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004d70d8
    MOV EAX,dword ptr [EAX]             ; 004d70db
    MOV dword ptr [ESP + 0x1b30],EAX    ; 004d70dd
    FLD float ptr [ESP + 0x1b30]        ; 004d70e4
        ;   Label: LAB_004d70e4
    FADD float ptr [ESP]                ; 004d70eb
    FMUL double ptr [0x0062b105]        ; 004d70ee | DOUBLE_0062b105
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004d70f4
    INC EBX                             ; 004d70f7
    FSTP float ptr [EAX]                ; 004d70f8
    CMP EBX,0x7                         ; 004d70fa
    JL 0x004d7028                       ; 004d70fd
        ;   XREF to: 004d7028 (CONDITIONAL_JUMP)  ; LAB_004d7028
    MOV ESP,EBP                         ; 004d7103
    POP EBP                             ; 004d7105
    POP EDI                             ; 004d7106
    POP ESI                             ; 004d7107
    POP EBX                             ; 004d7108
    RET                                 ; 004d7109
    MOV dword ptr [ESP],0x3f800000      ; 004d710a
        ;   Label: LAB_004d710a
    JMP 0x004d7017                      ; 004d7111
        ;   XREF to: 004d7017 (UNCONDITIONAL_JUMP)  ; LAB_004d7017
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004d7116
        ;   Label: LAB_004d7116
    MOV EAX,dword ptr [EAX]             ; 004d7119
    MOV dword ptr [ESP],EAX             ; 004d711b
    JMP 0x004d70e4                      ; 004d711e
        ;   XREF to: 004d70e4 (UNCONDITIONAL_JUMP)  ; LAB_004d70e4

