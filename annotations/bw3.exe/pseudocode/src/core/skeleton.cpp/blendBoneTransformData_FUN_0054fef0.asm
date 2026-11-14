; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_0054fef0(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr)
;
; Parameters:
; SPose *          Stack[0x4]:4   result_pose
; SPose *          Stack[0x8]:4   bone_data_out
; SPose *          Stack[0xc]:4   bone_data_in
; float            Stack[0x10]:4   blend_weight
; CDeformableModelInstance * Stack[0x14]:4   instance_ptr
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_computeBoneModelMatrices_FUN_0054fcc0
;   core_xform.cpp_slerpQuaternion_FUN_00585b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fef0
        ;   Label: core_skeleton.cpp_blendBoneTransformData_FUN_0054fef0
    PUSH ESI                            ; 0054fef1
    PUSH EDI                            ; 0054fef2
    PUSH EBP                            ; 0054fef3
    SUB ESP,0x68                        ; 0054fef4
    MOV EBX,dword ptr [ESP + 0x80]      ; 0054fef7
    FLD float ptr [ESP + 0x88]          ; 0054fefe
    FLDZ                                ; 0054ff05
    FCOMPP                              ; 0054ff07
    FNSTSW AX                           ; 0054ff09
    SAHF                                ; 0054ff0b
    JA 0x005500a0                       ; 0054ff0c
        ;   XREF to: 005500a0 (CONDITIONAL_JUMP)  ; LAB_005500a0
    FLD float ptr [ESP + 0x88]          ; 0054ff12
        ;   Label: LAB_0054ff12
    FLD1                                ; 0054ff19
    FCOMPP                              ; 0054ff1b
    FNSTSW AX                           ; 0054ff1d
    SAHF                                ; 0054ff1f
    JNC 0x0054ff2d                      ; 0054ff20
        ;   XREF to: 0054ff2d (CONDITIONAL_JUMP)  ; LAB_0054ff2d
    MOV dword ptr [ESP + 0x88],0x3f800000 ; 0054ff22
    MOV EAX,dword ptr [ESP + 0x84]      ; 0054ff2d
        ;   Label: LAB_0054ff2d
    FLD float ptr [ESP + 0x88]          ; 0054ff34
    FLD float ptr [EAX]                 ; 0054ff3b
    FMUL ST1                            ; 0054ff3d
    FLD float ptr [EAX + 0x4]           ; 0054ff3f
    FMUL ST2                            ; 0054ff42
    FLD float ptr [EAX + 0x8]           ; 0054ff44
    FMUL ST3                            ; 0054ff47
    LEA EDI,[ESP + 0x4c]                ; 0054ff49
    LEA ESI,[ESP + 0x10]                ; 0054ff4d
    FLD1                                ; 0054ff51
    FSUBRP ST4,ST0                      ; 0054ff53
    FXCH ST2                            ; 0054ff55
    FSTP float ptr [ESP + 0x10]         ; 0054ff57
    FSTP float ptr [ESP + 0x14]         ; 0054ff5b
    FSTP float ptr [ESP + 0x18]         ; 0054ff5f
    MOVSD ES:EDI,ESI                    ; 0054ff63
    MOVSD ES:EDI,ESI                    ; 0054ff64
    MOVSD ES:EDI,ESI                    ; 0054ff65
    FSTP float ptr [ESP + 0x58]         ; 0054ff66
    FLD float ptr [EBX]                 ; 0054ff6a
    FMUL float ptr [ESP + 0x58]         ; 0054ff6c
    FLD float ptr [EBX + 0x4]           ; 0054ff70
    FMUL float ptr [ESP + 0x58]         ; 0054ff73
    FLD float ptr [EBX + 0x8]           ; 0054ff77
    FMUL float ptr [ESP + 0x58]         ; 0054ff7a
    LEA EDI,[ESP + 0x34]                ; 0054ff7e
    LEA ESI,[ESP + 0x1c]                ; 0054ff82
    FXCH ST2                            ; 0054ff86
    FSTP float ptr [ESP + 0x1c]         ; 0054ff88
    FSTP float ptr [ESP + 0x20]         ; 0054ff8c
    FSTP float ptr [ESP + 0x24]         ; 0054ff90
    MOVSD ES:EDI,ESI                    ; 0054ff94
    MOVSD ES:EDI,ESI                    ; 0054ff95
    MOVSD ES:EDI,ESI                    ; 0054ff96
    FLD float ptr [ESP + 0x34]          ; 0054ff97
    FLD float ptr [ESP + 0x38]          ; 0054ff9b
    FLD float ptr [ESP + 0x3c]          ; 0054ff9f
    LEA EDI,[ESP + 0x40]                ; 0054ffa3
    LEA ESI,[ESP + 0x28]                ; 0054ffa7
    FXCH ST2                            ; 0054ffab
    FADD float ptr [ESP + 0x4c]         ; 0054ffad
    FXCH                                ; 0054ffb1
    FADD float ptr [ESP + 0x50]         ; 0054ffb3
    FXCH ST2                            ; 0054ffb7
    FADD float ptr [ESP + 0x54]         ; 0054ffb9
    FXCH                                ; 0054ffbd
    FSTP float ptr [ESP + 0x28]         ; 0054ffbf
    FXCH                                ; 0054ffc3
    FSTP float ptr [ESP + 0x2c]         ; 0054ffc5
    FSTP float ptr [ESP + 0x30]         ; 0054ffc9
    MOVSD ES:EDI,ESI                    ; 0054ffcd
    MOVSD ES:EDI,ESI                    ; 0054ffce
    MOVSD ES:EDI,ESI                    ; 0054ffcf
    LEA EAX,[ESP + 0x40]                ; 0054ffd0
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0054ffd4
    CMP EAX,ESI                         ; 0054ffd8
    JZ 0x0054fff0                       ; 0054ffda
        ;   XREF to: 0054fff0 (CONDITIONAL_JUMP)  ; LAB_0054fff0
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054ffdc
    MOV dword ptr [ESI],EAX             ; 0054ffe0
    MOV EAX,dword ptr [ESP + 0x44]      ; 0054ffe2
    MOV dword ptr [ESI + 0x4],EAX       ; 0054ffe6
    MOV EAX,dword ptr [ESP + 0x48]      ; 0054ffe9
    MOV dword ptr [ESI + 0x8],EAX       ; 0054ffed
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0054fff0
        ;   Label: LAB_0054fff0
    PUSH EDI                            ; 0054fff7
    XOR EBP,EBP                         ; 0054fff8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054fffa
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054ffff
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00550002
    MOV dword ptr [ESP + 0x5c],EAX      ; 00550008
    TEST EDX,EDX                        ; 0055000c
    JLE 0x00550080                      ; 0055000e
        ;   XREF to: 00550080 (CONDITIONAL_JUMP)  ; LAB_00550080
    MOV EAX,dword ptr [ESP + 0x84]      ; 00550010
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00550017
    ADD EBX,0xc                         ; 0055001b
    ADD EAX,0xc                         ; 0055001e
    MOV dword ptr [ESP + 0x64],ESI      ; 00550021
    MOV dword ptr [ESP + 0x60],EAX      ; 00550025
    MOV ECX,dword ptr [ESP + 0x60]      ; 00550029
        ;   Label: LAB_00550029
    PUSH dword ptr [ESP + 0x88]         ; 0055002d
    PUSH ECX                            ; 00550034
    PUSH EBX                            ; 00550035
    LEA ESI,[ESP + 0xc]                 ; 00550036
    CALL core_xform.cpp_slerpQuaternion_FUN_00585b20 ; 0055003a
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00585b20()
    ADD ESP,0xc                         ; 0055003f
    MOV EDI,dword ptr [ESP + 0x64]      ; 00550042
    MOV ESI,ESP                         ; 00550046
    LEA EDI,[EDI + 0xc]                 ; 00550048
    INC EBP                             ; 0055004b
    ADD EBX,0x10                        ; 0055004c
    MOVSD ES:EDI,ESI                    ; 0055004f
    MOVSD ES:EDI,ESI                    ; 00550050
    MOVSD ES:EDI,ESI                    ; 00550051
    MOVSD ES:EDI,ESI                    ; 00550052
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00550053
    MOV ESI,dword ptr [ESP + 0x64]      ; 00550057
    MOV EDI,dword ptr [ESP + 0x60]      ; 0055005b
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0055005f
    ADD ESI,0x10                        ; 00550065
    ADD EDI,0x10                        ; 00550068
    MOV dword ptr [ESP + 0x64],ESI      ; 0055006b
    MOV dword ptr [ESP + 0x60],EDI      ; 0055006f
    CMP EBP,EDX                         ; 00550073
    JL 0x00550029                       ; 00550075
        ;   XREF to: 00550029 (CONDITIONAL_JUMP)  ; LAB_00550029
    LEA EAX,[EAX]                       ; 00550077
    LEA EDX,[EDX]                       ; 0055007d
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00550080
        ;   Label: LAB_00550080
    PUSH ECX                            ; 00550087
    MOV EBX,dword ptr [ESP + 0x80]      ; 00550088
    PUSH EBX                            ; 0055008f
    CALL core_skeleton.cpp_computeBoneModelMatrices_FUN_0054fcc0 ; 00550090
        ;   XREF to: 0054fcc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_computeBoneModelMatrices_FUN_0054fcc0(SPose * bone_data, CDeformableModelInstance * instance_ptr)
    ADD ESP,0x8                         ; 00550095
    ADD ESP,0x68                        ; 00550098
    POP EBP                             ; 0055009b
    POP EDI                             ; 0055009c
    POP ESI                             ; 0055009d
    POP EBX                             ; 0055009e
    RET                                 ; 0055009f
    XOR EDX,EDX                         ; 005500a0
        ;   Label: LAB_005500a0
    MOV dword ptr [ESP + 0x88],EDX      ; 005500a2
    JMP 0x0054ff12                      ; 005500a9
        ;   XREF to: 0054ff12 (UNCONDITIONAL_JUMP)  ; LAB_0054ff12

