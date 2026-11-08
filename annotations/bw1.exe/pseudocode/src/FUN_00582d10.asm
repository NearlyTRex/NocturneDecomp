; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00582d10(int param_1)
;
;
; XREF[1]:
;   FUN_00581310 at 005813a0
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582d10
        ;   Label: FUN_00582d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00582d11
    PUSH 0x1dc8                         ; 00582d15
    PUSH 0x0                            ; 00582d1a
    PUSH EBX                            ; 00582d1c
    CALL FUN_005bfb70                   ; 00582d1d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV word ptr [EBX + 0x200],0x100    ; 00582d22
    MOV dword ptr [EBX + 0x208],0x0     ; 00582d2b
    MOV AH,byte ptr [EBX + 0x208]       ; 00582d35
    MOV word ptr [EBX + 0x204],0x1      ; 00582d3b
    OR AH,0x1                           ; 00582d44
    ADD ESP,0xc                         ; 00582d47
    MOV byte ptr [EBX + 0x208],AH       ; 00582d4a
    POP EBX                             ; 00582d50
    RET                                 ; 00582d51

