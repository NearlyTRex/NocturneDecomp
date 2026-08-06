; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_FUN_004ba740(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x20]:1  local_20
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_process_FUN_004b9fe0 at 004ba2e7
;
; Referenced Globals:
;   TerminatedCString s_shoot_0058618a
;   double DOUBLE_00586192 = 2
;   double DOUBLE_0058619a = 3.14159265350000
;   double DOUBLE_005861a2 = 0.785398163375000
;   double DOUBLE_005861aa = -0.785398163375000
;   undefined4 DAT_01cae2c8
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba740
        ;   Label: core_icepick.cpp_CIcePick_FUN_004ba740
    PUSH EBP                            ; 004ba741
    SUB ESP,0x28                        ; 004ba742
    MOV EBX,dword ptr [ESP + 0x34]      ; 004ba745
    CMP dword ptr [EBX + 0x1fa5c],0x0   ; 004ba749
    JZ 0x004ba860                       ; 004ba750
        ;   XREF to: 004ba860 (CONDITIONAL_JUMP)  ; LAB_004ba860
    MOV ECX,dword ptr [EBX + 0x1fa3c]   ; 004ba756
    TEST ECX,ECX                        ; 004ba75c
    JNZ 0x004ba866                      ; 004ba75e
        ;   XREF to: 004ba866 (CONDITIONAL_JUMP)  ; LAB_004ba866
    FLD float ptr [ESP + 0x38]          ; 004ba764
    FMUL double ptr [0x00586192]        ; 004ba768 | DOUBLE_00586192
    FSUBR float ptr [EBX + 0x1fa64]     ; 004ba76e
    FST float ptr [EBX + 0x1fa64]       ; 004ba774
    FLDZ                                ; 004ba77a
    FCOMPP                              ; 004ba77c
    FNSTSW AX                           ; 004ba77e
    SAHF                                ; 004ba780
    JBE 0x004ba789                      ; 004ba781
        ;   XREF to: 004ba789 (CONDITIONAL_JUMP)  ; LAB_004ba789
    MOV dword ptr [EBX + 0x1fa64],ECX   ; 004ba783
    PUSH EDI                            ; 004ba789
        ;   Label: LAB_004ba789
    PUSH ESI                            ; 004ba78a
    PUSH 0x1                            ; 004ba78b
    PUSH 0x58618a                       ; 004ba78d | = "shoot"
    LEA ESI,[EBX + 0x150]               ; 004ba792
    PUSH ESI                            ; 004ba798
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004ba799
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ba79e
    PUSH EAX                            ; 004ba7a1
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 004ba7a2
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004ba7a7
    PUSH 0x51b650                       ; 004ba7aa
    MOV EDI,dword ptr [0x01cae2c8]      ; 004ba7af | DAT_01cae2c8
    PUSH EDI                            ; 004ba7b5
    PUSH dword ptr [EBX + 0x1fa64]      ; 004ba7b6
    PUSH 0x0                            ; 004ba7bc
    PUSH EAX                            ; 004ba7be
    PUSH ESI                            ; 004ba7bf
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 004ba7c0
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBX + 0xbcbc]        ; 004ba7c5
    FMUL double ptr [0x0058619a]        ; 004ba7cb | DOUBLE_0058619a
    FMUL double ptr [0x00586192]        ; 004ba7d1 | DOUBLE_00586192
    ADD ESP,0x18                        ; 004ba7d7
    FMUL float ptr [ESP + 0x40]         ; 004ba7da
    FADD float ptr [EBX + 0x1fa68]      ; 004ba7de
    FST float ptr [EBX + 0x1fa68]       ; 004ba7e4
    FCOMP double ptr [0x005861a2]       ; 004ba7ea | DOUBLE_005861a2
    FNSTSW AX                           ; 004ba7f0
    SAHF                                ; 004ba7f2
    JBE 0x004ba7ff                      ; 004ba7f3
        ;   XREF to: 004ba7ff (CONDITIONAL_JUMP)  ; LAB_004ba7ff
    MOV dword ptr [EBX + 0x1fa68],0x3f490fdb ; 004ba7f5
    FLD float ptr [EBX + 0x1fa68]       ; 004ba7ff
        ;   Label: LAB_004ba7ff
    FCOMP double ptr [0x005861aa]       ; 004ba805 | DOUBLE_005861aa
    FNSTSW AX                           ; 004ba80b
    SAHF                                ; 004ba80d
    JNC 0x004ba81a                      ; 004ba80e
        ;   XREF to: 004ba81a (CONDITIONAL_JUMP)  ; LAB_004ba81a
    MOV dword ptr [EBX + 0x1fa68],0xbf490fdb ; 004ba810
    LEA ESI,[ESP + 0x8]                 ; 004ba81a
        ;   Label: LAB_004ba81a
    PUSH dword ptr [EBX + 0x1fa68]      ; 004ba81e
    CALL core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0 ; 004ba824
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 004ba829
    LEA EDI,[ESP + 0x18]                ; 004ba82c
    PUSH 0x51b650                       ; 004ba830
    MOV EBP,dword ptr [0x01cae2c8]      ; 004ba835 | DAT_01cae2c8
    LEA ESI,[ESP + 0xc]                 ; 004ba83b
    PUSH EBP                            ; 004ba83f
    MOVSD ES:EDI,ESI                    ; 004ba840
    MOVSD ES:EDI,ESI                    ; 004ba841
    MOVSD ES:EDI,ESI                    ; 004ba842
    MOVSD ES:EDI,ESI                    ; 004ba843
    LEA EAX,[ESP + 0x20]                ; 004ba844
    PUSH dword ptr [EBX + 0x1fa64]      ; 004ba848
    PUSH EAX                            ; 004ba84e
    ADD EBX,0x150                       ; 004ba84f
    PUSH EBX                            ; 004ba855
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 ; 004ba856
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004ba85b
    POP ESI                             ; 004ba85e
    POP EDI                             ; 004ba85f
    ADD ESP,0x28                        ; 004ba860
        ;   Label: LAB_004ba860
    POP EBP                             ; 004ba863
    POP EBX                             ; 004ba864
    RET                                 ; 004ba865
    FLD float ptr [ESP + 0x38]          ; 004ba866
        ;   Label: LAB_004ba866
    FMUL double ptr [0x00586192]        ; 004ba86a | DOUBLE_00586192
    FADD float ptr [EBX + 0x1fa64]      ; 004ba870
    FST float ptr [EBX + 0x1fa64]       ; 004ba876
    FLD1                                ; 004ba87c
    FCOMPP                              ; 004ba87e
    FNSTSW AX                           ; 004ba880
    SAHF                                ; 004ba882
    JNC 0x004ba789                      ; 004ba883
        ;   XREF to: 004ba789 (CONDITIONAL_JUMP)  ; LAB_004ba789
    MOV dword ptr [EBX + 0x1fa64],0x3f800000 ; 004ba889
    JMP 0x004ba789                      ; 004ba893
        ;   XREF to: 004ba789 (UNCONDITIONAL_JUMP)  ; LAB_004ba789

