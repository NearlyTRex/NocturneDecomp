; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined1       Stack[-0xac]:1  local_ac
; int              Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   core_bride.cpp_CBride_getTargetPoint_FUN_00424aa0 at 00424ac3
;   core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80 at 004d706b
;   core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004e84a0 at 004e84c3
;   core_mimic.cpp_CMimic_processAnimation_FUN_0051fcc0 at 0051ff64
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 at 0059fac6
;   core_zombie.cpp_CZombie_renderTransparent_FUN_005fbe70 at 005fbeb3
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
;   core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f820
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
    PUSH EDI                            ; 0059f821
    PUSH EBP                            ; 0059f822
    SUB ESP,0xa0                        ; 0059f823
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0059f829
    MOV EBP,ESI                         ; 0059f830
    CMP dword ptr [ESP + 0xb4],0x0      ; 0059f832
    JL 0x0059f92e                       ; 0059f83a
        ;   XREF to: 0059f92e (CONDITIONAL_JUMP)  ; LAB_0059f92e
    PUSH EBX                            ; 0059f840
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059f841
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059f846
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0059f849
    MOV ESI,EAX                         ; 0059f850
    LEA EAX,[EDX*0x8 + 0x0]             ; 0059f852
    ADD EAX,EDX                         ; 0059f859
    MOV ESI,dword ptr [ESI + EAX*0x4 + 0x2857c] ; 0059f85b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059f862
    SUB EAX,EDX                         ; 0059f869
    SHL EAX,0x2                         ; 0059f86b
    MOV dword ptr [ESP + 0x9c],EAX      ; 0059f86e
    TEST ESI,ESI                        ; 0059f875
    JL 0x0059f95b                       ; 0059f877
        ;   XREF to: 0059f95b (CONDITIONAL_JUMP)  ; LAB_0059f95b
    PUSH ESI                            ; 0059f87d
    PUSH EBX                            ; 0059f87e
    LEA ESI,[ESP + 0x8]                 ; 0059f87f
    LEA EDI,[ESP + 0x68]                ; 0059f883
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 ; 0059f887
        ;   XREF to: 0059f820 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 0059f88c
    LEA ESI,[ESP + 0x8]                 ; 0059f891
    ADD ESP,0x8                         ; 0059f895
    LEA EAX,[ESP + 0x60]                ; 0059f898
    MOVSD.REP ES:EDI,ESI                ; 0059f89c
    PUSH EAX                            ; 0059f89e
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0059f89f
    LEA EAX,[EBX + 0x58]                ; 0059f8a6
    ADD EAX,ECX                         ; 0059f8a9
    PUSH EAX                            ; 0059f8ab
    LEA EAX,[ESP + 0x98]                ; 0059f8ac
    PUSH EAX                            ; 0059f8b3
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0059f8b4
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0059f8b9
    MOV EAX,dword ptr [ESP + 0x90]      ; 0059f8bc
    MOV dword ptr [ESP + 0x3c],EAX      ; 0059f8c3
    MOV EAX,dword ptr [ESP + 0x94]      ; 0059f8c7
    MOV dword ptr [ESP + 0x4c],EAX      ; 0059f8ce
    MOV EAX,dword ptr [ESP + 0x98]      ; 0059f8d2
    MOV dword ptr [ESP + 0x5c],EAX      ; 0059f8d9
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0059f8dd
        ;   Label: LAB_0059f8dd
    LEA EDX,[EBX + 0x6b0]               ; 0059f8e4
    SHL EAX,0x4                         ; 0059f8ea
    ADD EAX,EDX                         ; 0059f8ed
    PUSH EAX                            ; 0059f8ef
    LEA EAX,[ESP + 0x34]                ; 0059f8f0
    PUSH EAX                            ; 0059f8f4
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280 ; 0059f8f5
        ;   XREF to: 005f7280 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 0059f8fa
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0059f8fd
    SHL EAX,0x2                         ; 0059f904
    ADD EBX,EAX                         ; 0059f907
    CMP dword ptr [EBX + 0xcf0],0x3f800000 ; 0059f909
    JNZ 0x0059f98a                      ; 0059f913
        ;   XREF to: 0059f98a (CONDITIONAL_JUMP)  ; LAB_0059f98a
    MOV ECX,0xc                         ; 0059f915
        ;   Label: LAB_0059f915
    LEA ESI,[ESP + 0x30]                ; 0059f91a
    MOV EDI,EBP                         ; 0059f91e
    MOVSD.REP ES:EDI,ESI                ; 0059f920
    MOV EAX,EBP                         ; 0059f922
    ADD ESP,0xa0                        ; 0059f924
    POP EBP                             ; 0059f92a
    POP EDI                             ; 0059f92b
    POP EBX                             ; 0059f92c
    RET                                 ; 0059f92d
    LEA EAX,[ESP + 0x30]                ; 0059f92e
        ;   Label: LAB_0059f92e
    PUSH EAX                            ; 0059f932
    CALL core_xform.cpp_setRotationScaleIdentity_FUN_005f5190 ; 0059f933
        ;   XREF to: 005f5190 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f * matrix)
    ADD ESP,0x4                         ; 0059f938
    MOV EAX,dword ptr [EBX + 0x6a4]     ; 0059f93b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0059f941
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 0059f945
    MOV dword ptr [ESP + 0x4c],EAX      ; 0059f94b
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 0059f94f
    MOV dword ptr [ESP + 0x5c],EAX      ; 0059f955
    JMP 0x0059f915                      ; 0059f959
        ;   XREF to: 0059f915 (UNCONDITIONAL_JUMP)  ; LAB_0059f915
    FLD float ptr [EBX + 0x6a4]         ; 0059f95b
        ;   Label: LAB_0059f95b
    FADD float ptr [EBX + EAX*0x1 + 0x58] ; 0059f961
    FSTP float ptr [ESP + 0x3c]         ; 0059f965
    FLD float ptr [EBX + 0x6a8]         ; 0059f969
    FADD float ptr [EBX + EAX*0x1 + 0x5c] ; 0059f96f
    FSTP float ptr [ESP + 0x4c]         ; 0059f973
    FLD float ptr [EBX + 0x6ac]         ; 0059f977
    FADD float ptr [EBX + EAX*0x1 + 0x60] ; 0059f97d
    FSTP float ptr [ESP + 0x5c]         ; 0059f981
    JMP 0x0059f8dd                      ; 0059f985
        ;   XREF to: 0059f8dd (UNCONDITIONAL_JUMP)  ; LAB_0059f8dd
    FLD float ptr [ESP + 0x30]          ; 0059f98a
        ;   Label: LAB_0059f98a
    FMUL float ptr [EBX + 0xcf0]        ; 0059f98e
    FLD float ptr [ESP + 0x34]          ; 0059f994
    FXCH                                ; 0059f998
    FSTP float ptr [ESP + 0x30]         ; 0059f99a
    FMUL float ptr [EBX + 0xcf0]        ; 0059f99e
    FLD float ptr [ESP + 0x38]          ; 0059f9a4
    FXCH                                ; 0059f9a8
    FSTP float ptr [ESP + 0x34]         ; 0059f9aa
    FMUL float ptr [EBX + 0xcf0]        ; 0059f9ae
    FLD float ptr [ESP + 0x40]          ; 0059f9b4
    FXCH                                ; 0059f9b8
    FSTP float ptr [ESP + 0x38]         ; 0059f9ba
    FMUL float ptr [EBX + 0xcf0]        ; 0059f9be
    FLD float ptr [ESP + 0x44]          ; 0059f9c4
    FXCH                                ; 0059f9c8
    FSTP float ptr [ESP + 0x40]         ; 0059f9ca
    FMUL float ptr [EBX + 0xcf0]        ; 0059f9ce
    FLD float ptr [ESP + 0x48]          ; 0059f9d4
    FXCH                                ; 0059f9d8
    FSTP float ptr [ESP + 0x44]         ; 0059f9da
    FMUL float ptr [EBX + 0xcf0]        ; 0059f9de
    FLD float ptr [ESP + 0x50]          ; 0059f9e4
    FXCH                                ; 0059f9e8
    FSTP float ptr [ESP + 0x48]         ; 0059f9ea
    FMUL float ptr [EBX + 0xcf0]        ; 0059f9ee
    FLD float ptr [ESP + 0x54]          ; 0059f9f4
    FXCH                                ; 0059f9f8
    FSTP float ptr [ESP + 0x50]         ; 0059f9fa
    FMUL float ptr [EBX + 0xcf0]        ; 0059f9fe
    FLD float ptr [ESP + 0x58]          ; 0059fa04
    FXCH                                ; 0059fa08
    FSTP float ptr [ESP + 0x54]         ; 0059fa0a
    FMUL float ptr [EBX + 0xcf0]        ; 0059fa0e
    FSTP float ptr [ESP + 0x58]         ; 0059fa14
    JMP 0x0059f915                      ; 0059fa18
        ;   XREF to: 0059f915 (UNCONDITIONAL_JUMP)  ; LAB_0059f915

