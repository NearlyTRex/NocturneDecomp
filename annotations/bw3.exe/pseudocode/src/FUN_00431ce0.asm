; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00431ce0(int param_1)
;
;
; XREF[9]:
;   FUN_00410110 at 004101a3
;   FUN_00419550 at 0041955c
;   FUN_0042c0d0 at 0042c16b
;   FUN_00430d60 at 00430fe7
;   FUN_00442a20 at 00442d5b
;   FUN_00444110 at 0044411c
;   FUN_004c07b0 at 004c16c5
;   FUN_005099e0 at 00509a89
;   FUN_00599d60 at 00599df3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431ce0
        ;   Label: FUN_00431ce0
    PUSH ESI                            ; 00431ce1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00431ce2
    XOR EBX,EBX                         ; 00431ce6
    PUSH 0x0                            ; 00431ce8
        ;   Label: LAB_00431ce8
    PUSH EBX                            ; 00431cea
    MOV EAX,dword ptr [ESI + 0x154]     ; 00431ceb
    PUSH ESI                            ; 00431cf1
    INC EBX                             ; 00431cf2
    CALL dword ptr [EAX + 0x128]        ; 00431cf3
    ADD ESP,0xc                         ; 00431cf9
    CMP EBX,0x2                         ; 00431cfc
    JL 0x00431ce8                       ; 00431cff
        ;   XREF to: 00431ce8 (CONDITIONAL_JUMP)  ; LAB_00431ce8
    POP ESI                             ; 00431d01
    POP EBX                             ; 00431d02
    RET                                 ; 00431d03

