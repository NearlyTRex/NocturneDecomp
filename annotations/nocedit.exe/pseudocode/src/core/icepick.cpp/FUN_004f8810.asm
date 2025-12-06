; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_FUN_004f8810()
;
; Local Variables:
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x20]:1  local_20
;
; XREF[1]:
;   core_icepick.cpp_FUN_004f80b0 at 004f83b7
;
; Referenced Globals:
;   TerminatedCString s_shoot_0062f72b
;   double DOUBLE_0062f733 = 2
;   double DOUBLE_0062f73b = 3.14159265350000
;   double DOUBLE_0062f743 = 0.785398163375000
;   double DOUBLE_0062f74b = -0.785398163375000
;   undefined4 DAT_02db89b0
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8810
        ;   Label: core_icepick.cpp_FUN_004f8810
    PUSH EBP                            ; 004f8811
    SUB ESP,0x28                        ; 004f8812
    MOV EBX,dword ptr [ESP + 0x34]      ; 004f8815
    CMP dword ptr [EBX + 0x1fbf4],0x0   ; 004f8819
    JZ 0x004f8930                       ; 004f8820 | LAB_004f8930
        ;   XREF to: 004f8930 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x1fbd4]   ; 004f8826
    TEST ECX,ECX                        ; 004f882c
    JNZ 0x004f8936                      ; 004f882e | LAB_004f8936
        ;   XREF to: 004f8936 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x38]          ; 004f8834
    FMUL double ptr [0x0062f733]        ; 004f8838 | double DOUBLE_0062f733
    FSUBR float ptr [EBX + 0x1fbfc]     ; 004f883e
    FST float ptr [EBX + 0x1fbfc]       ; 004f8844
    FLDZ                                ; 004f884a
    FCOMPP                              ; 004f884c
    FNSTSW AX                           ; 004f884e
    SAHF                                ; 004f8850
    JBE 0x004f8859                      ; 004f8851 | LAB_004f8859
        ;   XREF to: 004f8859 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fbfc],ECX   ; 004f8853
    PUSH EDI                            ; 004f8859
        ;   Label: LAB_004f8859
    PUSH ESI                            ; 004f885a
    PUSH 0x1                            ; 004f885b
    PUSH 0x62f72b                       ; 004f885d | = "shoot" | s_shoot_0062f72b = shoot
    LEA ESI,[EBX + 0x158]               ; 004f8862
    PUSH ESI                            ; 004f8868
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004f8869 | CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f886e
    PUSH EAX                            ; 004f8871
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 004f8872 | int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f8877
    PUSH 0x59ddb0                       ; 004f887a
    MOV EDI,dword ptr [0x02db89b0]      ; 004f887f | undefined4 DAT_02db89b0
    PUSH EDI                            ; 004f8885
    PUSH dword ptr [EBX + 0x1fbfc]      ; 004f8886
    PUSH 0x0                            ; 004f888c
    PUSH EAX                            ; 004f888e
    PUSH ESI                            ; 004f888f
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004f8890 | void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + 0xbe54]        ; 004f8895
    FMUL double ptr [0x0062f73b]        ; 004f889b | double DOUBLE_0062f73b
    FMUL double ptr [0x0062f733]        ; 004f88a1 | double DOUBLE_0062f733
    ADD ESP,0x18                        ; 004f88a7
    FMUL float ptr [ESP + 0x40]         ; 004f88aa
    FADD float ptr [EBX + 0x1fc00]      ; 004f88ae
    FST float ptr [EBX + 0x1fc00]       ; 004f88b4
    FCOMP double ptr [0x0062f743]       ; 004f88ba | double DOUBLE_0062f743
    FNSTSW AX                           ; 004f88c0
    SAHF                                ; 004f88c2
    JBE 0x004f88cf                      ; 004f88c3 | LAB_004f88cf
        ;   XREF to: 004f88cf (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fc00],0x3f490fdb ; 004f88c5
    FLD float ptr [EBX + 0x1fc00]       ; 004f88cf
        ;   Label: LAB_004f88cf
    FCOMP double ptr [0x0062f74b]       ; 004f88d5 | double DOUBLE_0062f74b
    FNSTSW AX                           ; 004f88db
    SAHF                                ; 004f88dd
    JNC 0x004f88ea                      ; 004f88de | LAB_004f88ea
        ;   XREF to: 004f88ea (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fc00],0xbf490fdb ; 004f88e0
    LEA ESI,[ESP + 0x8]                 ; 004f88ea
        ;   Label: LAB_004f88ea
    PUSH dword ptr [EBX + 0x1fc00]      ; 004f88ee
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 004f88f4 | void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f88f9
    LEA EDI,[ESP + 0x18]                ; 004f88fc
    PUSH 0x59ddb0                       ; 004f8900
    MOV EBP,dword ptr [0x02db89b0]      ; 004f8905 | undefined4 DAT_02db89b0
    LEA ESI,[ESP + 0xc]                 ; 004f890b
    PUSH EBP                            ; 004f890f
    MOVSD ES:EDI,ESI                    ; 004f8910
    MOVSD ES:EDI,ESI                    ; 004f8911
    MOVSD ES:EDI,ESI                    ; 004f8912
    MOVSD ES:EDI,ESI                    ; 004f8913
    LEA EAX,[ESP + 0x20]                ; 004f8914
    PUSH dword ptr [EBX + 0x1fbfc]      ; 004f8918
    PUSH EAX                            ; 004f891e
    ADD EBX,0x158                       ; 004f891f
    PUSH EBX                            ; 004f8925
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 004f8926 | void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004f892b
    POP ESI                             ; 004f892e
    POP EDI                             ; 004f892f
    ADD ESP,0x28                        ; 004f8930
        ;   Label: LAB_004f8930
    POP EBP                             ; 004f8933
    POP EBX                             ; 004f8934
    RET                                 ; 004f8935
    FLD float ptr [ESP + 0x38]          ; 004f8936
        ;   Label: LAB_004f8936
    FMUL double ptr [0x0062f733]        ; 004f893a | double DOUBLE_0062f733
    FADD float ptr [EBX + 0x1fbfc]      ; 004f8940
    FST float ptr [EBX + 0x1fbfc]       ; 004f8946
    FLD1                                ; 004f894c
    FCOMPP                              ; 004f894e
    FNSTSW AX                           ; 004f8950
    SAHF                                ; 004f8952
    JNC 0x004f8859                      ; 004f8953 | LAB_004f8859
        ;   XREF to: 004f8859 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fbfc],0x3f800000 ; 004f8959
    JMP 0x004f8859                      ; 004f8963 | LAB_004f8859
        ;   XREF to: 004f8859 (UNCONDITIONAL_JUMP)

