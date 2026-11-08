; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4870(int param_1)
;
;
; XREF[1]:
;   FUN_004f6de0 at 004f6e72
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d22c2c
;   undefined4 DAT_01d22c6c
;   undefined4 DAT_01d22c9c
;
; Called Functions:
;   FUN_0053b1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4870
        ;   Label: FUN_004c4870
    PUSH ESI                            ; 004c4871
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c4872
    MOV ECX,dword ptr [EAX + 0x248]     ; 004c4876
    PUSH ECX                            ; 004c487c
    MOV EBX,dword ptr [0x00603b28]      ; 004c487d | DAT_00603b28
    MOV EDX,0x1                         ; 004c4883
    PUSH EBX                            ; 004c4888
    XOR ESI,ESI                         ; 004c4889
    MOV dword ptr [0x01d22c9c],EDX      ; 004c488b | DAT_01d22c9c
    CALL FUN_0053b1c0                   ; 004c4891
        ;   XREF to: 0053b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b1c0()
    ADD ESP,0x8                         ; 004c4896
    MOV dword ptr [0x01d22c2c],ESI      ; 004c4899 | DAT_01d22c2c
    MOV dword ptr [0x01d22c6c],ESI      ; 004c489f | DAT_01d22c6c
    POP ESI                             ; 004c48a5
    POP EBX                             ; 004c48a6
    RET                                 ; 004c48a7

