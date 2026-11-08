; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058be70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   undefined4 DAT_01d82088
;
; Called Functions:
;   FUN_0042e220
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058be70
        ;   Label: FUN_0058be70
    ADD EAX,0x158                       ; 0058be74
    PUSH EAX                            ; 0058be79
    CALL FUN_004fc070                   ; 0058be7a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058be7f
    ADD ESP,0x4                         ; 0058be82
    CMP EAX,0xf                         ; 0058be85
    JNZ 0x0058be9b                      ; 0058be88
        ;   XREF to: 0058be9b (CONDITIONAL_JUMP)  ; LAB_0058be9b
    MOV EAX,[0x00600530]                ; 0058be8a | DAT_00600530
    CMP dword ptr [EAX + 0x1008],0x0    ; 0058be8f | DAT_01d82088
    JNZ 0x0058be9b                      ; 0058be96
        ;   XREF to: 0058be9b (CONDITIONAL_JUMP)  ; LAB_0058be9b
    XOR EAX,EAX                         ; 0058be98
        ;   Label: LAB_0058be98
    RET                                 ; 0058be9a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0058be9b
        ;   Label: LAB_0058be9b
    PUSH ECX                            ; 0058be9f
    CALL FUN_0042e220                   ; 0058bea0
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e220()
    ADD ESP,0x4                         ; 0058bea5
    RET                                 ; 0058bea8

