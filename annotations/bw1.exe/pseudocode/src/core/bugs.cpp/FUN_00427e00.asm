; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00427e00(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004263d0 at 0042665f
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00426030 at 0042639f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427e00
        ;   Label: core_bugs.cpp_FUN_00427e00
    PUSH ESI                            ; 00427e01
    PUSH EDI                            ; 00427e02
    PUSH EBP                            ; 00427e03
    SUB ESP,0x18                        ; 00427e04
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00427e07
    MOV EDX,dword ptr [ESP + 0x30]      ; 00427e0b
    FLD float ptr [EDX]                 ; 00427e0f
    FLD float ptr [EDX + 0x4]           ; 00427e11
    FLD float ptr [EDX + 0x8]           ; 00427e14
    LEA EAX,[EBP + 0x20]                ; 00427e17
    LEA EDI,[ESP + 0xc]                 ; 00427e1a
    MOV ESI,ESP                         ; 00427e1e
    FXCH ST2                            ; 00427e20
    FSUB float ptr [EAX]                ; 00427e22
    FXCH                                ; 00427e24
    FSUB float ptr [EAX + 0x4]          ; 00427e26
    FXCH ST2                            ; 00427e29
    FSUB float ptr [EAX + 0x8]          ; 00427e2b
    FXCH                                ; 00427e2e
    FSTP float ptr [ESP]                ; 00427e30
    FXCH                                ; 00427e33
    FSTP float ptr [ESP + 0x4]          ; 00427e35
    FSTP float ptr [ESP + 0x8]          ; 00427e39
    MOVSD ES:EDI,ESI                    ; 00427e3d
    MOVSD ES:EDI,ESI                    ; 00427e3e
    MOVSD ES:EDI,ESI                    ; 00427e3f
    MOV ECX,dword ptr [EDX]             ; 00427e40
    MOV dword ptr [EAX],ECX             ; 00427e42
    MOV ECX,dword ptr [EDX + 0x4]       ; 00427e44
    MOV dword ptr [EAX + 0x4],ECX       ; 00427e47
    MOV ECX,dword ptr [EDX + 0x8]       ; 00427e4a
    MOV dword ptr [EAX + 0x8],ECX       ; 00427e4d
    MOV EDX,dword ptr [EBP + 0xc26c]    ; 00427e50
    XOR ECX,ECX                         ; 00427e56
    TEST EDX,EDX                        ; 00427e58
    JLE 0x00427ec0                      ; 00427e5a
        ;   XREF to: 00427ec0 (CONDITIONAL_JUMP)  ; LAB_00427ec0
    LEA EAX,[EBP + 0xc278]              ; 00427e5c
    FLD float ptr [EAX]                 ; 00427e62
        ;   Label: LAB_00427e62
    FLD float ptr [EAX + 0x4]           ; 00427e64
    FLD float ptr [EAX + 0x8]           ; 00427e67
    FLD float ptr [EAX + 0x18]          ; 00427e6a
    FLD float ptr [EAX + 0x1c]          ; 00427e6d
    FLD float ptr [EAX + 0x20]          ; 00427e70
    INC ECX                             ; 00427e73
    FXCH ST5                            ; 00427e74
    FSUB float ptr [ESP + 0xc]          ; 00427e76
    FXCH ST4                            ; 00427e7a
    FSUB float ptr [ESP + 0x10]         ; 00427e7c
    FXCH ST3                            ; 00427e80
    FSUB float ptr [ESP + 0x14]         ; 00427e82
    FXCH ST2                            ; 00427e86
    FSUB float ptr [ESP + 0xc]          ; 00427e88
    FXCH                                ; 00427e8c
    FSUB float ptr [ESP + 0x10]         ; 00427e8e
    FXCH ST5                            ; 00427e92
    FSUB float ptr [ESP + 0x14]         ; 00427e94
    FXCH ST4                            ; 00427e98
    FSTP float ptr [EAX]                ; 00427e9a
    FXCH ST2                            ; 00427e9c
    FSTP float ptr [EAX + 0x4]          ; 00427e9e
    FSTP float ptr [EAX + 0x8]          ; 00427ea1
    FSTP float ptr [EAX + 0x18]         ; 00427ea4
    FXCH                                ; 00427ea7
    FSTP float ptr [EAX + 0x1c]         ; 00427ea9
    FSTP float ptr [EAX + 0x20]         ; 00427eac
    MOV EBX,dword ptr [EBP + 0xc26c]    ; 00427eaf
    ADD EAX,0x40                        ; 00427eb5
    CMP ECX,EBX                         ; 00427eb8
    JL 0x00427e62                       ; 00427eba
        ;   XREF to: 00427e62 (CONDITIONAL_JUMP)  ; LAB_00427e62
    LEA EAX,[EAX]                       ; 00427ebc
    LEA EAX,[EBP + 0x19d78]             ; 00427ec0
        ;   Label: LAB_00427ec0
    FLD float ptr [EAX]                 ; 00427ec6
    FLD float ptr [EAX + 0x4]           ; 00427ec8
    FLD float ptr [EAX + 0x8]           ; 00427ecb
    FXCH ST2                            ; 00427ece
    FSUB float ptr [ESP + 0xc]          ; 00427ed0
    FXCH                                ; 00427ed4
    FSUB float ptr [ESP + 0x10]         ; 00427ed6
    FXCH ST2                            ; 00427eda
    FSUB float ptr [ESP + 0x14]         ; 00427edc
    FXCH                                ; 00427ee0
    FSTP float ptr [EAX]                ; 00427ee2
    FXCH                                ; 00427ee4
    FSTP float ptr [EAX + 0x4]          ; 00427ee6
    FSTP float ptr [EAX + 0x8]          ; 00427ee9
    LEA EAX,[EBP + 0x19d84]             ; 00427eec
    XOR ECX,ECX                         ; 00427ef2
    FLD float ptr [EAX]                 ; 00427ef4
    FLD float ptr [EAX + 0x4]           ; 00427ef6
    FLD float ptr [EAX + 0x8]           ; 00427ef9
    LEA EBX,[EBP + 0x30]                ; 00427efc
    FXCH ST2                            ; 00427eff
    FSUB float ptr [ESP + 0xc]          ; 00427f01
    FXCH                                ; 00427f05
    FSUB float ptr [ESP + 0x10]         ; 00427f07
    FXCH ST2                            ; 00427f0b
    FSUB float ptr [ESP + 0x14]         ; 00427f0d
    FXCH                                ; 00427f11
    FSTP float ptr [EAX]                ; 00427f13
    FXCH                                ; 00427f15
    FSTP float ptr [EAX + 0x4]          ; 00427f17
    FSTP float ptr [EAX + 0x8]          ; 00427f1a
    IMUL EAX,ECX,0x30                   ; 00427f1d
        ;   Label: LAB_00427f1d
    MOV EDX,EBX                         ; 00427f20
    ADD EAX,EBP                         ; 00427f22
    FLD float ptr [ESP + 0x10]          ; 00427f24
    FLD float ptr [EAX + 0x12c64]       ; 00427f28
        ;   Label: LAB_00427f28
    FSUB ST0,ST1                        ; 00427f2e
    ADD EAX,0x4                         ; 00427f30
    FSTP float ptr [EAX + 0x12c60]      ; 00427f33
    CMP EAX,EDX                         ; 00427f39
    JNZ 0x00427f28                      ; 00427f3b
        ;   XREF to: 00427f28 (CONDITIONAL_JUMP)  ; LAB_00427f28
    FSTP ST0                            ; 00427f3d
    INC ECX                             ; 00427f3f
    ADD EBX,0x30                        ; 00427f40
    CMP ECX,0xc                         ; 00427f43
    JL 0x00427f1d                       ; 00427f46
        ;   XREF to: 00427f1d (CONDITIONAL_JUMP)  ; LAB_00427f1d
    ADD ESP,0x18                        ; 00427f48
    POP EBP                             ; 00427f4b
    POP EDI                             ; 00427f4c
    POP ESI                             ; 00427f4d
    POP EBX                             ; 00427f4e
    RET                                 ; 00427f4f

