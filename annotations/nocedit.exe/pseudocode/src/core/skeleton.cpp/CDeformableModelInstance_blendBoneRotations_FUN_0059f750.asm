; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
; Local Variables:
; float[1522]      Stack[-0x1808]:6088  afStackY_1808
; CQuaternion4f    Stack[-0x2c]:16  CStack_2c
; CSkeleton *      Stack[-0x1c]:4  local_1c
; CDeformableModelInstance * Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  fStack_14
;
; XREF[11]:
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 00413113
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fc85
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d4e97
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f10d4
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f83ab
;   core_scat.cpp_CScat_blendAimBones_FUN_005584a0 at 0055870a
;   core_scat.cpp_CScat_process_FUN_005571f0 at 00557596
;   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0 at 0059ff03
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0 at 005c058d
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520 at 005be832
;   ... and 1 more
;
; Referenced Globals:
;   double DOUBLE_0064ee20 = 0.00100000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f750
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
    PUSH ESI                            ; 0059f751
    PUSH EDI                            ; 0059f752
    PUSH EBP                            ; 0059f753
    SUB ESP,0x1c                        ; 0059f754
    FLD float ptr [ESP + 0x38]          ; 0059f757
    FCOMP double ptr [0x0064ee20]       ; 0059f75b | DOUBLE_0064ee20
    FNSTSW AX                           ; 0059f761
    SAHF                                ; 0059f763
    JA 0x0059f76e                       ; 0059f764
        ;   XREF to: 0059f76e (CONDITIONAL_JUMP)  ; LAB_0059f76e
    ADD ESP,0x1c                        ; 0059f766
        ;   Label: LAB_0059f766
    POP EBP                             ; 0059f769
    POP EDI                             ; 0059f76a
    POP ESI                             ; 0059f76b
    POP EBX                             ; 0059f76c
    RET                                 ; 0059f76d
    MOV EDX,dword ptr [ESP + 0x30]      ; 0059f76e
        ;   Label: LAB_0059f76e
    PUSH EDX                            ; 0059f772
    XOR EBX,EBX                         ; 0059f773
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059f775
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059f77a
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0059f77d
    MOV dword ptr [ESP + 0x10],EAX      ; 0059f783
    TEST ECX,ECX                        ; 0059f787
    JLE 0x0059f766                      ; 0059f789
        ;   XREF to: 0059f766 (CONDITIONAL_JUMP)  ; LAB_0059f766
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059f78b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0059f78f
    MOV dword ptr [ESP + 0x14],EAX      ; 0059f793
    ADD EBP,0x6b0                       ; 0059f797
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0059f79d
        ;   Label: LAB_0059f79d
    PUSH EAX                            ; 0059f7a1
    PUSH EBX                            ; 0059f7a2
    MOV EDX,dword ptr [ESP + 0x18]      ; 0059f7a3
    PUSH EDX                            ; 0059f7a7
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059f7a8
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0059f7ad
    TEST EAX,EAX                        ; 0059f7b0
    JGE 0x0059f7d3                      ; 0059f7b2
        ;   XREF to: 0059f7d3 (CONDITIONAL_JUMP)  ; LAB_0059f7d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059f7b4
        ;   Label: LAB_0059f7b4
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059f7b8
    ADD EBP,0x10                        ; 0059f7bc
    INC EBX                             ; 0059f7bf
    ADD ESI,0x10                        ; 0059f7c0
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0059f7c3
    MOV dword ptr [ESP + 0x14],ESI      ; 0059f7c9
    CMP EBX,EDI                         ; 0059f7cd
    JGE 0x0059f766                      ; 0059f7cf
        ;   XREF to: 0059f766 (CONDITIONAL_JUMP)  ; LAB_0059f766
    JMP 0x0059f79d                      ; 0059f7d1
        ;   XREF to: 0059f79d (UNCONDITIONAL_JUMP)  ; LAB_0059f79d
    MOV ECX,dword ptr [ESP + 0x30]      ; 0059f7d3
        ;   Label: LAB_0059f7d3
    PUSH ECX                            ; 0059f7d7
    PUSH EAX                            ; 0059f7d8
    MOV ESI,dword ptr [ESP + 0x44]      ; 0059f7d9
    PUSH dword ptr [ESP + 0x40]         ; 0059f7dd
    PUSH ESI                            ; 0059f7e1
    PUSH EBX                            ; 0059f7e2
    CALL dword ptr [ESP + 0x54]         ; 0059f7e3
    MOV dword ptr [ESP + 0x2c],EAX      ; 0059f7e7
    FLD float ptr [ESP + 0x2c]          ; 0059f7eb
    ADD ESP,0x14                        ; 0059f7ef
    SUB ESP,0x4                         ; 0059f7f2
    MOV EDI,dword ptr [ESP + 0x38]      ; 0059f7f5
    FSTP float ptr [ESP]                ; 0059f7f9
    PUSH EDI                            ; 0059f7fc
    PUSH EBP                            ; 0059f7fd
    LEA ESI,[ESP + 0xc]                 ; 0059f7fe
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 0059f802
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 0059f807
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059f80a
    MOV ESI,ESP                         ; 0059f80e
    LEA EDI,[EDI + 0x6b0]               ; 0059f810
    MOVSD ES:EDI,ESI                    ; 0059f816
    MOVSD ES:EDI,ESI                    ; 0059f817
    MOVSD ES:EDI,ESI                    ; 0059f818
    MOVSD ES:EDI,ESI                    ; 0059f819
    JMP 0x0059f7b4                      ; 0059f81a
        ;   XREF to: 0059f7b4 (UNCONDITIONAL_JUMP)  ; LAB_0059f7b4

