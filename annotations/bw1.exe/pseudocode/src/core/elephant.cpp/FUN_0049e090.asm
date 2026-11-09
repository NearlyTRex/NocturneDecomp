; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_elephant_cpp_FUN_0049e090(CWeapon *param_1,float param_2)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonLightInstance.field4_0x4
;   undefined4 g_CDemonLightInstance.field8_0x8
;   undefined4 g_CDemonLightInstance.field12_0xc
;   undefined4 g_CDemonLightInstance.field56_0x38
;   undefined4 g_CDemonLightInstance.field320_0x140
;   undefined4 g_CDemonLightInstance.field7348_0x1cb4
;   undefined4 g_CDemonLightInstance.field7356_0x1cbc
;   undefined4 g_CDemonLightInstance.field7376_0x1cd0
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_dirmat.cpp_FUN_0045f3e0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0
;   core_set.cpp_FUN_005518e0
;   core_weapon.cpp_CWeapon_process_FUN_005ad770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e090
        ;   Label: core_elephant.cpp_FUN_0049e090
    PUSH EBP                            ; 0049e091
    SUB ESP,0x30                        ; 0049e092
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0049e095
    CMP dword ptr [EBX + 0x57c],0x0     ; 0049e099
    JNZ 0x0049e0bf                      ; 0049e0a0
        ;   XREF to: 0049e0bf (CONDITIONAL_JUMP)  ; LAB_0049e0bf
    PUSH dword ptr [ESP + 0x40]         ; 0049e0a2
        ;   Label: LAB_0049e0a2
    PUSH EBX                            ; 0049e0a6
    MOV dword ptr [EBX + 0x57c],0x0     ; 0049e0a7
    CALL core_weapon.cpp_CWeapon_process_FUN_005ad770 ; 0049e0b1
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ad770(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0049e0b6
    ADD ESP,0x30                        ; 0049e0b9
    POP EBP                             ; 0049e0bc
    POP EBX                             ; 0049e0bd
    RET                                 ; 0049e0be
    PUSH EDI                            ; 0049e0bf
        ;   Label: LAB_0049e0bf
    PUSH ESI                            ; 0049e0c0
    MOV ECX,0x1                         ; 0049e0c1
    LEA ESI,[ESP + 0x20]                ; 0049e0c6
    PUSH EBX                            ; 0049e0ca
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049e0cb
    LEA EDI,[ESP + 0xc]                 ; 0049e0d1
    MOV dword ptr [0x01cce098],ECX      ; 0049e0d5 | g_CDemonLightInstance.field7348_0x1cb4
    CALL dword ptr [EAX + 0xe0]         ; 0049e0db
    ADD ESP,0x4                         ; 0049e0e1
    LEA EAX,[ESP + 0x8]                 ; 0049e0e4
    LEA ESI,[ESP + 0x20]                ; 0049e0e8
    PUSH EAX                            ; 0049e0ec
    MOVSD ES:EDI,ESI                    ; 0049e0ed
    MOVSD ES:EDI,ESI                    ; 0049e0ee
    MOVSD ES:EDI,ESI                    ; 0049e0ef
    PUSH EBX                            ; 0049e0f0
    LEA ESI,[ESP + 0x34]                ; 0049e0f1
    LEA EDI,[ESP + 0x1c]                ; 0049e0f5
    CALL core_actor.cpp_FUN_00408b40    ; 0049e0f9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x34]                ; 0049e0fe
    ADD ESP,0x8                         ; 0049e102
    MOVSD ES:EDI,ESI                    ; 0049e105
    MOVSD ES:EDI,ESI                    ; 0049e106
    MOVSD ES:EDI,ESI                    ; 0049e107
    XOR ESI,ESI                         ; 0049e108
    LEA EAX,[ESP + 0x14]                ; 0049e10a
    MOV dword ptr [0x01cce0a0],ESI      ; 0049e10e | g_CDemonLightInstance.field7356_0x1cbc
    CMP EAX,0x1ccc3e8                   ; 0049e114
    JZ 0x0049e136                       ; 0049e119
        ;   XREF to: 0049e136 (CONDITIONAL_JUMP)  ; LAB_0049e136
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049e11b
    MOV [0x01ccc3e8],EAX                ; 0049e11f | g_CDemonLightInstance.field4_0x4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049e124
    MOV [0x01ccc3ec],EAX                ; 0049e128 | g_CDemonLightInstance.field8_0x8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049e12d
    MOV [0x01ccc3f0],EAX                ; 0049e131 | g_CDemonLightInstance.field12_0xc
    LEA EAX,[EBX + 0x30]                ; 0049e136
        ;   Label: LAB_0049e136
    PUSH EAX                            ; 0049e139
    PUSH 0x1ccc3f4                      ; 0049e13a
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 0049e13f
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0049e144
    MOV EDI,0x42e00000                  ; 0049e147
    PUSH 0x3f800000                     ; 0049e14c
    FLD float ptr [EBX + 0x580]         ; 0049e151
    PUSH 0x1ccc3e4                      ; 0049e157
    FSTP float ptr [0x01ccc524]         ; 0049e15c | g_CDemonLightInstance.field320_0x140
    MOV dword ptr [0x01ccc41c],EDI      ; 0049e162 | g_CDemonLightInstance.field56_0x38
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0 ; 0049e168
        ;   XREF to: 00465da0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0049e16d
    PUSH 0x1ccc3e4                      ; 0049e170
    MOV EAX,[0x00622c18]                ; 0049e175 | g_CDemonSetPtr
    XOR EBP,EBP                         ; 0049e17a
    PUSH EAX                            ; 0049e17c
    MOV dword ptr [0x01cce0b4],EBP      ; 0049e17d | g_CDemonLightInstance.field7376_0x1cd0
    CALL core_set.cpp_FUN_005518e0      ; 0049e183
        ;   XREF to: 005518e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005518e0(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 0049e188
    POP ESI                             ; 0049e18b
    POP EDI                             ; 0049e18c
    JMP 0x0049e0a2                      ; 0049e18d
        ;   XREF to: 0049e0a2 (UNCONDITIONAL_JUMP)  ; LAB_0049e0a2

