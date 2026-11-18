; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectCPUFeatures_FUN_004f7c30(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e44e0 at 004e4588
;
; Referenced Globals:
;   uint g_CPUFamily = 0x5
;   uchar g_CPUInfoFamily = \n
;   uchar g_CPUInfoIntelCPU = \x00
;   uchar g_CPUInfoMMXSupported = \x00
;   int g_MMXSupported
;   int g_CPUModel
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_004f7c6c
;   core_mmx.c_detectMMXSupport_FUN_004f7d19
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 004f7c30
        ;   Label: core_mmx.c_detectCPUFeatures_FUN_004f7c30
    CALL core_mmx.c_detectIntelProcessor_FUN_004f7c6c ; 004f7c31
        ;   XREF to: 004f7c6c (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_004f7c6c()
    CALL core_mmx.c_detectMMXSupport_FUN_004f7d19 ; 004f7c36
        ;   XREF to: 004f7d19 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_004f7d19()
    XOR EAX,EAX                         ; 004f7c3b
    MOV AL,[0x006006a1]                 ; 004f7c3d | g_CPUInfoMMXSupported
    MOV [0x01c6e2a0],EAX                ; 004f7c42 | g_MMXSupported
    XOR EAX,EAX                         ; 004f7c47
    MOV AL,[0x00600698]                 ; 004f7c49 | g_CPUInfoFamily
    MOV [0x005fba34],EAX                ; 004f7c4e | g_CPUFamily
    MOVZX EAX,byte ptr [0x0060069c]     ; 004f7c53 | g_CPUInfoIntelCPU
    MOV [0x01c6e2a4],EAX                ; 004f7c5a | g_CPUModel
    POP EAX                             ; 004f7c5f
    RET                                 ; 004f7c60

