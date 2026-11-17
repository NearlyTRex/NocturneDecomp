; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectCPUFeatures_FUN_0051c450(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_005032a0 at 00503348
;
; Referenced Globals:
;   uint g_UINT_0061b4b4 = 0x5
;   uchar g_UCHAR_0061f7b8 = \x00
;   uchar g_UCHAR_0061f7bc = \x00
;   uchar g_UCHAR_0061f7c1 = \x00
;   int g_INT_01c51d00
;   int g_INT_01c51d04
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_0051c48c
;   core_mmx.c_detectMMXSupport_FUN_0051c539
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0051c450
        ;   Label: core_mmx.c_detectCPUFeatures_FUN_0051c450
    CALL core_mmx.c_detectIntelProcessor_FUN_0051c48c ; 0051c451
        ;   XREF to: 0051c48c (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_0051c48c()
    CALL core_mmx.c_detectMMXSupport_FUN_0051c539 ; 0051c456
        ;   XREF to: 0051c539 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_0051c539()
    XOR EAX,EAX                         ; 0051c45b
    MOV AL,[0x0061f7c1]                 ; 0051c45d | g_UCHAR_0061f7c1
    MOV [0x01c51d00],EAX                ; 0051c462 | g_INT_01c51d00
    XOR EAX,EAX                         ; 0051c467
    MOV AL,[0x0061f7b8]                 ; 0051c469 | g_UCHAR_0061f7b8
    MOV [0x0061b4b4],EAX                ; 0051c46e | g_UINT_0061b4b4
    MOVZX EAX,byte ptr [0x0061f7bc]     ; 0051c473 | g_UCHAR_0061f7bc
    MOV [0x01c51d04],EAX                ; 0051c47a | g_INT_01c51d04
    POP EAX                             ; 0051c47f
    RET                                 ; 0051c480

