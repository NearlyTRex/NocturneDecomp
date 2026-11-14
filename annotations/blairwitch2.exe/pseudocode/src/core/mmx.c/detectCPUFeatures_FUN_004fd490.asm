; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectCPUFeatures_FUN_004fd490(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e4768
;
; Referenced Globals:
;   undefined4 DAT_006141d4
;   undefined1 DAT_006182d8
;   undefined1 DAT_006182dc
;   undefined1 DAT_006182e1
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b44
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_004fd4cc
;   core_mmx.c_detectMMXSupport_FUN_004fd579
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 004fd490
        ;   Label: core_mmx.c_detectCPUFeatures_FUN_004fd490
    CALL core_mmx.c_detectIntelProcessor_FUN_004fd4cc ; 004fd491
        ;   XREF to: 004fd4cc (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_004fd4cc()
    CALL core_mmx.c_detectMMXSupport_FUN_004fd579 ; 004fd496
        ;   XREF to: 004fd579 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_004fd579()
    XOR EAX,EAX                         ; 004fd49b
    MOV AL,[0x006182e1]                 ; 004fd49d | DAT_006182e1
    MOV [0x01c38b40],EAX                ; 004fd4a2 | DAT_01c38b40
    XOR EAX,EAX                         ; 004fd4a7
    MOV AL,[0x006182d8]                 ; 004fd4a9 | DAT_006182d8
    MOV [0x006141d4],EAX                ; 004fd4ae | DAT_006141d4
    MOVZX EAX,byte ptr [0x006182dc]     ; 004fd4b3 | DAT_006182dc
    MOV [0x01c38b44],EAX                ; 004fd4ba | DAT_01c38b44
    POP EAX                             ; 004fd4bf
    RET                                 ; 004fd4c0

