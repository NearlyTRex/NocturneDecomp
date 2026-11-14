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
;   undefined4 DAT_0061b4b4
;   undefined1 DAT_0061f7b8
;   undefined1 DAT_0061f7bc
;   undefined1 DAT_0061f7c1
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d04
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
    MOV AL,[0x0061f7c1]                 ; 0051c45d | DAT_0061f7c1
    MOV [0x01c51d00],EAX                ; 0051c462 | DAT_01c51d00
    XOR EAX,EAX                         ; 0051c467
    MOV AL,[0x0061f7b8]                 ; 0051c469 | DAT_0061f7b8
    MOV [0x0061b4b4],EAX                ; 0051c46e | DAT_0061b4b4
    MOVZX EAX,byte ptr [0x0061f7bc]     ; 0051c473 | DAT_0061f7bc
    MOV [0x01c51d04],EAX                ; 0051c47a | DAT_01c51d04
    POP EAX                             ; 0051c47f
    RET                                 ; 0051c480

