; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_FUN_005adb20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f990a
;   undefined4 DAT_005f990e
;   undefined4 DAT_005f9912
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonLightInstance.field4_0x4
;   undefined4 g_CDemonLightInstance.field8_0x8
;   undefined4 g_CDemonLightInstance.field12_0xc
;   undefined4 g_CDemonLightInstance.field16_0x10
;   undefined4 g_CDemonLightInstance.field56_0x38
;   undefined4 g_CDemonLightInstance.field320_0x140
;   undefined4 g_CDemonLightInstance.field7348_0x1cb4
;   undefined4 g_CDemonLightInstance.field7356_0x1cbc
;   undefined4 g_CDemonLightInstance.field7376_0x1cd0
;   CGame g_CGameInstance
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970
;   core_dirmat.cpp_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adb20
        ;   Label: core_weapon.cpp_FUN_005adb20
    PUSH ESI                            ; 005adb21
    PUSH EDI                            ; 005adb22
    PUSH EBP                            ; 005adb23
    SUB ESP,0x90                        ; 005adb24
    MOV EBX,dword ptr [ESP + 0xa4]      ; 005adb2a
    PUSH EBX                            ; 005adb31
    MOV EAX,dword ptr [EBX + 0x154]     ; 005adb32
    LEA ESI,[ESP + 0x44]                ; 005adb38
    LEA EDI,[ESP + 0x2c]                ; 005adb3c
    CALL dword ptr [EAX + 0xe0]         ; 005adb40
    LEA ESI,[ESP + 0x44]                ; 005adb46
    ADD ESP,0x4                         ; 005adb4a
    LEA EAX,[ESP + 0x28]                ; 005adb4d
    MOV EBP,0x3f800000                  ; 005adb51
    PUSH EAX                            ; 005adb56
    MOVSD ES:EDI,ESI                    ; 005adb57
    MOVSD ES:EDI,ESI                    ; 005adb58
    MOVSD ES:EDI,ESI                    ; 005adb59
    PUSH EBX                            ; 005adb5a
    LEA ESI,[ESP + 0x54]                ; 005adb5b
    LEA EDI,[ESP + 0x3c]                ; 005adb5f
    CALL core_actor.cpp_FUN_00408b40    ; 005adb63
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x54]                ; 005adb68
    MOV EDX,0x1                         ; 005adb6c
    LEA EAX,[ESP + 0x60]                ; 005adb71
    ADD ESP,0x8                         ; 005adb75
    MOV dword ptr [0x01cce098],EDX      ; 005adb78 | g_CDemonLightInstance.field7348_0x1cb4
    MOVSD ES:EDI,ESI                    ; 005adb7e
    MOVSD ES:EDI,ESI                    ; 005adb7f
    MOVSD ES:EDI,ESI                    ; 005adb80
    MOV dword ptr [0x01cce0a0],EDX      ; 005adb81 | g_CDemonLightInstance.field7356_0x1cbc
    LEA EDI,[ESP + 0x58]                ; 005adb87
    LEA ESI,[EBX + 0x30]                ; 005adb8b
    PUSH EAX                            ; 005adb8e
    LEA EAX,[ESP + 0x4]                 ; 005adb8f
    MOVSD ES:EDI,ESI                    ; 005adb93
    MOVSD ES:EDI,ESI                    ; 005adb94
    MOVSD ES:EDI,ESI                    ; 005adb95
    PUSH EAX                            ; 005adb96
    FLD float ptr [ESP + 0x60]          ; 005adb97
    LEA EDI,[ESP + 0x78]                ; 005adb9b
    FADD float ptr [0x005f990a]         ; 005adb9f | DAT_005f990a
    XOR ESI,ESI                         ; 005adba5
    FSTP float ptr [ESP + 0x60]         ; 005adba7
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 005adbab
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005adbb0
    LEA EAX,[ESP + 0x7c]                ; 005adbb3
    MOV dword ptr [ESP + 0x7c],ESI      ; 005adbb7
    PUSH EAX                            ; 005adbbb
    LEA EAX,[ESP + 0x4]                 ; 005adbbc
    MOV dword ptr [ESP + 0x84],ESI      ; 005adbc0
    PUSH EAX                            ; 005adbc7
    LEA ESI,[ESP + 0x6c]                ; 005adbc8
    MOV dword ptr [ESP + 0x8c],EBP      ; 005adbcc
    CALL core_dirmat.cpp_FUN_0045f690   ; 005adbd3
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x6c]                ; 005adbd8
    ADD ESP,0x8                         ; 005adbdc
    LEA EAX,[ESP + 0x34]                ; 005adbdf
    FLD float ptr [ESP + 0x34]          ; 005adbe3
    FLD float ptr [ESP + 0x38]          ; 005adbe7
    MOVSD ES:EDI,ESI                    ; 005adbeb
    MOVSD ES:EDI,ESI                    ; 005adbec
    MOVSD ES:EDI,ESI                    ; 005adbed
    FLD float ptr [ESP + 0x3c]          ; 005adbee
    FXCH ST2                            ; 005adbf2
    FADD float ptr [ESP + 0x70]         ; 005adbf4
    FXCH                                ; 005adbf8
    FADD float ptr [ESP + 0x74]         ; 005adbfa
    FXCH ST2                            ; 005adbfe
    FADD float ptr [ESP + 0x78]         ; 005adc00
    FXCH                                ; 005adc04
    FSTP float ptr [ESP + 0x34]         ; 005adc06
    FXCH                                ; 005adc0a
    FSTP float ptr [ESP + 0x38]         ; 005adc0c
    FSTP float ptr [ESP + 0x3c]         ; 005adc10
    CMP EAX,0x1ccc3e8                   ; 005adc14
    JZ 0x005adc36                       ; 005adc19
        ;   XREF to: 005adc36 (CONDITIONAL_JUMP)  ; LAB_005adc36
    MOV EAX,dword ptr [ESP + 0x34]      ; 005adc1b
    MOV [0x01ccc3e8],EAX                ; 005adc1f | g_CDemonLightInstance.field4_0x4
    MOV EAX,dword ptr [ESP + 0x38]      ; 005adc24
    MOV [0x01ccc3ec],EAX                ; 005adc28 | g_CDemonLightInstance.field8_0x8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005adc2d
    MOV [0x01ccc3f0],EAX                ; 005adc31 | g_CDemonLightInstance.field12_0xc
    LEA EAX,[ESP + 0x58]                ; 005adc36
        ;   Label: LAB_005adc36
    PUSH EAX                            ; 005adc3a
    PUSH 0x1ccc3f4                      ; 005adc3b | g_CDemonLightInstance.field16_0x10
    MOV ESI,0x3f800000                  ; 005adc40
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 005adc45
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,0x42000000                  ; 005adc4a
    ADD ESP,0x8                         ; 005adc4f
    MOV EDI,dword ptr [0x01d06b10]      ; 005adc52 | g_CHeroClassInfo.name_hash
    MOV ECX,0x1                         ; 005adc58
    PUSH EDI                            ; 005adc5d
    MOV [0x01ccc524],EAX                ; 005adc5e | g_CDemonLightInstance.field320_0x140
    MOV [0x01ccc41c],EAX                ; 005adc63 | g_CDemonLightInstance.field56_0x38
    PUSH EBX                            ; 005adc68
    MOV EAX,dword ptr [EBX + 0x154]     ; 005adc69
    MOV dword ptr [0x01cce0b4],ECX      ; 005adc6f | g_CDemonLightInstance.field7376_0x1cd0
    MOV dword ptr [ESP + 0x94],ESI      ; 005adc75
    CALL dword ptr [EAX + 0x94]         ; 005adc7c
    ADD ESP,0x4                         ; 005adc82
    PUSH EAX                            ; 005adc85
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005adc86
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005adc8b
    TEST EAX,EAX                        ; 005adc8e
    JZ 0x005adcc5                       ; 005adc90
        ;   XREF to: 005adcc5 (CONDITIONAL_JUMP)  ; LAB_005adcc5
    MOV EAX,dword ptr [EAX + 0x1fae8]   ; 005adc92
    MOV dword ptr [ESP + 0x88],EAX      ; 005adc98
    FLD float ptr [ESP + 0x88]          ; 005adc9f
    FCOMP float ptr [0x005f990e]        ; 005adca6 | DAT_005f990e
    FNSTSW AX                           ; 005adcac
    SAHF                                ; 005adcae
    JNC 0x005adcc5                      ; 005adcaf
        ;   XREF to: 005adcc5 (CONDITIONAL_JUMP)  ; LAB_005adcc5
    FLD float ptr [ESP + 0x88]          ; 005adcb1
    FMUL float ptr [0x005f9912]         ; 005adcb8 | DAT_005f9912
    FSTP float ptr [ESP + 0x8c]         ; 005adcbe
    PUSH dword ptr [ESP + 0x8c]         ; 005adcc5
        ;   Label: LAB_005adcc5
    PUSH 0x1ccc3e4                      ; 005adccc
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0 ; 005adcd1
        ;   XREF to: 00465da0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(CDemonLight * this_ptr, float intensity)
    MOV EAX,[0x0061d95c]                ; 005adcd6 | g_CGamePtr | g_CGameInstance
    MOV EBP,dword ptr [EAX + 0x264]     ; 005adcdb | g_CGameInstance.field612_0x264
    ADD ESP,0x8                         ; 005adce1
    TEST EBP,EBP                        ; 005adce4
    JNZ 0x005adcf3                      ; 005adce6
        ;   XREF to: 005adcf3 (CONDITIONAL_JUMP)  ; LAB_005adcf3
    ADD ESP,0x90                        ; 005adce8
    POP EBP                             ; 005adcee
    POP EDI                             ; 005adcef
    POP ESI                             ; 005adcf0
    POP EBX                             ; 005adcf1
    RET                                 ; 005adcf2
    LEA EAX,[ESP + 0x34]                ; 005adcf3
        ;   Label: LAB_005adcf3
    PUSH EAX                            ; 005adcf7
    PUSH 0x2c99774                      ; 005adcf8
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970 ; 005adcfd
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 005add02
    MOV EAX,0x8000                      ; 005add05
    PUSH 0x40a00000                     ; 005add0a
    MOV [0x02c997b0],EAX                ; 005add0f | DAT_02c997b0
    MOV AH,0x20                         ; 005add14
    PUSH 0x2c99774                      ; 005add16
    MOV byte ptr [0x02c99790],AH        ; 005add1b | DAT_02c99790
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0 ; 005add21
        ;   XREF to: 0045e9c0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 005add26
    PUSH 0x2c99774                      ; 005add29
    MOV ECX,dword ptr [0x00622c18]      ; 005add2e | g_CDemonSetPtr
    XOR EDX,EDX                         ; 005add34
    PUSH ECX                            ; 005add36 | g_CDemonSetInstance
    MOV dword ptr [0x02c99794],EDX      ; 005add37 | DAT_02c99794
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960 ; 005add3d
        ;   XREF to: 00551960 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 005add42
    ADD ESP,0x90                        ; 005add45
    POP EBP                             ; 005add4b
    POP EDI                             ; 005add4c
    POP ESI                             ; 005add4d
    POP EBX                             ; 005add4e
    RET                                 ; 005add4f

