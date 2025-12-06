; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SBoneTransformData * output_bone_data)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   animation_time
; SBoneTransformData * Stack[0x10]:4   output_bone_data
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined1       Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0 at 005a08fa
;
; Called Functions:
;   core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0ad0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
    PUSH ESI                            ; 005a0ad1
    PUSH EDI                            ; 005a0ad2
    PUSH EBP                            ; 005a0ad3
    MOV EBP,ESP                         ; 005a0ad4
    SUB ESP,0x50                        ; 005a0ad6
    AND ESP,0xfffffff8                  ; 005a0ad9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a0adc
    PUSH EDX                            ; 005a0adf
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a0ae0 | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a0ae5
    MOV ESI,EAX                         ; 005a0ae8
    MOV dword ptr [ESP + 0x44],EAX      ; 005a0aea
    MOV EAX,ESP                         ; 005a0aee
    PUSH EAX                            ; 005a0af0
    LEA EAX,[ESP + 0x40]                ; 005a0af1
    PUSH EAX                            ; 005a0af5
    LEA EAX,[ESP + 0x40]                ; 005a0af6
    PUSH EAX                            ; 005a0afa
    MOV ECX,dword ptr [EBP + 0x18]      ; 005a0afb
    PUSH dword ptr [EBP + 0x1c]         ; 005a0afe
    PUSH ECX                            ; 005a0b01
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a0b02
    PUSH EBX                            ; 005a0b05
    CALL core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0 ; 005a0b06 | void core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
        ;   XREF to: 0052e4c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005a0b0b
    MOV EDI,dword ptr [ESI + 0x28558]   ; 005a0b0e
    XOR EBX,EBX                         ; 005a0b14
    TEST EDI,EDI                        ; 005a0b16
    JLE 0x005a0b90                      ; 005a0b18 | LAB_005a0b90
        ;   XREF to: 005a0b90 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x20]      ; 005a0b1a
    MOV dword ptr [ESP + 0x4c],EAX      ; 005a0b1d
    MOV dword ptr [ESP + 0x48],EAX      ; 005a0b21
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005a0b25
        ;   Label: LAB_005a0b25
    PUSH dword ptr [ESP]                ; 005a0b29
    PUSH EAX                            ; 005a0b2c
    MOV EDX,dword ptr [ESP + 0x40]      ; 005a0b2d
    PUSH EDX                            ; 005a0b31
    PUSH EBX                            ; 005a0b32
    MOV ECX,dword ptr [ESP + 0x54]      ; 005a0b33
    PUSH ECX                            ; 005a0b37
    LEA ESI,[ESP + 0x18]                ; 005a0b38
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 005a0b3c | CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005a0b41
    MOV EDI,dword ptr [ESP + 0x48]      ; 005a0b44
    LEA ESI,[ESP + 0x4]                 ; 005a0b48
    LEA EDI,[EDI + 0xc]                 ; 005a0b4c
    INC EBX                             ; 005a0b4f
    MOVSD ES:EDI,ESI                    ; 005a0b50
    MOVSD ES:EDI,ESI                    ; 005a0b51
    MOVSD ES:EDI,ESI                    ; 005a0b52
    MOVSD ES:EDI,ESI                    ; 005a0b53
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005a0b54
    MOV EDI,dword ptr [ESP + 0x48]      ; 005a0b58
    LEA ESI,[EAX + 0x4]                 ; 005a0b5c
    MOV dword ptr [EAX + 0x64c],0x3f800000 ; 005a0b5f
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a0b69
    MOV dword ptr [ESP + 0x4c],ESI      ; 005a0b6d
    ADD EDI,0x10                        ; 005a0b71
    MOV EDX,dword ptr [EAX + 0x28558]   ; 005a0b74
    MOV dword ptr [ESP + 0x48],EDI      ; 005a0b7a
    CMP EBX,EDX                         ; 005a0b7e
    JL 0x005a0b25                       ; 005a0b80 | LAB_005a0b25
        ;   XREF to: 005a0b25 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005a0b82
    LEA EDX,[EDX]                       ; 005a0b88
    MOV EAX,EAX                         ; 005a0b8e
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005a0b90
        ;   Label: LAB_005a0b90
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a0b94
    SUB EAX,EBX                         ; 005a0b9b
    MOV EBX,dword ptr [ESP + 0x44]      ; 005a0b9d
    MOV EBX,dword ptr [EBX + 0x29374]   ; 005a0ba1
    FLD float ptr [EBX + EAX*0x4]       ; 005a0ba7
    FMUL float ptr [ESP]                ; 005a0baa
    FSTP float ptr [ESP + 0x14]         ; 005a0bad
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 005a0bb1
    FMUL float ptr [ESP]                ; 005a0bb5
    FSTP float ptr [ESP + 0x18]         ; 005a0bb8
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 005a0bbc
    FMUL float ptr [ESP]                ; 005a0bc0
    FLD float ptr [ESP]                 ; 005a0bc3
    MOV EBX,dword ptr [ESP + 0x38]      ; 005a0bc6
    FLD1                                ; 005a0bca
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a0bcc
    FSUBRP                              ; 005a0bd3
    SUB EAX,EBX                         ; 005a0bd5
    MOV EBX,dword ptr [ESP + 0x44]      ; 005a0bd7
    FXCH                                ; 005a0bdb
    FSTP float ptr [ESP + 0x1c]         ; 005a0bdd
    MOV EBX,dword ptr [EBX + 0x29374]   ; 005a0be1
    FSTP float ptr [ESP + 0x40]         ; 005a0be7
    FLD float ptr [EBX + EAX*0x4]       ; 005a0beb
    FMUL float ptr [ESP + 0x40]         ; 005a0bee
    FSTP float ptr [ESP + 0x2c]         ; 005a0bf2
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 005a0bf6
    FMUL float ptr [ESP + 0x40]         ; 005a0bfa
    FSTP float ptr [ESP + 0x30]         ; 005a0bfe
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 005a0c02
    FMUL float ptr [ESP + 0x40]         ; 005a0c06
    MOV ECX,dword ptr [EBP + 0x20]      ; 005a0c0a
    FLD float ptr [ESP + 0x2c]          ; 005a0c0d
    FADD float ptr [ESP + 0x14]         ; 005a0c11
    FLD float ptr [ESP + 0x30]          ; 005a0c15
    FXCH                                ; 005a0c19
    FSTP float ptr [ESP + 0x20]         ; 005a0c1b
    LEA EAX,[ESP + 0x20]                ; 005a0c1f
    FADD float ptr [ESP + 0x18]         ; 005a0c23
    FXCH                                ; 005a0c27
    FST float ptr [ESP + 0x34]          ; 005a0c29
    FADD float ptr [ESP + 0x1c]         ; 005a0c2d
    FXCH                                ; 005a0c31
    FSTP float ptr [ESP + 0x24]         ; 005a0c33
    FSTP float ptr [ESP + 0x28]         ; 005a0c37
    CMP EAX,ECX                         ; 005a0c3b
    JNZ 0x005a0c7a                      ; 005a0c3d | LAB_005a0c7a
        ;   XREF to: 005a0c7a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0c3f
        ;   Label: LAB_005a0c3f
    FLD float ptr [EAX + 0x508]         ; 005a0c42
    MOV EAX,dword ptr [EBP + 0x20]      ; 005a0c48
    FMUL float ptr [EAX]                ; 005a0c4b
    FSTP float ptr [EAX]                ; 005a0c4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0c4f
    FLD float ptr [EAX + 0x50c]         ; 005a0c52
    MOV EAX,dword ptr [EBP + 0x20]      ; 005a0c58
    FMUL float ptr [EAX + 0x4]          ; 005a0c5b
    FSTP float ptr [EAX + 0x4]          ; 005a0c5e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0c61
    FLD float ptr [EAX + 0x510]         ; 005a0c64
    MOV EAX,dword ptr [EBP + 0x20]      ; 005a0c6a
    FMUL float ptr [EAX + 0x8]          ; 005a0c6d
    FSTP float ptr [EAX + 0x8]          ; 005a0c70
    MOV ESP,EBP                         ; 005a0c73
    POP EBP                             ; 005a0c75
    POP EDI                             ; 005a0c76
    POP ESI                             ; 005a0c77
    POP EBX                             ; 005a0c78
    RET                                 ; 005a0c79
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a0c7a
        ;   Label: LAB_005a0c7a
    MOV dword ptr [ECX],EAX             ; 005a0c7e
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a0c80
    MOV dword ptr [ECX + 0x4],EAX       ; 005a0c84
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a0c87
    MOV dword ptr [ECX + 0x8],EAX       ; 005a0c8b
    JMP 0x005a0c3f                      ; 005a0c8e | LAB_005a0c3f
        ;   XREF to: 005a0c3f (UNCONDITIONAL_JUMP)

