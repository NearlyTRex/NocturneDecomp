; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_0057b5c0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d78d3
;   undefined4 DAT_005d78d7
;   undefined4 DAT_005d78db
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonLightInstance.base.base.position
;   undefined4 g_CDemonLightInstance.base.base.position+4
;   undefined4 g_CDemonLightInstance.base.base.position+8
;   undefined4 g_CDemonLightInstance.base.base.rotation_matrix.m[0].x
;   undefined4 g_CDemonLightInstance.base.base.focal_length
;   undefined4 g_CDemonLightInstance.base.max_distance
;   undefined4 g_CDemonLightInstance.light_enabled_flag
;   undefined4 g_CDemonLightInstance.volumetric_enabled
;   undefined4 g_CDemonLightInstance.antialiasing_enabled
;   CGame g_CGameInstance
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b5c0
        ;   Label: core_weapon.cpp_CWeapon_updateLighting_FUN_0057b5c0
    PUSH ESI                            ; 0057b5c1
    PUSH EDI                            ; 0057b5c2
    PUSH EBP                            ; 0057b5c3
    SUB ESP,0x90                        ; 0057b5c4
    MOV EBX,dword ptr [ESP + 0xa4]      ; 0057b5ca
    PUSH EBX                            ; 0057b5d1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057b5d2
    LEA ESI,[ESP + 0x44]                ; 0057b5d8
    LEA EDI,[ESP + 0x2c]                ; 0057b5dc
    CALL dword ptr [EAX + 0xe0]         ; 0057b5e0
    LEA ESI,[ESP + 0x44]                ; 0057b5e6
    ADD ESP,0x4                         ; 0057b5ea
    LEA EAX,[ESP + 0x28]                ; 0057b5ed
    MOV EBP,0x3f800000                  ; 0057b5f1
    PUSH EAX                            ; 0057b5f6
    MOVSD ES:EDI,ESI                    ; 0057b5f7
    MOVSD ES:EDI,ESI                    ; 0057b5f8
    MOVSD ES:EDI,ESI                    ; 0057b5f9
    PUSH EBX                            ; 0057b5fa
    LEA ESI,[ESP + 0x54]                ; 0057b5fb
    LEA EDI,[ESP + 0x3c]                ; 0057b5ff
    CALL core_actor.cpp_FUN_00408b80    ; 0057b603
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x54]                ; 0057b608
    MOV EDX,0x1                         ; 0057b60c
    LEA EAX,[ESP + 0x60]                ; 0057b611
    ADD ESP,0x8                         ; 0057b615
    MOV dword ptr [0x01d20014],EDX      ; 0057b618 | g_CDemonLightInstance.light_enabled_flag
    MOVSD ES:EDI,ESI                    ; 0057b61e
    MOVSD ES:EDI,ESI                    ; 0057b61f
    MOVSD ES:EDI,ESI                    ; 0057b620
    MOV dword ptr [0x01d2001c],EDX      ; 0057b621 | g_CDemonLightInstance.volumetric_enabled
    LEA EDI,[ESP + 0x58]                ; 0057b627
    LEA ESI,[EBX + 0x30]                ; 0057b62b
    PUSH EAX                            ; 0057b62e
    LEA EAX,[ESP + 0x4]                 ; 0057b62f
    MOVSD ES:EDI,ESI                    ; 0057b633
    MOVSD ES:EDI,ESI                    ; 0057b634
    MOVSD ES:EDI,ESI                    ; 0057b635
    PUSH EAX                            ; 0057b636
    FLD float ptr [ESP + 0x60]          ; 0057b637
    LEA EDI,[ESP + 0x78]                ; 0057b63b
    FADD float ptr [0x005d78d3]         ; 0057b63f | DAT_005d78d3
    XOR ESI,ESI                         ; 0057b645
    FSTP float ptr [ESP + 0x60]         ; 0057b647
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 0057b64b
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0057b650
    LEA EAX,[ESP + 0x7c]                ; 0057b653
    MOV dword ptr [ESP + 0x7c],ESI      ; 0057b657
    PUSH EAX                            ; 0057b65b
    LEA EAX,[ESP + 0x4]                 ; 0057b65c
    MOV dword ptr [ESP + 0x84],ESI      ; 0057b660
    PUSH EAX                            ; 0057b667
    LEA ESI,[ESP + 0x6c]                ; 0057b668
    MOV dword ptr [ESP + 0x8c],EBP      ; 0057b66c
    CALL core_dirmat.cpp_FUN_0045b800   ; 0057b673
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x6c]                ; 0057b678
    ADD ESP,0x8                         ; 0057b67c
    LEA EAX,[ESP + 0x34]                ; 0057b67f
    FLD float ptr [ESP + 0x34]          ; 0057b683
    FLD float ptr [ESP + 0x38]          ; 0057b687
    MOVSD ES:EDI,ESI                    ; 0057b68b
    MOVSD ES:EDI,ESI                    ; 0057b68c
    MOVSD ES:EDI,ESI                    ; 0057b68d
    FLD float ptr [ESP + 0x3c]          ; 0057b68e
    FXCH ST2                            ; 0057b692
    FADD float ptr [ESP + 0x70]         ; 0057b694
    FXCH                                ; 0057b698
    FADD float ptr [ESP + 0x74]         ; 0057b69a
    FXCH ST2                            ; 0057b69e
    FADD float ptr [ESP + 0x78]         ; 0057b6a0
    FXCH                                ; 0057b6a4
    FSTP float ptr [ESP + 0x34]         ; 0057b6a6
    FXCH                                ; 0057b6aa
    FSTP float ptr [ESP + 0x38]         ; 0057b6ac
    FSTP float ptr [ESP + 0x3c]         ; 0057b6b0
    CMP EAX,0x1d1e364                   ; 0057b6b4
    JZ 0x0057b6d6                       ; 0057b6b9
        ;   XREF to: 0057b6d6 (CONDITIONAL_JUMP)  ; LAB_0057b6d6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0057b6bb
    MOV [0x01d1e364],EAX                ; 0057b6bf | g_CDemonLightInstance.base.base.position
    MOV EAX,dword ptr [ESP + 0x38]      ; 0057b6c4
    MOV [0x01d1e368],EAX                ; 0057b6c8 | g_CDemonLightInstance.base.base.position+4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0057b6cd
    MOV [0x01d1e36c],EAX                ; 0057b6d1 | g_CDemonLightInstance.base.base.position+8
    LEA EAX,[ESP + 0x58]                ; 0057b6d6
        ;   Label: LAB_0057b6d6
    PUSH EAX                            ; 0057b6da
    PUSH 0x1d1e370                      ; 0057b6db | g_CDemonLightInstance.base.base.rotation_matrix.m[0].x
    MOV ESI,0x3f800000                  ; 0057b6e0
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 0057b6e5
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,0x42000000                  ; 0057b6ea
    ADD ESP,0x8                         ; 0057b6ef
    MOV EDI,dword ptr [0x01d5ba70]      ; 0057b6f2 | g_CHeroClassInfo.name_hash
    MOV ECX,0x1                         ; 0057b6f8
    PUSH EDI                            ; 0057b6fd
    MOV [0x01d1e4a0],EAX                ; 0057b6fe | g_CDemonLightInstance.base.max_distance
    MOV [0x01d1e398],EAX                ; 0057b703 | g_CDemonLightInstance.base.base.focal_length
    PUSH EBX                            ; 0057b708
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057b709
    MOV dword ptr [0x01d20030],ECX      ; 0057b70f | g_CDemonLightInstance.antialiasing_enabled
    MOV dword ptr [ESP + 0x94],ESI      ; 0057b715
    CALL dword ptr [EAX + 0x94]         ; 0057b71c
    ADD ESP,0x4                         ; 0057b722
    PUSH EAX                            ; 0057b725
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0057b726
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0057b72b
    TEST EAX,EAX                        ; 0057b72e
    JZ 0x0057b765                       ; 0057b730
        ;   XREF to: 0057b765 (CONDITIONAL_JUMP)  ; LAB_0057b765
    MOV EAX,dword ptr [EAX + 0x206e8]   ; 0057b732
    MOV dword ptr [ESP + 0x88],EAX      ; 0057b738
    FLD float ptr [ESP + 0x88]          ; 0057b73f
    FCOMP float ptr [0x005d78d7]        ; 0057b746 | DAT_005d78d7
    FNSTSW AX                           ; 0057b74c
    SAHF                                ; 0057b74e
    JNC 0x0057b765                      ; 0057b74f
        ;   XREF to: 0057b765 (CONDITIONAL_JUMP)  ; LAB_0057b765
    FLD float ptr [ESP + 0x88]          ; 0057b751
    FMUL float ptr [0x005d78db]         ; 0057b758 | DAT_005d78db
    FSTP float ptr [ESP + 0x8c]         ; 0057b75e
    PUSH dword ptr [ESP + 0x8c]         ; 0057b765
        ;   Label: LAB_0057b765
    PUSH 0x1d1e360                      ; 0057b76c
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0 ; 0057b771
        ;   XREF to: 0045fab0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(CDemonLight * this_ptr, float intensity)
    MOV EAX,[0x005fe9dc]                ; 0057b776 | g_CGamePtr | g_CGameInstance
    MOV EBP,dword ptr [EAX + 0x26c]     ; 0057b77b | g_CGameInstance.flashlight_active
    ADD ESP,0x8                         ; 0057b781
    TEST EBP,EBP                        ; 0057b784
    JNZ 0x0057b793                      ; 0057b786
        ;   XREF to: 0057b793 (CONDITIONAL_JUMP)  ; LAB_0057b793
    ADD ESP,0x90                        ; 0057b788
    POP EBP                             ; 0057b78e
    POP EDI                             ; 0057b78f
    POP ESI                             ; 0057b790
    POP EBX                             ; 0057b791
    RET                                 ; 0057b792
    LEA EAX,[ESP + 0x34]                ; 0057b793
        ;   Label: LAB_0057b793
    PUSH EAX                            ; 0057b797
    PUSH 0x2d0c154                      ; 0057b798
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 0057b79d
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0057b7a2
    MOV EAX,0x8000                      ; 0057b7a5
    PUSH 0x40a00000                     ; 0057b7aa
    MOV [0x02d0c190],EAX                ; 0057b7af | DAT_02d0c190
    MOV AH,0x20                         ; 0057b7b4
    PUSH 0x2d0c154                      ; 0057b7b6
    MOV byte ptr [0x02d0c170],AH        ; 0057b7bb | DAT_02d0c170
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 0057b7c1
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0057b7c6
    PUSH 0x2d0c154                      ; 0057b7c9
    MOV ECX,dword ptr [0x00603b28]      ; 0057b7ce | g_CDemonSetPtr
    XOR EDX,EDX                         ; 0057b7d4
    PUSH ECX                            ; 0057b7d6 | g_CDemonSetInstance
    MOV dword ptr [0x02d0c174],EDX      ; 0057b7d7 | DAT_02d0c174
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 0057b7dd
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 0057b7e2
    ADD ESP,0x90                        ; 0057b7e5
    POP EBP                             ; 0057b7eb
    POP EDI                             ; 0057b7ec
    POP ESI                             ; 0057b7ed
    POP EBX                             ; 0057b7ee
    RET                                 ; 0057b7ef

