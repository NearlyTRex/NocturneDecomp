; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b0d0(int param_1)
;
;
; XREF[1]:
;   FUN_00535da0 at 00535e08
;
; Called Functions:
;   FUN_00534890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b0d0
        ;   Label: FUN_0053b0d0
    PUSH ESI                            ; 0053b0d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053b0d2
    MOV EDX,dword ptr [EBX + 0x15aeb8]  ; 0053b0d6
    PUSH EDX                            ; 0053b0dc
    PUSH EBX                            ; 0053b0dd
    MOV ESI,dword ptr [EBX + 0x15aebc]  ; 0053b0de
    CALL FUN_00534890                   ; 0053b0e4
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; undefined FUN_00534890()
    MOV dword ptr [EBX + 0x15aec0],0x0  ; 0053b0e9
    ADD ESP,0x8                         ; 0053b0f3
    MOV dword ptr [EBX + 0x15aebc],ESI  ; 0053b0f6
    POP ESI                             ; 0053b0fc
    POP EBX                             ; 0053b0fd
    RET                                 ; 0053b0fe

