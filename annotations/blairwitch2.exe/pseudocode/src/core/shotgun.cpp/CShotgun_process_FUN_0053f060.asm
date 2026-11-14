; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shotgun_cpp_CShotgun_process_FUN_0053f060(CShotgun *this_ptr,float delta_time)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonLightInstance.base.base.position
;   undefined4 g_CDemonLightInstance.base.base.position+4
;   undefined4 g_CDemonLightInstance.base.base.position+8
;   undefined4 g_CDemonLightInstance.base.base.focal_length
;   undefined4 g_CDemonLightInstance.base.max_distance
;   undefined4 g_CDemonLightInstance.light_enabled_flag
;   undefined4 g_CDemonLightInstance.volumetric_enabled
;   undefined4 g_CDemonLightInstance.antialiasing_enabled
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630
;   core_weapon.cpp_CWeapon_process_FUN_00589c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f060
        ;   Label: core_shotgun.cpp_CShotgun_process_FUN_0053f060
    PUSH EBP                            ; 0053f061
    SUB ESP,0x30                        ; 0053f062
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0053f065
    CMP dword ptr [EBX + 0x6d8],0x0     ; 0053f069
    JNZ 0x0053f08f                      ; 0053f070
        ;   XREF to: 0053f08f (CONDITIONAL_JUMP)  ; LAB_0053f08f
    PUSH dword ptr [ESP + 0x40]         ; 0053f072
        ;   Label: LAB_0053f072
    PUSH EBX                            ; 0053f076
    MOV dword ptr [EBX + 0x6d8],0x0     ; 0053f077
    CALL core_weapon.cpp_CWeapon_process_FUN_00589c80 ; 0053f081
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_00589c80(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0053f086
    ADD ESP,0x30                        ; 0053f089
    POP EBP                             ; 0053f08c
    POP EBX                             ; 0053f08d
    RET                                 ; 0053f08e
    PUSH EDI                            ; 0053f08f
        ;   Label: LAB_0053f08f
    PUSH ESI                            ; 0053f090
    MOV ECX,0x1                         ; 0053f091
    LEA ESI,[ESP + 0x20]                ; 0053f096
    PUSH EBX                            ; 0053f09a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053f09b
    LEA EDI,[ESP + 0xc]                 ; 0053f0a1
    MOV dword ptr [0x01cb5604],ECX      ; 0053f0a5 | g_CDemonLightInstance.light_enabled_flag
    CALL dword ptr [EAX + 0xe8]         ; 0053f0ab
    ADD ESP,0x4                         ; 0053f0b1
    LEA EAX,[ESP + 0x8]                 ; 0053f0b4
    LEA ESI,[ESP + 0x20]                ; 0053f0b8
    PUSH EAX                            ; 0053f0bc
    MOVSD ES:EDI,ESI                    ; 0053f0bd
    MOVSD ES:EDI,ESI                    ; 0053f0be
    MOVSD ES:EDI,ESI                    ; 0053f0bf
    PUSH EBX                            ; 0053f0c0
    LEA ESI,[ESP + 0x34]                ; 0053f0c1
    LEA EDI,[ESP + 0x1c]                ; 0053f0c5
    CALL core_actor.cpp_FUN_00408d70    ; 0053f0c9
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x34]                ; 0053f0ce
    ADD ESP,0x8                         ; 0053f0d2
    MOVSD ES:EDI,ESI                    ; 0053f0d5
    MOVSD ES:EDI,ESI                    ; 0053f0d6
    MOVSD ES:EDI,ESI                    ; 0053f0d7
    XOR ESI,ESI                         ; 0053f0d8
    LEA EAX,[ESP + 0x14]                ; 0053f0da
    MOV dword ptr [0x01cb560c],ESI      ; 0053f0de | g_CDemonLightInstance.volumetric_enabled
    CMP EAX,0x1cb3954                   ; 0053f0e4
    JZ 0x0053f106                       ; 0053f0e9
        ;   XREF to: 0053f106 (CONDITIONAL_JUMP)  ; LAB_0053f106
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053f0eb
    MOV [0x01cb3954],EAX                ; 0053f0ef | g_CDemonLightInstance.base.base.position
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053f0f4
    MOV [0x01cb3958],EAX                ; 0053f0f8 | g_CDemonLightInstance.base.base.position+4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053f0fd
    MOV [0x01cb395c],EAX                ; 0053f101 | g_CDemonLightInstance.base.base.position+8
    LEA EAX,[EBX + 0x30]                ; 0053f106
        ;   Label: LAB_0053f106
    PUSH EAX                            ; 0053f109
    PUSH 0x1cb3960                      ; 0053f10a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0053f10f
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0053f114
    MOV EDI,0x42e00000                  ; 0053f117
    PUSH 0x3f800000                     ; 0053f11c
    FLD float ptr [EBX + 0x6dc]         ; 0053f121
    PUSH 0x1cb3950                      ; 0053f127
    FSTP float ptr [0x01cb3a90]         ; 0053f12c | g_CDemonLightInstance.base.max_distance
    MOV dword ptr [0x01cb3988],EDI      ; 0053f132 | g_CDemonLightInstance.base.base.focal_length
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570 ; 0053f138
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0053f13d
    PUSH 0x1cb3950                      ; 0053f140
    MOV EAX,[0x0061b5a8]                ; 0053f145 | g_CDemonSetPtr
    XOR EBP,EBP                         ; 0053f14a
    PUSH EAX                            ; 0053f14c
    MOV dword ptr [0x01cb5620],EBP      ; 0053f14d | g_CDemonLightInstance.antialiasing_enabled
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630 ; 0053f153
        ;   XREF to: 00530630 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 0053f158
    POP ESI                             ; 0053f15b
    POP EDI                             ; 0053f15c
    JMP 0x0053f072                      ; 0053f15d
        ;   XREF to: 0053f072 (UNCONDITIONAL_JUMP)  ; LAB_0053f072

