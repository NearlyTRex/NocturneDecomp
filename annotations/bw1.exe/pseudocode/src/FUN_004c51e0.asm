; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c51e0(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_00447db0
;   FUN_004688e0
;   FUN_004c5c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c51e0
        ;   Label: FUN_004c51e0
    PUSH ESI                            ; 004c51e1
    PUSH EDI                            ; 004c51e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c51e3
    PUSH EBX                            ; 004c51e7
    CALL FUN_00408850                   ; 004c51e8
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    MOV byte ptr [EBX + 0x160],0x0      ; 004c51ed
    ADD ESP,0x4                         ; 004c51f4
    MOV EDI,dword ptr [EBX + 0x158]     ; 004c51f7
    MOV dword ptr [EBX + 0x488],0x0     ; 004c51fd
    CMP EDI,0x8                         ; 004c5207
    JA 0x004c5269                       ; 004c520a
        ;   XREF to: 004c5269 (CONDITIONAL_JUMP)  ; LAB_004c5269
    JMP dword ptr [EDI*0x4 + 0x4c51bc]  ; 004c520c
    LEA EDI,[EBX + 0x184]               ; 004c5269
        ;   Label: LAB_004c5269
    PUSH EDI                            ; 004c526f
    CALL FUN_004688e0                   ; 004c5270
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    MOV AH,byte ptr [EBX + 0x160]       ; 004c5275
    ADD ESP,0x4                         ; 004c527b
    TEST AH,AH                          ; 004c527e
    JNZ 0x004c53e2                      ; 004c5280
        ;   XREF to: 004c53e2 (CONDITIONAL_JUMP)  ; LAB_004c53e2
    PUSH EBX                            ; 004c5286
    CALL FUN_004c5c60                   ; 004c5287
        ;   XREF to: 004c5c60 (UNCONDITIONAL_CALL)  ; undefined FUN_004c5c60()
    ADD ESP,0x4                         ; 004c528c
    POP EDI                             ; 004c528f
    POP ESI                             ; 004c5290
    POP EBX                             ; 004c5291
    RET                                 ; 004c5292
    LEA EDI,[EBX + 0x160]               ; 004c53e2
        ;   Label: LAB_004c53e2
    PUSH EDI                            ; 004c53e8
    LEA EDI,[EBX + 0x300]               ; 004c53e9
    PUSH EDI                            ; 004c53ef
    CALL FUN_00447db0                   ; 004c53f0
        ;   XREF to: 00447db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00447db0()
    ADD ESP,0x8                         ; 004c53f5
    PUSH EBX                            ; 004c53f8
    CALL FUN_004c5c60                   ; 004c53f9
        ;   XREF to: 004c5c60 (UNCONDITIONAL_CALL)  ; undefined FUN_004c5c60()
    ADD ESP,0x4                         ; 004c53fe
    POP EDI                             ; 004c5401
    POP ESI                             ; 004c5402
    POP EBX                             ; 004c5403
    RET                                 ; 004c5404

