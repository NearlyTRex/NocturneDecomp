; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_blendBoneTransformData_FUN_005a1b70(CVector3f * result_root_pos, SBoneTransformData * bone_data_out, SBoneTransformData * bone_data_in, float blend_weight, CDeformableModelInstance * instance_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   result_root_pos
; SBoneTransformData * Stack[0x8]:4   bone_data_out
; SBoneTransformData * Stack[0xc]:4   bone_data_in
; float            Stack[0x10]:4   blend_weight
; CDeformableModelInstance * Stack[0x14]:4   instance_ptr
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1b70
        ;   Label: core_skeleton.cpp_blendBoneTransformData_FUN_005a1b70
    PUSH ESI                            ; 005a1b71
    PUSH EDI                            ; 005a1b72
    PUSH EBP                            ; 005a1b73
    SUB ESP,0x44                        ; 005a1b74
    MOV EDI,dword ptr [ESP + 0x5c]      ; 005a1b77
    MOV ESI,dword ptr [ESP + 0x60]      ; 005a1b7b
    FLD float ptr [ESP + 0x64]          ; 005a1b7f
    FLDZ                                ; 005a1b83
    FCOMPP                              ; 005a1b85
    FNSTSW AX                           ; 005a1b87
    SAHF                                ; 005a1b89
    JA 0x005a1cda                       ; 005a1b8a | LAB_005a1cda
        ;   XREF to: 005a1cda (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x64]          ; 005a1b90
        ;   Label: LAB_005a1b90
    FLD1                                ; 005a1b94
    FCOMPP                              ; 005a1b96
    FNSTSW AX                           ; 005a1b98
    SAHF                                ; 005a1b9a
    JNC 0x005a1ba5                      ; 005a1b9b | LAB_005a1ba5
        ;   XREF to: 005a1ba5 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x64],0x3f800000 ; 005a1b9d
    FLD float ptr [ESP + 0x64]          ; 005a1ba5
        ;   Label: LAB_005a1ba5
    FLD float ptr [ESI]                 ; 005a1ba9
    FMUL ST1                            ; 005a1bab
    FSTP float ptr [ESP + 0x1c]         ; 005a1bad
    FLD float ptr [ESI + 0x4]           ; 005a1bb1
    FMUL ST1                            ; 005a1bb4
    FLD ST1                             ; 005a1bb6
    FLD1                                ; 005a1bb8
    FSUBRP                              ; 005a1bba
    FXCH                                ; 005a1bbc
    FSTP float ptr [ESP + 0x20]         ; 005a1bbe
    FLD float ptr [ESI + 0x8]           ; 005a1bc2
    FMULP ST2                           ; 005a1bc5
    FSTP float ptr [ESP + 0x34]         ; 005a1bc7
    FSTP float ptr [ESP + 0x24]         ; 005a1bcb
    FLD float ptr [EDI]                 ; 005a1bcf
    FMUL float ptr [ESP + 0x34]         ; 005a1bd1
    FSTP float ptr [ESP + 0x28]         ; 005a1bd5
    FLD float ptr [EDI + 0x4]           ; 005a1bd9
    FMUL float ptr [ESP + 0x34]         ; 005a1bdc
    FSTP float ptr [ESP + 0x2c]         ; 005a1be0
    FLD float ptr [EDI + 0x8]           ; 005a1be4
    FMUL float ptr [ESP + 0x34]         ; 005a1be7
    LEA EAX,[ESP + 0x10]                ; 005a1beb
    MOV EBX,dword ptr [ESP + 0x58]      ; 005a1bef
    FLD float ptr [ESP + 0x28]          ; 005a1bf3
    FADD float ptr [ESP + 0x1c]         ; 005a1bf7
    FLD float ptr [ESP + 0x2c]          ; 005a1bfb
    FXCH                                ; 005a1bff
    FSTP float ptr [ESP + 0x10]         ; 005a1c01
    FADD float ptr [ESP + 0x20]         ; 005a1c05
    FXCH                                ; 005a1c09
    FST float ptr [ESP + 0x30]          ; 005a1c0b
    FADD float ptr [ESP + 0x24]         ; 005a1c0f
    FXCH                                ; 005a1c13
    FSTP float ptr [ESP + 0x14]         ; 005a1c15
    FSTP float ptr [ESP + 0x18]         ; 005a1c19
    CMP EAX,EBX                         ; 005a1c1d
    JZ 0x005a1c35                       ; 005a1c1f | LAB_005a1c35
        ;   XREF to: 005a1c35 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a1c21
    MOV dword ptr [EBX],EAX             ; 005a1c25
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a1c27
    MOV dword ptr [EBX + 0x4],EAX       ; 005a1c2b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a1c2e
    MOV dword ptr [EBX + 0x8],EAX       ; 005a1c32
    MOV EBP,dword ptr [ESP + 0x68]      ; 005a1c35
        ;   Label: LAB_005a1c35
    PUSH EBP                            ; 005a1c39
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a1c3a | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a1c3f
    MOV EDX,dword ptr [EAX + 0x28558]   ; 005a1c42
    XOR EBP,EBP                         ; 005a1c48
    MOV dword ptr [ESP + 0x38],EAX      ; 005a1c4a
    TEST EDX,EDX                        ; 005a1c4e
    JLE 0x005a1cc0                      ; 005a1c50 | LAB_005a1cc0
        ;   XREF to: 005a1cc0 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x58]      ; 005a1c52
    ADD EDI,0xc                         ; 005a1c56
    ADD ESI,0xc                         ; 005a1c59
    MOV dword ptr [ESP + 0x40],EDI      ; 005a1c5c
    MOV dword ptr [ESP + 0x3c],ESI      ; 005a1c60
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005a1c64
        ;   Label: LAB_005a1c64
    PUSH dword ptr [ESP + 0x64]         ; 005a1c68
    PUSH ECX                            ; 005a1c6c
    MOV ESI,dword ptr [ESP + 0x48]      ; 005a1c6d
    PUSH ESI                            ; 005a1c71
    LEA ESI,[ESP + 0xc]                 ; 005a1c72
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005a1c76 | CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0xc]                 ; 005a1c7b
    ADD ESP,0xc                         ; 005a1c7f
    LEA EDI,[EBX + 0xc]                 ; 005a1c82
    ADD EBX,0x10                        ; 005a1c85
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005a1c88
    MOVSD ES:EDI,ESI                    ; 005a1c8c
    MOVSD ES:EDI,ESI                    ; 005a1c8d
    MOVSD ES:EDI,ESI                    ; 005a1c8e
    MOVSD ES:EDI,ESI                    ; 005a1c8f
    ADD EAX,0x10                        ; 005a1c90
    MOV EDI,dword ptr [ESP + 0x40]      ; 005a1c93
    MOV dword ptr [ESP + 0x3c],EAX      ; 005a1c97
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a1c9b
    INC EBP                             ; 005a1c9f
    ADD EDI,0x10                        ; 005a1ca0
    MOV EDX,dword ptr [EAX + 0x28558]   ; 005a1ca3
    MOV dword ptr [ESP + 0x40],EDI      ; 005a1ca9
    CMP EBP,EDX                         ; 005a1cad
    JL 0x005a1c64                       ; 005a1caf | LAB_005a1c64
        ;   XREF to: 005a1c64 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005a1cb1
    LEA EDX,[EDX]                       ; 005a1cb7
    LEA EAX,[EAX]                       ; 005a1cbd
    MOV ECX,dword ptr [ESP + 0x68]      ; 005a1cc0
        ;   Label: LAB_005a1cc0
    PUSH ECX                            ; 005a1cc4
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005a1cc5
    PUSH EBX                            ; 005a1cc9
    CALL core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950 ; 005a1cca | void core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950(SBoneTransformData * bone_data, CDeformableModelInstance * instance_ptr)
        ;   XREF to: 005a1950 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a1ccf
    ADD ESP,0x44                        ; 005a1cd2
    POP EBP                             ; 005a1cd5
    POP EDI                             ; 005a1cd6
    POP ESI                             ; 005a1cd7
    POP EBX                             ; 005a1cd8
    RET                                 ; 005a1cd9
    XOR EDX,EDX                         ; 005a1cda
        ;   Label: LAB_005a1cda
    MOV dword ptr [ESP + 0x64],EDX      ; 005a1cdc
    JMP 0x005a1b90                      ; 005a1ce0 | LAB_005a1b90
        ;   XREF to: 005a1b90 (UNCONDITIONAL_JUMP)

