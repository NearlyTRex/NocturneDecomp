; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   rotation_quat
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[11]:
;   core_doc.cpp_CDoc_makeDrawDecision_FUN_0046ea80 at 0046efc6
;   core_doc.cpp_FUN_0046caa0 at 0046ce2c
;   core_doc.cpp_FUN_0046e630 at 0046e6f4
;   core_doc.cpp_FUN_0046f200 at 0046f4dd
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0 at 004c90dc
;   core_icepick.cpp_FUN_004f1670 at 004f176e
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_0051def0 at 0051e1f4
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_0058a360 at 0058a830
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0 at 00588d26
;   core_stranger.cpp_FUN_00589f10 at 00589fd4
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005f2531
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00563630
;   core_xform.cpp_multiplyQuaternion_FUN_005b77b0
;   core_xform.cpp_quaternionFromAxisAngle_FUN_005b7bb0
;   core_xform.cpp_quaternionToAxisAngle_FUN_005b78a0
;   core_xform.cpp_quaternionToMatrix3x4_FUN_005b7560
;   core_xform.cpp_transformVector3x4InPlace_FUN_005b5100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005695e0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
    PUSH ESI                            ; 005695e1
    PUSH EDI                            ; 005695e2
    PUSH EBP                            ; 005695e3
    MOV EBP,ESP                         ; 005695e4
    SUB ESP,0xd4                        ; 005695e6
    AND ESP,0xfffffff8                  ; 005695ec
    MOV EDX,dword ptr [EBP + 0x14]      ; 005695ef
    PUSH EDX                            ; 005695f2
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 005695f3
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005695f8
    MOV ESI,EAX                         ; 005695fb
    MOV dword ptr [ESP + 0xc4],EAX      ; 005695fd
    LEA EAX,[ESP + 0xb4]                ; 00569604
    PUSH EAX                            ; 0056960b
    LEA EAX,[ESP + 0xc4]                ; 0056960c
    PUSH EAX                            ; 00569613
    MOV ECX,dword ptr [EBP + 0x18]      ; 00569614
    PUSH ECX                            ; 00569617
    XOR EBX,EBX                         ; 00569618
    CALL core_xform.cpp_quaternionToAxisAngle_FUN_005b78a0 ; 0056961a
        ;   XREF to: 005b78a0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionToAxisAngle_FUN_005b78a0(CQuaternion4f * quat_in, float * angle_out, CVector3f * axis_out)
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0056961f
    ADD ESP,0xc                         ; 00569625
    TEST EDI,EDI                        ; 00569628
    JLE 0x00569692                      ; 0056962a
        ;   XREF to: 00569692 (CONDITIONAL_JUMP)  ; LAB_00569692
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056962c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056962f
    ADD EAX,0x6b0                       ; 00569632
    MOV dword ptr [ESP + 0xc8],ESI      ; 00569637
    MOV dword ptr [ESP + 0xcc],EAX      ; 0056963e
    MOV ESI,dword ptr [EBP + 0x20]      ; 00569645
        ;   Label: LAB_00569645
    PUSH ESI                            ; 00569648
    PUSH EBX                            ; 00569649
    MOV EDI,dword ptr [ESP + 0xcc]      ; 0056964a
    PUSH EDI                            ; 00569651
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00563630 ; 00569652
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00569657
    TEST EAX,EAX                        ; 0056965a
    JGE 0x005696a3                      ; 0056965c
        ;   XREF to: 005696a3 (CONDITIONAL_JUMP)  ; LAB_005696a3
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0056965e
        ;   Label: LAB_0056965e
    ADD EAX,0x10                        ; 00569665
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00569668
    MOV dword ptr [ESP + 0xc8],EAX      ; 0056966f
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00569676
    INC EBX                             ; 0056967d
    ADD EDX,0x10                        ; 0056967e
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 00569681
    MOV dword ptr [ESP + 0xcc],EDX      ; 00569687
    CMP EBX,ECX                         ; 0056968e
    JL 0x00569645                       ; 00569690
        ;   XREF to: 00569645 (CONDITIONAL_JUMP)  ; LAB_00569645
    CMP dword ptr [EBP + 0x20],0x0      ; 00569692
        ;   Label: LAB_00569692
    JL 0x0056973b                       ; 00569696
        ;   XREF to: 0056973b (CONDITIONAL_JUMP)  ; LAB_0056973b
    MOV ESP,EBP                         ; 0056969c
    POP EBP                             ; 0056969e
    POP EDI                             ; 0056969f
    POP ESI                             ; 005696a0
    POP EBX                             ; 005696a1
    RET                                 ; 005696a2
    MOV EDX,dword ptr [EBP + 0x14]      ; 005696a3
        ;   Label: LAB_005696a3
    PUSH EDX                            ; 005696a6
    PUSH EAX                            ; 005696a7
    PUSH dword ptr [EBP + 0x1c]         ; 005696a8
    PUSH ESI                            ; 005696ab
    PUSH EBX                            ; 005696ac
    CALL dword ptr [EBP + 0x24]         ; 005696ad
    MOV dword ptr [ESP + 0xe4],EAX      ; 005696b0
    FLD float ptr [ESP + 0xe4]          ; 005696b7
    ADD ESP,0x14                        ; 005696be
    FMUL float ptr [ESP + 0xc0]         ; 005696c1
    FST float ptr [ESP]                 ; 005696c8
    FABS                                ; 005696cb
    FCOMP double ptr [0x005f2531]       ; 005696cd | DAT_005f2531
    FNSTSW AX                           ; 005696d3
    SAHF                                ; 005696d5
    JBE 0x0056965e                      ; 005696d6
        ;   XREF to: 0056965e (CONDITIONAL_JUMP)  ; LAB_0056965e
    LEA EAX,[ESP + 0xb4]                ; 005696d8
    PUSH EAX                            ; 005696df
    LEA ESI,[ESP + 0xa8]                ; 005696e0
    PUSH dword ptr [ESP + 0x4]          ; 005696e7
    LEA EDI,[ESP + 0x8c]                ; 005696eb
    CALL core_xform.cpp_quaternionFromAxisAngle_FUN_005b7bb0 ; 005696f2
        ;   XREF to: 005b7bb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAxisAngle_FUN_005b7bb0()
    LEA ESI,[ESP + 0xac]                ; 005696f7
    ADD ESP,0x8                         ; 005696fe
    LEA EAX,[ESP + 0x84]                ; 00569701
    MOVSD ES:EDI,ESI                    ; 00569708
    MOVSD ES:EDI,ESI                    ; 00569709
    MOVSD ES:EDI,ESI                    ; 0056970a
    MOVSD ES:EDI,ESI                    ; 0056970b
    PUSH EAX                            ; 0056970c
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0056970d
    PUSH ESI                            ; 00569714
    LEA ESI,[ESP + 0x6c]                ; 00569715
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00569719
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 0056971e
    MOV EDI,dword ptr [ESP + 0xc8]      ; 00569721
    LEA ESI,[ESP + 0x64]                ; 00569728
    LEA EDI,[EDI + 0x6b0]               ; 0056972c
    MOVSD ES:EDI,ESI                    ; 00569732
    MOVSD ES:EDI,ESI                    ; 00569733
    MOVSD ES:EDI,ESI                    ; 00569734
    MOVSD ES:EDI,ESI                    ; 00569735
    JMP 0x0056965e                      ; 00569736
        ;   XREF to: 0056965e (UNCONDITIONAL_JUMP)  ; LAB_0056965e
    FLD float ptr [ESP + 0xc0]          ; 0056973b
        ;   Label: LAB_0056973b
    LEA EAX,[ESP + 0xb4]                ; 00569742
    FMUL float ptr [EBP + 0x1c]         ; 00569749
    PUSH EAX                            ; 0056974c
    LEA ESI,[ESP + 0x78]                ; 0056974d
    SUB ESP,0x4                         ; 00569751
    LEA EDI,[ESP + 0x9c]                ; 00569754
    FSTP float ptr [ESP]                ; 0056975b
    CALL core_xform.cpp_quaternionFromAxisAngle_FUN_005b7bb0 ; 0056975e
        ;   XREF to: 005b7bb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAxisAngle_FUN_005b7bb0()
    LEA ESI,[ESP + 0x7c]                ; 00569763
    ADD ESP,0x8                         ; 00569767
    LEA EAX,[ESP + 0x94]                ; 0056976a
    MOVSD ES:EDI,ESI                    ; 00569771
    MOVSD ES:EDI,ESI                    ; 00569772
    MOVSD ES:EDI,ESI                    ; 00569773
    MOVSD ES:EDI,ESI                    ; 00569774
    PUSH EAX                            ; 00569775
    LEA ESI,[ESP + 0x38]                ; 00569776
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_005b7560 ; 0056977a
        ;   XREF to: 005b7560 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_quaternionToMatrix3x4_FUN_005b7560(CQuaternion4f * quat_in, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 0056977f
    LEA EAX,[ESP + 0x4]                 ; 00569782
    LEA EDI,[ESP + 0x4]                 ; 00569786
    PUSH EAX                            ; 0056978a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056978b
    MOV ECX,0xc                         ; 0056978e
    ADD EAX,0x6a4                       ; 00569793
    LEA ESI,[ESP + 0x38]                ; 00569798
    PUSH EAX                            ; 0056979c
    MOVSD.REP ES:EDI,ESI                ; 0056979d
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005b5100 ; 0056979f
        ;   XREF to: 005b5100 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4InPlace_FUN_005b5100(CVector3f * input_output_vector, CMatrix3x4f * matrix)
    ADD ESP,0x8                         ; 005697a4
    MOV ESP,EBP                         ; 005697a7
    POP EBP                             ; 005697a9
    POP EDI                             ; 005697aa
    POP ESI                             ; 005697ab
    POP EBX                             ; 005697ac
    RET                                 ; 005697ad

