; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_elephant_cpp_CElephantGun_process_FUN_00485a30(CElephantGun *this_ptr,float delta_time)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 00485a30
        ;   Label: core_elephant.cpp_CElephantGun_process_FUN_00485a30
    PUSH EBP                            ; 00485a31
    SUB ESP,0x30                        ; 00485a32
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00485a35
    CMP dword ptr [EBX + 0x6d8],0x0     ; 00485a39
    JNZ 0x00485a5f                      ; 00485a40
        ;   XREF to: 00485a5f (CONDITIONAL_JUMP)  ; LAB_00485a5f
    PUSH dword ptr [ESP + 0x40]         ; 00485a42
        ;   Label: LAB_00485a42
    PUSH EBX                            ; 00485a46
    MOV dword ptr [EBX + 0x6d8],0x0     ; 00485a47
    CALL core_weapon.cpp_CWeapon_process_FUN_00589c80 ; 00485a51
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_00589c80(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00485a56
    ADD ESP,0x30                        ; 00485a59
    POP EBP                             ; 00485a5c
    POP EBX                             ; 00485a5d
    RET                                 ; 00485a5e
    PUSH EDI                            ; 00485a5f
        ;   Label: LAB_00485a5f
    PUSH ESI                            ; 00485a60
    MOV ECX,0x1                         ; 00485a61
    LEA ESI,[ESP + 0x20]                ; 00485a66
    PUSH EBX                            ; 00485a6a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00485a6b
    LEA EDI,[ESP + 0xc]                 ; 00485a71
    MOV dword ptr [0x01cb5604],ECX      ; 00485a75 | g_CDemonLightInstance.light_enabled_flag
    CALL dword ptr [EAX + 0xe8]         ; 00485a7b
    ADD ESP,0x4                         ; 00485a81
    LEA EAX,[ESP + 0x8]                 ; 00485a84
    LEA ESI,[ESP + 0x20]                ; 00485a88
    PUSH EAX                            ; 00485a8c
    MOVSD ES:EDI,ESI                    ; 00485a8d
    MOVSD ES:EDI,ESI                    ; 00485a8e
    MOVSD ES:EDI,ESI                    ; 00485a8f
    PUSH EBX                            ; 00485a90
    LEA ESI,[ESP + 0x34]                ; 00485a91
    LEA EDI,[ESP + 0x1c]                ; 00485a95
    CALL core_actor.cpp_FUN_00408d70    ; 00485a99
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x34]                ; 00485a9e
    ADD ESP,0x8                         ; 00485aa2
    MOVSD ES:EDI,ESI                    ; 00485aa5
    MOVSD ES:EDI,ESI                    ; 00485aa6
    MOVSD ES:EDI,ESI                    ; 00485aa7
    XOR ESI,ESI                         ; 00485aa8
    LEA EAX,[ESP + 0x14]                ; 00485aaa
    MOV dword ptr [0x01cb560c],ESI      ; 00485aae | g_CDemonLightInstance.volumetric_enabled
    CMP EAX,0x1cb3954                   ; 00485ab4
    JZ 0x00485ad6                       ; 00485ab9
        ;   XREF to: 00485ad6 (CONDITIONAL_JUMP)  ; LAB_00485ad6
    MOV EAX,dword ptr [ESP + 0x14]      ; 00485abb
    MOV [0x01cb3954],EAX                ; 00485abf | g_CDemonLightInstance.base.base.position
    MOV EAX,dword ptr [ESP + 0x18]      ; 00485ac4
    MOV [0x01cb3958],EAX                ; 00485ac8 | g_CDemonLightInstance.base.base.position+4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00485acd
    MOV [0x01cb395c],EAX                ; 00485ad1 | g_CDemonLightInstance.base.base.position+8
    LEA EAX,[EBX + 0x30]                ; 00485ad6
        ;   Label: LAB_00485ad6
    PUSH EAX                            ; 00485ad9
    PUSH 0x1cb3960                      ; 00485ada
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 00485adf
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00485ae4
    MOV EDI,0x42e00000                  ; 00485ae7
    PUSH 0x3f800000                     ; 00485aec
    FLD float ptr [EBX + 0x6dc]         ; 00485af1
    PUSH 0x1cb3950                      ; 00485af7
    FSTP float ptr [0x01cb3a90]         ; 00485afc | g_CDemonLightInstance.base.max_distance
    MOV dword ptr [0x01cb3988],EDI      ; 00485b02 | g_CDemonLightInstance.base.base.focal_length
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570 ; 00485b08
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 00485b0d
    PUSH 0x1cb3950                      ; 00485b10
    MOV EAX,[0x0061b5a8]                ; 00485b15 | g_CDemonSetPtr
    XOR EBP,EBP                         ; 00485b1a
    PUSH EAX                            ; 00485b1c
    MOV dword ptr [0x01cb5620],EBP      ; 00485b1d | g_CDemonLightInstance.antialiasing_enabled
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630 ; 00485b23
        ;   XREF to: 00530630 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 00485b28
    POP ESI                             ; 00485b2b
    POP EDI                             ; 00485b2c
    JMP 0x00485a42                      ; 00485b2d
        ;   XREF to: 00485a42 (UNCONDITIONAL_JUMP)  ; LAB_00485a42

