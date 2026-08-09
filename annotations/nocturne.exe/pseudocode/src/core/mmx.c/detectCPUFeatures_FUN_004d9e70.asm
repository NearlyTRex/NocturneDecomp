; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectCPUFeatures_FUN_004d9e70(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004c85f0 at 004c8701
;
; Referenced Globals:
;   int INT_005b7638 = 0x5
;   undefined1 DAT_005bb118
;   undefined1 DAT_005bb11c
;   undefined1 DAT_005bb121
;   int g_MMXSupported
;   undefined4 DAT_01c0394c
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_004d9eac
;   core_mmx.c_detectMMXSupport_FUN_004d9f59
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 004d9e70
        ;   Label: core_mmx.c_detectCPUFeatures_FUN_004d9e70
    CALL core_mmx.c_detectIntelProcessor_FUN_004d9eac ; 004d9e71
        ;   XREF to: 004d9eac (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_004d9eac()
    CALL core_mmx.c_detectMMXSupport_FUN_004d9f59 ; 004d9e76
        ;   XREF to: 004d9f59 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_004d9f59()
    XOR EAX,EAX                         ; 004d9e7b
    MOV AL,[0x005bb121]                 ; 004d9e7d | DAT_005bb121
    MOV [0x01c03948],EAX                ; 004d9e82 | g_MMXSupported
    XOR EAX,EAX                         ; 004d9e87
    MOV AL,[0x005bb118]                 ; 004d9e89 | DAT_005bb118
    MOV [0x005b7638],EAX                ; 004d9e8e | INT_005b7638
    MOVZX EAX,byte ptr [0x005bb11c]     ; 004d9e93 | DAT_005bb11c
    MOV [0x01c0394c],EAX                ; 004d9e9a | DAT_01c0394c
    POP EAX                             ; 004d9e9f
    RET                                 ; 004d9ea0

