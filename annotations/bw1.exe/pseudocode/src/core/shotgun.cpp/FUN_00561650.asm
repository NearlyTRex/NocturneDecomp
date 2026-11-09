; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_FUN_00561650(CWeapon *param_1,float param_2)
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

    PUSH EBX                            ; 00561650
        ;   Label: core_shotgun.cpp_FUN_00561650
    PUSH EBP                            ; 00561651
    SUB ESP,0x30                        ; 00561652
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00561655
    CMP dword ptr [EBX + 0x57c],0x0     ; 00561659
    JNZ 0x0056167f                      ; 00561660
        ;   XREF to: 0056167f (CONDITIONAL_JUMP)  ; LAB_0056167f
    PUSH dword ptr [ESP + 0x40]         ; 00561662
        ;   Label: LAB_00561662
    PUSH EBX                            ; 00561666
    MOV dword ptr [EBX + 0x57c],0x0     ; 00561667
    CALL core_weapon.cpp_CWeapon_process_FUN_005ad770 ; 00561671
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ad770(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00561676
    ADD ESP,0x30                        ; 00561679
    POP EBP                             ; 0056167c
    POP EBX                             ; 0056167d
    RET                                 ; 0056167e
    PUSH EDI                            ; 0056167f
        ;   Label: LAB_0056167f
    PUSH ESI                            ; 00561680
    MOV ECX,0x1                         ; 00561681
    LEA ESI,[ESP + 0x20]                ; 00561686
    PUSH EBX                            ; 0056168a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056168b
    LEA EDI,[ESP + 0xc]                 ; 00561691
    MOV dword ptr [0x01cce098],ECX      ; 00561695 | g_CDemonLightInstance.field7348_0x1cb4
    CALL dword ptr [EAX + 0xe0]         ; 0056169b
    ADD ESP,0x4                         ; 005616a1
    LEA EAX,[ESP + 0x8]                 ; 005616a4
    LEA ESI,[ESP + 0x20]                ; 005616a8
    PUSH EAX                            ; 005616ac
    MOVSD ES:EDI,ESI                    ; 005616ad
    MOVSD ES:EDI,ESI                    ; 005616ae
    MOVSD ES:EDI,ESI                    ; 005616af
    PUSH EBX                            ; 005616b0
    LEA ESI,[ESP + 0x34]                ; 005616b1
    LEA EDI,[ESP + 0x1c]                ; 005616b5
    CALL core_actor.cpp_FUN_00408b40    ; 005616b9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x34]                ; 005616be
    ADD ESP,0x8                         ; 005616c2
    MOVSD ES:EDI,ESI                    ; 005616c5
    MOVSD ES:EDI,ESI                    ; 005616c6
    MOVSD ES:EDI,ESI                    ; 005616c7
    XOR ESI,ESI                         ; 005616c8
    LEA EAX,[ESP + 0x14]                ; 005616ca
    MOV dword ptr [0x01cce0a0],ESI      ; 005616ce | g_CDemonLightInstance.field7356_0x1cbc
    CMP EAX,0x1ccc3e8                   ; 005616d4
    JZ 0x005616f6                       ; 005616d9
        ;   XREF to: 005616f6 (CONDITIONAL_JUMP)  ; LAB_005616f6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005616db
    MOV [0x01ccc3e8],EAX                ; 005616df | g_CDemonLightInstance.field4_0x4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005616e4
    MOV [0x01ccc3ec],EAX                ; 005616e8 | g_CDemonLightInstance.field8_0x8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005616ed
    MOV [0x01ccc3f0],EAX                ; 005616f1 | g_CDemonLightInstance.field12_0xc
    LEA EAX,[EBX + 0x30]                ; 005616f6
        ;   Label: LAB_005616f6
    PUSH EAX                            ; 005616f9
    PUSH 0x1ccc3f4                      ; 005616fa
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 005616ff
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00561704
    MOV EDI,0x42e00000                  ; 00561707
    PUSH 0x3f800000                     ; 0056170c
    FLD float ptr [EBX + 0x580]         ; 00561711
    PUSH 0x1ccc3e4                      ; 00561717
    FSTP float ptr [0x01ccc524]         ; 0056171c | g_CDemonLightInstance.field320_0x140
    MOV dword ptr [0x01ccc41c],EDI      ; 00561722 | g_CDemonLightInstance.field56_0x38
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0 ; 00561728
        ;   XREF to: 00465da0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0056172d
    PUSH 0x1ccc3e4                      ; 00561730
    MOV EAX,[0x00622c18]                ; 00561735 | g_CDemonSetPtr
    XOR EBP,EBP                         ; 0056173a
    PUSH EAX                            ; 0056173c
    MOV dword ptr [0x01cce0b4],EBP      ; 0056173d | g_CDemonLightInstance.field7376_0x1cd0
    CALL core_set.cpp_FUN_005518e0      ; 00561743
        ;   XREF to: 005518e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005518e0(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 00561748
    POP ESI                             ; 0056174b
    POP EDI                             ; 0056174c
    JMP 0x00561662                      ; 0056174d
        ;   XREF to: 00561662 (UNCONDITIONAL_JUMP)  ; LAB_00561662

