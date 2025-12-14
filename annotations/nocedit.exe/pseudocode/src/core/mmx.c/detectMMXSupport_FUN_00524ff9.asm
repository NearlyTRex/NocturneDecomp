; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mmx.c_detectMMXSupport_FUN_00524ff9(void)
;
;
; XREF[2]:
;   core_mmx.c_detectCPUFeatures_FUN_00524f10 at 00524f16
;   core_mmx.c_getCPUInfo_FUN_0052500f at 00525025
;
; Referenced Globals:
;   uint g_CPUFeatureFlags = 0x0
;   undefined1 g_CPUInfoMMXSupported
;   undefined4 DAT_00800000
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00524ff9
        ;   Label: core_mmx.c_detectMMXSupport_FUN_00524ff9
    MOV EAX,[0x0067d6dd]                ; 00524ffa | g_CPUFeatureFlags
    TEST EAX,0x800000                   ; 00524fff | DAT_00800000
    JZ 0x0052500d                       ; 00525004
        ;   XREF to: 0052500d (CONDITIONAL_JUMP)  ; LAB_0052500d
    MOV byte ptr [0x0067d6e1],0x1       ; 00525006 | g_CPUInfoMMXSupported
    POP EAX                             ; 0052500d
        ;   Label: LAB_0052500d
    RET                                 ; 0052500e

