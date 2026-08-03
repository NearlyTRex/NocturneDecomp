; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_elephant_cpp_CElephantGun_process_FUN_004777a0(CElephantGun *this_ptr,float delta_time)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonLight g_CDemonLight_01c74640
;   undefined4 g_CDemonLight_01c74640.base.fixed_point_scale
;   undefined4 g_CDemonLight_01c74640.base.position.x
;   undefined4 g_CDemonLight_01c74640.base.position.y
;   undefined4 g_CDemonLight_01c74640.base.position.z
;   undefined4 g_CDemonLight_01c74640.base.rotation_matrix.m[0].x
;   undefined4 g_CDemonLight_01c74640.base.focal_length
;   undefined4 g_CDemonLight_01c74640.light_enabled_flag
;   undefined4 g_CDemonLight_01c74640.volumetric_enabled
;   undefined4 g_CDemonLight_01c74640.antialiasing_enabled
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970
;   core_weapon.cpp_CWeapon_process_FUN_00554030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004777a0
        ;   Label: core_elephant.cpp_CElephantGun_process_FUN_004777a0
    PUSH EBP                            ; 004777a1
    SUB ESP,0x18                        ; 004777a2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004777a5
    CMP dword ptr [EBX + 0x574],0x0     ; 004777a9
    JNZ 0x004777cf                      ; 004777b0
        ;   XREF to: 004777cf (CONDITIONAL_JUMP)  ; LAB_004777cf
    PUSH dword ptr [ESP + 0x28]         ; 004777b2
        ;   Label: LAB_004777b2
    PUSH EBX                            ; 004777b6
    MOV dword ptr [EBX + 0x574],0x0     ; 004777b7
    CALL core_weapon.cpp_CWeapon_process_FUN_00554030 ; 004777c1
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_00554030(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004777c6
    ADD ESP,0x18                        ; 004777c9
    POP EBP                             ; 004777cc
    POP EBX                             ; 004777cd
    RET                                 ; 004777ce
    PUSH EDI                            ; 004777cf
        ;   Label: LAB_004777cf
    PUSH ESI                            ; 004777d0
    LEA EAX,[ESP + 0x14]                ; 004777d1
    PUSH EAX                            ; 004777d5
    MOV ECX,0x1                         ; 004777d6
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004777db
    PUSH EBX                            ; 004777e1
    MOV dword ptr [0x01c762f4],ECX      ; 004777e2 | g_CDemonLight_01c74640.light_enabled_flag
    CALL dword ptr [EDX + 0xd8]         ; 004777e8
    ADD ESP,0x8                         ; 004777ee
    PUSH EAX                            ; 004777f1
    LEA EAX,[ESP + 0xc]                 ; 004777f2
    PUSH EAX                            ; 004777f6
    PUSH EBX                            ; 004777f7
    XOR ESI,ESI                         ; 004777f8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004777fa
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EAX,[ESP + 0x14]                ; 004777ff
    ADD ESP,0xc                         ; 00477803
    MOV dword ptr [0x01c762fc],ESI      ; 00477806 | g_CDemonLight_01c74640.volumetric_enabled
    CMP EAX,0x1c74744                   ; 0047780c
    JZ 0x0047782e                       ; 00477811
        ;   XREF to: 0047782e (CONDITIONAL_JUMP)  ; LAB_0047782e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00477813
    MOV [0x01c74744],EAX                ; 00477817 | g_CDemonLight_01c74640.base.position.x
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047781c
    MOV [0x01c74748],EAX                ; 00477820 | g_CDemonLight_01c74640.base.position.y
    MOV EAX,dword ptr [ESP + 0x10]      ; 00477825
    MOV [0x01c7474c],EAX                ; 00477829 | g_CDemonLight_01c74640.base.position.z
    LEA EAX,[EBX + 0x30]                ; 0047782e
        ;   Label: LAB_0047782e
    PUSH EAX                            ; 00477831
    PUSH 0x1c74750                      ; 00477832 | g_CDemonLight_01c74640.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00477837
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0047783c
    MOV EDI,0x42e00000                  ; 0047783f
    PUSH 0x3f800000                     ; 00477844
    FLD float ptr [EBX + 0x578]         ; 00477849
    PUSH 0x1c74640                      ; 0047784f | g_CDemonLight_01c74640
    FSTP float ptr [0x01c74740]         ; 00477854 | g_CDemonLight_01c74640.base.fixed_point_scale
    MOV dword ptr [0x01c74778],EDI      ; 0047785a | g_CDemonLight_01c74640.base.focal_length
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080 ; 00477860
        ;   XREF to: 00452080 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 00477865
    PUSH 0x1c74640                      ; 00477868 | g_CDemonLight_01c74640
    MOV EAX,[0x005be368]                ; 0047786d | g_CDemonSet_PTR_005be368
    XOR EBP,EBP                         ; 00477872
    PUSH EAX                            ; 00477874 | g_CDemonSet_01e57284
    MOV dword ptr [0x01c76310],EBP      ; 00477875 | g_CDemonLight_01c74640.antialiasing_enabled
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970 ; 0047787b
        ;   XREF to: 0050a970 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 00477880
    POP ESI                             ; 00477883
    POP EDI                             ; 00477884
    JMP 0x004777b2                      ; 00477885
        ;   XREF to: 004777b2 (UNCONDITIONAL_JUMP)  ; LAB_004777b2

