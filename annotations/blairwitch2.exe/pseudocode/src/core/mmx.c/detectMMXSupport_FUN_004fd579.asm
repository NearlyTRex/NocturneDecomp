; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectMMXSupport_FUN_004fd579(void)
;
;
; XREF[2]:
;   core_mmx.c_detectCPUFeatures_FUN_004fd490 at 004fd496
;   core_mmx.c_getCPUInfo_FUN_004fd58f at 004fd5a5
;
; Referenced Globals:
;   uint g_CPUFeatureFlags = 0x0
;   uchar g_CPUInfoMMXSupported = \x00
;   undefined4 g_CameraLoadImageReadBuffer+0x3d950
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 004fd579
        ;   Label: core_mmx.c_detectMMXSupport_FUN_004fd579
    MOV EAX,[0x006182dd]                ; 004fd57a | g_CPUFeatureFlags
    TEST EAX,0x800000                   ; 004fd57f | g_CameraLoadImageReadBuffer+0x3d950
    JZ 0x004fd58d                       ; 004fd584
        ;   XREF to: 004fd58d (CONDITIONAL_JUMP)  ; LAB_004fd58d
    MOV byte ptr [0x006182e1],0x1       ; 004fd586 | g_CPUInfoMMXSupported
    POP EAX                             ; 004fd58d
        ;   Label: LAB_004fd58d
    RET                                 ; 004fd58e

