; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   rotation_quat
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined1       Stack[-0xe4]:1  local_e4
; undefined1       Stack[-0xb4]:1  local_b4
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x54]:1  local_54
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[6]:
;   core_gabriela.cpp_FUN_004d4d80 at 004d5483
;   core_icepick.cpp_FUN_004f8810 at 004f8926
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 at 00526a3b
;   core_stranger.cpp_CStranger_FUN_005be520 at 005bf120
;   core_stranger.cpp_CStranger_FUN_005bf720 at 005bf7d0
;   core_stranger.cpp_CStranger_FUN_005bfb60 at 005c0030
;
; Referenced Globals:
;   double DOUBLE_0064ee30 = 0.0000100000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
;   core_xform.cpp_quaternionToAxisAngle_FUN_005f7730
;   core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
;   core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ff20
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
    PUSH ESI                            ; 0059ff21
    PUSH EDI                            ; 0059ff22
    PUSH EBP                            ; 0059ff23
    MOV EBP,ESP                         ; 0059ff24
    SUB ESP,0xd4                        ; 0059ff26
    AND ESP,0xfffffff8                  ; 0059ff2c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059ff2f
    PUSH EDX                            ; 0059ff32
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059ff33
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059ff38
    MOV ESI,EAX                         ; 0059ff3b
    MOV dword ptr [ESP + 0xc4],EAX      ; 0059ff3d
    LEA EAX,[ESP + 0xb4]                ; 0059ff44
    PUSH EAX                            ; 0059ff4b
    LEA EAX,[ESP + 0xc4]                ; 0059ff4c
    PUSH EAX                            ; 0059ff53
    MOV ECX,dword ptr [EBP + 0x18]      ; 0059ff54
    PUSH ECX                            ; 0059ff57
    XOR EBX,EBX                         ; 0059ff58
    CALL core_xform.cpp_quaternionToAxisAngle_FUN_005f7730 ; 0059ff5a
        ;   XREF to: 005f7730 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionToAxisAngle_FUN_005f7730(CQuaternion4f * quat_in, float * angle_out, CVector3f * axis_out)
    MOV EDI,dword ptr [ESI + 0x28558]   ; 0059ff5f
    ADD ESP,0xc                         ; 0059ff65
    TEST EDI,EDI                        ; 0059ff68
    JLE 0x0059ffd2                      ; 0059ff6a
        ;   XREF to: 0059ffd2 (CONDITIONAL_JUMP)  ; LAB_0059ffd2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059ff6c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059ff6f
    ADD EAX,0x6b0                       ; 0059ff72
    MOV dword ptr [ESP + 0xc8],ESI      ; 0059ff77
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059ff7e
    MOV ESI,dword ptr [EBP + 0x20]      ; 0059ff85
        ;   Label: LAB_0059ff85
    PUSH ESI                            ; 0059ff88
    PUSH EBX                            ; 0059ff89
    MOV EDI,dword ptr [ESP + 0xcc]      ; 0059ff8a
    PUSH EDI                            ; 0059ff91
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059ff92
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0059ff97
    TEST EAX,EAX                        ; 0059ff9a
    JGE 0x0059ffe3                      ; 0059ff9c
        ;   XREF to: 0059ffe3 (CONDITIONAL_JUMP)  ; LAB_0059ffe3
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0059ff9e
        ;   Label: LAB_0059ff9e
    ADD EAX,0x10                        ; 0059ffa5
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0059ffa8
    MOV dword ptr [ESP + 0xc8],EAX      ; 0059ffaf
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0059ffb6
    INC EBX                             ; 0059ffbd
    ADD EDX,0x10                        ; 0059ffbe
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0059ffc1
    MOV dword ptr [ESP + 0xcc],EDX      ; 0059ffc7
    CMP EBX,ECX                         ; 0059ffce
    JL 0x0059ff85                       ; 0059ffd0
        ;   XREF to: 0059ff85 (CONDITIONAL_JUMP)  ; LAB_0059ff85
    CMP dword ptr [EBP + 0x20],0x0      ; 0059ffd2
        ;   Label: LAB_0059ffd2
    JL 0x005a007b                       ; 0059ffd6
        ;   XREF to: 005a007b (CONDITIONAL_JUMP)  ; LAB_005a007b
    MOV ESP,EBP                         ; 0059ffdc
    POP EBP                             ; 0059ffde
    POP EDI                             ; 0059ffdf
    POP ESI                             ; 0059ffe0
    POP EBX                             ; 0059ffe1
    RET                                 ; 0059ffe2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059ffe3
        ;   Label: LAB_0059ffe3
    PUSH EDX                            ; 0059ffe6
    PUSH EAX                            ; 0059ffe7
    PUSH dword ptr [EBP + 0x1c]         ; 0059ffe8
    PUSH ESI                            ; 0059ffeb
    PUSH EBX                            ; 0059ffec
    CALL dword ptr [EBP + 0x24]         ; 0059ffed
    MOV dword ptr [ESP + 0xe4],EAX      ; 0059fff0
    FLD float ptr [ESP + 0xe4]          ; 0059fff7
    ADD ESP,0x14                        ; 0059fffe
    FMUL float ptr [ESP + 0xc0]         ; 005a0001
    FST float ptr [ESP]                 ; 005a0008
    FABS                                ; 005a000b
    FCOMP double ptr [0x0064ee30]       ; 005a000d | DOUBLE_0064ee30
    FNSTSW AX                           ; 005a0013
    SAHF                                ; 005a0015
    JBE 0x0059ff9e                      ; 005a0016
        ;   XREF to: 0059ff9e (CONDITIONAL_JUMP)  ; LAB_0059ff9e
    LEA EAX,[ESP + 0xb4]                ; 005a0018
    PUSH EAX                            ; 005a001f
    LEA ESI,[ESP + 0xa8]                ; 005a0020
    PUSH dword ptr [ESP + 0x4]          ; 005a0027
    LEA EDI,[ESP + 0x8c]                ; 005a002b
    CALL core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70 ; 005a0032
        ;   XREF to: 005f7a70 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70(float angle_radians, CVector3f * axis_ptr, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xac]                ; 005a0037
    ADD ESP,0x8                         ; 005a003e
    LEA EAX,[ESP + 0x84]                ; 005a0041
    MOVSD ES:EDI,ESI                    ; 005a0048
    MOVSD ES:EDI,ESI                    ; 005a0049
    MOVSD ES:EDI,ESI                    ; 005a004a
    MOVSD ES:EDI,ESI                    ; 005a004b
    PUSH EAX                            ; 005a004c
    MOV ESI,dword ptr [ESP + 0xd0]      ; 005a004d
    PUSH ESI                            ; 005a0054
    LEA ESI,[ESP + 0x6c]                ; 005a0055
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005a0059
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 005a005e
    MOV EDI,dword ptr [ESP + 0xc8]      ; 005a0061
    LEA ESI,[ESP + 0x64]                ; 005a0068
    LEA EDI,[EDI + 0x6b0]               ; 005a006c
    MOVSD ES:EDI,ESI                    ; 005a0072
    MOVSD ES:EDI,ESI                    ; 005a0073
    MOVSD ES:EDI,ESI                    ; 005a0074
    MOVSD ES:EDI,ESI                    ; 005a0075
    JMP 0x0059ff9e                      ; 005a0076
        ;   XREF to: 0059ff9e (UNCONDITIONAL_JUMP)  ; LAB_0059ff9e
    FLD float ptr [ESP + 0xc0]          ; 005a007b
        ;   Label: LAB_005a007b
    LEA EAX,[ESP + 0xb4]                ; 005a0082
    FMUL float ptr [EBP + 0x1c]         ; 005a0089
    PUSH EAX                            ; 005a008c
    LEA ESI,[ESP + 0x78]                ; 005a008d
    SUB ESP,0x4                         ; 005a0091
    LEA EDI,[ESP + 0x9c]                ; 005a0094
    FSTP float ptr [ESP]                ; 005a009b
    CALL core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70 ; 005a009e
        ;   XREF to: 005f7a70 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70(float angle_radians, CVector3f * axis_ptr, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x7c]                ; 005a00a3
    ADD ESP,0x8                         ; 005a00a7
    LEA EAX,[ESP + 0x94]                ; 005a00aa
    MOVSD ES:EDI,ESI                    ; 005a00b1
    MOVSD ES:EDI,ESI                    ; 005a00b2
    MOVSD ES:EDI,ESI                    ; 005a00b3
    MOVSD ES:EDI,ESI                    ; 005a00b4
    PUSH EAX                            ; 005a00b5
    LEA ESI,[ESP + 0x38]                ; 005a00b6
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0 ; 005a00ba
        ;   XREF to: 005f73e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f * quat_in, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 005a00bf
    LEA EAX,[ESP + 0x4]                 ; 005a00c2
    LEA EDI,[ESP + 0x4]                 ; 005a00c6
    PUSH EAX                            ; 005a00ca
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a00cb
    MOV ECX,0xc                         ; 005a00ce
    ADD EAX,0x6a4                       ; 005a00d3
    LEA ESI,[ESP + 0x38]                ; 005a00d8
    PUSH EAX                            ; 005a00dc
    MOVSD.REP ES:EDI,ESI                ; 005a00dd
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20 ; 005a00df
        ;   XREF to: 005f4e20 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f * input_output_vector, CMatrix3x4f * matrix)
    ADD ESP,0x8                         ; 005a00e4
    MOV ESP,EBP                         ; 005a00e7
    POP EBP                             ; 005a00e9
    POP EDI                             ; 005a00ea
    POP ESI                             ; 005a00eb
    POP EBX                             ; 005a00ec
    RET                                 ; 005a00ed

