; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_setutil_cpp_C3DSLight_apply_FUN_0055d0e0(int param_1,CDemonLight *param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054eea9
;
; Referenced Globals:
;   undefined4 DAT_005f1309
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f3e0
;   core_dlight.cpp_CDemonLight_allocateFilter_FUN_00463de0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d0e0
        ;   Label: core_setutil.cpp_C3DSLight_apply_FUN_0055d0e0
    PUSH ESI                            ; 0055d0e1
    PUSH EDI                            ; 0055d0e2
    PUSH EBP                            ; 0055d0e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055d0e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0055d0e8
    LEA EAX,[EBP + 0x4]                 ; 0055d0ec
    LEA EDX,[EBX + 0x104]               ; 0055d0ef
    CMP EAX,EDX                         ; 0055d0f5
    JZ 0x0055d109                       ; 0055d0f7
        ;   XREF to: 0055d109 (CONDITIONAL_JUMP)  ; LAB_0055d109
    MOV ECX,dword ptr [EDX]             ; 0055d0f9
    MOV dword ptr [EAX],ECX             ; 0055d0fb
    MOV ECX,dword ptr [EDX + 0x4]       ; 0055d0fd
    MOV dword ptr [EAX + 0x4],ECX       ; 0055d100
    MOV ECX,dword ptr [EDX + 0x8]       ; 0055d103
    MOV dword ptr [EAX + 0x8],ECX       ; 0055d106
    LEA EAX,[EBX + 0x110]               ; 0055d109
        ;   Label: LAB_0055d109
    PUSH EAX                            ; 0055d10f
    LEA EAX,[EBP + 0x10]                ; 0055d110
    PUSH EAX                            ; 0055d113
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 0055d114
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0055d119
    MOV dword ptr [EBP + 0x38],EAX      ; 0055d11f
    FLD float ptr [EBX + 0x120]         ; 0055d122
    FMUL double ptr [0x005f1309]        ; 0055d128 | DAT_005f1309
    ADD ESP,0x8                         ; 0055d12e
    CALL crt_math.c_round_FUN_005c03a0  ; 0055d131
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0x2fa4]      ; 0055d136
    PUSH dword ptr [EBX + 0x124]        ; 0055d13c
    PUSH EBP                            ; 0055d142
    LEA ESI,[EBX + 0x4]                 ; 0055d143
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0 ; 0055d146
        ;   XREF to: 00465da0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0055d14b
    MOV dword ptr [EBX + 0x11e8],0x0    ; 0055d14e
    LEA EDI,[EBP + 0x40]                ; 0055d158
    MOV dword ptr [EBX + 0x1894],0x0    ; 0055d15b
    PUSH EDI                            ; 0055d165
    MOV AL,byte ptr [ESI]               ; 0055d166
        ;   Label: LAB_0055d166
    MOV byte ptr [EDI],AL               ; 0055d168
    CMP AL,0x0                          ; 0055d16a
    JZ 0x0055d17e                       ; 0055d16c
        ;   XREF to: 0055d17e (CONDITIONAL_JUMP)  ; LAB_0055d17e
    MOV AL,byte ptr [ESI + 0x1]         ; 0055d16e
    ADD ESI,0x2                         ; 0055d171
    MOV byte ptr [EDI + 0x1],AL         ; 0055d174
    ADD EDI,0x2                         ; 0055d177
    CMP AL,0x0                          ; 0055d17a
    JNZ 0x0055d166                      ; 0055d17c
        ;   XREF to: 0055d166 (CONDITIONAL_JUMP)  ; LAB_0055d166
    POP EDI                             ; 0055d17e
        ;   Label: LAB_0055d17e
    CMP dword ptr [EBX + 0x17f4],0x0    ; 0055d17f
    JNZ 0x0055d191                      ; 0055d186
        ;   XREF to: 0055d191 (CONDITIONAL_JUMP)  ; LAB_0055d191
    POP EBP                             ; 0055d188
    POP EDI                             ; 0055d189
    POP ESI                             ; 0055d18a
    POP EBX                             ; 0055d18b
    LEA EAX,[EAX]                       ; 0055d18c
    PUSH EBP                            ; 0055d191
        ;   Label: LAB_0055d191
    CALL core_dlight.cpp_CDemonLight_allocateFilter_FUN_00463de0 ; 0055d192
        ;   XREF to: 00463de0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_allocateFilter_FUN_00463de0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0055d197
    POP EBP                             ; 0055d19a
    POP EDI                             ; 0055d19b
    POP ESI                             ; 0055d19c
    POP EBX                             ; 0055d19d
    RET                                 ; 0055d19e

