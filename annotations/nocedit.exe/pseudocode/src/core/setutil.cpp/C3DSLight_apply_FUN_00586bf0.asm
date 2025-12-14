; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight * this_ptr, CDemonLight * light)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056ac59
;
; Referenced Globals:
;   double g_AspectScaleConstant = 65536
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586bf0
        ;   Label: core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
    PUSH ESI                            ; 00586bf1
    PUSH EDI                            ; 00586bf2
    PUSH EBP                            ; 00586bf3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00586bf4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00586bf8
    LEA EAX,[EBP + 0x4]                 ; 00586bfc
    LEA EDX,[EBX + 0x104]               ; 00586bff
    CMP EAX,EDX                         ; 00586c05
    JZ 0x00586c19                       ; 00586c07
        ;   XREF to: 00586c19 (CONDITIONAL_JUMP)  ; LAB_00586c19
    MOV ECX,dword ptr [EDX]             ; 00586c09
    MOV dword ptr [EAX],ECX             ; 00586c0b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00586c0d
    MOV dword ptr [EAX + 0x4],ECX       ; 00586c10
    MOV ECX,dword ptr [EDX + 0x8]       ; 00586c13
    MOV dword ptr [EAX + 0x8],ECX       ; 00586c16
    LEA EAX,[EBX + 0x110]               ; 00586c19
        ;   Label: LAB_00586c19
    PUSH EAX                            ; 00586c1f
    LEA EAX,[EBP + 0x10]                ; 00586c20
    PUSH EAX                            ; 00586c23
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00586c24
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x11c]     ; 00586c29
    MOV dword ptr [EBP + 0x38],EAX      ; 00586c2f
    FLD float ptr [EBX + 0x120]         ; 00586c32
    FMUL double ptr [0x0064966b]        ; 00586c38 | g_AspectScaleConstant
    ADD ESP,0x8                         ; 00586c3e
    CALL crt_math.c_round_FUN_005fe6b0  ; 00586c41
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x2fa4]      ; 00586c46
    PUSH dword ptr [EBX + 0x124]        ; 00586c4c
    PUSH EBP                            ; 00586c52
    LEA ESI,[EBX + 0x4]                 ; 00586c53
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0 ; 00586c56
        ;   XREF to: 004765e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 00586c5b
    MOV dword ptr [EBX + 0x11e8],0x0    ; 00586c5e
    LEA EDI,[EBP + 0x40]                ; 00586c68
    MOV dword ptr [EBX + 0x1894],0x0    ; 00586c6b
    PUSH EDI                            ; 00586c75
    MOV AL,byte ptr [ESI]               ; 00586c76
        ;   Label: LAB_00586c76
    MOV byte ptr [EDI],AL               ; 00586c78
    CMP AL,0x0                          ; 00586c7a
    JZ 0x00586c8e                       ; 00586c7c
        ;   XREF to: 00586c8e (CONDITIONAL_JUMP)  ; LAB_00586c8e
    MOV AL,byte ptr [ESI + 0x1]         ; 00586c7e
    ADD ESI,0x2                         ; 00586c81
    MOV byte ptr [EDI + 0x1],AL         ; 00586c84
    ADD EDI,0x2                         ; 00586c87
    CMP AL,0x0                          ; 00586c8a
    JNZ 0x00586c76                      ; 00586c8c
        ;   XREF to: 00586c76 (CONDITIONAL_JUMP)  ; LAB_00586c76
    POP EDI                             ; 00586c8e
        ;   Label: LAB_00586c8e
    CMP dword ptr [EBX + 0x17f4],0x0    ; 00586c8f
    JNZ 0x00586ca1                      ; 00586c96
        ;   XREF to: 00586ca1 (CONDITIONAL_JUMP)  ; LAB_00586ca1
    POP EBP                             ; 00586c98
    POP EDI                             ; 00586c99
    POP ESI                             ; 00586c9a
    POP EBX                             ; 00586c9b
    LEA EAX,[EAX]                       ; 00586c9c
    PUSH EBP                            ; 00586ca1
        ;   Label: LAB_00586ca1
    CALL core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720 ; 00586ca2
        ;   XREF to: 00474720 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00586ca7
    POP EBP                             ; 00586caa
    POP EDI                             ; 00586cab
    POP ESI                             ; 00586cac
    POP EBX                             ; 00586cad
    RET                                 ; 00586cae

