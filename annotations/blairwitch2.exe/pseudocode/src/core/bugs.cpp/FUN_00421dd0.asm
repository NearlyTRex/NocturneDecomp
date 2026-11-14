; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00421dd0(int param_1,float *param_2)
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
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004203a0 at 0042062f
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00420000 at 0042036f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421dd0
        ;   Label: core_bugs.cpp_FUN_00421dd0
    PUSH ESI                            ; 00421dd1
    PUSH EDI                            ; 00421dd2
    PUSH EBP                            ; 00421dd3
    SUB ESP,0x18                        ; 00421dd4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00421dd7
    MOV EDX,dword ptr [ESP + 0x30]      ; 00421ddb
    FLD float ptr [EDX]                 ; 00421ddf
    FLD float ptr [EDX + 0x4]           ; 00421de1
    FLD float ptr [EDX + 0x8]           ; 00421de4
    LEA EAX,[EBP + 0x20]                ; 00421de7
    LEA EDI,[ESP + 0xc]                 ; 00421dea
    MOV ESI,ESP                         ; 00421dee
    FXCH ST2                            ; 00421df0
    FSUB float ptr [EAX]                ; 00421df2
    FXCH                                ; 00421df4
    FSUB float ptr [EAX + 0x4]          ; 00421df6
    FXCH ST2                            ; 00421df9
    FSUB float ptr [EAX + 0x8]          ; 00421dfb
    FXCH                                ; 00421dfe
    FSTP float ptr [ESP]                ; 00421e00
    FXCH                                ; 00421e03
    FSTP float ptr [ESP + 0x4]          ; 00421e05
    FSTP float ptr [ESP + 0x8]          ; 00421e09
    MOVSD ES:EDI,ESI                    ; 00421e0d
    MOVSD ES:EDI,ESI                    ; 00421e0e
    MOVSD ES:EDI,ESI                    ; 00421e0f
    MOV ECX,dword ptr [EDX]             ; 00421e10
    MOV dword ptr [EAX],ECX             ; 00421e12
    MOV ECX,dword ptr [EDX + 0x4]       ; 00421e14
    MOV dword ptr [EAX + 0x4],ECX       ; 00421e17
    MOV ECX,dword ptr [EDX + 0x8]       ; 00421e1a
    MOV dword ptr [EAX + 0x8],ECX       ; 00421e1d
    MOV EDX,dword ptr [EBP + 0x10afc]   ; 00421e20
    XOR ECX,ECX                         ; 00421e26
    TEST EDX,EDX                        ; 00421e28
    JLE 0x00421e90                      ; 00421e2a
        ;   XREF to: 00421e90 (CONDITIONAL_JUMP)  ; LAB_00421e90
    LEA EAX,[EBP + 0x10b08]             ; 00421e2c
    FLD float ptr [EAX]                 ; 00421e32
        ;   Label: LAB_00421e32
    FLD float ptr [EAX + 0x4]           ; 00421e34
    FLD float ptr [EAX + 0x8]           ; 00421e37
    FLD float ptr [EAX + 0x18]          ; 00421e3a
    FLD float ptr [EAX + 0x1c]          ; 00421e3d
    FLD float ptr [EAX + 0x20]          ; 00421e40
    INC ECX                             ; 00421e43
    FXCH ST5                            ; 00421e44
    FSUB float ptr [ESP + 0xc]          ; 00421e46
    FXCH ST4                            ; 00421e4a
    FSUB float ptr [ESP + 0x10]         ; 00421e4c
    FXCH ST3                            ; 00421e50
    FSUB float ptr [ESP + 0x14]         ; 00421e52
    FXCH ST2                            ; 00421e56
    FSUB float ptr [ESP + 0xc]          ; 00421e58
    FXCH                                ; 00421e5c
    FSUB float ptr [ESP + 0x10]         ; 00421e5e
    FXCH ST5                            ; 00421e62
    FSUB float ptr [ESP + 0x14]         ; 00421e64
    FXCH ST4                            ; 00421e68
    FSTP float ptr [EAX]                ; 00421e6a
    FXCH ST2                            ; 00421e6c
    FSTP float ptr [EAX + 0x4]          ; 00421e6e
    FSTP float ptr [EAX + 0x8]          ; 00421e71
    FSTP float ptr [EAX + 0x18]         ; 00421e74
    FXCH                                ; 00421e77
    FSTP float ptr [EAX + 0x1c]         ; 00421e79
    FSTP float ptr [EAX + 0x20]         ; 00421e7c
    MOV EBX,dword ptr [EBP + 0x10afc]   ; 00421e7f
    ADD EAX,0x40                        ; 00421e85
    CMP ECX,EBX                         ; 00421e88
    JL 0x00421e32                       ; 00421e8a
        ;   XREF to: 00421e32 (CONDITIONAL_JUMP)  ; LAB_00421e32
    LEA EAX,[EAX]                       ; 00421e8c
    LEA EAX,[EBP + 0x1e608]             ; 00421e90
        ;   Label: LAB_00421e90
    FLD float ptr [EAX]                 ; 00421e96
    FLD float ptr [EAX + 0x4]           ; 00421e98
    FLD float ptr [EAX + 0x8]           ; 00421e9b
    FXCH ST2                            ; 00421e9e
    FSUB float ptr [ESP + 0xc]          ; 00421ea0
    FXCH                                ; 00421ea4
    FSUB float ptr [ESP + 0x10]         ; 00421ea6
    FXCH ST2                            ; 00421eaa
    FSUB float ptr [ESP + 0x14]         ; 00421eac
    FXCH                                ; 00421eb0
    FSTP float ptr [EAX]                ; 00421eb2
    FXCH                                ; 00421eb4
    FSTP float ptr [EAX + 0x4]          ; 00421eb6
    FSTP float ptr [EAX + 0x8]          ; 00421eb9
    LEA EAX,[EBP + 0x1e614]             ; 00421ebc
    XOR ECX,ECX                         ; 00421ec2
    FLD float ptr [EAX]                 ; 00421ec4
    FLD float ptr [EAX + 0x4]           ; 00421ec6
    FLD float ptr [EAX + 0x8]           ; 00421ec9
    LEA EBX,[EBP + 0x30]                ; 00421ecc
    FXCH ST2                            ; 00421ecf
    FSUB float ptr [ESP + 0xc]          ; 00421ed1
    FXCH                                ; 00421ed5
    FSUB float ptr [ESP + 0x10]         ; 00421ed7
    FXCH ST2                            ; 00421edb
    FSUB float ptr [ESP + 0x14]         ; 00421edd
    FXCH                                ; 00421ee1
    FSTP float ptr [EAX]                ; 00421ee3
    FXCH                                ; 00421ee5
    FSTP float ptr [EAX + 0x4]          ; 00421ee7
    FSTP float ptr [EAX + 0x8]          ; 00421eea
    IMUL EAX,ECX,0x30                   ; 00421eed
        ;   Label: LAB_00421eed
    MOV EDX,EBX                         ; 00421ef0
    ADD EAX,EBP                         ; 00421ef2
    FLD float ptr [ESP + 0x10]          ; 00421ef4
    FLD float ptr [EAX + 0x174f4]       ; 00421ef8
        ;   Label: LAB_00421ef8
    FSUB ST0,ST1                        ; 00421efe
    ADD EAX,0x4                         ; 00421f00
    FSTP float ptr [EAX + 0x174f0]      ; 00421f03
    CMP EAX,EDX                         ; 00421f09
    JNZ 0x00421ef8                      ; 00421f0b
        ;   XREF to: 00421ef8 (CONDITIONAL_JUMP)  ; LAB_00421ef8
    FSTP ST0                            ; 00421f0d
    INC ECX                             ; 00421f0f
    ADD EBX,0x30                        ; 00421f10
    CMP ECX,0xc                         ; 00421f13
    JL 0x00421eed                       ; 00421f16
        ;   XREF to: 00421eed (CONDITIONAL_JUMP)  ; LAB_00421eed
    ADD ESP,0x18                        ; 00421f18
    POP EBP                             ; 00421f1b
    POP EDI                             ; 00421f1c
    POP ESI                             ; 00421f1d
    POP EBX                             ; 00421f1e
    RET                                 ; 00421f1f

