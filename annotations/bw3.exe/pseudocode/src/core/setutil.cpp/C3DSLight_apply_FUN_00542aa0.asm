; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00542aa0(int param_1,CDemonLight *param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 00534669
;
; Referenced Globals:
;   undefined4 DAT_005d0fb2
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b550
;   core_dlight.cpp_CDemonLight_allocateFilter_FUN_0045daf0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542aa0
        ;   Label: core_setutil.cpp_C3DSLight_apply_FUN_00542aa0
    PUSH ESI                            ; 00542aa1
    PUSH EDI                            ; 00542aa2
    PUSH EBP                            ; 00542aa3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00542aa4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00542aa8
    LEA EAX,[EBP + 0x4]                 ; 00542aac
    LEA EDX,[EBX + 0x104]               ; 00542aaf
    CMP EAX,EDX                         ; 00542ab5
    JZ 0x00542ac9                       ; 00542ab7
        ;   XREF to: 00542ac9 (CONDITIONAL_JUMP)  ; LAB_00542ac9
    MOV ECX,dword ptr [EDX]             ; 00542ab9
    MOV dword ptr [EAX],ECX             ; 00542abb
    MOV ECX,dword ptr [EDX + 0x4]       ; 00542abd
    MOV dword ptr [EAX + 0x4],ECX       ; 00542ac0
    MOV ECX,dword ptr [EDX + 0x8]       ; 00542ac3
    MOV dword ptr [EAX + 0x8],ECX       ; 00542ac6
    LEA EAX,[EBX + 0x110]               ; 00542ac9
        ;   Label: LAB_00542ac9
    PUSH EAX                            ; 00542acf
    LEA EAX,[EBP + 0x10]                ; 00542ad0
    PUSH EAX                            ; 00542ad3
    CALL core_dirmat.cpp_FUN_0045b550   ; 00542ad4
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x11c]     ; 00542ad9
    MOV dword ptr [EBP + 0x38],EAX      ; 00542adf
    FLD float ptr [EBX + 0x120]         ; 00542ae2
    FMUL double ptr [0x005d0fb2]        ; 00542ae8 | DAT_005d0fb2
    ADD ESP,0x8                         ; 00542aee
    CALL crt_math.c_round_FUN_005a3120  ; 00542af1
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x2fa4]      ; 00542af6
    PUSH dword ptr [EBX + 0x124]        ; 00542afc
    PUSH EBP                            ; 00542b02
    LEA ESI,[EBX + 0x4]                 ; 00542b03
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0 ; 00542b06
        ;   XREF to: 0045fab0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 00542b0b
    MOV dword ptr [EBX + 0x11e8],0x0    ; 00542b0e
    LEA EDI,[EBP + 0x40]                ; 00542b18
    MOV dword ptr [EBX + 0x1894],0x0    ; 00542b1b
    PUSH EDI                            ; 00542b25
    MOV AL,byte ptr [ESI]               ; 00542b26
        ;   Label: LAB_00542b26
    MOV byte ptr [EDI],AL               ; 00542b28
    CMP AL,0x0                          ; 00542b2a
    JZ 0x00542b3e                       ; 00542b2c
        ;   XREF to: 00542b3e (CONDITIONAL_JUMP)  ; LAB_00542b3e
    MOV AL,byte ptr [ESI + 0x1]         ; 00542b2e
    ADD ESI,0x2                         ; 00542b31
    MOV byte ptr [EDI + 0x1],AL         ; 00542b34
    ADD EDI,0x2                         ; 00542b37
    CMP AL,0x0                          ; 00542b3a
    JNZ 0x00542b26                      ; 00542b3c
        ;   XREF to: 00542b26 (CONDITIONAL_JUMP)  ; LAB_00542b26
    POP EDI                             ; 00542b3e
        ;   Label: LAB_00542b3e
    CMP dword ptr [EBX + 0x17f4],0x0    ; 00542b3f
    JNZ 0x00542b51                      ; 00542b46
        ;   XREF to: 00542b51 (CONDITIONAL_JUMP)  ; LAB_00542b51
    POP EBP                             ; 00542b48
    POP EDI                             ; 00542b49
    POP ESI                             ; 00542b4a
    POP EBX                             ; 00542b4b
    LEA EAX,[EAX]                       ; 00542b4c
    PUSH EBP                            ; 00542b51
        ;   Label: LAB_00542b51
    CALL core_dlight.cpp_CDemonLight_allocateFilter_FUN_0045daf0 ; 00542b52
        ;   XREF to: 0045daf0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_allocateFilter_FUN_0045daf0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00542b57
    POP EBP                             ; 00542b5a
    POP EDI                             ; 00542b5b
    POP ESI                             ; 00542b5c
    POP EBX                             ; 00542b5d
    RET                                 ; 00542b5e

