; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(int param_1)
;
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 at 0041722f
;   core_bodypart.cpp_CBodyPart_onDropped_FUN_00416cc0 at 00416cd3
;
; Referenced Globals:
;   float FLOAT_0057911a = 0.5
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
;   core_box.cpp_CBox_setupCorners_FUN_0041a6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417d70
        ;   Label: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70
    SUB ESP,0x48                        ; 00417d71
    MOV EBX,dword ptr [ESP + 0x50]      ; 00417d74
    CMP dword ptr [EBX + 0x16c],0x3     ; 00417d78
    JL 0x00417d8a                       ; 00417d7f
        ;   XREF to: 00417d8a (CONDITIONAL_JUMP)  ; LAB_00417d8a
    CMP dword ptr [EBX + 0x178],0x1     ; 00417d81
    JGE 0x00417deb                      ; 00417d88
        ;   XREF to: 00417deb (CONDITIONAL_JUMP)  ; LAB_00417deb
    PUSH 0x0                            ; 00417d8a
        ;   Label: LAB_00417d8a
    PUSH 0x0                            ; 00417d8c
    PUSH EBX                            ; 00417d8e
    MOV dword ptr [EBX + 0x70],0x2      ; 00417d8f
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0 ; 00417d96
        ;   XREF to: 00415ee0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0()
    LEA EAX,[EBX + 0x160]               ; 00417d9b
    ADD ESP,0xc                         ; 00417da1
    MOV EDX,EAX                         ; 00417da4
    CMP EAX,0x2dd1184                   ; 00417da6
    JZ 0x00417dc7                       ; 00417dab
        ;   XREF to: 00417dc7 (CONDITIONAL_JUMP)  ; LAB_00417dc7
    MOV ECX,dword ptr [0x02dd1184]      ; 00417dad | DAT_02dd1184
    MOV dword ptr [EAX],ECX             ; 00417db3
    MOV ECX,dword ptr [0x02dd1188]      ; 00417db5 | DAT_02dd1188
    MOV dword ptr [EAX + 0x4],ECX       ; 00417dbb
    MOV ECX,dword ptr [0x02dd118c]      ; 00417dbe | DAT_02dd118c
    MOV dword ptr [EAX + 0x8],ECX       ; 00417dc4
    ADD EBX,0x154                       ; 00417dc7
        ;   Label: LAB_00417dc7
    CMP EBX,EDX                         ; 00417dcd
    JNZ 0x00417dd6                      ; 00417dcf
        ;   XREF to: 00417dd6 (CONDITIONAL_JUMP)  ; LAB_00417dd6
    ADD ESP,0x48                        ; 00417dd1
    POP EBX                             ; 00417dd4
    RET                                 ; 00417dd5
    MOV EAX,dword ptr [EDX]             ; 00417dd6
        ;   Label: LAB_00417dd6
    MOV dword ptr [EBX],EAX             ; 00417dd8
    MOV EAX,dword ptr [EDX + 0x4]       ; 00417dda
    MOV dword ptr [EBX + 0x4],EAX       ; 00417ddd
    MOV EAX,dword ptr [EDX + 0x8]       ; 00417de0
    MOV dword ptr [EBX + 0x8],EAX       ; 00417de3
    ADD ESP,0x48                        ; 00417de6
    POP EBX                             ; 00417de9
    RET                                 ; 00417dea
    MOV EAX,ESP                         ; 00417deb
        ;   Label: LAB_00417deb
    PUSH EAX                            ; 00417ded
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00417dee
    PUSH EBX                            ; 00417df4
    CALL dword ptr [EDX + 0x14]         ; 00417df5
    ADD ESP,0x8                         ; 00417df8
    FLD float ptr [ESP + 0x4]           ; 00417dfb
    FLD float ptr [ESP]                 ; 00417dff
    FADD float ptr [ESP + 0xc]          ; 00417e02
    FXCH                                ; 00417e06
    FADD float ptr [ESP + 0x10]         ; 00417e08
    FXCH                                ; 00417e0c
    FST float ptr [ESP + 0x24]          ; 00417e0e
    FLD float ptr [0x0057911a]          ; 00417e12 | FLOAT_0057911a
    FXCH                                ; 00417e18
    FMUL ST1                            ; 00417e1a
    FXCH ST2                            ; 00417e1c
    FST float ptr [ESP + 0x28]          ; 00417e1e
    FMUL ST1                            ; 00417e22
    LEA EAX,[ESP + 0x18]                ; 00417e24
    FLD float ptr [ESP + 0x8]           ; 00417e28
    PUSH EAX                            ; 00417e2c
    FADD float ptr [ESP + 0x18]         ; 00417e2d
    LEA EAX,[ESP + 0x34]                ; 00417e31
    FST float ptr [ESP + 0x30]          ; 00417e35
    PUSH EAX                            ; 00417e39
    FMULP ST2                           ; 00417e3a
    PUSH EBX                            ; 00417e3c
    FXCH ST2                            ; 00417e3d
    FSTP float ptr [ESP + 0x24]         ; 00417e3f
    FXCH                                ; 00417e43
    FSTP float ptr [ESP + 0x28]         ; 00417e45
    FSTP float ptr [ESP + 0x2c]         ; 00417e49
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00417e4d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00417e52
    LEA EAX,[ESP + 0x3c]                ; 00417e55
    FLD float ptr [ESP + 0xc]           ; 00417e59
    FLD float ptr [ESP + 0x10]          ; 00417e5d
    PUSH 0x40a00000                     ; 00417e61
    FLD float ptr [ESP + 0x18]          ; 00417e66
    PUSH EAX                            ; 00417e6a
    FXCH ST2                            ; 00417e6b
    FSUB float ptr [ESP + 0x8]          ; 00417e6d
    FXCH                                ; 00417e71
    FSUB float ptr [ESP + 0xc]          ; 00417e73
    FXCH ST2                            ; 00417e77
    FSUB float ptr [ESP + 0x10]         ; 00417e79
    LEA EAX,[EBX + 0x30]                ; 00417e7d
    FXCH                                ; 00417e80
    FSTP float ptr [ESP + 0x44]         ; 00417e82
    PUSH EAX                            ; 00417e86
    LEA EAX,[ESP + 0x3c]                ; 00417e87
    ADD EBX,0xcb4                       ; 00417e8b
    PUSH EAX                            ; 00417e91
    FXCH                                ; 00417e92
    FSTP float ptr [ESP + 0x50]         ; 00417e94
    PUSH EBX                            ; 00417e98
    FSTP float ptr [ESP + 0x58]         ; 00417e99
    CALL core_box.cpp_CBox_setupCorners_FUN_0041a6e0 ; 00417e9d
        ;   XREF to: 0041a6e0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_setupCorners_FUN_0041a6e0()
    ADD ESP,0x14                        ; 00417ea2
    ADD ESP,0x48                        ; 00417ea5
    POP EBX                             ; 00417ea8
    RET                                 ; 00417ea9

