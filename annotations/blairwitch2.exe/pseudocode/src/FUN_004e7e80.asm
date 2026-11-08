; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7e80(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_00438af0
;   FUN_004e7d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7e80
        ;   Label: FUN_004e7e80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7e81
    PUSH EBX                            ; 004e7e85
    CALL FUN_00408a80                   ; 004e7e86
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004e7e8b
    LEA EAX,[EBX + 0x2b4]               ; 004e7e8e
    PUSH EAX                            ; 004e7e94
    LEA EAX,[EBX + 0x300]               ; 004e7e95
    PUSH EAX                            ; 004e7e9b
    CALL FUN_00438af0                   ; 004e7e9c
        ;   XREF to: 00438af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00438af0()
    ADD ESP,0x8                         ; 004e7ea1
    PUSH EBX                            ; 004e7ea4
    CALL FUN_004e7d50                   ; 004e7ea5
        ;   XREF to: 004e7d50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e7d50()
    ADD ESP,0x4                         ; 004e7eaa
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004e7ead
    POP EBX                             ; 004e7eb7
    RET                                 ; 004e7eb8

