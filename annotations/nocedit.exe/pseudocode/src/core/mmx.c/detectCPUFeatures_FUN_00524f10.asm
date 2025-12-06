; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mmx.c_detectCPUFeatures_FUN_00524f10(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b87
;
; Referenced Globals:
;   uint g_CPUFamily = 0x5
;   byte g_CPUInfoFamily = 0x96
;   bool g_CPUInfoIntelCPU = False
;   undefined1 g_CPUInfoMMXSupported
;   BOOL g_MMXSupported
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
    CALL core_mmx.c_detectIntelProcessor_FUN_00524f4c ; 00524f11 | void core_mmx.c_detectIntelProcessor_FUN_00524f4c()
        ;   XREF to: 00524f4c (UNCONDITIONAL_CALL)
    CALL core_mmx.c_detectMMXSupport_FUN_00524ff9 ; 00524f16 | void core_mmx.c_detectMMXSupport_FUN_00524ff9()
        ;   XREF to: 00524ff9 (UNCONDITIONAL_CALL)
    XOR EAX,EAX                         ; 00524f1b
    MOV AL,[0x0067d6e1]                 ; 00524f1d | undefined1 g_CPUInfoMMXSupported
    MOV [0x02d05248],EAX                ; 00524f22 | BOOL g_MMXSupported
    XOR EAX,EAX                         ; 00524f27
    MOV AL,[0x0067d6d8]                 ; 00524f29 | byte g_CPUInfoFamily
    MOV [0x006793b0],EAX                ; 00524f2e | uint g_CPUFamily
    MOVZX EAX,byte ptr [0x0067d6dc]     ; 00524f33 | bool g_CPUInfoIntelCPU
    MOV [0x02d0524c],EAX                ; 00524f3a | int g_CPUModel
    POP EAX                             ; 00524f3f
    RET                                 ; 00524f40

