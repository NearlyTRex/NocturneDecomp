; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555740(int param_1)
;
;
; XREF[1]:
;   FUN_00550580 at 005505e8
;
; Called Functions:
;   FUN_0054f0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555740
        ;   Label: FUN_00555740
    PUSH ESI                            ; 00555741
    MOV EBX,dword ptr [ESP + 0xc]       ; 00555742
    MOV EDX,dword ptr [EBX + 0x15aeb8]  ; 00555746
    PUSH EDX                            ; 0055574c
    PUSH EBX                            ; 0055574d
    MOV ESI,dword ptr [EBX + 0x15aebc]  ; 0055574e
    CALL FUN_0054f0d0                   ; 00555754
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054f0d0()
    MOV dword ptr [EBX + 0x15aec0],0x0  ; 00555759
    ADD ESP,0x8                         ; 00555763
    MOV dword ptr [EBX + 0x15aebc],ESI  ; 00555766
    POP ESI                             ; 0055576c
    POP EBX                             ; 0055576d
    RET                                 ; 0055576e

