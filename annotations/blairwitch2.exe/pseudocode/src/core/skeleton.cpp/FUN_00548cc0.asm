; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00548cc0(SPose *param_1,float *param_2,float *param_3,float param_4,CDeformableModelInstance *param_5)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548cc0
        ;   Label: core_skeleton.cpp_FUN_00548cc0
    PUSH ESI                            ; 00548cc1
    PUSH EDI                            ; 00548cc2
    PUSH EBP                            ; 00548cc3
    SUB ESP,0x68                        ; 00548cc4
    MOV EBX,dword ptr [ESP + 0x80]      ; 00548cc7
    FLD float ptr [ESP + 0x88]          ; 00548cce
    FLDZ                                ; 00548cd5
    FCOMPP                              ; 00548cd7
    FNSTSW AX                           ; 00548cd9
    SAHF                                ; 00548cdb
    JA 0x00548e70                       ; 00548cdc
        ;   XREF to: 00548e70 (CONDITIONAL_JUMP)  ; LAB_00548e70
    FLD float ptr [ESP + 0x88]          ; 00548ce2
        ;   Label: LAB_00548ce2
    FLD1                                ; 00548ce9
    FCOMPP                              ; 00548ceb
    FNSTSW AX                           ; 00548ced
    SAHF                                ; 00548cef
    JNC 0x00548cfd                      ; 00548cf0
        ;   XREF to: 00548cfd (CONDITIONAL_JUMP)  ; LAB_00548cfd
    MOV dword ptr [ESP + 0x88],0x3f800000 ; 00548cf2
    MOV EAX,dword ptr [ESP + 0x84]      ; 00548cfd
        ;   Label: LAB_00548cfd
    FLD float ptr [ESP + 0x88]          ; 00548d04
    FLD float ptr [EAX]                 ; 00548d0b
    FMUL ST1                            ; 00548d0d
    FLD float ptr [EAX + 0x4]           ; 00548d0f
    FMUL ST2                            ; 00548d12
    FLD float ptr [EAX + 0x8]           ; 00548d14
    FMUL ST3                            ; 00548d17
    LEA EDI,[ESP + 0x4c]                ; 00548d19
    LEA ESI,[ESP + 0x10]                ; 00548d1d
    FLD1                                ; 00548d21
    FSUBRP ST4,ST0                      ; 00548d23
    FXCH ST2                            ; 00548d25
    FSTP float ptr [ESP + 0x10]         ; 00548d27
    FSTP float ptr [ESP + 0x14]         ; 00548d2b
    FSTP float ptr [ESP + 0x18]         ; 00548d2f
    MOVSD ES:EDI,ESI                    ; 00548d33
    MOVSD ES:EDI,ESI                    ; 00548d34
    MOVSD ES:EDI,ESI                    ; 00548d35
    FSTP float ptr [ESP + 0x58]         ; 00548d36
    FLD float ptr [EBX]                 ; 00548d3a
    FMUL float ptr [ESP + 0x58]         ; 00548d3c
    FLD float ptr [EBX + 0x4]           ; 00548d40
    FMUL float ptr [ESP + 0x58]         ; 00548d43
    FLD float ptr [EBX + 0x8]           ; 00548d47
    FMUL float ptr [ESP + 0x58]         ; 00548d4a
    LEA EDI,[ESP + 0x34]                ; 00548d4e
    LEA ESI,[ESP + 0x1c]                ; 00548d52
    FXCH ST2                            ; 00548d56
    FSTP float ptr [ESP + 0x1c]         ; 00548d58
    FSTP float ptr [ESP + 0x20]         ; 00548d5c
    FSTP float ptr [ESP + 0x24]         ; 00548d60
    MOVSD ES:EDI,ESI                    ; 00548d64
    MOVSD ES:EDI,ESI                    ; 00548d65
    MOVSD ES:EDI,ESI                    ; 00548d66
    FLD float ptr [ESP + 0x34]          ; 00548d67
    FLD float ptr [ESP + 0x38]          ; 00548d6b
    FLD float ptr [ESP + 0x3c]          ; 00548d6f
    LEA EDI,[ESP + 0x40]                ; 00548d73
    LEA ESI,[ESP + 0x28]                ; 00548d77
    FXCH ST2                            ; 00548d7b
    FADD float ptr [ESP + 0x4c]         ; 00548d7d
    FXCH                                ; 00548d81
    FADD float ptr [ESP + 0x50]         ; 00548d83
    FXCH ST2                            ; 00548d87
    FADD float ptr [ESP + 0x54]         ; 00548d89
    FXCH                                ; 00548d8d
    FSTP float ptr [ESP + 0x28]         ; 00548d8f
    FXCH                                ; 00548d93
    FSTP float ptr [ESP + 0x2c]         ; 00548d95
    FSTP float ptr [ESP + 0x30]         ; 00548d99
    MOVSD ES:EDI,ESI                    ; 00548d9d
    MOVSD ES:EDI,ESI                    ; 00548d9e
    MOVSD ES:EDI,ESI                    ; 00548d9f
    LEA EAX,[ESP + 0x40]                ; 00548da0
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00548da4
    CMP EAX,ESI                         ; 00548da8
    JZ 0x00548dc0                       ; 00548daa
        ;   XREF to: 00548dc0 (CONDITIONAL_JUMP)  ; LAB_00548dc0
    MOV EAX,dword ptr [ESP + 0x40]      ; 00548dac
    MOV dword ptr [ESI],EAX             ; 00548db0
    MOV EAX,dword ptr [ESP + 0x44]      ; 00548db2
    MOV dword ptr [ESI + 0x4],EAX       ; 00548db6
    MOV EAX,dword ptr [ESP + 0x48]      ; 00548db9
    MOV dword ptr [ESI + 0x8],EAX       ; 00548dbd
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00548dc0
        ;   Label: LAB_00548dc0
    PUSH EDI                            ; 00548dc7
    XOR EBP,EBP                         ; 00548dc8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00548dca
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00548dcf
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00548dd2
    MOV dword ptr [ESP + 0x5c],EAX      ; 00548dd8
    TEST EDX,EDX                        ; 00548ddc
    JLE 0x00548e50                      ; 00548dde
        ;   XREF to: 00548e50 (CONDITIONAL_JUMP)  ; LAB_00548e50
    MOV EAX,dword ptr [ESP + 0x84]      ; 00548de0
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00548de7
    ADD EBX,0xc                         ; 00548deb
    ADD EAX,0xc                         ; 00548dee
    MOV dword ptr [ESP + 0x64],ESI      ; 00548df1
    MOV dword ptr [ESP + 0x60],EAX      ; 00548df5
    MOV ECX,dword ptr [ESP + 0x60]      ; 00548df9
        ;   Label: LAB_00548df9
    PUSH dword ptr [ESP + 0x88]         ; 00548dfd
    PUSH ECX                            ; 00548e04
    PUSH EBX                            ; 00548e05
    LEA ESI,[ESP + 0xc]                 ; 00548e06
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00548e0a
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 00548e0f
    MOV EDI,dword ptr [ESP + 0x64]      ; 00548e12
    MOV ESI,ESP                         ; 00548e16
    LEA EDI,[EDI + 0xc]                 ; 00548e18
    INC EBP                             ; 00548e1b
    ADD EBX,0x10                        ; 00548e1c
    MOVSD ES:EDI,ESI                    ; 00548e1f
    MOVSD ES:EDI,ESI                    ; 00548e20
    MOVSD ES:EDI,ESI                    ; 00548e21
    MOVSD ES:EDI,ESI                    ; 00548e22
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00548e23
    MOV ESI,dword ptr [ESP + 0x64]      ; 00548e27
    MOV EDI,dword ptr [ESP + 0x60]      ; 00548e2b
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00548e2f
    ADD ESI,0x10                        ; 00548e35
    ADD EDI,0x10                        ; 00548e38
    MOV dword ptr [ESP + 0x64],ESI      ; 00548e3b
    MOV dword ptr [ESP + 0x60],EDI      ; 00548e3f
    CMP EBP,EDX                         ; 00548e43
    JL 0x00548df9                       ; 00548e45
        ;   XREF to: 00548df9 (CONDITIONAL_JUMP)  ; LAB_00548df9
    LEA EAX,[EAX]                       ; 00548e47
    LEA EDX,[EDX]                       ; 00548e4d
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00548e50
        ;   Label: LAB_00548e50
    PUSH ECX                            ; 00548e57
    MOV EBX,dword ptr [ESP + 0x80]      ; 00548e58
    PUSH EBX                            ; 00548e5f
    CALL core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90 ; 00548e60
        ;   XREF to: 00548a90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90(SPose * bone_data, CDeformableModelInstance * instance_ptr)
    ADD ESP,0x8                         ; 00548e65
    ADD ESP,0x68                        ; 00548e68
    POP EBP                             ; 00548e6b
    POP EDI                             ; 00548e6c
    POP ESI                             ; 00548e6d
    POP EBX                             ; 00548e6e
    RET                                 ; 00548e6f
    XOR EDX,EDX                         ; 00548e70
        ;   Label: LAB_00548e70
    MOV dword ptr [ESP + 0x88],EDX      ; 00548e72
    JMP 0x00548ce2                      ; 00548e79
        ;   XREF to: 00548ce2 (UNCONDITIONAL_JUMP)  ; LAB_00548ce2

