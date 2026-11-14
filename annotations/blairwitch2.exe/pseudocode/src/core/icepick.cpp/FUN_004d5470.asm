; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_FUN_004d5470(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_process_FUN_004d4c50 at 004d4fd6
;
; Referenced Globals:
;   TerminatedCString s_shoot_005da84e
;   undefined4 DAT_005da856
;   undefined4 DAT_005da85e
;   undefined4 DAT_005da862
;   undefined4 DAT_01cee0f4
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5470
        ;   Label: core_icepick.cpp_FUN_004d5470
    SUB ESP,0x28                        ; 004d5471
    MOV EBX,dword ptr [ESP + 0x30]      ; 004d5474
    CMP dword ptr [EBX + 0x25660],0x0   ; 004d5478
    JZ 0x004d5578                       ; 004d547f
        ;   XREF to: 004d5578 (CONDITIONAL_JUMP)  ; LAB_004d5578
    MOV ECX,dword ptr [EBX + 0x25640]   ; 004d5485
    TEST ECX,ECX                        ; 004d548b
    JNZ 0x004d557d                      ; 004d548d
        ;   XREF to: 004d557d (CONDITIONAL_JUMP)  ; LAB_004d557d
    FLD float ptr [ESP + 0x34]          ; 004d5493
    FMUL double ptr [0x005da856]        ; 004d5497 | DAT_005da856
    FSUBR float ptr [EBX + 0x25668]     ; 004d549d
    FST float ptr [EBX + 0x25668]       ; 004d54a3
    FLDZ                                ; 004d54a9
    FCOMPP                              ; 004d54ab
    FNSTSW AX                           ; 004d54ad
    SAHF                                ; 004d54af
    JBE 0x004d54b8                      ; 004d54b0
        ;   XREF to: 004d54b8 (CONDITIONAL_JUMP)  ; LAB_004d54b8
    MOV dword ptr [EBX + 0x25668],ECX   ; 004d54b2
    PUSH EDI                            ; 004d54b8
        ;   Label: LAB_004d54b8
    PUSH ESI                            ; 004d54b9
    PUSH 0x1                            ; 004d54ba
    PUSH 0x5da84e                       ; 004d54bc | = "shoot"
    LEA ESI,[EBX + 0x2b4]               ; 004d54c1
    PUSH ESI                            ; 004d54c7
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004d54c8
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004d54cd
    PUSH EAX                            ; 004d54d0
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 004d54d1
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004d54d6
    PUSH 0x544cc0                       ; 004d54d9
    MOV EDI,dword ptr [0x01cee0f4]      ; 004d54de | DAT_01cee0f4
    PUSH EDI                            ; 004d54e4
    PUSH dword ptr [EBX + 0x25668]      ; 004d54e5
    PUSH 0x0                            ; 004d54eb
    PUSH EAX                            ; 004d54ed
    PUSH ESI                            ; 004d54ee
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60 ; 004d54ef
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBX + 0x10a94]       ; 004d54f4
    FMUL float ptr [0x005da85e]         ; 004d54fa | DAT_005da85e
    FMUL double ptr [0x005da856]        ; 004d5500 | DAT_005da856
    ADD ESP,0x18                        ; 004d5506
    FMUL float ptr [ESP + 0x3c]         ; 004d5509
    FADD float ptr [EBX + 0x2566c]      ; 004d550d
    FSTP float ptr [EBX + 0x2566c]      ; 004d5513
    CMP dword ptr [EBX + 0x2566c],0x3f490fdb ; 004d5519
    JLE 0x004d55af                      ; 004d5523
        ;   XREF to: 004d55af (CONDITIONAL_JUMP)  ; LAB_004d55af
    MOV dword ptr [EBX + 0x2566c],0x3f490fdb ; 004d5529
    LEA ESI,[ESP + 0x8]                 ; 004d5533
        ;   Label: LAB_004d5533
    PUSH dword ptr [EBX + 0x2566c]      ; 004d5537
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 004d553d
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 004d5542
    LEA EDI,[ESP + 0x18]                ; 004d5545
    PUSH 0x544cc0                       ; 004d5549
    MOV EAX,[0x01cee0f4]                ; 004d554e | DAT_01cee0f4
    LEA ESI,[ESP + 0xc]                 ; 004d5553
    PUSH EAX                            ; 004d5557
    MOVSD ES:EDI,ESI                    ; 004d5558
    MOVSD ES:EDI,ESI                    ; 004d5559
    MOVSD ES:EDI,ESI                    ; 004d555a
    MOVSD ES:EDI,ESI                    ; 004d555b
    LEA EAX,[ESP + 0x20]                ; 004d555c
    PUSH dword ptr [EBX + 0x25668]      ; 004d5560
    PUSH EAX                            ; 004d5566
    ADD EBX,0x2b4                       ; 004d5567
    PUSH EBX                            ; 004d556d
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 004d556e
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004d5573
    POP ESI                             ; 004d5576
    POP EDI                             ; 004d5577
    ADD ESP,0x28                        ; 004d5578
        ;   Label: LAB_004d5578
    POP EBX                             ; 004d557b
    RET                                 ; 004d557c
    FLD float ptr [ESP + 0x34]          ; 004d557d
        ;   Label: LAB_004d557d
    FMUL double ptr [0x005da856]        ; 004d5581 | DAT_005da856
    FADD float ptr [EBX + 0x25668]      ; 004d5587
    FST float ptr [EBX + 0x25668]       ; 004d558d
    FLD1                                ; 004d5593
    FCOMPP                              ; 004d5595
    FNSTSW AX                           ; 004d5597
    SAHF                                ; 004d5599
    JNC 0x004d54b8                      ; 004d559a
        ;   XREF to: 004d54b8 (CONDITIONAL_JUMP)  ; LAB_004d54b8
    MOV dword ptr [EBX + 0x25668],0x3f800000 ; 004d55a0
    JMP 0x004d54b8                      ; 004d55aa
        ;   XREF to: 004d54b8 (UNCONDITIONAL_JUMP)  ; LAB_004d54b8
    FLD float ptr [EBX + 0x2566c]       ; 004d55af
        ;   Label: LAB_004d55af
    FCOMP float ptr [0x005da862]        ; 004d55b5 | DAT_005da862
    FNSTSW AX                           ; 004d55bb
    SAHF                                ; 004d55bd
    JNC 0x004d5533                      ; 004d55be
        ;   XREF to: 004d5533 (CONDITIONAL_JUMP)  ; LAB_004d5533
    MOV dword ptr [EBX + 0x2566c],0xbf490fdb ; 004d55c4
    JMP 0x004d5533                      ; 004d55ce
        ;   XREF to: 004d5533 (UNCONDITIONAL_JUMP)  ; LAB_004d5533

