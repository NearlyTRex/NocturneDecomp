; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_elephant.cpp_CElephantGun_FUN_004a7070(CElephantGun * this_ptr, float delta_time)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonLight g_CDemonLightInstance
;   undefined4 g_CDemonLightInstance.base.base.position.x
;   undefined4 g_CDemonLightInstance.base.base.position.y
;   undefined4 g_CDemonLightInstance.base.base.position.z
;   undefined4 DAT_02d7eb00
;   undefined4 g_CDemonLightInstance.base.base.projection_scale
;   undefined4 g_CDemonLightInstance.base.max_distance
;   undefined4 g_CDemonLightInstance.light_enabled_flag
;   undefined4 g_CDemonLightInstance.unk2
;   undefined4 g_CDemonLightInstance.antialiasing_enabled
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
;   core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
;   core_weapon.cpp_CWeapon_process_FUN_005ee110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7070
        ;   Label: core_elephant.cpp_CElephantGun_FUN_004a7070
    PUSH EBP                            ; 004a7071
    SUB ESP,0x18                        ; 004a7072
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a7075
    CMP dword ptr [EBX + 0x57c],0x0     ; 004a7079
    JNZ 0x004a709f                      ; 004a7080
        ;   XREF to: 004a709f (CONDITIONAL_JUMP)  ; LAB_004a709f
    PUSH dword ptr [ESP + 0x28]         ; 004a7082
        ;   Label: LAB_004a7082
    PUSH EBX                            ; 004a7086
    MOV dword ptr [EBX + 0x57c],0x0     ; 004a7087
    CALL core_weapon.cpp_CWeapon_process_FUN_005ee110 ; 004a7091
        ;   XREF to: 005ee110 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004a7096
    ADD ESP,0x18                        ; 004a7099
    POP EBP                             ; 004a709c
    POP EBX                             ; 004a709d
    RET                                 ; 004a709e
    PUSH EDI                            ; 004a709f
        ;   Label: LAB_004a709f
    PUSH ESI                            ; 004a70a0
    LEA EAX,[ESP + 0x14]                ; 004a70a1
    PUSH EAX                            ; 004a70a5
    MOV ECX,0x1                         ; 004a70a6
    MOV EDX,dword ptr [EBX + 0x154]     ; 004a70ab
    PUSH EBX                            ; 004a70b1
    MOV dword ptr [0x02d807a4],ECX      ; 004a70b2 | g_CDemonLightInstance.light_enabled_flag
    CALL dword ptr [EDX + 0xf4]         ; 004a70b8
    ADD ESP,0x8                         ; 004a70be
    PUSH EAX                            ; 004a70c1
    LEA EAX,[ESP + 0xc]                 ; 004a70c2
    PUSH EAX                            ; 004a70c6
    PUSH EBX                            ; 004a70c7
    XOR ESI,ESI                         ; 004a70c8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004a70ca
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EAX,[ESP + 0x14]                ; 004a70cf
    ADD ESP,0xc                         ; 004a70d3
    MOV dword ptr [0x02d807ac],ESI      ; 004a70d6 | g_CDemonLightInstance.unk2
    CMP EAX,0x2d7eaf4                   ; 004a70dc | g_CDemonLightInstance.base.base.position.x
    JZ 0x004a70fe                       ; 004a70e1
        ;   XREF to: 004a70fe (CONDITIONAL_JUMP)  ; LAB_004a70fe
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a70e3
    MOV [0x02d7eaf4],EAX                ; 004a70e7 | g_CDemonLightInstance.base.base.position.x
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a70ec
    MOV [0x02d7eaf8],EAX                ; 004a70f0 | g_CDemonLightInstance.base.base.position.y
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a70f5
    MOV [0x02d7eafc],EAX                ; 004a70f9 | g_CDemonLightInstance.base.base.position.z
    LEA EAX,[EBX + 0x30]                ; 004a70fe
        ;   Label: LAB_004a70fe
    PUSH EAX                            ; 004a7101
    PUSH 0x2d7eb00                      ; 004a7102 | DAT_02d7eb00
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 004a7107
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004a710c
    MOV EDI,0x42e00000                  ; 004a710f
    PUSH 0x3f800000                     ; 004a7114
    FLD float ptr [EBX + 0x580]         ; 004a7119
    PUSH 0x2d7eaf0                      ; 004a711f | g_CDemonLightInstance
    FSTP float ptr [0x02d7ec30]         ; 004a7124 | g_CDemonLightInstance.base.max_distance
    MOV dword ptr [0x02d7eb28],EDI      ; 004a712a | g_CDemonLightInstance.base.base.projection_scale
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0 ; 004a7130
        ;   XREF to: 004765e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 004a7135
    PUSH 0x2d7eaf0                      ; 004a7138 | g_CDemonLightInstance
    MOV EAX,[0x006810c8]                ; 004a713d | g_CDemonSetInstance | g_CDemonSetPtr
    XOR EBP,EBP                         ; 004a7142
    PUSH EAX                            ; 004a7144 | g_CDemonSetInstance
    MOV dword ptr [0x02d807c0],EBP      ; 004a7145 | g_CDemonLightInstance.antialiasing_enabled
    CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090 ; 004a714b
        ;   XREF to: 0056d090 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 004a7150
    POP ESI                             ; 004a7153
    POP EDI                             ; 004a7154
    JMP 0x004a7082                      ; 004a7155
        ;   XREF to: 004a7082 (UNCONDITIONAL_JUMP)  ; LAB_004a7082

