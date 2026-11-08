; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004328c0(int param_1)
;
;
; XREF[8]:
;   FUN_00415910 at 004159a3
;   FUN_0041d540 at 0041d54c
;   FUN_0042d5f0 at 0042d68b
;   FUN_004319e0 at 00431c14
;   FUN_00445cb0 at 00445f36
;   FUN_004472a0 at 004472ac
;   FUN_004d9260 at 004d9e85
;   FUN_00531da0 at 00531e49
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004328c0
        ;   Label: FUN_004328c0
    PUSH ESI                            ; 004328c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004328c2
    XOR EBX,EBX                         ; 004328c6
    PUSH 0x0                            ; 004328c8
        ;   Label: LAB_004328c8
    PUSH EBX                            ; 004328ca
    MOV EAX,dword ptr [ESI + 0x154]     ; 004328cb
    PUSH ESI                            ; 004328d1
    INC EBX                             ; 004328d2
    CALL dword ptr [EAX + 0x128]        ; 004328d3
    ADD ESP,0xc                         ; 004328d9
    CMP EBX,0x2                         ; 004328dc
    JL 0x004328c8                       ; 004328df
        ;   XREF to: 004328c8 (CONDITIONAL_JUMP)  ; LAB_004328c8
    POP ESI                             ; 004328e1
    POP EBX                             ; 004328e2
    RET                                 ; 004328e3

