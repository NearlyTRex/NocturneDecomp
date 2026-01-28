; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_mmx_c_getCPUInfo_FUN_0052500f(SCPUInfo *cpu_info)
;
; Parameters:
; SCPUInfo *       Stack[0x4]:4   cpu_info
;
; Referenced Globals:
;   byte g_CPUInfoFamily = 0x96
;   byte g_CPUInfoModel = 0x13
;   byte g_CPUInfoStepping = 0x0
;   byte g_CPUInfoIntelCPU = 0x0
;   byte g_CPUInfoMMXSupported = 0x0
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_00524f4c
;   core_mmx.c_detectMMXSupport_FUN_00524ff9
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0052500f
        ;   Label: core_mmx.c_getCPUInfo_FUN_0052500f
    MOV EBP,ESP                         ; 00525010
    PUSH EDI                            ; 00525012
    MOV EDI,dword ptr [EBP + 0x8]       ; 00525013
    MOV EAX,0x0                         ; 00525016
    CMP EDI,0x0                         ; 0052501b
    JZ 0x00525060                       ; 0052501e
        ;   XREF to: 00525060 (CONDITIONAL_JUMP)  ; LAB_00525060
    CALL core_mmx.c_detectIntelProcessor_FUN_00524f4c ; 00525020
        ;   XREF to: 00524f4c (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_00524f4c()
    CALL core_mmx.c_detectMMXSupport_FUN_00524ff9 ; 00525025
        ;   XREF to: 00524ff9 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_00524ff9()
    MOVZX EAX,byte ptr [0x0067d6d8]     ; 0052502a | g_CPUInfoFamily
    MOV dword ptr [EDI],EAX             ; 00525031
    MOVZX EAX,byte ptr [0x0067d6d9]     ; 00525033 | g_CPUInfoModel
    MOV dword ptr [EDI + 0x4],EAX       ; 0052503a
    MOVZX EAX,byte ptr [0x0067d6da]     ; 0052503d | g_CPUInfoStepping
    MOV dword ptr [EDI + 0x8],EAX       ; 00525044
    MOVZX EAX,byte ptr [0x0067d6dc]     ; 00525047 | g_CPUInfoIntelCPU
    MOV dword ptr [EDI + 0xc],EAX       ; 0052504e
    MOVZX EAX,byte ptr [0x0067d6e1]     ; 00525051 | g_CPUInfoMMXSupported
    MOV dword ptr [EDI + 0x10],EAX      ; 00525058
    MOV EAX,0x1                         ; 0052505b
    POP EDI                             ; 00525060
        ;   Label: LAB_00525060
    LEAVE                               ; 00525061
    RET                                 ; 00525062

