; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_FUN_00515db0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01c74640
;   undefined4 DAT_01c74740
;   undefined4 DAT_01c74744
;   undefined4 DAT_01c74748
;   undefined4 DAT_01c7474c
;   undefined4 DAT_01c74750
;   undefined4 DAT_01c74778
;   undefined4 DAT_01c762f4
;   undefined4 DAT_01c762fc
;   undefined4 DAT_01c76310
;   undefined4 DAT_01e57284
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

    PUSH EBX                            ; 00515db0
        ;   Label: core_shotgun.cpp_FUN_00515db0
    PUSH EBP                            ; 00515db1
    SUB ESP,0x18                        ; 00515db2
    MOV EBX,dword ptr [ESP + 0x24]      ; 00515db5
    CMP dword ptr [EBX + 0x574],0x0     ; 00515db9
    JNZ 0x00515ddf                      ; 00515dc0
        ;   XREF to: 00515ddf (CONDITIONAL_JUMP)  ; LAB_00515ddf
    PUSH dword ptr [ESP + 0x28]         ; 00515dc2
        ;   Label: LAB_00515dc2
    PUSH EBX                            ; 00515dc6
    MOV dword ptr [EBX + 0x574],0x0     ; 00515dc7
    CALL core_weapon.cpp_CWeapon_process_FUN_00554030 ; 00515dd1
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_process_FUN_00554030()
    ADD ESP,0x8                         ; 00515dd6
    ADD ESP,0x18                        ; 00515dd9
    POP EBP                             ; 00515ddc
    POP EBX                             ; 00515ddd
    RET                                 ; 00515dde
    PUSH EDI                            ; 00515ddf
        ;   Label: LAB_00515ddf
    PUSH ESI                            ; 00515de0
    LEA EAX,[ESP + 0x14]                ; 00515de1
    PUSH EAX                            ; 00515de5
    MOV ECX,0x1                         ; 00515de6
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00515deb
    PUSH EBX                            ; 00515df1
    MOV dword ptr [0x01c762f4],ECX      ; 00515df2 | DAT_01c762f4
    CALL dword ptr [EDX + 0xd8]         ; 00515df8
    ADD ESP,0x8                         ; 00515dfe
    PUSH EAX                            ; 00515e01
    LEA EAX,[ESP + 0xc]                 ; 00515e02
    PUSH EAX                            ; 00515e06
    PUSH EBX                            ; 00515e07
    XOR ESI,ESI                         ; 00515e08
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00515e0a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    LEA EAX,[ESP + 0x14]                ; 00515e0f
    ADD ESP,0xc                         ; 00515e13
    MOV dword ptr [0x01c762fc],ESI      ; 00515e16 | DAT_01c762fc
    CMP EAX,0x1c74744                   ; 00515e1c
    JZ 0x00515e3e                       ; 00515e21
        ;   XREF to: 00515e3e (CONDITIONAL_JUMP)  ; LAB_00515e3e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00515e23
    MOV [0x01c74744],EAX                ; 00515e27 | DAT_01c74744
    MOV EAX,dword ptr [ESP + 0xc]       ; 00515e2c
    MOV [0x01c74748],EAX                ; 00515e30 | DAT_01c74748
    MOV EAX,dword ptr [ESP + 0x10]      ; 00515e35
    MOV [0x01c7474c],EAX                ; 00515e39 | DAT_01c7474c
    LEA EAX,[EBX + 0x30]                ; 00515e3e
        ;   Label: LAB_00515e3e
    PUSH EAX                            ; 00515e41
    PUSH 0x1c74750                      ; 00515e42 | DAT_01c74750
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00515e47
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 00515e4c
    MOV EDI,0x42e00000                  ; 00515e4f
    PUSH 0x3f800000                     ; 00515e54
    FLD float ptr [EBX + 0x578]         ; 00515e59
    PUSH 0x1c74640                      ; 00515e5f | DAT_01c74640
    FSTP float ptr [0x01c74740]         ; 00515e64 | DAT_01c74740
    MOV dword ptr [0x01c74778],EDI      ; 00515e6a | DAT_01c74778
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080 ; 00515e70
        ;   XREF to: 00452080 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080()
    ADD ESP,0x8                         ; 00515e75
    PUSH 0x1c74640                      ; 00515e78 | DAT_01c74640
    MOV EAX,[0x005be368]                ; 00515e7d | DAT_005be368
    XOR EBP,EBP                         ; 00515e82
    PUSH EAX                            ; 00515e84 | DAT_01e57284
    MOV dword ptr [0x01c76310],EBP      ; 00515e85 | DAT_01c76310
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970 ; 00515e8b
        ;   XREF to: 0050a970 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970()
    ADD ESP,0x8                         ; 00515e90
    POP ESI                             ; 00515e93
    POP EDI                             ; 00515e94
    JMP 0x00515dc2                      ; 00515e95
        ;   XREF to: 00515dc2 (UNCONDITIONAL_JUMP)  ; LAB_00515dc2

