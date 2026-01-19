; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void core_mmx.c_detectIntelProcessor_FUN_00524f4c(void)
;
;
; XREF[2]:
;   core_mmx.c_detectCPUFeatures_FUN_00524f10 at 00524f11
;   core_mmx.c_getCPUInfo_FUN_0052500f at 00525020
;
; Referenced Globals:
;   TerminatedCString s_GenuineIntel_0067d6c0
;   undefined4 s__0067d6cc
;   int g_cpuidbasicinfo_2 = 0x1000c900
;   int g_cpuidbasicinfo_3 = -0x22000000
;   byte g_CPUInfoFamily = 0x96
;   byte g_CPUInfoModel = 0x13
;   byte g_CPUInfoStepping = 0x0
;   char g_CPUIDSupported = \x00
;   char g_CPUInfoIntelCPU = \x00
;   uint g_CPUFeatureFlags = 0x0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00524f4c
        ;   Label: core_mmx.c_detectIntelProcessor_FUN_00524f4c
    PUSH EDI                            ; 00524f4d
    PUSH EAX                            ; 00524f4e
    PUSH EBX                            ; 00524f4f
    PUSH ECX                            ; 00524f50
    PUSH EDX                            ; 00524f51
    PUSHFD                              ; 00524f52
    POP EAX                             ; 00524f53
    MOV ECX,EAX                         ; 00524f54
    XOR EAX,0x40000                     ; 00524f56
    PUSH EAX                            ; 00524f5b
    POPFD                               ; 00524f5c
    PUSHFD                              ; 00524f5d
    POP EAX                             ; 00524f5e
    XOR EAX,ECX                         ; 00524f5f
    MOV byte ptr [0x0067d6d8],0x3       ; 00524f61 | g_CPUInfoFamily
    JZ 0x00524ff2                       ; 00524f68
        ;   XREF to: 00524ff2 (CONDITIONAL_JUMP)  ; LAB_00524ff2
    PUSH ECX                            ; 00524f6e
    POPFD                               ; 00524f6f
    MOV byte ptr [0x0067d6d8],0x4       ; 00524f70 | g_CPUInfoFamily
    MOV EAX,ECX                         ; 00524f77
    XOR EAX,0x200000                    ; 00524f79
    PUSH EAX                            ; 00524f7e
    POPFD                               ; 00524f7f
    PUSHFD                              ; 00524f80
    POP EAX                             ; 00524f81
    XOR EAX,ECX                         ; 00524f82
    JZ 0x00524ff2                       ; 00524f84
        ;   XREF to: 00524ff2 (CONDITIONAL_JUMP)  ; LAB_00524ff2
    MOV byte ptr [0x0067d6db],0x1       ; 00524f86 | g_CPUIDSupported
    XOR EAX,EAX                         ; 00524f8d
    CPUID                               ; 00524f8f
    MOV dword ptr [0x0067d6cc],EBX      ; 00524f91 | s__0067d6cc
    MOV dword ptr [0x0067d6d0],EDX      ; 00524f97 | g_cpuidbasicinfo_2
    MOV dword ptr [0x0067d6d4],ECX      ; 00524f9d | g_cpuidbasicinfo_3
    MOV ESI,0x67d6cc                    ; 00524fa3 | s__0067d6cc
    MOV EDI,0x67d6c0                    ; 00524fa8 | = "GenuineIntel"
    MOV ECX,0x1                         ; 00524fad
    CMPSB.REPE ES:EDI,ESI               ; 00524fb2 | = "GenuineIntel" | s__0067d6cc
    OR ECX,ECX                          ; 00524fb4
    JNZ 0x00524ff2                      ; 00524fb6
        ;   XREF to: 00524ff2 (CONDITIONAL_JUMP)  ; LAB_00524ff2
    MOV byte ptr [0x0067d6dc],0x1       ; 00524fb8 | g_CPUInfoIntelCPU
    CMP EAX,0x1                         ; 00524fbf
    JL 0x00524ff2                       ; 00524fc2
        ;   XREF to: 00524ff2 (CONDITIONAL_JUMP)  ; LAB_00524ff2
    XOR EAX,EAX                         ; 00524fc4
    INC EAX                             ; 00524fc6
    CPUID                               ; 00524fc7
    MOV [0x0067d6da],AL                 ; 00524fc9 | g_CPUInfoStepping
    AND byte ptr [0x0067d6da],0xf       ; 00524fce | g_CPUInfoStepping
    AND AL,0xf0                         ; 00524fd5
    SHR AL,0x4                          ; 00524fd7
    MOV [0x0067d6d9],AL                 ; 00524fda | g_CPUInfoModel
    AND EAX,0xf00                       ; 00524fdf
    SHR EAX,0x8                         ; 00524fe4
    MOV [0x0067d6d8],AL                 ; 00524fe7 | g_CPUInfoFamily
    MOV dword ptr [0x0067d6dd],EDX      ; 00524fec | g_CPUFeatureFlags
    POP EDX                             ; 00524ff2
        ;   Label: LAB_00524ff2
    POP ECX                             ; 00524ff3
    POP EBX                             ; 00524ff4
    POP EAX                             ; 00524ff5
    POP EDI                             ; 00524ff6
    POP ESI                             ; 00524ff7
    RET                                 ; 00524ff8

