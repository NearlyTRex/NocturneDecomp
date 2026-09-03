; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[11]:
;   core_baron.cpp_CBaron_process_FUN_00410490 at 00410723
;   core_colonel.cpp_CColonel_process_FUN_00439f50 at 0043a1d5
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900 at 00497a17
;   core_haystack.cpp_CHaystack_process_FUN_004b32d0 at 004b3564
;   core_icepick.cpp_CIcePick_process_FUN_004b9fe0 at 004ba2db
;   core_scat.cpp_CScat_blendAimBones_FUN_004fd1d0 at 004fd43a
;   core_scat.cpp_CScat_process_FUN_004fbf20 at 004fc2c6
;   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650 at 0051d783
;   core_stranger.cpp_CStranger_FUN_005384d0 at 005387e2
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0053a260 at 0053a53d
;   ... and 1 more
;
; Referenced Globals:
;   double DOUBLE_00591bbb = 0.00100000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051cfd0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
    PUSH ESI                            ; 0051cfd1
    PUSH EDI                            ; 0051cfd2
    PUSH EBP                            ; 0051cfd3
    SUB ESP,0x1c                        ; 0051cfd4
    FLD float ptr [ESP + 0x38]          ; 0051cfd7
    FCOMP double ptr [0x00591bbb]       ; 0051cfdb | DOUBLE_00591bbb
    FNSTSW AX                           ; 0051cfe1
    SAHF                                ; 0051cfe3
    JA 0x0051cfee                       ; 0051cfe4
        ;   XREF to: 0051cfee (CONDITIONAL_JUMP)  ; LAB_0051cfee
    ADD ESP,0x1c                        ; 0051cfe6
        ;   Label: LAB_0051cfe6
    POP EBP                             ; 0051cfe9
    POP EDI                             ; 0051cfea
    POP ESI                             ; 0051cfeb
    POP EBX                             ; 0051cfec
    RET                                 ; 0051cfed
    MOV EDX,dword ptr [ESP + 0x30]      ; 0051cfee
        ;   Label: LAB_0051cfee
    PUSH EDX                            ; 0051cff2
    XOR EBX,EBX                         ; 0051cff3
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051cff5
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051cffa
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0051cffd
    MOV dword ptr [ESP + 0x10],EAX      ; 0051d003
    TEST ECX,ECX                        ; 0051d007
    JLE 0x0051cfe6                      ; 0051d009
        ;   XREF to: 0051cfe6 (CONDITIONAL_JUMP)  ; LAB_0051cfe6
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051d00b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0051d00f
    MOV dword ptr [ESP + 0x14],EAX      ; 0051d013
    ADD EBP,0x6b0                       ; 0051d017
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051d01d
        ;   Label: LAB_0051d01d
    PUSH EAX                            ; 0051d021
    PUSH EBX                            ; 0051d022
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051d023
    PUSH EDX                            ; 0051d027
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051d028
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0051d02d
    TEST EAX,EAX                        ; 0051d030
    JGE 0x0051d053                      ; 0051d032
        ;   XREF to: 0051d053 (CONDITIONAL_JUMP)  ; LAB_0051d053
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051d034
        ;   Label: LAB_0051d034
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051d038
    ADD EBP,0x10                        ; 0051d03c
    INC EBX                             ; 0051d03f
    ADD ESI,0x10                        ; 0051d040
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0051d043
    MOV dword ptr [ESP + 0x14],ESI      ; 0051d049
    CMP EBX,EDI                         ; 0051d04d
    JGE 0x0051cfe6                      ; 0051d04f
        ;   XREF to: 0051cfe6 (CONDITIONAL_JUMP)  ; LAB_0051cfe6
    JMP 0x0051d01d                      ; 0051d051
        ;   XREF to: 0051d01d (UNCONDITIONAL_JUMP)  ; LAB_0051d01d
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051d053
        ;   Label: LAB_0051d053
    PUSH ECX                            ; 0051d057
    PUSH EAX                            ; 0051d058
    MOV ESI,dword ptr [ESP + 0x44]      ; 0051d059
    PUSH dword ptr [ESP + 0x40]         ; 0051d05d
    PUSH ESI                            ; 0051d061
    PUSH EBX                            ; 0051d062
    CALL dword ptr [ESP + 0x54]         ; 0051d063
    MOV dword ptr [ESP + 0x2c],EAX      ; 0051d067
    FLD float ptr [ESP + 0x2c]          ; 0051d06b
    ADD ESP,0x14                        ; 0051d06f
    SUB ESP,0x4                         ; 0051d072
    MOV EDI,dword ptr [ESP + 0x38]      ; 0051d075
    FSTP float ptr [ESP]                ; 0051d079
    PUSH EDI                            ; 0051d07c
    PUSH EBP                            ; 0051d07d
    LEA ESI,[ESP + 0xc]                 ; 0051d07e
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0051d082
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_0055d2d0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 0051d087
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051d08a
    MOV ESI,ESP                         ; 0051d08e
    LEA EDI,[EDI + 0x6b0]               ; 0051d090
    MOVSD ES:EDI,ESI                    ; 0051d096
    MOVSD ES:EDI,ESI                    ; 0051d097
    MOVSD ES:EDI,ESI                    ; 0051d098
    MOVSD ES:EDI,ESI                    ; 0051d099
    JMP 0x0051d034                      ; 0051d09a
        ;   XREF to: 0051d034 (UNCONDITIONAL_JUMP)  ; LAB_0051d034

