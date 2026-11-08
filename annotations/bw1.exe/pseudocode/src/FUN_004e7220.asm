; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e7220(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004e72e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7220
        ;   Label: FUN_004e7220
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7221
    PUSH EBX                            ; 004e7225
    CALL FUN_004e72e0                   ; 004e7226
        ;   XREF to: 004e72e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e72e0()
    ADD ESP,0x4                         ; 004e722b
    MOV EAX,EBX                         ; 004e722e
    POP EBX                             ; 004e7230
    RET                                 ; 004e7231

