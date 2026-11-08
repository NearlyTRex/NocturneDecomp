; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480e10(int *param_1)
;
;
; XREF[3]:
;   FUN_00480d40 at 00480d54
;   FUN_00483d10 at 00483d3f
;   FUN_00521630 at 00521639
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00480e10
        ;   Label: FUN_00480e10
    PUSH EBP                            ; 00480e11
    MOV EDI,dword ptr [ESP + 0xc]       ; 00480e12
    CMP dword ptr [EDI + 0x8],0x0       ; 00480e16
    JZ 0x00480e54                       ; 00480e1a
        ;   XREF to: 00480e54 (CONDITIONAL_JUMP)  ; LAB_00480e54
    PUSH ESI                            ; 00480e1c
    PUSH EBX                            ; 00480e1d
    MOV ECX,dword ptr [EDI]             ; 00480e1e
    XOR EBX,EBX                         ; 00480e20
    TEST ECX,ECX                        ; 00480e22
    JLE 0x00480e46                      ; 00480e24
        ;   XREF to: 00480e46 (CONDITIONAL_JUMP)  ; LAB_00480e46
    XOR ESI,ESI                         ; 00480e26
    MOV EAX,dword ptr [EDI + 0x8]       ; 00480e28
        ;   Label: LAB_00480e28
    ADD EAX,ESI                         ; 00480e2b
    MOV EDX,dword ptr [EAX]             ; 00480e2d
    TEST EDX,EDX                        ; 00480e2f
    JZ 0x00480e3c                       ; 00480e31
        ;   XREF to: 00480e3c (CONDITIONAL_JUMP)  ; LAB_00480e3c
    PUSH EDX                            ; 00480e33
    CALL FUN_005b86a0                   ; 00480e34
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00480e39
    INC EBX                             ; 00480e3c
        ;   Label: LAB_00480e3c
    MOV EBP,dword ptr [EDI]             ; 00480e3d
    ADD ESI,0x4                         ; 00480e3f
    CMP EBX,EBP                         ; 00480e42
    JL 0x00480e28                       ; 00480e44
        ;   XREF to: 00480e28 (CONDITIONAL_JUMP)  ; LAB_00480e28
    MOV EAX,dword ptr [EDI + 0x8]       ; 00480e46
        ;   Label: LAB_00480e46
    PUSH EAX                            ; 00480e49
    CALL FUN_005b86a0                   ; 00480e4a
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00480e4f
    POP EBX                             ; 00480e52
    POP ESI                             ; 00480e53
    MOV dword ptr [EDI + 0x8],0x0       ; 00480e54
        ;   Label: LAB_00480e54
    MOV dword ptr [EDI + 0x4],0x0       ; 00480e5b
    MOV dword ptr [EDI],0x0             ; 00480e62
    POP EBP                             ; 00480e68
    POP EDI                             ; 00480e69
    RET                                 ; 00480e6a

