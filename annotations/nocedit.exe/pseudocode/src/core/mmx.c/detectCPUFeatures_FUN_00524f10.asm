; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectCPUFeatures_FUN_00524f10(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b87
;
; Referenced Globals:
;   uint g_CPUFamily = 0x5
;   byte g_CPUInfoFamily = 0x96
;   byte g_CPUInfoIntelCPU = 0x0
;   byte g_CPUInfoMMXSupported = 0x0
;   int g_MMXSupported
;   int g_CPUModel
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_00524f4c
;   core_mmx.c_detectMMXSupport_FUN_00524ff9
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00524f10
        ;   Label: core_mmx.c_detectCPUFeatures_FUN_00524f10
    CALL core_mmx.c_detectIntelProcessor_FUN_00524f4c ; 00524f11
        ;   XREF to: 00524f4c (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_00524f4c()
    CALL core_mmx.c_detectMMXSupport_FUN_00524ff9 ; 00524f16
        ;   XREF to: 00524ff9 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_00524ff9()
    XOR EAX,EAX                         ; 00524f1b
    MOV AL,[0x0067d6e1]                 ; 00524f1d | g_CPUInfoMMXSupported
    MOV [0x02d05248],EAX                ; 00524f22 | g_MMXSupported
    XOR EAX,EAX                         ; 00524f27
    MOV AL,[0x0067d6d8]                 ; 00524f29 | g_CPUInfoFamily
    MOV [0x006793b0],EAX                ; 00524f2e | g_CPUFamily
    MOVZX EAX,byte ptr [0x0067d6dc]     ; 00524f33 | g_CPUInfoIntelCPU
    MOV [0x02d0524c],EAX                ; 00524f3a | g_CPUModel
    POP EAX                             ; 00524f3f
    RET                                 ; 00524f40

