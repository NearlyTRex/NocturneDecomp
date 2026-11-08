; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004724c0(int param_1)
;
;
; XREF[1]:
;   FUN_00472440 at 00472446
;
; Called Functions:
;   FUN_004614b0
;   FUN_005b7fdc
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004724c0
        ;   Label: FUN_004724c0
    PUSH EBP                            ; 004724c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004724c2
    CMP dword ptr [ESI + 0x4c],0x0      ; 004724c6
    JZ 0x0047253c                       ; 004724ca
        ;   XREF to: 0047253c (CONDITIONAL_JUMP)  ; LAB_0047253c
    PUSH EDI                            ; 004724d0
    PUSH EBX                            ; 004724d1
    XOR EDI,EDI                         ; 004724d2
    XOR EBP,EBP                         ; 004724d4
    MOV ECX,dword ptr [ESI + 0x44]      ; 004724d6
        ;   Label: LAB_004724d6
    MOV EBX,dword ptr [ESI + 0x40]      ; 004724d9
    IMUL EBX,ECX                        ; 004724dc
    MOV EAX,dword ptr [ESI + 0x48]      ; 004724df
    IMUL EAX,EBX                        ; 004724e2
    CMP EBP,EAX                         ; 004724e5
    JGE 0x0047252e                      ; 004724e7
        ;   XREF to: 0047252e (CONDITIONAL_JUMP)  ; LAB_0047252e
    MOV EBX,dword ptr [ESI + 0x4c]      ; 004724e9
    ADD EBX,EDI                         ; 004724ec
    MOV dword ptr [EBX],0x0             ; 004724ee
    MOV dword ptr [EBX + 0x4],0x0       ; 004724f4
    MOV EAX,dword ptr [EBX + 0xc]       ; 004724fb
    MOV dword ptr [EBX + 0x54],0x0      ; 004724fe
    TEST EAX,EAX                        ; 00472505
    JNZ 0x00472516                      ; 00472507
        ;   XREF to: 00472516 (CONDITIONAL_JUMP)  ; LAB_00472516
    ADD EDI,0x58                        ; 00472509
        ;   Label: LAB_00472509
    INC EBP                             ; 0047250c
    MOV dword ptr [EBX + 0xc],0x0       ; 0047250d
    JMP 0x004724d6                      ; 00472514
        ;   XREF to: 004724d6 (UNCONDITIONAL_JUMP)  ; LAB_004724d6
    JZ 0x00472509                       ; 00472516
        ;   XREF to: 00472509 (CONDITIONAL_JUMP)  ; LAB_00472509
        ;   Label: LAB_00472516
    PUSH 0x0                            ; 00472518
    PUSH EAX                            ; 0047251a
    CALL FUN_004614b0                   ; 0047251b
        ;   XREF to: 004614b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004614b0()
    ADD ESP,0x8                         ; 00472520
    PUSH EAX                            ; 00472523
    CALL FUN_005b7fdc                   ; 00472524
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00472529
    JMP 0x00472509                      ; 0047252c
        ;   XREF to: 00472509 (UNCONDITIONAL_JUMP)  ; LAB_00472509
    MOV EBX,dword ptr [ESI + 0x4c]      ; 0047252e
        ;   Label: LAB_0047252e
    PUSH EBX                            ; 00472531
    CALL FUN_005b86a0                   ; 00472532
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00472537
    POP EBX                             ; 0047253a
    POP EDI                             ; 0047253b
    MOV dword ptr [ESI + 0x4c],0x0      ; 0047253c
        ;   Label: LAB_0047253c
    POP EBP                             ; 00472543
    POP ESI                             ; 00472544
    RET                                 ; 00472545

